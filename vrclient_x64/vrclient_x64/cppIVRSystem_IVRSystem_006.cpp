#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v0.9.10/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRSystem_IVRSystem_006.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVRSystem_IVRSystem_006_GetWindowBounds(void *linux_side, int32_t *pnX, int32_t *pnY, uint32_t *pnWidth, uint32_t *pnHeight)
{
    ((IVRSystem*)linux_side)->GetWindowBounds((int32_t *)pnX, (int32_t *)pnY, (uint32_t *)pnWidth, (uint32_t *)pnHeight);
}

void cppIVRSystem_IVRSystem_006_GetRecommendedRenderTargetSize(void *linux_side, uint32_t *pnWidth, uint32_t *pnHeight)
{
    ((IVRSystem*)linux_side)->GetRecommendedRenderTargetSize((uint32_t *)pnWidth, (uint32_t *)pnHeight);
}

void cppIVRSystem_IVRSystem_006_GetEyeOutputViewport(void *linux_side, Hmd_Eye eEye, uint32_t *pnX, uint32_t *pnY, uint32_t *pnWidth, uint32_t *pnHeight)
{
    ((IVRSystem*)linux_side)->GetEyeOutputViewport((vr::Hmd_Eye)eEye, (uint32_t *)pnX, (uint32_t *)pnY, (uint32_t *)pnWidth, (uint32_t *)pnHeight);
}

HmdMatrix44_t cppIVRSystem_IVRSystem_006_GetProjectionMatrix(void *linux_side, Hmd_Eye eEye, float fNearZ, float fFarZ, GraphicsAPIConvention eProjType)
{
    HmdMatrix44_t _ret;
    _ret = ((IVRSystem*)linux_side)->GetProjectionMatrix((vr::Hmd_Eye)eEye, (float)fNearZ, (float)fFarZ, (vr::GraphicsAPIConvention)eProjType);
    return _ret;
}

void cppIVRSystem_IVRSystem_006_GetProjectionRaw(void *linux_side, Hmd_Eye eEye, float *pfLeft, float *pfRight, float *pfTop, float *pfBottom)
{
    ((IVRSystem*)linux_side)->GetProjectionRaw((vr::Hmd_Eye)eEye, (float *)pfLeft, (float *)pfRight, (float *)pfTop, (float *)pfBottom);
}

DistortionCoordinates_t cppIVRSystem_IVRSystem_006_ComputeDistortion(void *linux_side, Hmd_Eye eEye, float fU, float fV)
{
    DistortionCoordinates_t _ret;
    _ret = ((IVRSystem*)linux_side)->ComputeDistortion((vr::Hmd_Eye)eEye, (float)fU, (float)fV);
    return _ret;
}

HmdMatrix34_t cppIVRSystem_IVRSystem_006_GetEyeToHeadTransform(void *linux_side, Hmd_Eye eEye)
{
    HmdMatrix34_t _ret;
    _ret = ((IVRSystem*)linux_side)->GetEyeToHeadTransform((vr::Hmd_Eye)eEye);
    return _ret;
}

bool cppIVRSystem_IVRSystem_006_GetTimeSinceLastVsync(void *linux_side, float *pfSecondsSinceLastVsync, uint64_t *pulFrameCounter)
{
    bool _ret;
    _ret = ((IVRSystem*)linux_side)->GetTimeSinceLastVsync((float *)pfSecondsSinceLastVsync, (uint64_t *)pulFrameCounter);
    return _ret;
}

int32_t cppIVRSystem_IVRSystem_006_GetD3D9AdapterIndex(void *linux_side)
{
    int32_t _ret;
    _ret = ((IVRSystem*)linux_side)->GetD3D9AdapterIndex();
    return _ret;
}

void cppIVRSystem_IVRSystem_006_GetDXGIOutputInfo(void *linux_side, int32_t *pnAdapterIndex, int32_t *pnAdapterOutputIndex)
{
    ((IVRSystem*)linux_side)->GetDXGIOutputInfo((int32_t *)pnAdapterIndex, (int32_t *)pnAdapterOutputIndex);
}

