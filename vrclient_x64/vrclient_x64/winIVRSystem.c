/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stdint.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "vrclient_defs.h"

#include "vrclient_private.h"

#include "struct_converters.h"

#include "flatapi.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

#include "cppIVRSystem_IVRSystem_003.h"

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
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_003_GetWindowBounds(_this->u_iface, pnX, pnY, pnWidth, pnHeight);
}

void __thiscall winIVRSystem_IVRSystem_003_GetRecommendedRenderTargetSize(struct w_steam_iface *_this, uint32_t *pnWidth, uint32_t *pnHeight)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_003_GetRecommendedRenderTargetSize(_this->u_iface, pnWidth, pnHeight);
}

void __thiscall winIVRSystem_IVRSystem_003_GetEyeOutputViewport(struct w_steam_iface *_this, Hmd_Eye eEye, uint32_t *pnX, uint32_t *pnY, uint32_t *pnWidth, uint32_t *pnHeight)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_003_GetEyeOutputViewport(_this->u_iface, eEye, pnX, pnY, pnWidth, pnHeight);
}

HmdMatrix44_t * __thiscall winIVRSystem_IVRSystem_003_GetProjectionMatrix(struct w_steam_iface *_this, HmdMatrix44_t *_ret, Hmd_Eye eEye, float fNearZ, float fFarZ, GraphicsAPIConvention eProjType)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_003_GetProjectionMatrix(_this->u_iface, eEye, fNearZ, fFarZ, eProjType);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_003_GetProjectionRaw(struct w_steam_iface *_this, Hmd_Eye eEye, float *pfLeft, float *pfRight, float *pfTop, float *pfBottom)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_003_GetProjectionRaw(_this->u_iface, eEye, pfLeft, pfRight, pfTop, pfBottom);
}

DistortionCoordinates_t * __thiscall winIVRSystem_IVRSystem_003_ComputeDistortion(struct w_steam_iface *_this, DistortionCoordinates_t *_ret, Hmd_Eye eEye, float fU, float fV)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_003_ComputeDistortion(_this->u_iface, eEye, fU, fV);
    return _ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_003_GetEyeToHeadTransform(struct w_steam_iface *_this, HmdMatrix34_t *_ret, Hmd_Eye eEye)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_003_GetEyeToHeadTransform(_this->u_iface, eEye);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_003_GetTimeSinceLastVsync(struct w_steam_iface *_this, float *pfSecondsSinceLastVsync, uint64_t *pulFrameCounter)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_003_GetTimeSinceLastVsync(_this->u_iface, pfSecondsSinceLastVsync, pulFrameCounter);
    return _ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_003_GetD3D9AdapterIndex(struct w_steam_iface *_this)
{
    int32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_003_GetD3D9AdapterIndex(_this->u_iface);
    return _ret;
}

extern void __thiscall winIVRSystem_IVRSystem_003_GetDXGIOutputInfo(struct w_steam_iface *_this, int32_t *pnAdapterIndex, int32_t *pnAdapterOutputIndex);

bool __thiscall winIVRSystem_IVRSystem_003_AttachToWindow(struct w_steam_iface *_this, void *hWnd)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_003_AttachToWindow(_this->u_iface, hWnd);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_003_GetDeviceToAbsoluteTrackingPose(struct w_steam_iface *_this, TrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t *pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_003_GetDeviceToAbsoluteTrackingPose(_this->u_iface, eOrigin, fPredictedSecondsToPhotonsFromNow, pTrackedDevicePoseArray, unTrackedDevicePoseArrayCount);
}

void __thiscall winIVRSystem_IVRSystem_003_ResetSeatedZeroPose(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_003_ResetSeatedZeroPose(_this->u_iface);
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_003_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_003_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(_this->u_iface);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_003_LoadRenderModel(struct w_steam_iface *_this, const char *pchRenderModelName, winRenderModel_t_091 *pRenderModel)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_003_LoadRenderModel(_this->u_iface, pchRenderModelName, pRenderModel);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_003_FreeRenderModel(struct w_steam_iface *_this, winRenderModel_t_091 *pRenderModel)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_003_FreeRenderModel(_this->u_iface, pRenderModel);
}

TrackedDeviceClass __thiscall winIVRSystem_IVRSystem_003_GetTrackedDeviceClass(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    TrackedDeviceClass _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_003_GetTrackedDeviceClass(_this->u_iface, unDeviceIndex);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_003_IsTrackedDeviceConnected(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_003_IsTrackedDeviceConnected(_this->u_iface, unDeviceIndex);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_003_GetBoolTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError *pError)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_003_GetBoolTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

float __thiscall winIVRSystem_IVRSystem_003_GetFloatTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError *pError)
{
    float _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_003_GetFloatTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_003_GetInt32TrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError *pError)
{
    int32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_003_GetInt32TrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

uint64_t __thiscall winIVRSystem_IVRSystem_003_GetUint64TrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError *pError)
{
    uint64_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_003_GetUint64TrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_003_GetMatrix34TrackedDeviceProperty(struct w_steam_iface *_this, HmdMatrix34_t *_ret, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError *pError)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_003_GetMatrix34TrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_003_GetStringTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, char *pchValue, uint32_t unBufferSize, TrackedPropertyError *pError)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_003_GetStringTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pchValue, unBufferSize, pError);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_003_GetPropErrorNameFromEnum(struct w_steam_iface *_this, TrackedPropertyError error)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_003_GetPropErrorNameFromEnum(_this->u_iface, error);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_003_PollNextEvent(struct w_steam_iface *_this, VREvent_t *pEvent)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_003_PollNextEvent(_this->u_iface, pEvent);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_003_PollNextEventWithPose(struct w_steam_iface *_this, TrackingUniverseOrigin eOrigin, VREvent_t *pEvent, TrackedDevicePose_t *pTrackedDevicePose)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_003_PollNextEventWithPose(_this->u_iface, eOrigin, pEvent, pTrackedDevicePose);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_003_GetEventTypeNameFromEnum(struct w_steam_iface *_this, EVREventType eType)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_003_GetEventTypeNameFromEnum(_this->u_iface, eType);
    return _ret;
}

HiddenAreaMesh_t * __thiscall winIVRSystem_IVRSystem_003_GetHiddenAreaMesh(struct w_steam_iface *_this, HiddenAreaMesh_t *_ret, Hmd_Eye eEye)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_003_GetHiddenAreaMesh(_this->u_iface, eEye);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_003_GetControllerState(struct w_steam_iface *_this, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_091 *pControllerState)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_003_GetControllerState(_this->u_iface, unControllerDeviceIndex, pControllerState);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_003_GetControllerStateWithPose(struct w_steam_iface *_this, TrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_091 *pControllerState, TrackedDevicePose_t *pTrackedDevicePose)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_003_GetControllerStateWithPose(_this->u_iface, eOrigin, unControllerDeviceIndex, pControllerState, pTrackedDevicePose);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_003_TriggerHapticPulse(struct w_steam_iface *_this, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_003_TriggerHapticPulse(_this->u_iface, unControllerDeviceIndex, unAxisId, usDurationMicroSec);
}

const char * __thiscall winIVRSystem_IVRSystem_003_GetButtonIdNameFromEnum(struct w_steam_iface *_this, EVRButtonId eButtonId)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_003_GetButtonIdNameFromEnum(_this->u_iface, eButtonId);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_003_GetControllerAxisTypeNameFromEnum(struct w_steam_iface *_this, EVRControllerAxisType eAxisType)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_003_GetControllerAxisTypeNameFromEnum(_this->u_iface, eAxisType);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_003_HandleControllerOverlayInteractionAsMouse(struct w_steam_iface *_this, const Compositor_OverlaySettings *overlaySettings, HmdVector2_t vecWindowClientPositionOnScreen, HmdVector2_t vecWindowClientSize, TrackedDeviceIndex_t unControllerDeviceIndex, EVRControllerEventOutputType eOutputType)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_003_HandleControllerOverlayInteractionAsMouse(_this->u_iface, overlaySettings, vecWindowClientPositionOnScreen, vecWindowClientSize, unControllerDeviceIndex, eOutputType);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_003_CaptureInputFocus(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_003_CaptureInputFocus(_this->u_iface);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_003_ReleaseInputFocus(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_003_ReleaseInputFocus(_this->u_iface);
}

bool __thiscall winIVRSystem_IVRSystem_003_IsInputFocusCapturedByAnotherProcess(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_003_IsInputFocusCapturedByAnotherProcess(_this->u_iface);
    return _ret;
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

#include "cppIVRSystem_IVRSystem_004.h"

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
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_004_GetWindowBounds(_this->u_iface, pnX, pnY, pnWidth, pnHeight);
}

void __thiscall winIVRSystem_IVRSystem_004_GetRecommendedRenderTargetSize(struct w_steam_iface *_this, uint32_t *pnWidth, uint32_t *pnHeight)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_004_GetRecommendedRenderTargetSize(_this->u_iface, pnWidth, pnHeight);
}

void __thiscall winIVRSystem_IVRSystem_004_GetEyeOutputViewport(struct w_steam_iface *_this, Hmd_Eye eEye, uint32_t *pnX, uint32_t *pnY, uint32_t *pnWidth, uint32_t *pnHeight)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_004_GetEyeOutputViewport(_this->u_iface, eEye, pnX, pnY, pnWidth, pnHeight);
}

HmdMatrix44_t * __thiscall winIVRSystem_IVRSystem_004_GetProjectionMatrix(struct w_steam_iface *_this, HmdMatrix44_t *_ret, Hmd_Eye eEye, float fNearZ, float fFarZ, GraphicsAPIConvention eProjType)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_004_GetProjectionMatrix(_this->u_iface, eEye, fNearZ, fFarZ, eProjType);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_004_GetProjectionRaw(struct w_steam_iface *_this, Hmd_Eye eEye, float *pfLeft, float *pfRight, float *pfTop, float *pfBottom)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_004_GetProjectionRaw(_this->u_iface, eEye, pfLeft, pfRight, pfTop, pfBottom);
}

DistortionCoordinates_t * __thiscall winIVRSystem_IVRSystem_004_ComputeDistortion(struct w_steam_iface *_this, DistortionCoordinates_t *_ret, Hmd_Eye eEye, float fU, float fV)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_004_ComputeDistortion(_this->u_iface, eEye, fU, fV);
    return _ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_004_GetEyeToHeadTransform(struct w_steam_iface *_this, HmdMatrix34_t *_ret, Hmd_Eye eEye)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_004_GetEyeToHeadTransform(_this->u_iface, eEye);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_004_GetTimeSinceLastVsync(struct w_steam_iface *_this, float *pfSecondsSinceLastVsync, uint64_t *pulFrameCounter)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_004_GetTimeSinceLastVsync(_this->u_iface, pfSecondsSinceLastVsync, pulFrameCounter);
    return _ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_004_GetD3D9AdapterIndex(struct w_steam_iface *_this)
{
    int32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_004_GetD3D9AdapterIndex(_this->u_iface);
    return _ret;
}

extern void __thiscall winIVRSystem_IVRSystem_004_GetDXGIOutputInfo(struct w_steam_iface *_this, int32_t *pnAdapterIndex, int32_t *pnAdapterOutputIndex);

bool __thiscall winIVRSystem_IVRSystem_004_AttachToWindow(struct w_steam_iface *_this, void *hWnd)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_004_AttachToWindow(_this->u_iface, hWnd);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_004_GetDeviceToAbsoluteTrackingPose(struct w_steam_iface *_this, TrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t *pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_004_GetDeviceToAbsoluteTrackingPose(_this->u_iface, eOrigin, fPredictedSecondsToPhotonsFromNow, pTrackedDevicePoseArray, unTrackedDevicePoseArrayCount);
}

void __thiscall winIVRSystem_IVRSystem_004_ResetSeatedZeroPose(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_004_ResetSeatedZeroPose(_this->u_iface);
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_004_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_004_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(_this->u_iface);
    return _ret;
}

TrackedDeviceClass __thiscall winIVRSystem_IVRSystem_004_GetTrackedDeviceClass(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    TrackedDeviceClass _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_004_GetTrackedDeviceClass(_this->u_iface, unDeviceIndex);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_004_IsTrackedDeviceConnected(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_004_IsTrackedDeviceConnected(_this->u_iface, unDeviceIndex);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_004_GetBoolTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError *pError)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_004_GetBoolTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

float __thiscall winIVRSystem_IVRSystem_004_GetFloatTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError *pError)
{
    float _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_004_GetFloatTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_004_GetInt32TrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError *pError)
{
    int32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_004_GetInt32TrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

uint64_t __thiscall winIVRSystem_IVRSystem_004_GetUint64TrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError *pError)
{
    uint64_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_004_GetUint64TrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_004_GetMatrix34TrackedDeviceProperty(struct w_steam_iface *_this, HmdMatrix34_t *_ret, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError *pError)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_004_GetMatrix34TrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_004_GetStringTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, char *pchValue, uint32_t unBufferSize, TrackedPropertyError *pError)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_004_GetStringTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pchValue, unBufferSize, pError);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_004_GetPropErrorNameFromEnum(struct w_steam_iface *_this, TrackedPropertyError error)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_004_GetPropErrorNameFromEnum(_this->u_iface, error);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_004_PollNextEvent(struct w_steam_iface *_this, VREvent_t *pEvent)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_004_PollNextEvent(_this->u_iface, pEvent);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_004_PollNextEventWithPose(struct w_steam_iface *_this, TrackingUniverseOrigin eOrigin, VREvent_t *pEvent, TrackedDevicePose_t *pTrackedDevicePose)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_004_PollNextEventWithPose(_this->u_iface, eOrigin, pEvent, pTrackedDevicePose);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_004_GetEventTypeNameFromEnum(struct w_steam_iface *_this, EVREventType eType)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_004_GetEventTypeNameFromEnum(_this->u_iface, eType);
    return _ret;
}

HiddenAreaMesh_t * __thiscall winIVRSystem_IVRSystem_004_GetHiddenAreaMesh(struct w_steam_iface *_this, HiddenAreaMesh_t *_ret, Hmd_Eye eEye)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_004_GetHiddenAreaMesh(_this->u_iface, eEye);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_004_GetControllerState(struct w_steam_iface *_this, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_092 *pControllerState)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_004_GetControllerState(_this->u_iface, unControllerDeviceIndex, pControllerState);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_004_GetControllerStateWithPose(struct w_steam_iface *_this, TrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_092 *pControllerState, TrackedDevicePose_t *pTrackedDevicePose)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_004_GetControllerStateWithPose(_this->u_iface, eOrigin, unControllerDeviceIndex, pControllerState, pTrackedDevicePose);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_004_TriggerHapticPulse(struct w_steam_iface *_this, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_004_TriggerHapticPulse(_this->u_iface, unControllerDeviceIndex, unAxisId, usDurationMicroSec);
}

const char * __thiscall winIVRSystem_IVRSystem_004_GetButtonIdNameFromEnum(struct w_steam_iface *_this, EVRButtonId eButtonId)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_004_GetButtonIdNameFromEnum(_this->u_iface, eButtonId);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_004_GetControllerAxisTypeNameFromEnum(struct w_steam_iface *_this, EVRControllerAxisType eAxisType)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_004_GetControllerAxisTypeNameFromEnum(_this->u_iface, eAxisType);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_004_CaptureInputFocus(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_004_CaptureInputFocus(_this->u_iface);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_004_ReleaseInputFocus(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_004_ReleaseInputFocus(_this->u_iface);
}

bool __thiscall winIVRSystem_IVRSystem_004_IsInputFocusCapturedByAnotherProcess(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_004_IsInputFocusCapturedByAnotherProcess(_this->u_iface);
    return _ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_004_DriverDebugRequest(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, const char *pchRequest, char *pchResponseBuffer, uint32_t unResponseBufferSize)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_004_DriverDebugRequest(_this->u_iface, unDeviceIndex, pchRequest, pchResponseBuffer, unResponseBufferSize);
    return _ret;
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

#include "cppIVRSystem_IVRSystem_005.h"

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
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_005_GetWindowBounds(_this->u_iface, pnX, pnY, pnWidth, pnHeight);
}

void __thiscall winIVRSystem_IVRSystem_005_GetRecommendedRenderTargetSize(struct w_steam_iface *_this, uint32_t *pnWidth, uint32_t *pnHeight)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_005_GetRecommendedRenderTargetSize(_this->u_iface, pnWidth, pnHeight);
}

void __thiscall winIVRSystem_IVRSystem_005_GetEyeOutputViewport(struct w_steam_iface *_this, Hmd_Eye eEye, uint32_t *pnX, uint32_t *pnY, uint32_t *pnWidth, uint32_t *pnHeight)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_005_GetEyeOutputViewport(_this->u_iface, eEye, pnX, pnY, pnWidth, pnHeight);
}

HmdMatrix44_t * __thiscall winIVRSystem_IVRSystem_005_GetProjectionMatrix(struct w_steam_iface *_this, HmdMatrix44_t *_ret, Hmd_Eye eEye, float fNearZ, float fFarZ, GraphicsAPIConvention eProjType)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_005_GetProjectionMatrix(_this->u_iface, eEye, fNearZ, fFarZ, eProjType);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_005_GetProjectionRaw(struct w_steam_iface *_this, Hmd_Eye eEye, float *pfLeft, float *pfRight, float *pfTop, float *pfBottom)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_005_GetProjectionRaw(_this->u_iface, eEye, pfLeft, pfRight, pfTop, pfBottom);
}

DistortionCoordinates_t * __thiscall winIVRSystem_IVRSystem_005_ComputeDistortion(struct w_steam_iface *_this, DistortionCoordinates_t *_ret, Hmd_Eye eEye, float fU, float fV)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_005_ComputeDistortion(_this->u_iface, eEye, fU, fV);
    return _ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_005_GetEyeToHeadTransform(struct w_steam_iface *_this, HmdMatrix34_t *_ret, Hmd_Eye eEye)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_005_GetEyeToHeadTransform(_this->u_iface, eEye);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_005_GetTimeSinceLastVsync(struct w_steam_iface *_this, float *pfSecondsSinceLastVsync, uint64_t *pulFrameCounter)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_005_GetTimeSinceLastVsync(_this->u_iface, pfSecondsSinceLastVsync, pulFrameCounter);
    return _ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_005_GetD3D9AdapterIndex(struct w_steam_iface *_this)
{
    int32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_005_GetD3D9AdapterIndex(_this->u_iface);
    return _ret;
}

extern void __thiscall winIVRSystem_IVRSystem_005_GetDXGIOutputInfo(struct w_steam_iface *_this, int32_t *pnAdapterIndex, int32_t *pnAdapterOutputIndex);

