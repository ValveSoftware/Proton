#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v0.9.8/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRSystem_IVRSystem_005.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVRSystem_IVRSystem_005_GetWindowBounds(void *linux_side, int32_t * pnX, int32_t * pnY, uint32_t * pnWidth, uint32_t * pnHeight)
{
    ((IVRSystem*)linux_side)->GetWindowBounds((int32_t *)pnX, (int32_t *)pnY, (uint32_t *)pnWidth, (uint32_t *)pnHeight);
}

void cppIVRSystem_IVRSystem_005_GetRecommendedRenderTargetSize(void *linux_side, uint32_t * pnWidth, uint32_t * pnHeight)
{
    ((IVRSystem*)linux_side)->GetRecommendedRenderTargetSize((uint32_t *)pnWidth, (uint32_t *)pnHeight);
}

void cppIVRSystem_IVRSystem_005_GetEyeOutputViewport(void *linux_side, Hmd_Eye eEye, uint32_t * pnX, uint32_t * pnY, uint32_t * pnWidth, uint32_t * pnHeight)
{
    ((IVRSystem*)linux_side)->GetEyeOutputViewport((vr::Hmd_Eye)eEye, (uint32_t *)pnX, (uint32_t *)pnY, (uint32_t *)pnWidth, (uint32_t *)pnHeight);
}

vr::HmdMatrix44_t cppIVRSystem_IVRSystem_005_GetProjectionMatrix(void *linux_side, Hmd_Eye eEye, float fNearZ, float fFarZ, GraphicsAPIConvention eProjType)
{
    return ((IVRSystem*)linux_side)->GetProjectionMatrix((vr::Hmd_Eye)eEye, (float)fNearZ, (float)fFarZ, (vr::GraphicsAPIConvention)eProjType);
}

void cppIVRSystem_IVRSystem_005_GetProjectionRaw(void *linux_side, Hmd_Eye eEye, float * pfLeft, float * pfRight, float * pfTop, float * pfBottom)
{
    ((IVRSystem*)linux_side)->GetProjectionRaw((vr::Hmd_Eye)eEye, (float *)pfLeft, (float *)pfRight, (float *)pfTop, (float *)pfBottom);
}

vr::DistortionCoordinates_t cppIVRSystem_IVRSystem_005_ComputeDistortion(void *linux_side, Hmd_Eye eEye, float fU, float fV)
{
    return ((IVRSystem*)linux_side)->ComputeDistortion((vr::Hmd_Eye)eEye, (float)fU, (float)fV);
}

vr::HmdMatrix34_t cppIVRSystem_IVRSystem_005_GetEyeToHeadTransform(void *linux_side, Hmd_Eye eEye)
{
    return ((IVRSystem*)linux_side)->GetEyeToHeadTransform((vr::Hmd_Eye)eEye);
}

bool cppIVRSystem_IVRSystem_005_GetTimeSinceLastVsync(void *linux_side, float * pfSecondsSinceLastVsync, uint64_t * pulFrameCounter)
{
    return ((IVRSystem*)linux_side)->GetTimeSinceLastVsync((float *)pfSecondsSinceLastVsync, (uint64_t *)pulFrameCounter);
}

int32_t cppIVRSystem_IVRSystem_005_GetD3D9AdapterIndex(void *linux_side)
{
    return ((IVRSystem*)linux_side)->GetD3D9AdapterIndex();
}

void cppIVRSystem_IVRSystem_005_GetDXGIOutputInfo(void *linux_side, int32_t * pnAdapterIndex, int32_t * pnAdapterOutputIndex)
{
    ((IVRSystem*)linux_side)->GetDXGIOutputInfo((int32_t *)pnAdapterIndex, (int32_t *)pnAdapterOutputIndex);
}

bool cppIVRSystem_IVRSystem_005_AttachToWindow(void *linux_side, void * hWnd)
{
    return ((IVRSystem*)linux_side)->AttachToWindow((void *)hWnd);
}

void cppIVRSystem_IVRSystem_005_GetDeviceToAbsoluteTrackingPose(void *linux_side, TrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t * pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    ((IVRSystem*)linux_side)->GetDeviceToAbsoluteTrackingPose((vr::TrackingUniverseOrigin)eOrigin, (float)fPredictedSecondsToPhotonsFromNow, (vr::TrackedDevicePose_t *)pTrackedDevicePoseArray, (uint32_t)unTrackedDevicePoseArrayCount);
}

