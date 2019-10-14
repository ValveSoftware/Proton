#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.0.3/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRSystem_IVRSystem_012.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVRSystem_IVRSystem_012_GetRecommendedRenderTargetSize(void *linux_side, uint32_t * pnWidth, uint32_t * pnHeight)
{
    ((IVRSystem*)linux_side)->GetRecommendedRenderTargetSize((uint32_t *)pnWidth, (uint32_t *)pnHeight);
}

vr::HmdMatrix44_t cppIVRSystem_IVRSystem_012_GetProjectionMatrix(void *linux_side, EVREye eEye, float fNearZ, float fFarZ, EGraphicsAPIConvention eProjType)
{
    return ((IVRSystem*)linux_side)->GetProjectionMatrix((vr::EVREye)eEye, (float)fNearZ, (float)fFarZ, (vr::EGraphicsAPIConvention)eProjType);
}

void cppIVRSystem_IVRSystem_012_GetProjectionRaw(void *linux_side, EVREye eEye, float * pfLeft, float * pfRight, float * pfTop, float * pfBottom)
{
    ((IVRSystem*)linux_side)->GetProjectionRaw((vr::EVREye)eEye, (float *)pfLeft, (float *)pfRight, (float *)pfTop, (float *)pfBottom);
}

vr::DistortionCoordinates_t cppIVRSystem_IVRSystem_012_ComputeDistortion(void *linux_side, EVREye eEye, float fU, float fV)
{
    return ((IVRSystem*)linux_side)->ComputeDistortion((vr::EVREye)eEye, (float)fU, (float)fV);
}

vr::HmdMatrix34_t cppIVRSystem_IVRSystem_012_GetEyeToHeadTransform(void *linux_side, EVREye eEye)
{
    return ((IVRSystem*)linux_side)->GetEyeToHeadTransform((vr::EVREye)eEye);
}

bool cppIVRSystem_IVRSystem_012_GetTimeSinceLastVsync(void *linux_side, float * pfSecondsSinceLastVsync, uint64_t * pulFrameCounter)
{
    return ((IVRSystem*)linux_side)->GetTimeSinceLastVsync((float *)pfSecondsSinceLastVsync, (uint64_t *)pulFrameCounter);
}

int32_t cppIVRSystem_IVRSystem_012_GetD3D9AdapterIndex(void *linux_side)
{
    return ((IVRSystem*)linux_side)->GetD3D9AdapterIndex();
}

void cppIVRSystem_IVRSystem_012_GetDXGIOutputInfo(void *linux_side, int32_t * pnAdapterIndex)
{
    ((IVRSystem*)linux_side)->GetDXGIOutputInfo((int32_t *)pnAdapterIndex);
}

bool cppIVRSystem_IVRSystem_012_IsDisplayOnDesktop(void *linux_side)
{
    return ((IVRSystem*)linux_side)->IsDisplayOnDesktop();
}

bool cppIVRSystem_IVRSystem_012_SetDisplayVisibility(void *linux_side, bool bIsVisibleOnDesktop)
{
    return ((IVRSystem*)linux_side)->SetDisplayVisibility((bool)bIsVisibleOnDesktop);
}

void cppIVRSystem_IVRSystem_012_GetDeviceToAbsoluteTrackingPose(void *linux_side, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t * pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    ((IVRSystem*)linux_side)->GetDeviceToAbsoluteTrackingPose((vr::ETrackingUniverseOrigin)eOrigin, (float)fPredictedSecondsToPhotonsFromNow, (vr::TrackedDevicePose_t *)pTrackedDevicePoseArray, (uint32_t)unTrackedDevicePoseArrayCount);
}

void cppIVRSystem_IVRSystem_012_ResetSeatedZeroPose(void *linux_side)
{
    ((IVRSystem*)linux_side)->ResetSeatedZeroPose();
}