bool __thiscall winIVRSystem_IVRSystem_005_AttachToWindow(struct w_steam_iface *_this, void *hWnd)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_005_AttachToWindow(_this->u_iface, hWnd);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_005_GetDeviceToAbsoluteTrackingPose(struct w_steam_iface *_this, TrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t *pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_005_GetDeviceToAbsoluteTrackingPose(_this->u_iface, eOrigin, fPredictedSecondsToPhotonsFromNow, pTrackedDevicePoseArray, unTrackedDevicePoseArrayCount);
}

void __thiscall winIVRSystem_IVRSystem_005_ResetSeatedZeroPose(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_005_ResetSeatedZeroPose(_this->u_iface);
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_005_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_005_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(_this->u_iface);
    return _ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_005_GetSortedTrackedDeviceIndicesOfClass(struct w_steam_iface *_this, TrackedDeviceClass eTrackedDeviceClass, TrackedDeviceIndex_t *punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_005_GetSortedTrackedDeviceIndicesOfClass(_this->u_iface, eTrackedDeviceClass, punTrackedDeviceIndexArray, unTrackedDeviceIndexArrayCount, unRelativeToTrackedDeviceIndex);
    return _ret;
}

TrackedDeviceClass __thiscall winIVRSystem_IVRSystem_005_GetTrackedDeviceClass(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    TrackedDeviceClass _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_005_GetTrackedDeviceClass(_this->u_iface, unDeviceIndex);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_005_IsTrackedDeviceConnected(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_005_IsTrackedDeviceConnected(_this->u_iface, unDeviceIndex);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_005_GetBoolTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError *pError)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_005_GetBoolTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

float __thiscall winIVRSystem_IVRSystem_005_GetFloatTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError *pError)
{
    float _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_005_GetFloatTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_005_GetInt32TrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError *pError)
{
    int32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_005_GetInt32TrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

uint64_t __thiscall winIVRSystem_IVRSystem_005_GetUint64TrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError *pError)
{
    uint64_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_005_GetUint64TrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_005_GetMatrix34TrackedDeviceProperty(struct w_steam_iface *_this, HmdMatrix34_t *_ret, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError *pError)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_005_GetMatrix34TrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_005_GetStringTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, char *pchValue, uint32_t unBufferSize, TrackedPropertyError *pError)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_005_GetStringTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pchValue, unBufferSize, pError);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_005_GetPropErrorNameFromEnum(struct w_steam_iface *_this, TrackedPropertyError error)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_005_GetPropErrorNameFromEnum(_this->u_iface, error);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_005_PollNextEvent(struct w_steam_iface *_this, VREvent_t *pEvent)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_005_PollNextEvent(_this->u_iface, pEvent);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_005_PollNextEventWithPose(struct w_steam_iface *_this, TrackingUniverseOrigin eOrigin, VREvent_t *pEvent, TrackedDevicePose_t *pTrackedDevicePose)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_005_PollNextEventWithPose(_this->u_iface, eOrigin, pEvent, pTrackedDevicePose);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_005_GetEventTypeNameFromEnum(struct w_steam_iface *_this, EVREventType eType)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_005_GetEventTypeNameFromEnum(_this->u_iface, eType);
    return _ret;
}

HiddenAreaMesh_t * __thiscall winIVRSystem_IVRSystem_005_GetHiddenAreaMesh(struct w_steam_iface *_this, HiddenAreaMesh_t *_ret, Hmd_Eye eEye)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_005_GetHiddenAreaMesh(_this->u_iface, eEye);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_005_GetControllerState(struct w_steam_iface *_this, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_098 *pControllerState)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_005_GetControllerState(_this->u_iface, unControllerDeviceIndex, pControllerState);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_005_GetControllerStateWithPose(struct w_steam_iface *_this, TrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_098 *pControllerState, TrackedDevicePose_t *pTrackedDevicePose)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_005_GetControllerStateWithPose(_this->u_iface, eOrigin, unControllerDeviceIndex, pControllerState, pTrackedDevicePose);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_005_TriggerHapticPulse(struct w_steam_iface *_this, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_005_TriggerHapticPulse(_this->u_iface, unControllerDeviceIndex, unAxisId, usDurationMicroSec);
}

const char * __thiscall winIVRSystem_IVRSystem_005_GetButtonIdNameFromEnum(struct w_steam_iface *_this, EVRButtonId eButtonId)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_005_GetButtonIdNameFromEnum(_this->u_iface, eButtonId);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_005_GetControllerAxisTypeNameFromEnum(struct w_steam_iface *_this, EVRControllerAxisType eAxisType)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_005_GetControllerAxisTypeNameFromEnum(_this->u_iface, eAxisType);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_005_CaptureInputFocus(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_005_CaptureInputFocus(_this->u_iface);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_005_ReleaseInputFocus(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_005_ReleaseInputFocus(_this->u_iface);
}

bool __thiscall winIVRSystem_IVRSystem_005_IsInputFocusCapturedByAnotherProcess(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_005_IsInputFocusCapturedByAnotherProcess(_this->u_iface);
    return _ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_005_DriverDebugRequest(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, const char *pchRequest, char *pchResponseBuffer, uint32_t unResponseBufferSize)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_005_DriverDebugRequest(_this->u_iface, unDeviceIndex, pchRequest, pchResponseBuffer, unResponseBufferSize);
    return _ret;
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

#include "cppIVRSystem_IVRSystem_006.h"

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
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_006_GetWindowBounds(_this->u_iface, pnX, pnY, pnWidth, pnHeight);
}

void __thiscall winIVRSystem_IVRSystem_006_GetRecommendedRenderTargetSize(struct w_steam_iface *_this, uint32_t *pnWidth, uint32_t *pnHeight)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_006_GetRecommendedRenderTargetSize(_this->u_iface, pnWidth, pnHeight);
}

void __thiscall winIVRSystem_IVRSystem_006_GetEyeOutputViewport(struct w_steam_iface *_this, Hmd_Eye eEye, uint32_t *pnX, uint32_t *pnY, uint32_t *pnWidth, uint32_t *pnHeight)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_006_GetEyeOutputViewport(_this->u_iface, eEye, pnX, pnY, pnWidth, pnHeight);
}

HmdMatrix44_t * __thiscall winIVRSystem_IVRSystem_006_GetProjectionMatrix(struct w_steam_iface *_this, HmdMatrix44_t *_ret, Hmd_Eye eEye, float fNearZ, float fFarZ, GraphicsAPIConvention eProjType)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_006_GetProjectionMatrix(_this->u_iface, eEye, fNearZ, fFarZ, eProjType);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_006_GetProjectionRaw(struct w_steam_iface *_this, Hmd_Eye eEye, float *pfLeft, float *pfRight, float *pfTop, float *pfBottom)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_006_GetProjectionRaw(_this->u_iface, eEye, pfLeft, pfRight, pfTop, pfBottom);
}

DistortionCoordinates_t * __thiscall winIVRSystem_IVRSystem_006_ComputeDistortion(struct w_steam_iface *_this, DistortionCoordinates_t *_ret, Hmd_Eye eEye, float fU, float fV)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_006_ComputeDistortion(_this->u_iface, eEye, fU, fV);
    return _ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_006_GetEyeToHeadTransform(struct w_steam_iface *_this, HmdMatrix34_t *_ret, Hmd_Eye eEye)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_006_GetEyeToHeadTransform(_this->u_iface, eEye);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_006_GetTimeSinceLastVsync(struct w_steam_iface *_this, float *pfSecondsSinceLastVsync, uint64_t *pulFrameCounter)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_006_GetTimeSinceLastVsync(_this->u_iface, pfSecondsSinceLastVsync, pulFrameCounter);
    return _ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_006_GetD3D9AdapterIndex(struct w_steam_iface *_this)
{
    int32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_006_GetD3D9AdapterIndex(_this->u_iface);
    return _ret;
}

extern void __thiscall winIVRSystem_IVRSystem_006_GetDXGIOutputInfo(struct w_steam_iface *_this, int32_t *pnAdapterIndex, int32_t *pnAdapterOutputIndex);

bool __thiscall winIVRSystem_IVRSystem_006_AttachToWindow(struct w_steam_iface *_this, void *hWnd)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_006_AttachToWindow(_this->u_iface, hWnd);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_006_GetDeviceToAbsoluteTrackingPose(struct w_steam_iface *_this, TrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t *pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_006_GetDeviceToAbsoluteTrackingPose(_this->u_iface, eOrigin, fPredictedSecondsToPhotonsFromNow, pTrackedDevicePoseArray, unTrackedDevicePoseArrayCount);
}

void __thiscall winIVRSystem_IVRSystem_006_ResetSeatedZeroPose(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_006_ResetSeatedZeroPose(_this->u_iface);
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_006_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_006_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(_this->u_iface);
    return _ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_006_GetRawZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_006_GetRawZeroPoseToStandingAbsoluteTrackingPose(_this->u_iface);
    return _ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_006_GetSortedTrackedDeviceIndicesOfClass(struct w_steam_iface *_this, TrackedDeviceClass eTrackedDeviceClass, TrackedDeviceIndex_t *punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_006_GetSortedTrackedDeviceIndicesOfClass(_this->u_iface, eTrackedDeviceClass, punTrackedDeviceIndexArray, unTrackedDeviceIndexArrayCount, unRelativeToTrackedDeviceIndex);
    return _ret;
}

EDeviceActivityLevel __thiscall winIVRSystem_IVRSystem_006_GetTrackedDeviceActivityLevel(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceId)
{
    EDeviceActivityLevel _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_006_GetTrackedDeviceActivityLevel(_this->u_iface, unDeviceId);
    return _ret;
}

TrackedDeviceClass __thiscall winIVRSystem_IVRSystem_006_GetTrackedDeviceClass(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    TrackedDeviceClass _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_006_GetTrackedDeviceClass(_this->u_iface, unDeviceIndex);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_006_IsTrackedDeviceConnected(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_006_IsTrackedDeviceConnected(_this->u_iface, unDeviceIndex);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_006_GetBoolTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError *pError)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_006_GetBoolTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

float __thiscall winIVRSystem_IVRSystem_006_GetFloatTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError *pError)
{
    float _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_006_GetFloatTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_006_GetInt32TrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError *pError)
{
    int32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_006_GetInt32TrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

uint64_t __thiscall winIVRSystem_IVRSystem_006_GetUint64TrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError *pError)
{
    uint64_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_006_GetUint64TrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_006_GetMatrix34TrackedDeviceProperty(struct w_steam_iface *_this, HmdMatrix34_t *_ret, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError *pError)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_006_GetMatrix34TrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_006_GetStringTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, char *pchValue, uint32_t unBufferSize, TrackedPropertyError *pError)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_006_GetStringTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pchValue, unBufferSize, pError);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_006_GetPropErrorNameFromEnum(struct w_steam_iface *_this, TrackedPropertyError error)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_006_GetPropErrorNameFromEnum(_this->u_iface, error);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_006_PollNextEvent(struct w_steam_iface *_this, VREvent_t *pEvent)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_006_PollNextEvent(_this->u_iface, pEvent);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_006_PollNextEventWithPose(struct w_steam_iface *_this, TrackingUniverseOrigin eOrigin, VREvent_t *pEvent, TrackedDevicePose_t *pTrackedDevicePose)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_006_PollNextEventWithPose(_this->u_iface, eOrigin, pEvent, pTrackedDevicePose);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_006_GetEventTypeNameFromEnum(struct w_steam_iface *_this, EVREventType eType)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_006_GetEventTypeNameFromEnum(_this->u_iface, eType);
    return _ret;
}

HiddenAreaMesh_t * __thiscall winIVRSystem_IVRSystem_006_GetHiddenAreaMesh(struct w_steam_iface *_this, HiddenAreaMesh_t *_ret, Hmd_Eye eEye)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_006_GetHiddenAreaMesh(_this->u_iface, eEye);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_006_GetControllerState(struct w_steam_iface *_this, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_0910 *pControllerState)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_006_GetControllerState(_this->u_iface, unControllerDeviceIndex, pControllerState);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_006_GetControllerStateWithPose(struct w_steam_iface *_this, TrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_0910 *pControllerState, TrackedDevicePose_t *pTrackedDevicePose)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_006_GetControllerStateWithPose(_this->u_iface, eOrigin, unControllerDeviceIndex, pControllerState, pTrackedDevicePose);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_006_TriggerHapticPulse(struct w_steam_iface *_this, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_006_TriggerHapticPulse(_this->u_iface, unControllerDeviceIndex, unAxisId, usDurationMicroSec);
}

