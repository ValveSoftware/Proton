#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.26.7/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRSystem_IVRSystem_022.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVRSystem_IVRSystem_022_GetRecommendedRenderTargetSize(void *linux_side, uint32_t *pnWidth, uint32_t *pnHeight)
{
    ((IVRSystem*)linux_side)->GetRecommendedRenderTargetSize((uint32_t *)pnWidth, (uint32_t *)pnHeight);
}

HmdMatrix44_t cppIVRSystem_IVRSystem_022_GetProjectionMatrix(void *linux_side, EVREye eEye, float fNearZ, float fFarZ)
{
    HmdMatrix44_t _ret;
    _ret = ((IVRSystem*)linux_side)->GetProjectionMatrix((vr::EVREye)eEye, (float)fNearZ, (float)fFarZ);
    return _ret;
}

void cppIVRSystem_IVRSystem_022_GetProjectionRaw(void *linux_side, EVREye eEye, float *pfLeft, float *pfRight, float *pfTop, float *pfBottom)
{
    ((IVRSystem*)linux_side)->GetProjectionRaw((vr::EVREye)eEye, (float *)pfLeft, (float *)pfRight, (float *)pfTop, (float *)pfBottom);
}

bool cppIVRSystem_IVRSystem_022_ComputeDistortion(void *linux_side, EVREye eEye, float fU, float fV, DistortionCoordinates_t *pDistortionCoordinates)
{
    bool _ret;
    _ret = ((IVRSystem*)linux_side)->ComputeDistortion((vr::EVREye)eEye, (float)fU, (float)fV, (vr::DistortionCoordinates_t *)pDistortionCoordinates);
    return _ret;
}

HmdMatrix34_t cppIVRSystem_IVRSystem_022_GetEyeToHeadTransform(void *linux_side, EVREye eEye)
{
    HmdMatrix34_t _ret;
    _ret = ((IVRSystem*)linux_side)->GetEyeToHeadTransform((vr::EVREye)eEye);
    return _ret;
}

bool cppIVRSystem_IVRSystem_022_GetTimeSinceLastVsync(void *linux_side, float *pfSecondsSinceLastVsync, uint64_t *pulFrameCounter)
{
    bool _ret;
    _ret = ((IVRSystem*)linux_side)->GetTimeSinceLastVsync((float *)pfSecondsSinceLastVsync, (uint64_t *)pulFrameCounter);
    return _ret;
}

int32_t cppIVRSystem_IVRSystem_022_GetD3D9AdapterIndex(void *linux_side)
{
    int32_t _ret;
    _ret = ((IVRSystem*)linux_side)->GetD3D9AdapterIndex();
    return _ret;
}

void cppIVRSystem_IVRSystem_022_GetDXGIOutputInfo(void *linux_side, int32_t *pnAdapterIndex)
{
    ((IVRSystem*)linux_side)->GetDXGIOutputInfo((int32_t *)pnAdapterIndex);
}

void cppIVRSystem_IVRSystem_022_GetOutputDevice(void *linux_side, uint64_t *pnDevice, ETextureType textureType, VkInstance_T *pInstance)
{
    ((IVRSystem*)linux_side)->GetOutputDevice((uint64_t *)pnDevice, (vr::ETextureType)textureType, (VkInstance_T *)pInstance);
}

bool cppIVRSystem_IVRSystem_022_IsDisplayOnDesktop(void *linux_side)
{
    bool _ret;
    _ret = ((IVRSystem*)linux_side)->IsDisplayOnDesktop();
    return _ret;
}

bool cppIVRSystem_IVRSystem_022_SetDisplayVisibility(void *linux_side, bool bIsVisibleOnDesktop)
{
    bool _ret;
    _ret = ((IVRSystem*)linux_side)->SetDisplayVisibility((bool)bIsVisibleOnDesktop);
    return _ret;
}

void cppIVRSystem_IVRSystem_022_GetDeviceToAbsoluteTrackingPose(void *linux_side, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t *pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    ((IVRSystem*)linux_side)->GetDeviceToAbsoluteTrackingPose((vr::ETrackingUniverseOrigin)eOrigin, (float)fPredictedSecondsToPhotonsFromNow, (vr::TrackedDevicePose_t *)pTrackedDevicePoseArray, (uint32_t)unTrackedDevicePoseArrayCount);
}

HmdMatrix34_t cppIVRSystem_IVRSystem_022_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(void *linux_side)
{
    HmdMatrix34_t _ret;
    _ret = ((IVRSystem*)linux_side)->GetSeatedZeroPoseToStandingAbsoluteTrackingPose();
    return _ret;
}