vr::HmdMatrix34_t cppIVRSystem_IVRSystem_012_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(void *linux_side)
{
    return ((IVRSystem*)linux_side)->GetSeatedZeroPoseToStandingAbsoluteTrackingPose();
}

vr::HmdMatrix34_t cppIVRSystem_IVRSystem_012_GetRawZeroPoseToStandingAbsoluteTrackingPose(void *linux_side)
{
    return ((IVRSystem*)linux_side)->GetRawZeroPoseToStandingAbsoluteTrackingPose();
}

uint32_t cppIVRSystem_IVRSystem_012_GetSortedTrackedDeviceIndicesOfClass(void *linux_side, ETrackedDeviceClass eTrackedDeviceClass, TrackedDeviceIndex_t * punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex)
{
    return ((IVRSystem*)linux_side)->GetSortedTrackedDeviceIndicesOfClass((vr::ETrackedDeviceClass)eTrackedDeviceClass, (vr::TrackedDeviceIndex_t *)punTrackedDeviceIndexArray, (uint32_t)unTrackedDeviceIndexArrayCount, (vr::TrackedDeviceIndex_t)unRelativeToTrackedDeviceIndex);
}

vr::EDeviceActivityLevel cppIVRSystem_IVRSystem_012_GetTrackedDeviceActivityLevel(void *linux_side, TrackedDeviceIndex_t unDeviceId)
{
    return ((IVRSystem*)linux_side)->GetTrackedDeviceActivityLevel((vr::TrackedDeviceIndex_t)unDeviceId);
}

void cppIVRSystem_IVRSystem_012_ApplyTransform(void *linux_side, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pTrackedDevicePose, HmdMatrix34_t * pTransform)
{
    ((IVRSystem*)linux_side)->ApplyTransform((vr::TrackedDevicePose_t *)pOutputPose, (const vr::TrackedDevicePose_t *)pTrackedDevicePose, (const vr::HmdMatrix34_t *)pTransform);
}

vr::TrackedDeviceIndex_t cppIVRSystem_IVRSystem_012_GetTrackedDeviceIndexForControllerRole(void *linux_side, ETrackedControllerRole unDeviceType)
{
    return ((IVRSystem*)linux_side)->GetTrackedDeviceIndexForControllerRole((vr::ETrackedControllerRole)unDeviceType);
}

vr::ETrackedControllerRole cppIVRSystem_IVRSystem_012_GetControllerRoleForTrackedDeviceIndex(void *linux_side, TrackedDeviceIndex_t unDeviceIndex)
{
    return ((IVRSystem*)linux_side)->GetControllerRoleForTrackedDeviceIndex((vr::TrackedDeviceIndex_t)unDeviceIndex);
}

vr::ETrackedDeviceClass cppIVRSystem_IVRSystem_012_GetTrackedDeviceClass(void *linux_side, TrackedDeviceIndex_t unDeviceIndex)
{
    return ((IVRSystem*)linux_side)->GetTrackedDeviceClass((vr::TrackedDeviceIndex_t)unDeviceIndex);
}

bool cppIVRSystem_IVRSystem_012_IsTrackedDeviceConnected(void *linux_side, TrackedDeviceIndex_t unDeviceIndex)
{
    return ((IVRSystem*)linux_side)->IsTrackedDeviceConnected((vr::TrackedDeviceIndex_t)unDeviceIndex);
}

bool cppIVRSystem_IVRSystem_012_GetBoolTrackedDeviceProperty(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    return ((IVRSystem*)linux_side)->GetBoolTrackedDeviceProperty((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::ETrackedDeviceProperty)prop, (vr::ETrackedPropertyError *)pError);
}

float cppIVRSystem_IVRSystem_012_GetFloatTrackedDeviceProperty(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    return ((IVRSystem*)linux_side)->GetFloatTrackedDeviceProperty((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::ETrackedDeviceProperty)prop, (vr::ETrackedPropertyError *)pError);
}