const char * __thiscall winIVRSystem_IVRSystem_006_GetButtonIdNameFromEnum(struct w_steam_iface *_this, EVRButtonId eButtonId)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_006_GetButtonIdNameFromEnum(_this->u_iface, eButtonId);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_006_GetControllerAxisTypeNameFromEnum(struct w_steam_iface *_this, EVRControllerAxisType eAxisType)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_006_GetControllerAxisTypeNameFromEnum(_this->u_iface, eAxisType);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_006_CaptureInputFocus(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_006_CaptureInputFocus(_this->u_iface);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_006_ReleaseInputFocus(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_006_ReleaseInputFocus(_this->u_iface);
}

bool __thiscall winIVRSystem_IVRSystem_006_IsInputFocusCapturedByAnotherProcess(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_006_IsInputFocusCapturedByAnotherProcess(_this->u_iface);
    return _ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_006_DriverDebugRequest(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, const char *pchRequest, char *pchResponseBuffer, uint32_t unResponseBufferSize)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_006_DriverDebugRequest(_this->u_iface, unDeviceIndex, pchRequest, pchResponseBuffer, unResponseBufferSize);
    return _ret;
}

VRFirmwareError __thiscall winIVRSystem_IVRSystem_006_PerformFirmwareUpdate(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    VRFirmwareError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_006_PerformFirmwareUpdate(_this->u_iface, unDeviceIndex);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_006_IsDisplayOnDesktop(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_006_IsDisplayOnDesktop(_this->u_iface);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_006_SetDisplayVisibility(struct w_steam_iface *_this, bool bIsVisibleOnDesktop)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_006_SetDisplayVisibility(_this->u_iface, bIsVisibleOnDesktop);
    return _ret;
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

#include "cppIVRSystem_IVRSystem_009.h"

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
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_009_GetRecommendedRenderTargetSize(_this->u_iface, pnWidth, pnHeight);
}

HmdMatrix44_t * __thiscall winIVRSystem_IVRSystem_009_GetProjectionMatrix(struct w_steam_iface *_this, HmdMatrix44_t *_ret, EVREye eEye, float fNearZ, float fFarZ, EGraphicsAPIConvention eProjType)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_009_GetProjectionMatrix(_this->u_iface, eEye, fNearZ, fFarZ, eProjType);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_009_GetProjectionRaw(struct w_steam_iface *_this, EVREye eEye, float *pfLeft, float *pfRight, float *pfTop, float *pfBottom)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_009_GetProjectionRaw(_this->u_iface, eEye, pfLeft, pfRight, pfTop, pfBottom);
}

DistortionCoordinates_t * __thiscall winIVRSystem_IVRSystem_009_ComputeDistortion(struct w_steam_iface *_this, DistortionCoordinates_t *_ret, EVREye eEye, float fU, float fV)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_009_ComputeDistortion(_this->u_iface, eEye, fU, fV);
    return _ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_009_GetEyeToHeadTransform(struct w_steam_iface *_this, HmdMatrix34_t *_ret, EVREye eEye)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_009_GetEyeToHeadTransform(_this->u_iface, eEye);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_009_GetTimeSinceLastVsync(struct w_steam_iface *_this, float *pfSecondsSinceLastVsync, uint64_t *pulFrameCounter)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_009_GetTimeSinceLastVsync(_this->u_iface, pfSecondsSinceLastVsync, pulFrameCounter);
    return _ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_009_GetD3D9AdapterIndex(struct w_steam_iface *_this)
{
    int32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_009_GetD3D9AdapterIndex(_this->u_iface);
    return _ret;
}

extern void __thiscall winIVRSystem_IVRSystem_009_GetDXGIOutputInfo(struct w_steam_iface *_this, int32_t *pnAdapterIndex);

bool __thiscall winIVRSystem_IVRSystem_009_IsDisplayOnDesktop(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_009_IsDisplayOnDesktop(_this->u_iface);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_009_SetDisplayVisibility(struct w_steam_iface *_this, bool bIsVisibleOnDesktop)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_009_SetDisplayVisibility(_this->u_iface, bIsVisibleOnDesktop);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_009_GetDeviceToAbsoluteTrackingPose(struct w_steam_iface *_this, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t *pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_009_GetDeviceToAbsoluteTrackingPose(_this->u_iface, eOrigin, fPredictedSecondsToPhotonsFromNow, pTrackedDevicePoseArray, unTrackedDevicePoseArrayCount);
}

void __thiscall winIVRSystem_IVRSystem_009_ResetSeatedZeroPose(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_009_ResetSeatedZeroPose(_this->u_iface);
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_009_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_009_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(_this->u_iface);
    return _ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_009_GetRawZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_009_GetRawZeroPoseToStandingAbsoluteTrackingPose(_this->u_iface);
    return _ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_009_GetSortedTrackedDeviceIndicesOfClass(struct w_steam_iface *_this, ETrackedDeviceClass eTrackedDeviceClass, TrackedDeviceIndex_t *punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_009_GetSortedTrackedDeviceIndicesOfClass(_this->u_iface, eTrackedDeviceClass, punTrackedDeviceIndexArray, unTrackedDeviceIndexArrayCount, unRelativeToTrackedDeviceIndex);
    return _ret;
}

EDeviceActivityLevel __thiscall winIVRSystem_IVRSystem_009_GetTrackedDeviceActivityLevel(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceId)
{
    EDeviceActivityLevel _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_009_GetTrackedDeviceActivityLevel(_this->u_iface, unDeviceId);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_009_ApplyTransform(struct w_steam_iface *_this, TrackedDevicePose_t *pOutputPose, const TrackedDevicePose_t *pTrackedDevicePose, const HmdMatrix34_t *pTransform)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_009_ApplyTransform(_this->u_iface, pOutputPose, pTrackedDevicePose, pTransform);
}

ETrackedDeviceClass __thiscall winIVRSystem_IVRSystem_009_GetTrackedDeviceClass(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    ETrackedDeviceClass _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_009_GetTrackedDeviceClass(_this->u_iface, unDeviceIndex);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_009_IsTrackedDeviceConnected(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_009_IsTrackedDeviceConnected(_this->u_iface, unDeviceIndex);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_009_GetBoolTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_009_GetBoolTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

float __thiscall winIVRSystem_IVRSystem_009_GetFloatTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    float _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_009_GetFloatTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_009_GetInt32TrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    int32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_009_GetInt32TrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

uint64_t __thiscall winIVRSystem_IVRSystem_009_GetUint64TrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    uint64_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_009_GetUint64TrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_009_GetMatrix34TrackedDeviceProperty(struct w_steam_iface *_this, HmdMatrix34_t *_ret, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_009_GetMatrix34TrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_009_GetStringTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, char *pchValue, uint32_t unBufferSize, ETrackedPropertyError *pError)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_009_GetStringTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pchValue, unBufferSize, pError);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_009_GetPropErrorNameFromEnum(struct w_steam_iface *_this, ETrackedPropertyError error)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_009_GetPropErrorNameFromEnum(_this->u_iface, error);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_009_PollNextEvent(struct w_steam_iface *_this, VREvent_t *pEvent)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_009_PollNextEvent(_this->u_iface, pEvent);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_009_PollNextEventWithPose(struct w_steam_iface *_this, ETrackingUniverseOrigin eOrigin, VREvent_t *pEvent, TrackedDevicePose_t *pTrackedDevicePose)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_009_PollNextEventWithPose(_this->u_iface, eOrigin, pEvent, pTrackedDevicePose);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_009_GetEventTypeNameFromEnum(struct w_steam_iface *_this, EVREventType eType)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_009_GetEventTypeNameFromEnum(_this->u_iface, eType);
    return _ret;
}

HiddenAreaMesh_t * __thiscall winIVRSystem_IVRSystem_009_GetHiddenAreaMesh(struct w_steam_iface *_this, HiddenAreaMesh_t *_ret, EVREye eEye)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_009_GetHiddenAreaMesh(_this->u_iface, eEye);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_009_GetControllerState(struct w_steam_iface *_this, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_0912 *pControllerState)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_009_GetControllerState(_this->u_iface, unControllerDeviceIndex, pControllerState);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_009_GetControllerStateWithPose(struct w_steam_iface *_this, ETrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_0912 *pControllerState, TrackedDevicePose_t *pTrackedDevicePose)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_009_GetControllerStateWithPose(_this->u_iface, eOrigin, unControllerDeviceIndex, pControllerState, pTrackedDevicePose);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_009_TriggerHapticPulse(struct w_steam_iface *_this, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_009_TriggerHapticPulse(_this->u_iface, unControllerDeviceIndex, unAxisId, usDurationMicroSec);
}

const char * __thiscall winIVRSystem_IVRSystem_009_GetButtonIdNameFromEnum(struct w_steam_iface *_this, EVRButtonId eButtonId)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_009_GetButtonIdNameFromEnum(_this->u_iface, eButtonId);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_009_GetControllerAxisTypeNameFromEnum(struct w_steam_iface *_this, EVRControllerAxisType eAxisType)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_009_GetControllerAxisTypeNameFromEnum(_this->u_iface, eAxisType);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_009_CaptureInputFocus(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_009_CaptureInputFocus(_this->u_iface);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_009_ReleaseInputFocus(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_009_ReleaseInputFocus(_this->u_iface);
}

bool __thiscall winIVRSystem_IVRSystem_009_IsInputFocusCapturedByAnotherProcess(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_009_IsInputFocusCapturedByAnotherProcess(_this->u_iface);
    return _ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_009_DriverDebugRequest(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, const char *pchRequest, char *pchResponseBuffer, uint32_t unResponseBufferSize)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_009_DriverDebugRequest(_this->u_iface, unDeviceIndex, pchRequest, pchResponseBuffer, unResponseBufferSize);
    return _ret;
}

EVRFirmwareError __thiscall winIVRSystem_IVRSystem_009_PerformFirmwareUpdate(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    EVRFirmwareError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_009_PerformFirmwareUpdate(_this->u_iface, unDeviceIndex);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_009_AcknowledgeQuit_Exiting(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_009_AcknowledgeQuit_Exiting(_this->u_iface);
}

void __thiscall winIVRSystem_IVRSystem_009_AcknowledgeQuit_UserPrompt(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_009_AcknowledgeQuit_UserPrompt(_this->u_iface);
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

#include "cppIVRSystem_IVRSystem_010.h"

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
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_010_GetRecommendedRenderTargetSize(_this->u_iface, pnWidth, pnHeight);
}

HmdMatrix44_t * __thiscall winIVRSystem_IVRSystem_010_GetProjectionMatrix(struct w_steam_iface *_this, HmdMatrix44_t *_ret, EVREye eEye, float fNearZ, float fFarZ, EGraphicsAPIConvention eProjType)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_010_GetProjectionMatrix(_this->u_iface, eEye, fNearZ, fFarZ, eProjType);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_010_GetProjectionRaw(struct w_steam_iface *_this, EVREye eEye, float *pfLeft, float *pfRight, float *pfTop, float *pfBottom)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_010_GetProjectionRaw(_this->u_iface, eEye, pfLeft, pfRight, pfTop, pfBottom);
}

DistortionCoordinates_t * __thiscall winIVRSystem_IVRSystem_010_ComputeDistortion(struct w_steam_iface *_this, DistortionCoordinates_t *_ret, EVREye eEye, float fU, float fV)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_010_ComputeDistortion(_this->u_iface, eEye, fU, fV);
    return _ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_010_GetEyeToHeadTransform(struct w_steam_iface *_this, HmdMatrix34_t *_ret, EVREye eEye)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_010_GetEyeToHeadTransform(_this->u_iface, eEye);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_010_GetTimeSinceLastVsync(struct w_steam_iface *_this, float *pfSecondsSinceLastVsync, uint64_t *pulFrameCounter)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_010_GetTimeSinceLastVsync(_this->u_iface, pfSecondsSinceLastVsync, pulFrameCounter);
    return _ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_010_GetD3D9AdapterIndex(struct w_steam_iface *_this)
{
    int32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_010_GetD3D9AdapterIndex(_this->u_iface);
    return _ret;
}

extern void __thiscall winIVRSystem_IVRSystem_010_GetDXGIOutputInfo(struct w_steam_iface *_this, int32_t *pnAdapterIndex);

bool __thiscall winIVRSystem_IVRSystem_010_IsDisplayOnDesktop(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_010_IsDisplayOnDesktop(_this->u_iface);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_010_SetDisplayVisibility(struct w_steam_iface *_this, bool bIsVisibleOnDesktop)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_010_SetDisplayVisibility(_this->u_iface, bIsVisibleOnDesktop);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_010_GetDeviceToAbsoluteTrackingPose(struct w_steam_iface *_this, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t *pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_010_GetDeviceToAbsoluteTrackingPose(_this->u_iface, eOrigin, fPredictedSecondsToPhotonsFromNow, pTrackedDevicePoseArray, unTrackedDevicePoseArrayCount);
}

void __thiscall winIVRSystem_IVRSystem_010_ResetSeatedZeroPose(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_010_ResetSeatedZeroPose(_this->u_iface);
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_010_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_010_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(_this->u_iface);
    return _ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_010_GetRawZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_010_GetRawZeroPoseToStandingAbsoluteTrackingPose(_this->u_iface);
    return _ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_010_GetSortedTrackedDeviceIndicesOfClass(struct w_steam_iface *_this, ETrackedDeviceClass eTrackedDeviceClass, TrackedDeviceIndex_t *punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_010_GetSortedTrackedDeviceIndicesOfClass(_this->u_iface, eTrackedDeviceClass, punTrackedDeviceIndexArray, unTrackedDeviceIndexArrayCount, unRelativeToTrackedDeviceIndex);
    return _ret;
}

EDeviceActivityLevel __thiscall winIVRSystem_IVRSystem_010_GetTrackedDeviceActivityLevel(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceId)
{
    EDeviceActivityLevel _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_010_GetTrackedDeviceActivityLevel(_this->u_iface, unDeviceId);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_010_ApplyTransform(struct w_steam_iface *_this, TrackedDevicePose_t *pOutputPose, const TrackedDevicePose_t *pTrackedDevicePose, const HmdMatrix34_t *pTransform)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_010_ApplyTransform(_this->u_iface, pOutputPose, pTrackedDevicePose, pTransform);
}

TrackedDeviceIndex_t __thiscall winIVRSystem_IVRSystem_010_GetTrackedDeviceIndexForControllerRole(struct w_steam_iface *_this, ETrackedControllerRole unDeviceType)
{
    TrackedDeviceIndex_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_010_GetTrackedDeviceIndexForControllerRole(_this->u_iface, unDeviceType);
    return _ret;
}

ETrackedControllerRole __thiscall winIVRSystem_IVRSystem_010_GetControllerRoleForTrackedDeviceIndex(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    ETrackedControllerRole _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_010_GetControllerRoleForTrackedDeviceIndex(_this->u_iface, unDeviceIndex);
    return _ret;
}

ETrackedDeviceClass __thiscall winIVRSystem_IVRSystem_010_GetTrackedDeviceClass(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    ETrackedDeviceClass _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_010_GetTrackedDeviceClass(_this->u_iface, unDeviceIndex);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_010_IsTrackedDeviceConnected(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_010_IsTrackedDeviceConnected(_this->u_iface, unDeviceIndex);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_010_GetBoolTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_010_GetBoolTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

float __thiscall winIVRSystem_IVRSystem_010_GetFloatTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    float _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_010_GetFloatTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_010_GetInt32TrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    int32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_010_GetInt32TrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

uint64_t __thiscall winIVRSystem_IVRSystem_010_GetUint64TrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    uint64_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_010_GetUint64TrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_010_GetMatrix34TrackedDeviceProperty(struct w_steam_iface *_this, HmdMatrix34_t *_ret, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_010_GetMatrix34TrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_010_GetStringTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, char *pchValue, uint32_t unBufferSize, ETrackedPropertyError *pError)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_010_GetStringTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pchValue, unBufferSize, pError);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_010_GetPropErrorNameFromEnum(struct w_steam_iface *_this, ETrackedPropertyError error)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_010_GetPropErrorNameFromEnum(_this->u_iface, error);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_010_PollNextEvent(struct w_steam_iface *_this, VREvent_t *pEvent)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_010_PollNextEvent(_this->u_iface, pEvent);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_010_PollNextEventWithPose(struct w_steam_iface *_this, ETrackingUniverseOrigin eOrigin, VREvent_t *pEvent, TrackedDevicePose_t *pTrackedDevicePose)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_010_PollNextEventWithPose(_this->u_iface, eOrigin, pEvent, pTrackedDevicePose);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_010_GetEventTypeNameFromEnum(struct w_steam_iface *_this, EVREventType eType)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_010_GetEventTypeNameFromEnum(_this->u_iface, eType);
    return _ret;
}

HiddenAreaMesh_t * __thiscall winIVRSystem_IVRSystem_010_GetHiddenAreaMesh(struct w_steam_iface *_this, HiddenAreaMesh_t *_ret, EVREye eEye)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_010_GetHiddenAreaMesh(_this->u_iface, eEye);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_010_GetControllerState(struct w_steam_iface *_this, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_0914 *pControllerState)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_010_GetControllerState(_this->u_iface, unControllerDeviceIndex, pControllerState);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_010_GetControllerStateWithPose(struct w_steam_iface *_this, ETrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_0914 *pControllerState, TrackedDevicePose_t *pTrackedDevicePose)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_010_GetControllerStateWithPose(_this->u_iface, eOrigin, unControllerDeviceIndex, pControllerState, pTrackedDevicePose);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_010_TriggerHapticPulse(struct w_steam_iface *_this, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_010_TriggerHapticPulse(_this->u_iface, unControllerDeviceIndex, unAxisId, usDurationMicroSec);
}

const char * __thiscall winIVRSystem_IVRSystem_010_GetButtonIdNameFromEnum(struct w_steam_iface *_this, EVRButtonId eButtonId)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_010_GetButtonIdNameFromEnum(_this->u_iface, eButtonId);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_010_GetControllerAxisTypeNameFromEnum(struct w_steam_iface *_this, EVRControllerAxisType eAxisType)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_010_GetControllerAxisTypeNameFromEnum(_this->u_iface, eAxisType);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_010_CaptureInputFocus(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_010_CaptureInputFocus(_this->u_iface);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_010_ReleaseInputFocus(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_010_ReleaseInputFocus(_this->u_iface);
}

bool __thiscall winIVRSystem_IVRSystem_010_IsInputFocusCapturedByAnotherProcess(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_010_IsInputFocusCapturedByAnotherProcess(_this->u_iface);
    return _ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_010_DriverDebugRequest(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, const char *pchRequest, char *pchResponseBuffer, uint32_t unResponseBufferSize)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_010_DriverDebugRequest(_this->u_iface, unDeviceIndex, pchRequest, pchResponseBuffer, unResponseBufferSize);
    return _ret;
}

EVRFirmwareError __thiscall winIVRSystem_IVRSystem_010_PerformFirmwareUpdate(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    EVRFirmwareError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_010_PerformFirmwareUpdate(_this->u_iface, unDeviceIndex);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_010_AcknowledgeQuit_Exiting(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_010_AcknowledgeQuit_Exiting(_this->u_iface);
}

void __thiscall winIVRSystem_IVRSystem_010_AcknowledgeQuit_UserPrompt(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_010_AcknowledgeQuit_UserPrompt(_this->u_iface);
}

void __thiscall winIVRSystem_IVRSystem_010_PerformanceTestEnableCapture(struct w_steam_iface *_this, bool bEnable)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_010_PerformanceTestEnableCapture(_this->u_iface, bEnable);
}

void __thiscall winIVRSystem_IVRSystem_010_PerformanceTestReportFidelityLevelChange(struct w_steam_iface *_this, int nFidelityLevel)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_010_PerformanceTestReportFidelityLevelChange(_this->u_iface, nFidelityLevel);
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

#include "cppIVRSystem_IVRSystem_011.h"

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
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_011_GetRecommendedRenderTargetSize(_this->u_iface, pnWidth, pnHeight);
}

HmdMatrix44_t * __thiscall winIVRSystem_IVRSystem_011_GetProjectionMatrix(struct w_steam_iface *_this, HmdMatrix44_t *_ret, EVREye eEye, float fNearZ, float fFarZ, EGraphicsAPIConvention eProjType)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_011_GetProjectionMatrix(_this->u_iface, eEye, fNearZ, fFarZ, eProjType);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_011_GetProjectionRaw(struct w_steam_iface *_this, EVREye eEye, float *pfLeft, float *pfRight, float *pfTop, float *pfBottom)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_011_GetProjectionRaw(_this->u_iface, eEye, pfLeft, pfRight, pfTop, pfBottom);
}

DistortionCoordinates_t * __thiscall winIVRSystem_IVRSystem_011_ComputeDistortion(struct w_steam_iface *_this, DistortionCoordinates_t *_ret, EVREye eEye, float fU, float fV)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_011_ComputeDistortion(_this->u_iface, eEye, fU, fV);
    return _ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_011_GetEyeToHeadTransform(struct w_steam_iface *_this, HmdMatrix34_t *_ret, EVREye eEye)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_011_GetEyeToHeadTransform(_this->u_iface, eEye);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_011_GetTimeSinceLastVsync(struct w_steam_iface *_this, float *pfSecondsSinceLastVsync, uint64_t *pulFrameCounter)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_011_GetTimeSinceLastVsync(_this->u_iface, pfSecondsSinceLastVsync, pulFrameCounter);
    return _ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_011_GetD3D9AdapterIndex(struct w_steam_iface *_this)
{
    int32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_011_GetD3D9AdapterIndex(_this->u_iface);
    return _ret;
}

extern void __thiscall winIVRSystem_IVRSystem_011_GetDXGIOutputInfo(struct w_steam_iface *_this, int32_t *pnAdapterIndex);

bool __thiscall winIVRSystem_IVRSystem_011_IsDisplayOnDesktop(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_011_IsDisplayOnDesktop(_this->u_iface);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_011_SetDisplayVisibility(struct w_steam_iface *_this, bool bIsVisibleOnDesktop)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_011_SetDisplayVisibility(_this->u_iface, bIsVisibleOnDesktop);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_011_GetDeviceToAbsoluteTrackingPose(struct w_steam_iface *_this, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t *pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_011_GetDeviceToAbsoluteTrackingPose(_this->u_iface, eOrigin, fPredictedSecondsToPhotonsFromNow, pTrackedDevicePoseArray, unTrackedDevicePoseArrayCount);
}

void __thiscall winIVRSystem_IVRSystem_011_ResetSeatedZeroPose(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_011_ResetSeatedZeroPose(_this->u_iface);
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_011_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_011_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(_this->u_iface);
    return _ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_011_GetRawZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_011_GetRawZeroPoseToStandingAbsoluteTrackingPose(_this->u_iface);
    return _ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_011_GetSortedTrackedDeviceIndicesOfClass(struct w_steam_iface *_this, ETrackedDeviceClass eTrackedDeviceClass, TrackedDeviceIndex_t *punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_011_GetSortedTrackedDeviceIndicesOfClass(_this->u_iface, eTrackedDeviceClass, punTrackedDeviceIndexArray, unTrackedDeviceIndexArrayCount, unRelativeToTrackedDeviceIndex);
    return _ret;
}

EDeviceActivityLevel __thiscall winIVRSystem_IVRSystem_011_GetTrackedDeviceActivityLevel(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceId)
{
    EDeviceActivityLevel _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_011_GetTrackedDeviceActivityLevel(_this->u_iface, unDeviceId);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_011_ApplyTransform(struct w_steam_iface *_this, TrackedDevicePose_t *pOutputPose, const TrackedDevicePose_t *pTrackedDevicePose, const HmdMatrix34_t *pTransform)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_011_ApplyTransform(_this->u_iface, pOutputPose, pTrackedDevicePose, pTransform);
}

TrackedDeviceIndex_t __thiscall winIVRSystem_IVRSystem_011_GetTrackedDeviceIndexForControllerRole(struct w_steam_iface *_this, ETrackedControllerRole unDeviceType)
{
    TrackedDeviceIndex_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_011_GetTrackedDeviceIndexForControllerRole(_this->u_iface, unDeviceType);
    return _ret;
}

ETrackedControllerRole __thiscall winIVRSystem_IVRSystem_011_GetControllerRoleForTrackedDeviceIndex(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    ETrackedControllerRole _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_011_GetControllerRoleForTrackedDeviceIndex(_this->u_iface, unDeviceIndex);
    return _ret;
}

ETrackedDeviceClass __thiscall winIVRSystem_IVRSystem_011_GetTrackedDeviceClass(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    ETrackedDeviceClass _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_011_GetTrackedDeviceClass(_this->u_iface, unDeviceIndex);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_011_IsTrackedDeviceConnected(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_011_IsTrackedDeviceConnected(_this->u_iface, unDeviceIndex);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_011_GetBoolTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_011_GetBoolTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

float __thiscall winIVRSystem_IVRSystem_011_GetFloatTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    float _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_011_GetFloatTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_011_GetInt32TrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    int32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_011_GetInt32TrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

uint64_t __thiscall winIVRSystem_IVRSystem_011_GetUint64TrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    uint64_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_011_GetUint64TrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_011_GetMatrix34TrackedDeviceProperty(struct w_steam_iface *_this, HmdMatrix34_t *_ret, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_011_GetMatrix34TrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_011_GetStringTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, char *pchValue, uint32_t unBufferSize, ETrackedPropertyError *pError)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_011_GetStringTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pchValue, unBufferSize, pError);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_011_GetPropErrorNameFromEnum(struct w_steam_iface *_this, ETrackedPropertyError error)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_011_GetPropErrorNameFromEnum(_this->u_iface, error);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_011_PollNextEvent(struct w_steam_iface *_this, winVREvent_t_0918 *pEvent, uint32_t uncbVREvent)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_011_PollNextEvent(_this->u_iface, pEvent, uncbVREvent);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_011_PollNextEventWithPose(struct w_steam_iface *_this, ETrackingUniverseOrigin eOrigin, winVREvent_t_0918 *pEvent, uint32_t uncbVREvent, TrackedDevicePose_t *pTrackedDevicePose)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_011_PollNextEventWithPose(_this->u_iface, eOrigin, pEvent, uncbVREvent, pTrackedDevicePose);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_011_GetEventTypeNameFromEnum(struct w_steam_iface *_this, EVREventType eType)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_011_GetEventTypeNameFromEnum(_this->u_iface, eType);
    return _ret;
}

HiddenAreaMesh_t * __thiscall winIVRSystem_IVRSystem_011_GetHiddenAreaMesh(struct w_steam_iface *_this, HiddenAreaMesh_t *_ret, EVREye eEye)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_011_GetHiddenAreaMesh(_this->u_iface, eEye);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_011_GetControllerState(struct w_steam_iface *_this, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_0918 *pControllerState)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_011_GetControllerState(_this->u_iface, unControllerDeviceIndex, pControllerState);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_011_GetControllerStateWithPose(struct w_steam_iface *_this, ETrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_0918 *pControllerState, TrackedDevicePose_t *pTrackedDevicePose)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_011_GetControllerStateWithPose(_this->u_iface, eOrigin, unControllerDeviceIndex, pControllerState, pTrackedDevicePose);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_011_TriggerHapticPulse(struct w_steam_iface *_this, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_011_TriggerHapticPulse(_this->u_iface, unControllerDeviceIndex, unAxisId, usDurationMicroSec);
}

const char * __thiscall winIVRSystem_IVRSystem_011_GetButtonIdNameFromEnum(struct w_steam_iface *_this, EVRButtonId eButtonId)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_011_GetButtonIdNameFromEnum(_this->u_iface, eButtonId);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_011_GetControllerAxisTypeNameFromEnum(struct w_steam_iface *_this, EVRControllerAxisType eAxisType)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_011_GetControllerAxisTypeNameFromEnum(_this->u_iface, eAxisType);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_011_CaptureInputFocus(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_011_CaptureInputFocus(_this->u_iface);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_011_ReleaseInputFocus(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_011_ReleaseInputFocus(_this->u_iface);
}

bool __thiscall winIVRSystem_IVRSystem_011_IsInputFocusCapturedByAnotherProcess(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_011_IsInputFocusCapturedByAnotherProcess(_this->u_iface);
    return _ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_011_DriverDebugRequest(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, const char *pchRequest, char *pchResponseBuffer, uint32_t unResponseBufferSize)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_011_DriverDebugRequest(_this->u_iface, unDeviceIndex, pchRequest, pchResponseBuffer, unResponseBufferSize);
    return _ret;
}

EVRFirmwareError __thiscall winIVRSystem_IVRSystem_011_PerformFirmwareUpdate(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    EVRFirmwareError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_011_PerformFirmwareUpdate(_this->u_iface, unDeviceIndex);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_011_AcknowledgeQuit_Exiting(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_011_AcknowledgeQuit_Exiting(_this->u_iface);
}

void __thiscall winIVRSystem_IVRSystem_011_AcknowledgeQuit_UserPrompt(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_011_AcknowledgeQuit_UserPrompt(_this->u_iface);
}

void __thiscall winIVRSystem_IVRSystem_011_PerformanceTestEnableCapture(struct w_steam_iface *_this, bool bEnable)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_011_PerformanceTestEnableCapture(_this->u_iface, bEnable);
}

void __thiscall winIVRSystem_IVRSystem_011_PerformanceTestReportFidelityLevelChange(struct w_steam_iface *_this, int nFidelityLevel)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_011_PerformanceTestReportFidelityLevelChange(_this->u_iface, nFidelityLevel);
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

#include "cppIVRSystem_IVRSystem_012.h"

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
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_012_GetRecommendedRenderTargetSize(_this->u_iface, pnWidth, pnHeight);
}

HmdMatrix44_t * __thiscall winIVRSystem_IVRSystem_012_GetProjectionMatrix(struct w_steam_iface *_this, HmdMatrix44_t *_ret, EVREye eEye, float fNearZ, float fFarZ, EGraphicsAPIConvention eProjType)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_012_GetProjectionMatrix(_this->u_iface, eEye, fNearZ, fFarZ, eProjType);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_012_GetProjectionRaw(struct w_steam_iface *_this, EVREye eEye, float *pfLeft, float *pfRight, float *pfTop, float *pfBottom)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_012_GetProjectionRaw(_this->u_iface, eEye, pfLeft, pfRight, pfTop, pfBottom);
}

DistortionCoordinates_t * __thiscall winIVRSystem_IVRSystem_012_ComputeDistortion(struct w_steam_iface *_this, DistortionCoordinates_t *_ret, EVREye eEye, float fU, float fV)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_012_ComputeDistortion(_this->u_iface, eEye, fU, fV);
    return _ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_012_GetEyeToHeadTransform(struct w_steam_iface *_this, HmdMatrix34_t *_ret, EVREye eEye)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_012_GetEyeToHeadTransform(_this->u_iface, eEye);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_012_GetTimeSinceLastVsync(struct w_steam_iface *_this, float *pfSecondsSinceLastVsync, uint64_t *pulFrameCounter)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_012_GetTimeSinceLastVsync(_this->u_iface, pfSecondsSinceLastVsync, pulFrameCounter);
    return _ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_012_GetD3D9AdapterIndex(struct w_steam_iface *_this)
{
    int32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_012_GetD3D9AdapterIndex(_this->u_iface);
    return _ret;
}

extern void __thiscall winIVRSystem_IVRSystem_012_GetDXGIOutputInfo(struct w_steam_iface *_this, int32_t *pnAdapterIndex);

bool __thiscall winIVRSystem_IVRSystem_012_IsDisplayOnDesktop(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_012_IsDisplayOnDesktop(_this->u_iface);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_012_SetDisplayVisibility(struct w_steam_iface *_this, bool bIsVisibleOnDesktop)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_012_SetDisplayVisibility(_this->u_iface, bIsVisibleOnDesktop);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_012_GetDeviceToAbsoluteTrackingPose(struct w_steam_iface *_this, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t *pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_012_GetDeviceToAbsoluteTrackingPose(_this->u_iface, eOrigin, fPredictedSecondsToPhotonsFromNow, pTrackedDevicePoseArray, unTrackedDevicePoseArrayCount);
}

void __thiscall winIVRSystem_IVRSystem_012_ResetSeatedZeroPose(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_012_ResetSeatedZeroPose(_this->u_iface);
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_012_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_012_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(_this->u_iface);
    return _ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_012_GetRawZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_012_GetRawZeroPoseToStandingAbsoluteTrackingPose(_this->u_iface);
    return _ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_012_GetSortedTrackedDeviceIndicesOfClass(struct w_steam_iface *_this, ETrackedDeviceClass eTrackedDeviceClass, TrackedDeviceIndex_t *punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_012_GetSortedTrackedDeviceIndicesOfClass(_this->u_iface, eTrackedDeviceClass, punTrackedDeviceIndexArray, unTrackedDeviceIndexArrayCount, unRelativeToTrackedDeviceIndex);
    return _ret;
}

EDeviceActivityLevel __thiscall winIVRSystem_IVRSystem_012_GetTrackedDeviceActivityLevel(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceId)
{
    EDeviceActivityLevel _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_012_GetTrackedDeviceActivityLevel(_this->u_iface, unDeviceId);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_012_ApplyTransform(struct w_steam_iface *_this, TrackedDevicePose_t *pOutputPose, const TrackedDevicePose_t *pTrackedDevicePose, const HmdMatrix34_t *pTransform)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_012_ApplyTransform(_this->u_iface, pOutputPose, pTrackedDevicePose, pTransform);
}

TrackedDeviceIndex_t __thiscall winIVRSystem_IVRSystem_012_GetTrackedDeviceIndexForControllerRole(struct w_steam_iface *_this, ETrackedControllerRole unDeviceType)
{
    TrackedDeviceIndex_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_012_GetTrackedDeviceIndexForControllerRole(_this->u_iface, unDeviceType);
    return _ret;
}

ETrackedControllerRole __thiscall winIVRSystem_IVRSystem_012_GetControllerRoleForTrackedDeviceIndex(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    ETrackedControllerRole _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_012_GetControllerRoleForTrackedDeviceIndex(_this->u_iface, unDeviceIndex);
    return _ret;
}

ETrackedDeviceClass __thiscall winIVRSystem_IVRSystem_012_GetTrackedDeviceClass(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    ETrackedDeviceClass _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_012_GetTrackedDeviceClass(_this->u_iface, unDeviceIndex);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_012_IsTrackedDeviceConnected(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_012_IsTrackedDeviceConnected(_this->u_iface, unDeviceIndex);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_012_GetBoolTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_012_GetBoolTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

float __thiscall winIVRSystem_IVRSystem_012_GetFloatTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    float _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_012_GetFloatTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_012_GetInt32TrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    int32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_012_GetInt32TrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

uint64_t __thiscall winIVRSystem_IVRSystem_012_GetUint64TrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    uint64_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_012_GetUint64TrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_012_GetMatrix34TrackedDeviceProperty(struct w_steam_iface *_this, HmdMatrix34_t *_ret, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_012_GetMatrix34TrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_012_GetStringTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, char *pchValue, uint32_t unBufferSize, ETrackedPropertyError *pError)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_012_GetStringTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pchValue, unBufferSize, pError);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_012_GetPropErrorNameFromEnum(struct w_steam_iface *_this, ETrackedPropertyError error)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_012_GetPropErrorNameFromEnum(_this->u_iface, error);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_012_PollNextEvent(struct w_steam_iface *_this, winVREvent_t_103 *pEvent, uint32_t uncbVREvent)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_012_PollNextEvent(_this->u_iface, pEvent, uncbVREvent);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_012_PollNextEventWithPose(struct w_steam_iface *_this, ETrackingUniverseOrigin eOrigin, winVREvent_t_103 *pEvent, uint32_t uncbVREvent, TrackedDevicePose_t *pTrackedDevicePose)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_012_PollNextEventWithPose(_this->u_iface, eOrigin, pEvent, uncbVREvent, pTrackedDevicePose);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_012_GetEventTypeNameFromEnum(struct w_steam_iface *_this, EVREventType eType)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_012_GetEventTypeNameFromEnum(_this->u_iface, eType);
    return _ret;
}

HiddenAreaMesh_t * __thiscall winIVRSystem_IVRSystem_012_GetHiddenAreaMesh(struct w_steam_iface *_this, HiddenAreaMesh_t *_ret, EVREye eEye)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_012_GetHiddenAreaMesh(_this->u_iface, eEye);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_012_GetControllerState(struct w_steam_iface *_this, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_103 *pControllerState)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_012_GetControllerState(_this->u_iface, unControllerDeviceIndex, pControllerState);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_012_GetControllerStateWithPose(struct w_steam_iface *_this, ETrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_103 *pControllerState, TrackedDevicePose_t *pTrackedDevicePose)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_012_GetControllerStateWithPose(_this->u_iface, eOrigin, unControllerDeviceIndex, pControllerState, pTrackedDevicePose);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_012_TriggerHapticPulse(struct w_steam_iface *_this, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_012_TriggerHapticPulse(_this->u_iface, unControllerDeviceIndex, unAxisId, usDurationMicroSec);
}

const char * __thiscall winIVRSystem_IVRSystem_012_GetButtonIdNameFromEnum(struct w_steam_iface *_this, EVRButtonId eButtonId)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_012_GetButtonIdNameFromEnum(_this->u_iface, eButtonId);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_012_GetControllerAxisTypeNameFromEnum(struct w_steam_iface *_this, EVRControllerAxisType eAxisType)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_012_GetControllerAxisTypeNameFromEnum(_this->u_iface, eAxisType);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_012_CaptureInputFocus(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_012_CaptureInputFocus(_this->u_iface);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_012_ReleaseInputFocus(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_012_ReleaseInputFocus(_this->u_iface);
}

bool __thiscall winIVRSystem_IVRSystem_012_IsInputFocusCapturedByAnotherProcess(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_012_IsInputFocusCapturedByAnotherProcess(_this->u_iface);
    return _ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_012_DriverDebugRequest(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, const char *pchRequest, char *pchResponseBuffer, uint32_t unResponseBufferSize)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_012_DriverDebugRequest(_this->u_iface, unDeviceIndex, pchRequest, pchResponseBuffer, unResponseBufferSize);
    return _ret;
}

EVRFirmwareError __thiscall winIVRSystem_IVRSystem_012_PerformFirmwareUpdate(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    EVRFirmwareError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_012_PerformFirmwareUpdate(_this->u_iface, unDeviceIndex);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_012_AcknowledgeQuit_Exiting(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_012_AcknowledgeQuit_Exiting(_this->u_iface);
}

void __thiscall winIVRSystem_IVRSystem_012_AcknowledgeQuit_UserPrompt(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_012_AcknowledgeQuit_UserPrompt(_this->u_iface);
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

#include "cppIVRSystem_IVRSystem_014.h"

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
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_014_GetRecommendedRenderTargetSize(_this->u_iface, pnWidth, pnHeight);
}

HmdMatrix44_t * __thiscall winIVRSystem_IVRSystem_014_GetProjectionMatrix(struct w_steam_iface *_this, HmdMatrix44_t *_ret, EVREye eEye, float fNearZ, float fFarZ, EGraphicsAPIConvention eProjType)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_014_GetProjectionMatrix(_this->u_iface, eEye, fNearZ, fFarZ, eProjType);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_014_GetProjectionRaw(struct w_steam_iface *_this, EVREye eEye, float *pfLeft, float *pfRight, float *pfTop, float *pfBottom)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_014_GetProjectionRaw(_this->u_iface, eEye, pfLeft, pfRight, pfTop, pfBottom);
}

bool __thiscall winIVRSystem_IVRSystem_014_ComputeDistortion(struct w_steam_iface *_this, EVREye eEye, float fU, float fV, DistortionCoordinates_t *pDistortionCoordinates)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_014_ComputeDistortion(_this->u_iface, eEye, fU, fV, pDistortionCoordinates);
    return _ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_014_GetEyeToHeadTransform(struct w_steam_iface *_this, HmdMatrix34_t *_ret, EVREye eEye)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_014_GetEyeToHeadTransform(_this->u_iface, eEye);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_014_GetTimeSinceLastVsync(struct w_steam_iface *_this, float *pfSecondsSinceLastVsync, uint64_t *pulFrameCounter)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_014_GetTimeSinceLastVsync(_this->u_iface, pfSecondsSinceLastVsync, pulFrameCounter);
    return _ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_014_GetD3D9AdapterIndex(struct w_steam_iface *_this)
{
    int32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_014_GetD3D9AdapterIndex(_this->u_iface);
    return _ret;
}

extern void __thiscall winIVRSystem_IVRSystem_014_GetDXGIOutputInfo(struct w_steam_iface *_this, int32_t *pnAdapterIndex);

bool __thiscall winIVRSystem_IVRSystem_014_IsDisplayOnDesktop(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_014_IsDisplayOnDesktop(_this->u_iface);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_014_SetDisplayVisibility(struct w_steam_iface *_this, bool bIsVisibleOnDesktop)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_014_SetDisplayVisibility(_this->u_iface, bIsVisibleOnDesktop);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_014_GetDeviceToAbsoluteTrackingPose(struct w_steam_iface *_this, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t *pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_014_GetDeviceToAbsoluteTrackingPose(_this->u_iface, eOrigin, fPredictedSecondsToPhotonsFromNow, pTrackedDevicePoseArray, unTrackedDevicePoseArrayCount);
}

void __thiscall winIVRSystem_IVRSystem_014_ResetSeatedZeroPose(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_014_ResetSeatedZeroPose(_this->u_iface);
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_014_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_014_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(_this->u_iface);
    return _ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_014_GetRawZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_014_GetRawZeroPoseToStandingAbsoluteTrackingPose(_this->u_iface);
    return _ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_014_GetSortedTrackedDeviceIndicesOfClass(struct w_steam_iface *_this, ETrackedDeviceClass eTrackedDeviceClass, TrackedDeviceIndex_t *punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_014_GetSortedTrackedDeviceIndicesOfClass(_this->u_iface, eTrackedDeviceClass, punTrackedDeviceIndexArray, unTrackedDeviceIndexArrayCount, unRelativeToTrackedDeviceIndex);
    return _ret;
}

EDeviceActivityLevel __thiscall winIVRSystem_IVRSystem_014_GetTrackedDeviceActivityLevel(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceId)
{
    EDeviceActivityLevel _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_014_GetTrackedDeviceActivityLevel(_this->u_iface, unDeviceId);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_014_ApplyTransform(struct w_steam_iface *_this, TrackedDevicePose_t *pOutputPose, const TrackedDevicePose_t *pTrackedDevicePose, const HmdMatrix34_t *pTransform)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_014_ApplyTransform(_this->u_iface, pOutputPose, pTrackedDevicePose, pTransform);
}

TrackedDeviceIndex_t __thiscall winIVRSystem_IVRSystem_014_GetTrackedDeviceIndexForControllerRole(struct w_steam_iface *_this, ETrackedControllerRole unDeviceType)
{
    TrackedDeviceIndex_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_014_GetTrackedDeviceIndexForControllerRole(_this->u_iface, unDeviceType);
    return _ret;
}

ETrackedControllerRole __thiscall winIVRSystem_IVRSystem_014_GetControllerRoleForTrackedDeviceIndex(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    ETrackedControllerRole _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_014_GetControllerRoleForTrackedDeviceIndex(_this->u_iface, unDeviceIndex);
    return _ret;
}

ETrackedDeviceClass __thiscall winIVRSystem_IVRSystem_014_GetTrackedDeviceClass(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    ETrackedDeviceClass _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_014_GetTrackedDeviceClass(_this->u_iface, unDeviceIndex);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_014_IsTrackedDeviceConnected(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_014_IsTrackedDeviceConnected(_this->u_iface, unDeviceIndex);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_014_GetBoolTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_014_GetBoolTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

float __thiscall winIVRSystem_IVRSystem_014_GetFloatTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    float _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_014_GetFloatTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_014_GetInt32TrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    int32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_014_GetInt32TrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

uint64_t __thiscall winIVRSystem_IVRSystem_014_GetUint64TrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    uint64_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_014_GetUint64TrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_014_GetMatrix34TrackedDeviceProperty(struct w_steam_iface *_this, HmdMatrix34_t *_ret, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_014_GetMatrix34TrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_014_GetStringTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, char *pchValue, uint32_t unBufferSize, ETrackedPropertyError *pError)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_014_GetStringTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pchValue, unBufferSize, pError);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_014_GetPropErrorNameFromEnum(struct w_steam_iface *_this, ETrackedPropertyError error)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_014_GetPropErrorNameFromEnum(_this->u_iface, error);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_014_PollNextEvent(struct w_steam_iface *_this, winVREvent_t_104 *pEvent, uint32_t uncbVREvent)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_014_PollNextEvent(_this->u_iface, pEvent, uncbVREvent);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_014_PollNextEventWithPose(struct w_steam_iface *_this, ETrackingUniverseOrigin eOrigin, winVREvent_t_104 *pEvent, uint32_t uncbVREvent, TrackedDevicePose_t *pTrackedDevicePose)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_014_PollNextEventWithPose(_this->u_iface, eOrigin, pEvent, uncbVREvent, pTrackedDevicePose);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_014_GetEventTypeNameFromEnum(struct w_steam_iface *_this, EVREventType eType)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_014_GetEventTypeNameFromEnum(_this->u_iface, eType);
    return _ret;
}

HiddenAreaMesh_t * __thiscall winIVRSystem_IVRSystem_014_GetHiddenAreaMesh(struct w_steam_iface *_this, HiddenAreaMesh_t *_ret, EVREye eEye, EHiddenAreaMeshType type)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_014_GetHiddenAreaMesh(_this->u_iface, eEye, type);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_014_GetControllerState(struct w_steam_iface *_this, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_104 *pControllerState, uint32_t unControllerStateSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_014_GetControllerState(_this->u_iface, unControllerDeviceIndex, pControllerState, unControllerStateSize);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_014_GetControllerStateWithPose(struct w_steam_iface *_this, ETrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_104 *pControllerState, uint32_t unControllerStateSize, TrackedDevicePose_t *pTrackedDevicePose)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_014_GetControllerStateWithPose(_this->u_iface, eOrigin, unControllerDeviceIndex, pControllerState, unControllerStateSize, pTrackedDevicePose);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_014_TriggerHapticPulse(struct w_steam_iface *_this, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_014_TriggerHapticPulse(_this->u_iface, unControllerDeviceIndex, unAxisId, usDurationMicroSec);
}

const char * __thiscall winIVRSystem_IVRSystem_014_GetButtonIdNameFromEnum(struct w_steam_iface *_this, EVRButtonId eButtonId)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_014_GetButtonIdNameFromEnum(_this->u_iface, eButtonId);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_014_GetControllerAxisTypeNameFromEnum(struct w_steam_iface *_this, EVRControllerAxisType eAxisType)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_014_GetControllerAxisTypeNameFromEnum(_this->u_iface, eAxisType);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_014_CaptureInputFocus(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_014_CaptureInputFocus(_this->u_iface);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_014_ReleaseInputFocus(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_014_ReleaseInputFocus(_this->u_iface);
}

bool __thiscall winIVRSystem_IVRSystem_014_IsInputFocusCapturedByAnotherProcess(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_014_IsInputFocusCapturedByAnotherProcess(_this->u_iface);
    return _ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_014_DriverDebugRequest(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, const char *pchRequest, char *pchResponseBuffer, uint32_t unResponseBufferSize)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_014_DriverDebugRequest(_this->u_iface, unDeviceIndex, pchRequest, pchResponseBuffer, unResponseBufferSize);
    return _ret;
}

EVRFirmwareError __thiscall winIVRSystem_IVRSystem_014_PerformFirmwareUpdate(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    EVRFirmwareError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_014_PerformFirmwareUpdate(_this->u_iface, unDeviceIndex);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_014_AcknowledgeQuit_Exiting(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_014_AcknowledgeQuit_Exiting(_this->u_iface);
}

void __thiscall winIVRSystem_IVRSystem_014_AcknowledgeQuit_UserPrompt(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_014_AcknowledgeQuit_UserPrompt(_this->u_iface);
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

#include "cppIVRSystem_IVRSystem_015.h"

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
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_015_GetRecommendedRenderTargetSize(_this->u_iface, pnWidth, pnHeight);
}

HmdMatrix44_t * __thiscall winIVRSystem_IVRSystem_015_GetProjectionMatrix(struct w_steam_iface *_this, HmdMatrix44_t *_ret, EVREye eEye, float fNearZ, float fFarZ)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_015_GetProjectionMatrix(_this->u_iface, eEye, fNearZ, fFarZ);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_015_GetProjectionRaw(struct w_steam_iface *_this, EVREye eEye, float *pfLeft, float *pfRight, float *pfTop, float *pfBottom)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_015_GetProjectionRaw(_this->u_iface, eEye, pfLeft, pfRight, pfTop, pfBottom);
}

bool __thiscall winIVRSystem_IVRSystem_015_ComputeDistortion(struct w_steam_iface *_this, EVREye eEye, float fU, float fV, DistortionCoordinates_t *pDistortionCoordinates)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_015_ComputeDistortion(_this->u_iface, eEye, fU, fV, pDistortionCoordinates);
    return _ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_015_GetEyeToHeadTransform(struct w_steam_iface *_this, HmdMatrix34_t *_ret, EVREye eEye)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_015_GetEyeToHeadTransform(_this->u_iface, eEye);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_015_GetTimeSinceLastVsync(struct w_steam_iface *_this, float *pfSecondsSinceLastVsync, uint64_t *pulFrameCounter)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_015_GetTimeSinceLastVsync(_this->u_iface, pfSecondsSinceLastVsync, pulFrameCounter);
    return _ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_015_GetD3D9AdapterIndex(struct w_steam_iface *_this)
{
    int32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_015_GetD3D9AdapterIndex(_this->u_iface);
    return _ret;
}

extern void __thiscall winIVRSystem_IVRSystem_015_GetDXGIOutputInfo(struct w_steam_iface *_this, int32_t *pnAdapterIndex);

bool __thiscall winIVRSystem_IVRSystem_015_IsDisplayOnDesktop(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_015_IsDisplayOnDesktop(_this->u_iface);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_015_SetDisplayVisibility(struct w_steam_iface *_this, bool bIsVisibleOnDesktop)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_015_SetDisplayVisibility(_this->u_iface, bIsVisibleOnDesktop);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_015_GetDeviceToAbsoluteTrackingPose(struct w_steam_iface *_this, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t *pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_015_GetDeviceToAbsoluteTrackingPose(_this->u_iface, eOrigin, fPredictedSecondsToPhotonsFromNow, pTrackedDevicePoseArray, unTrackedDevicePoseArrayCount);
}

void __thiscall winIVRSystem_IVRSystem_015_ResetSeatedZeroPose(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_015_ResetSeatedZeroPose(_this->u_iface);
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_015_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_015_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(_this->u_iface);
    return _ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_015_GetRawZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_015_GetRawZeroPoseToStandingAbsoluteTrackingPose(_this->u_iface);
    return _ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_015_GetSortedTrackedDeviceIndicesOfClass(struct w_steam_iface *_this, ETrackedDeviceClass eTrackedDeviceClass, TrackedDeviceIndex_t *punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_015_GetSortedTrackedDeviceIndicesOfClass(_this->u_iface, eTrackedDeviceClass, punTrackedDeviceIndexArray, unTrackedDeviceIndexArrayCount, unRelativeToTrackedDeviceIndex);
    return _ret;
}

EDeviceActivityLevel __thiscall winIVRSystem_IVRSystem_015_GetTrackedDeviceActivityLevel(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceId)
{
    EDeviceActivityLevel _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_015_GetTrackedDeviceActivityLevel(_this->u_iface, unDeviceId);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_015_ApplyTransform(struct w_steam_iface *_this, TrackedDevicePose_t *pOutputPose, const TrackedDevicePose_t *pTrackedDevicePose, const HmdMatrix34_t *pTransform)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_015_ApplyTransform(_this->u_iface, pOutputPose, pTrackedDevicePose, pTransform);
}

TrackedDeviceIndex_t __thiscall winIVRSystem_IVRSystem_015_GetTrackedDeviceIndexForControllerRole(struct w_steam_iface *_this, ETrackedControllerRole unDeviceType)
{
    TrackedDeviceIndex_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_015_GetTrackedDeviceIndexForControllerRole(_this->u_iface, unDeviceType);
    return _ret;
}

ETrackedControllerRole __thiscall winIVRSystem_IVRSystem_015_GetControllerRoleForTrackedDeviceIndex(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    ETrackedControllerRole _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_015_GetControllerRoleForTrackedDeviceIndex(_this->u_iface, unDeviceIndex);
    return _ret;
}

ETrackedDeviceClass __thiscall winIVRSystem_IVRSystem_015_GetTrackedDeviceClass(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    ETrackedDeviceClass _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_015_GetTrackedDeviceClass(_this->u_iface, unDeviceIndex);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_015_IsTrackedDeviceConnected(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_015_IsTrackedDeviceConnected(_this->u_iface, unDeviceIndex);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_015_GetBoolTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_015_GetBoolTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

float __thiscall winIVRSystem_IVRSystem_015_GetFloatTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    float _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_015_GetFloatTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_015_GetInt32TrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    int32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_015_GetInt32TrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

uint64_t __thiscall winIVRSystem_IVRSystem_015_GetUint64TrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    uint64_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_015_GetUint64TrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_015_GetMatrix34TrackedDeviceProperty(struct w_steam_iface *_this, HmdMatrix34_t *_ret, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_015_GetMatrix34TrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_015_GetStringTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, char *pchValue, uint32_t unBufferSize, ETrackedPropertyError *pError)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_015_GetStringTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pchValue, unBufferSize, pError);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_015_GetPropErrorNameFromEnum(struct w_steam_iface *_this, ETrackedPropertyError error)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_015_GetPropErrorNameFromEnum(_this->u_iface, error);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_015_PollNextEvent(struct w_steam_iface *_this, winVREvent_t_107 *pEvent, uint32_t uncbVREvent)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_015_PollNextEvent(_this->u_iface, pEvent, uncbVREvent);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_015_PollNextEventWithPose(struct w_steam_iface *_this, ETrackingUniverseOrigin eOrigin, winVREvent_t_107 *pEvent, uint32_t uncbVREvent, TrackedDevicePose_t *pTrackedDevicePose)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_015_PollNextEventWithPose(_this->u_iface, eOrigin, pEvent, uncbVREvent, pTrackedDevicePose);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_015_GetEventTypeNameFromEnum(struct w_steam_iface *_this, EVREventType eType)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_015_GetEventTypeNameFromEnum(_this->u_iface, eType);
    return _ret;
}

HiddenAreaMesh_t * __thiscall winIVRSystem_IVRSystem_015_GetHiddenAreaMesh(struct w_steam_iface *_this, HiddenAreaMesh_t *_ret, EVREye eEye, EHiddenAreaMeshType type)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_015_GetHiddenAreaMesh(_this->u_iface, eEye, type);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_015_GetControllerState(struct w_steam_iface *_this, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_107 *pControllerState, uint32_t unControllerStateSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_015_GetControllerState(_this->u_iface, unControllerDeviceIndex, pControllerState, unControllerStateSize);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_015_GetControllerStateWithPose(struct w_steam_iface *_this, ETrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_107 *pControllerState, uint32_t unControllerStateSize, TrackedDevicePose_t *pTrackedDevicePose)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_015_GetControllerStateWithPose(_this->u_iface, eOrigin, unControllerDeviceIndex, pControllerState, unControllerStateSize, pTrackedDevicePose);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_015_TriggerHapticPulse(struct w_steam_iface *_this, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_015_TriggerHapticPulse(_this->u_iface, unControllerDeviceIndex, unAxisId, usDurationMicroSec);
}

const char * __thiscall winIVRSystem_IVRSystem_015_GetButtonIdNameFromEnum(struct w_steam_iface *_this, EVRButtonId eButtonId)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_015_GetButtonIdNameFromEnum(_this->u_iface, eButtonId);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_015_GetControllerAxisTypeNameFromEnum(struct w_steam_iface *_this, EVRControllerAxisType eAxisType)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_015_GetControllerAxisTypeNameFromEnum(_this->u_iface, eAxisType);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_015_CaptureInputFocus(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_015_CaptureInputFocus(_this->u_iface);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_015_ReleaseInputFocus(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_015_ReleaseInputFocus(_this->u_iface);
}

bool __thiscall winIVRSystem_IVRSystem_015_IsInputFocusCapturedByAnotherProcess(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_015_IsInputFocusCapturedByAnotherProcess(_this->u_iface);
    return _ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_015_DriverDebugRequest(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, const char *pchRequest, char *pchResponseBuffer, uint32_t unResponseBufferSize)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_015_DriverDebugRequest(_this->u_iface, unDeviceIndex, pchRequest, pchResponseBuffer, unResponseBufferSize);
    return _ret;
}

EVRFirmwareError __thiscall winIVRSystem_IVRSystem_015_PerformFirmwareUpdate(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    EVRFirmwareError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_015_PerformFirmwareUpdate(_this->u_iface, unDeviceIndex);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_015_AcknowledgeQuit_Exiting(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_015_AcknowledgeQuit_Exiting(_this->u_iface);
}

void __thiscall winIVRSystem_IVRSystem_015_AcknowledgeQuit_UserPrompt(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_015_AcknowledgeQuit_UserPrompt(_this->u_iface);
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

#include "cppIVRSystem_IVRSystem_016.h"

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
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_016_GetRecommendedRenderTargetSize(_this->u_iface, pnWidth, pnHeight);
}

HmdMatrix44_t * __thiscall winIVRSystem_IVRSystem_016_GetProjectionMatrix(struct w_steam_iface *_this, HmdMatrix44_t *_ret, EVREye eEye, float fNearZ, float fFarZ)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_016_GetProjectionMatrix(_this->u_iface, eEye, fNearZ, fFarZ);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_016_GetProjectionRaw(struct w_steam_iface *_this, EVREye eEye, float *pfLeft, float *pfRight, float *pfTop, float *pfBottom)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_016_GetProjectionRaw(_this->u_iface, eEye, pfLeft, pfRight, pfTop, pfBottom);
}

bool __thiscall winIVRSystem_IVRSystem_016_ComputeDistortion(struct w_steam_iface *_this, EVREye eEye, float fU, float fV, DistortionCoordinates_t *pDistortionCoordinates)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_016_ComputeDistortion(_this->u_iface, eEye, fU, fV, pDistortionCoordinates);
    return _ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_016_GetEyeToHeadTransform(struct w_steam_iface *_this, HmdMatrix34_t *_ret, EVREye eEye)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_016_GetEyeToHeadTransform(_this->u_iface, eEye);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_016_GetTimeSinceLastVsync(struct w_steam_iface *_this, float *pfSecondsSinceLastVsync, uint64_t *pulFrameCounter)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_016_GetTimeSinceLastVsync(_this->u_iface, pfSecondsSinceLastVsync, pulFrameCounter);
    return _ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_016_GetD3D9AdapterIndex(struct w_steam_iface *_this)
{
    int32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_016_GetD3D9AdapterIndex(_this->u_iface);
    return _ret;
}

extern void __thiscall winIVRSystem_IVRSystem_016_GetDXGIOutputInfo(struct w_steam_iface *_this, int32_t *pnAdapterIndex);

void __thiscall winIVRSystem_IVRSystem_016_GetOutputDevice(struct w_steam_iface *_this, uint64_t *pnDevice, ETextureType textureType)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_016_GetOutputDevice(_this->u_iface, pnDevice, textureType);
}

bool __thiscall winIVRSystem_IVRSystem_016_IsDisplayOnDesktop(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_016_IsDisplayOnDesktop(_this->u_iface);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_016_SetDisplayVisibility(struct w_steam_iface *_this, bool bIsVisibleOnDesktop)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_016_SetDisplayVisibility(_this->u_iface, bIsVisibleOnDesktop);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_016_GetDeviceToAbsoluteTrackingPose(struct w_steam_iface *_this, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t *pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_016_GetDeviceToAbsoluteTrackingPose(_this->u_iface, eOrigin, fPredictedSecondsToPhotonsFromNow, pTrackedDevicePoseArray, unTrackedDevicePoseArrayCount);
}

void __thiscall winIVRSystem_IVRSystem_016_ResetSeatedZeroPose(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_016_ResetSeatedZeroPose(_this->u_iface);
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_016_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_016_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(_this->u_iface);
    return _ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_016_GetRawZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_016_GetRawZeroPoseToStandingAbsoluteTrackingPose(_this->u_iface);
    return _ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_016_GetSortedTrackedDeviceIndicesOfClass(struct w_steam_iface *_this, ETrackedDeviceClass eTrackedDeviceClass, TrackedDeviceIndex_t *punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_016_GetSortedTrackedDeviceIndicesOfClass(_this->u_iface, eTrackedDeviceClass, punTrackedDeviceIndexArray, unTrackedDeviceIndexArrayCount, unRelativeToTrackedDeviceIndex);
    return _ret;
}

EDeviceActivityLevel __thiscall winIVRSystem_IVRSystem_016_GetTrackedDeviceActivityLevel(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceId)
{
    EDeviceActivityLevel _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_016_GetTrackedDeviceActivityLevel(_this->u_iface, unDeviceId);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_016_ApplyTransform(struct w_steam_iface *_this, TrackedDevicePose_t *pOutputPose, const TrackedDevicePose_t *pTrackedDevicePose, const HmdMatrix34_t *pTransform)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_016_ApplyTransform(_this->u_iface, pOutputPose, pTrackedDevicePose, pTransform);
}

TrackedDeviceIndex_t __thiscall winIVRSystem_IVRSystem_016_GetTrackedDeviceIndexForControllerRole(struct w_steam_iface *_this, ETrackedControllerRole unDeviceType)
{
    TrackedDeviceIndex_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_016_GetTrackedDeviceIndexForControllerRole(_this->u_iface, unDeviceType);
    return _ret;
}

ETrackedControllerRole __thiscall winIVRSystem_IVRSystem_016_GetControllerRoleForTrackedDeviceIndex(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    ETrackedControllerRole _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_016_GetControllerRoleForTrackedDeviceIndex(_this->u_iface, unDeviceIndex);
    return _ret;
}

ETrackedDeviceClass __thiscall winIVRSystem_IVRSystem_016_GetTrackedDeviceClass(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    ETrackedDeviceClass _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_016_GetTrackedDeviceClass(_this->u_iface, unDeviceIndex);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_016_IsTrackedDeviceConnected(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_016_IsTrackedDeviceConnected(_this->u_iface, unDeviceIndex);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_016_GetBoolTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_016_GetBoolTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

float __thiscall winIVRSystem_IVRSystem_016_GetFloatTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    float _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_016_GetFloatTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_016_GetInt32TrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    int32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_016_GetInt32TrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

uint64_t __thiscall winIVRSystem_IVRSystem_016_GetUint64TrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    uint64_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_016_GetUint64TrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_016_GetMatrix34TrackedDeviceProperty(struct w_steam_iface *_this, HmdMatrix34_t *_ret, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_016_GetMatrix34TrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_016_GetStringTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, char *pchValue, uint32_t unBufferSize, ETrackedPropertyError *pError)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_016_GetStringTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pchValue, unBufferSize, pError);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_016_GetPropErrorNameFromEnum(struct w_steam_iface *_this, ETrackedPropertyError error)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_016_GetPropErrorNameFromEnum(_this->u_iface, error);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_016_PollNextEvent(struct w_steam_iface *_this, winVREvent_t_109 *pEvent, uint32_t uncbVREvent)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_016_PollNextEvent(_this->u_iface, pEvent, uncbVREvent);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_016_PollNextEventWithPose(struct w_steam_iface *_this, ETrackingUniverseOrigin eOrigin, winVREvent_t_109 *pEvent, uint32_t uncbVREvent, TrackedDevicePose_t *pTrackedDevicePose)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_016_PollNextEventWithPose(_this->u_iface, eOrigin, pEvent, uncbVREvent, pTrackedDevicePose);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_016_GetEventTypeNameFromEnum(struct w_steam_iface *_this, EVREventType eType)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_016_GetEventTypeNameFromEnum(_this->u_iface, eType);
    return _ret;
}

HiddenAreaMesh_t * __thiscall winIVRSystem_IVRSystem_016_GetHiddenAreaMesh(struct w_steam_iface *_this, HiddenAreaMesh_t *_ret, EVREye eEye, EHiddenAreaMeshType type)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_016_GetHiddenAreaMesh(_this->u_iface, eEye, type);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_016_GetControllerState(struct w_steam_iface *_this, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_109 *pControllerState, uint32_t unControllerStateSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_016_GetControllerState(_this->u_iface, unControllerDeviceIndex, pControllerState, unControllerStateSize);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_016_GetControllerStateWithPose(struct w_steam_iface *_this, ETrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_109 *pControllerState, uint32_t unControllerStateSize, TrackedDevicePose_t *pTrackedDevicePose)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_016_GetControllerStateWithPose(_this->u_iface, eOrigin, unControllerDeviceIndex, pControllerState, unControllerStateSize, pTrackedDevicePose);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_016_TriggerHapticPulse(struct w_steam_iface *_this, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_016_TriggerHapticPulse(_this->u_iface, unControllerDeviceIndex, unAxisId, usDurationMicroSec);
}

const char * __thiscall winIVRSystem_IVRSystem_016_GetButtonIdNameFromEnum(struct w_steam_iface *_this, EVRButtonId eButtonId)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_016_GetButtonIdNameFromEnum(_this->u_iface, eButtonId);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_016_GetControllerAxisTypeNameFromEnum(struct w_steam_iface *_this, EVRControllerAxisType eAxisType)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_016_GetControllerAxisTypeNameFromEnum(_this->u_iface, eAxisType);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_016_CaptureInputFocus(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_016_CaptureInputFocus(_this->u_iface);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_016_ReleaseInputFocus(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_016_ReleaseInputFocus(_this->u_iface);
}

bool __thiscall winIVRSystem_IVRSystem_016_IsInputFocusCapturedByAnotherProcess(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_016_IsInputFocusCapturedByAnotherProcess(_this->u_iface);
    return _ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_016_DriverDebugRequest(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, const char *pchRequest, char *pchResponseBuffer, uint32_t unResponseBufferSize)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_016_DriverDebugRequest(_this->u_iface, unDeviceIndex, pchRequest, pchResponseBuffer, unResponseBufferSize);
    return _ret;
}

EVRFirmwareError __thiscall winIVRSystem_IVRSystem_016_PerformFirmwareUpdate(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    EVRFirmwareError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_016_PerformFirmwareUpdate(_this->u_iface, unDeviceIndex);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_016_AcknowledgeQuit_Exiting(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_016_AcknowledgeQuit_Exiting(_this->u_iface);
}

void __thiscall winIVRSystem_IVRSystem_016_AcknowledgeQuit_UserPrompt(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_016_AcknowledgeQuit_UserPrompt(_this->u_iface);
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

#include "cppIVRSystem_IVRSystem_017.h"

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
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_017_GetRecommendedRenderTargetSize(_this->u_iface, pnWidth, pnHeight);
}

HmdMatrix44_t * __thiscall winIVRSystem_IVRSystem_017_GetProjectionMatrix(struct w_steam_iface *_this, HmdMatrix44_t *_ret, EVREye eEye, float fNearZ, float fFarZ)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_017_GetProjectionMatrix(_this->u_iface, eEye, fNearZ, fFarZ);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_017_GetProjectionRaw(struct w_steam_iface *_this, EVREye eEye, float *pfLeft, float *pfRight, float *pfTop, float *pfBottom)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_017_GetProjectionRaw(_this->u_iface, eEye, pfLeft, pfRight, pfTop, pfBottom);
}

bool __thiscall winIVRSystem_IVRSystem_017_ComputeDistortion(struct w_steam_iface *_this, EVREye eEye, float fU, float fV, DistortionCoordinates_t *pDistortionCoordinates)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_017_ComputeDistortion(_this->u_iface, eEye, fU, fV, pDistortionCoordinates);
    return _ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_017_GetEyeToHeadTransform(struct w_steam_iface *_this, HmdMatrix34_t *_ret, EVREye eEye)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_017_GetEyeToHeadTransform(_this->u_iface, eEye);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_017_GetTimeSinceLastVsync(struct w_steam_iface *_this, float *pfSecondsSinceLastVsync, uint64_t *pulFrameCounter)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_017_GetTimeSinceLastVsync(_this->u_iface, pfSecondsSinceLastVsync, pulFrameCounter);
    return _ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_017_GetD3D9AdapterIndex(struct w_steam_iface *_this)
{
    int32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_017_GetD3D9AdapterIndex(_this->u_iface);
    return _ret;
}

extern void __thiscall winIVRSystem_IVRSystem_017_GetDXGIOutputInfo(struct w_steam_iface *_this, int32_t *pnAdapterIndex);

extern void __thiscall winIVRSystem_IVRSystem_017_GetOutputDevice(struct w_steam_iface *_this, uint64_t *pnDevice, ETextureType textureType, VkInstance_T *pInstance);

bool __thiscall winIVRSystem_IVRSystem_017_IsDisplayOnDesktop(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_017_IsDisplayOnDesktop(_this->u_iface);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_017_SetDisplayVisibility(struct w_steam_iface *_this, bool bIsVisibleOnDesktop)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_017_SetDisplayVisibility(_this->u_iface, bIsVisibleOnDesktop);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_017_GetDeviceToAbsoluteTrackingPose(struct w_steam_iface *_this, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t *pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_017_GetDeviceToAbsoluteTrackingPose(_this->u_iface, eOrigin, fPredictedSecondsToPhotonsFromNow, pTrackedDevicePoseArray, unTrackedDevicePoseArrayCount);
}

void __thiscall winIVRSystem_IVRSystem_017_ResetSeatedZeroPose(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_017_ResetSeatedZeroPose(_this->u_iface);
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_017_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_017_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(_this->u_iface);
    return _ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_017_GetRawZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_017_GetRawZeroPoseToStandingAbsoluteTrackingPose(_this->u_iface);
    return _ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_017_GetSortedTrackedDeviceIndicesOfClass(struct w_steam_iface *_this, ETrackedDeviceClass eTrackedDeviceClass, TrackedDeviceIndex_t *punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_017_GetSortedTrackedDeviceIndicesOfClass(_this->u_iface, eTrackedDeviceClass, punTrackedDeviceIndexArray, unTrackedDeviceIndexArrayCount, unRelativeToTrackedDeviceIndex);
    return _ret;
}

EDeviceActivityLevel __thiscall winIVRSystem_IVRSystem_017_GetTrackedDeviceActivityLevel(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceId)
{
    EDeviceActivityLevel _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_017_GetTrackedDeviceActivityLevel(_this->u_iface, unDeviceId);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_017_ApplyTransform(struct w_steam_iface *_this, TrackedDevicePose_t *pOutputPose, const TrackedDevicePose_t *pTrackedDevicePose, const HmdMatrix34_t *pTransform)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_017_ApplyTransform(_this->u_iface, pOutputPose, pTrackedDevicePose, pTransform);
}

TrackedDeviceIndex_t __thiscall winIVRSystem_IVRSystem_017_GetTrackedDeviceIndexForControllerRole(struct w_steam_iface *_this, ETrackedControllerRole unDeviceType)
{
    TrackedDeviceIndex_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_017_GetTrackedDeviceIndexForControllerRole(_this->u_iface, unDeviceType);
    return _ret;
}

ETrackedControllerRole __thiscall winIVRSystem_IVRSystem_017_GetControllerRoleForTrackedDeviceIndex(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    ETrackedControllerRole _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_017_GetControllerRoleForTrackedDeviceIndex(_this->u_iface, unDeviceIndex);
    return _ret;
}

ETrackedDeviceClass __thiscall winIVRSystem_IVRSystem_017_GetTrackedDeviceClass(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    ETrackedDeviceClass _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_017_GetTrackedDeviceClass(_this->u_iface, unDeviceIndex);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_017_IsTrackedDeviceConnected(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_017_IsTrackedDeviceConnected(_this->u_iface, unDeviceIndex);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_017_GetBoolTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_017_GetBoolTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

float __thiscall winIVRSystem_IVRSystem_017_GetFloatTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    float _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_017_GetFloatTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_017_GetInt32TrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    int32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_017_GetInt32TrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

uint64_t __thiscall winIVRSystem_IVRSystem_017_GetUint64TrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    uint64_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_017_GetUint64TrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_017_GetMatrix34TrackedDeviceProperty(struct w_steam_iface *_this, HmdMatrix34_t *_ret, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_017_GetMatrix34TrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_017_GetStringTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, char *pchValue, uint32_t unBufferSize, ETrackedPropertyError *pError)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_017_GetStringTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pchValue, unBufferSize, pError);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_017_GetPropErrorNameFromEnum(struct w_steam_iface *_this, ETrackedPropertyError error)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_017_GetPropErrorNameFromEnum(_this->u_iface, error);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_017_PollNextEvent(struct w_steam_iface *_this, winVREvent_t_1011 *pEvent, uint32_t uncbVREvent)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_017_PollNextEvent(_this->u_iface, pEvent, uncbVREvent);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_017_PollNextEventWithPose(struct w_steam_iface *_this, ETrackingUniverseOrigin eOrigin, winVREvent_t_1011 *pEvent, uint32_t uncbVREvent, TrackedDevicePose_t *pTrackedDevicePose)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_017_PollNextEventWithPose(_this->u_iface, eOrigin, pEvent, uncbVREvent, pTrackedDevicePose);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_017_GetEventTypeNameFromEnum(struct w_steam_iface *_this, EVREventType eType)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_017_GetEventTypeNameFromEnum(_this->u_iface, eType);
    return _ret;
}

HiddenAreaMesh_t * __thiscall winIVRSystem_IVRSystem_017_GetHiddenAreaMesh(struct w_steam_iface *_this, HiddenAreaMesh_t *_ret, EVREye eEye, EHiddenAreaMeshType type)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_017_GetHiddenAreaMesh(_this->u_iface, eEye, type);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_017_GetControllerState(struct w_steam_iface *_this, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_1011 *pControllerState, uint32_t unControllerStateSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_017_GetControllerState(_this->u_iface, unControllerDeviceIndex, pControllerState, unControllerStateSize);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_017_GetControllerStateWithPose(struct w_steam_iface *_this, ETrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_1011 *pControllerState, uint32_t unControllerStateSize, TrackedDevicePose_t *pTrackedDevicePose)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_017_GetControllerStateWithPose(_this->u_iface, eOrigin, unControllerDeviceIndex, pControllerState, unControllerStateSize, pTrackedDevicePose);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_017_TriggerHapticPulse(struct w_steam_iface *_this, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_017_TriggerHapticPulse(_this->u_iface, unControllerDeviceIndex, unAxisId, usDurationMicroSec);
}

const char * __thiscall winIVRSystem_IVRSystem_017_GetButtonIdNameFromEnum(struct w_steam_iface *_this, EVRButtonId eButtonId)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_017_GetButtonIdNameFromEnum(_this->u_iface, eButtonId);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_017_GetControllerAxisTypeNameFromEnum(struct w_steam_iface *_this, EVRControllerAxisType eAxisType)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_017_GetControllerAxisTypeNameFromEnum(_this->u_iface, eAxisType);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_017_CaptureInputFocus(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_017_CaptureInputFocus(_this->u_iface);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_017_ReleaseInputFocus(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_017_ReleaseInputFocus(_this->u_iface);
}

bool __thiscall winIVRSystem_IVRSystem_017_IsInputFocusCapturedByAnotherProcess(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_017_IsInputFocusCapturedByAnotherProcess(_this->u_iface);
    return _ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_017_DriverDebugRequest(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, const char *pchRequest, char *pchResponseBuffer, uint32_t unResponseBufferSize)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_017_DriverDebugRequest(_this->u_iface, unDeviceIndex, pchRequest, pchResponseBuffer, unResponseBufferSize);
    return _ret;
}

EVRFirmwareError __thiscall winIVRSystem_IVRSystem_017_PerformFirmwareUpdate(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    EVRFirmwareError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_017_PerformFirmwareUpdate(_this->u_iface, unDeviceIndex);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_017_AcknowledgeQuit_Exiting(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_017_AcknowledgeQuit_Exiting(_this->u_iface);
}

void __thiscall winIVRSystem_IVRSystem_017_AcknowledgeQuit_UserPrompt(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_017_AcknowledgeQuit_UserPrompt(_this->u_iface);
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

#include "cppIVRSystem_IVRSystem_019.h"

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
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_019_GetRecommendedRenderTargetSize(_this->u_iface, pnWidth, pnHeight);
}

HmdMatrix44_t * __thiscall winIVRSystem_IVRSystem_019_GetProjectionMatrix(struct w_steam_iface *_this, HmdMatrix44_t *_ret, EVREye eEye, float fNearZ, float fFarZ)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_019_GetProjectionMatrix(_this->u_iface, eEye, fNearZ, fFarZ);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_019_GetProjectionRaw(struct w_steam_iface *_this, EVREye eEye, float *pfLeft, float *pfRight, float *pfTop, float *pfBottom)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_019_GetProjectionRaw(_this->u_iface, eEye, pfLeft, pfRight, pfTop, pfBottom);
}

bool __thiscall winIVRSystem_IVRSystem_019_ComputeDistortion(struct w_steam_iface *_this, EVREye eEye, float fU, float fV, DistortionCoordinates_t *pDistortionCoordinates)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_019_ComputeDistortion(_this->u_iface, eEye, fU, fV, pDistortionCoordinates);
    return _ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_019_GetEyeToHeadTransform(struct w_steam_iface *_this, HmdMatrix34_t *_ret, EVREye eEye)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_019_GetEyeToHeadTransform(_this->u_iface, eEye);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_019_GetTimeSinceLastVsync(struct w_steam_iface *_this, float *pfSecondsSinceLastVsync, uint64_t *pulFrameCounter)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_019_GetTimeSinceLastVsync(_this->u_iface, pfSecondsSinceLastVsync, pulFrameCounter);
    return _ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_019_GetD3D9AdapterIndex(struct w_steam_iface *_this)
{
    int32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_019_GetD3D9AdapterIndex(_this->u_iface);
    return _ret;
}

extern void __thiscall winIVRSystem_IVRSystem_019_GetDXGIOutputInfo(struct w_steam_iface *_this, int32_t *pnAdapterIndex);

extern void __thiscall winIVRSystem_IVRSystem_019_GetOutputDevice(struct w_steam_iface *_this, uint64_t *pnDevice, ETextureType textureType, VkInstance_T *pInstance);

bool __thiscall winIVRSystem_IVRSystem_019_IsDisplayOnDesktop(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_019_IsDisplayOnDesktop(_this->u_iface);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_019_SetDisplayVisibility(struct w_steam_iface *_this, bool bIsVisibleOnDesktop)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_019_SetDisplayVisibility(_this->u_iface, bIsVisibleOnDesktop);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_019_GetDeviceToAbsoluteTrackingPose(struct w_steam_iface *_this, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t *pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_019_GetDeviceToAbsoluteTrackingPose(_this->u_iface, eOrigin, fPredictedSecondsToPhotonsFromNow, pTrackedDevicePoseArray, unTrackedDevicePoseArrayCount);
}

void __thiscall winIVRSystem_IVRSystem_019_ResetSeatedZeroPose(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_019_ResetSeatedZeroPose(_this->u_iface);
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_019_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_019_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(_this->u_iface);
    return _ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_019_GetRawZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_019_GetRawZeroPoseToStandingAbsoluteTrackingPose(_this->u_iface);
    return _ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_019_GetSortedTrackedDeviceIndicesOfClass(struct w_steam_iface *_this, ETrackedDeviceClass eTrackedDeviceClass, TrackedDeviceIndex_t *punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_019_GetSortedTrackedDeviceIndicesOfClass(_this->u_iface, eTrackedDeviceClass, punTrackedDeviceIndexArray, unTrackedDeviceIndexArrayCount, unRelativeToTrackedDeviceIndex);
    return _ret;
}

EDeviceActivityLevel __thiscall winIVRSystem_IVRSystem_019_GetTrackedDeviceActivityLevel(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceId)
{
    EDeviceActivityLevel _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_019_GetTrackedDeviceActivityLevel(_this->u_iface, unDeviceId);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_019_ApplyTransform(struct w_steam_iface *_this, TrackedDevicePose_t *pOutputPose, const TrackedDevicePose_t *pTrackedDevicePose, const HmdMatrix34_t *pTransform)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_019_ApplyTransform(_this->u_iface, pOutputPose, pTrackedDevicePose, pTransform);
}

TrackedDeviceIndex_t __thiscall winIVRSystem_IVRSystem_019_GetTrackedDeviceIndexForControllerRole(struct w_steam_iface *_this, ETrackedControllerRole unDeviceType)
{
    TrackedDeviceIndex_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_019_GetTrackedDeviceIndexForControllerRole(_this->u_iface, unDeviceType);
    return _ret;
}

ETrackedControllerRole __thiscall winIVRSystem_IVRSystem_019_GetControllerRoleForTrackedDeviceIndex(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    ETrackedControllerRole _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_019_GetControllerRoleForTrackedDeviceIndex(_this->u_iface, unDeviceIndex);
    return _ret;
}

ETrackedDeviceClass __thiscall winIVRSystem_IVRSystem_019_GetTrackedDeviceClass(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    ETrackedDeviceClass _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_019_GetTrackedDeviceClass(_this->u_iface, unDeviceIndex);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_019_IsTrackedDeviceConnected(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_019_IsTrackedDeviceConnected(_this->u_iface, unDeviceIndex);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_019_GetBoolTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_019_GetBoolTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

float __thiscall winIVRSystem_IVRSystem_019_GetFloatTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    float _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_019_GetFloatTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_019_GetInt32TrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    int32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_019_GetInt32TrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

uint64_t __thiscall winIVRSystem_IVRSystem_019_GetUint64TrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    uint64_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_019_GetUint64TrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_019_GetMatrix34TrackedDeviceProperty(struct w_steam_iface *_this, HmdMatrix34_t *_ret, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_019_GetMatrix34TrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_019_GetArrayTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, PropertyTypeTag_t propType, void *pBuffer, uint32_t unBufferSize, ETrackedPropertyError *pError)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_019_GetArrayTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, propType, pBuffer, unBufferSize, pError);
    return _ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_019_GetStringTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, char *pchValue, uint32_t unBufferSize, ETrackedPropertyError *pError)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_019_GetStringTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pchValue, unBufferSize, pError);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_019_GetPropErrorNameFromEnum(struct w_steam_iface *_this, ETrackedPropertyError error)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_019_GetPropErrorNameFromEnum(_this->u_iface, error);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_019_PollNextEvent(struct w_steam_iface *_this, winVREvent_t_1418 *pEvent, uint32_t uncbVREvent)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_019_PollNextEvent(_this->u_iface, pEvent, uncbVREvent);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_019_PollNextEventWithPose(struct w_steam_iface *_this, ETrackingUniverseOrigin eOrigin, winVREvent_t_1418 *pEvent, uint32_t uncbVREvent, TrackedDevicePose_t *pTrackedDevicePose)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_019_PollNextEventWithPose(_this->u_iface, eOrigin, pEvent, uncbVREvent, pTrackedDevicePose);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_019_GetEventTypeNameFromEnum(struct w_steam_iface *_this, EVREventType eType)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_019_GetEventTypeNameFromEnum(_this->u_iface, eType);
    return _ret;
}

HiddenAreaMesh_t * __thiscall winIVRSystem_IVRSystem_019_GetHiddenAreaMesh(struct w_steam_iface *_this, HiddenAreaMesh_t *_ret, EVREye eEye, EHiddenAreaMeshType type)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_019_GetHiddenAreaMesh(_this->u_iface, eEye, type);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_019_GetControllerState(struct w_steam_iface *_this, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_1418 *pControllerState, uint32_t unControllerStateSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_019_GetControllerState(_this->u_iface, unControllerDeviceIndex, pControllerState, unControllerStateSize);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_019_GetControllerStateWithPose(struct w_steam_iface *_this, ETrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_1418 *pControllerState, uint32_t unControllerStateSize, TrackedDevicePose_t *pTrackedDevicePose)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_019_GetControllerStateWithPose(_this->u_iface, eOrigin, unControllerDeviceIndex, pControllerState, unControllerStateSize, pTrackedDevicePose);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_019_TriggerHapticPulse(struct w_steam_iface *_this, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_019_TriggerHapticPulse(_this->u_iface, unControllerDeviceIndex, unAxisId, usDurationMicroSec);
}

const char * __thiscall winIVRSystem_IVRSystem_019_GetButtonIdNameFromEnum(struct w_steam_iface *_this, EVRButtonId eButtonId)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_019_GetButtonIdNameFromEnum(_this->u_iface, eButtonId);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_019_GetControllerAxisTypeNameFromEnum(struct w_steam_iface *_this, EVRControllerAxisType eAxisType)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_019_GetControllerAxisTypeNameFromEnum(_this->u_iface, eAxisType);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_019_IsInputAvailable(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_019_IsInputAvailable(_this->u_iface);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_019_IsSteamVRDrawingControllers(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_019_IsSteamVRDrawingControllers(_this->u_iface);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_019_ShouldApplicationPause(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_019_ShouldApplicationPause(_this->u_iface);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_019_ShouldApplicationReduceRenderingWork(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_019_ShouldApplicationReduceRenderingWork(_this->u_iface);
    return _ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_019_DriverDebugRequest(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, const char *pchRequest, char *pchResponseBuffer, uint32_t unResponseBufferSize)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_019_DriverDebugRequest(_this->u_iface, unDeviceIndex, pchRequest, pchResponseBuffer, unResponseBufferSize);
    return _ret;
}

EVRFirmwareError __thiscall winIVRSystem_IVRSystem_019_PerformFirmwareUpdate(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    EVRFirmwareError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_019_PerformFirmwareUpdate(_this->u_iface, unDeviceIndex);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_019_AcknowledgeQuit_Exiting(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_019_AcknowledgeQuit_Exiting(_this->u_iface);
}

void __thiscall winIVRSystem_IVRSystem_019_AcknowledgeQuit_UserPrompt(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_019_AcknowledgeQuit_UserPrompt(_this->u_iface);
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

#include "cppIVRSystem_IVRSystem_020.h"

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
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_020_GetRecommendedRenderTargetSize(_this->u_iface, pnWidth, pnHeight);
}

HmdMatrix44_t * __thiscall winIVRSystem_IVRSystem_020_GetProjectionMatrix(struct w_steam_iface *_this, HmdMatrix44_t *_ret, EVREye eEye, float fNearZ, float fFarZ)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_020_GetProjectionMatrix(_this->u_iface, eEye, fNearZ, fFarZ);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_020_GetProjectionRaw(struct w_steam_iface *_this, EVREye eEye, float *pfLeft, float *pfRight, float *pfTop, float *pfBottom)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_020_GetProjectionRaw(_this->u_iface, eEye, pfLeft, pfRight, pfTop, pfBottom);
}

bool __thiscall winIVRSystem_IVRSystem_020_ComputeDistortion(struct w_steam_iface *_this, EVREye eEye, float fU, float fV, DistortionCoordinates_t *pDistortionCoordinates)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_020_ComputeDistortion(_this->u_iface, eEye, fU, fV, pDistortionCoordinates);
    return _ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_020_GetEyeToHeadTransform(struct w_steam_iface *_this, HmdMatrix34_t *_ret, EVREye eEye)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_020_GetEyeToHeadTransform(_this->u_iface, eEye);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_020_GetTimeSinceLastVsync(struct w_steam_iface *_this, float *pfSecondsSinceLastVsync, uint64_t *pulFrameCounter)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_020_GetTimeSinceLastVsync(_this->u_iface, pfSecondsSinceLastVsync, pulFrameCounter);
    return _ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_020_GetD3D9AdapterIndex(struct w_steam_iface *_this)
{
    int32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_020_GetD3D9AdapterIndex(_this->u_iface);
    return _ret;
}

extern void __thiscall winIVRSystem_IVRSystem_020_GetDXGIOutputInfo(struct w_steam_iface *_this, int32_t *pnAdapterIndex);

extern void __thiscall winIVRSystem_IVRSystem_020_GetOutputDevice(struct w_steam_iface *_this, uint64_t *pnDevice, ETextureType textureType, VkInstance_T *pInstance);

bool __thiscall winIVRSystem_IVRSystem_020_IsDisplayOnDesktop(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_020_IsDisplayOnDesktop(_this->u_iface);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_020_SetDisplayVisibility(struct w_steam_iface *_this, bool bIsVisibleOnDesktop)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_020_SetDisplayVisibility(_this->u_iface, bIsVisibleOnDesktop);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_020_GetDeviceToAbsoluteTrackingPose(struct w_steam_iface *_this, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t *pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_020_GetDeviceToAbsoluteTrackingPose(_this->u_iface, eOrigin, fPredictedSecondsToPhotonsFromNow, pTrackedDevicePoseArray, unTrackedDevicePoseArrayCount);
}

void __thiscall winIVRSystem_IVRSystem_020_ResetSeatedZeroPose(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_020_ResetSeatedZeroPose(_this->u_iface);
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_020_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_020_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(_this->u_iface);
    return _ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_020_GetRawZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_020_GetRawZeroPoseToStandingAbsoluteTrackingPose(_this->u_iface);
    return _ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_020_GetSortedTrackedDeviceIndicesOfClass(struct w_steam_iface *_this, ETrackedDeviceClass eTrackedDeviceClass, TrackedDeviceIndex_t *punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_020_GetSortedTrackedDeviceIndicesOfClass(_this->u_iface, eTrackedDeviceClass, punTrackedDeviceIndexArray, unTrackedDeviceIndexArrayCount, unRelativeToTrackedDeviceIndex);
    return _ret;
}

EDeviceActivityLevel __thiscall winIVRSystem_IVRSystem_020_GetTrackedDeviceActivityLevel(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceId)
{
    EDeviceActivityLevel _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_020_GetTrackedDeviceActivityLevel(_this->u_iface, unDeviceId);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_020_ApplyTransform(struct w_steam_iface *_this, TrackedDevicePose_t *pOutputPose, const TrackedDevicePose_t *pTrackedDevicePose, const HmdMatrix34_t *pTransform)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_020_ApplyTransform(_this->u_iface, pOutputPose, pTrackedDevicePose, pTransform);
}

TrackedDeviceIndex_t __thiscall winIVRSystem_IVRSystem_020_GetTrackedDeviceIndexForControllerRole(struct w_steam_iface *_this, ETrackedControllerRole unDeviceType)
{
    TrackedDeviceIndex_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_020_GetTrackedDeviceIndexForControllerRole(_this->u_iface, unDeviceType);
    return _ret;
}

ETrackedControllerRole __thiscall winIVRSystem_IVRSystem_020_GetControllerRoleForTrackedDeviceIndex(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    ETrackedControllerRole _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_020_GetControllerRoleForTrackedDeviceIndex(_this->u_iface, unDeviceIndex);
    return _ret;
}

ETrackedDeviceClass __thiscall winIVRSystem_IVRSystem_020_GetTrackedDeviceClass(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    ETrackedDeviceClass _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_020_GetTrackedDeviceClass(_this->u_iface, unDeviceIndex);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_020_IsTrackedDeviceConnected(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_020_IsTrackedDeviceConnected(_this->u_iface, unDeviceIndex);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_020_GetBoolTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_020_GetBoolTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

float __thiscall winIVRSystem_IVRSystem_020_GetFloatTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    float _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_020_GetFloatTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_020_GetInt32TrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    int32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_020_GetInt32TrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

uint64_t __thiscall winIVRSystem_IVRSystem_020_GetUint64TrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    uint64_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_020_GetUint64TrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_020_GetMatrix34TrackedDeviceProperty(struct w_steam_iface *_this, HmdMatrix34_t *_ret, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_020_GetMatrix34TrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_020_GetArrayTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, PropertyTypeTag_t propType, void *pBuffer, uint32_t unBufferSize, ETrackedPropertyError *pError)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_020_GetArrayTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, propType, pBuffer, unBufferSize, pError);
    return _ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_020_GetStringTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, char *pchValue, uint32_t unBufferSize, ETrackedPropertyError *pError)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_020_GetStringTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pchValue, unBufferSize, pError);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_020_GetPropErrorNameFromEnum(struct w_steam_iface *_this, ETrackedPropertyError error)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_020_GetPropErrorNameFromEnum(_this->u_iface, error);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_020_PollNextEvent(struct w_steam_iface *_this, winVREvent_t_1715 *pEvent, uint32_t uncbVREvent)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_020_PollNextEvent(_this->u_iface, pEvent, uncbVREvent);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_020_PollNextEventWithPose(struct w_steam_iface *_this, ETrackingUniverseOrigin eOrigin, winVREvent_t_1715 *pEvent, uint32_t uncbVREvent, TrackedDevicePose_t *pTrackedDevicePose)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_020_PollNextEventWithPose(_this->u_iface, eOrigin, pEvent, uncbVREvent, pTrackedDevicePose);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_020_GetEventTypeNameFromEnum(struct w_steam_iface *_this, EVREventType eType)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_020_GetEventTypeNameFromEnum(_this->u_iface, eType);
    return _ret;
}

HiddenAreaMesh_t * __thiscall winIVRSystem_IVRSystem_020_GetHiddenAreaMesh(struct w_steam_iface *_this, HiddenAreaMesh_t *_ret, EVREye eEye, EHiddenAreaMeshType type)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_020_GetHiddenAreaMesh(_this->u_iface, eEye, type);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_020_GetControllerState(struct w_steam_iface *_this, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_1715 *pControllerState, uint32_t unControllerStateSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_020_GetControllerState(_this->u_iface, unControllerDeviceIndex, pControllerState, unControllerStateSize);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_020_GetControllerStateWithPose(struct w_steam_iface *_this, ETrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_1715 *pControllerState, uint32_t unControllerStateSize, TrackedDevicePose_t *pTrackedDevicePose)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_020_GetControllerStateWithPose(_this->u_iface, eOrigin, unControllerDeviceIndex, pControllerState, unControllerStateSize, pTrackedDevicePose);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_020_TriggerHapticPulse(struct w_steam_iface *_this, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_020_TriggerHapticPulse(_this->u_iface, unControllerDeviceIndex, unAxisId, usDurationMicroSec);
}

const char * __thiscall winIVRSystem_IVRSystem_020_GetButtonIdNameFromEnum(struct w_steam_iface *_this, EVRButtonId eButtonId)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_020_GetButtonIdNameFromEnum(_this->u_iface, eButtonId);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_020_GetControllerAxisTypeNameFromEnum(struct w_steam_iface *_this, EVRControllerAxisType eAxisType)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_020_GetControllerAxisTypeNameFromEnum(_this->u_iface, eAxisType);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_020_IsInputAvailable(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_020_IsInputAvailable(_this->u_iface);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_020_IsSteamVRDrawingControllers(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_020_IsSteamVRDrawingControllers(_this->u_iface);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_020_ShouldApplicationPause(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_020_ShouldApplicationPause(_this->u_iface);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_020_ShouldApplicationReduceRenderingWork(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_020_ShouldApplicationReduceRenderingWork(_this->u_iface);
    return _ret;
}

EVRFirmwareError __thiscall winIVRSystem_IVRSystem_020_PerformFirmwareUpdate(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    EVRFirmwareError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_020_PerformFirmwareUpdate(_this->u_iface, unDeviceIndex);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_020_AcknowledgeQuit_Exiting(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_020_AcknowledgeQuit_Exiting(_this->u_iface);
}

void __thiscall winIVRSystem_IVRSystem_020_AcknowledgeQuit_UserPrompt(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_020_AcknowledgeQuit_UserPrompt(_this->u_iface);
}

uint32_t __thiscall winIVRSystem_IVRSystem_020_GetAppContainerFilePaths(struct w_steam_iface *_this, char *pchBuffer, uint32_t unBufferSize)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_020_GetAppContainerFilePaths(_this->u_iface, pchBuffer, unBufferSize);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_020_GetRuntimeVersion(struct w_steam_iface *_this)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_020_GetRuntimeVersion(_this->u_iface);
    return _ret;
}

extern vtable_ptr winIVRSystem_IVRSystem_020_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

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

#include "cppIVRSystem_IVRSystem_021.h"

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
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_021_GetRecommendedRenderTargetSize(_this->u_iface, pnWidth, pnHeight);
}

HmdMatrix44_t * __thiscall winIVRSystem_IVRSystem_021_GetProjectionMatrix(struct w_steam_iface *_this, HmdMatrix44_t *_ret, EVREye eEye, float fNearZ, float fFarZ)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_021_GetProjectionMatrix(_this->u_iface, eEye, fNearZ, fFarZ);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_021_GetProjectionRaw(struct w_steam_iface *_this, EVREye eEye, float *pfLeft, float *pfRight, float *pfTop, float *pfBottom)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_021_GetProjectionRaw(_this->u_iface, eEye, pfLeft, pfRight, pfTop, pfBottom);
}

bool __thiscall winIVRSystem_IVRSystem_021_ComputeDistortion(struct w_steam_iface *_this, EVREye eEye, float fU, float fV, DistortionCoordinates_t *pDistortionCoordinates)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_021_ComputeDistortion(_this->u_iface, eEye, fU, fV, pDistortionCoordinates);
    return _ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_021_GetEyeToHeadTransform(struct w_steam_iface *_this, HmdMatrix34_t *_ret, EVREye eEye)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_021_GetEyeToHeadTransform(_this->u_iface, eEye);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_021_GetTimeSinceLastVsync(struct w_steam_iface *_this, float *pfSecondsSinceLastVsync, uint64_t *pulFrameCounter)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_021_GetTimeSinceLastVsync(_this->u_iface, pfSecondsSinceLastVsync, pulFrameCounter);
    return _ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_021_GetD3D9AdapterIndex(struct w_steam_iface *_this)
{
    int32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_021_GetD3D9AdapterIndex(_this->u_iface);
    return _ret;
}

extern void __thiscall winIVRSystem_IVRSystem_021_GetDXGIOutputInfo(struct w_steam_iface *_this, int32_t *pnAdapterIndex);

extern void __thiscall winIVRSystem_IVRSystem_021_GetOutputDevice(struct w_steam_iface *_this, uint64_t *pnDevice, ETextureType textureType, VkInstance_T *pInstance);

bool __thiscall winIVRSystem_IVRSystem_021_IsDisplayOnDesktop(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_021_IsDisplayOnDesktop(_this->u_iface);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_021_SetDisplayVisibility(struct w_steam_iface *_this, bool bIsVisibleOnDesktop)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_021_SetDisplayVisibility(_this->u_iface, bIsVisibleOnDesktop);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_021_GetDeviceToAbsoluteTrackingPose(struct w_steam_iface *_this, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t *pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_021_GetDeviceToAbsoluteTrackingPose(_this->u_iface, eOrigin, fPredictedSecondsToPhotonsFromNow, pTrackedDevicePoseArray, unTrackedDevicePoseArrayCount);
}

void __thiscall winIVRSystem_IVRSystem_021_ResetSeatedZeroPose(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_021_ResetSeatedZeroPose(_this->u_iface);
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_021_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_021_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(_this->u_iface);
    return _ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_021_GetRawZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_021_GetRawZeroPoseToStandingAbsoluteTrackingPose(_this->u_iface);
    return _ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_021_GetSortedTrackedDeviceIndicesOfClass(struct w_steam_iface *_this, ETrackedDeviceClass eTrackedDeviceClass, TrackedDeviceIndex_t *punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_021_GetSortedTrackedDeviceIndicesOfClass(_this->u_iface, eTrackedDeviceClass, punTrackedDeviceIndexArray, unTrackedDeviceIndexArrayCount, unRelativeToTrackedDeviceIndex);
    return _ret;
}

EDeviceActivityLevel __thiscall winIVRSystem_IVRSystem_021_GetTrackedDeviceActivityLevel(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceId)
{
    EDeviceActivityLevel _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_021_GetTrackedDeviceActivityLevel(_this->u_iface, unDeviceId);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_021_ApplyTransform(struct w_steam_iface *_this, TrackedDevicePose_t *pOutputPose, const TrackedDevicePose_t *pTrackedDevicePose, const HmdMatrix34_t *pTransform)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_021_ApplyTransform(_this->u_iface, pOutputPose, pTrackedDevicePose, pTransform);
}

TrackedDeviceIndex_t __thiscall winIVRSystem_IVRSystem_021_GetTrackedDeviceIndexForControllerRole(struct w_steam_iface *_this, ETrackedControllerRole unDeviceType)
{
    TrackedDeviceIndex_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_021_GetTrackedDeviceIndexForControllerRole(_this->u_iface, unDeviceType);
    return _ret;
}

ETrackedControllerRole __thiscall winIVRSystem_IVRSystem_021_GetControllerRoleForTrackedDeviceIndex(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    ETrackedControllerRole _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_021_GetControllerRoleForTrackedDeviceIndex(_this->u_iface, unDeviceIndex);
    return _ret;
}

ETrackedDeviceClass __thiscall winIVRSystem_IVRSystem_021_GetTrackedDeviceClass(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    ETrackedDeviceClass _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_021_GetTrackedDeviceClass(_this->u_iface, unDeviceIndex);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_021_IsTrackedDeviceConnected(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_021_IsTrackedDeviceConnected(_this->u_iface, unDeviceIndex);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_021_GetBoolTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_021_GetBoolTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

float __thiscall winIVRSystem_IVRSystem_021_GetFloatTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    float _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_021_GetFloatTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_021_GetInt32TrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    int32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_021_GetInt32TrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

uint64_t __thiscall winIVRSystem_IVRSystem_021_GetUint64TrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    uint64_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_021_GetUint64TrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_021_GetMatrix34TrackedDeviceProperty(struct w_steam_iface *_this, HmdMatrix34_t *_ret, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_021_GetMatrix34TrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_021_GetArrayTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, PropertyTypeTag_t propType, void *pBuffer, uint32_t unBufferSize, ETrackedPropertyError *pError)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_021_GetArrayTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, propType, pBuffer, unBufferSize, pError);
    return _ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_021_GetStringTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, char *pchValue, uint32_t unBufferSize, ETrackedPropertyError *pError)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_021_GetStringTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pchValue, unBufferSize, pError);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_021_GetPropErrorNameFromEnum(struct w_steam_iface *_this, ETrackedPropertyError error)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_021_GetPropErrorNameFromEnum(_this->u_iface, error);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_021_PollNextEvent(struct w_steam_iface *_this, winVREvent_t_1125 *pEvent, uint32_t uncbVREvent)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_021_PollNextEvent(_this->u_iface, pEvent, uncbVREvent);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_021_PollNextEventWithPose(struct w_steam_iface *_this, ETrackingUniverseOrigin eOrigin, winVREvent_t_1125 *pEvent, uint32_t uncbVREvent, TrackedDevicePose_t *pTrackedDevicePose)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_021_PollNextEventWithPose(_this->u_iface, eOrigin, pEvent, uncbVREvent, pTrackedDevicePose);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_021_GetEventTypeNameFromEnum(struct w_steam_iface *_this, EVREventType eType)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_021_GetEventTypeNameFromEnum(_this->u_iface, eType);
    return _ret;
}

HiddenAreaMesh_t * __thiscall winIVRSystem_IVRSystem_021_GetHiddenAreaMesh(struct w_steam_iface *_this, HiddenAreaMesh_t *_ret, EVREye eEye, EHiddenAreaMeshType type)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_021_GetHiddenAreaMesh(_this->u_iface, eEye, type);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_021_GetControllerState(struct w_steam_iface *_this, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_1125 *pControllerState, uint32_t unControllerStateSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_021_GetControllerState(_this->u_iface, unControllerDeviceIndex, pControllerState, unControllerStateSize);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_021_GetControllerStateWithPose(struct w_steam_iface *_this, ETrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_1125 *pControllerState, uint32_t unControllerStateSize, TrackedDevicePose_t *pTrackedDevicePose)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_021_GetControllerStateWithPose(_this->u_iface, eOrigin, unControllerDeviceIndex, pControllerState, unControllerStateSize, pTrackedDevicePose);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_021_TriggerHapticPulse(struct w_steam_iface *_this, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_021_TriggerHapticPulse(_this->u_iface, unControllerDeviceIndex, unAxisId, usDurationMicroSec);
}

const char * __thiscall winIVRSystem_IVRSystem_021_GetButtonIdNameFromEnum(struct w_steam_iface *_this, EVRButtonId eButtonId)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_021_GetButtonIdNameFromEnum(_this->u_iface, eButtonId);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_021_GetControllerAxisTypeNameFromEnum(struct w_steam_iface *_this, EVRControllerAxisType eAxisType)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_021_GetControllerAxisTypeNameFromEnum(_this->u_iface, eAxisType);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_021_IsInputAvailable(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_021_IsInputAvailable(_this->u_iface);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_021_IsSteamVRDrawingControllers(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_021_IsSteamVRDrawingControllers(_this->u_iface);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_021_ShouldApplicationPause(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_021_ShouldApplicationPause(_this->u_iface);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_021_ShouldApplicationReduceRenderingWork(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_021_ShouldApplicationReduceRenderingWork(_this->u_iface);
    return _ret;
}

EVRFirmwareError __thiscall winIVRSystem_IVRSystem_021_PerformFirmwareUpdate(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    EVRFirmwareError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_021_PerformFirmwareUpdate(_this->u_iface, unDeviceIndex);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_021_AcknowledgeQuit_Exiting(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_021_AcknowledgeQuit_Exiting(_this->u_iface);
}

uint32_t __thiscall winIVRSystem_IVRSystem_021_GetAppContainerFilePaths(struct w_steam_iface *_this, char *pchBuffer, uint32_t unBufferSize)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_021_GetAppContainerFilePaths(_this->u_iface, pchBuffer, unBufferSize);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_021_GetRuntimeVersion(struct w_steam_iface *_this)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_021_GetRuntimeVersion(_this->u_iface);
    return _ret;
}

extern vtable_ptr winIVRSystem_IVRSystem_021_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

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

#include "cppIVRSystem_IVRSystem_022.h"

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
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_022_GetRecommendedRenderTargetSize(_this->u_iface, pnWidth, pnHeight);
}

HmdMatrix44_t * __thiscall winIVRSystem_IVRSystem_022_GetProjectionMatrix(struct w_steam_iface *_this, HmdMatrix44_t *_ret, EVREye eEye, float fNearZ, float fFarZ)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_022_GetProjectionMatrix(_this->u_iface, eEye, fNearZ, fFarZ);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_022_GetProjectionRaw(struct w_steam_iface *_this, EVREye eEye, float *pfLeft, float *pfRight, float *pfTop, float *pfBottom)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_022_GetProjectionRaw(_this->u_iface, eEye, pfLeft, pfRight, pfTop, pfBottom);
}

bool __thiscall winIVRSystem_IVRSystem_022_ComputeDistortion(struct w_steam_iface *_this, EVREye eEye, float fU, float fV, DistortionCoordinates_t *pDistortionCoordinates)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_022_ComputeDistortion(_this->u_iface, eEye, fU, fV, pDistortionCoordinates);
    return _ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_022_GetEyeToHeadTransform(struct w_steam_iface *_this, HmdMatrix34_t *_ret, EVREye eEye)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_022_GetEyeToHeadTransform(_this->u_iface, eEye);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_022_GetTimeSinceLastVsync(struct w_steam_iface *_this, float *pfSecondsSinceLastVsync, uint64_t *pulFrameCounter)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_022_GetTimeSinceLastVsync(_this->u_iface, pfSecondsSinceLastVsync, pulFrameCounter);
    return _ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_022_GetD3D9AdapterIndex(struct w_steam_iface *_this)
{
    int32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_022_GetD3D9AdapterIndex(_this->u_iface);
    return _ret;
}

extern void __thiscall winIVRSystem_IVRSystem_022_GetDXGIOutputInfo(struct w_steam_iface *_this, int32_t *pnAdapterIndex);

extern void __thiscall winIVRSystem_IVRSystem_022_GetOutputDevice(struct w_steam_iface *_this, uint64_t *pnDevice, ETextureType textureType, VkInstance_T *pInstance);

bool __thiscall winIVRSystem_IVRSystem_022_IsDisplayOnDesktop(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_022_IsDisplayOnDesktop(_this->u_iface);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_022_SetDisplayVisibility(struct w_steam_iface *_this, bool bIsVisibleOnDesktop)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_022_SetDisplayVisibility(_this->u_iface, bIsVisibleOnDesktop);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_022_GetDeviceToAbsoluteTrackingPose(struct w_steam_iface *_this, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t *pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_022_GetDeviceToAbsoluteTrackingPose(_this->u_iface, eOrigin, fPredictedSecondsToPhotonsFromNow, pTrackedDevicePoseArray, unTrackedDevicePoseArrayCount);
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_022_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_022_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(_this->u_iface);
    return _ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_022_GetRawZeroPoseToStandingAbsoluteTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_022_GetRawZeroPoseToStandingAbsoluteTrackingPose(_this->u_iface);
    return _ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_022_GetSortedTrackedDeviceIndicesOfClass(struct w_steam_iface *_this, ETrackedDeviceClass eTrackedDeviceClass, TrackedDeviceIndex_t *punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_022_GetSortedTrackedDeviceIndicesOfClass(_this->u_iface, eTrackedDeviceClass, punTrackedDeviceIndexArray, unTrackedDeviceIndexArrayCount, unRelativeToTrackedDeviceIndex);
    return _ret;
}

EDeviceActivityLevel __thiscall winIVRSystem_IVRSystem_022_GetTrackedDeviceActivityLevel(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceId)
{
    EDeviceActivityLevel _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_022_GetTrackedDeviceActivityLevel(_this->u_iface, unDeviceId);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_022_ApplyTransform(struct w_steam_iface *_this, TrackedDevicePose_t *pOutputPose, const TrackedDevicePose_t *pTrackedDevicePose, const HmdMatrix34_t *pTransform)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_022_ApplyTransform(_this->u_iface, pOutputPose, pTrackedDevicePose, pTransform);
}

TrackedDeviceIndex_t __thiscall winIVRSystem_IVRSystem_022_GetTrackedDeviceIndexForControllerRole(struct w_steam_iface *_this, ETrackedControllerRole unDeviceType)
{
    TrackedDeviceIndex_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_022_GetTrackedDeviceIndexForControllerRole(_this->u_iface, unDeviceType);
    return _ret;
}

ETrackedControllerRole __thiscall winIVRSystem_IVRSystem_022_GetControllerRoleForTrackedDeviceIndex(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    ETrackedControllerRole _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_022_GetControllerRoleForTrackedDeviceIndex(_this->u_iface, unDeviceIndex);
    return _ret;
}

ETrackedDeviceClass __thiscall winIVRSystem_IVRSystem_022_GetTrackedDeviceClass(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    ETrackedDeviceClass _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_022_GetTrackedDeviceClass(_this->u_iface, unDeviceIndex);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_022_IsTrackedDeviceConnected(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_022_IsTrackedDeviceConnected(_this->u_iface, unDeviceIndex);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_022_GetBoolTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_022_GetBoolTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

float __thiscall winIVRSystem_IVRSystem_022_GetFloatTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    float _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_022_GetFloatTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

int32_t __thiscall winIVRSystem_IVRSystem_022_GetInt32TrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    int32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_022_GetInt32TrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

uint64_t __thiscall winIVRSystem_IVRSystem_022_GetUint64TrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    uint64_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_022_GetUint64TrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

HmdMatrix34_t * __thiscall winIVRSystem_IVRSystem_022_GetMatrix34TrackedDeviceProperty(struct w_steam_iface *_this, HmdMatrix34_t *_ret, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_022_GetMatrix34TrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pError);
    return _ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_022_GetArrayTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, PropertyTypeTag_t propType, void *pBuffer, uint32_t unBufferSize, ETrackedPropertyError *pError)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_022_GetArrayTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, propType, pBuffer, unBufferSize, pError);
    return _ret;
}

uint32_t __thiscall winIVRSystem_IVRSystem_022_GetStringTrackedDeviceProperty(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, char *pchValue, uint32_t unBufferSize, ETrackedPropertyError *pError)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_022_GetStringTrackedDeviceProperty(_this->u_iface, unDeviceIndex, prop, pchValue, unBufferSize, pError);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_022_GetPropErrorNameFromEnum(struct w_steam_iface *_this, ETrackedPropertyError error)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_022_GetPropErrorNameFromEnum(_this->u_iface, error);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_022_PollNextEvent(struct w_steam_iface *_this, winVREvent_t_1267 *pEvent, uint32_t uncbVREvent)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_022_PollNextEvent(_this->u_iface, pEvent, uncbVREvent);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_022_PollNextEventWithPose(struct w_steam_iface *_this, ETrackingUniverseOrigin eOrigin, winVREvent_t_1267 *pEvent, uint32_t uncbVREvent, TrackedDevicePose_t *pTrackedDevicePose)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_022_PollNextEventWithPose(_this->u_iface, eOrigin, pEvent, uncbVREvent, pTrackedDevicePose);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_022_GetEventTypeNameFromEnum(struct w_steam_iface *_this, EVREventType eType)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_022_GetEventTypeNameFromEnum(_this->u_iface, eType);
    return _ret;
}

HiddenAreaMesh_t * __thiscall winIVRSystem_IVRSystem_022_GetHiddenAreaMesh(struct w_steam_iface *_this, HiddenAreaMesh_t *_ret, EVREye eEye, EHiddenAreaMeshType type)
{
    TRACE("%p\n", _this);
    *_ret = cppIVRSystem_IVRSystem_022_GetHiddenAreaMesh(_this->u_iface, eEye, type);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_022_GetControllerState(struct w_steam_iface *_this, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_1267 *pControllerState, uint32_t unControllerStateSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_022_GetControllerState(_this->u_iface, unControllerDeviceIndex, pControllerState, unControllerStateSize);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_022_GetControllerStateWithPose(struct w_steam_iface *_this, ETrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_1267 *pControllerState, uint32_t unControllerStateSize, TrackedDevicePose_t *pTrackedDevicePose)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_022_GetControllerStateWithPose(_this->u_iface, eOrigin, unControllerDeviceIndex, pControllerState, unControllerStateSize, pTrackedDevicePose);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_022_TriggerHapticPulse(struct w_steam_iface *_this, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_022_TriggerHapticPulse(_this->u_iface, unControllerDeviceIndex, unAxisId, usDurationMicroSec);
}

const char * __thiscall winIVRSystem_IVRSystem_022_GetButtonIdNameFromEnum(struct w_steam_iface *_this, EVRButtonId eButtonId)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_022_GetButtonIdNameFromEnum(_this->u_iface, eButtonId);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_022_GetControllerAxisTypeNameFromEnum(struct w_steam_iface *_this, EVRControllerAxisType eAxisType)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_022_GetControllerAxisTypeNameFromEnum(_this->u_iface, eAxisType);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_022_IsInputAvailable(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_022_IsInputAvailable(_this->u_iface);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_022_IsSteamVRDrawingControllers(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_022_IsSteamVRDrawingControllers(_this->u_iface);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_022_ShouldApplicationPause(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_022_ShouldApplicationPause(_this->u_iface);
    return _ret;
}

bool __thiscall winIVRSystem_IVRSystem_022_ShouldApplicationReduceRenderingWork(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_022_ShouldApplicationReduceRenderingWork(_this->u_iface);
    return _ret;
}

EVRFirmwareError __thiscall winIVRSystem_IVRSystem_022_PerformFirmwareUpdate(struct w_steam_iface *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    EVRFirmwareError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_022_PerformFirmwareUpdate(_this->u_iface, unDeviceIndex);
    return _ret;
}

void __thiscall winIVRSystem_IVRSystem_022_AcknowledgeQuit_Exiting(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_022_AcknowledgeQuit_Exiting(_this->u_iface);
}

uint32_t __thiscall winIVRSystem_IVRSystem_022_GetAppContainerFilePaths(struct w_steam_iface *_this, char *pchBuffer, uint32_t unBufferSize)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_022_GetAppContainerFilePaths(_this->u_iface, pchBuffer, unBufferSize);
    return _ret;
}

const char * __thiscall winIVRSystem_IVRSystem_022_GetRuntimeVersion(struct w_steam_iface *_this)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSystem_IVRSystem_022_GetRuntimeVersion(_this->u_iface);
    return _ret;
}

extern vtable_ptr winIVRSystem_IVRSystem_022_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

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