HmdMatrix34_t cppIVRSystem_IVRSystem_022_GetRawZeroPoseToStandingAbsoluteTrackingPose(void *linux_side)
{
    HmdMatrix34_t _ret;
    _ret = ((IVRSystem*)linux_side)->GetRawZeroPoseToStandingAbsoluteTrackingPose();
    return _ret;
}

uint32_t cppIVRSystem_IVRSystem_022_GetSortedTrackedDeviceIndicesOfClass(void *linux_side, ETrackedDeviceClass eTrackedDeviceClass, TrackedDeviceIndex_t *punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex)
{
    uint32_t _ret;
    _ret = ((IVRSystem*)linux_side)->GetSortedTrackedDeviceIndicesOfClass((vr::ETrackedDeviceClass)eTrackedDeviceClass, (vr::TrackedDeviceIndex_t *)punTrackedDeviceIndexArray, (uint32_t)unTrackedDeviceIndexArrayCount, (vr::TrackedDeviceIndex_t)unRelativeToTrackedDeviceIndex);
    return _ret;
}

EDeviceActivityLevel cppIVRSystem_IVRSystem_022_GetTrackedDeviceActivityLevel(void *linux_side, TrackedDeviceIndex_t unDeviceId)
{
    EDeviceActivityLevel _ret;
    _ret = ((IVRSystem*)linux_side)->GetTrackedDeviceActivityLevel((vr::TrackedDeviceIndex_t)unDeviceId);
    return _ret;
}

void cppIVRSystem_IVRSystem_022_ApplyTransform(void *linux_side, TrackedDevicePose_t *pOutputPose, const TrackedDevicePose_t *pTrackedDevicePose, const HmdMatrix34_t *pTransform)
{
    ((IVRSystem*)linux_side)->ApplyTransform((vr::TrackedDevicePose_t *)pOutputPose, (const vr::TrackedDevicePose_t *)pTrackedDevicePose, (const vr::HmdMatrix34_t *)pTransform);
}

TrackedDeviceIndex_t cppIVRSystem_IVRSystem_022_GetTrackedDeviceIndexForControllerRole(void *linux_side, ETrackedControllerRole unDeviceType)
{
    TrackedDeviceIndex_t _ret;
    _ret = ((IVRSystem*)linux_side)->GetTrackedDeviceIndexForControllerRole((vr::ETrackedControllerRole)unDeviceType);
    return _ret;
}

ETrackedControllerRole cppIVRSystem_IVRSystem_022_GetControllerRoleForTrackedDeviceIndex(void *linux_side, TrackedDeviceIndex_t unDeviceIndex)
{
    ETrackedControllerRole _ret;
    _ret = ((IVRSystem*)linux_side)->GetControllerRoleForTrackedDeviceIndex((vr::TrackedDeviceIndex_t)unDeviceIndex);
    return _ret;
}

ETrackedDeviceClass cppIVRSystem_IVRSystem_022_GetTrackedDeviceClass(void *linux_side, TrackedDeviceIndex_t unDeviceIndex)
{
    ETrackedDeviceClass _ret;
    _ret = ((IVRSystem*)linux_side)->GetTrackedDeviceClass((vr::TrackedDeviceIndex_t)unDeviceIndex);
    return _ret;
}

bool cppIVRSystem_IVRSystem_022_IsTrackedDeviceConnected(void *linux_side, TrackedDeviceIndex_t unDeviceIndex)
{
    bool _ret;
    _ret = ((IVRSystem*)linux_side)->IsTrackedDeviceConnected((vr::TrackedDeviceIndex_t)unDeviceIndex);
    return _ret;
}

bool cppIVRSystem_IVRSystem_022_GetBoolTrackedDeviceProperty(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    bool _ret;
    _ret = ((IVRSystem*)linux_side)->GetBoolTrackedDeviceProperty((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::ETrackedDeviceProperty)prop, (vr::ETrackedPropertyError *)pError);
    return _ret;
}

float cppIVRSystem_IVRSystem_022_GetFloatTrackedDeviceProperty(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    float _ret;
    _ret = ((IVRSystem*)linux_side)->GetFloatTrackedDeviceProperty((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::ETrackedDeviceProperty)prop, (vr::ETrackedPropertyError *)pError);
    return _ret;
}

int32_t cppIVRSystem_IVRSystem_022_GetInt32TrackedDeviceProperty(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    int32_t _ret;
    _ret = ((IVRSystem*)linux_side)->GetInt32TrackedDeviceProperty((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::ETrackedDeviceProperty)prop, (vr::ETrackedPropertyError *)pError);
    return _ret;
}