int32_t cppIVRSystem_IVRSystem_012_GetInt32TrackedDeviceProperty(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    return ((IVRSystem*)linux_side)->GetInt32TrackedDeviceProperty((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::ETrackedDeviceProperty)prop, (vr::ETrackedPropertyError *)pError);
}

uint64_t cppIVRSystem_IVRSystem_012_GetUint64TrackedDeviceProperty(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    return ((IVRSystem*)linux_side)->GetUint64TrackedDeviceProperty((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::ETrackedDeviceProperty)prop, (vr::ETrackedPropertyError *)pError);
}

vr::HmdMatrix34_t cppIVRSystem_IVRSystem_012_GetMatrix34TrackedDeviceProperty(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    return ((IVRSystem*)linux_side)->GetMatrix34TrackedDeviceProperty((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::ETrackedDeviceProperty)prop, (vr::ETrackedPropertyError *)pError);
}

uint32_t cppIVRSystem_IVRSystem_012_GetStringTrackedDeviceProperty(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, char * pchValue, uint32_t unBufferSize, ETrackedPropertyError * pError)
{
    return ((IVRSystem*)linux_side)->GetStringTrackedDeviceProperty((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::ETrackedDeviceProperty)prop, (char *)pchValue, (uint32_t)unBufferSize, (vr::ETrackedPropertyError *)pError);
}

const char * cppIVRSystem_IVRSystem_012_GetPropErrorNameFromEnum(void *linux_side, ETrackedPropertyError error)
{
    return ((IVRSystem*)linux_side)->GetPropErrorNameFromEnum((vr::ETrackedPropertyError)error);
}

bool cppIVRSystem_IVRSystem_012_PollNextEvent(void *linux_side, winVREvent_t_103 * pEvent, uint32_t uncbVREvent)
{
    VREvent_t lin;
    bool _ret;
    if(pEvent)
        struct_VREvent_t_103_win_to_lin(pEvent, &lin);
    _ret = ((IVRSystem*)linux_side)->PollNextEvent(pEvent ? &lin : nullptr, uncbVREvent ? sizeof(lin) : 0);
    if(pEvent)
        struct_VREvent_t_103_lin_to_win(&lin, pEvent, uncbVREvent);
    return _ret;
}

bool cppIVRSystem_IVRSystem_012_PollNextEventWithPose(void *linux_side, ETrackingUniverseOrigin eOrigin, winVREvent_t_103 * pEvent, uint32_t uncbVREvent, TrackedDevicePose_t * pTrackedDevicePose)
{
    VREvent_t lin;
    bool _ret;
    if(pEvent)
        struct_VREvent_t_103_win_to_lin(pEvent, &lin);
    _ret = ((IVRSystem*)linux_side)->PollNextEventWithPose((vr::ETrackingUniverseOrigin)eOrigin, pEvent ? &lin : nullptr, uncbVREvent ? sizeof(lin) : 0, (vr::TrackedDevicePose_t *)pTrackedDevicePose);
    if(pEvent)
        struct_VREvent_t_103_lin_to_win(&lin, pEvent, uncbVREvent);
    return _ret;
}

const char * cppIVRSystem_IVRSystem_012_GetEventTypeNameFromEnum(void *linux_side, EVREventType eType)
{
    return ((IVRSystem*)linux_side)->GetEventTypeNameFromEnum((vr::EVREventType)eType);
}

vr::HiddenAreaMesh_t cppIVRSystem_IVRSystem_012_GetHiddenAreaMesh(void *linux_side, EVREye eEye)
{
    return ((IVRSystem*)linux_side)->GetHiddenAreaMesh((vr::EVREye)eEye);
}

