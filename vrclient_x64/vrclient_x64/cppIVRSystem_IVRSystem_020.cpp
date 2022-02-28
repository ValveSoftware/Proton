#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.7.15/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRSystem_IVRSystem_020.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVRSystem_IVRSystem_020_GetRecommendedRenderTargetSize(void *linux_side, uint32_t * pnWidth, uint32_t * pnHeight)
{
    ((IVRSystem*)linux_side)->GetRecommendedRenderTargetSize((uint32_t *)pnWidth, (uint32_t *)pnHeight);
}

vr::HmdMatrix44_t cppIVRSystem_IVRSystem_020_GetProjectionMatrix(void *linux_side, EVREye eEye, float fNearZ, float fFarZ)
{
    return ((IVRSystem*)linux_side)->GetProjectionMatrix((vr::EVREye)eEye, (float)fNearZ, (float)fFarZ);
}

void cppIVRSystem_IVRSystem_020_GetProjectionRaw(void *linux_side, EVREye eEye, float * pfLeft, float * pfRight, float * pfTop, float * pfBottom)
{
    ((IVRSystem*)linux_side)->GetProjectionRaw((vr::EVREye)eEye, (float *)pfLeft, (float *)pfRight, (float *)pfTop, (float *)pfBottom);
}

bool cppIVRSystem_IVRSystem_020_ComputeDistortion(void *linux_side, EVREye eEye, float fU, float fV, DistortionCoordinates_t * pDistortionCoordinates)
{
    return ((IVRSystem*)linux_side)->ComputeDistortion((vr::EVREye)eEye, (float)fU, (float)fV, (vr::DistortionCoordinates_t *)pDistortionCoordinates);
}

vr::HmdMatrix34_t cppIVRSystem_IVRSystem_020_GetEyeToHeadTransform(void *linux_side, EVREye eEye)
{
    return ((IVRSystem*)linux_side)->GetEyeToHeadTransform((vr::EVREye)eEye);
}

bool cppIVRSystem_IVRSystem_020_GetTimeSinceLastVsync(void *linux_side, float * pfSecondsSinceLastVsync, uint64_t * pulFrameCounter)
{
    return ((IVRSystem*)linux_side)->GetTimeSinceLastVsync((float *)pfSecondsSinceLastVsync, (uint64_t *)pulFrameCounter);
}

int32_t cppIVRSystem_IVRSystem_020_GetD3D9AdapterIndex(void *linux_side)
{
    return ((IVRSystem*)linux_side)->GetD3D9AdapterIndex();
}

void cppIVRSystem_IVRSystem_020_GetDXGIOutputInfo(void *linux_side, int32_t * pnAdapterIndex)
{
    ((IVRSystem*)linux_side)->GetDXGIOutputInfo((int32_t *)pnAdapterIndex);
}

void cppIVRSystem_IVRSystem_020_GetOutputDevice(void *linux_side, uint64_t * pnDevice, ETextureType textureType, VkInstance_T * pInstance)
{
    ((IVRSystem*)linux_side)->GetOutputDevice((uint64_t *)pnDevice, (vr::ETextureType)textureType, (VkInstance_T *)pInstance);
}

bool cppIVRSystem_IVRSystem_020_IsDisplayOnDesktop(void *linux_side)
{
    return ((IVRSystem*)linux_side)->IsDisplayOnDesktop();
}

bool cppIVRSystem_IVRSystem_020_SetDisplayVisibility(void *linux_side, bool bIsVisibleOnDesktop)
{
    return ((IVRSystem*)linux_side)->SetDisplayVisibility((bool)bIsVisibleOnDesktop);
}

void cppIVRSystem_IVRSystem_020_GetDeviceToAbsoluteTrackingPose(void *linux_side, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t * pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    ((IVRSystem*)linux_side)->GetDeviceToAbsoluteTrackingPose((vr::ETrackingUniverseOrigin)eOrigin, (float)fPredictedSecondsToPhotonsFromNow, (vr::TrackedDevicePose_t *)pTrackedDevicePoseArray, (uint32_t)unTrackedDevicePoseArrayCount);
}

void cppIVRSystem_IVRSystem_020_ResetSeatedZeroPose(void *linux_side)
{
    ((IVRSystem*)linux_side)->ResetSeatedZeroPose();
}