void cppIVRSystem_IVRSystem_005_ResetSeatedZeroPose(void *linux_side)
{
    ((IVRSystem*)linux_side)->ResetSeatedZeroPose();
}

vr::HmdMatrix34_t cppIVRSystem_IVRSystem_005_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(void *linux_side)
{
    return ((IVRSystem*)linux_side)->GetSeatedZeroPoseToStandingAbsoluteTrackingPose();
}

uint32_t cppIVRSystem_IVRSystem_005_GetSortedTrackedDeviceIndicesOfClass(void *linux_side, TrackedDeviceClass eTrackedDeviceClass, TrackedDeviceIndex_t * punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex)
{
    return ((IVRSystem*)linux_side)->GetSortedTrackedDeviceIndicesOfClass((vr::TrackedDeviceClass)eTrackedDeviceClass, (vr::TrackedDeviceIndex_t *)punTrackedDeviceIndexArray, (uint32_t)unTrackedDeviceIndexArrayCount, (vr::TrackedDeviceIndex_t)unRelativeToTrackedDeviceIndex);
}

vr::TrackedDeviceClass cppIVRSystem_IVRSystem_005_GetTrackedDeviceClass(void *linux_side, TrackedDeviceIndex_t unDeviceIndex)
{
    return ((IVRSystem*)linux_side)->GetTrackedDeviceClass((vr::TrackedDeviceIndex_t)unDeviceIndex);
}

bool cppIVRSystem_IVRSystem_005_IsTrackedDeviceConnected(void *linux_side, TrackedDeviceIndex_t unDeviceIndex)
{
    return ((IVRSystem*)linux_side)->IsTrackedDeviceConnected((vr::TrackedDeviceIndex_t)unDeviceIndex);
}

bool cppIVRSystem_IVRSystem_005_GetBoolTrackedDeviceProperty(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError * pError)
{
    return ((IVRSystem*)linux_side)->GetBoolTrackedDeviceProperty((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::TrackedDeviceProperty)prop, (vr::TrackedPropertyError *)pError);
}

float cppIVRSystem_IVRSystem_005_GetFloatTrackedDeviceProperty(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError * pError)
{
    return ((IVRSystem*)linux_side)->GetFloatTrackedDeviceProperty((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::TrackedDeviceProperty)prop, (vr::TrackedPropertyError *)pError);
}

int32_t cppIVRSystem_IVRSystem_005_GetInt32TrackedDeviceProperty(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError * pError)
{
    return ((IVRSystem*)linux_side)->GetInt32TrackedDeviceProperty((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::TrackedDeviceProperty)prop, (vr::TrackedPropertyError *)pError);
}

uint64_t cppIVRSystem_IVRSystem_005_GetUint64TrackedDeviceProperty(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError * pError)
{
    return ((IVRSystem*)linux_side)->GetUint64TrackedDeviceProperty((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::TrackedDeviceProperty)prop, (vr::TrackedPropertyError *)pError);
}

vr::HmdMatrix34_t cppIVRSystem_IVRSystem_005_GetMatrix34TrackedDeviceProperty(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError * pError)
{
    return ((IVRSystem*)linux_side)->GetMatrix34TrackedDeviceProperty((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::TrackedDeviceProperty)prop, (vr::TrackedPropertyError *)pError);
}

uint32_t cppIVRSystem_IVRSystem_005_GetStringTrackedDeviceProperty(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, char * pchValue, uint32_t unBufferSize, TrackedPropertyError * pError)
{
    return ((IVRSystem*)linux_side)->GetStringTrackedDeviceProperty((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::TrackedDeviceProperty)prop, (char *)pchValue, (uint32_t)unBufferSize, (vr::TrackedPropertyError *)pError);
}

const char * cppIVRSystem_IVRSystem_005_GetPropErrorNameFromEnum(void *linux_side, TrackedPropertyError error)
{
    return ((IVRSystem*)linux_side)->GetPropErrorNameFromEnum((vr::TrackedPropertyError)error);
}

bool cppIVRSystem_IVRSystem_005_PollNextEvent(void *linux_side, VREvent_t * pEvent)
{
    return ((IVRSystem*)linux_side)->PollNextEvent((vr::VREvent_t *)pEvent);
}