bool cppIVRSystem_IVRSystem_006_AttachToWindow(void *linux_side, void *hWnd)
{
    bool _ret;
    _ret = ((IVRSystem*)linux_side)->AttachToWindow((void *)hWnd);
    return _ret;
}

void cppIVRSystem_IVRSystem_006_GetDeviceToAbsoluteTrackingPose(void *linux_side, TrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t *pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    ((IVRSystem*)linux_side)->GetDeviceToAbsoluteTrackingPose((vr::TrackingUniverseOrigin)eOrigin, (float)fPredictedSecondsToPhotonsFromNow, (vr::TrackedDevicePose_t *)pTrackedDevicePoseArray, (uint32_t)unTrackedDevicePoseArrayCount);
}

void cppIVRSystem_IVRSystem_006_ResetSeatedZeroPose(void *linux_side)
{
    ((IVRSystem*)linux_side)->ResetSeatedZeroPose();
}

HmdMatrix34_t cppIVRSystem_IVRSystem_006_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(void *linux_side)
{
    HmdMatrix34_t _ret;
    _ret = ((IVRSystem*)linux_side)->GetSeatedZeroPoseToStandingAbsoluteTrackingPose();
    return _ret;
}

HmdMatrix34_t cppIVRSystem_IVRSystem_006_GetRawZeroPoseToStandingAbsoluteTrackingPose(void *linux_side)
{
    HmdMatrix34_t _ret;
    _ret = ((IVRSystem*)linux_side)->GetRawZeroPoseToStandingAbsoluteTrackingPose();
    return _ret;
}

uint32_t cppIVRSystem_IVRSystem_006_GetSortedTrackedDeviceIndicesOfClass(void *linux_side, TrackedDeviceClass eTrackedDeviceClass, TrackedDeviceIndex_t *punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex)
{
    uint32_t _ret;
    _ret = ((IVRSystem*)linux_side)->GetSortedTrackedDeviceIndicesOfClass((vr::TrackedDeviceClass)eTrackedDeviceClass, (vr::TrackedDeviceIndex_t *)punTrackedDeviceIndexArray, (uint32_t)unTrackedDeviceIndexArrayCount, (vr::TrackedDeviceIndex_t)unRelativeToTrackedDeviceIndex);
    return _ret;
}

EDeviceActivityLevel cppIVRSystem_IVRSystem_006_GetTrackedDeviceActivityLevel(void *linux_side, TrackedDeviceIndex_t unDeviceId)
{
    EDeviceActivityLevel _ret;
    _ret = ((IVRSystem*)linux_side)->GetTrackedDeviceActivityLevel((vr::TrackedDeviceIndex_t)unDeviceId);
    return _ret;
}

TrackedDeviceClass cppIVRSystem_IVRSystem_006_GetTrackedDeviceClass(void *linux_side, TrackedDeviceIndex_t unDeviceIndex)
{
    TrackedDeviceClass _ret;
    _ret = ((IVRSystem*)linux_side)->GetTrackedDeviceClass((vr::TrackedDeviceIndex_t)unDeviceIndex);
    return _ret;
}

bool cppIVRSystem_IVRSystem_006_IsTrackedDeviceConnected(void *linux_side, TrackedDeviceIndex_t unDeviceIndex)
{
    bool _ret;
    _ret = ((IVRSystem*)linux_side)->IsTrackedDeviceConnected((vr::TrackedDeviceIndex_t)unDeviceIndex);
    return _ret;
}

bool cppIVRSystem_IVRSystem_006_GetBoolTrackedDeviceProperty(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError *pError)
{
    bool _ret;
    _ret = ((IVRSystem*)linux_side)->GetBoolTrackedDeviceProperty((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::TrackedDeviceProperty)prop, (vr::TrackedPropertyError *)pError);
    return _ret;
}

float cppIVRSystem_IVRSystem_006_GetFloatTrackedDeviceProperty(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError *pError)
{
    float _ret;
    _ret = ((IVRSystem*)linux_side)->GetFloatTrackedDeviceProperty((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::TrackedDeviceProperty)prop, (vr::TrackedPropertyError *)pError);
    return _ret;
}