vr::HmdMatrix34_t cppIVRSystem_IVRSystem_020_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(void *linux_side)
{
    return ((IVRSystem*)linux_side)->GetSeatedZeroPoseToStandingAbsoluteTrackingPose();
}

vr::HmdMatrix34_t cppIVRSystem_IVRSystem_020_GetRawZeroPoseToStandingAbsoluteTrackingPose(void *linux_side)
{
    return ((IVRSystem*)linux_side)->GetRawZeroPoseToStandingAbsoluteTrackingPose();
}

uint32_t cppIVRSystem_IVRSystem_020_GetSortedTrackedDeviceIndicesOfClass(void *linux_side, ETrackedDeviceClass eTrackedDeviceClass, TrackedDeviceIndex_t * punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex)
{
    return ((IVRSystem*)linux_side)->GetSortedTrackedDeviceIndicesOfClass((vr::ETrackedDeviceClass)eTrackedDeviceClass, (vr::TrackedDeviceIndex_t *)punTrackedDeviceIndexArray, (uint32_t)unTrackedDeviceIndexArrayCount, (vr::TrackedDeviceIndex_t)unRelativeToTrackedDeviceIndex);
}

vr::EDeviceActivityLevel cppIVRSystem_IVRSystem_020_GetTrackedDeviceActivityLevel(void *linux_side, TrackedDeviceIndex_t unDeviceId)
{
    return ((IVRSystem*)linux_side)->GetTrackedDeviceActivityLevel((vr::TrackedDeviceIndex_t)unDeviceId);
}

void cppIVRSystem_IVRSystem_020_ApplyTransform(void *linux_side, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pTrackedDevicePose, HmdMatrix34_t * pTransform)
{
    ((IVRSystem*)linux_side)->ApplyTransform((vr::TrackedDevicePose_t *)pOutputPose, (const vr::TrackedDevicePose_t *)pTrackedDevicePose, (const vr::HmdMatrix34_t *)pTransform);
}

vr::TrackedDeviceIndex_t cppIVRSystem_IVRSystem_020_GetTrackedDeviceIndexForControllerRole(void *linux_side, ETrackedControllerRole unDeviceType)
{
    return ((IVRSystem*)linux_side)->GetTrackedDeviceIndexForControllerRole((vr::ETrackedControllerRole)unDeviceType);
}

vr::ETrackedControllerRole cppIVRSystem_IVRSystem_020_GetControllerRoleForTrackedDeviceIndex(void *linux_side, TrackedDeviceIndex_t unDeviceIndex)
{
    return ((IVRSystem*)linux_side)->GetControllerRoleForTrackedDeviceIndex((vr::TrackedDeviceIndex_t)unDeviceIndex);
}

vr::ETrackedDeviceClass cppIVRSystem_IVRSystem_020_GetTrackedDeviceClass(void *linux_side, TrackedDeviceIndex_t unDeviceIndex)
{
    return ((IVRSystem*)linux_side)->GetTrackedDeviceClass((vr::TrackedDeviceIndex_t)unDeviceIndex);
}

bool cppIVRSystem_IVRSystem_020_IsTrackedDeviceConnected(void *linux_side, TrackedDeviceIndex_t unDeviceIndex)
{
    return ((IVRSystem*)linux_side)->IsTrackedDeviceConnected((vr::TrackedDeviceIndex_t)unDeviceIndex);
}

bool cppIVRSystem_IVRSystem_020_GetBoolTrackedDeviceProperty(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    return ((IVRSystem*)linux_side)->GetBoolTrackedDeviceProperty((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::ETrackedDeviceProperty)prop, (vr::ETrackedPropertyError *)pError);
}

float cppIVRSystem_IVRSystem_020_GetFloatTrackedDeviceProperty(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    return ((IVRSystem*)linux_side)->GetFloatTrackedDeviceProperty((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::ETrackedDeviceProperty)prop, (vr::ETrackedPropertyError *)pError);
}

int32_t cppIVRSystem_IVRSystem_020_GetInt32TrackedDeviceProperty(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    return ((IVRSystem*)linux_side)->GetInt32TrackedDeviceProperty((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::ETrackedDeviceProperty)prop, (vr::ETrackedPropertyError *)pError);
}