bool cppIVRSystem_IVRSystem_005_PollNextEventWithPose(void *linux_side, TrackingUniverseOrigin eOrigin, VREvent_t * pEvent, TrackedDevicePose_t * pTrackedDevicePose)
{
    return ((IVRSystem*)linux_side)->PollNextEventWithPose((vr::TrackingUniverseOrigin)eOrigin, (vr::VREvent_t *)pEvent, (vr::TrackedDevicePose_t *)pTrackedDevicePose);
}

const char * cppIVRSystem_IVRSystem_005_GetEventTypeNameFromEnum(void *linux_side, EVREventType eType)
{
    return ((IVRSystem*)linux_side)->GetEventTypeNameFromEnum((vr::EVREventType)eType);
}

vr::HiddenAreaMesh_t cppIVRSystem_IVRSystem_005_GetHiddenAreaMesh(void *linux_side, Hmd_Eye eEye)
{
    return ((IVRSystem*)linux_side)->GetHiddenAreaMesh((vr::Hmd_Eye)eEye);
}

bool cppIVRSystem_IVRSystem_005_GetControllerState(void *linux_side, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_098 * pControllerState)
{
    VRControllerState001_t lin;
    bool _ret;
    if(pControllerState)
        struct_VRControllerState001_t_098_win_to_lin(pControllerState, &lin);
    _ret = ((IVRSystem*)linux_side)->GetControllerState((vr::TrackedDeviceIndex_t)unControllerDeviceIndex, pControllerState ? &lin : nullptr);
    if(pControllerState)
        struct_VRControllerState001_t_098_lin_to_win(&lin, pControllerState, -1);
    return _ret;
}

bool cppIVRSystem_IVRSystem_005_GetControllerStateWithPose(void *linux_side, TrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_098 * pControllerState, TrackedDevicePose_t * pTrackedDevicePose)
{
    VRControllerState001_t lin;
    bool _ret;
    if(pControllerState)
        struct_VRControllerState001_t_098_win_to_lin(pControllerState, &lin);
    _ret = ((IVRSystem*)linux_side)->GetControllerStateWithPose((vr::TrackingUniverseOrigin)eOrigin, (vr::TrackedDeviceIndex_t)unControllerDeviceIndex, pControllerState ? &lin : nullptr, (vr::TrackedDevicePose_t *)pTrackedDevicePose);
    if(pControllerState)
        struct_VRControllerState001_t_098_lin_to_win(&lin, pControllerState, -1);
    return _ret;
}

void cppIVRSystem_IVRSystem_005_TriggerHapticPulse(void *linux_side, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    ((IVRSystem*)linux_side)->TriggerHapticPulse((vr::TrackedDeviceIndex_t)unControllerDeviceIndex, (uint32_t)unAxisId, (unsigned short)usDurationMicroSec);
}

const char * cppIVRSystem_IVRSystem_005_GetButtonIdNameFromEnum(void *linux_side, EVRButtonId eButtonId)
{
    return ((IVRSystem*)linux_side)->GetButtonIdNameFromEnum((vr::EVRButtonId)eButtonId);
}

const char * cppIVRSystem_IVRSystem_005_GetControllerAxisTypeNameFromEnum(void *linux_side, EVRControllerAxisType eAxisType)
{
    return ((IVRSystem*)linux_side)->GetControllerAxisTypeNameFromEnum((vr::EVRControllerAxisType)eAxisType);
}

bool cppIVRSystem_IVRSystem_005_CaptureInputFocus(void *linux_side)
{
    return ((IVRSystem*)linux_side)->CaptureInputFocus();
}

void cppIVRSystem_IVRSystem_005_ReleaseInputFocus(void *linux_side)
{
    ((IVRSystem*)linux_side)->ReleaseInputFocus();
}

bool cppIVRSystem_IVRSystem_005_IsInputFocusCapturedByAnotherProcess(void *linux_side)
{
    return ((IVRSystem*)linux_side)->IsInputFocusCapturedByAnotherProcess();
}

uint32_t cppIVRSystem_IVRSystem_005_DriverDebugRequest(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, const char * pchRequest, char * pchResponseBuffer, uint32_t unResponseBufferSize)
{
    return ((IVRSystem*)linux_side)->DriverDebugRequest((vr::TrackedDeviceIndex_t)unDeviceIndex, (const char *)pchRequest, (char *)pchResponseBuffer, (uint32_t)unResponseBufferSize);
}

#ifdef __cplusplus
}
#endif