uint64_t cppIVRSystem_IVRSystem_022_GetUint64TrackedDeviceProperty(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    uint64_t _ret;
    _ret = ((IVRSystem*)linux_side)->GetUint64TrackedDeviceProperty((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::ETrackedDeviceProperty)prop, (vr::ETrackedPropertyError *)pError);
    return _ret;
}

HmdMatrix34_t cppIVRSystem_IVRSystem_022_GetMatrix34TrackedDeviceProperty(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    HmdMatrix34_t _ret;
    _ret = ((IVRSystem*)linux_side)->GetMatrix34TrackedDeviceProperty((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::ETrackedDeviceProperty)prop, (vr::ETrackedPropertyError *)pError);
    return _ret;
}

uint32_t cppIVRSystem_IVRSystem_022_GetArrayTrackedDeviceProperty(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, PropertyTypeTag_t propType, void *pBuffer, uint32_t unBufferSize, ETrackedPropertyError *pError)
{
    uint32_t _ret;
    _ret = ((IVRSystem*)linux_side)->GetArrayTrackedDeviceProperty((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::ETrackedDeviceProperty)prop, (vr::PropertyTypeTag_t)propType, (void *)pBuffer, (uint32_t)unBufferSize, (vr::ETrackedPropertyError *)pError);
    return _ret;
}

uint32_t cppIVRSystem_IVRSystem_022_GetStringTrackedDeviceProperty(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, char *pchValue, uint32_t unBufferSize, ETrackedPropertyError *pError)
{
    uint32_t _ret;
    _ret = ((IVRSystem*)linux_side)->GetStringTrackedDeviceProperty((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::ETrackedDeviceProperty)prop, (char *)pchValue, (uint32_t)unBufferSize, (vr::ETrackedPropertyError *)pError);
    return _ret;
}

const char * cppIVRSystem_IVRSystem_022_GetPropErrorNameFromEnum(void *linux_side, ETrackedPropertyError error)
{
    const char *_ret;
    _ret = ((IVRSystem*)linux_side)->GetPropErrorNameFromEnum((vr::ETrackedPropertyError)error);
    return _ret;
}

bool cppIVRSystem_IVRSystem_022_PollNextEvent(void *linux_side, winVREvent_t_1267 *pEvent, uint32_t uncbVREvent)
{
    bool _ret;
    VREvent_t lin;
    if (pEvent)
        struct_VREvent_t_1267_win_to_lin(pEvent, &lin);
    uint32_t lin_uncbVREvent = uncbVREvent ? sizeof(lin) : 0;
    _ret = ((IVRSystem*)linux_side)->PollNextEvent(pEvent ? &lin : nullptr, lin_uncbVREvent);
    if (pEvent)
        struct_VREvent_t_1267_lin_to_win(&lin, pEvent, uncbVREvent);
    return _ret;
}

bool cppIVRSystem_IVRSystem_022_PollNextEventWithPose(void *linux_side, ETrackingUniverseOrigin eOrigin, winVREvent_t_1267 *pEvent, uint32_t uncbVREvent, TrackedDevicePose_t *pTrackedDevicePose)
{
    bool _ret;
    VREvent_t lin;
    if (pEvent)
        struct_VREvent_t_1267_win_to_lin(pEvent, &lin);
    uint32_t lin_uncbVREvent = uncbVREvent ? sizeof(lin) : 0;
    _ret = ((IVRSystem*)linux_side)->PollNextEventWithPose((vr::ETrackingUniverseOrigin)eOrigin, pEvent ? &lin : nullptr, lin_uncbVREvent, (vr::TrackedDevicePose_t *)pTrackedDevicePose);
    if (pEvent)
        struct_VREvent_t_1267_lin_to_win(&lin, pEvent, uncbVREvent);
    return _ret;
}

const char * cppIVRSystem_IVRSystem_022_GetEventTypeNameFromEnum(void *linux_side, EVREventType eType)
{
    const char *_ret;
    _ret = ((IVRSystem*)linux_side)->GetEventTypeNameFromEnum((vr::EVREventType)eType);
    return _ret;
}

HiddenAreaMesh_t cppIVRSystem_IVRSystem_022_GetHiddenAreaMesh(void *linux_side, EVREye eEye, EHiddenAreaMeshType type)
{
    HiddenAreaMesh_t _ret;
    _ret = ((IVRSystem*)linux_side)->GetHiddenAreaMesh((vr::EVREye)eEye, (vr::EHiddenAreaMeshType)type);
    return _ret;
}

