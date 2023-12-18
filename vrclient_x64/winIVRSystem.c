/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stdint.h>

#include "vrclient_private.h"

#include "flatapi.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetWindowBounds, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetRecommendedRenderTargetSize, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetEyeOutputViewport, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetProjectionMatrix, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetProjectionRaw, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_ComputeDistortion, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetEyeToHeadTransform, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetTimeSinceLastVsync, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetD3D9AdapterIndex, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetDXGIOutputInfo, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_AttachToWindow, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetDeviceToAbsoluteTrackingPose, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_ResetSeatedZeroPose, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_LoadRenderModel, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_FreeRenderModel, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetTrackedDeviceClass, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_IsTrackedDeviceConnected, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetBoolTrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetFloatTrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetInt32TrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetUint64TrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetMatrix34TrackedDeviceProperty, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetStringTrackedDeviceProperty, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetPropErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_PollNextEvent, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_PollNextEventWithPose, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetEventTypeNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetHiddenAreaMesh, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetControllerState, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetControllerStateWithPose, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_TriggerHapticPulse, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetButtonIdNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetControllerAxisTypeNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_HandleControllerOverlayInteractionAsMouse, 32)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_CaptureInputFocus, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_ReleaseInputFocus, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_IsInputFocusCapturedByAnotherProcess, 4)

void __thiscall winIVRSystem_IVRSystem_003_GetWindowBounds(struct w_steam_iface *_this, int32_t *pnX, int32_t *pnY, uint32_t *pnWidth, uint32_t *pnHeight)
{
    struct IVRSystem_IVRSystem_003_GetWindowBounds_params params =
    {
        .linux_side = _this->u_iface,
        .pnX = pnX,
        .pnY = pnY,
        .pnWidth = pnWidth,
        .pnHeight = pnHeight,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_003_GetWindowBounds, &params );
}

void __thiscall winIVRSystem_IVRSystem_003_GetRecommendedRenderTargetSize(struct w_steam_iface *_this, uint32_t *pnWidth, uint32_t *pnHeight)
{
    struct IVRSystem_IVRSystem_003_GetRecommendedRenderTargetSize_params params =
    {
        .linux_side = _this->u_iface,
        .pnWidth = pnWidth,
        .pnHeight = pnHeight,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_003_GetRecommendedRenderTargetSize, &params );
}

void __thiscall winIVRSystem_IVRSystem_003_GetEyeOutputViewport(struct w_steam_iface *_this, uint32_t eEye, uint32_t *pnX, uint32_t *pnY, uint32_t *pnWidth, uint32_t *pnHeight)
{
    struct IVRSystem_IVRSystem_003_GetEyeOutputViewport_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pnX = pnX,
        .pnY = pnY,
        .pnWidth = pnWidth,
        .pnHeight = pnHeight,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_003_GetEyeOutputViewport, &params );
}

HmdMatrix44_t * __thiscall winIVRSystem_IVRSystem_003_GetProjectionMatrix(struct w_steam_iface *_this, HmdMatrix44_t *_ret, uint32_t eEye, float fNearZ, float fFarZ, uint32_t eProjType)
{
    struct IVRSystem_IVRSystem_003_GetProjectionMatrix_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
        .fNearZ = fNearZ,
        .fFarZ = fFarZ,
        .eProjType = eProjType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_003_GetProjectionMatrix, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_003_GetProjectionRaw(struct w_steam_iface *_this, uint32_t eEye, float *pfLeft, float *pfRight, float *pfTop, float *pfBottom)
{
    struct IVRSystem_IVRSystem_003_GetProjectionRaw_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pfLeft = pfLeft,
        .pfRight = pfRight,
        .pfTop = pfTop,
        .pfBottom = pfBottom,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_003_GetProjectionRaw, &params );
}