bool cppIVRSystem_IVRSystem_012_GetControllerState(void *linux_side, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_103 * pControllerState)
{
    VRControllerState001_t lin;
    bool _ret;
    if(pControllerState)
        struct_VRControllerState001_t_103_win_to_lin(pControllerState, &lin);
    _ret = ((IVRSystem*)linux_side)->GetControllerState((vr::TrackedDeviceIndex_t)unControllerDeviceIndex, pControllerState ? &lin : nullptr);
    if(pControllerState)
        struct_VRControllerState001_t_103_lin_to_win(&lin, pControllerState, -1);
    return _ret;
}

bool cppIVRSystem_IVRSystem_012_GetControllerStateWithPose(void *linux_side, ETrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_103 * pControllerState, TrackedDevicePose_t * pTrackedDevicePose)
{
    VRControllerState001_t lin;
    bool _ret;
    if(pControllerState)
        struct_VRControllerState001_t_103_win_to_lin(pControllerState, &lin);
    _ret = ((IVRSystem*)linux_side)->GetControllerStateWithPose((vr::ETrackingUniverseOrigin)eOrigin, (vr::TrackedDeviceIndex_t)unControllerDeviceIndex, pControllerState ? &lin : nullptr, (vr::TrackedDevicePose_t *)pTrackedDevicePose);
    if(pControllerState)
        struct_VRControllerState001_t_103_lin_to_win(&lin, pControllerState, -1);
    return _ret;
}

void cppIVRSystem_IVRSystem_012_TriggerHapticPulse(void *linux_side, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    ((IVRSystem*)linux_side)->TriggerHapticPulse((vr::TrackedDeviceIndex_t)unControllerDeviceIndex, (uint32_t)unAxisId, (unsigned short)usDurationMicroSec);
}

const char * cppIVRSystem_IVRSystem_012_GetButtonIdNameFromEnum(void *linux_side, EVRButtonId eButtonId)
{
    return ((IVRSystem*)linux_side)->GetButtonIdNameFromEnum((vr::EVRButtonId)eButtonId);
}

const char * cppIVRSystem_IVRSystem_012_GetControllerAxisTypeNameFromEnum(void *linux_side, EVRControllerAxisType eAxisType)
{
    return ((IVRSystem*)linux_side)->GetControllerAxisTypeNameFromEnum((vr::EVRControllerAxisType)eAxisType);
}

bool cppIVRSystem_IVRSystem_012_CaptureInputFocus(void *linux_side)
{
    return ((IVRSystem*)linux_side)->CaptureInputFocus();
}

void cppIVRSystem_IVRSystem_012_ReleaseInputFocus(void *linux_side)
{
    ((IVRSystem*)linux_side)->ReleaseInputFocus();
}

bool cppIVRSystem_IVRSystem_012_IsInputFocusCapturedByAnotherProcess(void *linux_side)
{
    return ((IVRSystem*)linux_side)->IsInputFocusCapturedByAnotherProcess();
}

uint32_t cppIVRSystem_IVRSystem_012_DriverDebugRequest(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, const char * pchRequest, char * pchResponseBuffer, uint32_t unResponseBufferSize)
{
    return ((IVRSystem*)linux_side)->DriverDebugRequest((vr::TrackedDeviceIndex_t)unDeviceIndex, (const char *)pchRequest, (char *)pchResponseBuffer, (uint32_t)unResponseBufferSize);
}

vr::EVRFirmwareError cppIVRSystem_IVRSystem_012_PerformFirmwareUpdate(void *linux_side, TrackedDeviceIndex_t unDeviceIndex)
{
    return ((IVRSystem*)linux_side)->PerformFirmwareUpdate((vr::TrackedDeviceIndex_t)unDeviceIndex);
}

void cppIVRSystem_IVRSystem_012_AcknowledgeQuit_Exiting(void *linux_side)
{
    ((IVRSystem*)linux_side)->AcknowledgeQuit_Exiting();
}

void cppIVRSystem_IVRSystem_012_AcknowledgeQuit_UserPrompt(void *linux_side)
{
    ((IVRSystem*)linux_side)->AcknowledgeQuit_UserPrompt();
}

#ifdef __cplusplus
}
#endif