bool cppIVRSystem_IVRSystem_022_GetControllerState(void *linux_side, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_1267 *pControllerState, uint32_t unControllerStateSize)
{
    bool _ret;
    VRControllerState001_t lin;
    if (pControllerState)
        struct_VRControllerState001_t_1267_win_to_lin(pControllerState, &lin);
    uint32_t lin_unControllerStateSize = unControllerStateSize ? sizeof(lin) : 0;
    _ret = ((IVRSystem*)linux_side)->GetControllerState((vr::TrackedDeviceIndex_t)unControllerDeviceIndex, pControllerState ? &lin : nullptr, lin_unControllerStateSize);
    if (pControllerState)
        struct_VRControllerState001_t_1267_lin_to_win(&lin, pControllerState, unControllerStateSize);
    return _ret;
}

bool cppIVRSystem_IVRSystem_022_GetControllerStateWithPose(void *linux_side, ETrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_1267 *pControllerState, uint32_t unControllerStateSize, TrackedDevicePose_t *pTrackedDevicePose)
{
    bool _ret;
    VRControllerState001_t lin;
    if (pControllerState)
        struct_VRControllerState001_t_1267_win_to_lin(pControllerState, &lin);
    uint32_t lin_unControllerStateSize = unControllerStateSize ? sizeof(lin) : 0;
    _ret = ((IVRSystem*)linux_side)->GetControllerStateWithPose((vr::ETrackingUniverseOrigin)eOrigin, (vr::TrackedDeviceIndex_t)unControllerDeviceIndex, pControllerState ? &lin : nullptr, lin_unControllerStateSize, (vr::TrackedDevicePose_t *)pTrackedDevicePose);
    if (pControllerState)
        struct_VRControllerState001_t_1267_lin_to_win(&lin, pControllerState, unControllerStateSize);
    return _ret;
}

void cppIVRSystem_IVRSystem_022_TriggerHapticPulse(void *linux_side, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    ((IVRSystem*)linux_side)->TriggerHapticPulse((vr::TrackedDeviceIndex_t)unControllerDeviceIndex, (uint32_t)unAxisId, (unsigned short)usDurationMicroSec);
}

const char * cppIVRSystem_IVRSystem_022_GetButtonIdNameFromEnum(void *linux_side, EVRButtonId eButtonId)
{
    const char *_ret;
    _ret = ((IVRSystem*)linux_side)->GetButtonIdNameFromEnum((vr::EVRButtonId)eButtonId);
    return _ret;
}

const char * cppIVRSystem_IVRSystem_022_GetControllerAxisTypeNameFromEnum(void *linux_side, EVRControllerAxisType eAxisType)
{
    const char *_ret;
    _ret = ((IVRSystem*)linux_side)->GetControllerAxisTypeNameFromEnum((vr::EVRControllerAxisType)eAxisType);
    return _ret;
}

bool cppIVRSystem_IVRSystem_022_IsInputAvailable(void *linux_side)
{
    bool _ret;
    _ret = ((IVRSystem*)linux_side)->IsInputAvailable();
    return _ret;
}

bool cppIVRSystem_IVRSystem_022_IsSteamVRDrawingControllers(void *linux_side)
{
    bool _ret;
    _ret = ((IVRSystem*)linux_side)->IsSteamVRDrawingControllers();
    return _ret;
}

bool cppIVRSystem_IVRSystem_022_ShouldApplicationPause(void *linux_side)
{
    bool _ret;
    _ret = ((IVRSystem*)linux_side)->ShouldApplicationPause();
    return _ret;
}

bool cppIVRSystem_IVRSystem_022_ShouldApplicationReduceRenderingWork(void *linux_side)
{
    bool _ret;
    _ret = ((IVRSystem*)linux_side)->ShouldApplicationReduceRenderingWork();
    return _ret;
}

EVRFirmwareError cppIVRSystem_IVRSystem_022_PerformFirmwareUpdate(void *linux_side, TrackedDeviceIndex_t unDeviceIndex)
{
    EVRFirmwareError _ret;
    _ret = ((IVRSystem*)linux_side)->PerformFirmwareUpdate((vr::TrackedDeviceIndex_t)unDeviceIndex);
    return _ret;
}

void cppIVRSystem_IVRSystem_022_AcknowledgeQuit_Exiting(void *linux_side)
{
    ((IVRSystem*)linux_side)->AcknowledgeQuit_Exiting();
}

uint32_t cppIVRSystem_IVRSystem_022_GetAppContainerFilePaths(void *linux_side, char *pchBuffer, uint32_t unBufferSize)
{
    uint32_t _ret;
    _ret = ((IVRSystem*)linux_side)->GetAppContainerFilePaths((char *)pchBuffer, (uint32_t)unBufferSize);
    return _ret;
}

const char * cppIVRSystem_IVRSystem_022_GetRuntimeVersion(void *linux_side)
{
    const char *_ret;
    _ret = ((IVRSystem*)linux_side)->GetRuntimeVersion();
    return _ret;
}

#ifdef __cplusplus
}
#endif