uint64_t cppIVRSystem_IVRSystem_020_GetUint64TrackedDeviceProperty(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    return ((IVRSystem*)linux_side)->GetUint64TrackedDeviceProperty((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::ETrackedDeviceProperty)prop, (vr::ETrackedPropertyError *)pError);
}

vr::HmdMatrix34_t cppIVRSystem_IVRSystem_020_GetMatrix34TrackedDeviceProperty(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    return ((IVRSystem*)linux_side)->GetMatrix34TrackedDeviceProperty((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::ETrackedDeviceProperty)prop, (vr::ETrackedPropertyError *)pError);
}

uint32_t cppIVRSystem_IVRSystem_020_GetArrayTrackedDeviceProperty(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, PropertyTypeTag_t propType, void * pBuffer, uint32_t unBufferSize, ETrackedPropertyError * pError)
{
    return ((IVRSystem*)linux_side)->GetArrayTrackedDeviceProperty((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::ETrackedDeviceProperty)prop, (vr::PropertyTypeTag_t)propType, (void *)pBuffer, (uint32_t)unBufferSize, (vr::ETrackedPropertyError *)pError);
}

uint32_t cppIVRSystem_IVRSystem_020_GetStringTrackedDeviceProperty(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, char * pchValue, uint32_t unBufferSize, ETrackedPropertyError * pError)
{
    return ((IVRSystem*)linux_side)->GetStringTrackedDeviceProperty((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::ETrackedDeviceProperty)prop, (char *)pchValue, (uint32_t)unBufferSize, (vr::ETrackedPropertyError *)pError);
}

const char * cppIVRSystem_IVRSystem_020_GetPropErrorNameFromEnum(void *linux_side, ETrackedPropertyError error)
{
    return ((IVRSystem*)linux_side)->GetPropErrorNameFromEnum((vr::ETrackedPropertyError)error);
}

bool cppIVRSystem_IVRSystem_020_PollNextEvent(void *linux_side, winVREvent_t_1715 * pEvent, uint32_t uncbVREvent)
{
    VREvent_t lin;
    bool _ret;
    if(pEvent)
        struct_VREvent_t_1715_win_to_lin(pEvent, &lin);
    _ret = ((IVRSystem*)linux_side)->PollNextEvent(pEvent ? &lin : nullptr, uncbVREvent ? sizeof(lin) : 0);
    if(pEvent)
        struct_VREvent_t_1715_lin_to_win(&lin, pEvent, uncbVREvent);
    return _ret;
}

bool cppIVRSystem_IVRSystem_020_PollNextEventWithPose(void *linux_side, ETrackingUniverseOrigin eOrigin, winVREvent_t_1715 * pEvent, uint32_t uncbVREvent, TrackedDevicePose_t * pTrackedDevicePose)
{
    VREvent_t lin;
    bool _ret;
    if(pEvent)
        struct_VREvent_t_1715_win_to_lin(pEvent, &lin);
    _ret = ((IVRSystem*)linux_side)->PollNextEventWithPose((vr::ETrackingUniverseOrigin)eOrigin, pEvent ? &lin : nullptr, uncbVREvent ? sizeof(lin) : 0, (vr::TrackedDevicePose_t *)pTrackedDevicePose);
    if(pEvent)
        struct_VREvent_t_1715_lin_to_win(&lin, pEvent, uncbVREvent);
    return _ret;
}

const char * cppIVRSystem_IVRSystem_020_GetEventTypeNameFromEnum(void *linux_side, EVREventType eType)
{
    return ((IVRSystem*)linux_side)->GetEventTypeNameFromEnum((vr::EVREventType)eType);
}

vr::HiddenAreaMesh_t cppIVRSystem_IVRSystem_020_GetHiddenAreaMesh(void *linux_side, EVREye eEye, EHiddenAreaMeshType type)
{
    return ((IVRSystem*)linux_side)->GetHiddenAreaMesh((vr::EVREye)eEye, (vr::EHiddenAreaMeshType)type);
}

bool cppIVRSystem_IVRSystem_020_GetControllerState(void *linux_side, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_1715 * pControllerState, uint32_t unControllerStateSize)
{
    VRControllerState001_t lin;
    bool _ret;
    if(pControllerState)
        struct_VRControllerState001_t_1715_win_to_lin(pControllerState, &lin);
    _ret = ((IVRSystem*)linux_side)->GetControllerState((vr::TrackedDeviceIndex_t)unControllerDeviceIndex, pControllerState ? &lin : nullptr, unControllerStateSize ? sizeof(lin) : 0);
    if(pControllerState)
        struct_VRControllerState001_t_1715_lin_to_win(&lin, pControllerState, unControllerStateSize);
    return _ret;
}