DistortionCoordinates_t * __thiscall winIVRSystem_IVRSystem_003_ComputeDistortion(struct w_steam_iface *_this, DistortionCoordinates_t *_ret, uint32_t eEye, float fU, float fV)
{
    struct IVRSystem_IVRSystem_003_ComputeDistortion_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
        .fU = fU,
        .fV = fV,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_003_ComputeDistortion, &params );
    return params._ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_003_GetEyeToHeadTransform(struct w_steam_iface *_this, HmdMatrix34_t *_ret, uint32_t eEye)
{
    struct IVRSystem_IVRSystem_003_GetEyeToHeadTransform_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_003_GetEyeToHeadTransform, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_003_GetTimeSinceLastVsync(struct w_steam_iface *_this, float *pfSecondsSinceLastVsync, uint64_t *pulFrameCounter)
{
    struct IVRSystem_IVRSystem_003_GetTimeSinceLastVsync_params params =
    {
        .linux_side = _this->u_iface,
        .pfSecondsSinceLastVsync = pfSecondsSinceLastVsync,
        .pulFrameCounter = pulFrameCounter,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_003_GetTimeSinceLastVsync, &params );
    return params._ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_003_GetD3D9AdapterIndex(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_003_GetD3D9AdapterIndex_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_003_GetD3D9AdapterIndex, &params );
    return params._ret;
}

extern void __thiscall winIVRSystem_IVRSystem_003_GetDXGIOutputInfo(struct w_steam_iface *_this, int32_t *pnAdapterIndex, int32_t *pnAdapterOutputIndex);

int8_t __thiscall winIVRSystem_IVRSystem_003_AttachToWindow(struct w_steam_iface *_this, void *hWnd)
{
    struct IVRSystem_IVRSystem_003_AttachToWindow_params params =
    {
        .linux_side = _this->u_iface,
        .hWnd = hWnd,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_003_AttachToWindow, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_003_GetDeviceToAbsoluteTrackingPose(struct w_steam_iface *_this, uint32_t eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t *pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    struct IVRSystem_IVRSystem_003_GetDeviceToAbsoluteTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .fPredictedSecondsToPhotonsFromNow = fPredictedSecondsToPhotonsFromNow,
        .pTrackedDevicePoseArray = pTrackedDevicePoseArray,
        .unTrackedDevicePoseArrayCount = unTrackedDevicePoseArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_003_GetDeviceToAbsoluteTrackingPose, &params );
}

void __thiscall winIVRSystem_IVRSystem_003_ResetSeatedZeroPose(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_003_ResetSeatedZeroPose_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_003_ResetSeatedZeroPose, &params );
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_003_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    struct IVRSystem_IVRSystem_003_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_003_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_003_LoadRenderModel(struct w_steam_iface *_this, const char *pchRenderModelName, w_RenderModel_t_090 *pRenderModel)
{
    struct IVRSystem_IVRSystem_003_LoadRenderModel_params params =
    {
        .linux_side = _this->u_iface,
        .pchRenderModelName = pchRenderModelName,
        .pRenderModel = pRenderModel,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_003_LoadRenderModel, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_003_FreeRenderModel(struct w_steam_iface *_this, w_RenderModel_t_090 *pRenderModel)
{
    struct IVRSystem_IVRSystem_003_FreeRenderModel_params params =
    {
        .linux_side = _this->u_iface,
        .pRenderModel = pRenderModel,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_003_FreeRenderModel, &params );
}

uint32_t __thiscall winIVRSystem_IVRSystem_003_GetTrackedDeviceClass(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_003_GetTrackedDeviceClass_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_003_GetTrackedDeviceClass, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_003_IsTrackedDeviceConnected(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_003_IsTrackedDeviceConnected_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_003_IsTrackedDeviceConnected, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_003_GetBoolTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_003_GetBoolTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_003_GetBoolTrackedDeviceProperty, &params );
    return params._ret;
}

float __thiscall winIVRSystem_IVRSystem_003_GetFloatTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_003_GetFloatTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_003_GetFloatTrackedDeviceProperty, &params );
    return params._ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_003_GetInt32TrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_003_GetInt32TrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_003_GetInt32TrackedDeviceProperty, &params );
    return params._ret;
}

uint64_t __thiscall winIVRSystem_IVRSystem_003_GetUint64TrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_003_GetUint64TrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_003_GetUint64TrackedDeviceProperty, &params );
    return params._ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_003_GetMatrix34TrackedDeviceProperty(struct w_steam_iface *_this, HmdMatrix34_t *_ret, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_003_GetMatrix34TrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_003_GetMatrix34TrackedDeviceProperty, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_003_GetStringTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, char *pchValue, uint32_t unBufferSize, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_003_GetStringTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pchValue = pchValue,
        .unBufferSize = unBufferSize,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_003_GetStringTrackedDeviceProperty, &params );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_003_GetPropErrorNameFromEnum(struct w_steam_iface *_this, uint32_t error)
{
    struct IVRSystem_IVRSystem_003_GetPropErrorNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .error = error,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_003_GetPropErrorNameFromEnum, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_003_PollNextEvent(struct w_steam_iface *_this, w_VREvent_t_090 *pEvent)
{
    struct IVRSystem_IVRSystem_003_PollNextEvent_params params =
    {
        .linux_side = _this->u_iface,
        .pEvent = pEvent,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_003_PollNextEvent, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_003_PollNextEventWithPose(struct w_steam_iface *_this, uint32_t eOrigin, w_VREvent_t_090 *pEvent, TrackedDevicePose_t *pTrackedDevicePose)
{
    struct IVRSystem_IVRSystem_003_PollNextEventWithPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .pEvent = pEvent,
        .pTrackedDevicePose = pTrackedDevicePose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_003_PollNextEventWithPose, &params );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_003_GetEventTypeNameFromEnum(struct w_steam_iface *_this, uint32_t eType)
{
    struct IVRSystem_IVRSystem_003_GetEventTypeNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eType = eType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_003_GetEventTypeNameFromEnum, &params );
    return params._ret;
}

w_HiddenAreaMesh_t * __thiscall winIVRSystem_IVRSystem_003_GetHiddenAreaMesh(struct w_steam_iface *_this, w_HiddenAreaMesh_t *_ret, uint32_t eEye)
{
    struct IVRSystem_IVRSystem_003_GetHiddenAreaMesh_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_003_GetHiddenAreaMesh, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_003_GetControllerState(struct w_steam_iface *_this, uint32_t unControllerDeviceIndex, w_VRControllerState001_t *pControllerState)
{
    struct IVRSystem_IVRSystem_003_GetControllerState_params params =
    {
        .linux_side = _this->u_iface,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .pControllerState = pControllerState,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_003_GetControllerState, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_003_GetControllerStateWithPose(struct w_steam_iface *_this, uint32_t eOrigin, uint32_t unControllerDeviceIndex, w_VRControllerState001_t *pControllerState, TrackedDevicePose_t *pTrackedDevicePose)
{
    struct IVRSystem_IVRSystem_003_GetControllerStateWithPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .pControllerState = pControllerState,
        .pTrackedDevicePose = pTrackedDevicePose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_003_GetControllerStateWithPose, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_003_TriggerHapticPulse(struct w_steam_iface *_this, uint32_t unControllerDeviceIndex, uint32_t unAxisId, uint16_t usDurationMicroSec)
{
    struct IVRSystem_IVRSystem_003_TriggerHapticPulse_params params =
    {
        .linux_side = _this->u_iface,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .unAxisId = unAxisId,
        .usDurationMicroSec = usDurationMicroSec,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_003_TriggerHapticPulse, &params );
}

const char * __thiscall winIVRSystem_IVRSystem_003_GetButtonIdNameFromEnum(struct w_steam_iface *_this, uint32_t eButtonId)
{
    struct IVRSystem_IVRSystem_003_GetButtonIdNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eButtonId = eButtonId,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_003_GetButtonIdNameFromEnum, &params );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_003_GetControllerAxisTypeNameFromEnum(struct w_steam_iface *_this, uint32_t eAxisType)
{
    struct IVRSystem_IVRSystem_003_GetControllerAxisTypeNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eAxisType = eAxisType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_003_GetControllerAxisTypeNameFromEnum, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_003_HandleControllerOverlayInteractionAsMouse(struct w_steam_iface *_this, const Compositor_OverlaySettings *overlaySettings, HmdVector2_t vecWindowClientPositionOnScreen, HmdVector2_t vecWindowClientSize, uint32_t unControllerDeviceIndex, uint32_t eOutputType)
{
    struct IVRSystem_IVRSystem_003_HandleControllerOverlayInteractionAsMouse_params params =
    {
        .linux_side = _this->u_iface,
        .overlaySettings = overlaySettings,
        .vecWindowClientPositionOnScreen = vecWindowClientPositionOnScreen,
        .vecWindowClientSize = vecWindowClientSize,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .eOutputType = eOutputType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_003_HandleControllerOverlayInteractionAsMouse, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_003_CaptureInputFocus(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_003_CaptureInputFocus_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_003_CaptureInputFocus, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_003_ReleaseInputFocus(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_003_ReleaseInputFocus_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_003_ReleaseInputFocus, &params );
}

int8_t __thiscall winIVRSystem_IVRSystem_003_IsInputFocusCapturedByAnotherProcess(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_003_IsInputFocusCapturedByAnotherProcess_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_003_IsInputFocusCapturedByAnotherProcess, &params );
    return params._ret;
}

extern vtable_ptr winIVRSystem_IVRSystem_003_vtable;

DEFINE_RTTI_DATA0(winIVRSystem_IVRSystem_003, 0, ".?AVIVRSystem@@")

__ASM_BLOCK_BEGIN(winIVRSystem_IVRSystem_003_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRSystem_IVRSystem_003(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRSystem_IVRSystem_003_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRSystem_IVRSystem_003(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRSystem_IVRSystem_003_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
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
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRSystem_IVRSystem_003_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetWindowBounds, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetRecommendedRenderTargetSize, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetEyeOutputViewport, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetProjectionMatrix, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetProjectionRaw, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_ComputeDistortion, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetEyeToHeadTransform, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetTimeSinceLastVsync, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetD3D9AdapterIndex, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetDXGIOutputInfo, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_AttachToWindow, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetDeviceToAbsoluteTrackingPose, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_ResetSeatedZeroPose, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetTrackedDeviceClass, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_IsTrackedDeviceConnected, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetBoolTrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetFloatTrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetInt32TrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetUint64TrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetMatrix34TrackedDeviceProperty, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetStringTrackedDeviceProperty, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetPropErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_PollNextEvent, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_PollNextEventWithPose, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetEventTypeNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetHiddenAreaMesh, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetControllerState, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetControllerStateWithPose, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_TriggerHapticPulse, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetButtonIdNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetControllerAxisTypeNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_CaptureInputFocus, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_ReleaseInputFocus, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_IsInputFocusCapturedByAnotherProcess, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_DriverDebugRequest, 20)

void __thiscall winIVRSystem_IVRSystem_004_GetWindowBounds(struct w_steam_iface *_this, int32_t *pnX, int32_t *pnY, uint32_t *pnWidth, uint32_t *pnHeight)
{
    struct IVRSystem_IVRSystem_004_GetWindowBounds_params params =
    {
        .linux_side = _this->u_iface,
        .pnX = pnX,
        .pnY = pnY,
        .pnWidth = pnWidth,
        .pnHeight = pnHeight,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_004_GetWindowBounds, &params );
}

void __thiscall winIVRSystem_IVRSystem_004_GetRecommendedRenderTargetSize(struct w_steam_iface *_this, uint32_t *pnWidth, uint32_t *pnHeight)
{
    struct IVRSystem_IVRSystem_004_GetRecommendedRenderTargetSize_params params =
    {
        .linux_side = _this->u_iface,
        .pnWidth = pnWidth,
        .pnHeight = pnHeight,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_004_GetRecommendedRenderTargetSize, &params );
}

void __thiscall winIVRSystem_IVRSystem_004_GetEyeOutputViewport(struct w_steam_iface *_this, uint32_t eEye, uint32_t *pnX, uint32_t *pnY, uint32_t *pnWidth, uint32_t *pnHeight)
{
    struct IVRSystem_IVRSystem_004_GetEyeOutputViewport_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pnX = pnX,
        .pnY = pnY,
        .pnWidth = pnWidth,
        .pnHeight = pnHeight,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_004_GetEyeOutputViewport, &params );
}

HmdMatrix44_t * __thiscall winIVRSystem_IVRSystem_004_GetProjectionMatrix(struct w_steam_iface *_this, HmdMatrix44_t *_ret, uint32_t eEye, float fNearZ, float fFarZ, uint32_t eProjType)
{
    struct IVRSystem_IVRSystem_004_GetProjectionMatrix_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
        .fNearZ = fNearZ,
        .fFarZ = fFarZ,
        .eProjType = eProjType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_004_GetProjectionMatrix, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_004_GetProjectionRaw(struct w_steam_iface *_this, uint32_t eEye, float *pfLeft, float *pfRight, float *pfTop, float *pfBottom)
{
    struct IVRSystem_IVRSystem_004_GetProjectionRaw_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pfLeft = pfLeft,
        .pfRight = pfRight,
        .pfTop = pfTop,
        .pfBottom = pfBottom,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_004_GetProjectionRaw, &params );
}

DistortionCoordinates_t * __thiscall winIVRSystem_IVRSystem_004_ComputeDistortion(struct w_steam_iface *_this, DistortionCoordinates_t *_ret, uint32_t eEye, float fU, float fV)
{
    struct IVRSystem_IVRSystem_004_ComputeDistortion_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
        .fU = fU,
        .fV = fV,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_004_ComputeDistortion, &params );
    return params._ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_004_GetEyeToHeadTransform(struct w_steam_iface *_this, HmdMatrix34_t *_ret, uint32_t eEye)
{
    struct IVRSystem_IVRSystem_004_GetEyeToHeadTransform_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_004_GetEyeToHeadTransform, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_004_GetTimeSinceLastVsync(struct w_steam_iface *_this, float *pfSecondsSinceLastVsync, uint64_t *pulFrameCounter)
{
    struct IVRSystem_IVRSystem_004_GetTimeSinceLastVsync_params params =
    {
        .linux_side = _this->u_iface,
        .pfSecondsSinceLastVsync = pfSecondsSinceLastVsync,
        .pulFrameCounter = pulFrameCounter,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_004_GetTimeSinceLastVsync, &params );
    return params._ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_004_GetD3D9AdapterIndex(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_004_GetD3D9AdapterIndex_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_004_GetD3D9AdapterIndex, &params );
    return params._ret;
}

extern void __thiscall winIVRSystem_IVRSystem_004_GetDXGIOutputInfo(struct w_steam_iface *_this, int32_t *pnAdapterIndex, int32_t *pnAdapterOutputIndex);

int8_t __thiscall winIVRSystem_IVRSystem_004_AttachToWindow(struct w_steam_iface *_this, void *hWnd)
{
    struct IVRSystem_IVRSystem_004_AttachToWindow_params params =
    {
        .linux_side = _this->u_iface,
        .hWnd = hWnd,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_004_AttachToWindow, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_004_GetDeviceToAbsoluteTrackingPose(struct w_steam_iface *_this, uint32_t eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t *pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    struct IVRSystem_IVRSystem_004_GetDeviceToAbsoluteTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .fPredictedSecondsToPhotonsFromNow = fPredictedSecondsToPhotonsFromNow,
        .pTrackedDevicePoseArray = pTrackedDevicePoseArray,
        .unTrackedDevicePoseArrayCount = unTrackedDevicePoseArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_004_GetDeviceToAbsoluteTrackingPose, &params );
}

void __thiscall winIVRSystem_IVRSystem_004_ResetSeatedZeroPose(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_004_ResetSeatedZeroPose_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_004_ResetSeatedZeroPose, &params );
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_004_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    struct IVRSystem_IVRSystem_004_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_004_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_004_GetTrackedDeviceClass(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_004_GetTrackedDeviceClass_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_004_GetTrackedDeviceClass, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_004_IsTrackedDeviceConnected(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_004_IsTrackedDeviceConnected_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_004_IsTrackedDeviceConnected, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_004_GetBoolTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_004_GetBoolTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_004_GetBoolTrackedDeviceProperty, &params );
    return params._ret;
}

float __thiscall winIVRSystem_IVRSystem_004_GetFloatTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_004_GetFloatTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_004_GetFloatTrackedDeviceProperty, &params );
    return params._ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_004_GetInt32TrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_004_GetInt32TrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_004_GetInt32TrackedDeviceProperty, &params );
    return params._ret;
}

uint64_t __thiscall winIVRSystem_IVRSystem_004_GetUint64TrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_004_GetUint64TrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_004_GetUint64TrackedDeviceProperty, &params );
    return params._ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_004_GetMatrix34TrackedDeviceProperty(struct w_steam_iface *_this, HmdMatrix34_t *_ret, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_004_GetMatrix34TrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_004_GetMatrix34TrackedDeviceProperty, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_004_GetStringTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, char *pchValue, uint32_t unBufferSize, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_004_GetStringTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pchValue = pchValue,
        .unBufferSize = unBufferSize,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_004_GetStringTrackedDeviceProperty, &params );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_004_GetPropErrorNameFromEnum(struct w_steam_iface *_this, uint32_t error)
{
    struct IVRSystem_IVRSystem_004_GetPropErrorNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .error = error,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_004_GetPropErrorNameFromEnum, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_004_PollNextEvent(struct w_steam_iface *_this, w_VREvent_t_092 *pEvent)
{
    struct IVRSystem_IVRSystem_004_PollNextEvent_params params =
    {
        .linux_side = _this->u_iface,
        .pEvent = pEvent,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_004_PollNextEvent, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_004_PollNextEventWithPose(struct w_steam_iface *_this, uint32_t eOrigin, w_VREvent_t_092 *pEvent, TrackedDevicePose_t *pTrackedDevicePose)
{
    struct IVRSystem_IVRSystem_004_PollNextEventWithPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .pEvent = pEvent,
        .pTrackedDevicePose = pTrackedDevicePose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_004_PollNextEventWithPose, &params );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_004_GetEventTypeNameFromEnum(struct w_steam_iface *_this, uint32_t eType)
{
    struct IVRSystem_IVRSystem_004_GetEventTypeNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eType = eType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_004_GetEventTypeNameFromEnum, &params );
    return params._ret;
}

w_HiddenAreaMesh_t * __thiscall winIVRSystem_IVRSystem_004_GetHiddenAreaMesh(struct w_steam_iface *_this, w_HiddenAreaMesh_t *_ret, uint32_t eEye)
{
    struct IVRSystem_IVRSystem_004_GetHiddenAreaMesh_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_004_GetHiddenAreaMesh, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_004_GetControllerState(struct w_steam_iface *_this, uint32_t unControllerDeviceIndex, w_VRControllerState001_t *pControllerState)
{
    struct IVRSystem_IVRSystem_004_GetControllerState_params params =
    {
        .linux_side = _this->u_iface,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .pControllerState = pControllerState,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_004_GetControllerState, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_004_GetControllerStateWithPose(struct w_steam_iface *_this, uint32_t eOrigin, uint32_t unControllerDeviceIndex, w_VRControllerState001_t *pControllerState, TrackedDevicePose_t *pTrackedDevicePose)
{
    struct IVRSystem_IVRSystem_004_GetControllerStateWithPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .pControllerState = pControllerState,
        .pTrackedDevicePose = pTrackedDevicePose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_004_GetControllerStateWithPose, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_004_TriggerHapticPulse(struct w_steam_iface *_this, uint32_t unControllerDeviceIndex, uint32_t unAxisId, uint16_t usDurationMicroSec)
{
    struct IVRSystem_IVRSystem_004_TriggerHapticPulse_params params =
    {
        .linux_side = _this->u_iface,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .unAxisId = unAxisId,
        .usDurationMicroSec = usDurationMicroSec,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_004_TriggerHapticPulse, &params );
}

const char * __thiscall winIVRSystem_IVRSystem_004_GetButtonIdNameFromEnum(struct w_steam_iface *_this, uint32_t eButtonId)
{
    struct IVRSystem_IVRSystem_004_GetButtonIdNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eButtonId = eButtonId,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_004_GetButtonIdNameFromEnum, &params );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_004_GetControllerAxisTypeNameFromEnum(struct w_steam_iface *_this, uint32_t eAxisType)
{
    struct IVRSystem_IVRSystem_004_GetControllerAxisTypeNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eAxisType = eAxisType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_004_GetControllerAxisTypeNameFromEnum, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_004_CaptureInputFocus(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_004_CaptureInputFocus_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_004_CaptureInputFocus, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_004_ReleaseInputFocus(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_004_ReleaseInputFocus_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_004_ReleaseInputFocus, &params );
}

int8_t __thiscall winIVRSystem_IVRSystem_004_IsInputFocusCapturedByAnotherProcess(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_004_IsInputFocusCapturedByAnotherProcess_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_004_IsInputFocusCapturedByAnotherProcess, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_004_DriverDebugRequest(struct w_steam_iface *_this, uint32_t unDeviceIndex, const char *pchRequest, char *pchResponseBuffer, uint32_t unResponseBufferSize)
{
    struct IVRSystem_IVRSystem_004_DriverDebugRequest_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .pchRequest = pchRequest,
        .pchResponseBuffer = pchResponseBuffer,
        .unResponseBufferSize = unResponseBufferSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_004_DriverDebugRequest, &params );
    return params._ret;
}

extern vtable_ptr winIVRSystem_IVRSystem_004_vtable;

DEFINE_RTTI_DATA0(winIVRSystem_IVRSystem_004, 0, ".?AVIVRSystem@@")

__ASM_BLOCK_BEGIN(winIVRSystem_IVRSystem_004_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRSystem_IVRSystem_004(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRSystem_IVRSystem_004_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRSystem_IVRSystem_004(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRSystem_IVRSystem_004_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
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
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRSystem_IVRSystem_004_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetWindowBounds, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetRecommendedRenderTargetSize, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetEyeOutputViewport, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetProjectionMatrix, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetProjectionRaw, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_ComputeDistortion, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetEyeToHeadTransform, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetTimeSinceLastVsync, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetD3D9AdapterIndex, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetDXGIOutputInfo, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_AttachToWindow, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetDeviceToAbsoluteTrackingPose, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_ResetSeatedZeroPose, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetSortedTrackedDeviceIndicesOfClass, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetTrackedDeviceClass, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_IsTrackedDeviceConnected, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetBoolTrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetFloatTrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetInt32TrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetUint64TrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetMatrix34TrackedDeviceProperty, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetStringTrackedDeviceProperty, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetPropErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_PollNextEvent, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_PollNextEventWithPose, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetEventTypeNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetHiddenAreaMesh, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetControllerState, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetControllerStateWithPose, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_TriggerHapticPulse, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetButtonIdNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetControllerAxisTypeNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_CaptureInputFocus, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_ReleaseInputFocus, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_IsInputFocusCapturedByAnotherProcess, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_DriverDebugRequest, 20)

void __thiscall winIVRSystem_IVRSystem_005_GetWindowBounds(struct w_steam_iface *_this, int32_t *pnX, int32_t *pnY, uint32_t *pnWidth, uint32_t *pnHeight)
{
    struct IVRSystem_IVRSystem_005_GetWindowBounds_params params =
    {
        .linux_side = _this->u_iface,
        .pnX = pnX,
        .pnY = pnY,
        .pnWidth = pnWidth,
        .pnHeight = pnHeight,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_005_GetWindowBounds, &params );
}

void __thiscall winIVRSystem_IVRSystem_005_GetRecommendedRenderTargetSize(struct w_steam_iface *_this, uint32_t *pnWidth, uint32_t *pnHeight)
{
    struct IVRSystem_IVRSystem_005_GetRecommendedRenderTargetSize_params params =
    {
        .linux_side = _this->u_iface,
        .pnWidth = pnWidth,
        .pnHeight = pnHeight,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_005_GetRecommendedRenderTargetSize, &params );
}

void __thiscall winIVRSystem_IVRSystem_005_GetEyeOutputViewport(struct w_steam_iface *_this, uint32_t eEye, uint32_t *pnX, uint32_t *pnY, uint32_t *pnWidth, uint32_t *pnHeight)
{
    struct IVRSystem_IVRSystem_005_GetEyeOutputViewport_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pnX = pnX,
        .pnY = pnY,
        .pnWidth = pnWidth,
        .pnHeight = pnHeight,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_005_GetEyeOutputViewport, &params );
}

HmdMatrix44_t * __thiscall winIVRSystem_IVRSystem_005_GetProjectionMatrix(struct w_steam_iface *_this, HmdMatrix44_t *_ret, uint32_t eEye, float fNearZ, float fFarZ, uint32_t eProjType)
{
    struct IVRSystem_IVRSystem_005_GetProjectionMatrix_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
        .fNearZ = fNearZ,
        .fFarZ = fFarZ,
        .eProjType = eProjType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_005_GetProjectionMatrix, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_005_GetProjectionRaw(struct w_steam_iface *_this, uint32_t eEye, float *pfLeft, float *pfRight, float *pfTop, float *pfBottom)
{
    struct IVRSystem_IVRSystem_005_GetProjectionRaw_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pfLeft = pfLeft,
        .pfRight = pfRight,
        .pfTop = pfTop,
        .pfBottom = pfBottom,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_005_GetProjectionRaw, &params );
}

DistortionCoordinates_t * __thiscall winIVRSystem_IVRSystem_005_ComputeDistortion(struct w_steam_iface *_this, DistortionCoordinates_t *_ret, uint32_t eEye, float fU, float fV)
{
    struct IVRSystem_IVRSystem_005_ComputeDistortion_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
        .fU = fU,
        .fV = fV,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_005_ComputeDistortion, &params );
    return params._ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_005_GetEyeToHeadTransform(struct w_steam_iface *_this, HmdMatrix34_t *_ret, uint32_t eEye)
{
    struct IVRSystem_IVRSystem_005_GetEyeToHeadTransform_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_005_GetEyeToHeadTransform, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_005_GetTimeSinceLastVsync(struct w_steam_iface *_this, float *pfSecondsSinceLastVsync, uint64_t *pulFrameCounter)
{
    struct IVRSystem_IVRSystem_005_GetTimeSinceLastVsync_params params =
    {
        .linux_side = _this->u_iface,
        .pfSecondsSinceLastVsync = pfSecondsSinceLastVsync,
        .pulFrameCounter = pulFrameCounter,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_005_GetTimeSinceLastVsync, &params );
    return params._ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_005_GetD3D9AdapterIndex(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_005_GetD3D9AdapterIndex_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_005_GetD3D9AdapterIndex, &params );
    return params._ret;
}

extern void __thiscall winIVRSystem_IVRSystem_005_GetDXGIOutputInfo(struct w_steam_iface *_this, int32_t *pnAdapterIndex, int32_t *pnAdapterOutputIndex);

int8_t __thiscall winIVRSystem_IVRSystem_005_AttachToWindow(struct w_steam_iface *_this, void *hWnd)
{
    struct IVRSystem_IVRSystem_005_AttachToWindow_params params =
    {
        .linux_side = _this->u_iface,
        .hWnd = hWnd,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_005_AttachToWindow, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_005_GetDeviceToAbsoluteTrackingPose(struct w_steam_iface *_this, uint32_t eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t *pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    struct IVRSystem_IVRSystem_005_GetDeviceToAbsoluteTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .fPredictedSecondsToPhotonsFromNow = fPredictedSecondsToPhotonsFromNow,
        .pTrackedDevicePoseArray = pTrackedDevicePoseArray,
        .unTrackedDevicePoseArrayCount = unTrackedDevicePoseArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_005_GetDeviceToAbsoluteTrackingPose, &params );
}

void __thiscall winIVRSystem_IVRSystem_005_ResetSeatedZeroPose(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_005_ResetSeatedZeroPose_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_005_ResetSeatedZeroPose, &params );
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_005_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    struct IVRSystem_IVRSystem_005_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_005_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_005_GetSortedTrackedDeviceIndicesOfClass(struct w_steam_iface *_this, uint32_t eTrackedDeviceClass, uint32_t *punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, uint32_t unRelativeToTrackedDeviceIndex)
{
    struct IVRSystem_IVRSystem_005_GetSortedTrackedDeviceIndicesOfClass_params params =
    {
        .linux_side = _this->u_iface,
        .eTrackedDeviceClass = eTrackedDeviceClass,
        .punTrackedDeviceIndexArray = punTrackedDeviceIndexArray,
        .unTrackedDeviceIndexArrayCount = unTrackedDeviceIndexArrayCount,
        .unRelativeToTrackedDeviceIndex = unRelativeToTrackedDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_005_GetSortedTrackedDeviceIndicesOfClass, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_005_GetTrackedDeviceClass(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_005_GetTrackedDeviceClass_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_005_GetTrackedDeviceClass, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_005_IsTrackedDeviceConnected(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_005_IsTrackedDeviceConnected_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_005_IsTrackedDeviceConnected, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_005_GetBoolTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_005_GetBoolTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_005_GetBoolTrackedDeviceProperty, &params );
    return params._ret;
}

float __thiscall winIVRSystem_IVRSystem_005_GetFloatTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_005_GetFloatTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_005_GetFloatTrackedDeviceProperty, &params );
    return params._ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_005_GetInt32TrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_005_GetInt32TrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_005_GetInt32TrackedDeviceProperty, &params );
    return params._ret;
}

uint64_t __thiscall winIVRSystem_IVRSystem_005_GetUint64TrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_005_GetUint64TrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_005_GetUint64TrackedDeviceProperty, &params );
    return params._ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_005_GetMatrix34TrackedDeviceProperty(struct w_steam_iface *_this, HmdMatrix34_t *_ret, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_005_GetMatrix34TrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_005_GetMatrix34TrackedDeviceProperty, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_005_GetStringTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, char *pchValue, uint32_t unBufferSize, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_005_GetStringTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pchValue = pchValue,
        .unBufferSize = unBufferSize,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_005_GetStringTrackedDeviceProperty, &params );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_005_GetPropErrorNameFromEnum(struct w_steam_iface *_this, uint32_t error)
{
    struct IVRSystem_IVRSystem_005_GetPropErrorNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .error = error,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_005_GetPropErrorNameFromEnum, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_005_PollNextEvent(struct w_steam_iface *_this, w_VREvent_t_097 *pEvent)
{
    struct IVRSystem_IVRSystem_005_PollNextEvent_params params =
    {
        .linux_side = _this->u_iface,
        .pEvent = pEvent,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_005_PollNextEvent, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_005_PollNextEventWithPose(struct w_steam_iface *_this, uint32_t eOrigin, w_VREvent_t_097 *pEvent, TrackedDevicePose_t *pTrackedDevicePose)
{
    struct IVRSystem_IVRSystem_005_PollNextEventWithPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .pEvent = pEvent,
        .pTrackedDevicePose = pTrackedDevicePose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_005_PollNextEventWithPose, &params );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_005_GetEventTypeNameFromEnum(struct w_steam_iface *_this, uint32_t eType)
{
    struct IVRSystem_IVRSystem_005_GetEventTypeNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eType = eType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_005_GetEventTypeNameFromEnum, &params );
    return params._ret;
}

w_HiddenAreaMesh_t * __thiscall winIVRSystem_IVRSystem_005_GetHiddenAreaMesh(struct w_steam_iface *_this, w_HiddenAreaMesh_t *_ret, uint32_t eEye)
{
    struct IVRSystem_IVRSystem_005_GetHiddenAreaMesh_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_005_GetHiddenAreaMesh, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_005_GetControllerState(struct w_steam_iface *_this, uint32_t unControllerDeviceIndex, w_VRControllerState001_t *pControllerState)
{
    struct IVRSystem_IVRSystem_005_GetControllerState_params params =
    {
        .linux_side = _this->u_iface,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .pControllerState = pControllerState,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_005_GetControllerState, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_005_GetControllerStateWithPose(struct w_steam_iface *_this, uint32_t eOrigin, uint32_t unControllerDeviceIndex, w_VRControllerState001_t *pControllerState, TrackedDevicePose_t *pTrackedDevicePose)
{
    struct IVRSystem_IVRSystem_005_GetControllerStateWithPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .pControllerState = pControllerState,
        .pTrackedDevicePose = pTrackedDevicePose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_005_GetControllerStateWithPose, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_005_TriggerHapticPulse(struct w_steam_iface *_this, uint32_t unControllerDeviceIndex, uint32_t unAxisId, uint16_t usDurationMicroSec)
{
    struct IVRSystem_IVRSystem_005_TriggerHapticPulse_params params =
    {
        .linux_side = _this->u_iface,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .unAxisId = unAxisId,
        .usDurationMicroSec = usDurationMicroSec,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_005_TriggerHapticPulse, &params );
}

const char * __thiscall winIVRSystem_IVRSystem_005_GetButtonIdNameFromEnum(struct w_steam_iface *_this, uint32_t eButtonId)
{
    struct IVRSystem_IVRSystem_005_GetButtonIdNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eButtonId = eButtonId,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_005_GetButtonIdNameFromEnum, &params );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_005_GetControllerAxisTypeNameFromEnum(struct w_steam_iface *_this, uint32_t eAxisType)
{
    struct IVRSystem_IVRSystem_005_GetControllerAxisTypeNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eAxisType = eAxisType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_005_GetControllerAxisTypeNameFromEnum, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_005_CaptureInputFocus(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_005_CaptureInputFocus_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_005_CaptureInputFocus, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_005_ReleaseInputFocus(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_005_ReleaseInputFocus_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_005_ReleaseInputFocus, &params );
}

int8_t __thiscall winIVRSystem_IVRSystem_005_IsInputFocusCapturedByAnotherProcess(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_005_IsInputFocusCapturedByAnotherProcess_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_005_IsInputFocusCapturedByAnotherProcess, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_005_DriverDebugRequest(struct w_steam_iface *_this, uint32_t unDeviceIndex, const char *pchRequest, char *pchResponseBuffer, uint32_t unResponseBufferSize)
{
    struct IVRSystem_IVRSystem_005_DriverDebugRequest_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .pchRequest = pchRequest,
        .pchResponseBuffer = pchResponseBuffer,
        .unResponseBufferSize = unResponseBufferSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_005_DriverDebugRequest, &params );
    return params._ret;
}

extern vtable_ptr winIVRSystem_IVRSystem_005_vtable;

DEFINE_RTTI_DATA0(winIVRSystem_IVRSystem_005, 0, ".?AVIVRSystem@@")

__ASM_BLOCK_BEGIN(winIVRSystem_IVRSystem_005_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRSystem_IVRSystem_005(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRSystem_IVRSystem_005_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRSystem_IVRSystem_005(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRSystem_IVRSystem_005_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
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
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRSystem_IVRSystem_005_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetWindowBounds, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetRecommendedRenderTargetSize, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetEyeOutputViewport, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetProjectionMatrix, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetProjectionRaw, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_ComputeDistortion, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetEyeToHeadTransform, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetTimeSinceLastVsync, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetD3D9AdapterIndex, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetDXGIOutputInfo, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_AttachToWindow, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetDeviceToAbsoluteTrackingPose, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_ResetSeatedZeroPose, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetRawZeroPoseToStandingAbsoluteTrackingPose, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetSortedTrackedDeviceIndicesOfClass, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetTrackedDeviceActivityLevel, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetTrackedDeviceClass, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_IsTrackedDeviceConnected, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetBoolTrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetFloatTrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetInt32TrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetUint64TrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetMatrix34TrackedDeviceProperty, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetStringTrackedDeviceProperty, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetPropErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_PollNextEvent, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_PollNextEventWithPose, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetEventTypeNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetHiddenAreaMesh, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetControllerState, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetControllerStateWithPose, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_TriggerHapticPulse, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetButtonIdNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetControllerAxisTypeNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_CaptureInputFocus, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_ReleaseInputFocus, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_IsInputFocusCapturedByAnotherProcess, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_DriverDebugRequest, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_PerformFirmwareUpdate, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_IsDisplayOnDesktop, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_SetDisplayVisibility, 8)

void __thiscall winIVRSystem_IVRSystem_006_GetWindowBounds(struct w_steam_iface *_this, int32_t *pnX, int32_t *pnY, uint32_t *pnWidth, uint32_t *pnHeight)
{
    struct IVRSystem_IVRSystem_006_GetWindowBounds_params params =
    {
        .linux_side = _this->u_iface,
        .pnX = pnX,
        .pnY = pnY,
        .pnWidth = pnWidth,
        .pnHeight = pnHeight,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_006_GetWindowBounds, &params );
}

void __thiscall winIVRSystem_IVRSystem_006_GetRecommendedRenderTargetSize(struct w_steam_iface *_this, uint32_t *pnWidth, uint32_t *pnHeight)
{
    struct IVRSystem_IVRSystem_006_GetRecommendedRenderTargetSize_params params =
    {
        .linux_side = _this->u_iface,
        .pnWidth = pnWidth,
        .pnHeight = pnHeight,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_006_GetRecommendedRenderTargetSize, &params );
}

void __thiscall winIVRSystem_IVRSystem_006_GetEyeOutputViewport(struct w_steam_iface *_this, uint32_t eEye, uint32_t *pnX, uint32_t *pnY, uint32_t *pnWidth, uint32_t *pnHeight)
{
    struct IVRSystem_IVRSystem_006_GetEyeOutputViewport_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pnX = pnX,
        .pnY = pnY,
        .pnWidth = pnWidth,
        .pnHeight = pnHeight,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_006_GetEyeOutputViewport, &params );
}

HmdMatrix44_t * __thiscall winIVRSystem_IVRSystem_006_GetProjectionMatrix(struct w_steam_iface *_this, HmdMatrix44_t *_ret, uint32_t eEye, float fNearZ, float fFarZ, uint32_t eProjType)
{
    struct IVRSystem_IVRSystem_006_GetProjectionMatrix_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
        .fNearZ = fNearZ,
        .fFarZ = fFarZ,
        .eProjType = eProjType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_006_GetProjectionMatrix, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_006_GetProjectionRaw(struct w_steam_iface *_this, uint32_t eEye, float *pfLeft, float *pfRight, float *pfTop, float *pfBottom)
{
    struct IVRSystem_IVRSystem_006_GetProjectionRaw_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pfLeft = pfLeft,
        .pfRight = pfRight,
        .pfTop = pfTop,
        .pfBottom = pfBottom,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_006_GetProjectionRaw, &params );
}

DistortionCoordinates_t * __thiscall winIVRSystem_IVRSystem_006_ComputeDistortion(struct w_steam_iface *_this, DistortionCoordinates_t *_ret, uint32_t eEye, float fU, float fV)
{
    struct IVRSystem_IVRSystem_006_ComputeDistortion_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
        .fU = fU,
        .fV = fV,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_006_ComputeDistortion, &params );
    return params._ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_006_GetEyeToHeadTransform(struct w_steam_iface *_this, HmdMatrix34_t *_ret, uint32_t eEye)
{
    struct IVRSystem_IVRSystem_006_GetEyeToHeadTransform_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_006_GetEyeToHeadTransform, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_006_GetTimeSinceLastVsync(struct w_steam_iface *_this, float *pfSecondsSinceLastVsync, uint64_t *pulFrameCounter)
{
    struct IVRSystem_IVRSystem_006_GetTimeSinceLastVsync_params params =
    {
        .linux_side = _this->u_iface,
        .pfSecondsSinceLastVsync = pfSecondsSinceLastVsync,
        .pulFrameCounter = pulFrameCounter,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_006_GetTimeSinceLastVsync, &params );
    return params._ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_006_GetD3D9AdapterIndex(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_006_GetD3D9AdapterIndex_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_006_GetD3D9AdapterIndex, &params );
    return params._ret;
}

extern void __thiscall winIVRSystem_IVRSystem_006_GetDXGIOutputInfo(struct w_steam_iface *_this, int32_t *pnAdapterIndex, int32_t *pnAdapterOutputIndex);

int8_t __thiscall winIVRSystem_IVRSystem_006_AttachToWindow(struct w_steam_iface *_this, void *hWnd)
{
    struct IVRSystem_IVRSystem_006_AttachToWindow_params params =
    {
        .linux_side = _this->u_iface,
        .hWnd = hWnd,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_006_AttachToWindow, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_006_GetDeviceToAbsoluteTrackingPose(struct w_steam_iface *_this, uint32_t eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t *pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    struct IVRSystem_IVRSystem_006_GetDeviceToAbsoluteTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .fPredictedSecondsToPhotonsFromNow = fPredictedSecondsToPhotonsFromNow,
        .pTrackedDevicePoseArray = pTrackedDevicePoseArray,
        .unTrackedDevicePoseArrayCount = unTrackedDevicePoseArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_006_GetDeviceToAbsoluteTrackingPose, &params );
}

void __thiscall winIVRSystem_IVRSystem_006_ResetSeatedZeroPose(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_006_ResetSeatedZeroPose_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_006_ResetSeatedZeroPose, &params );
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_006_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    struct IVRSystem_IVRSystem_006_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_006_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, &params );
    return params._ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_006_GetRawZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    struct IVRSystem_IVRSystem_006_GetRawZeroPoseToStandingAbsoluteTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_006_GetRawZeroPoseToStandingAbsoluteTrackingPose, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_006_GetSortedTrackedDeviceIndicesOfClass(struct w_steam_iface *_this, uint32_t eTrackedDeviceClass, uint32_t *punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, uint32_t unRelativeToTrackedDeviceIndex)
{
    struct IVRSystem_IVRSystem_006_GetSortedTrackedDeviceIndicesOfClass_params params =
    {
        .linux_side = _this->u_iface,
        .eTrackedDeviceClass = eTrackedDeviceClass,
        .punTrackedDeviceIndexArray = punTrackedDeviceIndexArray,
        .unTrackedDeviceIndexArrayCount = unTrackedDeviceIndexArrayCount,
        .unRelativeToTrackedDeviceIndex = unRelativeToTrackedDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_006_GetSortedTrackedDeviceIndicesOfClass, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_006_GetTrackedDeviceActivityLevel(struct w_steam_iface *_this, uint32_t unDeviceId)
{
    struct IVRSystem_IVRSystem_006_GetTrackedDeviceActivityLevel_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceId = unDeviceId,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_006_GetTrackedDeviceActivityLevel, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_006_GetTrackedDeviceClass(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_006_GetTrackedDeviceClass_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_006_GetTrackedDeviceClass, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_006_IsTrackedDeviceConnected(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_006_IsTrackedDeviceConnected_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_006_IsTrackedDeviceConnected, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_006_GetBoolTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_006_GetBoolTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_006_GetBoolTrackedDeviceProperty, &params );
    return params._ret;
}

float __thiscall winIVRSystem_IVRSystem_006_GetFloatTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_006_GetFloatTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_006_GetFloatTrackedDeviceProperty, &params );
    return params._ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_006_GetInt32TrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_006_GetInt32TrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_006_GetInt32TrackedDeviceProperty, &params );
    return params._ret;
}

uint64_t __thiscall winIVRSystem_IVRSystem_006_GetUint64TrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_006_GetUint64TrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_006_GetUint64TrackedDeviceProperty, &params );
    return params._ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_006_GetMatrix34TrackedDeviceProperty(struct w_steam_iface *_this, HmdMatrix34_t *_ret, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_006_GetMatrix34TrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_006_GetMatrix34TrackedDeviceProperty, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_006_GetStringTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, char *pchValue, uint32_t unBufferSize, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_006_GetStringTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pchValue = pchValue,
        .unBufferSize = unBufferSize,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_006_GetStringTrackedDeviceProperty, &params );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_006_GetPropErrorNameFromEnum(struct w_steam_iface *_this, uint32_t error)
{
    struct IVRSystem_IVRSystem_006_GetPropErrorNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .error = error,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_006_GetPropErrorNameFromEnum, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_006_PollNextEvent(struct w_steam_iface *_this, w_VREvent_t_0910 *pEvent)
{
    struct IVRSystem_IVRSystem_006_PollNextEvent_params params =
    {
        .linux_side = _this->u_iface,
        .pEvent = pEvent,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_006_PollNextEvent, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_006_PollNextEventWithPose(struct w_steam_iface *_this, uint32_t eOrigin, w_VREvent_t_0910 *pEvent, TrackedDevicePose_t *pTrackedDevicePose)
{
    struct IVRSystem_IVRSystem_006_PollNextEventWithPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .pEvent = pEvent,
        .pTrackedDevicePose = pTrackedDevicePose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_006_PollNextEventWithPose, &params );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_006_GetEventTypeNameFromEnum(struct w_steam_iface *_this, uint32_t eType)
{
    struct IVRSystem_IVRSystem_006_GetEventTypeNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eType = eType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_006_GetEventTypeNameFromEnum, &params );
    return params._ret;
}

w_HiddenAreaMesh_t * __thiscall winIVRSystem_IVRSystem_006_GetHiddenAreaMesh(struct w_steam_iface *_this, w_HiddenAreaMesh_t *_ret, uint32_t eEye)
{
    struct IVRSystem_IVRSystem_006_GetHiddenAreaMesh_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_006_GetHiddenAreaMesh, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_006_GetControllerState(struct w_steam_iface *_this, uint32_t unControllerDeviceIndex, w_VRControllerState001_t *pControllerState)
{
    struct IVRSystem_IVRSystem_006_GetControllerState_params params =
    {
        .linux_side = _this->u_iface,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .pControllerState = pControllerState,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_006_GetControllerState, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_006_GetControllerStateWithPose(struct w_steam_iface *_this, uint32_t eOrigin, uint32_t unControllerDeviceIndex, w_VRControllerState001_t *pControllerState, TrackedDevicePose_t *pTrackedDevicePose)
{
    struct IVRSystem_IVRSystem_006_GetControllerStateWithPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .pControllerState = pControllerState,
        .pTrackedDevicePose = pTrackedDevicePose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_006_GetControllerStateWithPose, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_006_TriggerHapticPulse(struct w_steam_iface *_this, uint32_t unControllerDeviceIndex, uint32_t unAxisId, uint16_t usDurationMicroSec)
{
    struct IVRSystem_IVRSystem_006_TriggerHapticPulse_params params =
    {
        .linux_side = _this->u_iface,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .unAxisId = unAxisId,
        .usDurationMicroSec = usDurationMicroSec,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_006_TriggerHapticPulse, &params );
}

const char * __thiscall winIVRSystem_IVRSystem_006_GetButtonIdNameFromEnum(struct w_steam_iface *_this, uint32_t eButtonId)
{
    struct IVRSystem_IVRSystem_006_GetButtonIdNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eButtonId = eButtonId,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_006_GetButtonIdNameFromEnum, &params );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_006_GetControllerAxisTypeNameFromEnum(struct w_steam_iface *_this, uint32_t eAxisType)
{
    struct IVRSystem_IVRSystem_006_GetControllerAxisTypeNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eAxisType = eAxisType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_006_GetControllerAxisTypeNameFromEnum, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_006_CaptureInputFocus(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_006_CaptureInputFocus_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_006_CaptureInputFocus, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_006_ReleaseInputFocus(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_006_ReleaseInputFocus_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_006_ReleaseInputFocus, &params );
}

int8_t __thiscall winIVRSystem_IVRSystem_006_IsInputFocusCapturedByAnotherProcess(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_006_IsInputFocusCapturedByAnotherProcess_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_006_IsInputFocusCapturedByAnotherProcess, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_006_DriverDebugRequest(struct w_steam_iface *_this, uint32_t unDeviceIndex, const char *pchRequest, char *pchResponseBuffer, uint32_t unResponseBufferSize)
{
    struct IVRSystem_IVRSystem_006_DriverDebugRequest_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .pchRequest = pchRequest,
        .pchResponseBuffer = pchResponseBuffer,
        .unResponseBufferSize = unResponseBufferSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_006_DriverDebugRequest, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_006_PerformFirmwareUpdate(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_006_PerformFirmwareUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_006_PerformFirmwareUpdate, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_006_IsDisplayOnDesktop(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_006_IsDisplayOnDesktop_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_006_IsDisplayOnDesktop, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_006_SetDisplayVisibility(struct w_steam_iface *_this, int8_t bIsVisibleOnDesktop)
{
    struct IVRSystem_IVRSystem_006_SetDisplayVisibility_params params =
    {
        .linux_side = _this->u_iface,
        .bIsVisibleOnDesktop = bIsVisibleOnDesktop,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_006_SetDisplayVisibility, &params );
    return params._ret;
}

extern vtable_ptr winIVRSystem_IVRSystem_006_vtable;

DEFINE_RTTI_DATA0(winIVRSystem_IVRSystem_006, 0, ".?AVIVRSystem@@")

__ASM_BLOCK_BEGIN(winIVRSystem_IVRSystem_006_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRSystem_IVRSystem_006(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRSystem_IVRSystem_006_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRSystem_IVRSystem_006(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRSystem_IVRSystem_006_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
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
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRSystem_IVRSystem_006_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetRecommendedRenderTargetSize, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetProjectionMatrix, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetProjectionRaw, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_ComputeDistortion, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetEyeToHeadTransform, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetTimeSinceLastVsync, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetD3D9AdapterIndex, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetDXGIOutputInfo, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_IsDisplayOnDesktop, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_SetDisplayVisibility, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetDeviceToAbsoluteTrackingPose, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_ResetSeatedZeroPose, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetRawZeroPoseToStandingAbsoluteTrackingPose, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetSortedTrackedDeviceIndicesOfClass, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetTrackedDeviceActivityLevel, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_ApplyTransform, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetTrackedDeviceClass, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_IsTrackedDeviceConnected, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetBoolTrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetFloatTrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetInt32TrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetUint64TrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetMatrix34TrackedDeviceProperty, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetStringTrackedDeviceProperty, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetPropErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_PollNextEvent, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_PollNextEventWithPose, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetEventTypeNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetHiddenAreaMesh, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetControllerState, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetControllerStateWithPose, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_TriggerHapticPulse, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetButtonIdNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetControllerAxisTypeNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_CaptureInputFocus, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_ReleaseInputFocus, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_IsInputFocusCapturedByAnotherProcess, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_DriverDebugRequest, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_PerformFirmwareUpdate, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_AcknowledgeQuit_Exiting, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_AcknowledgeQuit_UserPrompt, 4)

void __thiscall winIVRSystem_IVRSystem_009_GetRecommendedRenderTargetSize(struct w_steam_iface *_this, uint32_t *pnWidth, uint32_t *pnHeight)
{
    struct IVRSystem_IVRSystem_009_GetRecommendedRenderTargetSize_params params =
    {
        .linux_side = _this->u_iface,
        .pnWidth = pnWidth,
        .pnHeight = pnHeight,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_009_GetRecommendedRenderTargetSize, &params );
}

HmdMatrix44_t * __thiscall winIVRSystem_IVRSystem_009_GetProjectionMatrix(struct w_steam_iface *_this, HmdMatrix44_t *_ret, uint32_t eEye, float fNearZ, float fFarZ, uint32_t eProjType)
{
    struct IVRSystem_IVRSystem_009_GetProjectionMatrix_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
        .fNearZ = fNearZ,
        .fFarZ = fFarZ,
        .eProjType = eProjType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_009_GetProjectionMatrix, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_009_GetProjectionRaw(struct w_steam_iface *_this, uint32_t eEye, float *pfLeft, float *pfRight, float *pfTop, float *pfBottom)
{
    struct IVRSystem_IVRSystem_009_GetProjectionRaw_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pfLeft = pfLeft,
        .pfRight = pfRight,
        .pfTop = pfTop,
        .pfBottom = pfBottom,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_009_GetProjectionRaw, &params );
}

DistortionCoordinates_t * __thiscall winIVRSystem_IVRSystem_009_ComputeDistortion(struct w_steam_iface *_this, DistortionCoordinates_t *_ret, uint32_t eEye, float fU, float fV)
{
    struct IVRSystem_IVRSystem_009_ComputeDistortion_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
        .fU = fU,
        .fV = fV,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_009_ComputeDistortion, &params );
    return params._ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_009_GetEyeToHeadTransform(struct w_steam_iface *_this, HmdMatrix34_t *_ret, uint32_t eEye)
{
    struct IVRSystem_IVRSystem_009_GetEyeToHeadTransform_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_009_GetEyeToHeadTransform, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_009_GetTimeSinceLastVsync(struct w_steam_iface *_this, float *pfSecondsSinceLastVsync, uint64_t *pulFrameCounter)
{
    struct IVRSystem_IVRSystem_009_GetTimeSinceLastVsync_params params =
    {
        .linux_side = _this->u_iface,
        .pfSecondsSinceLastVsync = pfSecondsSinceLastVsync,
        .pulFrameCounter = pulFrameCounter,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_009_GetTimeSinceLastVsync, &params );
    return params._ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_009_GetD3D9AdapterIndex(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_009_GetD3D9AdapterIndex_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_009_GetD3D9AdapterIndex, &params );
    return params._ret;
}

extern void __thiscall winIVRSystem_IVRSystem_009_GetDXGIOutputInfo(struct w_steam_iface *_this, int32_t *pnAdapterIndex);

int8_t __thiscall winIVRSystem_IVRSystem_009_IsDisplayOnDesktop(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_009_IsDisplayOnDesktop_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_009_IsDisplayOnDesktop, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_009_SetDisplayVisibility(struct w_steam_iface *_this, int8_t bIsVisibleOnDesktop)
{
    struct IVRSystem_IVRSystem_009_SetDisplayVisibility_params params =
    {
        .linux_side = _this->u_iface,
        .bIsVisibleOnDesktop = bIsVisibleOnDesktop,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_009_SetDisplayVisibility, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_009_GetDeviceToAbsoluteTrackingPose(struct w_steam_iface *_this, uint32_t eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t *pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    struct IVRSystem_IVRSystem_009_GetDeviceToAbsoluteTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .fPredictedSecondsToPhotonsFromNow = fPredictedSecondsToPhotonsFromNow,
        .pTrackedDevicePoseArray = pTrackedDevicePoseArray,
        .unTrackedDevicePoseArrayCount = unTrackedDevicePoseArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_009_GetDeviceToAbsoluteTrackingPose, &params );
}

void __thiscall winIVRSystem_IVRSystem_009_ResetSeatedZeroPose(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_009_ResetSeatedZeroPose_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_009_ResetSeatedZeroPose, &params );
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_009_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    struct IVRSystem_IVRSystem_009_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_009_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, &params );
    return params._ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_009_GetRawZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    struct IVRSystem_IVRSystem_009_GetRawZeroPoseToStandingAbsoluteTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_009_GetRawZeroPoseToStandingAbsoluteTrackingPose, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_009_GetSortedTrackedDeviceIndicesOfClass(struct w_steam_iface *_this, uint32_t eTrackedDeviceClass, uint32_t *punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, uint32_t unRelativeToTrackedDeviceIndex)
{
    struct IVRSystem_IVRSystem_009_GetSortedTrackedDeviceIndicesOfClass_params params =
    {
        .linux_side = _this->u_iface,
        .eTrackedDeviceClass = eTrackedDeviceClass,
        .punTrackedDeviceIndexArray = punTrackedDeviceIndexArray,
        .unTrackedDeviceIndexArrayCount = unTrackedDeviceIndexArrayCount,
        .unRelativeToTrackedDeviceIndex = unRelativeToTrackedDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_009_GetSortedTrackedDeviceIndicesOfClass, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_009_GetTrackedDeviceActivityLevel(struct w_steam_iface *_this, uint32_t unDeviceId)
{
    struct IVRSystem_IVRSystem_009_GetTrackedDeviceActivityLevel_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceId = unDeviceId,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_009_GetTrackedDeviceActivityLevel, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_009_ApplyTransform(struct w_steam_iface *_this, TrackedDevicePose_t *pOutputPose, const TrackedDevicePose_t *pTrackedDevicePose, const HmdMatrix34_t *pTransform)
{
    struct IVRSystem_IVRSystem_009_ApplyTransform_params params =
    {
        .linux_side = _this->u_iface,
        .pOutputPose = pOutputPose,
        .pTrackedDevicePose = pTrackedDevicePose,
        .pTransform = pTransform,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_009_ApplyTransform, &params );
}

uint32_t __thiscall winIVRSystem_IVRSystem_009_GetTrackedDeviceClass(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_009_GetTrackedDeviceClass_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_009_GetTrackedDeviceClass, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_009_IsTrackedDeviceConnected(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_009_IsTrackedDeviceConnected_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_009_IsTrackedDeviceConnected, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_009_GetBoolTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_009_GetBoolTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_009_GetBoolTrackedDeviceProperty, &params );
    return params._ret;
}

float __thiscall winIVRSystem_IVRSystem_009_GetFloatTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_009_GetFloatTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_009_GetFloatTrackedDeviceProperty, &params );
    return params._ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_009_GetInt32TrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_009_GetInt32TrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_009_GetInt32TrackedDeviceProperty, &params );
    return params._ret;
}

uint64_t __thiscall winIVRSystem_IVRSystem_009_GetUint64TrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_009_GetUint64TrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_009_GetUint64TrackedDeviceProperty, &params );
    return params._ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_009_GetMatrix34TrackedDeviceProperty(struct w_steam_iface *_this, HmdMatrix34_t *_ret, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_009_GetMatrix34TrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_009_GetMatrix34TrackedDeviceProperty, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_009_GetStringTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, char *pchValue, uint32_t unBufferSize, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_009_GetStringTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pchValue = pchValue,
        .unBufferSize = unBufferSize,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_009_GetStringTrackedDeviceProperty, &params );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_009_GetPropErrorNameFromEnum(struct w_steam_iface *_this, uint32_t error)
{
    struct IVRSystem_IVRSystem_009_GetPropErrorNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .error = error,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_009_GetPropErrorNameFromEnum, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_009_PollNextEvent(struct w_steam_iface *_this, w_VREvent_t_0912 *pEvent)
{
    struct IVRSystem_IVRSystem_009_PollNextEvent_params params =
    {
        .linux_side = _this->u_iface,
        .pEvent = pEvent,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_009_PollNextEvent, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_009_PollNextEventWithPose(struct w_steam_iface *_this, uint32_t eOrigin, w_VREvent_t_0912 *pEvent, TrackedDevicePose_t *pTrackedDevicePose)
{
    struct IVRSystem_IVRSystem_009_PollNextEventWithPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .pEvent = pEvent,
        .pTrackedDevicePose = pTrackedDevicePose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_009_PollNextEventWithPose, &params );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_009_GetEventTypeNameFromEnum(struct w_steam_iface *_this, uint32_t eType)
{
    struct IVRSystem_IVRSystem_009_GetEventTypeNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eType = eType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_009_GetEventTypeNameFromEnum, &params );
    return params._ret;
}

w_HiddenAreaMesh_t * __thiscall winIVRSystem_IVRSystem_009_GetHiddenAreaMesh(struct w_steam_iface *_this, w_HiddenAreaMesh_t *_ret, uint32_t eEye)
{
    struct IVRSystem_IVRSystem_009_GetHiddenAreaMesh_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_009_GetHiddenAreaMesh, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_009_GetControllerState(struct w_steam_iface *_this, uint32_t unControllerDeviceIndex, w_VRControllerState001_t *pControllerState)
{
    struct IVRSystem_IVRSystem_009_GetControllerState_params params =
    {
        .linux_side = _this->u_iface,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .pControllerState = pControllerState,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_009_GetControllerState, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_009_GetControllerStateWithPose(struct w_steam_iface *_this, uint32_t eOrigin, uint32_t unControllerDeviceIndex, w_VRControllerState001_t *pControllerState, TrackedDevicePose_t *pTrackedDevicePose)
{
    struct IVRSystem_IVRSystem_009_GetControllerStateWithPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .pControllerState = pControllerState,
        .pTrackedDevicePose = pTrackedDevicePose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_009_GetControllerStateWithPose, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_009_TriggerHapticPulse(struct w_steam_iface *_this, uint32_t unControllerDeviceIndex, uint32_t unAxisId, uint16_t usDurationMicroSec)
{
    struct IVRSystem_IVRSystem_009_TriggerHapticPulse_params params =
    {
        .linux_side = _this->u_iface,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .unAxisId = unAxisId,
        .usDurationMicroSec = usDurationMicroSec,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_009_TriggerHapticPulse, &params );
}

const char * __thiscall winIVRSystem_IVRSystem_009_GetButtonIdNameFromEnum(struct w_steam_iface *_this, uint32_t eButtonId)
{
    struct IVRSystem_IVRSystem_009_GetButtonIdNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eButtonId = eButtonId,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_009_GetButtonIdNameFromEnum, &params );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_009_GetControllerAxisTypeNameFromEnum(struct w_steam_iface *_this, uint32_t eAxisType)
{
    struct IVRSystem_IVRSystem_009_GetControllerAxisTypeNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eAxisType = eAxisType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_009_GetControllerAxisTypeNameFromEnum, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_009_CaptureInputFocus(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_009_CaptureInputFocus_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_009_CaptureInputFocus, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_009_ReleaseInputFocus(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_009_ReleaseInputFocus_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_009_ReleaseInputFocus, &params );
}

int8_t __thiscall winIVRSystem_IVRSystem_009_IsInputFocusCapturedByAnotherProcess(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_009_IsInputFocusCapturedByAnotherProcess_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_009_IsInputFocusCapturedByAnotherProcess, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_009_DriverDebugRequest(struct w_steam_iface *_this, uint32_t unDeviceIndex, const char *pchRequest, char *pchResponseBuffer, uint32_t unResponseBufferSize)
{
    struct IVRSystem_IVRSystem_009_DriverDebugRequest_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .pchRequest = pchRequest,
        .pchResponseBuffer = pchResponseBuffer,
        .unResponseBufferSize = unResponseBufferSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_009_DriverDebugRequest, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_009_PerformFirmwareUpdate(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_009_PerformFirmwareUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_009_PerformFirmwareUpdate, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_009_AcknowledgeQuit_Exiting(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_009_AcknowledgeQuit_Exiting_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_009_AcknowledgeQuit_Exiting, &params );
}

void __thiscall winIVRSystem_IVRSystem_009_AcknowledgeQuit_UserPrompt(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_009_AcknowledgeQuit_UserPrompt_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_009_AcknowledgeQuit_UserPrompt, &params );
}

extern vtable_ptr winIVRSystem_IVRSystem_009_vtable;

DEFINE_RTTI_DATA0(winIVRSystem_IVRSystem_009, 0, ".?AVIVRSystem@@")

__ASM_BLOCK_BEGIN(winIVRSystem_IVRSystem_009_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRSystem_IVRSystem_009(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRSystem_IVRSystem_009_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRSystem_IVRSystem_009(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRSystem_IVRSystem_009_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
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
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRSystem_IVRSystem_009_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetRecommendedRenderTargetSize, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetProjectionMatrix, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetProjectionRaw, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_ComputeDistortion, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetEyeToHeadTransform, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetTimeSinceLastVsync, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetD3D9AdapterIndex, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetDXGIOutputInfo, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_IsDisplayOnDesktop, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_SetDisplayVisibility, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetDeviceToAbsoluteTrackingPose, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_ResetSeatedZeroPose, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetRawZeroPoseToStandingAbsoluteTrackingPose, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetSortedTrackedDeviceIndicesOfClass, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetTrackedDeviceActivityLevel, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_ApplyTransform, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetTrackedDeviceIndexForControllerRole, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetControllerRoleForTrackedDeviceIndex, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetTrackedDeviceClass, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_IsTrackedDeviceConnected, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetBoolTrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetFloatTrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetInt32TrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetUint64TrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetMatrix34TrackedDeviceProperty, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetStringTrackedDeviceProperty, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetPropErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_PollNextEvent, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_PollNextEventWithPose, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetEventTypeNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetHiddenAreaMesh, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetControllerState, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetControllerStateWithPose, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_TriggerHapticPulse, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetButtonIdNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetControllerAxisTypeNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_CaptureInputFocus, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_ReleaseInputFocus, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_IsInputFocusCapturedByAnotherProcess, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_DriverDebugRequest, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_PerformFirmwareUpdate, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_AcknowledgeQuit_Exiting, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_AcknowledgeQuit_UserPrompt, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_PerformanceTestEnableCapture, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_PerformanceTestReportFidelityLevelChange, 8)

void __thiscall winIVRSystem_IVRSystem_010_GetRecommendedRenderTargetSize(struct w_steam_iface *_this, uint32_t *pnWidth, uint32_t *pnHeight)
{
    struct IVRSystem_IVRSystem_010_GetRecommendedRenderTargetSize_params params =
    {
        .linux_side = _this->u_iface,
        .pnWidth = pnWidth,
        .pnHeight = pnHeight,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_010_GetRecommendedRenderTargetSize, &params );
}

HmdMatrix44_t * __thiscall winIVRSystem_IVRSystem_010_GetProjectionMatrix(struct w_steam_iface *_this, HmdMatrix44_t *_ret, uint32_t eEye, float fNearZ, float fFarZ, uint32_t eProjType)
{
    struct IVRSystem_IVRSystem_010_GetProjectionMatrix_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
        .fNearZ = fNearZ,
        .fFarZ = fFarZ,
        .eProjType = eProjType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_010_GetProjectionMatrix, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_010_GetProjectionRaw(struct w_steam_iface *_this, uint32_t eEye, float *pfLeft, float *pfRight, float *pfTop, float *pfBottom)
{
    struct IVRSystem_IVRSystem_010_GetProjectionRaw_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pfLeft = pfLeft,
        .pfRight = pfRight,
        .pfTop = pfTop,
        .pfBottom = pfBottom,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_010_GetProjectionRaw, &params );
}

DistortionCoordinates_t * __thiscall winIVRSystem_IVRSystem_010_ComputeDistortion(struct w_steam_iface *_this, DistortionCoordinates_t *_ret, uint32_t eEye, float fU, float fV)
{
    struct IVRSystem_IVRSystem_010_ComputeDistortion_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
        .fU = fU,
        .fV = fV,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_010_ComputeDistortion, &params );
    return params._ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_010_GetEyeToHeadTransform(struct w_steam_iface *_this, HmdMatrix34_t *_ret, uint32_t eEye)
{
    struct IVRSystem_IVRSystem_010_GetEyeToHeadTransform_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_010_GetEyeToHeadTransform, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_010_GetTimeSinceLastVsync(struct w_steam_iface *_this, float *pfSecondsSinceLastVsync, uint64_t *pulFrameCounter)
{
    struct IVRSystem_IVRSystem_010_GetTimeSinceLastVsync_params params =
    {
        .linux_side = _this->u_iface,
        .pfSecondsSinceLastVsync = pfSecondsSinceLastVsync,
        .pulFrameCounter = pulFrameCounter,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_010_GetTimeSinceLastVsync, &params );
    return params._ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_010_GetD3D9AdapterIndex(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_010_GetD3D9AdapterIndex_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_010_GetD3D9AdapterIndex, &params );
    return params._ret;
}

extern void __thiscall winIVRSystem_IVRSystem_010_GetDXGIOutputInfo(struct w_steam_iface *_this, int32_t *pnAdapterIndex);

int8_t __thiscall winIVRSystem_IVRSystem_010_IsDisplayOnDesktop(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_010_IsDisplayOnDesktop_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_010_IsDisplayOnDesktop, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_010_SetDisplayVisibility(struct w_steam_iface *_this, int8_t bIsVisibleOnDesktop)
{
    struct IVRSystem_IVRSystem_010_SetDisplayVisibility_params params =
    {
        .linux_side = _this->u_iface,
        .bIsVisibleOnDesktop = bIsVisibleOnDesktop,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_010_SetDisplayVisibility, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_010_GetDeviceToAbsoluteTrackingPose(struct w_steam_iface *_this, uint32_t eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t *pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    struct IVRSystem_IVRSystem_010_GetDeviceToAbsoluteTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .fPredictedSecondsToPhotonsFromNow = fPredictedSecondsToPhotonsFromNow,
        .pTrackedDevicePoseArray = pTrackedDevicePoseArray,
        .unTrackedDevicePoseArrayCount = unTrackedDevicePoseArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_010_GetDeviceToAbsoluteTrackingPose, &params );
}

void __thiscall winIVRSystem_IVRSystem_010_ResetSeatedZeroPose(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_010_ResetSeatedZeroPose_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_010_ResetSeatedZeroPose, &params );
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_010_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    struct IVRSystem_IVRSystem_010_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_010_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, &params );
    return params._ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_010_GetRawZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    struct IVRSystem_IVRSystem_010_GetRawZeroPoseToStandingAbsoluteTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_010_GetRawZeroPoseToStandingAbsoluteTrackingPose, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_010_GetSortedTrackedDeviceIndicesOfClass(struct w_steam_iface *_this, uint32_t eTrackedDeviceClass, uint32_t *punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, uint32_t unRelativeToTrackedDeviceIndex)
{
    struct IVRSystem_IVRSystem_010_GetSortedTrackedDeviceIndicesOfClass_params params =
    {
        .linux_side = _this->u_iface,
        .eTrackedDeviceClass = eTrackedDeviceClass,
        .punTrackedDeviceIndexArray = punTrackedDeviceIndexArray,
        .unTrackedDeviceIndexArrayCount = unTrackedDeviceIndexArrayCount,
        .unRelativeToTrackedDeviceIndex = unRelativeToTrackedDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_010_GetSortedTrackedDeviceIndicesOfClass, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_010_GetTrackedDeviceActivityLevel(struct w_steam_iface *_this, uint32_t unDeviceId)
{
    struct IVRSystem_IVRSystem_010_GetTrackedDeviceActivityLevel_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceId = unDeviceId,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_010_GetTrackedDeviceActivityLevel, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_010_ApplyTransform(struct w_steam_iface *_this, TrackedDevicePose_t *pOutputPose, const TrackedDevicePose_t *pTrackedDevicePose, const HmdMatrix34_t *pTransform)
{
    struct IVRSystem_IVRSystem_010_ApplyTransform_params params =
    {
        .linux_side = _this->u_iface,
        .pOutputPose = pOutputPose,
        .pTrackedDevicePose = pTrackedDevicePose,
        .pTransform = pTransform,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_010_ApplyTransform, &params );
}

uint32_t __thiscall winIVRSystem_IVRSystem_010_GetTrackedDeviceIndexForControllerRole(struct w_steam_iface *_this, uint32_t unDeviceType)
{
    struct IVRSystem_IVRSystem_010_GetTrackedDeviceIndexForControllerRole_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceType = unDeviceType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_010_GetTrackedDeviceIndexForControllerRole, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_010_GetControllerRoleForTrackedDeviceIndex(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_010_GetControllerRoleForTrackedDeviceIndex_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_010_GetControllerRoleForTrackedDeviceIndex, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_010_GetTrackedDeviceClass(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_010_GetTrackedDeviceClass_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_010_GetTrackedDeviceClass, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_010_IsTrackedDeviceConnected(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_010_IsTrackedDeviceConnected_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_010_IsTrackedDeviceConnected, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_010_GetBoolTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_010_GetBoolTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_010_GetBoolTrackedDeviceProperty, &params );
    return params._ret;
}

float __thiscall winIVRSystem_IVRSystem_010_GetFloatTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_010_GetFloatTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_010_GetFloatTrackedDeviceProperty, &params );
    return params._ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_010_GetInt32TrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_010_GetInt32TrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_010_GetInt32TrackedDeviceProperty, &params );
    return params._ret;
}

uint64_t __thiscall winIVRSystem_IVRSystem_010_GetUint64TrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_010_GetUint64TrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_010_GetUint64TrackedDeviceProperty, &params );
    return params._ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_010_GetMatrix34TrackedDeviceProperty(struct w_steam_iface *_this, HmdMatrix34_t *_ret, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_010_GetMatrix34TrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_010_GetMatrix34TrackedDeviceProperty, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_010_GetStringTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, char *pchValue, uint32_t unBufferSize, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_010_GetStringTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pchValue = pchValue,
        .unBufferSize = unBufferSize,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_010_GetStringTrackedDeviceProperty, &params );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_010_GetPropErrorNameFromEnum(struct w_steam_iface *_this, uint32_t error)
{
    struct IVRSystem_IVRSystem_010_GetPropErrorNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .error = error,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_010_GetPropErrorNameFromEnum, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_010_PollNextEvent(struct w_steam_iface *_this, w_VREvent_t_0914 *pEvent)
{
    struct IVRSystem_IVRSystem_010_PollNextEvent_params params =
    {
        .linux_side = _this->u_iface,
        .pEvent = pEvent,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_010_PollNextEvent, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_010_PollNextEventWithPose(struct w_steam_iface *_this, uint32_t eOrigin, w_VREvent_t_0914 *pEvent, TrackedDevicePose_t *pTrackedDevicePose)
{
    struct IVRSystem_IVRSystem_010_PollNextEventWithPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .pEvent = pEvent,
        .pTrackedDevicePose = pTrackedDevicePose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_010_PollNextEventWithPose, &params );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_010_GetEventTypeNameFromEnum(struct w_steam_iface *_this, uint32_t eType)
{
    struct IVRSystem_IVRSystem_010_GetEventTypeNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eType = eType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_010_GetEventTypeNameFromEnum, &params );
    return params._ret;
}

w_HiddenAreaMesh_t * __thiscall winIVRSystem_IVRSystem_010_GetHiddenAreaMesh(struct w_steam_iface *_this, w_HiddenAreaMesh_t *_ret, uint32_t eEye)
{
    struct IVRSystem_IVRSystem_010_GetHiddenAreaMesh_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_010_GetHiddenAreaMesh, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_010_GetControllerState(struct w_steam_iface *_this, uint32_t unControllerDeviceIndex, w_VRControllerState001_t *pControllerState)
{
    struct IVRSystem_IVRSystem_010_GetControllerState_params params =
    {
        .linux_side = _this->u_iface,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .pControllerState = pControllerState,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_010_GetControllerState, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_010_GetControllerStateWithPose(struct w_steam_iface *_this, uint32_t eOrigin, uint32_t unControllerDeviceIndex, w_VRControllerState001_t *pControllerState, TrackedDevicePose_t *pTrackedDevicePose)
{
    struct IVRSystem_IVRSystem_010_GetControllerStateWithPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .pControllerState = pControllerState,
        .pTrackedDevicePose = pTrackedDevicePose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_010_GetControllerStateWithPose, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_010_TriggerHapticPulse(struct w_steam_iface *_this, uint32_t unControllerDeviceIndex, uint32_t unAxisId, uint16_t usDurationMicroSec)
{
    struct IVRSystem_IVRSystem_010_TriggerHapticPulse_params params =
    {
        .linux_side = _this->u_iface,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .unAxisId = unAxisId,
        .usDurationMicroSec = usDurationMicroSec,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_010_TriggerHapticPulse, &params );
}

const char * __thiscall winIVRSystem_IVRSystem_010_GetButtonIdNameFromEnum(struct w_steam_iface *_this, uint32_t eButtonId)
{
    struct IVRSystem_IVRSystem_010_GetButtonIdNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eButtonId = eButtonId,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_010_GetButtonIdNameFromEnum, &params );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_010_GetControllerAxisTypeNameFromEnum(struct w_steam_iface *_this, uint32_t eAxisType)
{
    struct IVRSystem_IVRSystem_010_GetControllerAxisTypeNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eAxisType = eAxisType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_010_GetControllerAxisTypeNameFromEnum, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_010_CaptureInputFocus(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_010_CaptureInputFocus_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_010_CaptureInputFocus, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_010_ReleaseInputFocus(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_010_ReleaseInputFocus_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_010_ReleaseInputFocus, &params );
}

int8_t __thiscall winIVRSystem_IVRSystem_010_IsInputFocusCapturedByAnotherProcess(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_010_IsInputFocusCapturedByAnotherProcess_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_010_IsInputFocusCapturedByAnotherProcess, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_010_DriverDebugRequest(struct w_steam_iface *_this, uint32_t unDeviceIndex, const char *pchRequest, char *pchResponseBuffer, uint32_t unResponseBufferSize)
{
    struct IVRSystem_IVRSystem_010_DriverDebugRequest_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .pchRequest = pchRequest,
        .pchResponseBuffer = pchResponseBuffer,
        .unResponseBufferSize = unResponseBufferSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_010_DriverDebugRequest, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_010_PerformFirmwareUpdate(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_010_PerformFirmwareUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_010_PerformFirmwareUpdate, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_010_AcknowledgeQuit_Exiting(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_010_AcknowledgeQuit_Exiting_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_010_AcknowledgeQuit_Exiting, &params );
}

void __thiscall winIVRSystem_IVRSystem_010_AcknowledgeQuit_UserPrompt(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_010_AcknowledgeQuit_UserPrompt_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_010_AcknowledgeQuit_UserPrompt, &params );
}

void __thiscall winIVRSystem_IVRSystem_010_PerformanceTestEnableCapture(struct w_steam_iface *_this, int8_t bEnable)
{
    struct IVRSystem_IVRSystem_010_PerformanceTestEnableCapture_params params =
    {
        .linux_side = _this->u_iface,
        .bEnable = bEnable,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_010_PerformanceTestEnableCapture, &params );
}

void __thiscall winIVRSystem_IVRSystem_010_PerformanceTestReportFidelityLevelChange(struct w_steam_iface *_this, int32_t nFidelityLevel)
{
    struct IVRSystem_IVRSystem_010_PerformanceTestReportFidelityLevelChange_params params =
    {
        .linux_side = _this->u_iface,
        .nFidelityLevel = nFidelityLevel,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_010_PerformanceTestReportFidelityLevelChange, &params );
}

extern vtable_ptr winIVRSystem_IVRSystem_010_vtable;

DEFINE_RTTI_DATA0(winIVRSystem_IVRSystem_010, 0, ".?AVIVRSystem@@")

__ASM_BLOCK_BEGIN(winIVRSystem_IVRSystem_010_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRSystem_IVRSystem_010(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRSystem_IVRSystem_010_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRSystem_IVRSystem_010(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRSystem_IVRSystem_010_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
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
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRSystem_IVRSystem_010_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetRecommendedRenderTargetSize, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetProjectionMatrix, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetProjectionRaw, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_ComputeDistortion, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetEyeToHeadTransform, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetTimeSinceLastVsync, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetD3D9AdapterIndex, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetDXGIOutputInfo, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_IsDisplayOnDesktop, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_SetDisplayVisibility, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetDeviceToAbsoluteTrackingPose, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_ResetSeatedZeroPose, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetRawZeroPoseToStandingAbsoluteTrackingPose, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetSortedTrackedDeviceIndicesOfClass, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetTrackedDeviceActivityLevel, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_ApplyTransform, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetTrackedDeviceIndexForControllerRole, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetControllerRoleForTrackedDeviceIndex, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetTrackedDeviceClass, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_IsTrackedDeviceConnected, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetBoolTrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetFloatTrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetInt32TrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetUint64TrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetMatrix34TrackedDeviceProperty, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetStringTrackedDeviceProperty, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetPropErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_PollNextEvent, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_PollNextEventWithPose, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetEventTypeNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetHiddenAreaMesh, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetControllerState, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetControllerStateWithPose, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_TriggerHapticPulse, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetButtonIdNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetControllerAxisTypeNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_CaptureInputFocus, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_ReleaseInputFocus, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_IsInputFocusCapturedByAnotherProcess, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_DriverDebugRequest, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_PerformFirmwareUpdate, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_AcknowledgeQuit_Exiting, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_AcknowledgeQuit_UserPrompt, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_PerformanceTestEnableCapture, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_PerformanceTestReportFidelityLevelChange, 8)

void __thiscall winIVRSystem_IVRSystem_011_GetRecommendedRenderTargetSize(struct w_steam_iface *_this, uint32_t *pnWidth, uint32_t *pnHeight)
{
    struct IVRSystem_IVRSystem_011_GetRecommendedRenderTargetSize_params params =
    {
        .linux_side = _this->u_iface,
        .pnWidth = pnWidth,
        .pnHeight = pnHeight,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_011_GetRecommendedRenderTargetSize, &params );
}

HmdMatrix44_t * __thiscall winIVRSystem_IVRSystem_011_GetProjectionMatrix(struct w_steam_iface *_this, HmdMatrix44_t *_ret, uint32_t eEye, float fNearZ, float fFarZ, uint32_t eProjType)
{
    struct IVRSystem_IVRSystem_011_GetProjectionMatrix_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
        .fNearZ = fNearZ,
        .fFarZ = fFarZ,
        .eProjType = eProjType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_011_GetProjectionMatrix, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_011_GetProjectionRaw(struct w_steam_iface *_this, uint32_t eEye, float *pfLeft, float *pfRight, float *pfTop, float *pfBottom)
{
    struct IVRSystem_IVRSystem_011_GetProjectionRaw_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pfLeft = pfLeft,
        .pfRight = pfRight,
        .pfTop = pfTop,
        .pfBottom = pfBottom,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_011_GetProjectionRaw, &params );
}

DistortionCoordinates_t * __thiscall winIVRSystem_IVRSystem_011_ComputeDistortion(struct w_steam_iface *_this, DistortionCoordinates_t *_ret, uint32_t eEye, float fU, float fV)
{
    struct IVRSystem_IVRSystem_011_ComputeDistortion_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
        .fU = fU,
        .fV = fV,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_011_ComputeDistortion, &params );
    return params._ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_011_GetEyeToHeadTransform(struct w_steam_iface *_this, HmdMatrix34_t *_ret, uint32_t eEye)
{
    struct IVRSystem_IVRSystem_011_GetEyeToHeadTransform_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_011_GetEyeToHeadTransform, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_011_GetTimeSinceLastVsync(struct w_steam_iface *_this, float *pfSecondsSinceLastVsync, uint64_t *pulFrameCounter)
{
    struct IVRSystem_IVRSystem_011_GetTimeSinceLastVsync_params params =
    {
        .linux_side = _this->u_iface,
        .pfSecondsSinceLastVsync = pfSecondsSinceLastVsync,
        .pulFrameCounter = pulFrameCounter,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_011_GetTimeSinceLastVsync, &params );
    return params._ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_011_GetD3D9AdapterIndex(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_011_GetD3D9AdapterIndex_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_011_GetD3D9AdapterIndex, &params );
    return params._ret;
}

extern void __thiscall winIVRSystem_IVRSystem_011_GetDXGIOutputInfo(struct w_steam_iface *_this, int32_t *pnAdapterIndex);

int8_t __thiscall winIVRSystem_IVRSystem_011_IsDisplayOnDesktop(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_011_IsDisplayOnDesktop_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_011_IsDisplayOnDesktop, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_011_SetDisplayVisibility(struct w_steam_iface *_this, int8_t bIsVisibleOnDesktop)
{
    struct IVRSystem_IVRSystem_011_SetDisplayVisibility_params params =
    {
        .linux_side = _this->u_iface,
        .bIsVisibleOnDesktop = bIsVisibleOnDesktop,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_011_SetDisplayVisibility, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_011_GetDeviceToAbsoluteTrackingPose(struct w_steam_iface *_this, uint32_t eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t *pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    struct IVRSystem_IVRSystem_011_GetDeviceToAbsoluteTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .fPredictedSecondsToPhotonsFromNow = fPredictedSecondsToPhotonsFromNow,
        .pTrackedDevicePoseArray = pTrackedDevicePoseArray,
        .unTrackedDevicePoseArrayCount = unTrackedDevicePoseArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_011_GetDeviceToAbsoluteTrackingPose, &params );
}

void __thiscall winIVRSystem_IVRSystem_011_ResetSeatedZeroPose(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_011_ResetSeatedZeroPose_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_011_ResetSeatedZeroPose, &params );
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_011_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    struct IVRSystem_IVRSystem_011_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_011_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, &params );
    return params._ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_011_GetRawZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    struct IVRSystem_IVRSystem_011_GetRawZeroPoseToStandingAbsoluteTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_011_GetRawZeroPoseToStandingAbsoluteTrackingPose, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_011_GetSortedTrackedDeviceIndicesOfClass(struct w_steam_iface *_this, uint32_t eTrackedDeviceClass, uint32_t *punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, uint32_t unRelativeToTrackedDeviceIndex)
{
    struct IVRSystem_IVRSystem_011_GetSortedTrackedDeviceIndicesOfClass_params params =
    {
        .linux_side = _this->u_iface,
        .eTrackedDeviceClass = eTrackedDeviceClass,
        .punTrackedDeviceIndexArray = punTrackedDeviceIndexArray,
        .unTrackedDeviceIndexArrayCount = unTrackedDeviceIndexArrayCount,
        .unRelativeToTrackedDeviceIndex = unRelativeToTrackedDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_011_GetSortedTrackedDeviceIndicesOfClass, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_011_GetTrackedDeviceActivityLevel(struct w_steam_iface *_this, uint32_t unDeviceId)
{
    struct IVRSystem_IVRSystem_011_GetTrackedDeviceActivityLevel_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceId = unDeviceId,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_011_GetTrackedDeviceActivityLevel, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_011_ApplyTransform(struct w_steam_iface *_this, TrackedDevicePose_t *pOutputPose, const TrackedDevicePose_t *pTrackedDevicePose, const HmdMatrix34_t *pTransform)
{
    struct IVRSystem_IVRSystem_011_ApplyTransform_params params =
    {
        .linux_side = _this->u_iface,
        .pOutputPose = pOutputPose,
        .pTrackedDevicePose = pTrackedDevicePose,
        .pTransform = pTransform,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_011_ApplyTransform, &params );
}

uint32_t __thiscall winIVRSystem_IVRSystem_011_GetTrackedDeviceIndexForControllerRole(struct w_steam_iface *_this, uint32_t unDeviceType)
{
    struct IVRSystem_IVRSystem_011_GetTrackedDeviceIndexForControllerRole_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceType = unDeviceType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_011_GetTrackedDeviceIndexForControllerRole, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_011_GetControllerRoleForTrackedDeviceIndex(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_011_GetControllerRoleForTrackedDeviceIndex_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_011_GetControllerRoleForTrackedDeviceIndex, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_011_GetTrackedDeviceClass(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_011_GetTrackedDeviceClass_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_011_GetTrackedDeviceClass, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_011_IsTrackedDeviceConnected(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_011_IsTrackedDeviceConnected_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_011_IsTrackedDeviceConnected, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_011_GetBoolTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_011_GetBoolTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_011_GetBoolTrackedDeviceProperty, &params );
    return params._ret;
}

float __thiscall winIVRSystem_IVRSystem_011_GetFloatTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_011_GetFloatTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_011_GetFloatTrackedDeviceProperty, &params );
    return params._ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_011_GetInt32TrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_011_GetInt32TrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_011_GetInt32TrackedDeviceProperty, &params );
    return params._ret;
}

uint64_t __thiscall winIVRSystem_IVRSystem_011_GetUint64TrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_011_GetUint64TrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_011_GetUint64TrackedDeviceProperty, &params );
    return params._ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_011_GetMatrix34TrackedDeviceProperty(struct w_steam_iface *_this, HmdMatrix34_t *_ret, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_011_GetMatrix34TrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_011_GetMatrix34TrackedDeviceProperty, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_011_GetStringTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, char *pchValue, uint32_t unBufferSize, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_011_GetStringTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pchValue = pchValue,
        .unBufferSize = unBufferSize,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_011_GetStringTrackedDeviceProperty, &params );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_011_GetPropErrorNameFromEnum(struct w_steam_iface *_this, uint32_t error)
{
    struct IVRSystem_IVRSystem_011_GetPropErrorNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .error = error,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_011_GetPropErrorNameFromEnum, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_011_PollNextEvent(struct w_steam_iface *_this, w_VREvent_t_0918 *pEvent, uint32_t uncbVREvent)
{
    w_VREvent_t_0918 w_pEvent;
    struct IVRSystem_IVRSystem_011_PollNextEvent_params params =
    {
        .linux_side = _this->u_iface,
        .pEvent = pEvent ? &w_pEvent : NULL,
        .uncbVREvent = uncbVREvent,
    };
    TRACE("%p\n", _this);
    uncbVREvent = min( uncbVREvent, sizeof(w_pEvent) );
    if (pEvent) memcpy( &w_pEvent, pEvent, uncbVREvent );
    VRCLIENT_CALL( IVRSystem_IVRSystem_011_PollNextEvent, &params );
    if (pEvent) memcpy( pEvent, &w_pEvent, uncbVREvent );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_011_PollNextEventWithPose(struct w_steam_iface *_this, uint32_t eOrigin, w_VREvent_t_0918 *pEvent, uint32_t uncbVREvent, TrackedDevicePose_t *pTrackedDevicePose)
{
    w_VREvent_t_0918 w_pEvent;
    struct IVRSystem_IVRSystem_011_PollNextEventWithPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .pEvent = pEvent ? &w_pEvent : NULL,
        .uncbVREvent = uncbVREvent,
        .pTrackedDevicePose = pTrackedDevicePose,
    };
    TRACE("%p\n", _this);
    uncbVREvent = min( uncbVREvent, sizeof(w_pEvent) );
    if (pEvent) memcpy( &w_pEvent, pEvent, uncbVREvent );
    VRCLIENT_CALL( IVRSystem_IVRSystem_011_PollNextEventWithPose, &params );
    if (pEvent) memcpy( pEvent, &w_pEvent, uncbVREvent );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_011_GetEventTypeNameFromEnum(struct w_steam_iface *_this, uint32_t eType)
{
    struct IVRSystem_IVRSystem_011_GetEventTypeNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eType = eType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_011_GetEventTypeNameFromEnum, &params );
    return params._ret;
}

w_HiddenAreaMesh_t * __thiscall winIVRSystem_IVRSystem_011_GetHiddenAreaMesh(struct w_steam_iface *_this, w_HiddenAreaMesh_t *_ret, uint32_t eEye)
{
    struct IVRSystem_IVRSystem_011_GetHiddenAreaMesh_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_011_GetHiddenAreaMesh, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_011_GetControllerState(struct w_steam_iface *_this, uint32_t unControllerDeviceIndex, w_VRControllerState001_t *pControllerState)
{
    struct IVRSystem_IVRSystem_011_GetControllerState_params params =
    {
        .linux_side = _this->u_iface,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .pControllerState = pControllerState,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_011_GetControllerState, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_011_GetControllerStateWithPose(struct w_steam_iface *_this, uint32_t eOrigin, uint32_t unControllerDeviceIndex, w_VRControllerState001_t *pControllerState, TrackedDevicePose_t *pTrackedDevicePose)
{
    struct IVRSystem_IVRSystem_011_GetControllerStateWithPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .pControllerState = pControllerState,
        .pTrackedDevicePose = pTrackedDevicePose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_011_GetControllerStateWithPose, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_011_TriggerHapticPulse(struct w_steam_iface *_this, uint32_t unControllerDeviceIndex, uint32_t unAxisId, uint16_t usDurationMicroSec)
{
    struct IVRSystem_IVRSystem_011_TriggerHapticPulse_params params =
    {
        .linux_side = _this->u_iface,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .unAxisId = unAxisId,
        .usDurationMicroSec = usDurationMicroSec,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_011_TriggerHapticPulse, &params );
}

const char * __thiscall winIVRSystem_IVRSystem_011_GetButtonIdNameFromEnum(struct w_steam_iface *_this, uint32_t eButtonId)
{
    struct IVRSystem_IVRSystem_011_GetButtonIdNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eButtonId = eButtonId,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_011_GetButtonIdNameFromEnum, &params );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_011_GetControllerAxisTypeNameFromEnum(struct w_steam_iface *_this, uint32_t eAxisType)
{
    struct IVRSystem_IVRSystem_011_GetControllerAxisTypeNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eAxisType = eAxisType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_011_GetControllerAxisTypeNameFromEnum, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_011_CaptureInputFocus(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_011_CaptureInputFocus_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_011_CaptureInputFocus, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_011_ReleaseInputFocus(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_011_ReleaseInputFocus_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_011_ReleaseInputFocus, &params );
}

int8_t __thiscall winIVRSystem_IVRSystem_011_IsInputFocusCapturedByAnotherProcess(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_011_IsInputFocusCapturedByAnotherProcess_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_011_IsInputFocusCapturedByAnotherProcess, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_011_DriverDebugRequest(struct w_steam_iface *_this, uint32_t unDeviceIndex, const char *pchRequest, char *pchResponseBuffer, uint32_t unResponseBufferSize)
{
    struct IVRSystem_IVRSystem_011_DriverDebugRequest_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .pchRequest = pchRequest,
        .pchResponseBuffer = pchResponseBuffer,
        .unResponseBufferSize = unResponseBufferSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_011_DriverDebugRequest, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_011_PerformFirmwareUpdate(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_011_PerformFirmwareUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_011_PerformFirmwareUpdate, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_011_AcknowledgeQuit_Exiting(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_011_AcknowledgeQuit_Exiting_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_011_AcknowledgeQuit_Exiting, &params );
}

void __thiscall winIVRSystem_IVRSystem_011_AcknowledgeQuit_UserPrompt(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_011_AcknowledgeQuit_UserPrompt_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_011_AcknowledgeQuit_UserPrompt, &params );
}

void __thiscall winIVRSystem_IVRSystem_011_PerformanceTestEnableCapture(struct w_steam_iface *_this, int8_t bEnable)
{
    struct IVRSystem_IVRSystem_011_PerformanceTestEnableCapture_params params =
    {
        .linux_side = _this->u_iface,
        .bEnable = bEnable,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_011_PerformanceTestEnableCapture, &params );
}

void __thiscall winIVRSystem_IVRSystem_011_PerformanceTestReportFidelityLevelChange(struct w_steam_iface *_this, int32_t nFidelityLevel)
{
    struct IVRSystem_IVRSystem_011_PerformanceTestReportFidelityLevelChange_params params =
    {
        .linux_side = _this->u_iface,
        .nFidelityLevel = nFidelityLevel,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_011_PerformanceTestReportFidelityLevelChange, &params );
}

extern vtable_ptr winIVRSystem_IVRSystem_011_vtable;

DEFINE_RTTI_DATA0(winIVRSystem_IVRSystem_011, 0, ".?AVIVRSystem@@")

__ASM_BLOCK_BEGIN(winIVRSystem_IVRSystem_011_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRSystem_IVRSystem_011(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRSystem_IVRSystem_011_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRSystem_IVRSystem_011(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRSystem_IVRSystem_011_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
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
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRSystem_IVRSystem_011_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetRecommendedRenderTargetSize, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetProjectionMatrix, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetProjectionRaw, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_ComputeDistortion, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetEyeToHeadTransform, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetTimeSinceLastVsync, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetD3D9AdapterIndex, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetDXGIOutputInfo, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_IsDisplayOnDesktop, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_SetDisplayVisibility, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetDeviceToAbsoluteTrackingPose, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_ResetSeatedZeroPose, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetRawZeroPoseToStandingAbsoluteTrackingPose, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetSortedTrackedDeviceIndicesOfClass, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetTrackedDeviceActivityLevel, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_ApplyTransform, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetTrackedDeviceIndexForControllerRole, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetControllerRoleForTrackedDeviceIndex, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetTrackedDeviceClass, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_IsTrackedDeviceConnected, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetBoolTrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetFloatTrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetInt32TrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetUint64TrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetMatrix34TrackedDeviceProperty, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetStringTrackedDeviceProperty, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetPropErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_PollNextEvent, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_PollNextEventWithPose, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetEventTypeNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetHiddenAreaMesh, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetControllerState, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetControllerStateWithPose, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_TriggerHapticPulse, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetButtonIdNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetControllerAxisTypeNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_CaptureInputFocus, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_ReleaseInputFocus, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_IsInputFocusCapturedByAnotherProcess, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_DriverDebugRequest, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_PerformFirmwareUpdate, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_AcknowledgeQuit_Exiting, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_AcknowledgeQuit_UserPrompt, 4)

void __thiscall winIVRSystem_IVRSystem_012_GetRecommendedRenderTargetSize(struct w_steam_iface *_this, uint32_t *pnWidth, uint32_t *pnHeight)
{
    struct IVRSystem_IVRSystem_012_GetRecommendedRenderTargetSize_params params =
    {
        .linux_side = _this->u_iface,
        .pnWidth = pnWidth,
        .pnHeight = pnHeight,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_012_GetRecommendedRenderTargetSize, &params );
}

HmdMatrix44_t * __thiscall winIVRSystem_IVRSystem_012_GetProjectionMatrix(struct w_steam_iface *_this, HmdMatrix44_t *_ret, uint32_t eEye, float fNearZ, float fFarZ, uint32_t eProjType)
{
    struct IVRSystem_IVRSystem_012_GetProjectionMatrix_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
        .fNearZ = fNearZ,
        .fFarZ = fFarZ,
        .eProjType = eProjType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_012_GetProjectionMatrix, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_012_GetProjectionRaw(struct w_steam_iface *_this, uint32_t eEye, float *pfLeft, float *pfRight, float *pfTop, float *pfBottom)
{
    struct IVRSystem_IVRSystem_012_GetProjectionRaw_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pfLeft = pfLeft,
        .pfRight = pfRight,
        .pfTop = pfTop,
        .pfBottom = pfBottom,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_012_GetProjectionRaw, &params );
}

DistortionCoordinates_t * __thiscall winIVRSystem_IVRSystem_012_ComputeDistortion(struct w_steam_iface *_this, DistortionCoordinates_t *_ret, uint32_t eEye, float fU, float fV)
{
    struct IVRSystem_IVRSystem_012_ComputeDistortion_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
        .fU = fU,
        .fV = fV,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_012_ComputeDistortion, &params );
    return params._ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_012_GetEyeToHeadTransform(struct w_steam_iface *_this, HmdMatrix34_t *_ret, uint32_t eEye)
{
    struct IVRSystem_IVRSystem_012_GetEyeToHeadTransform_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_012_GetEyeToHeadTransform, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_012_GetTimeSinceLastVsync(struct w_steam_iface *_this, float *pfSecondsSinceLastVsync, uint64_t *pulFrameCounter)
{
    struct IVRSystem_IVRSystem_012_GetTimeSinceLastVsync_params params =
    {
        .linux_side = _this->u_iface,
        .pfSecondsSinceLastVsync = pfSecondsSinceLastVsync,
        .pulFrameCounter = pulFrameCounter,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_012_GetTimeSinceLastVsync, &params );
    return params._ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_012_GetD3D9AdapterIndex(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_012_GetD3D9AdapterIndex_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_012_GetD3D9AdapterIndex, &params );
    return params._ret;
}

extern void __thiscall winIVRSystem_IVRSystem_012_GetDXGIOutputInfo(struct w_steam_iface *_this, int32_t *pnAdapterIndex);

int8_t __thiscall winIVRSystem_IVRSystem_012_IsDisplayOnDesktop(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_012_IsDisplayOnDesktop_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_012_IsDisplayOnDesktop, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_012_SetDisplayVisibility(struct w_steam_iface *_this, int8_t bIsVisibleOnDesktop)
{
    struct IVRSystem_IVRSystem_012_SetDisplayVisibility_params params =
    {
        .linux_side = _this->u_iface,
        .bIsVisibleOnDesktop = bIsVisibleOnDesktop,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_012_SetDisplayVisibility, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_012_GetDeviceToAbsoluteTrackingPose(struct w_steam_iface *_this, uint32_t eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t *pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    struct IVRSystem_IVRSystem_012_GetDeviceToAbsoluteTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .fPredictedSecondsToPhotonsFromNow = fPredictedSecondsToPhotonsFromNow,
        .pTrackedDevicePoseArray = pTrackedDevicePoseArray,
        .unTrackedDevicePoseArrayCount = unTrackedDevicePoseArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_012_GetDeviceToAbsoluteTrackingPose, &params );
}

void __thiscall winIVRSystem_IVRSystem_012_ResetSeatedZeroPose(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_012_ResetSeatedZeroPose_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_012_ResetSeatedZeroPose, &params );
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_012_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    struct IVRSystem_IVRSystem_012_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_012_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, &params );
    return params._ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_012_GetRawZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    struct IVRSystem_IVRSystem_012_GetRawZeroPoseToStandingAbsoluteTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_012_GetRawZeroPoseToStandingAbsoluteTrackingPose, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_012_GetSortedTrackedDeviceIndicesOfClass(struct w_steam_iface *_this, uint32_t eTrackedDeviceClass, uint32_t *punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, uint32_t unRelativeToTrackedDeviceIndex)
{
    struct IVRSystem_IVRSystem_012_GetSortedTrackedDeviceIndicesOfClass_params params =
    {
        .linux_side = _this->u_iface,
        .eTrackedDeviceClass = eTrackedDeviceClass,
        .punTrackedDeviceIndexArray = punTrackedDeviceIndexArray,
        .unTrackedDeviceIndexArrayCount = unTrackedDeviceIndexArrayCount,
        .unRelativeToTrackedDeviceIndex = unRelativeToTrackedDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_012_GetSortedTrackedDeviceIndicesOfClass, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_012_GetTrackedDeviceActivityLevel(struct w_steam_iface *_this, uint32_t unDeviceId)
{
    struct IVRSystem_IVRSystem_012_GetTrackedDeviceActivityLevel_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceId = unDeviceId,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_012_GetTrackedDeviceActivityLevel, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_012_ApplyTransform(struct w_steam_iface *_this, TrackedDevicePose_t *pOutputPose, const TrackedDevicePose_t *pTrackedDevicePose, const HmdMatrix34_t *pTransform)
{
    struct IVRSystem_IVRSystem_012_ApplyTransform_params params =
    {
        .linux_side = _this->u_iface,
        .pOutputPose = pOutputPose,
        .pTrackedDevicePose = pTrackedDevicePose,
        .pTransform = pTransform,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_012_ApplyTransform, &params );
}

uint32_t __thiscall winIVRSystem_IVRSystem_012_GetTrackedDeviceIndexForControllerRole(struct w_steam_iface *_this, uint32_t unDeviceType)
{
    struct IVRSystem_IVRSystem_012_GetTrackedDeviceIndexForControllerRole_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceType = unDeviceType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_012_GetTrackedDeviceIndexForControllerRole, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_012_GetControllerRoleForTrackedDeviceIndex(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_012_GetControllerRoleForTrackedDeviceIndex_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_012_GetControllerRoleForTrackedDeviceIndex, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_012_GetTrackedDeviceClass(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_012_GetTrackedDeviceClass_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_012_GetTrackedDeviceClass, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_012_IsTrackedDeviceConnected(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_012_IsTrackedDeviceConnected_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_012_IsTrackedDeviceConnected, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_012_GetBoolTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_012_GetBoolTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_012_GetBoolTrackedDeviceProperty, &params );
    return params._ret;
}

float __thiscall winIVRSystem_IVRSystem_012_GetFloatTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_012_GetFloatTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_012_GetFloatTrackedDeviceProperty, &params );
    return params._ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_012_GetInt32TrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_012_GetInt32TrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_012_GetInt32TrackedDeviceProperty, &params );
    return params._ret;
}

uint64_t __thiscall winIVRSystem_IVRSystem_012_GetUint64TrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_012_GetUint64TrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_012_GetUint64TrackedDeviceProperty, &params );
    return params._ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_012_GetMatrix34TrackedDeviceProperty(struct w_steam_iface *_this, HmdMatrix34_t *_ret, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_012_GetMatrix34TrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_012_GetMatrix34TrackedDeviceProperty, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_012_GetStringTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, char *pchValue, uint32_t unBufferSize, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_012_GetStringTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pchValue = pchValue,
        .unBufferSize = unBufferSize,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_012_GetStringTrackedDeviceProperty, &params );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_012_GetPropErrorNameFromEnum(struct w_steam_iface *_this, uint32_t error)
{
    struct IVRSystem_IVRSystem_012_GetPropErrorNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .error = error,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_012_GetPropErrorNameFromEnum, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_012_PollNextEvent(struct w_steam_iface *_this, w_VREvent_t_103 *pEvent, uint32_t uncbVREvent)
{
    w_VREvent_t_103 w_pEvent;
    struct IVRSystem_IVRSystem_012_PollNextEvent_params params =
    {
        .linux_side = _this->u_iface,
        .pEvent = pEvent ? &w_pEvent : NULL,
        .uncbVREvent = uncbVREvent,
    };
    TRACE("%p\n", _this);
    uncbVREvent = min( uncbVREvent, sizeof(w_pEvent) );
    if (pEvent) memcpy( &w_pEvent, pEvent, uncbVREvent );
    VRCLIENT_CALL( IVRSystem_IVRSystem_012_PollNextEvent, &params );
    if (pEvent) memcpy( pEvent, &w_pEvent, uncbVREvent );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_012_PollNextEventWithPose(struct w_steam_iface *_this, uint32_t eOrigin, w_VREvent_t_103 *pEvent, uint32_t uncbVREvent, TrackedDevicePose_t *pTrackedDevicePose)
{
    w_VREvent_t_103 w_pEvent;
    struct IVRSystem_IVRSystem_012_PollNextEventWithPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .pEvent = pEvent ? &w_pEvent : NULL,
        .uncbVREvent = uncbVREvent,
        .pTrackedDevicePose = pTrackedDevicePose,
    };
    TRACE("%p\n", _this);
    uncbVREvent = min( uncbVREvent, sizeof(w_pEvent) );
    if (pEvent) memcpy( &w_pEvent, pEvent, uncbVREvent );
    VRCLIENT_CALL( IVRSystem_IVRSystem_012_PollNextEventWithPose, &params );
    if (pEvent) memcpy( pEvent, &w_pEvent, uncbVREvent );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_012_GetEventTypeNameFromEnum(struct w_steam_iface *_this, uint32_t eType)
{
    struct IVRSystem_IVRSystem_012_GetEventTypeNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eType = eType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_012_GetEventTypeNameFromEnum, &params );
    return params._ret;
}

w_HiddenAreaMesh_t * __thiscall winIVRSystem_IVRSystem_012_GetHiddenAreaMesh(struct w_steam_iface *_this, w_HiddenAreaMesh_t *_ret, uint32_t eEye)
{
    struct IVRSystem_IVRSystem_012_GetHiddenAreaMesh_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_012_GetHiddenAreaMesh, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_012_GetControllerState(struct w_steam_iface *_this, uint32_t unControllerDeviceIndex, w_VRControllerState001_t *pControllerState)
{
    struct IVRSystem_IVRSystem_012_GetControllerState_params params =
    {
        .linux_side = _this->u_iface,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .pControllerState = pControllerState,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_012_GetControllerState, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_012_GetControllerStateWithPose(struct w_steam_iface *_this, uint32_t eOrigin, uint32_t unControllerDeviceIndex, w_VRControllerState001_t *pControllerState, TrackedDevicePose_t *pTrackedDevicePose)
{
    struct IVRSystem_IVRSystem_012_GetControllerStateWithPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .pControllerState = pControllerState,
        .pTrackedDevicePose = pTrackedDevicePose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_012_GetControllerStateWithPose, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_012_TriggerHapticPulse(struct w_steam_iface *_this, uint32_t unControllerDeviceIndex, uint32_t unAxisId, uint16_t usDurationMicroSec)
{
    struct IVRSystem_IVRSystem_012_TriggerHapticPulse_params params =
    {
        .linux_side = _this->u_iface,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .unAxisId = unAxisId,
        .usDurationMicroSec = usDurationMicroSec,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_012_TriggerHapticPulse, &params );
}

const char * __thiscall winIVRSystem_IVRSystem_012_GetButtonIdNameFromEnum(struct w_steam_iface *_this, uint32_t eButtonId)
{
    struct IVRSystem_IVRSystem_012_GetButtonIdNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eButtonId = eButtonId,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_012_GetButtonIdNameFromEnum, &params );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_012_GetControllerAxisTypeNameFromEnum(struct w_steam_iface *_this, uint32_t eAxisType)
{
    struct IVRSystem_IVRSystem_012_GetControllerAxisTypeNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eAxisType = eAxisType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_012_GetControllerAxisTypeNameFromEnum, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_012_CaptureInputFocus(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_012_CaptureInputFocus_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_012_CaptureInputFocus, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_012_ReleaseInputFocus(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_012_ReleaseInputFocus_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_012_ReleaseInputFocus, &params );
}

int8_t __thiscall winIVRSystem_IVRSystem_012_IsInputFocusCapturedByAnotherProcess(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_012_IsInputFocusCapturedByAnotherProcess_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_012_IsInputFocusCapturedByAnotherProcess, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_012_DriverDebugRequest(struct w_steam_iface *_this, uint32_t unDeviceIndex, const char *pchRequest, char *pchResponseBuffer, uint32_t unResponseBufferSize)
{
    struct IVRSystem_IVRSystem_012_DriverDebugRequest_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .pchRequest = pchRequest,
        .pchResponseBuffer = pchResponseBuffer,
        .unResponseBufferSize = unResponseBufferSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_012_DriverDebugRequest, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_012_PerformFirmwareUpdate(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_012_PerformFirmwareUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_012_PerformFirmwareUpdate, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_012_AcknowledgeQuit_Exiting(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_012_AcknowledgeQuit_Exiting_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_012_AcknowledgeQuit_Exiting, &params );
}

void __thiscall winIVRSystem_IVRSystem_012_AcknowledgeQuit_UserPrompt(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_012_AcknowledgeQuit_UserPrompt_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_012_AcknowledgeQuit_UserPrompt, &params );
}

extern vtable_ptr winIVRSystem_IVRSystem_012_vtable;

DEFINE_RTTI_DATA0(winIVRSystem_IVRSystem_012, 0, ".?AVIVRSystem@@")

__ASM_BLOCK_BEGIN(winIVRSystem_IVRSystem_012_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRSystem_IVRSystem_012(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRSystem_IVRSystem_012_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRSystem_IVRSystem_012(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRSystem_IVRSystem_012_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
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
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRSystem_IVRSystem_012_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetRecommendedRenderTargetSize, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetProjectionMatrix, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetProjectionRaw, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_ComputeDistortion, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetEyeToHeadTransform, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetTimeSinceLastVsync, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetD3D9AdapterIndex, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetDXGIOutputInfo, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_IsDisplayOnDesktop, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_SetDisplayVisibility, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetDeviceToAbsoluteTrackingPose, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_ResetSeatedZeroPose, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetRawZeroPoseToStandingAbsoluteTrackingPose, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetSortedTrackedDeviceIndicesOfClass, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetTrackedDeviceActivityLevel, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_ApplyTransform, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetTrackedDeviceIndexForControllerRole, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetControllerRoleForTrackedDeviceIndex, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetTrackedDeviceClass, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_IsTrackedDeviceConnected, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetBoolTrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetFloatTrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetInt32TrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetUint64TrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetMatrix34TrackedDeviceProperty, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetStringTrackedDeviceProperty, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetPropErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_PollNextEvent, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_PollNextEventWithPose, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetEventTypeNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetHiddenAreaMesh, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetControllerState, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetControllerStateWithPose, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_TriggerHapticPulse, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetButtonIdNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetControllerAxisTypeNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_CaptureInputFocus, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_ReleaseInputFocus, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_IsInputFocusCapturedByAnotherProcess, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_DriverDebugRequest, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_PerformFirmwareUpdate, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_AcknowledgeQuit_Exiting, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_AcknowledgeQuit_UserPrompt, 4)

void __thiscall winIVRSystem_IVRSystem_014_GetRecommendedRenderTargetSize(struct w_steam_iface *_this, uint32_t *pnWidth, uint32_t *pnHeight)
{
    struct IVRSystem_IVRSystem_014_GetRecommendedRenderTargetSize_params params =
    {
        .linux_side = _this->u_iface,
        .pnWidth = pnWidth,
        .pnHeight = pnHeight,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_014_GetRecommendedRenderTargetSize, &params );
}

HmdMatrix44_t * __thiscall winIVRSystem_IVRSystem_014_GetProjectionMatrix(struct w_steam_iface *_this, HmdMatrix44_t *_ret, uint32_t eEye, float fNearZ, float fFarZ, uint32_t eProjType)
{
    struct IVRSystem_IVRSystem_014_GetProjectionMatrix_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
        .fNearZ = fNearZ,
        .fFarZ = fFarZ,
        .eProjType = eProjType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_014_GetProjectionMatrix, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_014_GetProjectionRaw(struct w_steam_iface *_this, uint32_t eEye, float *pfLeft, float *pfRight, float *pfTop, float *pfBottom)
{
    struct IVRSystem_IVRSystem_014_GetProjectionRaw_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pfLeft = pfLeft,
        .pfRight = pfRight,
        .pfTop = pfTop,
        .pfBottom = pfBottom,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_014_GetProjectionRaw, &params );
}

int8_t __thiscall winIVRSystem_IVRSystem_014_ComputeDistortion(struct w_steam_iface *_this, uint32_t eEye, float fU, float fV, DistortionCoordinates_t *pDistortionCoordinates)
{
    struct IVRSystem_IVRSystem_014_ComputeDistortion_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .fU = fU,
        .fV = fV,
        .pDistortionCoordinates = pDistortionCoordinates,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_014_ComputeDistortion, &params );
    return params._ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_014_GetEyeToHeadTransform(struct w_steam_iface *_this, HmdMatrix34_t *_ret, uint32_t eEye)
{
    struct IVRSystem_IVRSystem_014_GetEyeToHeadTransform_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_014_GetEyeToHeadTransform, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_014_GetTimeSinceLastVsync(struct w_steam_iface *_this, float *pfSecondsSinceLastVsync, uint64_t *pulFrameCounter)
{
    struct IVRSystem_IVRSystem_014_GetTimeSinceLastVsync_params params =
    {
        .linux_side = _this->u_iface,
        .pfSecondsSinceLastVsync = pfSecondsSinceLastVsync,
        .pulFrameCounter = pulFrameCounter,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_014_GetTimeSinceLastVsync, &params );
    return params._ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_014_GetD3D9AdapterIndex(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_014_GetD3D9AdapterIndex_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_014_GetD3D9AdapterIndex, &params );
    return params._ret;
}

extern void __thiscall winIVRSystem_IVRSystem_014_GetDXGIOutputInfo(struct w_steam_iface *_this, int32_t *pnAdapterIndex);

int8_t __thiscall winIVRSystem_IVRSystem_014_IsDisplayOnDesktop(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_014_IsDisplayOnDesktop_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_014_IsDisplayOnDesktop, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_014_SetDisplayVisibility(struct w_steam_iface *_this, int8_t bIsVisibleOnDesktop)
{
    struct IVRSystem_IVRSystem_014_SetDisplayVisibility_params params =
    {
        .linux_side = _this->u_iface,
        .bIsVisibleOnDesktop = bIsVisibleOnDesktop,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_014_SetDisplayVisibility, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_014_GetDeviceToAbsoluteTrackingPose(struct w_steam_iface *_this, uint32_t eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t *pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    struct IVRSystem_IVRSystem_014_GetDeviceToAbsoluteTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .fPredictedSecondsToPhotonsFromNow = fPredictedSecondsToPhotonsFromNow,
        .pTrackedDevicePoseArray = pTrackedDevicePoseArray,
        .unTrackedDevicePoseArrayCount = unTrackedDevicePoseArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_014_GetDeviceToAbsoluteTrackingPose, &params );
}

void __thiscall winIVRSystem_IVRSystem_014_ResetSeatedZeroPose(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_014_ResetSeatedZeroPose_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_014_ResetSeatedZeroPose, &params );
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_014_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    struct IVRSystem_IVRSystem_014_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_014_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, &params );
    return params._ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_014_GetRawZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    struct IVRSystem_IVRSystem_014_GetRawZeroPoseToStandingAbsoluteTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_014_GetRawZeroPoseToStandingAbsoluteTrackingPose, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_014_GetSortedTrackedDeviceIndicesOfClass(struct w_steam_iface *_this, uint32_t eTrackedDeviceClass, uint32_t *punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, uint32_t unRelativeToTrackedDeviceIndex)
{
    struct IVRSystem_IVRSystem_014_GetSortedTrackedDeviceIndicesOfClass_params params =
    {
        .linux_side = _this->u_iface,
        .eTrackedDeviceClass = eTrackedDeviceClass,
        .punTrackedDeviceIndexArray = punTrackedDeviceIndexArray,
        .unTrackedDeviceIndexArrayCount = unTrackedDeviceIndexArrayCount,
        .unRelativeToTrackedDeviceIndex = unRelativeToTrackedDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_014_GetSortedTrackedDeviceIndicesOfClass, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_014_GetTrackedDeviceActivityLevel(struct w_steam_iface *_this, uint32_t unDeviceId)
{
    struct IVRSystem_IVRSystem_014_GetTrackedDeviceActivityLevel_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceId = unDeviceId,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_014_GetTrackedDeviceActivityLevel, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_014_ApplyTransform(struct w_steam_iface *_this, TrackedDevicePose_t *pOutputPose, const TrackedDevicePose_t *pTrackedDevicePose, const HmdMatrix34_t *pTransform)
{
    struct IVRSystem_IVRSystem_014_ApplyTransform_params params =
    {
        .linux_side = _this->u_iface,
        .pOutputPose = pOutputPose,
        .pTrackedDevicePose = pTrackedDevicePose,
        .pTransform = pTransform,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_014_ApplyTransform, &params );
}

uint32_t __thiscall winIVRSystem_IVRSystem_014_GetTrackedDeviceIndexForControllerRole(struct w_steam_iface *_this, uint32_t unDeviceType)
{
    struct IVRSystem_IVRSystem_014_GetTrackedDeviceIndexForControllerRole_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceType = unDeviceType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_014_GetTrackedDeviceIndexForControllerRole, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_014_GetControllerRoleForTrackedDeviceIndex(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_014_GetControllerRoleForTrackedDeviceIndex_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_014_GetControllerRoleForTrackedDeviceIndex, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_014_GetTrackedDeviceClass(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_014_GetTrackedDeviceClass_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_014_GetTrackedDeviceClass, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_014_IsTrackedDeviceConnected(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_014_IsTrackedDeviceConnected_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_014_IsTrackedDeviceConnected, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_014_GetBoolTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_014_GetBoolTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_014_GetBoolTrackedDeviceProperty, &params );
    return params._ret;
}

float __thiscall winIVRSystem_IVRSystem_014_GetFloatTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_014_GetFloatTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_014_GetFloatTrackedDeviceProperty, &params );
    return params._ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_014_GetInt32TrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_014_GetInt32TrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_014_GetInt32TrackedDeviceProperty, &params );
    return params._ret;
}

uint64_t __thiscall winIVRSystem_IVRSystem_014_GetUint64TrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_014_GetUint64TrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_014_GetUint64TrackedDeviceProperty, &params );
    return params._ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_014_GetMatrix34TrackedDeviceProperty(struct w_steam_iface *_this, HmdMatrix34_t *_ret, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_014_GetMatrix34TrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_014_GetMatrix34TrackedDeviceProperty, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_014_GetStringTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, char *pchValue, uint32_t unBufferSize, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_014_GetStringTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pchValue = pchValue,
        .unBufferSize = unBufferSize,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_014_GetStringTrackedDeviceProperty, &params );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_014_GetPropErrorNameFromEnum(struct w_steam_iface *_this, uint32_t error)
{
    struct IVRSystem_IVRSystem_014_GetPropErrorNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .error = error,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_014_GetPropErrorNameFromEnum, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_014_PollNextEvent(struct w_steam_iface *_this, w_VREvent_t_103 *pEvent, uint32_t uncbVREvent)
{
    w_VREvent_t_103 w_pEvent;
    struct IVRSystem_IVRSystem_014_PollNextEvent_params params =
    {
        .linux_side = _this->u_iface,
        .pEvent = pEvent ? &w_pEvent : NULL,
        .uncbVREvent = uncbVREvent,
    };
    TRACE("%p\n", _this);
    uncbVREvent = min( uncbVREvent, sizeof(w_pEvent) );
    if (pEvent) memcpy( &w_pEvent, pEvent, uncbVREvent );
    VRCLIENT_CALL( IVRSystem_IVRSystem_014_PollNextEvent, &params );
    if (pEvent) memcpy( pEvent, &w_pEvent, uncbVREvent );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_014_PollNextEventWithPose(struct w_steam_iface *_this, uint32_t eOrigin, w_VREvent_t_103 *pEvent, uint32_t uncbVREvent, TrackedDevicePose_t *pTrackedDevicePose)
{
    w_VREvent_t_103 w_pEvent;
    struct IVRSystem_IVRSystem_014_PollNextEventWithPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .pEvent = pEvent ? &w_pEvent : NULL,
        .uncbVREvent = uncbVREvent,
        .pTrackedDevicePose = pTrackedDevicePose,
    };
    TRACE("%p\n", _this);
    uncbVREvent = min( uncbVREvent, sizeof(w_pEvent) );
    if (pEvent) memcpy( &w_pEvent, pEvent, uncbVREvent );
    VRCLIENT_CALL( IVRSystem_IVRSystem_014_PollNextEventWithPose, &params );
    if (pEvent) memcpy( pEvent, &w_pEvent, uncbVREvent );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_014_GetEventTypeNameFromEnum(struct w_steam_iface *_this, uint32_t eType)
{
    struct IVRSystem_IVRSystem_014_GetEventTypeNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eType = eType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_014_GetEventTypeNameFromEnum, &params );
    return params._ret;
}

w_HiddenAreaMesh_t * __thiscall winIVRSystem_IVRSystem_014_GetHiddenAreaMesh(struct w_steam_iface *_this, w_HiddenAreaMesh_t *_ret, uint32_t eEye, uint32_t type)
{
    struct IVRSystem_IVRSystem_014_GetHiddenAreaMesh_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
        .type = type,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_014_GetHiddenAreaMesh, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_014_GetControllerState(struct w_steam_iface *_this, uint32_t unControllerDeviceIndex, w_VRControllerState001_t *pControllerState, uint32_t unControllerStateSize)
{
    w_VRControllerState001_t w_pControllerState;
    struct IVRSystem_IVRSystem_014_GetControllerState_params params =
    {
        .linux_side = _this->u_iface,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .pControllerState = pControllerState ? &w_pControllerState : NULL,
        .unControllerStateSize = unControllerStateSize,
    };
    TRACE("%p\n", _this);
    unControllerStateSize = min( unControllerStateSize, sizeof(w_pControllerState) );
    if (pControllerState) memcpy( &w_pControllerState, pControllerState, unControllerStateSize );
    VRCLIENT_CALL( IVRSystem_IVRSystem_014_GetControllerState, &params );
    if (pControllerState) memcpy( pControllerState, &w_pControllerState, unControllerStateSize );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_014_GetControllerStateWithPose(struct w_steam_iface *_this, uint32_t eOrigin, uint32_t unControllerDeviceIndex, w_VRControllerState001_t *pControllerState, uint32_t unControllerStateSize, TrackedDevicePose_t *pTrackedDevicePose)
{
    w_VRControllerState001_t w_pControllerState;
    struct IVRSystem_IVRSystem_014_GetControllerStateWithPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .pControllerState = pControllerState ? &w_pControllerState : NULL,
        .unControllerStateSize = unControllerStateSize,
        .pTrackedDevicePose = pTrackedDevicePose,
    };
    TRACE("%p\n", _this);
    unControllerStateSize = min( unControllerStateSize, sizeof(w_pControllerState) );
    if (pControllerState) memcpy( &w_pControllerState, pControllerState, unControllerStateSize );
    VRCLIENT_CALL( IVRSystem_IVRSystem_014_GetControllerStateWithPose, &params );
    if (pControllerState) memcpy( pControllerState, &w_pControllerState, unControllerStateSize );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_014_TriggerHapticPulse(struct w_steam_iface *_this, uint32_t unControllerDeviceIndex, uint32_t unAxisId, uint16_t usDurationMicroSec)
{
    struct IVRSystem_IVRSystem_014_TriggerHapticPulse_params params =
    {
        .linux_side = _this->u_iface,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .unAxisId = unAxisId,
        .usDurationMicroSec = usDurationMicroSec,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_014_TriggerHapticPulse, &params );
}

const char * __thiscall winIVRSystem_IVRSystem_014_GetButtonIdNameFromEnum(struct w_steam_iface *_this, uint32_t eButtonId)
{
    struct IVRSystem_IVRSystem_014_GetButtonIdNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eButtonId = eButtonId,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_014_GetButtonIdNameFromEnum, &params );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_014_GetControllerAxisTypeNameFromEnum(struct w_steam_iface *_this, uint32_t eAxisType)
{
    struct IVRSystem_IVRSystem_014_GetControllerAxisTypeNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eAxisType = eAxisType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_014_GetControllerAxisTypeNameFromEnum, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_014_CaptureInputFocus(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_014_CaptureInputFocus_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_014_CaptureInputFocus, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_014_ReleaseInputFocus(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_014_ReleaseInputFocus_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_014_ReleaseInputFocus, &params );
}

int8_t __thiscall winIVRSystem_IVRSystem_014_IsInputFocusCapturedByAnotherProcess(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_014_IsInputFocusCapturedByAnotherProcess_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_014_IsInputFocusCapturedByAnotherProcess, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_014_DriverDebugRequest(struct w_steam_iface *_this, uint32_t unDeviceIndex, const char *pchRequest, char *pchResponseBuffer, uint32_t unResponseBufferSize)
{
    struct IVRSystem_IVRSystem_014_DriverDebugRequest_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .pchRequest = pchRequest,
        .pchResponseBuffer = pchResponseBuffer,
        .unResponseBufferSize = unResponseBufferSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_014_DriverDebugRequest, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_014_PerformFirmwareUpdate(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_014_PerformFirmwareUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_014_PerformFirmwareUpdate, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_014_AcknowledgeQuit_Exiting(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_014_AcknowledgeQuit_Exiting_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_014_AcknowledgeQuit_Exiting, &params );
}

void __thiscall winIVRSystem_IVRSystem_014_AcknowledgeQuit_UserPrompt(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_014_AcknowledgeQuit_UserPrompt_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_014_AcknowledgeQuit_UserPrompt, &params );
}

extern vtable_ptr winIVRSystem_IVRSystem_014_vtable;

DEFINE_RTTI_DATA0(winIVRSystem_IVRSystem_014, 0, ".?AVIVRSystem@@")

__ASM_BLOCK_BEGIN(winIVRSystem_IVRSystem_014_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRSystem_IVRSystem_014(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRSystem_IVRSystem_014_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRSystem_IVRSystem_014(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRSystem_IVRSystem_014_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
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
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRSystem_IVRSystem_014_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetRecommendedRenderTargetSize, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetProjectionMatrix, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetProjectionRaw, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_ComputeDistortion, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetEyeToHeadTransform, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetTimeSinceLastVsync, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetD3D9AdapterIndex, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetDXGIOutputInfo, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_IsDisplayOnDesktop, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_SetDisplayVisibility, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetDeviceToAbsoluteTrackingPose, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_ResetSeatedZeroPose, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetRawZeroPoseToStandingAbsoluteTrackingPose, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetSortedTrackedDeviceIndicesOfClass, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetTrackedDeviceActivityLevel, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_ApplyTransform, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetTrackedDeviceIndexForControllerRole, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetControllerRoleForTrackedDeviceIndex, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetTrackedDeviceClass, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_IsTrackedDeviceConnected, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetBoolTrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetFloatTrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetInt32TrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetUint64TrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetMatrix34TrackedDeviceProperty, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetStringTrackedDeviceProperty, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetPropErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_PollNextEvent, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_PollNextEventWithPose, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetEventTypeNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetHiddenAreaMesh, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetControllerState, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetControllerStateWithPose, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_TriggerHapticPulse, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetButtonIdNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetControllerAxisTypeNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_CaptureInputFocus, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_ReleaseInputFocus, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_IsInputFocusCapturedByAnotherProcess, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_DriverDebugRequest, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_PerformFirmwareUpdate, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_AcknowledgeQuit_Exiting, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_AcknowledgeQuit_UserPrompt, 4)

void __thiscall winIVRSystem_IVRSystem_015_GetRecommendedRenderTargetSize(struct w_steam_iface *_this, uint32_t *pnWidth, uint32_t *pnHeight)
{
    struct IVRSystem_IVRSystem_015_GetRecommendedRenderTargetSize_params params =
    {
        .linux_side = _this->u_iface,
        .pnWidth = pnWidth,
        .pnHeight = pnHeight,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_015_GetRecommendedRenderTargetSize, &params );
}

HmdMatrix44_t * __thiscall winIVRSystem_IVRSystem_015_GetProjectionMatrix(struct w_steam_iface *_this, HmdMatrix44_t *_ret, uint32_t eEye, float fNearZ, float fFarZ)
{
    struct IVRSystem_IVRSystem_015_GetProjectionMatrix_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
        .fNearZ = fNearZ,
        .fFarZ = fFarZ,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_015_GetProjectionMatrix, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_015_GetProjectionRaw(struct w_steam_iface *_this, uint32_t eEye, float *pfLeft, float *pfRight, float *pfTop, float *pfBottom)
{
    struct IVRSystem_IVRSystem_015_GetProjectionRaw_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pfLeft = pfLeft,
        .pfRight = pfRight,
        .pfTop = pfTop,
        .pfBottom = pfBottom,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_015_GetProjectionRaw, &params );
}

int8_t __thiscall winIVRSystem_IVRSystem_015_ComputeDistortion(struct w_steam_iface *_this, uint32_t eEye, float fU, float fV, DistortionCoordinates_t *pDistortionCoordinates)
{
    struct IVRSystem_IVRSystem_015_ComputeDistortion_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .fU = fU,
        .fV = fV,
        .pDistortionCoordinates = pDistortionCoordinates,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_015_ComputeDistortion, &params );
    return params._ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_015_GetEyeToHeadTransform(struct w_steam_iface *_this, HmdMatrix34_t *_ret, uint32_t eEye)
{
    struct IVRSystem_IVRSystem_015_GetEyeToHeadTransform_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_015_GetEyeToHeadTransform, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_015_GetTimeSinceLastVsync(struct w_steam_iface *_this, float *pfSecondsSinceLastVsync, uint64_t *pulFrameCounter)
{
    struct IVRSystem_IVRSystem_015_GetTimeSinceLastVsync_params params =
    {
        .linux_side = _this->u_iface,
        .pfSecondsSinceLastVsync = pfSecondsSinceLastVsync,
        .pulFrameCounter = pulFrameCounter,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_015_GetTimeSinceLastVsync, &params );
    return params._ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_015_GetD3D9AdapterIndex(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_015_GetD3D9AdapterIndex_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_015_GetD3D9AdapterIndex, &params );
    return params._ret;
}

extern void __thiscall winIVRSystem_IVRSystem_015_GetDXGIOutputInfo(struct w_steam_iface *_this, int32_t *pnAdapterIndex);

int8_t __thiscall winIVRSystem_IVRSystem_015_IsDisplayOnDesktop(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_015_IsDisplayOnDesktop_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_015_IsDisplayOnDesktop, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_015_SetDisplayVisibility(struct w_steam_iface *_this, int8_t bIsVisibleOnDesktop)
{
    struct IVRSystem_IVRSystem_015_SetDisplayVisibility_params params =
    {
        .linux_side = _this->u_iface,
        .bIsVisibleOnDesktop = bIsVisibleOnDesktop,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_015_SetDisplayVisibility, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_015_GetDeviceToAbsoluteTrackingPose(struct w_steam_iface *_this, uint32_t eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t *pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    struct IVRSystem_IVRSystem_015_GetDeviceToAbsoluteTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .fPredictedSecondsToPhotonsFromNow = fPredictedSecondsToPhotonsFromNow,
        .pTrackedDevicePoseArray = pTrackedDevicePoseArray,
        .unTrackedDevicePoseArrayCount = unTrackedDevicePoseArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_015_GetDeviceToAbsoluteTrackingPose, &params );
}

void __thiscall winIVRSystem_IVRSystem_015_ResetSeatedZeroPose(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_015_ResetSeatedZeroPose_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_015_ResetSeatedZeroPose, &params );
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_015_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    struct IVRSystem_IVRSystem_015_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_015_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, &params );
    return params._ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_015_GetRawZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    struct IVRSystem_IVRSystem_015_GetRawZeroPoseToStandingAbsoluteTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_015_GetRawZeroPoseToStandingAbsoluteTrackingPose, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_015_GetSortedTrackedDeviceIndicesOfClass(struct w_steam_iface *_this, uint32_t eTrackedDeviceClass, uint32_t *punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, uint32_t unRelativeToTrackedDeviceIndex)
{
    struct IVRSystem_IVRSystem_015_GetSortedTrackedDeviceIndicesOfClass_params params =
    {
        .linux_side = _this->u_iface,
        .eTrackedDeviceClass = eTrackedDeviceClass,
        .punTrackedDeviceIndexArray = punTrackedDeviceIndexArray,
        .unTrackedDeviceIndexArrayCount = unTrackedDeviceIndexArrayCount,
        .unRelativeToTrackedDeviceIndex = unRelativeToTrackedDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_015_GetSortedTrackedDeviceIndicesOfClass, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_015_GetTrackedDeviceActivityLevel(struct w_steam_iface *_this, uint32_t unDeviceId)
{
    struct IVRSystem_IVRSystem_015_GetTrackedDeviceActivityLevel_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceId = unDeviceId,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_015_GetTrackedDeviceActivityLevel, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_015_ApplyTransform(struct w_steam_iface *_this, TrackedDevicePose_t *pOutputPose, const TrackedDevicePose_t *pTrackedDevicePose, const HmdMatrix34_t *pTransform)
{
    struct IVRSystem_IVRSystem_015_ApplyTransform_params params =
    {
        .linux_side = _this->u_iface,
        .pOutputPose = pOutputPose,
        .pTrackedDevicePose = pTrackedDevicePose,
        .pTransform = pTransform,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_015_ApplyTransform, &params );
}

uint32_t __thiscall winIVRSystem_IVRSystem_015_GetTrackedDeviceIndexForControllerRole(struct w_steam_iface *_this, uint32_t unDeviceType)
{
    struct IVRSystem_IVRSystem_015_GetTrackedDeviceIndexForControllerRole_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceType = unDeviceType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_015_GetTrackedDeviceIndexForControllerRole, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_015_GetControllerRoleForTrackedDeviceIndex(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_015_GetControllerRoleForTrackedDeviceIndex_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_015_GetControllerRoleForTrackedDeviceIndex, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_015_GetTrackedDeviceClass(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_015_GetTrackedDeviceClass_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_015_GetTrackedDeviceClass, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_015_IsTrackedDeviceConnected(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_015_IsTrackedDeviceConnected_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_015_IsTrackedDeviceConnected, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_015_GetBoolTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_015_GetBoolTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_015_GetBoolTrackedDeviceProperty, &params );
    return params._ret;
}

float __thiscall winIVRSystem_IVRSystem_015_GetFloatTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_015_GetFloatTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_015_GetFloatTrackedDeviceProperty, &params );
    return params._ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_015_GetInt32TrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_015_GetInt32TrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_015_GetInt32TrackedDeviceProperty, &params );
    return params._ret;
}

uint64_t __thiscall winIVRSystem_IVRSystem_015_GetUint64TrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_015_GetUint64TrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_015_GetUint64TrackedDeviceProperty, &params );
    return params._ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_015_GetMatrix34TrackedDeviceProperty(struct w_steam_iface *_this, HmdMatrix34_t *_ret, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_015_GetMatrix34TrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_015_GetMatrix34TrackedDeviceProperty, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_015_GetStringTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, char *pchValue, uint32_t unBufferSize, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_015_GetStringTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pchValue = pchValue,
        .unBufferSize = unBufferSize,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_015_GetStringTrackedDeviceProperty, &params );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_015_GetPropErrorNameFromEnum(struct w_steam_iface *_this, uint32_t error)
{
    struct IVRSystem_IVRSystem_015_GetPropErrorNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .error = error,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_015_GetPropErrorNameFromEnum, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_015_PollNextEvent(struct w_steam_iface *_this, w_VREvent_t_106 *pEvent, uint32_t uncbVREvent)
{
    w_VREvent_t_106 w_pEvent;
    struct IVRSystem_IVRSystem_015_PollNextEvent_params params =
    {
        .linux_side = _this->u_iface,
        .pEvent = pEvent ? &w_pEvent : NULL,
        .uncbVREvent = uncbVREvent,
    };
    TRACE("%p\n", _this);
    uncbVREvent = min( uncbVREvent, sizeof(w_pEvent) );
    if (pEvent) memcpy( &w_pEvent, pEvent, uncbVREvent );
    VRCLIENT_CALL( IVRSystem_IVRSystem_015_PollNextEvent, &params );
    if (pEvent) memcpy( pEvent, &w_pEvent, uncbVREvent );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_015_PollNextEventWithPose(struct w_steam_iface *_this, uint32_t eOrigin, w_VREvent_t_106 *pEvent, uint32_t uncbVREvent, TrackedDevicePose_t *pTrackedDevicePose)
{
    w_VREvent_t_106 w_pEvent;
    struct IVRSystem_IVRSystem_015_PollNextEventWithPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .pEvent = pEvent ? &w_pEvent : NULL,
        .uncbVREvent = uncbVREvent,
        .pTrackedDevicePose = pTrackedDevicePose,
    };
    TRACE("%p\n", _this);
    uncbVREvent = min( uncbVREvent, sizeof(w_pEvent) );
    if (pEvent) memcpy( &w_pEvent, pEvent, uncbVREvent );
    VRCLIENT_CALL( IVRSystem_IVRSystem_015_PollNextEventWithPose, &params );
    if (pEvent) memcpy( pEvent, &w_pEvent, uncbVREvent );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_015_GetEventTypeNameFromEnum(struct w_steam_iface *_this, uint32_t eType)
{
    struct IVRSystem_IVRSystem_015_GetEventTypeNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eType = eType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_015_GetEventTypeNameFromEnum, &params );
    return params._ret;
}

w_HiddenAreaMesh_t * __thiscall winIVRSystem_IVRSystem_015_GetHiddenAreaMesh(struct w_steam_iface *_this, w_HiddenAreaMesh_t *_ret, uint32_t eEye, uint32_t type)
{
    struct IVRSystem_IVRSystem_015_GetHiddenAreaMesh_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
        .type = type,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_015_GetHiddenAreaMesh, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_015_GetControllerState(struct w_steam_iface *_this, uint32_t unControllerDeviceIndex, w_VRControllerState001_t *pControllerState, uint32_t unControllerStateSize)
{
    w_VRControllerState001_t w_pControllerState;
    struct IVRSystem_IVRSystem_015_GetControllerState_params params =
    {
        .linux_side = _this->u_iface,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .pControllerState = pControllerState ? &w_pControllerState : NULL,
        .unControllerStateSize = unControllerStateSize,
    };
    TRACE("%p\n", _this);
    unControllerStateSize = min( unControllerStateSize, sizeof(w_pControllerState) );
    if (pControllerState) memcpy( &w_pControllerState, pControllerState, unControllerStateSize );
    VRCLIENT_CALL( IVRSystem_IVRSystem_015_GetControllerState, &params );
    if (pControllerState) memcpy( pControllerState, &w_pControllerState, unControllerStateSize );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_015_GetControllerStateWithPose(struct w_steam_iface *_this, uint32_t eOrigin, uint32_t unControllerDeviceIndex, w_VRControllerState001_t *pControllerState, uint32_t unControllerStateSize, TrackedDevicePose_t *pTrackedDevicePose)
{
    w_VRControllerState001_t w_pControllerState;
    struct IVRSystem_IVRSystem_015_GetControllerStateWithPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .pControllerState = pControllerState ? &w_pControllerState : NULL,
        .unControllerStateSize = unControllerStateSize,
        .pTrackedDevicePose = pTrackedDevicePose,
    };
    TRACE("%p\n", _this);
    unControllerStateSize = min( unControllerStateSize, sizeof(w_pControllerState) );
    if (pControllerState) memcpy( &w_pControllerState, pControllerState, unControllerStateSize );
    VRCLIENT_CALL( IVRSystem_IVRSystem_015_GetControllerStateWithPose, &params );
    if (pControllerState) memcpy( pControllerState, &w_pControllerState, unControllerStateSize );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_015_TriggerHapticPulse(struct w_steam_iface *_this, uint32_t unControllerDeviceIndex, uint32_t unAxisId, uint16_t usDurationMicroSec)
{
    struct IVRSystem_IVRSystem_015_TriggerHapticPulse_params params =
    {
        .linux_side = _this->u_iface,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .unAxisId = unAxisId,
        .usDurationMicroSec = usDurationMicroSec,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_015_TriggerHapticPulse, &params );
}

const char * __thiscall winIVRSystem_IVRSystem_015_GetButtonIdNameFromEnum(struct w_steam_iface *_this, uint32_t eButtonId)
{
    struct IVRSystem_IVRSystem_015_GetButtonIdNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eButtonId = eButtonId,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_015_GetButtonIdNameFromEnum, &params );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_015_GetControllerAxisTypeNameFromEnum(struct w_steam_iface *_this, uint32_t eAxisType)
{
    struct IVRSystem_IVRSystem_015_GetControllerAxisTypeNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eAxisType = eAxisType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_015_GetControllerAxisTypeNameFromEnum, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_015_CaptureInputFocus(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_015_CaptureInputFocus_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_015_CaptureInputFocus, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_015_ReleaseInputFocus(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_015_ReleaseInputFocus_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_015_ReleaseInputFocus, &params );
}

int8_t __thiscall winIVRSystem_IVRSystem_015_IsInputFocusCapturedByAnotherProcess(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_015_IsInputFocusCapturedByAnotherProcess_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_015_IsInputFocusCapturedByAnotherProcess, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_015_DriverDebugRequest(struct w_steam_iface *_this, uint32_t unDeviceIndex, const char *pchRequest, char *pchResponseBuffer, uint32_t unResponseBufferSize)
{
    struct IVRSystem_IVRSystem_015_DriverDebugRequest_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .pchRequest = pchRequest,
        .pchResponseBuffer = pchResponseBuffer,
        .unResponseBufferSize = unResponseBufferSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_015_DriverDebugRequest, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_015_PerformFirmwareUpdate(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_015_PerformFirmwareUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_015_PerformFirmwareUpdate, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_015_AcknowledgeQuit_Exiting(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_015_AcknowledgeQuit_Exiting_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_015_AcknowledgeQuit_Exiting, &params );
}

void __thiscall winIVRSystem_IVRSystem_015_AcknowledgeQuit_UserPrompt(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_015_AcknowledgeQuit_UserPrompt_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_015_AcknowledgeQuit_UserPrompt, &params );
}

extern vtable_ptr winIVRSystem_IVRSystem_015_vtable;

DEFINE_RTTI_DATA0(winIVRSystem_IVRSystem_015, 0, ".?AVIVRSystem@@")

__ASM_BLOCK_BEGIN(winIVRSystem_IVRSystem_015_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRSystem_IVRSystem_015(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRSystem_IVRSystem_015_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRSystem_IVRSystem_015(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRSystem_IVRSystem_015_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
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
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRSystem_IVRSystem_015_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetRecommendedRenderTargetSize, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetProjectionMatrix, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetProjectionRaw, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_ComputeDistortion, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetEyeToHeadTransform, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetTimeSinceLastVsync, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetD3D9AdapterIndex, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetDXGIOutputInfo, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetOutputDevice, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_IsDisplayOnDesktop, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_SetDisplayVisibility, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetDeviceToAbsoluteTrackingPose, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_ResetSeatedZeroPose, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetRawZeroPoseToStandingAbsoluteTrackingPose, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetSortedTrackedDeviceIndicesOfClass, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetTrackedDeviceActivityLevel, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_ApplyTransform, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetTrackedDeviceIndexForControllerRole, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetControllerRoleForTrackedDeviceIndex, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetTrackedDeviceClass, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_IsTrackedDeviceConnected, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetBoolTrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetFloatTrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetInt32TrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetUint64TrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetMatrix34TrackedDeviceProperty, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetStringTrackedDeviceProperty, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetPropErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_PollNextEvent, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_PollNextEventWithPose, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetEventTypeNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetHiddenAreaMesh, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetControllerState, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetControllerStateWithPose, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_TriggerHapticPulse, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetButtonIdNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetControllerAxisTypeNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_CaptureInputFocus, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_ReleaseInputFocus, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_IsInputFocusCapturedByAnotherProcess, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_DriverDebugRequest, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_PerformFirmwareUpdate, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_AcknowledgeQuit_Exiting, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_AcknowledgeQuit_UserPrompt, 4)

void __thiscall winIVRSystem_IVRSystem_016_GetRecommendedRenderTargetSize(struct w_steam_iface *_this, uint32_t *pnWidth, uint32_t *pnHeight)
{
    struct IVRSystem_IVRSystem_016_GetRecommendedRenderTargetSize_params params =
    {
        .linux_side = _this->u_iface,
        .pnWidth = pnWidth,
        .pnHeight = pnHeight,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_016_GetRecommendedRenderTargetSize, &params );
}

HmdMatrix44_t * __thiscall winIVRSystem_IVRSystem_016_GetProjectionMatrix(struct w_steam_iface *_this, HmdMatrix44_t *_ret, uint32_t eEye, float fNearZ, float fFarZ)
{
    struct IVRSystem_IVRSystem_016_GetProjectionMatrix_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
        .fNearZ = fNearZ,
        .fFarZ = fFarZ,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_016_GetProjectionMatrix, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_016_GetProjectionRaw(struct w_steam_iface *_this, uint32_t eEye, float *pfLeft, float *pfRight, float *pfTop, float *pfBottom)
{
    struct IVRSystem_IVRSystem_016_GetProjectionRaw_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pfLeft = pfLeft,
        .pfRight = pfRight,
        .pfTop = pfTop,
        .pfBottom = pfBottom,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_016_GetProjectionRaw, &params );
}

int8_t __thiscall winIVRSystem_IVRSystem_016_ComputeDistortion(struct w_steam_iface *_this, uint32_t eEye, float fU, float fV, DistortionCoordinates_t *pDistortionCoordinates)
{
    struct IVRSystem_IVRSystem_016_ComputeDistortion_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .fU = fU,
        .fV = fV,
        .pDistortionCoordinates = pDistortionCoordinates,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_016_ComputeDistortion, &params );
    return params._ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_016_GetEyeToHeadTransform(struct w_steam_iface *_this, HmdMatrix34_t *_ret, uint32_t eEye)
{
    struct IVRSystem_IVRSystem_016_GetEyeToHeadTransform_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_016_GetEyeToHeadTransform, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_016_GetTimeSinceLastVsync(struct w_steam_iface *_this, float *pfSecondsSinceLastVsync, uint64_t *pulFrameCounter)
{
    struct IVRSystem_IVRSystem_016_GetTimeSinceLastVsync_params params =
    {
        .linux_side = _this->u_iface,
        .pfSecondsSinceLastVsync = pfSecondsSinceLastVsync,
        .pulFrameCounter = pulFrameCounter,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_016_GetTimeSinceLastVsync, &params );
    return params._ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_016_GetD3D9AdapterIndex(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_016_GetD3D9AdapterIndex_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_016_GetD3D9AdapterIndex, &params );
    return params._ret;
}

extern void __thiscall winIVRSystem_IVRSystem_016_GetDXGIOutputInfo(struct w_steam_iface *_this, int32_t *pnAdapterIndex);

void __thiscall winIVRSystem_IVRSystem_016_GetOutputDevice(struct w_steam_iface *_this, uint64_t *pnDevice, uint32_t textureType)
{
    struct IVRSystem_IVRSystem_016_GetOutputDevice_params params =
    {
        .linux_side = _this->u_iface,
        .pnDevice = pnDevice,
        .textureType = textureType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_016_GetOutputDevice, &params );
}

int8_t __thiscall winIVRSystem_IVRSystem_016_IsDisplayOnDesktop(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_016_IsDisplayOnDesktop_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_016_IsDisplayOnDesktop, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_016_SetDisplayVisibility(struct w_steam_iface *_this, int8_t bIsVisibleOnDesktop)
{
    struct IVRSystem_IVRSystem_016_SetDisplayVisibility_params params =
    {
        .linux_side = _this->u_iface,
        .bIsVisibleOnDesktop = bIsVisibleOnDesktop,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_016_SetDisplayVisibility, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_016_GetDeviceToAbsoluteTrackingPose(struct w_steam_iface *_this, uint32_t eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t *pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    struct IVRSystem_IVRSystem_016_GetDeviceToAbsoluteTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .fPredictedSecondsToPhotonsFromNow = fPredictedSecondsToPhotonsFromNow,
        .pTrackedDevicePoseArray = pTrackedDevicePoseArray,
        .unTrackedDevicePoseArrayCount = unTrackedDevicePoseArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_016_GetDeviceToAbsoluteTrackingPose, &params );
}

void __thiscall winIVRSystem_IVRSystem_016_ResetSeatedZeroPose(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_016_ResetSeatedZeroPose_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_016_ResetSeatedZeroPose, &params );
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_016_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    struct IVRSystem_IVRSystem_016_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_016_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, &params );
    return params._ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_016_GetRawZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    struct IVRSystem_IVRSystem_016_GetRawZeroPoseToStandingAbsoluteTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_016_GetRawZeroPoseToStandingAbsoluteTrackingPose, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_016_GetSortedTrackedDeviceIndicesOfClass(struct w_steam_iface *_this, uint32_t eTrackedDeviceClass, uint32_t *punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, uint32_t unRelativeToTrackedDeviceIndex)
{
    struct IVRSystem_IVRSystem_016_GetSortedTrackedDeviceIndicesOfClass_params params =
    {
        .linux_side = _this->u_iface,
        .eTrackedDeviceClass = eTrackedDeviceClass,
        .punTrackedDeviceIndexArray = punTrackedDeviceIndexArray,
        .unTrackedDeviceIndexArrayCount = unTrackedDeviceIndexArrayCount,
        .unRelativeToTrackedDeviceIndex = unRelativeToTrackedDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_016_GetSortedTrackedDeviceIndicesOfClass, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_016_GetTrackedDeviceActivityLevel(struct w_steam_iface *_this, uint32_t unDeviceId)
{
    struct IVRSystem_IVRSystem_016_GetTrackedDeviceActivityLevel_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceId = unDeviceId,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_016_GetTrackedDeviceActivityLevel, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_016_ApplyTransform(struct w_steam_iface *_this, TrackedDevicePose_t *pOutputPose, const TrackedDevicePose_t *pTrackedDevicePose, const HmdMatrix34_t *pTransform)
{
    struct IVRSystem_IVRSystem_016_ApplyTransform_params params =
    {
        .linux_side = _this->u_iface,
        .pOutputPose = pOutputPose,
        .pTrackedDevicePose = pTrackedDevicePose,
        .pTransform = pTransform,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_016_ApplyTransform, &params );
}

uint32_t __thiscall winIVRSystem_IVRSystem_016_GetTrackedDeviceIndexForControllerRole(struct w_steam_iface *_this, uint32_t unDeviceType)
{
    struct IVRSystem_IVRSystem_016_GetTrackedDeviceIndexForControllerRole_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceType = unDeviceType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_016_GetTrackedDeviceIndexForControllerRole, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_016_GetControllerRoleForTrackedDeviceIndex(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_016_GetControllerRoleForTrackedDeviceIndex_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_016_GetControllerRoleForTrackedDeviceIndex, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_016_GetTrackedDeviceClass(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_016_GetTrackedDeviceClass_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_016_GetTrackedDeviceClass, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_016_IsTrackedDeviceConnected(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_016_IsTrackedDeviceConnected_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_016_IsTrackedDeviceConnected, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_016_GetBoolTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_016_GetBoolTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_016_GetBoolTrackedDeviceProperty, &params );
    return params._ret;
}

float __thiscall winIVRSystem_IVRSystem_016_GetFloatTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_016_GetFloatTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_016_GetFloatTrackedDeviceProperty, &params );
    return params._ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_016_GetInt32TrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_016_GetInt32TrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_016_GetInt32TrackedDeviceProperty, &params );
    return params._ret;
}

uint64_t __thiscall winIVRSystem_IVRSystem_016_GetUint64TrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_016_GetUint64TrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_016_GetUint64TrackedDeviceProperty, &params );
    return params._ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_016_GetMatrix34TrackedDeviceProperty(struct w_steam_iface *_this, HmdMatrix34_t *_ret, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_016_GetMatrix34TrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_016_GetMatrix34TrackedDeviceProperty, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_016_GetStringTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, char *pchValue, uint32_t unBufferSize, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_016_GetStringTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pchValue = pchValue,
        .unBufferSize = unBufferSize,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_016_GetStringTrackedDeviceProperty, &params );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_016_GetPropErrorNameFromEnum(struct w_steam_iface *_this, uint32_t error)
{
    struct IVRSystem_IVRSystem_016_GetPropErrorNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .error = error,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_016_GetPropErrorNameFromEnum, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_016_PollNextEvent(struct w_steam_iface *_this, w_VREvent_t_106 *pEvent, uint32_t uncbVREvent)
{
    w_VREvent_t_106 w_pEvent;
    struct IVRSystem_IVRSystem_016_PollNextEvent_params params =
    {
        .linux_side = _this->u_iface,
        .pEvent = pEvent ? &w_pEvent : NULL,
        .uncbVREvent = uncbVREvent,
    };
    TRACE("%p\n", _this);
    uncbVREvent = min( uncbVREvent, sizeof(w_pEvent) );
    if (pEvent) memcpy( &w_pEvent, pEvent, uncbVREvent );
    VRCLIENT_CALL( IVRSystem_IVRSystem_016_PollNextEvent, &params );
    if (pEvent) memcpy( pEvent, &w_pEvent, uncbVREvent );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_016_PollNextEventWithPose(struct w_steam_iface *_this, uint32_t eOrigin, w_VREvent_t_106 *pEvent, uint32_t uncbVREvent, TrackedDevicePose_t *pTrackedDevicePose)
{
    w_VREvent_t_106 w_pEvent;
    struct IVRSystem_IVRSystem_016_PollNextEventWithPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .pEvent = pEvent ? &w_pEvent : NULL,
        .uncbVREvent = uncbVREvent,
        .pTrackedDevicePose = pTrackedDevicePose,
    };
    TRACE("%p\n", _this);
    uncbVREvent = min( uncbVREvent, sizeof(w_pEvent) );
    if (pEvent) memcpy( &w_pEvent, pEvent, uncbVREvent );
    VRCLIENT_CALL( IVRSystem_IVRSystem_016_PollNextEventWithPose, &params );
    if (pEvent) memcpy( pEvent, &w_pEvent, uncbVREvent );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_016_GetEventTypeNameFromEnum(struct w_steam_iface *_this, uint32_t eType)
{
    struct IVRSystem_IVRSystem_016_GetEventTypeNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eType = eType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_016_GetEventTypeNameFromEnum, &params );
    return params._ret;
}

w_HiddenAreaMesh_t * __thiscall winIVRSystem_IVRSystem_016_GetHiddenAreaMesh(struct w_steam_iface *_this, w_HiddenAreaMesh_t *_ret, uint32_t eEye, uint32_t type)
{
    struct IVRSystem_IVRSystem_016_GetHiddenAreaMesh_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
        .type = type,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_016_GetHiddenAreaMesh, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_016_GetControllerState(struct w_steam_iface *_this, uint32_t unControllerDeviceIndex, w_VRControllerState001_t *pControllerState, uint32_t unControllerStateSize)
{
    w_VRControllerState001_t w_pControllerState;
    struct IVRSystem_IVRSystem_016_GetControllerState_params params =
    {
        .linux_side = _this->u_iface,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .pControllerState = pControllerState ? &w_pControllerState : NULL,
        .unControllerStateSize = unControllerStateSize,
    };
    TRACE("%p\n", _this);
    unControllerStateSize = min( unControllerStateSize, sizeof(w_pControllerState) );
    if (pControllerState) memcpy( &w_pControllerState, pControllerState, unControllerStateSize );
    VRCLIENT_CALL( IVRSystem_IVRSystem_016_GetControllerState, &params );
    if (pControllerState) memcpy( pControllerState, &w_pControllerState, unControllerStateSize );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_016_GetControllerStateWithPose(struct w_steam_iface *_this, uint32_t eOrigin, uint32_t unControllerDeviceIndex, w_VRControllerState001_t *pControllerState, uint32_t unControllerStateSize, TrackedDevicePose_t *pTrackedDevicePose)
{
    w_VRControllerState001_t w_pControllerState;
    struct IVRSystem_IVRSystem_016_GetControllerStateWithPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .pControllerState = pControllerState ? &w_pControllerState : NULL,
        .unControllerStateSize = unControllerStateSize,
        .pTrackedDevicePose = pTrackedDevicePose,
    };
    TRACE("%p\n", _this);
    unControllerStateSize = min( unControllerStateSize, sizeof(w_pControllerState) );
    if (pControllerState) memcpy( &w_pControllerState, pControllerState, unControllerStateSize );
    VRCLIENT_CALL( IVRSystem_IVRSystem_016_GetControllerStateWithPose, &params );
    if (pControllerState) memcpy( pControllerState, &w_pControllerState, unControllerStateSize );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_016_TriggerHapticPulse(struct w_steam_iface *_this, uint32_t unControllerDeviceIndex, uint32_t unAxisId, uint16_t usDurationMicroSec)
{
    struct IVRSystem_IVRSystem_016_TriggerHapticPulse_params params =
    {
        .linux_side = _this->u_iface,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .unAxisId = unAxisId,
        .usDurationMicroSec = usDurationMicroSec,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_016_TriggerHapticPulse, &params );
}

const char * __thiscall winIVRSystem_IVRSystem_016_GetButtonIdNameFromEnum(struct w_steam_iface *_this, uint32_t eButtonId)
{
    struct IVRSystem_IVRSystem_016_GetButtonIdNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eButtonId = eButtonId,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_016_GetButtonIdNameFromEnum, &params );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_016_GetControllerAxisTypeNameFromEnum(struct w_steam_iface *_this, uint32_t eAxisType)
{
    struct IVRSystem_IVRSystem_016_GetControllerAxisTypeNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eAxisType = eAxisType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_016_GetControllerAxisTypeNameFromEnum, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_016_CaptureInputFocus(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_016_CaptureInputFocus_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_016_CaptureInputFocus, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_016_ReleaseInputFocus(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_016_ReleaseInputFocus_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_016_ReleaseInputFocus, &params );
}

int8_t __thiscall winIVRSystem_IVRSystem_016_IsInputFocusCapturedByAnotherProcess(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_016_IsInputFocusCapturedByAnotherProcess_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_016_IsInputFocusCapturedByAnotherProcess, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_016_DriverDebugRequest(struct w_steam_iface *_this, uint32_t unDeviceIndex, const char *pchRequest, char *pchResponseBuffer, uint32_t unResponseBufferSize)
{
    struct IVRSystem_IVRSystem_016_DriverDebugRequest_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .pchRequest = pchRequest,
        .pchResponseBuffer = pchResponseBuffer,
        .unResponseBufferSize = unResponseBufferSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_016_DriverDebugRequest, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_016_PerformFirmwareUpdate(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_016_PerformFirmwareUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_016_PerformFirmwareUpdate, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_016_AcknowledgeQuit_Exiting(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_016_AcknowledgeQuit_Exiting_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_016_AcknowledgeQuit_Exiting, &params );
}

void __thiscall winIVRSystem_IVRSystem_016_AcknowledgeQuit_UserPrompt(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_016_AcknowledgeQuit_UserPrompt_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_016_AcknowledgeQuit_UserPrompt, &params );
}

extern vtable_ptr winIVRSystem_IVRSystem_016_vtable;

DEFINE_RTTI_DATA0(winIVRSystem_IVRSystem_016, 0, ".?AVIVRSystem@@")

__ASM_BLOCK_BEGIN(winIVRSystem_IVRSystem_016_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRSystem_IVRSystem_016(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRSystem_IVRSystem_016_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRSystem_IVRSystem_016(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRSystem_IVRSystem_016_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
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
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRSystem_IVRSystem_016_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetRecommendedRenderTargetSize, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetProjectionMatrix, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetProjectionRaw, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_ComputeDistortion, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetEyeToHeadTransform, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetTimeSinceLastVsync, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetD3D9AdapterIndex, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetDXGIOutputInfo, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetOutputDevice, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_IsDisplayOnDesktop, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_SetDisplayVisibility, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetDeviceToAbsoluteTrackingPose, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_ResetSeatedZeroPose, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetRawZeroPoseToStandingAbsoluteTrackingPose, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetSortedTrackedDeviceIndicesOfClass, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetTrackedDeviceActivityLevel, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_ApplyTransform, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetTrackedDeviceIndexForControllerRole, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetControllerRoleForTrackedDeviceIndex, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetTrackedDeviceClass, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_IsTrackedDeviceConnected, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetBoolTrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetFloatTrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetInt32TrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetUint64TrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetMatrix34TrackedDeviceProperty, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetStringTrackedDeviceProperty, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetPropErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_PollNextEvent, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_PollNextEventWithPose, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetEventTypeNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetHiddenAreaMesh, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetControllerState, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetControllerStateWithPose, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_TriggerHapticPulse, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetButtonIdNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetControllerAxisTypeNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_CaptureInputFocus, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_ReleaseInputFocus, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_IsInputFocusCapturedByAnotherProcess, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_DriverDebugRequest, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_PerformFirmwareUpdate, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_AcknowledgeQuit_Exiting, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_AcknowledgeQuit_UserPrompt, 4)

void __thiscall winIVRSystem_IVRSystem_017_GetRecommendedRenderTargetSize(struct w_steam_iface *_this, uint32_t *pnWidth, uint32_t *pnHeight)
{
    struct IVRSystem_IVRSystem_017_GetRecommendedRenderTargetSize_params params =
    {
        .linux_side = _this->u_iface,
        .pnWidth = pnWidth,
        .pnHeight = pnHeight,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_017_GetRecommendedRenderTargetSize, &params );
}

HmdMatrix44_t * __thiscall winIVRSystem_IVRSystem_017_GetProjectionMatrix(struct w_steam_iface *_this, HmdMatrix44_t *_ret, uint32_t eEye, float fNearZ, float fFarZ)
{
    struct IVRSystem_IVRSystem_017_GetProjectionMatrix_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
        .fNearZ = fNearZ,
        .fFarZ = fFarZ,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_017_GetProjectionMatrix, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_017_GetProjectionRaw(struct w_steam_iface *_this, uint32_t eEye, float *pfLeft, float *pfRight, float *pfTop, float *pfBottom)
{
    struct IVRSystem_IVRSystem_017_GetProjectionRaw_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pfLeft = pfLeft,
        .pfRight = pfRight,
        .pfTop = pfTop,
        .pfBottom = pfBottom,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_017_GetProjectionRaw, &params );
}

int8_t __thiscall winIVRSystem_IVRSystem_017_ComputeDistortion(struct w_steam_iface *_this, uint32_t eEye, float fU, float fV, DistortionCoordinates_t *pDistortionCoordinates)
{
    struct IVRSystem_IVRSystem_017_ComputeDistortion_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .fU = fU,
        .fV = fV,
        .pDistortionCoordinates = pDistortionCoordinates,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_017_ComputeDistortion, &params );
    return params._ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_017_GetEyeToHeadTransform(struct w_steam_iface *_this, HmdMatrix34_t *_ret, uint32_t eEye)
{
    struct IVRSystem_IVRSystem_017_GetEyeToHeadTransform_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_017_GetEyeToHeadTransform, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_017_GetTimeSinceLastVsync(struct w_steam_iface *_this, float *pfSecondsSinceLastVsync, uint64_t *pulFrameCounter)
{
    struct IVRSystem_IVRSystem_017_GetTimeSinceLastVsync_params params =
    {
        .linux_side = _this->u_iface,
        .pfSecondsSinceLastVsync = pfSecondsSinceLastVsync,
        .pulFrameCounter = pulFrameCounter,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_017_GetTimeSinceLastVsync, &params );
    return params._ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_017_GetD3D9AdapterIndex(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_017_GetD3D9AdapterIndex_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_017_GetD3D9AdapterIndex, &params );
    return params._ret;
}

extern void __thiscall winIVRSystem_IVRSystem_017_GetDXGIOutputInfo(struct w_steam_iface *_this, int32_t *pnAdapterIndex);

void __thiscall winIVRSystem_IVRSystem_017_GetOutputDevice(struct w_steam_iface *_this, uint64_t *pnDevice, uint32_t textureType, VkInstance_T *pInstance)
{
    struct IVRSystem_IVRSystem_017_GetOutputDevice_params params =
    {
        .linux_side = _this->u_iface,
        .pnDevice = pnDevice,
        .textureType = textureType,
        .pInstance = pInstance,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_017_GetOutputDevice, &params );
}

int8_t __thiscall winIVRSystem_IVRSystem_017_IsDisplayOnDesktop(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_017_IsDisplayOnDesktop_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_017_IsDisplayOnDesktop, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_017_SetDisplayVisibility(struct w_steam_iface *_this, int8_t bIsVisibleOnDesktop)
{
    struct IVRSystem_IVRSystem_017_SetDisplayVisibility_params params =
    {
        .linux_side = _this->u_iface,
        .bIsVisibleOnDesktop = bIsVisibleOnDesktop,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_017_SetDisplayVisibility, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_017_GetDeviceToAbsoluteTrackingPose(struct w_steam_iface *_this, uint32_t eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t *pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    struct IVRSystem_IVRSystem_017_GetDeviceToAbsoluteTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .fPredictedSecondsToPhotonsFromNow = fPredictedSecondsToPhotonsFromNow,
        .pTrackedDevicePoseArray = pTrackedDevicePoseArray,
        .unTrackedDevicePoseArrayCount = unTrackedDevicePoseArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_017_GetDeviceToAbsoluteTrackingPose, &params );
}

void __thiscall winIVRSystem_IVRSystem_017_ResetSeatedZeroPose(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_017_ResetSeatedZeroPose_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_017_ResetSeatedZeroPose, &params );
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_017_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    struct IVRSystem_IVRSystem_017_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_017_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, &params );
    return params._ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_017_GetRawZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    struct IVRSystem_IVRSystem_017_GetRawZeroPoseToStandingAbsoluteTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_017_GetRawZeroPoseToStandingAbsoluteTrackingPose, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_017_GetSortedTrackedDeviceIndicesOfClass(struct w_steam_iface *_this, uint32_t eTrackedDeviceClass, uint32_t *punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, uint32_t unRelativeToTrackedDeviceIndex)
{
    struct IVRSystem_IVRSystem_017_GetSortedTrackedDeviceIndicesOfClass_params params =
    {
        .linux_side = _this->u_iface,
        .eTrackedDeviceClass = eTrackedDeviceClass,
        .punTrackedDeviceIndexArray = punTrackedDeviceIndexArray,
        .unTrackedDeviceIndexArrayCount = unTrackedDeviceIndexArrayCount,
        .unRelativeToTrackedDeviceIndex = unRelativeToTrackedDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_017_GetSortedTrackedDeviceIndicesOfClass, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_017_GetTrackedDeviceActivityLevel(struct w_steam_iface *_this, uint32_t unDeviceId)
{
    struct IVRSystem_IVRSystem_017_GetTrackedDeviceActivityLevel_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceId = unDeviceId,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_017_GetTrackedDeviceActivityLevel, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_017_ApplyTransform(struct w_steam_iface *_this, TrackedDevicePose_t *pOutputPose, const TrackedDevicePose_t *pTrackedDevicePose, const HmdMatrix34_t *pTransform)
{
    struct IVRSystem_IVRSystem_017_ApplyTransform_params params =
    {
        .linux_side = _this->u_iface,
        .pOutputPose = pOutputPose,
        .pTrackedDevicePose = pTrackedDevicePose,
        .pTransform = pTransform,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_017_ApplyTransform, &params );
}

uint32_t __thiscall winIVRSystem_IVRSystem_017_GetTrackedDeviceIndexForControllerRole(struct w_steam_iface *_this, uint32_t unDeviceType)
{
    struct IVRSystem_IVRSystem_017_GetTrackedDeviceIndexForControllerRole_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceType = unDeviceType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_017_GetTrackedDeviceIndexForControllerRole, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_017_GetControllerRoleForTrackedDeviceIndex(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_017_GetControllerRoleForTrackedDeviceIndex_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_017_GetControllerRoleForTrackedDeviceIndex, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_017_GetTrackedDeviceClass(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_017_GetTrackedDeviceClass_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_017_GetTrackedDeviceClass, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_017_IsTrackedDeviceConnected(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_017_IsTrackedDeviceConnected_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_017_IsTrackedDeviceConnected, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_017_GetBoolTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_017_GetBoolTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_017_GetBoolTrackedDeviceProperty, &params );
    return params._ret;
}

float __thiscall winIVRSystem_IVRSystem_017_GetFloatTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_017_GetFloatTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_017_GetFloatTrackedDeviceProperty, &params );
    return params._ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_017_GetInt32TrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_017_GetInt32TrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_017_GetInt32TrackedDeviceProperty, &params );
    return params._ret;
}

uint64_t __thiscall winIVRSystem_IVRSystem_017_GetUint64TrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_017_GetUint64TrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_017_GetUint64TrackedDeviceProperty, &params );
    return params._ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_017_GetMatrix34TrackedDeviceProperty(struct w_steam_iface *_this, HmdMatrix34_t *_ret, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_017_GetMatrix34TrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_017_GetMatrix34TrackedDeviceProperty, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_017_GetStringTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, char *pchValue, uint32_t unBufferSize, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_017_GetStringTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pchValue = pchValue,
        .unBufferSize = unBufferSize,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_017_GetStringTrackedDeviceProperty, &params );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_017_GetPropErrorNameFromEnum(struct w_steam_iface *_this, uint32_t error)
{
    struct IVRSystem_IVRSystem_017_GetPropErrorNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .error = error,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_017_GetPropErrorNameFromEnum, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_017_PollNextEvent(struct w_steam_iface *_this, w_VREvent_t_1011 *pEvent, uint32_t uncbVREvent)
{
    w_VREvent_t_1011 w_pEvent;
    struct IVRSystem_IVRSystem_017_PollNextEvent_params params =
    {
        .linux_side = _this->u_iface,
        .pEvent = pEvent ? &w_pEvent : NULL,
        .uncbVREvent = uncbVREvent,
    };
    TRACE("%p\n", _this);
    uncbVREvent = min( uncbVREvent, sizeof(w_pEvent) );
    if (pEvent) memcpy( &w_pEvent, pEvent, uncbVREvent );
    VRCLIENT_CALL( IVRSystem_IVRSystem_017_PollNextEvent, &params );
    if (pEvent) memcpy( pEvent, &w_pEvent, uncbVREvent );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_017_PollNextEventWithPose(struct w_steam_iface *_this, uint32_t eOrigin, w_VREvent_t_1011 *pEvent, uint32_t uncbVREvent, TrackedDevicePose_t *pTrackedDevicePose)
{
    w_VREvent_t_1011 w_pEvent;
    struct IVRSystem_IVRSystem_017_PollNextEventWithPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .pEvent = pEvent ? &w_pEvent : NULL,
        .uncbVREvent = uncbVREvent,
        .pTrackedDevicePose = pTrackedDevicePose,
    };
    TRACE("%p\n", _this);
    uncbVREvent = min( uncbVREvent, sizeof(w_pEvent) );
    if (pEvent) memcpy( &w_pEvent, pEvent, uncbVREvent );
    VRCLIENT_CALL( IVRSystem_IVRSystem_017_PollNextEventWithPose, &params );
    if (pEvent) memcpy( pEvent, &w_pEvent, uncbVREvent );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_017_GetEventTypeNameFromEnum(struct w_steam_iface *_this, uint32_t eType)
{
    struct IVRSystem_IVRSystem_017_GetEventTypeNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eType = eType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_017_GetEventTypeNameFromEnum, &params );
    return params._ret;
}

w_HiddenAreaMesh_t * __thiscall winIVRSystem_IVRSystem_017_GetHiddenAreaMesh(struct w_steam_iface *_this, w_HiddenAreaMesh_t *_ret, uint32_t eEye, uint32_t type)
{
    struct IVRSystem_IVRSystem_017_GetHiddenAreaMesh_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
        .type = type,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_017_GetHiddenAreaMesh, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_017_GetControllerState(struct w_steam_iface *_this, uint32_t unControllerDeviceIndex, w_VRControllerState001_t *pControllerState, uint32_t unControllerStateSize)
{
    w_VRControllerState001_t w_pControllerState;
    struct IVRSystem_IVRSystem_017_GetControllerState_params params =
    {
        .linux_side = _this->u_iface,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .pControllerState = pControllerState ? &w_pControllerState : NULL,
        .unControllerStateSize = unControllerStateSize,
    };
    TRACE("%p\n", _this);
    unControllerStateSize = min( unControllerStateSize, sizeof(w_pControllerState) );
    if (pControllerState) memcpy( &w_pControllerState, pControllerState, unControllerStateSize );
    VRCLIENT_CALL( IVRSystem_IVRSystem_017_GetControllerState, &params );
    if (pControllerState) memcpy( pControllerState, &w_pControllerState, unControllerStateSize );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_017_GetControllerStateWithPose(struct w_steam_iface *_this, uint32_t eOrigin, uint32_t unControllerDeviceIndex, w_VRControllerState001_t *pControllerState, uint32_t unControllerStateSize, TrackedDevicePose_t *pTrackedDevicePose)
{
    w_VRControllerState001_t w_pControllerState;
    struct IVRSystem_IVRSystem_017_GetControllerStateWithPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .pControllerState = pControllerState ? &w_pControllerState : NULL,
        .unControllerStateSize = unControllerStateSize,
        .pTrackedDevicePose = pTrackedDevicePose,
    };
    TRACE("%p\n", _this);
    unControllerStateSize = min( unControllerStateSize, sizeof(w_pControllerState) );
    if (pControllerState) memcpy( &w_pControllerState, pControllerState, unControllerStateSize );
    VRCLIENT_CALL( IVRSystem_IVRSystem_017_GetControllerStateWithPose, &params );
    if (pControllerState) memcpy( pControllerState, &w_pControllerState, unControllerStateSize );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_017_TriggerHapticPulse(struct w_steam_iface *_this, uint32_t unControllerDeviceIndex, uint32_t unAxisId, uint16_t usDurationMicroSec)
{
    struct IVRSystem_IVRSystem_017_TriggerHapticPulse_params params =
    {
        .linux_side = _this->u_iface,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .unAxisId = unAxisId,
        .usDurationMicroSec = usDurationMicroSec,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_017_TriggerHapticPulse, &params );
}

const char * __thiscall winIVRSystem_IVRSystem_017_GetButtonIdNameFromEnum(struct w_steam_iface *_this, uint32_t eButtonId)
{
    struct IVRSystem_IVRSystem_017_GetButtonIdNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eButtonId = eButtonId,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_017_GetButtonIdNameFromEnum, &params );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_017_GetControllerAxisTypeNameFromEnum(struct w_steam_iface *_this, uint32_t eAxisType)
{
    struct IVRSystem_IVRSystem_017_GetControllerAxisTypeNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eAxisType = eAxisType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_017_GetControllerAxisTypeNameFromEnum, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_017_CaptureInputFocus(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_017_CaptureInputFocus_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_017_CaptureInputFocus, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_017_ReleaseInputFocus(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_017_ReleaseInputFocus_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_017_ReleaseInputFocus, &params );
}

int8_t __thiscall winIVRSystem_IVRSystem_017_IsInputFocusCapturedByAnotherProcess(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_017_IsInputFocusCapturedByAnotherProcess_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_017_IsInputFocusCapturedByAnotherProcess, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_017_DriverDebugRequest(struct w_steam_iface *_this, uint32_t unDeviceIndex, const char *pchRequest, char *pchResponseBuffer, uint32_t unResponseBufferSize)
{
    struct IVRSystem_IVRSystem_017_DriverDebugRequest_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .pchRequest = pchRequest,
        .pchResponseBuffer = pchResponseBuffer,
        .unResponseBufferSize = unResponseBufferSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_017_DriverDebugRequest, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_017_PerformFirmwareUpdate(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_017_PerformFirmwareUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_017_PerformFirmwareUpdate, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_017_AcknowledgeQuit_Exiting(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_017_AcknowledgeQuit_Exiting_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_017_AcknowledgeQuit_Exiting, &params );
}

void __thiscall winIVRSystem_IVRSystem_017_AcknowledgeQuit_UserPrompt(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_017_AcknowledgeQuit_UserPrompt_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_017_AcknowledgeQuit_UserPrompt, &params );
}

extern vtable_ptr winIVRSystem_IVRSystem_017_vtable;

DEFINE_RTTI_DATA0(winIVRSystem_IVRSystem_017, 0, ".?AVIVRSystem@@")

__ASM_BLOCK_BEGIN(winIVRSystem_IVRSystem_017_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRSystem_IVRSystem_017(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRSystem_IVRSystem_017_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRSystem_IVRSystem_017(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRSystem_IVRSystem_017_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
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
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRSystem_IVRSystem_017_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetRecommendedRenderTargetSize, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetProjectionMatrix, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetProjectionRaw, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_ComputeDistortion, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetEyeToHeadTransform, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetTimeSinceLastVsync, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetD3D9AdapterIndex, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetDXGIOutputInfo, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetOutputDevice, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_IsDisplayOnDesktop, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_SetDisplayVisibility, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetDeviceToAbsoluteTrackingPose, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_ResetSeatedZeroPose, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetRawZeroPoseToStandingAbsoluteTrackingPose, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetSortedTrackedDeviceIndicesOfClass, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetTrackedDeviceActivityLevel, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_ApplyTransform, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetTrackedDeviceIndexForControllerRole, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetControllerRoleForTrackedDeviceIndex, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetTrackedDeviceClass, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_IsTrackedDeviceConnected, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetBoolTrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetFloatTrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetInt32TrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetUint64TrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetMatrix34TrackedDeviceProperty, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetArrayTrackedDeviceProperty, 28)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetStringTrackedDeviceProperty, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetPropErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_PollNextEvent, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_PollNextEventWithPose, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetEventTypeNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetHiddenAreaMesh, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetControllerState, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetControllerStateWithPose, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_TriggerHapticPulse, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetButtonIdNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetControllerAxisTypeNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_IsInputAvailable, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_IsSteamVRDrawingControllers, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_ShouldApplicationPause, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_ShouldApplicationReduceRenderingWork, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_DriverDebugRequest, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_PerformFirmwareUpdate, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_AcknowledgeQuit_Exiting, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_AcknowledgeQuit_UserPrompt, 4)

void __thiscall winIVRSystem_IVRSystem_019_GetRecommendedRenderTargetSize(struct w_steam_iface *_this, uint32_t *pnWidth, uint32_t *pnHeight)
{
    struct IVRSystem_IVRSystem_019_GetRecommendedRenderTargetSize_params params =
    {
        .linux_side = _this->u_iface,
        .pnWidth = pnWidth,
        .pnHeight = pnHeight,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_019_GetRecommendedRenderTargetSize, &params );
}

HmdMatrix44_t * __thiscall winIVRSystem_IVRSystem_019_GetProjectionMatrix(struct w_steam_iface *_this, HmdMatrix44_t *_ret, uint32_t eEye, float fNearZ, float fFarZ)
{
    struct IVRSystem_IVRSystem_019_GetProjectionMatrix_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
        .fNearZ = fNearZ,
        .fFarZ = fFarZ,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_019_GetProjectionMatrix, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_019_GetProjectionRaw(struct w_steam_iface *_this, uint32_t eEye, float *pfLeft, float *pfRight, float *pfTop, float *pfBottom)
{
    struct IVRSystem_IVRSystem_019_GetProjectionRaw_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pfLeft = pfLeft,
        .pfRight = pfRight,
        .pfTop = pfTop,
        .pfBottom = pfBottom,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_019_GetProjectionRaw, &params );
}

int8_t __thiscall winIVRSystem_IVRSystem_019_ComputeDistortion(struct w_steam_iface *_this, uint32_t eEye, float fU, float fV, DistortionCoordinates_t *pDistortionCoordinates)
{
    struct IVRSystem_IVRSystem_019_ComputeDistortion_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .fU = fU,
        .fV = fV,
        .pDistortionCoordinates = pDistortionCoordinates,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_019_ComputeDistortion, &params );
    return params._ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_019_GetEyeToHeadTransform(struct w_steam_iface *_this, HmdMatrix34_t *_ret, uint32_t eEye)
{
    struct IVRSystem_IVRSystem_019_GetEyeToHeadTransform_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_019_GetEyeToHeadTransform, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_019_GetTimeSinceLastVsync(struct w_steam_iface *_this, float *pfSecondsSinceLastVsync, uint64_t *pulFrameCounter)
{
    struct IVRSystem_IVRSystem_019_GetTimeSinceLastVsync_params params =
    {
        .linux_side = _this->u_iface,
        .pfSecondsSinceLastVsync = pfSecondsSinceLastVsync,
        .pulFrameCounter = pulFrameCounter,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_019_GetTimeSinceLastVsync, &params );
    return params._ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_019_GetD3D9AdapterIndex(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_019_GetD3D9AdapterIndex_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_019_GetD3D9AdapterIndex, &params );
    return params._ret;
}

extern void __thiscall winIVRSystem_IVRSystem_019_GetDXGIOutputInfo(struct w_steam_iface *_this, int32_t *pnAdapterIndex);

void __thiscall winIVRSystem_IVRSystem_019_GetOutputDevice(struct w_steam_iface *_this, uint64_t *pnDevice, uint32_t textureType, VkInstance_T *pInstance)
{
    struct IVRSystem_IVRSystem_019_GetOutputDevice_params params =
    {
        .linux_side = _this->u_iface,
        .pnDevice = pnDevice,
        .textureType = textureType,
        .pInstance = pInstance,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_019_GetOutputDevice, &params );
}

int8_t __thiscall winIVRSystem_IVRSystem_019_IsDisplayOnDesktop(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_019_IsDisplayOnDesktop_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_019_IsDisplayOnDesktop, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_019_SetDisplayVisibility(struct w_steam_iface *_this, int8_t bIsVisibleOnDesktop)
{
    struct IVRSystem_IVRSystem_019_SetDisplayVisibility_params params =
    {
        .linux_side = _this->u_iface,
        .bIsVisibleOnDesktop = bIsVisibleOnDesktop,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_019_SetDisplayVisibility, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_019_GetDeviceToAbsoluteTrackingPose(struct w_steam_iface *_this, uint32_t eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t *pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    struct IVRSystem_IVRSystem_019_GetDeviceToAbsoluteTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .fPredictedSecondsToPhotonsFromNow = fPredictedSecondsToPhotonsFromNow,
        .pTrackedDevicePoseArray = pTrackedDevicePoseArray,
        .unTrackedDevicePoseArrayCount = unTrackedDevicePoseArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_019_GetDeviceToAbsoluteTrackingPose, &params );
}

void __thiscall winIVRSystem_IVRSystem_019_ResetSeatedZeroPose(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_019_ResetSeatedZeroPose_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_019_ResetSeatedZeroPose, &params );
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_019_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    struct IVRSystem_IVRSystem_019_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_019_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, &params );
    return params._ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_019_GetRawZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    struct IVRSystem_IVRSystem_019_GetRawZeroPoseToStandingAbsoluteTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_019_GetRawZeroPoseToStandingAbsoluteTrackingPose, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_019_GetSortedTrackedDeviceIndicesOfClass(struct w_steam_iface *_this, uint32_t eTrackedDeviceClass, uint32_t *punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, uint32_t unRelativeToTrackedDeviceIndex)
{
    struct IVRSystem_IVRSystem_019_GetSortedTrackedDeviceIndicesOfClass_params params =
    {
        .linux_side = _this->u_iface,
        .eTrackedDeviceClass = eTrackedDeviceClass,
        .punTrackedDeviceIndexArray = punTrackedDeviceIndexArray,
        .unTrackedDeviceIndexArrayCount = unTrackedDeviceIndexArrayCount,
        .unRelativeToTrackedDeviceIndex = unRelativeToTrackedDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_019_GetSortedTrackedDeviceIndicesOfClass, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_019_GetTrackedDeviceActivityLevel(struct w_steam_iface *_this, uint32_t unDeviceId)
{
    struct IVRSystem_IVRSystem_019_GetTrackedDeviceActivityLevel_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceId = unDeviceId,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_019_GetTrackedDeviceActivityLevel, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_019_ApplyTransform(struct w_steam_iface *_this, TrackedDevicePose_t *pOutputPose, const TrackedDevicePose_t *pTrackedDevicePose, const HmdMatrix34_t *pTransform)
{
    struct IVRSystem_IVRSystem_019_ApplyTransform_params params =
    {
        .linux_side = _this->u_iface,
        .pOutputPose = pOutputPose,
        .pTrackedDevicePose = pTrackedDevicePose,
        .pTransform = pTransform,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_019_ApplyTransform, &params );
}

uint32_t __thiscall winIVRSystem_IVRSystem_019_GetTrackedDeviceIndexForControllerRole(struct w_steam_iface *_this, uint32_t unDeviceType)
{
    struct IVRSystem_IVRSystem_019_GetTrackedDeviceIndexForControllerRole_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceType = unDeviceType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_019_GetTrackedDeviceIndexForControllerRole, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_019_GetControllerRoleForTrackedDeviceIndex(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_019_GetControllerRoleForTrackedDeviceIndex_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_019_GetControllerRoleForTrackedDeviceIndex, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_019_GetTrackedDeviceClass(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_019_GetTrackedDeviceClass_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_019_GetTrackedDeviceClass, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_019_IsTrackedDeviceConnected(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_019_IsTrackedDeviceConnected_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_019_IsTrackedDeviceConnected, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_019_GetBoolTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_019_GetBoolTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_019_GetBoolTrackedDeviceProperty, &params );
    return params._ret;
}

float __thiscall winIVRSystem_IVRSystem_019_GetFloatTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_019_GetFloatTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_019_GetFloatTrackedDeviceProperty, &params );
    return params._ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_019_GetInt32TrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_019_GetInt32TrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_019_GetInt32TrackedDeviceProperty, &params );
    return params._ret;
}

uint64_t __thiscall winIVRSystem_IVRSystem_019_GetUint64TrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_019_GetUint64TrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_019_GetUint64TrackedDeviceProperty, &params );
    return params._ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_019_GetMatrix34TrackedDeviceProperty(struct w_steam_iface *_this, HmdMatrix34_t *_ret, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_019_GetMatrix34TrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_019_GetMatrix34TrackedDeviceProperty, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_019_GetArrayTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t propType, void *pBuffer, uint32_t unBufferSize, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_019_GetArrayTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .propType = propType,
        .pBuffer = pBuffer,
        .unBufferSize = unBufferSize,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_019_GetArrayTrackedDeviceProperty, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_019_GetStringTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, char *pchValue, uint32_t unBufferSize, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_019_GetStringTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pchValue = pchValue,
        .unBufferSize = unBufferSize,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_019_GetStringTrackedDeviceProperty, &params );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_019_GetPropErrorNameFromEnum(struct w_steam_iface *_this, uint32_t error)
{
    struct IVRSystem_IVRSystem_019_GetPropErrorNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .error = error,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_019_GetPropErrorNameFromEnum, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_019_PollNextEvent(struct w_steam_iface *_this, w_VREvent_t_1322 *pEvent, uint32_t uncbVREvent)
{
    w_VREvent_t_1322 w_pEvent;
    struct IVRSystem_IVRSystem_019_PollNextEvent_params params =
    {
        .linux_side = _this->u_iface,
        .pEvent = pEvent ? &w_pEvent : NULL,
        .uncbVREvent = uncbVREvent,
    };
    TRACE("%p\n", _this);
    uncbVREvent = min( uncbVREvent, sizeof(w_pEvent) );
    if (pEvent) memcpy( &w_pEvent, pEvent, uncbVREvent );
    VRCLIENT_CALL( IVRSystem_IVRSystem_019_PollNextEvent, &params );
    if (pEvent) memcpy( pEvent, &w_pEvent, uncbVREvent );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_019_PollNextEventWithPose(struct w_steam_iface *_this, uint32_t eOrigin, w_VREvent_t_1322 *pEvent, uint32_t uncbVREvent, TrackedDevicePose_t *pTrackedDevicePose)
{
    w_VREvent_t_1322 w_pEvent;
    struct IVRSystem_IVRSystem_019_PollNextEventWithPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .pEvent = pEvent ? &w_pEvent : NULL,
        .uncbVREvent = uncbVREvent,
        .pTrackedDevicePose = pTrackedDevicePose,
    };
    TRACE("%p\n", _this);
    uncbVREvent = min( uncbVREvent, sizeof(w_pEvent) );
    if (pEvent) memcpy( &w_pEvent, pEvent, uncbVREvent );
    VRCLIENT_CALL( IVRSystem_IVRSystem_019_PollNextEventWithPose, &params );
    if (pEvent) memcpy( pEvent, &w_pEvent, uncbVREvent );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_019_GetEventTypeNameFromEnum(struct w_steam_iface *_this, uint32_t eType)
{
    struct IVRSystem_IVRSystem_019_GetEventTypeNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eType = eType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_019_GetEventTypeNameFromEnum, &params );
    return params._ret;
}

w_HiddenAreaMesh_t * __thiscall winIVRSystem_IVRSystem_019_GetHiddenAreaMesh(struct w_steam_iface *_this, w_HiddenAreaMesh_t *_ret, uint32_t eEye, uint32_t type)
{
    struct IVRSystem_IVRSystem_019_GetHiddenAreaMesh_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
        .type = type,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_019_GetHiddenAreaMesh, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_019_GetControllerState(struct w_steam_iface *_this, uint32_t unControllerDeviceIndex, w_VRControllerState001_t *pControllerState, uint32_t unControllerStateSize)
{
    w_VRControllerState001_t w_pControllerState;
    struct IVRSystem_IVRSystem_019_GetControllerState_params params =
    {
        .linux_side = _this->u_iface,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .pControllerState = pControllerState ? &w_pControllerState : NULL,
        .unControllerStateSize = unControllerStateSize,
    };
    TRACE("%p\n", _this);
    unControllerStateSize = min( unControllerStateSize, sizeof(w_pControllerState) );
    if (pControllerState) memcpy( &w_pControllerState, pControllerState, unControllerStateSize );
    VRCLIENT_CALL( IVRSystem_IVRSystem_019_GetControllerState, &params );
    if (pControllerState) memcpy( pControllerState, &w_pControllerState, unControllerStateSize );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_019_GetControllerStateWithPose(struct w_steam_iface *_this, uint32_t eOrigin, uint32_t unControllerDeviceIndex, w_VRControllerState001_t *pControllerState, uint32_t unControllerStateSize, TrackedDevicePose_t *pTrackedDevicePose)
{
    w_VRControllerState001_t w_pControllerState;
    struct IVRSystem_IVRSystem_019_GetControllerStateWithPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .pControllerState = pControllerState ? &w_pControllerState : NULL,
        .unControllerStateSize = unControllerStateSize,
        .pTrackedDevicePose = pTrackedDevicePose,
    };
    TRACE("%p\n", _this);
    unControllerStateSize = min( unControllerStateSize, sizeof(w_pControllerState) );
    if (pControllerState) memcpy( &w_pControllerState, pControllerState, unControllerStateSize );
    VRCLIENT_CALL( IVRSystem_IVRSystem_019_GetControllerStateWithPose, &params );
    if (pControllerState) memcpy( pControllerState, &w_pControllerState, unControllerStateSize );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_019_TriggerHapticPulse(struct w_steam_iface *_this, uint32_t unControllerDeviceIndex, uint32_t unAxisId, uint16_t usDurationMicroSec)
{
    struct IVRSystem_IVRSystem_019_TriggerHapticPulse_params params =
    {
        .linux_side = _this->u_iface,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .unAxisId = unAxisId,
        .usDurationMicroSec = usDurationMicroSec,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_019_TriggerHapticPulse, &params );
}

const char * __thiscall winIVRSystem_IVRSystem_019_GetButtonIdNameFromEnum(struct w_steam_iface *_this, uint32_t eButtonId)
{
    struct IVRSystem_IVRSystem_019_GetButtonIdNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eButtonId = eButtonId,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_019_GetButtonIdNameFromEnum, &params );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_019_GetControllerAxisTypeNameFromEnum(struct w_steam_iface *_this, uint32_t eAxisType)
{
    struct IVRSystem_IVRSystem_019_GetControllerAxisTypeNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eAxisType = eAxisType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_019_GetControllerAxisTypeNameFromEnum, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_019_IsInputAvailable(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_019_IsInputAvailable_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_019_IsInputAvailable, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_019_IsSteamVRDrawingControllers(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_019_IsSteamVRDrawingControllers_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_019_IsSteamVRDrawingControllers, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_019_ShouldApplicationPause(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_019_ShouldApplicationPause_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_019_ShouldApplicationPause, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_019_ShouldApplicationReduceRenderingWork(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_019_ShouldApplicationReduceRenderingWork_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_019_ShouldApplicationReduceRenderingWork, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_019_DriverDebugRequest(struct w_steam_iface *_this, uint32_t unDeviceIndex, const char *pchRequest, char *pchResponseBuffer, uint32_t unResponseBufferSize)
{
    struct IVRSystem_IVRSystem_019_DriverDebugRequest_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .pchRequest = pchRequest,
        .pchResponseBuffer = pchResponseBuffer,
        .unResponseBufferSize = unResponseBufferSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_019_DriverDebugRequest, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_019_PerformFirmwareUpdate(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_019_PerformFirmwareUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_019_PerformFirmwareUpdate, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_019_AcknowledgeQuit_Exiting(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_019_AcknowledgeQuit_Exiting_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_019_AcknowledgeQuit_Exiting, &params );
}

void __thiscall winIVRSystem_IVRSystem_019_AcknowledgeQuit_UserPrompt(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_019_AcknowledgeQuit_UserPrompt_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_019_AcknowledgeQuit_UserPrompt, &params );
}

extern vtable_ptr winIVRSystem_IVRSystem_019_vtable;

DEFINE_RTTI_DATA0(winIVRSystem_IVRSystem_019, 0, ".?AVIVRSystem@@")

__ASM_BLOCK_BEGIN(winIVRSystem_IVRSystem_019_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRSystem_IVRSystem_019(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRSystem_IVRSystem_019_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRSystem_IVRSystem_019(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRSystem_IVRSystem_019_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
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
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRSystem_IVRSystem_019_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_020_GetRecommendedRenderTargetSize, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_020_GetProjectionMatrix, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_020_GetProjectionRaw, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_020_ComputeDistortion, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_020_GetEyeToHeadTransform, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_020_GetTimeSinceLastVsync, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_020_GetD3D9AdapterIndex, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_020_GetDXGIOutputInfo, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_020_GetOutputDevice, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_020_IsDisplayOnDesktop, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_020_SetDisplayVisibility, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_020_GetDeviceToAbsoluteTrackingPose, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_020_ResetSeatedZeroPose, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_020_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_020_GetRawZeroPoseToStandingAbsoluteTrackingPose, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_020_GetSortedTrackedDeviceIndicesOfClass, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_020_GetTrackedDeviceActivityLevel, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_020_ApplyTransform, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_020_GetTrackedDeviceIndexForControllerRole, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_020_GetControllerRoleForTrackedDeviceIndex, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_020_GetTrackedDeviceClass, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_020_IsTrackedDeviceConnected, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_020_GetBoolTrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_020_GetFloatTrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_020_GetInt32TrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_020_GetUint64TrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_020_GetMatrix34TrackedDeviceProperty, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_020_GetArrayTrackedDeviceProperty, 28)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_020_GetStringTrackedDeviceProperty, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_020_GetPropErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_020_PollNextEvent, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_020_PollNextEventWithPose, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_020_GetEventTypeNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_020_GetHiddenAreaMesh, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_020_GetControllerState, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_020_GetControllerStateWithPose, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_020_TriggerHapticPulse, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_020_GetButtonIdNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_020_GetControllerAxisTypeNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_020_IsInputAvailable, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_020_IsSteamVRDrawingControllers, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_020_ShouldApplicationPause, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_020_ShouldApplicationReduceRenderingWork, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_020_PerformFirmwareUpdate, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_020_AcknowledgeQuit_Exiting, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_020_AcknowledgeQuit_UserPrompt, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_020_GetAppContainerFilePaths, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_020_GetRuntimeVersion, 4)

void __thiscall winIVRSystem_IVRSystem_020_GetRecommendedRenderTargetSize(struct w_steam_iface *_this, uint32_t *pnWidth, uint32_t *pnHeight)
{
    struct IVRSystem_IVRSystem_020_GetRecommendedRenderTargetSize_params params =
    {
        .linux_side = _this->u_iface,
        .pnWidth = pnWidth,
        .pnHeight = pnHeight,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_GetRecommendedRenderTargetSize, &params );
}

HmdMatrix44_t * __thiscall winIVRSystem_IVRSystem_020_GetProjectionMatrix(struct w_steam_iface *_this, HmdMatrix44_t *_ret, uint32_t eEye, float fNearZ, float fFarZ)
{
    struct IVRSystem_IVRSystem_020_GetProjectionMatrix_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
        .fNearZ = fNearZ,
        .fFarZ = fFarZ,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_GetProjectionMatrix, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_020_GetProjectionRaw(struct w_steam_iface *_this, uint32_t eEye, float *pfLeft, float *pfRight, float *pfTop, float *pfBottom)
{
    struct IVRSystem_IVRSystem_020_GetProjectionRaw_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pfLeft = pfLeft,
        .pfRight = pfRight,
        .pfTop = pfTop,
        .pfBottom = pfBottom,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_GetProjectionRaw, &params );
}

int8_t __thiscall winIVRSystem_IVRSystem_020_ComputeDistortion(struct w_steam_iface *_this, uint32_t eEye, float fU, float fV, DistortionCoordinates_t *pDistortionCoordinates)
{
    struct IVRSystem_IVRSystem_020_ComputeDistortion_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .fU = fU,
        .fV = fV,
        .pDistortionCoordinates = pDistortionCoordinates,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_ComputeDistortion, &params );
    return params._ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_020_GetEyeToHeadTransform(struct w_steam_iface *_this, HmdMatrix34_t *_ret, uint32_t eEye)
{
    struct IVRSystem_IVRSystem_020_GetEyeToHeadTransform_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_GetEyeToHeadTransform, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_020_GetTimeSinceLastVsync(struct w_steam_iface *_this, float *pfSecondsSinceLastVsync, uint64_t *pulFrameCounter)
{
    struct IVRSystem_IVRSystem_020_GetTimeSinceLastVsync_params params =
    {
        .linux_side = _this->u_iface,
        .pfSecondsSinceLastVsync = pfSecondsSinceLastVsync,
        .pulFrameCounter = pulFrameCounter,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_GetTimeSinceLastVsync, &params );
    return params._ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_020_GetD3D9AdapterIndex(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_020_GetD3D9AdapterIndex_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_GetD3D9AdapterIndex, &params );
    return params._ret;
}

extern void __thiscall winIVRSystem_IVRSystem_020_GetDXGIOutputInfo(struct w_steam_iface *_this, int32_t *pnAdapterIndex);

void __thiscall winIVRSystem_IVRSystem_020_GetOutputDevice(struct w_steam_iface *_this, uint64_t *pnDevice, uint32_t textureType, VkInstance_T *pInstance)
{
    struct IVRSystem_IVRSystem_020_GetOutputDevice_params params =
    {
        .linux_side = _this->u_iface,
        .pnDevice = pnDevice,
        .textureType = textureType,
        .pInstance = pInstance,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_GetOutputDevice, &params );
}

int8_t __thiscall winIVRSystem_IVRSystem_020_IsDisplayOnDesktop(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_020_IsDisplayOnDesktop_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_IsDisplayOnDesktop, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_020_SetDisplayVisibility(struct w_steam_iface *_this, int8_t bIsVisibleOnDesktop)
{
    struct IVRSystem_IVRSystem_020_SetDisplayVisibility_params params =
    {
        .linux_side = _this->u_iface,
        .bIsVisibleOnDesktop = bIsVisibleOnDesktop,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_SetDisplayVisibility, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_020_GetDeviceToAbsoluteTrackingPose(struct w_steam_iface *_this, uint32_t eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t *pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    struct IVRSystem_IVRSystem_020_GetDeviceToAbsoluteTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .fPredictedSecondsToPhotonsFromNow = fPredictedSecondsToPhotonsFromNow,
        .pTrackedDevicePoseArray = pTrackedDevicePoseArray,
        .unTrackedDevicePoseArrayCount = unTrackedDevicePoseArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_GetDeviceToAbsoluteTrackingPose, &params );
}

void __thiscall winIVRSystem_IVRSystem_020_ResetSeatedZeroPose(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_020_ResetSeatedZeroPose_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_ResetSeatedZeroPose, &params );
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_020_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    struct IVRSystem_IVRSystem_020_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, &params );
    return params._ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_020_GetRawZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    struct IVRSystem_IVRSystem_020_GetRawZeroPoseToStandingAbsoluteTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_GetRawZeroPoseToStandingAbsoluteTrackingPose, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_020_GetSortedTrackedDeviceIndicesOfClass(struct w_steam_iface *_this, uint32_t eTrackedDeviceClass, uint32_t *punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, uint32_t unRelativeToTrackedDeviceIndex)
{
    struct IVRSystem_IVRSystem_020_GetSortedTrackedDeviceIndicesOfClass_params params =
    {
        .linux_side = _this->u_iface,
        .eTrackedDeviceClass = eTrackedDeviceClass,
        .punTrackedDeviceIndexArray = punTrackedDeviceIndexArray,
        .unTrackedDeviceIndexArrayCount = unTrackedDeviceIndexArrayCount,
        .unRelativeToTrackedDeviceIndex = unRelativeToTrackedDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_GetSortedTrackedDeviceIndicesOfClass, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_020_GetTrackedDeviceActivityLevel(struct w_steam_iface *_this, uint32_t unDeviceId)
{
    struct IVRSystem_IVRSystem_020_GetTrackedDeviceActivityLevel_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceId = unDeviceId,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_GetTrackedDeviceActivityLevel, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_020_ApplyTransform(struct w_steam_iface *_this, TrackedDevicePose_t *pOutputPose, const TrackedDevicePose_t *pTrackedDevicePose, const HmdMatrix34_t *pTransform)
{
    struct IVRSystem_IVRSystem_020_ApplyTransform_params params =
    {
        .linux_side = _this->u_iface,
        .pOutputPose = pOutputPose,
        .pTrackedDevicePose = pTrackedDevicePose,
        .pTransform = pTransform,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_ApplyTransform, &params );
}

uint32_t __thiscall winIVRSystem_IVRSystem_020_GetTrackedDeviceIndexForControllerRole(struct w_steam_iface *_this, uint32_t unDeviceType)
{
    struct IVRSystem_IVRSystem_020_GetTrackedDeviceIndexForControllerRole_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceType = unDeviceType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_GetTrackedDeviceIndexForControllerRole, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_020_GetControllerRoleForTrackedDeviceIndex(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_020_GetControllerRoleForTrackedDeviceIndex_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_GetControllerRoleForTrackedDeviceIndex, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_020_GetTrackedDeviceClass(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_020_GetTrackedDeviceClass_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_GetTrackedDeviceClass, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_020_IsTrackedDeviceConnected(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_020_IsTrackedDeviceConnected_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_IsTrackedDeviceConnected, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_020_GetBoolTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_020_GetBoolTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_GetBoolTrackedDeviceProperty, &params );
    return params._ret;
}

float __thiscall winIVRSystem_IVRSystem_020_GetFloatTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_020_GetFloatTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_GetFloatTrackedDeviceProperty, &params );
    return params._ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_020_GetInt32TrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_020_GetInt32TrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_GetInt32TrackedDeviceProperty, &params );
    return params._ret;
}

uint64_t __thiscall winIVRSystem_IVRSystem_020_GetUint64TrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_020_GetUint64TrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_GetUint64TrackedDeviceProperty, &params );
    return params._ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_020_GetMatrix34TrackedDeviceProperty(struct w_steam_iface *_this, HmdMatrix34_t *_ret, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_020_GetMatrix34TrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_GetMatrix34TrackedDeviceProperty, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_020_GetArrayTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t propType, void *pBuffer, uint32_t unBufferSize, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_020_GetArrayTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .propType = propType,
        .pBuffer = pBuffer,
        .unBufferSize = unBufferSize,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_GetArrayTrackedDeviceProperty, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_020_GetStringTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, char *pchValue, uint32_t unBufferSize, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_020_GetStringTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pchValue = pchValue,
        .unBufferSize = unBufferSize,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_GetStringTrackedDeviceProperty, &params );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_020_GetPropErrorNameFromEnum(struct w_steam_iface *_this, uint32_t error)
{
    struct IVRSystem_IVRSystem_020_GetPropErrorNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .error = error,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_GetPropErrorNameFromEnum, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_020_PollNextEvent(struct w_steam_iface *_this, w_VREvent_t_1322 *pEvent, uint32_t uncbVREvent)
{
    w_VREvent_t_1322 w_pEvent;
    struct IVRSystem_IVRSystem_020_PollNextEvent_params params =
    {
        .linux_side = _this->u_iface,
        .pEvent = pEvent ? &w_pEvent : NULL,
        .uncbVREvent = uncbVREvent,
    };
    TRACE("%p\n", _this);
    uncbVREvent = min( uncbVREvent, sizeof(w_pEvent) );
    if (pEvent) memcpy( &w_pEvent, pEvent, uncbVREvent );
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_PollNextEvent, &params );
    if (pEvent) memcpy( pEvent, &w_pEvent, uncbVREvent );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_020_PollNextEventWithPose(struct w_steam_iface *_this, uint32_t eOrigin, w_VREvent_t_1322 *pEvent, uint32_t uncbVREvent, TrackedDevicePose_t *pTrackedDevicePose)
{
    w_VREvent_t_1322 w_pEvent;
    struct IVRSystem_IVRSystem_020_PollNextEventWithPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .pEvent = pEvent ? &w_pEvent : NULL,
        .uncbVREvent = uncbVREvent,
        .pTrackedDevicePose = pTrackedDevicePose,
    };
    TRACE("%p\n", _this);
    uncbVREvent = min( uncbVREvent, sizeof(w_pEvent) );
    if (pEvent) memcpy( &w_pEvent, pEvent, uncbVREvent );
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_PollNextEventWithPose, &params );
    if (pEvent) memcpy( pEvent, &w_pEvent, uncbVREvent );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_020_GetEventTypeNameFromEnum(struct w_steam_iface *_this, uint32_t eType)
{
    struct IVRSystem_IVRSystem_020_GetEventTypeNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eType = eType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_GetEventTypeNameFromEnum, &params );
    return params._ret;
}

w_HiddenAreaMesh_t * __thiscall winIVRSystem_IVRSystem_020_GetHiddenAreaMesh(struct w_steam_iface *_this, w_HiddenAreaMesh_t *_ret, uint32_t eEye, uint32_t type)
{
    struct IVRSystem_IVRSystem_020_GetHiddenAreaMesh_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
        .type = type,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_GetHiddenAreaMesh, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_020_GetControllerState(struct w_steam_iface *_this, uint32_t unControllerDeviceIndex, w_VRControllerState001_t *pControllerState, uint32_t unControllerStateSize)
{
    w_VRControllerState001_t w_pControllerState;
    struct IVRSystem_IVRSystem_020_GetControllerState_params params =
    {
        .linux_side = _this->u_iface,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .pControllerState = pControllerState ? &w_pControllerState : NULL,
        .unControllerStateSize = unControllerStateSize,
    };
    TRACE("%p\n", _this);
    unControllerStateSize = min( unControllerStateSize, sizeof(w_pControllerState) );
    if (pControllerState) memcpy( &w_pControllerState, pControllerState, unControllerStateSize );
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_GetControllerState, &params );
    if (pControllerState) memcpy( pControllerState, &w_pControllerState, unControllerStateSize );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_020_GetControllerStateWithPose(struct w_steam_iface *_this, uint32_t eOrigin, uint32_t unControllerDeviceIndex, w_VRControllerState001_t *pControllerState, uint32_t unControllerStateSize, TrackedDevicePose_t *pTrackedDevicePose)
{
    w_VRControllerState001_t w_pControllerState;
    struct IVRSystem_IVRSystem_020_GetControllerStateWithPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .pControllerState = pControllerState ? &w_pControllerState : NULL,
        .unControllerStateSize = unControllerStateSize,
        .pTrackedDevicePose = pTrackedDevicePose,
    };
    TRACE("%p\n", _this);
    unControllerStateSize = min( unControllerStateSize, sizeof(w_pControllerState) );
    if (pControllerState) memcpy( &w_pControllerState, pControllerState, unControllerStateSize );
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_GetControllerStateWithPose, &params );
    if (pControllerState) memcpy( pControllerState, &w_pControllerState, unControllerStateSize );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_020_TriggerHapticPulse(struct w_steam_iface *_this, uint32_t unControllerDeviceIndex, uint32_t unAxisId, uint16_t usDurationMicroSec)
{
    struct IVRSystem_IVRSystem_020_TriggerHapticPulse_params params =
    {
        .linux_side = _this->u_iface,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .unAxisId = unAxisId,
        .usDurationMicroSec = usDurationMicroSec,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_TriggerHapticPulse, &params );
}

const char * __thiscall winIVRSystem_IVRSystem_020_GetButtonIdNameFromEnum(struct w_steam_iface *_this, uint32_t eButtonId)
{
    struct IVRSystem_IVRSystem_020_GetButtonIdNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eButtonId = eButtonId,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_GetButtonIdNameFromEnum, &params );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_020_GetControllerAxisTypeNameFromEnum(struct w_steam_iface *_this, uint32_t eAxisType)
{
    struct IVRSystem_IVRSystem_020_GetControllerAxisTypeNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eAxisType = eAxisType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_GetControllerAxisTypeNameFromEnum, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_020_IsInputAvailable(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_020_IsInputAvailable_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_IsInputAvailable, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_020_IsSteamVRDrawingControllers(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_020_IsSteamVRDrawingControllers_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_IsSteamVRDrawingControllers, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_020_ShouldApplicationPause(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_020_ShouldApplicationPause_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_ShouldApplicationPause, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_020_ShouldApplicationReduceRenderingWork(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_020_ShouldApplicationReduceRenderingWork_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_ShouldApplicationReduceRenderingWork, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_020_PerformFirmwareUpdate(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_020_PerformFirmwareUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_PerformFirmwareUpdate, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_020_AcknowledgeQuit_Exiting(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_020_AcknowledgeQuit_Exiting_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_AcknowledgeQuit_Exiting, &params );
}

void __thiscall winIVRSystem_IVRSystem_020_AcknowledgeQuit_UserPrompt(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_020_AcknowledgeQuit_UserPrompt_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_AcknowledgeQuit_UserPrompt, &params );
}

uint32_t __thiscall winIVRSystem_IVRSystem_020_GetAppContainerFilePaths(struct w_steam_iface *_this, char *pchBuffer, uint32_t unBufferSize)
{
    struct IVRSystem_IVRSystem_020_GetAppContainerFilePaths_params params =
    {
        .linux_side = _this->u_iface,
        .pchBuffer = pchBuffer,
        .unBufferSize = unBufferSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_GetAppContainerFilePaths, &params );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_020_GetRuntimeVersion(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_020_GetRuntimeVersion_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_GetRuntimeVersion, &params );
    return params._ret;
}

extern vtable_ptr winIVRSystem_IVRSystem_020_vtable;

DEFINE_RTTI_DATA0(winIVRSystem_IVRSystem_020, 0, ".?AVIVRSystem@@")

__ASM_BLOCK_BEGIN(winIVRSystem_IVRSystem_020_vtables)
    __ASM_VTABLE(winIVRSystem_IVRSystem_020,
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_020_GetRecommendedRenderTargetSize)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_020_GetProjectionMatrix)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_020_GetProjectionRaw)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_020_ComputeDistortion)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_020_GetEyeToHeadTransform)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_020_GetTimeSinceLastVsync)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_020_GetD3D9AdapterIndex)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_020_GetDXGIOutputInfo)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_020_GetOutputDevice)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_020_IsDisplayOnDesktop)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_020_SetDisplayVisibility)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_020_GetDeviceToAbsoluteTrackingPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_020_ResetSeatedZeroPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_020_GetSeatedZeroPoseToStandingAbsoluteTrackingPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_020_GetRawZeroPoseToStandingAbsoluteTrackingPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_020_GetSortedTrackedDeviceIndicesOfClass)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_020_GetTrackedDeviceActivityLevel)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_020_ApplyTransform)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_020_GetTrackedDeviceIndexForControllerRole)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_020_GetControllerRoleForTrackedDeviceIndex)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_020_GetTrackedDeviceClass)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_020_IsTrackedDeviceConnected)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_020_GetBoolTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_020_GetFloatTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_020_GetInt32TrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_020_GetUint64TrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_020_GetMatrix34TrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_020_GetArrayTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_020_GetStringTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_020_GetPropErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_020_PollNextEvent)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_020_PollNextEventWithPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_020_GetEventTypeNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_020_GetHiddenAreaMesh)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_020_GetControllerState)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_020_GetControllerStateWithPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_020_TriggerHapticPulse)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_020_GetButtonIdNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_020_GetControllerAxisTypeNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_020_IsInputAvailable)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_020_IsSteamVRDrawingControllers)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_020_ShouldApplicationPause)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_020_ShouldApplicationReduceRenderingWork)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_020_PerformFirmwareUpdate)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_020_AcknowledgeQuit_Exiting)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_020_AcknowledgeQuit_UserPrompt)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_020_GetAppContainerFilePaths)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_020_GetRuntimeVersion)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRSystem_IVRSystem_020(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRSystem_IVRSystem_020_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRSystem_IVRSystem_020(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRSystem_IVRSystem_020_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(48);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 48 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRSystem_IVRSystem_020_GetRecommendedRenderTargetSize, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRSystem_IVRSystem_020_GetProjectionMatrix, 4, TRUE, TRUE);
    init_thunk(&thunks[2], r, winIVRSystem_IVRSystem_020_GetProjectionRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRSystem_IVRSystem_020_ComputeDistortion, 4, TRUE, FALSE);
    init_thunk(&thunks[4], r, winIVRSystem_IVRSystem_020_GetEyeToHeadTransform, 2, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRSystem_IVRSystem_020_GetTimeSinceLastVsync, 2, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRSystem_IVRSystem_020_GetD3D9AdapterIndex, 0, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRSystem_IVRSystem_020_GetDXGIOutputInfo, 1, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRSystem_IVRSystem_020_GetOutputDevice, 3, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRSystem_IVRSystem_020_IsDisplayOnDesktop, 0, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRSystem_IVRSystem_020_SetDisplayVisibility, 1, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRSystem_IVRSystem_020_GetDeviceToAbsoluteTrackingPose, 4, TRUE, FALSE);
    init_thunk(&thunks[12], r, winIVRSystem_IVRSystem_020_ResetSeatedZeroPose, 0, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVRSystem_IVRSystem_020_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, 1, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRSystem_IVRSystem_020_GetRawZeroPoseToStandingAbsoluteTrackingPose, 1, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVRSystem_IVRSystem_020_GetSortedTrackedDeviceIndicesOfClass, 4, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRSystem_IVRSystem_020_GetTrackedDeviceActivityLevel, 1, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRSystem_IVRSystem_020_ApplyTransform, 3, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRSystem_IVRSystem_020_GetTrackedDeviceIndexForControllerRole, 1, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVRSystem_IVRSystem_020_GetControllerRoleForTrackedDeviceIndex, 1, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVRSystem_IVRSystem_020_GetTrackedDeviceClass, 1, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVRSystem_IVRSystem_020_IsTrackedDeviceConnected, 1, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVRSystem_IVRSystem_020_GetBoolTrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVRSystem_IVRSystem_020_GetFloatTrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVRSystem_IVRSystem_020_GetInt32TrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVRSystem_IVRSystem_020_GetUint64TrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVRSystem_IVRSystem_020_GetMatrix34TrackedDeviceProperty, 4, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVRSystem_IVRSystem_020_GetArrayTrackedDeviceProperty, 6, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVRSystem_IVRSystem_020_GetStringTrackedDeviceProperty, 5, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVRSystem_IVRSystem_020_GetPropErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVRSystem_IVRSystem_020_PollNextEvent, 2, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVRSystem_IVRSystem_020_PollNextEventWithPose, 4, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVRSystem_IVRSystem_020_GetEventTypeNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVRSystem_IVRSystem_020_GetHiddenAreaMesh, 3, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVRSystem_IVRSystem_020_GetControllerState, 3, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVRSystem_IVRSystem_020_GetControllerStateWithPose, 5, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVRSystem_IVRSystem_020_TriggerHapticPulse, 3, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVRSystem_IVRSystem_020_GetButtonIdNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVRSystem_IVRSystem_020_GetControllerAxisTypeNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVRSystem_IVRSystem_020_IsInputAvailable, 0, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVRSystem_IVRSystem_020_IsSteamVRDrawingControllers, 0, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVRSystem_IVRSystem_020_ShouldApplicationPause, 0, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVRSystem_IVRSystem_020_ShouldApplicationReduceRenderingWork, 0, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVRSystem_IVRSystem_020_PerformFirmwareUpdate, 1, FALSE, FALSE);
    init_thunk(&thunks[44], r, winIVRSystem_IVRSystem_020_AcknowledgeQuit_Exiting, 0, FALSE, FALSE);
    init_thunk(&thunks[45], r, winIVRSystem_IVRSystem_020_AcknowledgeQuit_UserPrompt, 0, FALSE, FALSE);
    init_thunk(&thunks[46], r, winIVRSystem_IVRSystem_020_GetAppContainerFilePaths, 2, FALSE, FALSE);
    init_thunk(&thunks[47], r, winIVRSystem_IVRSystem_020_GetRuntimeVersion, 0, FALSE, FALSE);
    for (i = 0; i < 48; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRSystem_IVRSystem_020_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_021_GetRecommendedRenderTargetSize, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_021_GetProjectionMatrix, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_021_GetProjectionRaw, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_021_ComputeDistortion, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_021_GetEyeToHeadTransform, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_021_GetTimeSinceLastVsync, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_021_GetD3D9AdapterIndex, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_021_GetDXGIOutputInfo, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_021_GetOutputDevice, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_021_IsDisplayOnDesktop, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_021_SetDisplayVisibility, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_021_GetDeviceToAbsoluteTrackingPose, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_021_ResetSeatedZeroPose, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_021_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_021_GetRawZeroPoseToStandingAbsoluteTrackingPose, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_021_GetSortedTrackedDeviceIndicesOfClass, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_021_GetTrackedDeviceActivityLevel, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_021_ApplyTransform, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_021_GetTrackedDeviceIndexForControllerRole, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_021_GetControllerRoleForTrackedDeviceIndex, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_021_GetTrackedDeviceClass, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_021_IsTrackedDeviceConnected, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_021_GetBoolTrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_021_GetFloatTrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_021_GetInt32TrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_021_GetUint64TrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_021_GetMatrix34TrackedDeviceProperty, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_021_GetArrayTrackedDeviceProperty, 28)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_021_GetStringTrackedDeviceProperty, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_021_GetPropErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_021_PollNextEvent, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_021_PollNextEventWithPose, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_021_GetEventTypeNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_021_GetHiddenAreaMesh, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_021_GetControllerState, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_021_GetControllerStateWithPose, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_021_TriggerHapticPulse, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_021_GetButtonIdNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_021_GetControllerAxisTypeNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_021_IsInputAvailable, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_021_IsSteamVRDrawingControllers, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_021_ShouldApplicationPause, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_021_ShouldApplicationReduceRenderingWork, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_021_PerformFirmwareUpdate, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_021_AcknowledgeQuit_Exiting, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_021_GetAppContainerFilePaths, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_021_GetRuntimeVersion, 4)

void __thiscall winIVRSystem_IVRSystem_021_GetRecommendedRenderTargetSize(struct w_steam_iface *_this, uint32_t *pnWidth, uint32_t *pnHeight)
{
    struct IVRSystem_IVRSystem_021_GetRecommendedRenderTargetSize_params params =
    {
        .linux_side = _this->u_iface,
        .pnWidth = pnWidth,
        .pnHeight = pnHeight,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_021_GetRecommendedRenderTargetSize, &params );
}

HmdMatrix44_t * __thiscall winIVRSystem_IVRSystem_021_GetProjectionMatrix(struct w_steam_iface *_this, HmdMatrix44_t *_ret, uint32_t eEye, float fNearZ, float fFarZ)
{
    struct IVRSystem_IVRSystem_021_GetProjectionMatrix_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
        .fNearZ = fNearZ,
        .fFarZ = fFarZ,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_021_GetProjectionMatrix, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_021_GetProjectionRaw(struct w_steam_iface *_this, uint32_t eEye, float *pfLeft, float *pfRight, float *pfTop, float *pfBottom)
{
    struct IVRSystem_IVRSystem_021_GetProjectionRaw_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pfLeft = pfLeft,
        .pfRight = pfRight,
        .pfTop = pfTop,
        .pfBottom = pfBottom,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_021_GetProjectionRaw, &params );
}

int8_t __thiscall winIVRSystem_IVRSystem_021_ComputeDistortion(struct w_steam_iface *_this, uint32_t eEye, float fU, float fV, DistortionCoordinates_t *pDistortionCoordinates)
{
    struct IVRSystem_IVRSystem_021_ComputeDistortion_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .fU = fU,
        .fV = fV,
        .pDistortionCoordinates = pDistortionCoordinates,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_021_ComputeDistortion, &params );
    return params._ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_021_GetEyeToHeadTransform(struct w_steam_iface *_this, HmdMatrix34_t *_ret, uint32_t eEye)
{
    struct IVRSystem_IVRSystem_021_GetEyeToHeadTransform_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_021_GetEyeToHeadTransform, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_021_GetTimeSinceLastVsync(struct w_steam_iface *_this, float *pfSecondsSinceLastVsync, uint64_t *pulFrameCounter)
{
    struct IVRSystem_IVRSystem_021_GetTimeSinceLastVsync_params params =
    {
        .linux_side = _this->u_iface,
        .pfSecondsSinceLastVsync = pfSecondsSinceLastVsync,
        .pulFrameCounter = pulFrameCounter,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_021_GetTimeSinceLastVsync, &params );
    return params._ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_021_GetD3D9AdapterIndex(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_021_GetD3D9AdapterIndex_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_021_GetD3D9AdapterIndex, &params );
    return params._ret;
}

extern void __thiscall winIVRSystem_IVRSystem_021_GetDXGIOutputInfo(struct w_steam_iface *_this, int32_t *pnAdapterIndex);

void __thiscall winIVRSystem_IVRSystem_021_GetOutputDevice(struct w_steam_iface *_this, uint64_t *pnDevice, uint32_t textureType, VkInstance_T *pInstance)
{
    struct IVRSystem_IVRSystem_021_GetOutputDevice_params params =
    {
        .linux_side = _this->u_iface,
        .pnDevice = pnDevice,
        .textureType = textureType,
        .pInstance = pInstance,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_021_GetOutputDevice, &params );
}

int8_t __thiscall winIVRSystem_IVRSystem_021_IsDisplayOnDesktop(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_021_IsDisplayOnDesktop_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_021_IsDisplayOnDesktop, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_021_SetDisplayVisibility(struct w_steam_iface *_this, int8_t bIsVisibleOnDesktop)
{
    struct IVRSystem_IVRSystem_021_SetDisplayVisibility_params params =
    {
        .linux_side = _this->u_iface,
        .bIsVisibleOnDesktop = bIsVisibleOnDesktop,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_021_SetDisplayVisibility, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_021_GetDeviceToAbsoluteTrackingPose(struct w_steam_iface *_this, uint32_t eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t *pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    struct IVRSystem_IVRSystem_021_GetDeviceToAbsoluteTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .fPredictedSecondsToPhotonsFromNow = fPredictedSecondsToPhotonsFromNow,
        .pTrackedDevicePoseArray = pTrackedDevicePoseArray,
        .unTrackedDevicePoseArrayCount = unTrackedDevicePoseArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_021_GetDeviceToAbsoluteTrackingPose, &params );
}

void __thiscall winIVRSystem_IVRSystem_021_ResetSeatedZeroPose(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_021_ResetSeatedZeroPose_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_021_ResetSeatedZeroPose, &params );
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_021_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    struct IVRSystem_IVRSystem_021_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_021_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, &params );
    return params._ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_021_GetRawZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    struct IVRSystem_IVRSystem_021_GetRawZeroPoseToStandingAbsoluteTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_021_GetRawZeroPoseToStandingAbsoluteTrackingPose, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_021_GetSortedTrackedDeviceIndicesOfClass(struct w_steam_iface *_this, uint32_t eTrackedDeviceClass, uint32_t *punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, uint32_t unRelativeToTrackedDeviceIndex)
{
    struct IVRSystem_IVRSystem_021_GetSortedTrackedDeviceIndicesOfClass_params params =
    {
        .linux_side = _this->u_iface,
        .eTrackedDeviceClass = eTrackedDeviceClass,
        .punTrackedDeviceIndexArray = punTrackedDeviceIndexArray,
        .unTrackedDeviceIndexArrayCount = unTrackedDeviceIndexArrayCount,
        .unRelativeToTrackedDeviceIndex = unRelativeToTrackedDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_021_GetSortedTrackedDeviceIndicesOfClass, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_021_GetTrackedDeviceActivityLevel(struct w_steam_iface *_this, uint32_t unDeviceId)
{
    struct IVRSystem_IVRSystem_021_GetTrackedDeviceActivityLevel_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceId = unDeviceId,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_021_GetTrackedDeviceActivityLevel, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_021_ApplyTransform(struct w_steam_iface *_this, TrackedDevicePose_t *pOutputPose, const TrackedDevicePose_t *pTrackedDevicePose, const HmdMatrix34_t *pTransform)
{
    struct IVRSystem_IVRSystem_021_ApplyTransform_params params =
    {
        .linux_side = _this->u_iface,
        .pOutputPose = pOutputPose,
        .pTrackedDevicePose = pTrackedDevicePose,
        .pTransform = pTransform,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_021_ApplyTransform, &params );
}

uint32_t __thiscall winIVRSystem_IVRSystem_021_GetTrackedDeviceIndexForControllerRole(struct w_steam_iface *_this, uint32_t unDeviceType)
{
    struct IVRSystem_IVRSystem_021_GetTrackedDeviceIndexForControllerRole_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceType = unDeviceType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_021_GetTrackedDeviceIndexForControllerRole, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_021_GetControllerRoleForTrackedDeviceIndex(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_021_GetControllerRoleForTrackedDeviceIndex_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_021_GetControllerRoleForTrackedDeviceIndex, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_021_GetTrackedDeviceClass(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_021_GetTrackedDeviceClass_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_021_GetTrackedDeviceClass, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_021_IsTrackedDeviceConnected(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_021_IsTrackedDeviceConnected_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_021_IsTrackedDeviceConnected, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_021_GetBoolTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_021_GetBoolTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_021_GetBoolTrackedDeviceProperty, &params );
    return params._ret;
}

float __thiscall winIVRSystem_IVRSystem_021_GetFloatTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_021_GetFloatTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_021_GetFloatTrackedDeviceProperty, &params );
    return params._ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_021_GetInt32TrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_021_GetInt32TrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_021_GetInt32TrackedDeviceProperty, &params );
    return params._ret;
}

uint64_t __thiscall winIVRSystem_IVRSystem_021_GetUint64TrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_021_GetUint64TrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_021_GetUint64TrackedDeviceProperty, &params );
    return params._ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_021_GetMatrix34TrackedDeviceProperty(struct w_steam_iface *_this, HmdMatrix34_t *_ret, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_021_GetMatrix34TrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_021_GetMatrix34TrackedDeviceProperty, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_021_GetArrayTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t propType, void *pBuffer, uint32_t unBufferSize, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_021_GetArrayTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .propType = propType,
        .pBuffer = pBuffer,
        .unBufferSize = unBufferSize,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_021_GetArrayTrackedDeviceProperty, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_021_GetStringTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, char *pchValue, uint32_t unBufferSize, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_021_GetStringTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pchValue = pchValue,
        .unBufferSize = unBufferSize,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_021_GetStringTrackedDeviceProperty, &params );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_021_GetPropErrorNameFromEnum(struct w_steam_iface *_this, uint32_t error)
{
    struct IVRSystem_IVRSystem_021_GetPropErrorNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .error = error,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_021_GetPropErrorNameFromEnum, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_021_PollNextEvent(struct w_steam_iface *_this, w_VREvent_t_11030 *pEvent, uint32_t uncbVREvent)
{
    w_VREvent_t_11030 w_pEvent;
    struct IVRSystem_IVRSystem_021_PollNextEvent_params params =
    {
        .linux_side = _this->u_iface,
        .pEvent = pEvent ? &w_pEvent : NULL,
        .uncbVREvent = uncbVREvent,
    };
    TRACE("%p\n", _this);
    uncbVREvent = min( uncbVREvent, sizeof(w_pEvent) );
    if (pEvent) memcpy( &w_pEvent, pEvent, uncbVREvent );
    VRCLIENT_CALL( IVRSystem_IVRSystem_021_PollNextEvent, &params );
    if (pEvent) memcpy( pEvent, &w_pEvent, uncbVREvent );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_021_PollNextEventWithPose(struct w_steam_iface *_this, uint32_t eOrigin, w_VREvent_t_11030 *pEvent, uint32_t uncbVREvent, TrackedDevicePose_t *pTrackedDevicePose)
{
    w_VREvent_t_11030 w_pEvent;
    struct IVRSystem_IVRSystem_021_PollNextEventWithPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .pEvent = pEvent ? &w_pEvent : NULL,
        .uncbVREvent = uncbVREvent,
        .pTrackedDevicePose = pTrackedDevicePose,
    };
    TRACE("%p\n", _this);
    uncbVREvent = min( uncbVREvent, sizeof(w_pEvent) );
    if (pEvent) memcpy( &w_pEvent, pEvent, uncbVREvent );
    VRCLIENT_CALL( IVRSystem_IVRSystem_021_PollNextEventWithPose, &params );
    if (pEvent) memcpy( pEvent, &w_pEvent, uncbVREvent );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_021_GetEventTypeNameFromEnum(struct w_steam_iface *_this, uint32_t eType)
{
    struct IVRSystem_IVRSystem_021_GetEventTypeNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eType = eType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_021_GetEventTypeNameFromEnum, &params );
    return params._ret;
}

w_HiddenAreaMesh_t * __thiscall winIVRSystem_IVRSystem_021_GetHiddenAreaMesh(struct w_steam_iface *_this, w_HiddenAreaMesh_t *_ret, uint32_t eEye, uint32_t type)
{
    struct IVRSystem_IVRSystem_021_GetHiddenAreaMesh_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
        .type = type,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_021_GetHiddenAreaMesh, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_021_GetControllerState(struct w_steam_iface *_this, uint32_t unControllerDeviceIndex, w_VRControllerState001_t *pControllerState, uint32_t unControllerStateSize)
{
    w_VRControllerState001_t w_pControllerState;
    struct IVRSystem_IVRSystem_021_GetControllerState_params params =
    {
        .linux_side = _this->u_iface,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .pControllerState = pControllerState ? &w_pControllerState : NULL,
        .unControllerStateSize = unControllerStateSize,
    };
    TRACE("%p\n", _this);
    unControllerStateSize = min( unControllerStateSize, sizeof(w_pControllerState) );
    if (pControllerState) memcpy( &w_pControllerState, pControllerState, unControllerStateSize );
    VRCLIENT_CALL( IVRSystem_IVRSystem_021_GetControllerState, &params );
    if (pControllerState) memcpy( pControllerState, &w_pControllerState, unControllerStateSize );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_021_GetControllerStateWithPose(struct w_steam_iface *_this, uint32_t eOrigin, uint32_t unControllerDeviceIndex, w_VRControllerState001_t *pControllerState, uint32_t unControllerStateSize, TrackedDevicePose_t *pTrackedDevicePose)
{
    w_VRControllerState001_t w_pControllerState;
    struct IVRSystem_IVRSystem_021_GetControllerStateWithPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .pControllerState = pControllerState ? &w_pControllerState : NULL,
        .unControllerStateSize = unControllerStateSize,
        .pTrackedDevicePose = pTrackedDevicePose,
    };
    TRACE("%p\n", _this);
    unControllerStateSize = min( unControllerStateSize, sizeof(w_pControllerState) );
    if (pControllerState) memcpy( &w_pControllerState, pControllerState, unControllerStateSize );
    VRCLIENT_CALL( IVRSystem_IVRSystem_021_GetControllerStateWithPose, &params );
    if (pControllerState) memcpy( pControllerState, &w_pControllerState, unControllerStateSize );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_021_TriggerHapticPulse(struct w_steam_iface *_this, uint32_t unControllerDeviceIndex, uint32_t unAxisId, uint16_t usDurationMicroSec)
{
    struct IVRSystem_IVRSystem_021_TriggerHapticPulse_params params =
    {
        .linux_side = _this->u_iface,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .unAxisId = unAxisId,
        .usDurationMicroSec = usDurationMicroSec,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_021_TriggerHapticPulse, &params );
}

const char * __thiscall winIVRSystem_IVRSystem_021_GetButtonIdNameFromEnum(struct w_steam_iface *_this, uint32_t eButtonId)
{
    struct IVRSystem_IVRSystem_021_GetButtonIdNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eButtonId = eButtonId,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_021_GetButtonIdNameFromEnum, &params );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_021_GetControllerAxisTypeNameFromEnum(struct w_steam_iface *_this, uint32_t eAxisType)
{
    struct IVRSystem_IVRSystem_021_GetControllerAxisTypeNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eAxisType = eAxisType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_021_GetControllerAxisTypeNameFromEnum, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_021_IsInputAvailable(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_021_IsInputAvailable_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_021_IsInputAvailable, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_021_IsSteamVRDrawingControllers(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_021_IsSteamVRDrawingControllers_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_021_IsSteamVRDrawingControllers, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_021_ShouldApplicationPause(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_021_ShouldApplicationPause_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_021_ShouldApplicationPause, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_021_ShouldApplicationReduceRenderingWork(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_021_ShouldApplicationReduceRenderingWork_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_021_ShouldApplicationReduceRenderingWork, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_021_PerformFirmwareUpdate(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_021_PerformFirmwareUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_021_PerformFirmwareUpdate, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_021_AcknowledgeQuit_Exiting(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_021_AcknowledgeQuit_Exiting_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_021_AcknowledgeQuit_Exiting, &params );
}

uint32_t __thiscall winIVRSystem_IVRSystem_021_GetAppContainerFilePaths(struct w_steam_iface *_this, char *pchBuffer, uint32_t unBufferSize)
{
    struct IVRSystem_IVRSystem_021_GetAppContainerFilePaths_params params =
    {
        .linux_side = _this->u_iface,
        .pchBuffer = pchBuffer,
        .unBufferSize = unBufferSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_021_GetAppContainerFilePaths, &params );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_021_GetRuntimeVersion(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_021_GetRuntimeVersion_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_021_GetRuntimeVersion, &params );
    return params._ret;
}

extern vtable_ptr winIVRSystem_IVRSystem_021_vtable;

DEFINE_RTTI_DATA0(winIVRSystem_IVRSystem_021, 0, ".?AVIVRSystem@@")

__ASM_BLOCK_BEGIN(winIVRSystem_IVRSystem_021_vtables)
    __ASM_VTABLE(winIVRSystem_IVRSystem_021,
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_021_GetRecommendedRenderTargetSize)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_021_GetProjectionMatrix)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_021_GetProjectionRaw)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_021_ComputeDistortion)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_021_GetEyeToHeadTransform)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_021_GetTimeSinceLastVsync)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_021_GetD3D9AdapterIndex)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_021_GetDXGIOutputInfo)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_021_GetOutputDevice)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_021_IsDisplayOnDesktop)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_021_SetDisplayVisibility)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_021_GetDeviceToAbsoluteTrackingPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_021_ResetSeatedZeroPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_021_GetSeatedZeroPoseToStandingAbsoluteTrackingPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_021_GetRawZeroPoseToStandingAbsoluteTrackingPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_021_GetSortedTrackedDeviceIndicesOfClass)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_021_GetTrackedDeviceActivityLevel)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_021_ApplyTransform)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_021_GetTrackedDeviceIndexForControllerRole)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_021_GetControllerRoleForTrackedDeviceIndex)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_021_GetTrackedDeviceClass)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_021_IsTrackedDeviceConnected)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_021_GetBoolTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_021_GetFloatTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_021_GetInt32TrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_021_GetUint64TrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_021_GetMatrix34TrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_021_GetArrayTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_021_GetStringTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_021_GetPropErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_021_PollNextEvent)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_021_PollNextEventWithPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_021_GetEventTypeNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_021_GetHiddenAreaMesh)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_021_GetControllerState)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_021_GetControllerStateWithPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_021_TriggerHapticPulse)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_021_GetButtonIdNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_021_GetControllerAxisTypeNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_021_IsInputAvailable)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_021_IsSteamVRDrawingControllers)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_021_ShouldApplicationPause)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_021_ShouldApplicationReduceRenderingWork)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_021_PerformFirmwareUpdate)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_021_AcknowledgeQuit_Exiting)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_021_GetAppContainerFilePaths)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_021_GetRuntimeVersion)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRSystem_IVRSystem_021(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRSystem_IVRSystem_021_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRSystem_IVRSystem_021(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRSystem_IVRSystem_021_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(47);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 47 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRSystem_IVRSystem_021_GetRecommendedRenderTargetSize, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRSystem_IVRSystem_021_GetProjectionMatrix, 4, TRUE, TRUE);
    init_thunk(&thunks[2], r, winIVRSystem_IVRSystem_021_GetProjectionRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRSystem_IVRSystem_021_ComputeDistortion, 4, TRUE, FALSE);
    init_thunk(&thunks[4], r, winIVRSystem_IVRSystem_021_GetEyeToHeadTransform, 2, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRSystem_IVRSystem_021_GetTimeSinceLastVsync, 2, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRSystem_IVRSystem_021_GetD3D9AdapterIndex, 0, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRSystem_IVRSystem_021_GetDXGIOutputInfo, 1, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRSystem_IVRSystem_021_GetOutputDevice, 3, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRSystem_IVRSystem_021_IsDisplayOnDesktop, 0, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRSystem_IVRSystem_021_SetDisplayVisibility, 1, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRSystem_IVRSystem_021_GetDeviceToAbsoluteTrackingPose, 4, TRUE, FALSE);
    init_thunk(&thunks[12], r, winIVRSystem_IVRSystem_021_ResetSeatedZeroPose, 0, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVRSystem_IVRSystem_021_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, 1, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRSystem_IVRSystem_021_GetRawZeroPoseToStandingAbsoluteTrackingPose, 1, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVRSystem_IVRSystem_021_GetSortedTrackedDeviceIndicesOfClass, 4, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRSystem_IVRSystem_021_GetTrackedDeviceActivityLevel, 1, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRSystem_IVRSystem_021_ApplyTransform, 3, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRSystem_IVRSystem_021_GetTrackedDeviceIndexForControllerRole, 1, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVRSystem_IVRSystem_021_GetControllerRoleForTrackedDeviceIndex, 1, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVRSystem_IVRSystem_021_GetTrackedDeviceClass, 1, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVRSystem_IVRSystem_021_IsTrackedDeviceConnected, 1, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVRSystem_IVRSystem_021_GetBoolTrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVRSystem_IVRSystem_021_GetFloatTrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVRSystem_IVRSystem_021_GetInt32TrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVRSystem_IVRSystem_021_GetUint64TrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVRSystem_IVRSystem_021_GetMatrix34TrackedDeviceProperty, 4, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVRSystem_IVRSystem_021_GetArrayTrackedDeviceProperty, 6, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVRSystem_IVRSystem_021_GetStringTrackedDeviceProperty, 5, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVRSystem_IVRSystem_021_GetPropErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVRSystem_IVRSystem_021_PollNextEvent, 2, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVRSystem_IVRSystem_021_PollNextEventWithPose, 4, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVRSystem_IVRSystem_021_GetEventTypeNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVRSystem_IVRSystem_021_GetHiddenAreaMesh, 3, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVRSystem_IVRSystem_021_GetControllerState, 3, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVRSystem_IVRSystem_021_GetControllerStateWithPose, 5, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVRSystem_IVRSystem_021_TriggerHapticPulse, 3, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVRSystem_IVRSystem_021_GetButtonIdNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVRSystem_IVRSystem_021_GetControllerAxisTypeNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVRSystem_IVRSystem_021_IsInputAvailable, 0, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVRSystem_IVRSystem_021_IsSteamVRDrawingControllers, 0, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVRSystem_IVRSystem_021_ShouldApplicationPause, 0, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVRSystem_IVRSystem_021_ShouldApplicationReduceRenderingWork, 0, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVRSystem_IVRSystem_021_PerformFirmwareUpdate, 1, FALSE, FALSE);
    init_thunk(&thunks[44], r, winIVRSystem_IVRSystem_021_AcknowledgeQuit_Exiting, 0, FALSE, FALSE);
    init_thunk(&thunks[45], r, winIVRSystem_IVRSystem_021_GetAppContainerFilePaths, 2, FALSE, FALSE);
    init_thunk(&thunks[46], r, winIVRSystem_IVRSystem_021_GetRuntimeVersion, 0, FALSE, FALSE);
    for (i = 0; i < 47; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRSystem_IVRSystem_021_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_022_GetRecommendedRenderTargetSize, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_022_GetProjectionMatrix, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_022_GetProjectionRaw, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_022_ComputeDistortion, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_022_GetEyeToHeadTransform, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_022_GetTimeSinceLastVsync, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_022_GetD3D9AdapterIndex, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_022_GetDXGIOutputInfo, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_022_GetOutputDevice, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_022_IsDisplayOnDesktop, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_022_SetDisplayVisibility, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_022_GetDeviceToAbsoluteTrackingPose, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_022_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_022_GetRawZeroPoseToStandingAbsoluteTrackingPose, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_022_GetSortedTrackedDeviceIndicesOfClass, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_022_GetTrackedDeviceActivityLevel, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_022_ApplyTransform, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_022_GetTrackedDeviceIndexForControllerRole, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_022_GetControllerRoleForTrackedDeviceIndex, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_022_GetTrackedDeviceClass, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_022_IsTrackedDeviceConnected, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_022_GetBoolTrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_022_GetFloatTrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_022_GetInt32TrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_022_GetUint64TrackedDeviceProperty, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_022_GetMatrix34TrackedDeviceProperty, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_022_GetArrayTrackedDeviceProperty, 28)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_022_GetStringTrackedDeviceProperty, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_022_GetPropErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_022_PollNextEvent, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_022_PollNextEventWithPose, 20)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_022_GetEventTypeNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_022_GetHiddenAreaMesh, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_022_GetControllerState, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_022_GetControllerStateWithPose, 24)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_022_TriggerHapticPulse, 16)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_022_GetButtonIdNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_022_GetControllerAxisTypeNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_022_IsInputAvailable, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_022_IsSteamVRDrawingControllers, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_022_ShouldApplicationPause, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_022_ShouldApplicationReduceRenderingWork, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_022_PerformFirmwareUpdate, 8)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_022_AcknowledgeQuit_Exiting, 4)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_022_GetAppContainerFilePaths, 12)
DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_022_GetRuntimeVersion, 4)

void __thiscall winIVRSystem_IVRSystem_022_GetRecommendedRenderTargetSize(struct w_steam_iface *_this, uint32_t *pnWidth, uint32_t *pnHeight)
{
    struct IVRSystem_IVRSystem_022_GetRecommendedRenderTargetSize_params params =
    {
        .linux_side = _this->u_iface,
        .pnWidth = pnWidth,
        .pnHeight = pnHeight,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_022_GetRecommendedRenderTargetSize, &params );
}

HmdMatrix44_t * __thiscall winIVRSystem_IVRSystem_022_GetProjectionMatrix(struct w_steam_iface *_this, HmdMatrix44_t *_ret, uint32_t eEye, float fNearZ, float fFarZ)
{
    struct IVRSystem_IVRSystem_022_GetProjectionMatrix_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
        .fNearZ = fNearZ,
        .fFarZ = fFarZ,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_022_GetProjectionMatrix, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_022_GetProjectionRaw(struct w_steam_iface *_this, uint32_t eEye, float *pfLeft, float *pfRight, float *pfTop, float *pfBottom)
{
    struct IVRSystem_IVRSystem_022_GetProjectionRaw_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pfLeft = pfLeft,
        .pfRight = pfRight,
        .pfTop = pfTop,
        .pfBottom = pfBottom,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_022_GetProjectionRaw, &params );
}

int8_t __thiscall winIVRSystem_IVRSystem_022_ComputeDistortion(struct w_steam_iface *_this, uint32_t eEye, float fU, float fV, DistortionCoordinates_t *pDistortionCoordinates)
{
    struct IVRSystem_IVRSystem_022_ComputeDistortion_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .fU = fU,
        .fV = fV,
        .pDistortionCoordinates = pDistortionCoordinates,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_022_ComputeDistortion, &params );
    return params._ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_022_GetEyeToHeadTransform(struct w_steam_iface *_this, HmdMatrix34_t *_ret, uint32_t eEye)
{
    struct IVRSystem_IVRSystem_022_GetEyeToHeadTransform_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_022_GetEyeToHeadTransform, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_022_GetTimeSinceLastVsync(struct w_steam_iface *_this, float *pfSecondsSinceLastVsync, uint64_t *pulFrameCounter)
{
    struct IVRSystem_IVRSystem_022_GetTimeSinceLastVsync_params params =
    {
        .linux_side = _this->u_iface,
        .pfSecondsSinceLastVsync = pfSecondsSinceLastVsync,
        .pulFrameCounter = pulFrameCounter,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_022_GetTimeSinceLastVsync, &params );
    return params._ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_022_GetD3D9AdapterIndex(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_022_GetD3D9AdapterIndex_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_022_GetD3D9AdapterIndex, &params );
    return params._ret;
}

extern void __thiscall winIVRSystem_IVRSystem_022_GetDXGIOutputInfo(struct w_steam_iface *_this, int32_t *pnAdapterIndex);

void __thiscall winIVRSystem_IVRSystem_022_GetOutputDevice(struct w_steam_iface *_this, uint64_t *pnDevice, uint32_t textureType, VkInstance_T *pInstance)
{
    struct IVRSystem_IVRSystem_022_GetOutputDevice_params params =
    {
        .linux_side = _this->u_iface,
        .pnDevice = pnDevice,
        .textureType = textureType,
        .pInstance = pInstance,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_022_GetOutputDevice, &params );
}

int8_t __thiscall winIVRSystem_IVRSystem_022_IsDisplayOnDesktop(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_022_IsDisplayOnDesktop_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_022_IsDisplayOnDesktop, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_022_SetDisplayVisibility(struct w_steam_iface *_this, int8_t bIsVisibleOnDesktop)
{
    struct IVRSystem_IVRSystem_022_SetDisplayVisibility_params params =
    {
        .linux_side = _this->u_iface,
        .bIsVisibleOnDesktop = bIsVisibleOnDesktop,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_022_SetDisplayVisibility, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_022_GetDeviceToAbsoluteTrackingPose(struct w_steam_iface *_this, uint32_t eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t *pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    struct IVRSystem_IVRSystem_022_GetDeviceToAbsoluteTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .fPredictedSecondsToPhotonsFromNow = fPredictedSecondsToPhotonsFromNow,
        .pTrackedDevicePoseArray = pTrackedDevicePoseArray,
        .unTrackedDevicePoseArrayCount = unTrackedDevicePoseArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_022_GetDeviceToAbsoluteTrackingPose, &params );
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_022_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    struct IVRSystem_IVRSystem_022_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_022_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, &params );
    return params._ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_022_GetRawZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    struct IVRSystem_IVRSystem_022_GetRawZeroPoseToStandingAbsoluteTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_022_GetRawZeroPoseToStandingAbsoluteTrackingPose, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_022_GetSortedTrackedDeviceIndicesOfClass(struct w_steam_iface *_this, uint32_t eTrackedDeviceClass, uint32_t *punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, uint32_t unRelativeToTrackedDeviceIndex)
{
    struct IVRSystem_IVRSystem_022_GetSortedTrackedDeviceIndicesOfClass_params params =
    {
        .linux_side = _this->u_iface,
        .eTrackedDeviceClass = eTrackedDeviceClass,
        .punTrackedDeviceIndexArray = punTrackedDeviceIndexArray,
        .unTrackedDeviceIndexArrayCount = unTrackedDeviceIndexArrayCount,
        .unRelativeToTrackedDeviceIndex = unRelativeToTrackedDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_022_GetSortedTrackedDeviceIndicesOfClass, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_022_GetTrackedDeviceActivityLevel(struct w_steam_iface *_this, uint32_t unDeviceId)
{
    struct IVRSystem_IVRSystem_022_GetTrackedDeviceActivityLevel_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceId = unDeviceId,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_022_GetTrackedDeviceActivityLevel, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_022_ApplyTransform(struct w_steam_iface *_this, TrackedDevicePose_t *pOutputPose, const TrackedDevicePose_t *pTrackedDevicePose, const HmdMatrix34_t *pTransform)
{
    struct IVRSystem_IVRSystem_022_ApplyTransform_params params =
    {
        .linux_side = _this->u_iface,
        .pOutputPose = pOutputPose,
        .pTrackedDevicePose = pTrackedDevicePose,
        .pTransform = pTransform,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_022_ApplyTransform, &params );
}

uint32_t __thiscall winIVRSystem_IVRSystem_022_GetTrackedDeviceIndexForControllerRole(struct w_steam_iface *_this, uint32_t unDeviceType)
{
    struct IVRSystem_IVRSystem_022_GetTrackedDeviceIndexForControllerRole_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceType = unDeviceType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_022_GetTrackedDeviceIndexForControllerRole, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_022_GetControllerRoleForTrackedDeviceIndex(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_022_GetControllerRoleForTrackedDeviceIndex_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_022_GetControllerRoleForTrackedDeviceIndex, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_022_GetTrackedDeviceClass(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_022_GetTrackedDeviceClass_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_022_GetTrackedDeviceClass, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_022_IsTrackedDeviceConnected(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_022_IsTrackedDeviceConnected_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_022_IsTrackedDeviceConnected, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_022_GetBoolTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_022_GetBoolTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_022_GetBoolTrackedDeviceProperty, &params );
    return params._ret;
}

float __thiscall winIVRSystem_IVRSystem_022_GetFloatTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_022_GetFloatTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_022_GetFloatTrackedDeviceProperty, &params );
    return params._ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_022_GetInt32TrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_022_GetInt32TrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_022_GetInt32TrackedDeviceProperty, &params );
    return params._ret;
}

uint64_t __thiscall winIVRSystem_IVRSystem_022_GetUint64TrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_022_GetUint64TrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_022_GetUint64TrackedDeviceProperty, &params );
    return params._ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_022_GetMatrix34TrackedDeviceProperty(struct w_steam_iface *_this, HmdMatrix34_t *_ret, uint32_t unDeviceIndex, uint32_t prop, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_022_GetMatrix34TrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_022_GetMatrix34TrackedDeviceProperty, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_022_GetArrayTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, uint32_t propType, void *pBuffer, uint32_t unBufferSize, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_022_GetArrayTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .propType = propType,
        .pBuffer = pBuffer,
        .unBufferSize = unBufferSize,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_022_GetArrayTrackedDeviceProperty, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_022_GetStringTrackedDeviceProperty(struct w_steam_iface *_this, uint32_t unDeviceIndex, uint32_t prop, char *pchValue, uint32_t unBufferSize, uint32_t *pError)
{
    struct IVRSystem_IVRSystem_022_GetStringTrackedDeviceProperty_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .prop = prop,
        .pchValue = pchValue,
        .unBufferSize = unBufferSize,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_022_GetStringTrackedDeviceProperty, &params );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_022_GetPropErrorNameFromEnum(struct w_steam_iface *_this, uint32_t error)
{
    struct IVRSystem_IVRSystem_022_GetPropErrorNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .error = error,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_022_GetPropErrorNameFromEnum, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_022_PollNextEvent(struct w_steam_iface *_this, w_VREvent_t_1168 *pEvent, uint32_t uncbVREvent)
{
    w_VREvent_t_1168 w_pEvent;
    struct IVRSystem_IVRSystem_022_PollNextEvent_params params =
    {
        .linux_side = _this->u_iface,
        .pEvent = pEvent ? &w_pEvent : NULL,
        .uncbVREvent = uncbVREvent,
    };
    TRACE("%p\n", _this);
    uncbVREvent = min( uncbVREvent, sizeof(w_pEvent) );
    if (pEvent) memcpy( &w_pEvent, pEvent, uncbVREvent );
    VRCLIENT_CALL( IVRSystem_IVRSystem_022_PollNextEvent, &params );
    if (pEvent) memcpy( pEvent, &w_pEvent, uncbVREvent );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_022_PollNextEventWithPose(struct w_steam_iface *_this, uint32_t eOrigin, w_VREvent_t_1168 *pEvent, uint32_t uncbVREvent, TrackedDevicePose_t *pTrackedDevicePose)
{
    w_VREvent_t_1168 w_pEvent;
    struct IVRSystem_IVRSystem_022_PollNextEventWithPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .pEvent = pEvent ? &w_pEvent : NULL,
        .uncbVREvent = uncbVREvent,
        .pTrackedDevicePose = pTrackedDevicePose,
    };
    TRACE("%p\n", _this);
    uncbVREvent = min( uncbVREvent, sizeof(w_pEvent) );
    if (pEvent) memcpy( &w_pEvent, pEvent, uncbVREvent );
    VRCLIENT_CALL( IVRSystem_IVRSystem_022_PollNextEventWithPose, &params );
    if (pEvent) memcpy( pEvent, &w_pEvent, uncbVREvent );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_022_GetEventTypeNameFromEnum(struct w_steam_iface *_this, uint32_t eType)
{
    struct IVRSystem_IVRSystem_022_GetEventTypeNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eType = eType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_022_GetEventTypeNameFromEnum, &params );
    return params._ret;
}

w_HiddenAreaMesh_t * __thiscall winIVRSystem_IVRSystem_022_GetHiddenAreaMesh(struct w_steam_iface *_this, w_HiddenAreaMesh_t *_ret, uint32_t eEye, uint32_t type)
{
    struct IVRSystem_IVRSystem_022_GetHiddenAreaMesh_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .eEye = eEye,
        .type = type,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_022_GetHiddenAreaMesh, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_022_GetControllerState(struct w_steam_iface *_this, uint32_t unControllerDeviceIndex, w_VRControllerState001_t *pControllerState, uint32_t unControllerStateSize)
{
    w_VRControllerState001_t w_pControllerState;
    struct IVRSystem_IVRSystem_022_GetControllerState_params params =
    {
        .linux_side = _this->u_iface,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .pControllerState = pControllerState ? &w_pControllerState : NULL,
        .unControllerStateSize = unControllerStateSize,
    };
    TRACE("%p\n", _this);
    unControllerStateSize = min( unControllerStateSize, sizeof(w_pControllerState) );
    if (pControllerState) memcpy( &w_pControllerState, pControllerState, unControllerStateSize );
    VRCLIENT_CALL( IVRSystem_IVRSystem_022_GetControllerState, &params );
    if (pControllerState) memcpy( pControllerState, &w_pControllerState, unControllerStateSize );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_022_GetControllerStateWithPose(struct w_steam_iface *_this, uint32_t eOrigin, uint32_t unControllerDeviceIndex, w_VRControllerState001_t *pControllerState, uint32_t unControllerStateSize, TrackedDevicePose_t *pTrackedDevicePose)
{
    w_VRControllerState001_t w_pControllerState;
    struct IVRSystem_IVRSystem_022_GetControllerStateWithPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .pControllerState = pControllerState ? &w_pControllerState : NULL,
        .unControllerStateSize = unControllerStateSize,
        .pTrackedDevicePose = pTrackedDevicePose,
    };
    TRACE("%p\n", _this);
    unControllerStateSize = min( unControllerStateSize, sizeof(w_pControllerState) );
    if (pControllerState) memcpy( &w_pControllerState, pControllerState, unControllerStateSize );
    VRCLIENT_CALL( IVRSystem_IVRSystem_022_GetControllerStateWithPose, &params );
    if (pControllerState) memcpy( pControllerState, &w_pControllerState, unControllerStateSize );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_022_TriggerHapticPulse(struct w_steam_iface *_this, uint32_t unControllerDeviceIndex, uint32_t unAxisId, uint16_t usDurationMicroSec)
{
    struct IVRSystem_IVRSystem_022_TriggerHapticPulse_params params =
    {
        .linux_side = _this->u_iface,
        .unControllerDeviceIndex = unControllerDeviceIndex,
        .unAxisId = unAxisId,
        .usDurationMicroSec = usDurationMicroSec,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_022_TriggerHapticPulse, &params );
}

const char * __thiscall winIVRSystem_IVRSystem_022_GetButtonIdNameFromEnum(struct w_steam_iface *_this, uint32_t eButtonId)
{
    struct IVRSystem_IVRSystem_022_GetButtonIdNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eButtonId = eButtonId,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_022_GetButtonIdNameFromEnum, &params );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_022_GetControllerAxisTypeNameFromEnum(struct w_steam_iface *_this, uint32_t eAxisType)
{
    struct IVRSystem_IVRSystem_022_GetControllerAxisTypeNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eAxisType = eAxisType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_022_GetControllerAxisTypeNameFromEnum, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_022_IsInputAvailable(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_022_IsInputAvailable_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_022_IsInputAvailable, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_022_IsSteamVRDrawingControllers(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_022_IsSteamVRDrawingControllers_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_022_IsSteamVRDrawingControllers, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_022_ShouldApplicationPause(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_022_ShouldApplicationPause_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_022_ShouldApplicationPause, &params );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_022_ShouldApplicationReduceRenderingWork(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_022_ShouldApplicationReduceRenderingWork_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_022_ShouldApplicationReduceRenderingWork, &params );
    return params._ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_022_PerformFirmwareUpdate(struct w_steam_iface *_this, uint32_t unDeviceIndex)
{
    struct IVRSystem_IVRSystem_022_PerformFirmwareUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_022_PerformFirmwareUpdate, &params );
    return params._ret;
}

void __thiscall winIVRSystem_IVRSystem_022_AcknowledgeQuit_Exiting(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_022_AcknowledgeQuit_Exiting_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_022_AcknowledgeQuit_Exiting, &params );
}

uint32_t __thiscall winIVRSystem_IVRSystem_022_GetAppContainerFilePaths(struct w_steam_iface *_this, char *pchBuffer, uint32_t unBufferSize)
{
    struct IVRSystem_IVRSystem_022_GetAppContainerFilePaths_params params =
    {
        .linux_side = _this->u_iface,
        .pchBuffer = pchBuffer,
        .unBufferSize = unBufferSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_022_GetAppContainerFilePaths, &params );
    return params._ret;
}

const char * __thiscall winIVRSystem_IVRSystem_022_GetRuntimeVersion(struct w_steam_iface *_this)
{
    struct IVRSystem_IVRSystem_022_GetRuntimeVersion_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_022_GetRuntimeVersion, &params );
    return params._ret;
}

extern vtable_ptr winIVRSystem_IVRSystem_022_vtable;

DEFINE_RTTI_DATA0(winIVRSystem_IVRSystem_022, 0, ".?AVIVRSystem@@")

__ASM_BLOCK_BEGIN(winIVRSystem_IVRSystem_022_vtables)
    __ASM_VTABLE(winIVRSystem_IVRSystem_022,
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_022_GetRecommendedRenderTargetSize)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_022_GetProjectionMatrix)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_022_GetProjectionRaw)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_022_ComputeDistortion)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_022_GetEyeToHeadTransform)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_022_GetTimeSinceLastVsync)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_022_GetD3D9AdapterIndex)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_022_GetDXGIOutputInfo)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_022_GetOutputDevice)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_022_IsDisplayOnDesktop)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_022_SetDisplayVisibility)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_022_GetDeviceToAbsoluteTrackingPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_022_GetSeatedZeroPoseToStandingAbsoluteTrackingPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_022_GetRawZeroPoseToStandingAbsoluteTrackingPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_022_GetSortedTrackedDeviceIndicesOfClass)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_022_GetTrackedDeviceActivityLevel)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_022_ApplyTransform)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_022_GetTrackedDeviceIndexForControllerRole)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_022_GetControllerRoleForTrackedDeviceIndex)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_022_GetTrackedDeviceClass)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_022_IsTrackedDeviceConnected)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_022_GetBoolTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_022_GetFloatTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_022_GetInt32TrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_022_GetUint64TrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_022_GetMatrix34TrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_022_GetArrayTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_022_GetStringTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_022_GetPropErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_022_PollNextEvent)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_022_PollNextEventWithPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_022_GetEventTypeNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_022_GetHiddenAreaMesh)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_022_GetControllerState)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_022_GetControllerStateWithPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_022_TriggerHapticPulse)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_022_GetButtonIdNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_022_GetControllerAxisTypeNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_022_IsInputAvailable)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_022_IsSteamVRDrawingControllers)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_022_ShouldApplicationPause)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_022_ShouldApplicationReduceRenderingWork)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_022_PerformFirmwareUpdate)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_022_AcknowledgeQuit_Exiting)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_022_GetAppContainerFilePaths)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_022_GetRuntimeVersion)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRSystem_IVRSystem_022(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRSystem_IVRSystem_022_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRSystem_IVRSystem_022(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRSystem_IVRSystem_022_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(46);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 46 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRSystem_IVRSystem_022_GetRecommendedRenderTargetSize, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRSystem_IVRSystem_022_GetProjectionMatrix, 4, TRUE, TRUE);
    init_thunk(&thunks[2], r, winIVRSystem_IVRSystem_022_GetProjectionRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRSystem_IVRSystem_022_ComputeDistortion, 4, TRUE, FALSE);
    init_thunk(&thunks[4], r, winIVRSystem_IVRSystem_022_GetEyeToHeadTransform, 2, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRSystem_IVRSystem_022_GetTimeSinceLastVsync, 2, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRSystem_IVRSystem_022_GetD3D9AdapterIndex, 0, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRSystem_IVRSystem_022_GetDXGIOutputInfo, 1, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRSystem_IVRSystem_022_GetOutputDevice, 3, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRSystem_IVRSystem_022_IsDisplayOnDesktop, 0, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRSystem_IVRSystem_022_SetDisplayVisibility, 1, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRSystem_IVRSystem_022_GetDeviceToAbsoluteTrackingPose, 4, TRUE, FALSE);
    init_thunk(&thunks[12], r, winIVRSystem_IVRSystem_022_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, 1, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVRSystem_IVRSystem_022_GetRawZeroPoseToStandingAbsoluteTrackingPose, 1, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRSystem_IVRSystem_022_GetSortedTrackedDeviceIndicesOfClass, 4, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVRSystem_IVRSystem_022_GetTrackedDeviceActivityLevel, 1, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRSystem_IVRSystem_022_ApplyTransform, 3, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRSystem_IVRSystem_022_GetTrackedDeviceIndexForControllerRole, 1, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRSystem_IVRSystem_022_GetControllerRoleForTrackedDeviceIndex, 1, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVRSystem_IVRSystem_022_GetTrackedDeviceClass, 1, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVRSystem_IVRSystem_022_IsTrackedDeviceConnected, 1, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVRSystem_IVRSystem_022_GetBoolTrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVRSystem_IVRSystem_022_GetFloatTrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVRSystem_IVRSystem_022_GetInt32TrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVRSystem_IVRSystem_022_GetUint64TrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVRSystem_IVRSystem_022_GetMatrix34TrackedDeviceProperty, 4, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVRSystem_IVRSystem_022_GetArrayTrackedDeviceProperty, 6, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVRSystem_IVRSystem_022_GetStringTrackedDeviceProperty, 5, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVRSystem_IVRSystem_022_GetPropErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVRSystem_IVRSystem_022_PollNextEvent, 2, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVRSystem_IVRSystem_022_PollNextEventWithPose, 4, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVRSystem_IVRSystem_022_GetEventTypeNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVRSystem_IVRSystem_022_GetHiddenAreaMesh, 3, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVRSystem_IVRSystem_022_GetControllerState, 3, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVRSystem_IVRSystem_022_GetControllerStateWithPose, 5, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVRSystem_IVRSystem_022_TriggerHapticPulse, 3, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVRSystem_IVRSystem_022_GetButtonIdNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVRSystem_IVRSystem_022_GetControllerAxisTypeNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVRSystem_IVRSystem_022_IsInputAvailable, 0, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVRSystem_IVRSystem_022_IsSteamVRDrawingControllers, 0, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVRSystem_IVRSystem_022_ShouldApplicationPause, 0, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVRSystem_IVRSystem_022_ShouldApplicationReduceRenderingWork, 0, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVRSystem_IVRSystem_022_PerformFirmwareUpdate, 1, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVRSystem_IVRSystem_022_AcknowledgeQuit_Exiting, 0, FALSE, FALSE);
    init_thunk(&thunks[44], r, winIVRSystem_IVRSystem_022_GetAppContainerFilePaths, 2, FALSE, FALSE);
    init_thunk(&thunks[45], r, winIVRSystem_IVRSystem_022_GetRuntimeVersion, 0, FALSE, FALSE);
    for (i = 0; i < 46; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRSystem_IVRSystem_022_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

void init_winIVRSystem_rtti( char *base )
{
#ifdef __x86_64__
    init_winIVRSystem_IVRSystem_003_rtti( base );
    init_winIVRSystem_IVRSystem_004_rtti( base );
    init_winIVRSystem_IVRSystem_005_rtti( base );
    init_winIVRSystem_IVRSystem_006_rtti( base );
    init_winIVRSystem_IVRSystem_009_rtti( base );
    init_winIVRSystem_IVRSystem_010_rtti( base );
    init_winIVRSystem_IVRSystem_011_rtti( base );
    init_winIVRSystem_IVRSystem_012_rtti( base );
    init_winIVRSystem_IVRSystem_014_rtti( base );
    init_winIVRSystem_IVRSystem_015_rtti( base );
    init_winIVRSystem_IVRSystem_016_rtti( base );
    init_winIVRSystem_IVRSystem_017_rtti( base );
    init_winIVRSystem_IVRSystem_019_rtti( base );
    init_winIVRSystem_IVRSystem_020_rtti( base );
    init_winIVRSystem_IVRSystem_021_rtti( base );
    init_winIVRSystem_IVRSystem_022_rtti( base );
#endif /* __x86_64__ */
}