int32_t cppIVRSystem_IVRSystem_006_GetInt32TrackedDeviceProperty(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError *pError)
{
    int32_t _ret;
    _ret = ((IVRSystem*)linux_side)->GetInt32TrackedDeviceProperty((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::TrackedDeviceProperty)prop, (vr::TrackedPropertyError *)pError);
    return _ret;
}

uint64_t cppIVRSystem_IVRSystem_006_GetUint64TrackedDeviceProperty(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError *pError)
{
    uint64_t _ret;
    _ret = ((IVRSystem*)linux_side)->GetUint64TrackedDeviceProperty((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::TrackedDeviceProperty)prop, (vr::TrackedPropertyError *)pError);
    return _ret;
}

HmdMatrix34_t cppIVRSystem_IVRSystem_006_GetMatrix34TrackedDeviceProperty(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError *pError)
{
    HmdMatrix34_t _ret;
    _ret = ((IVRSystem*)linux_side)->GetMatrix34TrackedDeviceProperty((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::TrackedDeviceProperty)prop, (vr::TrackedPropertyError *)pError);
    return _ret;
}

uint32_t cppIVRSystem_IVRSystem_006_GetStringTrackedDeviceProperty(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, char *pchValue, uint32_t unBufferSize, TrackedPropertyError *pError)
{
    uint32_t _ret;
    _ret = ((IVRSystem*)linux_side)->GetStringTrackedDeviceProperty((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::TrackedDeviceProperty)prop, (char *)pchValue, (uint32_t)unBufferSize, (vr::TrackedPropertyError *)pError);
    return _ret;
}

const char * cppIVRSystem_IVRSystem_006_GetPropErrorNameFromEnum(void *linux_side, TrackedPropertyError error)
{
    const char *_ret;
    _ret = ((IVRSystem*)linux_side)->GetPropErrorNameFromEnum((vr::TrackedPropertyError)error);
    return _ret;
}

bool cppIVRSystem_IVRSystem_006_PollNextEvent(void *linux_side, VREvent_t *pEvent)
{
    bool _ret;
    _ret = ((IVRSystem*)linux_side)->PollNextEvent((vr::VREvent_t *)pEvent);
    return _ret;
}

bool cppIVRSystem_IVRSystem_006_PollNextEventWithPose(void *linux_side, TrackingUniverseOrigin eOrigin, VREvent_t *pEvent, TrackedDevicePose_t *pTrackedDevicePose)
{
    bool _ret;
    _ret = ((IVRSystem*)linux_side)->PollNextEventWithPose((vr::TrackingUniverseOrigin)eOrigin, (vr::VREvent_t *)pEvent, (vr::TrackedDevicePose_t *)pTrackedDevicePose);
    return _ret;
}

const char * cppIVRSystem_IVRSystem_006_GetEventTypeNameFromEnum(void *linux_side, EVREventType eType)
{
    const char *_ret;
    _ret = ((IVRSystem*)linux_side)->GetEventTypeNameFromEnum((vr::EVREventType)eType);
    return _ret;
}

HiddenAreaMesh_t cppIVRSystem_IVRSystem_006_GetHiddenAreaMesh(void *linux_side, Hmd_Eye eEye)
{
    HiddenAreaMesh_t _ret;
    _ret = ((IVRSystem*)linux_side)->GetHiddenAreaMesh((vr::Hmd_Eye)eEye);
    return _ret;
}

bool cppIVRSystem_IVRSystem_006_GetControllerState(void *linux_side, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_0910 *pControllerState)
{
    bool _ret;
    VRControllerState001_t lin_pControllerState;
    if (pControllerState)
        struct_VRControllerState001_t_0910_win_to_lin(pControllerState, &lin_pControllerState);
    _ret = ((IVRSystem*)linux_side)->GetControllerState((vr::TrackedDeviceIndex_t)unControllerDeviceIndex, pControllerState ? &lin_pControllerState : nullptr);
    if (pControllerState)
        struct_VRControllerState001_t_0910_lin_to_win(&lin_pControllerState, pControllerState, -1);
    return _ret;
}