bool cppIVRSystem_IVRSystem_020_GetControllerStateWithPose(void *linux_side, ETrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_1715 * pControllerState, uint32_t unControllerStateSize, TrackedDevicePose_t * pTrackedDevicePose)
{
    VRControllerState001_t lin;
    bool _ret;
    if(pControllerState)
        struct_VRControllerState001_t_1715_win_to_lin(pControllerState, &lin);
    _ret = ((IVRSystem*)linux_side)->GetControllerStateWithPose((vr::ETrackingUniverseOrigin)eOrigin, (vr::TrackedDeviceIndex_t)unControllerDeviceIndex, pControllerState ? &lin : nullptr, unControllerStateSize ? sizeof(lin) : 0, (vr::TrackedDevicePose_t *)pTrackedDevicePose);
    if(pControllerState)
        struct_VRControllerState001_t_1715_lin_to_win(&lin, pControllerState, unControllerStateSize);
    return _ret;
}

void cppIVRSystem_IVRSystem_020_TriggerHapticPulse(void *linux_side, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    ((IVRSystem*)linux_side)->TriggerHapticPulse((vr::TrackedDeviceIndex_t)unControllerDeviceIndex, (uint32_t)unAxisId, (unsigned short)usDurationMicroSec);
}

const char * cppIVRSystem_IVRSystem_020_GetButtonIdNameFromEnum(void *linux_side, EVRButtonId eButtonId)
{
    return ((IVRSystem*)linux_side)->GetButtonIdNameFromEnum((vr::EVRButtonId)eButtonId);
}

const char * cppIVRSystem_IVRSystem_020_GetControllerAxisTypeNameFromEnum(void *linux_side, EVRControllerAxisType eAxisType)
{
    return ((IVRSystem*)linux_side)->GetControllerAxisTypeNameFromEnum((vr::EVRControllerAxisType)eAxisType);
}

bool cppIVRSystem_IVRSystem_020_IsInputAvailable(void *linux_side)
{
    return ((IVRSystem*)linux_side)->IsInputAvailable();
}

bool cppIVRSystem_IVRSystem_020_IsSteamVRDrawingControllers(void *linux_side)
{
    return ((IVRSystem*)linux_side)->IsSteamVRDrawingControllers();
}

bool cppIVRSystem_IVRSystem_020_ShouldApplicationPause(void *linux_side)
{
    return ((IVRSystem*)linux_side)->ShouldApplicationPause();
}

bool cppIVRSystem_IVRSystem_020_ShouldApplicationReduceRenderingWork(void *linux_side)
{
    return ((IVRSystem*)linux_side)->ShouldApplicationReduceRenderingWork();
}

vr::EVRFirmwareError cppIVRSystem_IVRSystem_020_PerformFirmwareUpdate(void *linux_side, TrackedDeviceIndex_t unDeviceIndex)
{
    return ((IVRSystem*)linux_side)->PerformFirmwareUpdate((vr::TrackedDeviceIndex_t)unDeviceIndex);
}

void cppIVRSystem_IVRSystem_020_AcknowledgeQuit_Exiting(void *linux_side)
{
    ((IVRSystem*)linux_side)->AcknowledgeQuit_Exiting();
}

void cppIVRSystem_IVRSystem_020_AcknowledgeQuit_UserPrompt(void *linux_side)
{
    ((IVRSystem*)linux_side)->AcknowledgeQuit_UserPrompt();
}

uint32_t cppIVRSystem_IVRSystem_020_GetAppContainerFilePaths(void *linux_side, char * pchBuffer, uint32_t unBufferSize)
{
    return ((IVRSystem*)linux_side)->GetAppContainerFilePaths((char *)pchBuffer, (uint32_t)unBufferSize);
}

const char * cppIVRSystem_IVRSystem_020_GetRuntimeVersion(void *linux_side)
{
    return ((IVRSystem*)linux_side)->GetRuntimeVersion();
}

#ifdef __cplusplus
}
#endif