bool cppIVRSystem_IVRSystem_006_GetControllerStateWithPose(void *linux_side, TrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_0910 *pControllerState, TrackedDevicePose_t *pTrackedDevicePose)
{
    bool _ret;
    VRControllerState001_t lin_pControllerState;
    if (pControllerState)
        struct_VRControllerState001_t_0910_win_to_lin(pControllerState, &lin_pControllerState);
    _ret = ((IVRSystem*)linux_side)->GetControllerStateWithPose((vr::TrackingUniverseOrigin)eOrigin, (vr::TrackedDeviceIndex_t)unControllerDeviceIndex, pControllerState ? &lin_pControllerState : nullptr, (vr::TrackedDevicePose_t *)pTrackedDevicePose);
    if (pControllerState)
        struct_VRControllerState001_t_0910_lin_to_win(&lin_pControllerState, pControllerState, -1);
    return _ret;
}

void cppIVRSystem_IVRSystem_006_TriggerHapticPulse(void *linux_side, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    ((IVRSystem*)linux_side)->TriggerHapticPulse((vr::TrackedDeviceIndex_t)unControllerDeviceIndex, (uint32_t)unAxisId, (unsigned short)usDurationMicroSec);
}

const char * cppIVRSystem_IVRSystem_006_GetButtonIdNameFromEnum(void *linux_side, EVRButtonId eButtonId)
{
    const char *_ret;
    _ret = ((IVRSystem*)linux_side)->GetButtonIdNameFromEnum((vr::EVRButtonId)eButtonId);
    return _ret;
}

const char * cppIVRSystem_IVRSystem_006_GetControllerAxisTypeNameFromEnum(void *linux_side, EVRControllerAxisType eAxisType)
{
    const char *_ret;
    _ret = ((IVRSystem*)linux_side)->GetControllerAxisTypeNameFromEnum((vr::EVRControllerAxisType)eAxisType);
    return _ret;
}

bool cppIVRSystem_IVRSystem_006_CaptureInputFocus(void *linux_side)
{
    bool _ret;
    _ret = ((IVRSystem*)linux_side)->CaptureInputFocus();
    return _ret;
}

void cppIVRSystem_IVRSystem_006_ReleaseInputFocus(void *linux_side)
{
    ((IVRSystem*)linux_side)->ReleaseInputFocus();
}

bool cppIVRSystem_IVRSystem_006_IsInputFocusCapturedByAnotherProcess(void *linux_side)
{
    bool _ret;
    _ret = ((IVRSystem*)linux_side)->IsInputFocusCapturedByAnotherProcess();
    return _ret;
}

uint32_t cppIVRSystem_IVRSystem_006_DriverDebugRequest(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, const char *pchRequest, char *pchResponseBuffer, uint32_t unResponseBufferSize)
{
    uint32_t _ret;
    _ret = ((IVRSystem*)linux_side)->DriverDebugRequest((vr::TrackedDeviceIndex_t)unDeviceIndex, (const char *)pchRequest, (char *)pchResponseBuffer, (uint32_t)unResponseBufferSize);
    return _ret;
}

VRFirmwareError cppIVRSystem_IVRSystem_006_PerformFirmwareUpdate(void *linux_side, TrackedDeviceIndex_t unDeviceIndex)
{
    VRFirmwareError _ret;
    _ret = ((IVRSystem*)linux_side)->PerformFirmwareUpdate((vr::TrackedDeviceIndex_t)unDeviceIndex);
    return _ret;
}

bool cppIVRSystem_IVRSystem_006_IsDisplayOnDesktop(void *linux_side)
{
    bool _ret;
    _ret = ((IVRSystem*)linux_side)->IsDisplayOnDesktop();
    return _ret;
}

bool cppIVRSystem_IVRSystem_006_SetDisplayVisibility(void *linux_side, bool bIsVisibleOnDesktop)
{
    bool _ret;
    _ret = ((IVRSystem*)linux_side)->SetDisplayVisibility((bool)bIsVisibleOnDesktop);
    return _ret;
}

#ifdef __cplusplus
}
#endif
