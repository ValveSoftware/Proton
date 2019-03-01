/* This file is auto-generated, do not edit. */
#include "capi_thunks_autogen.h"

void __thiscall IVRSystem_019_GetRecommendedRenderTargetSize(void *_this, uint32_t * pnWidth, uint32_t * pnHeight)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pnWidth);
    push_ptr_parameter(pnHeight);
}

HmdMatrix44_t *__thiscall IVRSystem_019_GetProjectionMatrix(void *_this, HmdMatrix44_t *_r, EVREye eEye, float fNearZ, float fFarZ)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(eEye);
    push_float_parameter(fNearZ);
    push_float_parameter(fFarZ);
    return 0;
}

void __thiscall IVRSystem_019_GetProjectionRaw(void *_this, EVREye eEye, float * pfLeft, float * pfRight, float * pfTop, float * pfBottom)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pfLeft);
    push_ptr_parameter(pfRight);
    push_ptr_parameter(pfTop);
    push_ptr_parameter(pfBottom);
}

bool __thiscall IVRSystem_019_ComputeDistortion(void *_this, EVREye eEye, float fU, float fV, DistortionCoordinates_t * pDistortionCoordinates)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_float_parameter(fU);
    push_float_parameter(fV);
    push_ptr_parameter(pDistortionCoordinates);
    return 0;
}

HmdMatrix34_t *__thiscall IVRSystem_019_GetEyeToHeadTransform(void *_this, HmdMatrix34_t *_r, EVREye eEye)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(eEye);
    return 0;
}

bool __thiscall IVRSystem_019_GetTimeSinceLastVsync(void *_this, float * pfSecondsSinceLastVsync, uint64_t * pulFrameCounter)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pfSecondsSinceLastVsync);
    push_ptr_parameter(pulFrameCounter);
    return 0;
}

int32_t __thiscall IVRSystem_019_GetD3D9AdapterIndex(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRSystem_019_GetDXGIOutputInfo(void *_this, int32_t * pnAdapterIndex)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pnAdapterIndex);
}

void __thiscall IVRSystem_019_GetOutputDevice(void *_this, uint64_t * pnDevice, ETextureType textureType, VkInstance_T * pInstance)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pnDevice);
    push_uint32_parameter(textureType);
    push_ptr_parameter(pInstance);
}

bool __thiscall IVRSystem_019_IsDisplayOnDesktop(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVRSystem_019_SetDisplayVisibility(void *_this, bool bIsVisibleOnDesktop)
{
    push_ptr_parameter(_this);
    push_bool_parameter(bIsVisibleOnDesktop);
    return 0;
}

void __thiscall IVRSystem_019_GetDeviceToAbsoluteTrackingPose(void *_this, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t * pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
    push_float_parameter(fPredictedSecondsToPhotonsFromNow);
    push_ptr_parameter(pTrackedDevicePoseArray);
    push_uint32_parameter(unTrackedDevicePoseArrayCount);
}

void __thiscall IVRSystem_019_ResetSeatedZeroPose(void *_this)
{
    push_ptr_parameter(_this);
}

HmdMatrix34_t *__thiscall IVRSystem_019_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(void *_this, HmdMatrix34_t *_r)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    return 0;
}

HmdMatrix34_t *__thiscall IVRSystem_019_GetRawZeroPoseToStandingAbsoluteTrackingPose(void *_this, HmdMatrix34_t *_r)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    return 0;
}

uint32_t __thiscall IVRSystem_019_GetSortedTrackedDeviceIndicesOfClass(void *_this, ETrackedDeviceClass eTrackedDeviceClass, TrackedDeviceIndex_t * punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eTrackedDeviceClass);
    push_ptr_parameter(punTrackedDeviceIndexArray);
    push_uint32_parameter(unTrackedDeviceIndexArrayCount);
    push_uint32_parameter(unRelativeToTrackedDeviceIndex);
    return 0;
}

EDeviceActivityLevel __thiscall IVRSystem_019_GetTrackedDeviceActivityLevel(void *_this, TrackedDeviceIndex_t unDeviceId)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceId);
    return 0;
}

void __thiscall IVRSystem_019_ApplyTransform(void *_this, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pTrackedDevicePose, HmdMatrix34_t * pTransform)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pOutputPose);
    push_ptr_parameter(pTrackedDevicePose);
    push_ptr_parameter(pTransform);
}

TrackedDeviceIndex_t __thiscall IVRSystem_019_GetTrackedDeviceIndexForControllerRole(void *_this, ETrackedControllerRole unDeviceType)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceType);
    return 0;
}

ETrackedControllerRole __thiscall IVRSystem_019_GetControllerRoleForTrackedDeviceIndex(void *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    return 0;
}

ETrackedDeviceClass __thiscall IVRSystem_019_GetTrackedDeviceClass(void *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    return 0;
}

bool __thiscall IVRSystem_019_IsTrackedDeviceConnected(void *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    return 0;
}

bool __thiscall IVRSystem_019_GetBoolTrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

float __thiscall IVRSystem_019_GetFloatTrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

int32_t __thiscall IVRSystem_019_GetInt32TrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

uint64_t __thiscall IVRSystem_019_GetUint64TrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

HmdMatrix34_t *__thiscall IVRSystem_019_GetMatrix34TrackedDeviceProperty(void *_this, HmdMatrix34_t *_r, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

uint32_t __thiscall IVRSystem_019_GetArrayTrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, PropertyTypeTag_t propType, void * pBuffer, uint32_t unBufferSize, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_uint32_parameter(propType);
    push_ptr_parameter(pBuffer);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(pError);
    return 0;
}

uint32_t __thiscall IVRSystem_019_GetStringTrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, char * pchValue, uint32_t unBufferSize, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(pError);
    return 0;
}

const char * __thiscall IVRSystem_019_GetPropErrorNameFromEnum(void *_this, ETrackedPropertyError error)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(error);
    return 0;
}

bool __thiscall IVRSystem_019_PollNextEvent(void *_this, VREvent_t * pEvent, uint32_t uncbVREvent)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pEvent);
    push_uint32_parameter(uncbVREvent);
    return 0;
}

bool __thiscall IVRSystem_019_PollNextEventWithPose(void *_this, ETrackingUniverseOrigin eOrigin, VREvent_t * pEvent, uint32_t uncbVREvent, TrackedDevicePose_t * pTrackedDevicePose)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
    push_ptr_parameter(pEvent);
    push_uint32_parameter(uncbVREvent);
    push_ptr_parameter(pTrackedDevicePose);
    return 0;
}

const char * __thiscall IVRSystem_019_GetEventTypeNameFromEnum(void *_this, EVREventType eType)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eType);
    return 0;
}

HiddenAreaMesh_t *__thiscall IVRSystem_019_GetHiddenAreaMesh(void *_this, HiddenAreaMesh_t *_r, EVREye eEye, EHiddenAreaMeshType type)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(eEye);
    push_uint32_parameter(type);
    return 0;
}

bool __thiscall IVRSystem_019_GetControllerState(void *_this, TrackedDeviceIndex_t unControllerDeviceIndex, VRControllerState_t * pControllerState, uint32_t unControllerStateSize)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unControllerDeviceIndex);
    push_ptr_parameter(pControllerState);
    push_uint32_parameter(unControllerStateSize);
    return 0;
}

bool __thiscall IVRSystem_019_GetControllerStateWithPose(void *_this, ETrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, VRControllerState_t * pControllerState, uint32_t unControllerStateSize, TrackedDevicePose_t * pTrackedDevicePose)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
    push_uint32_parameter(unControllerDeviceIndex);
    push_ptr_parameter(pControllerState);
    push_uint32_parameter(unControllerStateSize);
    push_ptr_parameter(pTrackedDevicePose);
    return 0;
}

void __thiscall IVRSystem_019_TriggerHapticPulse(void *_this, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unControllerDeviceIndex);
    push_uint32_parameter(unAxisId);
    push_uint32_parameter(usDurationMicroSec);
}

const char * __thiscall IVRSystem_019_GetButtonIdNameFromEnum(void *_this, EVRButtonId eButtonId)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eButtonId);
    return 0;
}

const char * __thiscall IVRSystem_019_GetControllerAxisTypeNameFromEnum(void *_this, EVRControllerAxisType eAxisType)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eAxisType);
    return 0;
}

bool __thiscall IVRSystem_019_IsInputAvailable(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVRSystem_019_IsSteamVRDrawingControllers(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVRSystem_019_ShouldApplicationPause(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVRSystem_019_ShouldApplicationReduceRenderingWork(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRSystem_019_DriverDebugRequest(void *_this, TrackedDeviceIndex_t unDeviceIndex, const char * pchRequest, char * pchResponseBuffer, uint32_t unResponseBufferSize)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_ptr_parameter(pchRequest);
    push_ptr_parameter(pchResponseBuffer);
    push_uint32_parameter(unResponseBufferSize);
    return 0;
}

EVRFirmwareError __thiscall IVRSystem_019_PerformFirmwareUpdate(void *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    return 0;
}

void __thiscall IVRSystem_019_AcknowledgeQuit_Exiting(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRSystem_019_AcknowledgeQuit_UserPrompt(void *_this)
{
    push_ptr_parameter(_this);
}

EVRApplicationError __thiscall IVRApplications_006_AddApplicationManifest(void *_this, const char * pchApplicationManifestFullPath, bool bTemporary)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchApplicationManifestFullPath);
    push_bool_parameter(bTemporary);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_006_RemoveApplicationManifest(void *_this, const char * pchApplicationManifestFullPath)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchApplicationManifestFullPath);
    return 0;
}

bool __thiscall IVRApplications_006_IsApplicationInstalled(void *_this, const char * pchAppKey)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    return 0;
}

uint32_t __thiscall IVRApplications_006_GetApplicationCount(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_006_GetApplicationKeyByIndex(void *_this, uint32_t unApplicationIndex, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unApplicationIndex);
    push_ptr_parameter(pchAppKeyBuffer);
    push_uint32_parameter(unAppKeyBufferLen);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_006_GetApplicationKeyByProcessId(void *_this, uint32_t unProcessId, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unProcessId);
    push_ptr_parameter(pchAppKeyBuffer);
    push_uint32_parameter(unAppKeyBufferLen);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_006_LaunchApplication(void *_this, const char * pchAppKey)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_006_LaunchTemplateApplication(void *_this, const char * pchTemplateAppKey, const char * pchNewAppKey, AppOverrideKeys_t * pKeys, uint32_t unKeys)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchTemplateAppKey);
    push_ptr_parameter(pchNewAppKey);
    push_ptr_parameter(pKeys);
    push_uint32_parameter(unKeys);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_006_LaunchApplicationFromMimeType(void *_this, const char * pchMimeType, const char * pchArgs)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchMimeType);
    push_ptr_parameter(pchArgs);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_006_LaunchDashboardOverlay(void *_this, const char * pchAppKey)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    return 0;
}

bool __thiscall IVRApplications_006_CancelApplicationLaunch(void *_this, const char * pchAppKey)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_006_IdentifyApplication(void *_this, uint32_t unProcessId, const char * pchAppKey)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unProcessId);
    push_ptr_parameter(pchAppKey);
    return 0;
}

uint32_t __thiscall IVRApplications_006_GetApplicationProcessId(void *_this, const char * pchAppKey)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    return 0;
}

const char * __thiscall IVRApplications_006_GetApplicationsErrorNameFromEnum(void *_this, EVRApplicationError error)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(error);
    return 0;
}

uint32_t __thiscall IVRApplications_006_GetApplicationPropertyString(void *_this, const char * pchAppKey, EVRApplicationProperty eProperty, char * pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen, EVRApplicationError * peError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    push_uint32_parameter(eProperty);
    push_ptr_parameter(pchPropertyValueBuffer);
    push_uint32_parameter(unPropertyValueBufferLen);
    push_ptr_parameter(peError);
    return 0;
}

bool __thiscall IVRApplications_006_GetApplicationPropertyBool(void *_this, const char * pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError * peError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    push_uint32_parameter(eProperty);
    push_ptr_parameter(peError);
    return 0;
}

uint64_t __thiscall IVRApplications_006_GetApplicationPropertyUint64(void *_this, const char * pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError * peError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    push_uint32_parameter(eProperty);
    push_ptr_parameter(peError);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_006_SetApplicationAutoLaunch(void *_this, const char * pchAppKey, bool bAutoLaunch)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    push_bool_parameter(bAutoLaunch);
    return 0;
}

bool __thiscall IVRApplications_006_GetApplicationAutoLaunch(void *_this, const char * pchAppKey)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_006_SetDefaultApplicationForMimeType(void *_this, const char * pchAppKey, const char * pchMimeType)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    push_ptr_parameter(pchMimeType);
    return 0;
}

bool __thiscall IVRApplications_006_GetDefaultApplicationForMimeType(void *_this, const char * pchMimeType, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchMimeType);
    push_ptr_parameter(pchAppKeyBuffer);
    push_uint32_parameter(unAppKeyBufferLen);
    return 0;
}

bool __thiscall IVRApplications_006_GetApplicationSupportedMimeTypes(void *_this, const char * pchAppKey, char * pchMimeTypesBuffer, uint32_t unMimeTypesBuffer)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    push_ptr_parameter(pchMimeTypesBuffer);
    push_uint32_parameter(unMimeTypesBuffer);
    return 0;
}

uint32_t __thiscall IVRApplications_006_GetApplicationsThatSupportMimeType(void *_this, const char * pchMimeType, char * pchAppKeysThatSupportBuffer, uint32_t unAppKeysThatSupportBuffer)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchMimeType);
    push_ptr_parameter(pchAppKeysThatSupportBuffer);
    push_uint32_parameter(unAppKeysThatSupportBuffer);
    return 0;
}

uint32_t __thiscall IVRApplications_006_GetApplicationLaunchArguments(void *_this, uint32_t unHandle, char * pchArgs, uint32_t unArgs)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unHandle);
    push_ptr_parameter(pchArgs);
    push_uint32_parameter(unArgs);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_006_GetStartingApplication(void *_this, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKeyBuffer);
    push_uint32_parameter(unAppKeyBufferLen);
    return 0;
}

EVRApplicationTransitionState __thiscall IVRApplications_006_GetTransitionState(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_006_PerformApplicationPrelaunchCheck(void *_this, const char * pchAppKey)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    return 0;
}

const char * __thiscall IVRApplications_006_GetApplicationsTransitionStateNameFromEnum(void *_this, EVRApplicationTransitionState state)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(state);
    return 0;
}

bool __thiscall IVRApplications_006_IsQuitUserPromptRequested(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_006_LaunchInternalProcess(void *_this, const char * pchBinaryPath, const char * pchArguments, const char * pchWorkingDirectory)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchBinaryPath);
    push_ptr_parameter(pchArguments);
    push_ptr_parameter(pchWorkingDirectory);
    return 0;
}

uint32_t __thiscall IVRApplications_006_GetCurrentSceneProcessId(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

const char * __thiscall IVRSettings_002_GetSettingsErrorNameFromEnum(void *_this, EVRSettingsError eError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eError);
    return 0;
}

bool __thiscall IVRSettings_002_Sync(void *_this, bool bForce, EVRSettingsError * peError)
{
    push_ptr_parameter(_this);
    push_bool_parameter(bForce);
    push_ptr_parameter(peError);
    return 0;
}

void __thiscall IVRSettings_002_SetBool(void *_this, const char * pchSection, const char * pchSettingsKey, bool bValue, EVRSettingsError * peError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchSection);
    push_ptr_parameter(pchSettingsKey);
    push_bool_parameter(bValue);
    push_ptr_parameter(peError);
}

void __thiscall IVRSettings_002_SetInt32(void *_this, const char * pchSection, const char * pchSettingsKey, int32_t nValue, EVRSettingsError * peError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchSection);
    push_ptr_parameter(pchSettingsKey);
    push_uint32_parameter(nValue);
    push_ptr_parameter(peError);
}

void __thiscall IVRSettings_002_SetFloat(void *_this, const char * pchSection, const char * pchSettingsKey, float flValue, EVRSettingsError * peError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchSection);
    push_ptr_parameter(pchSettingsKey);
    push_float_parameter(flValue);
    push_ptr_parameter(peError);
}

void __thiscall IVRSettings_002_SetString(void *_this, const char * pchSection, const char * pchSettingsKey, const char * pchValue, EVRSettingsError * peError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchSection);
    push_ptr_parameter(pchSettingsKey);
    push_ptr_parameter(pchValue);
    push_ptr_parameter(peError);
}

bool __thiscall IVRSettings_002_GetBool(void *_this, const char * pchSection, const char * pchSettingsKey, EVRSettingsError * peError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchSection);
    push_ptr_parameter(pchSettingsKey);
    push_ptr_parameter(peError);
    return 0;
}

int32_t __thiscall IVRSettings_002_GetInt32(void *_this, const char * pchSection, const char * pchSettingsKey, EVRSettingsError * peError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchSection);
    push_ptr_parameter(pchSettingsKey);
    push_ptr_parameter(peError);
    return 0;
}

float __thiscall IVRSettings_002_GetFloat(void *_this, const char * pchSection, const char * pchSettingsKey, EVRSettingsError * peError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchSection);
    push_ptr_parameter(pchSettingsKey);
    push_ptr_parameter(peError);
    return 0;
}

void __thiscall IVRSettings_002_GetString(void *_this, const char * pchSection, const char * pchSettingsKey, char * pchValue, uint32_t unValueLen, EVRSettingsError * peError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchSection);
    push_ptr_parameter(pchSettingsKey);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unValueLen);
    push_ptr_parameter(peError);
}

void __thiscall IVRSettings_002_RemoveSection(void *_this, const char * pchSection, EVRSettingsError * peError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchSection);
    push_ptr_parameter(peError);
}

void __thiscall IVRSettings_002_RemoveKeyInSection(void *_this, const char * pchSection, const char * pchSettingsKey, EVRSettingsError * peError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchSection);
    push_ptr_parameter(pchSettingsKey);
    push_ptr_parameter(peError);
}

ChaperoneCalibrationState __thiscall IVRChaperone_003_GetCalibrationState(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVRChaperone_003_GetPlayAreaSize(void *_this, float * pSizeX, float * pSizeZ)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pSizeX);
    push_ptr_parameter(pSizeZ);
    return 0;
}

bool __thiscall IVRChaperone_003_GetPlayAreaRect(void *_this, HmdQuad_t * rect)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(rect);
    return 0;
}

void __thiscall IVRChaperone_003_ReloadInfo(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRChaperone_003_SetSceneColor(void *_this, HmdColor_t color)
{
    push_ptr_parameter(_this);
    push_HmdColor_parameter(color);
}

void __thiscall IVRChaperone_003_GetBoundsColor(void *_this, HmdColor_t * pOutputColorArray, int nNumOutputColors, float flCollisionBoundsFadeDistance, HmdColor_t * pOutputCameraColor)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pOutputColorArray);
    push_uint32_parameter(nNumOutputColors);
    push_float_parameter(flCollisionBoundsFadeDistance);
    push_ptr_parameter(pOutputCameraColor);
}

bool __thiscall IVRChaperone_003_AreBoundsVisible(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRChaperone_003_ForceBoundsVisible(void *_this, bool bForce)
{
    push_ptr_parameter(_this);
    push_bool_parameter(bForce);
}

bool __thiscall IVRChaperoneSetup_006_CommitWorkingCopy(void *_this, EChaperoneConfigFile configFile)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(configFile);
    return 0;
}

void __thiscall IVRChaperoneSetup_006_RevertWorkingCopy(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRChaperoneSetup_006_GetWorkingPlayAreaSize(void *_this, float * pSizeX, float * pSizeZ)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pSizeX);
    push_ptr_parameter(pSizeZ);
    return 0;
}

bool __thiscall IVRChaperoneSetup_006_GetWorkingPlayAreaRect(void *_this, HmdQuad_t * rect)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(rect);
    return 0;
}

bool __thiscall IVRChaperoneSetup_006_GetWorkingCollisionBoundsInfo(void *_this, HmdQuad_t * pQuadsBuffer, uint32_t * punQuadsCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pQuadsBuffer);
    push_ptr_parameter(punQuadsCount);
    return 0;
}

bool __thiscall IVRChaperoneSetup_006_GetLiveCollisionBoundsInfo(void *_this, HmdQuad_t * pQuadsBuffer, uint32_t * punQuadsCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pQuadsBuffer);
    push_ptr_parameter(punQuadsCount);
    return 0;
}

bool __thiscall IVRChaperoneSetup_006_GetWorkingSeatedZeroPoseToRawTrackingPose(void *_this, HmdMatrix34_t * pmatSeatedZeroPoseToRawTrackingPose)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pmatSeatedZeroPoseToRawTrackingPose);
    return 0;
}

bool __thiscall IVRChaperoneSetup_006_GetWorkingStandingZeroPoseToRawTrackingPose(void *_this, HmdMatrix34_t * pmatStandingZeroPoseToRawTrackingPose)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pmatStandingZeroPoseToRawTrackingPose);
    return 0;
}

void __thiscall IVRChaperoneSetup_006_SetWorkingPlayAreaSize(void *_this, float sizeX, float sizeZ)
{
    push_ptr_parameter(_this);
    push_float_parameter(sizeX);
    push_float_parameter(sizeZ);
}

void __thiscall IVRChaperoneSetup_006_SetWorkingCollisionBoundsInfo(void *_this, HmdQuad_t * pQuadsBuffer, uint32_t unQuadsCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pQuadsBuffer);
    push_uint32_parameter(unQuadsCount);
}

void __thiscall IVRChaperoneSetup_006_SetWorkingPerimeter(void *_this, HmdVector2_t * pPointBuffer, uint32_t unPointCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pPointBuffer);
    push_uint32_parameter(unPointCount);
}

void __thiscall IVRChaperoneSetup_006_SetWorkingSeatedZeroPoseToRawTrackingPose(void *_this, HmdMatrix34_t * pMatSeatedZeroPoseToRawTrackingPose)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pMatSeatedZeroPoseToRawTrackingPose);
}

void __thiscall IVRChaperoneSetup_006_SetWorkingStandingZeroPoseToRawTrackingPose(void *_this, HmdMatrix34_t * pMatStandingZeroPoseToRawTrackingPose)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pMatStandingZeroPoseToRawTrackingPose);
}

void __thiscall IVRChaperoneSetup_006_ReloadFromDisk(void *_this, EChaperoneConfigFile configFile)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(configFile);
}

bool __thiscall IVRChaperoneSetup_006_GetLiveSeatedZeroPoseToRawTrackingPose(void *_this, HmdMatrix34_t * pmatSeatedZeroPoseToRawTrackingPose)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pmatSeatedZeroPoseToRawTrackingPose);
    return 0;
}

bool __thiscall IVRChaperoneSetup_006_ExportLiveToBuffer(void *_this, char * pBuffer, uint32_t * pnBufferLength)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pBuffer);
    push_ptr_parameter(pnBufferLength);
    return 0;
}

bool __thiscall IVRChaperoneSetup_006_ImportFromBufferToWorking(void *_this, const char * pBuffer, uint32_t nImportFlags)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pBuffer);
    push_uint32_parameter(nImportFlags);
    return 0;
}

void __thiscall IVRChaperoneSetup_006_ShowWorkingSetPreview(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRChaperoneSetup_006_HideWorkingSetPreview(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_022_SetTrackingSpace(void *_this, ETrackingUniverseOrigin eOrigin)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
}

ETrackingUniverseOrigin __thiscall IVRCompositor_022_GetTrackingSpace(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_022_WaitGetPoses(void *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pRenderPoseArray);
    push_uint32_parameter(unRenderPoseArrayCount);
    push_ptr_parameter(pGamePoseArray);
    push_uint32_parameter(unGamePoseArrayCount);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_022_GetLastPoses(void *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pRenderPoseArray);
    push_uint32_parameter(unRenderPoseArrayCount);
    push_ptr_parameter(pGamePoseArray);
    push_uint32_parameter(unGamePoseArrayCount);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_022_GetLastPoseForTrackedDeviceIndex(void *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pOutputGamePose)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_ptr_parameter(pOutputPose);
    push_ptr_parameter(pOutputGamePose);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_022_Submit(void *_this, EVREye eEye, Texture_t * pTexture, VRTextureBounds_t * pBounds, EVRSubmitFlags nSubmitFlags)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pTexture);
    push_ptr_parameter(pBounds);
    push_uint32_parameter(nSubmitFlags);
    return 0;
}

void __thiscall IVRCompositor_022_ClearLastSubmittedFrame(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_022_PostPresentHandoff(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_022_GetFrameTiming(void *_this, Compositor_FrameTiming * pTiming, uint32_t unFramesAgo)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pTiming);
    push_uint32_parameter(unFramesAgo);
    return 0;
}

uint32_t __thiscall IVRCompositor_022_GetFrameTimings(void *_this, Compositor_FrameTiming * pTiming, uint32_t nFrames)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pTiming);
    push_uint32_parameter(nFrames);
    return 0;
}

float __thiscall IVRCompositor_022_GetFrameTimeRemaining(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_022_GetCumulativeStats(void *_this, Compositor_CumulativeStats * pStats, uint32_t nStatsSizeInBytes)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pStats);
    push_uint32_parameter(nStatsSizeInBytes);
}

void __thiscall IVRCompositor_022_FadeToColor(void *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground)
{
    push_ptr_parameter(_this);
    push_float_parameter(fSeconds);
    push_float_parameter(fRed);
    push_float_parameter(fGreen);
    push_float_parameter(fBlue);
    push_float_parameter(fAlpha);
    push_bool_parameter(bBackground);
}

HmdColor_t *__thiscall IVRCompositor_022_GetCurrentFadeColor(void *_this, HmdColor_t *_r, bool bBackground)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_bool_parameter(bBackground);
    return 0;
}

void __thiscall IVRCompositor_022_FadeGrid(void *_this, float fSeconds, bool bFadeIn)
{
    push_ptr_parameter(_this);
    push_float_parameter(fSeconds);
    push_bool_parameter(bFadeIn);
}

float __thiscall IVRCompositor_022_GetCurrentGridAlpha(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_022_SetSkyboxOverride(void *_this, Texture_t * pTextures, uint32_t unTextureCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pTextures);
    push_uint32_parameter(unTextureCount);
    return 0;
}

void __thiscall IVRCompositor_022_ClearSkyboxOverride(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_022_CompositorBringToFront(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_022_CompositorGoToBack(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_022_CompositorQuit(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_022_IsFullscreen(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRCompositor_022_GetCurrentSceneFocusProcess(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRCompositor_022_GetLastFrameRenderer(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVRCompositor_022_CanRenderScene(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_022_ShowMirrorWindow(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_022_HideMirrorWindow(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_022_IsMirrorWindowVisible(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_022_CompositorDumpImages(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_022_ShouldAppRenderWithLowResources(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_022_ForceInterleavedReprojectionOn(void *_this, bool bOverride)
{
    push_ptr_parameter(_this);
    push_bool_parameter(bOverride);
}

void __thiscall IVRCompositor_022_ForceReconnectProcess(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_022_SuspendRendering(void *_this, bool bSuspend)
{
    push_ptr_parameter(_this);
    push_bool_parameter(bSuspend);
}

EVRCompositorError __thiscall IVRCompositor_022_GetMirrorTextureD3D11(void *_this, EVREye eEye, void * pD3D11DeviceOrResource, void ** ppD3D11ShaderResourceView)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pD3D11DeviceOrResource);
    push_ptr_parameter(ppD3D11ShaderResourceView);
    return 0;
}

void __thiscall IVRCompositor_022_ReleaseMirrorTextureD3D11(void *_this, void * pD3D11ShaderResourceView)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pD3D11ShaderResourceView);
}

EVRCompositorError __thiscall IVRCompositor_022_GetMirrorTextureGL(void *_this, EVREye eEye, glUInt_t * pglTextureId, glSharedTextureHandle_t * pglSharedTextureHandle)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pglTextureId);
    push_ptr_parameter(pglSharedTextureHandle);
    return 0;
}

bool __thiscall IVRCompositor_022_ReleaseSharedGLTexture(void *_this, glUInt_t glTextureId, glSharedTextureHandle_t glSharedTextureHandle)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(glTextureId);
    push_ptr_parameter(glSharedTextureHandle);
    return 0;
}

void __thiscall IVRCompositor_022_LockGLSharedTextureForAccess(void *_this, glSharedTextureHandle_t glSharedTextureHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(glSharedTextureHandle);
}

void __thiscall IVRCompositor_022_UnlockGLSharedTextureForAccess(void *_this, glSharedTextureHandle_t glSharedTextureHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(glSharedTextureHandle);
}

uint32_t __thiscall IVRCompositor_022_GetVulkanInstanceExtensionsRequired(void *_this, char * pchValue, uint32_t unBufferSize)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    return 0;
}

uint32_t __thiscall IVRCompositor_022_GetVulkanDeviceExtensionsRequired(void *_this, VkPhysicalDevice_T * pPhysicalDevice, char * pchValue, uint32_t unBufferSize)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pPhysicalDevice);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    return 0;
}

void __thiscall IVRCompositor_022_SetExplicitTimingMode(void *_this, EVRCompositorTimingMode eTimingMode)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eTimingMode);
}

EVRCompositorError __thiscall IVRCompositor_022_SubmitExplicitTimingData(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVRCompositor_022_IsMotionSmoothingEnabled(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVRNotificationError __thiscall IVRNotifications_002_CreateNotification(void *_this, VROverlayHandle_t ulOverlayHandle, uint64_t ulUserValue, EVRNotificationType type, const char * pchText, EVRNotificationStyle style, NotificationBitmap_t * pImage, VRNotificationId * pNotificationId)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint64_parameter(ulUserValue);
    push_uint32_parameter(type);
    push_ptr_parameter(pchText);
    push_uint32_parameter(style);
    push_ptr_parameter(pImage);
    push_ptr_parameter(pNotificationId);
    return 0;
}

EVRNotificationError __thiscall IVRNotifications_002_RemoveNotification(void *_this, VRNotificationId notificationId)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(notificationId);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_FindOverlay(void *_this, const char * pchOverlayKey, VROverlayHandle_t * pOverlayHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayKey);
    push_ptr_parameter(pOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_CreateOverlay(void *_this, const char * pchOverlayKey, const char * pchOverlayName, VROverlayHandle_t * pOverlayHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayKey);
    push_ptr_parameter(pchOverlayName);
    push_ptr_parameter(pOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_DestroyOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_SetHighQualityOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

VROverlayHandle_t __thiscall IVROverlay_019_GetHighQualityOverlay(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVROverlay_019_GetOverlayKey(void *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(pError);
    return 0;
}

uint32_t __thiscall IVROverlay_019_GetOverlayName(void *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(pError);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_SetOverlayName(void *_this, VROverlayHandle_t ulOverlayHandle, const char * pchName)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchName);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_GetOverlayImageData(void *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unBufferSize, uint32_t * punWidth, uint32_t * punHeight)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvBuffer);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(punWidth);
    push_ptr_parameter(punHeight);
    return 0;
}

const char * __thiscall IVROverlay_019_GetOverlayErrorNameFromEnum(void *_this, EVROverlayError error)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(error);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_SetOverlayRenderingPid(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unPID)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unPID);
    return 0;
}

uint32_t __thiscall IVROverlay_019_GetOverlayRenderingPid(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_SetOverlayFlag(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eOverlayFlag);
    push_bool_parameter(bEnabled);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_GetOverlayFlag(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool * pbEnabled)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eOverlayFlag);
    push_ptr_parameter(pbEnabled);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_SetOverlayColor(void *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fRed);
    push_float_parameter(fGreen);
    push_float_parameter(fBlue);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_GetOverlayColor(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfRed, float * pfGreen, float * pfBlue)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfRed);
    push_ptr_parameter(pfGreen);
    push_ptr_parameter(pfBlue);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_SetOverlayAlpha(void *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fAlpha);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_GetOverlayAlpha(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfAlpha)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfAlpha);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_SetOverlayTexelAspect(void *_this, VROverlayHandle_t ulOverlayHandle, float fTexelAspect)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fTexelAspect);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_GetOverlayTexelAspect(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfTexelAspect)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfTexelAspect);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_SetOverlaySortOrder(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unSortOrder)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unSortOrder);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_GetOverlaySortOrder(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * punSortOrder)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(punSortOrder);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_SetOverlayWidthInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fWidthInMeters);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_GetOverlayWidthInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfWidthInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfWidthInMeters);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_SetOverlayAutoCurveDistanceRangeInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fMinDistanceInMeters);
    push_float_parameter(fMaxDistanceInMeters);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_GetOverlayAutoCurveDistanceRangeInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfMinDistanceInMeters, float * pfMaxDistanceInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfMinDistanceInMeters);
    push_ptr_parameter(pfMaxDistanceInMeters);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_SetOverlayTextureColorSpace(void *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eTextureColorSpace);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_GetOverlayTextureColorSpace(void *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace * peTextureColorSpace)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peTextureColorSpace);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_SetOverlayTextureBounds(void *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pOverlayTextureBounds);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_GetOverlayTextureBounds(void *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pOverlayTextureBounds);
    return 0;
}

uint32_t __thiscall IVROverlay_019_GetOverlayRenderModel(void *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, HmdColor_t * pColor, EVROverlayError * pError)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(pColor);
    push_ptr_parameter(pError);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_SetOverlayRenderModel(void *_this, VROverlayHandle_t ulOverlayHandle, const char * pchRenderModel, HmdColor_t * pColor)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchRenderModel);
    push_ptr_parameter(pColor);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_GetOverlayTransformType(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType * peTransformType)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peTransformType);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_SetOverlayTransformAbsolute(void *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eTrackingOrigin);
    push_ptr_parameter(pmatTrackingOriginToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_GetOverlayTransformAbsolute(void *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin * peTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peTrackingOrigin);
    push_ptr_parameter(pmatTrackingOriginToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_SetOverlayTransformTrackedDeviceRelative(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unTrackedDevice);
    push_ptr_parameter(pmatTrackedDeviceToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_GetOverlayTransformTrackedDeviceRelative(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(punTrackedDevice);
    push_ptr_parameter(pmatTrackedDeviceToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_SetOverlayTransformTrackedDeviceComponent(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unDeviceIndex, const char * pchComponentName)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unDeviceIndex);
    push_ptr_parameter(pchComponentName);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_GetOverlayTransformTrackedDeviceComponent(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punDeviceIndex, char * pchComponentName, uint32_t unComponentNameSize)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(punDeviceIndex);
    push_ptr_parameter(pchComponentName);
    push_uint32_parameter(unComponentNameSize);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_GetOverlayTransformOverlayRelative(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t * ulOverlayHandleParent, HmdMatrix34_t * pmatParentOverlayToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(ulOverlayHandleParent);
    push_ptr_parameter(pmatParentOverlayToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_SetOverlayTransformOverlayRelative(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t ulOverlayHandleParent, HmdMatrix34_t * pmatParentOverlayToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint64_parameter(ulOverlayHandleParent);
    push_ptr_parameter(pmatParentOverlayToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_ShowOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_HideOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

bool __thiscall IVROverlay_019_IsOverlayVisible(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_GetTransformForOverlayCoordinates(void *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdVector2_t coordinatesInOverlay, HmdMatrix34_t * pmatTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eTrackingOrigin);
    push_HmdVector2_parameter(coordinatesInOverlay);
    push_ptr_parameter(pmatTransform);
    return 0;
}

bool __thiscall IVROverlay_019_PollNextOverlayEvent(void *_this, VROverlayHandle_t ulOverlayHandle, VREvent_t * pEvent, uint32_t uncbVREvent)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pEvent);
    push_uint32_parameter(uncbVREvent);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_GetOverlayInputMethod(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod * peInputMethod)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peInputMethod);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_SetOverlayInputMethod(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eInputMethod);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_GetOverlayMouseScale(void *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvecMouseScale);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_SetOverlayMouseScale(void *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvecMouseScale);
    return 0;
}

bool __thiscall IVROverlay_019_ComputeOverlayIntersection(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t * pParams, VROverlayIntersectionResults_t * pResults)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pParams);
    push_ptr_parameter(pResults);
    return 0;
}

bool __thiscall IVROverlay_019_IsHoverTargetOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

VROverlayHandle_t __thiscall IVROverlay_019_GetGamepadFocusOverlay(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_SetGamepadFocusOverlay(void *_this, VROverlayHandle_t ulNewFocusOverlay)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulNewFocusOverlay);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_SetOverlayNeighbor(void *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom, VROverlayHandle_t ulTo)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eDirection);
    push_uint64_parameter(ulFrom);
    push_uint64_parameter(ulTo);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_MoveGamepadFocusToNeighbor(void *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eDirection);
    push_uint64_parameter(ulFrom);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_SetOverlayDualAnalogTransform(void *_this, VROverlayHandle_t ulOverlay, EDualAnalogWhich eWhich, HmdVector2_t * pvCenter, float fRadius)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlay);
    push_uint32_parameter(eWhich);
    push_ptr_parameter(pvCenter);
    push_float_parameter(fRadius);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_GetOverlayDualAnalogTransform(void *_this, VROverlayHandle_t ulOverlay, EDualAnalogWhich eWhich, HmdVector2_t * pvCenter, float * pfRadius)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlay);
    push_uint32_parameter(eWhich);
    push_ptr_parameter(pvCenter);
    push_ptr_parameter(pfRadius);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_SetOverlayTexture(void *_this, VROverlayHandle_t ulOverlayHandle, Texture_t * pTexture)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pTexture);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_ClearOverlayTexture(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_SetOverlayRaw(void *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvBuffer);
    push_uint32_parameter(unWidth);
    push_uint32_parameter(unHeight);
    push_uint32_parameter(unDepth);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_SetOverlayFromFile(void *_this, VROverlayHandle_t ulOverlayHandle, const char * pchFilePath)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchFilePath);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_GetOverlayTexture(void *_this, VROverlayHandle_t ulOverlayHandle, void ** pNativeTextureHandle, void * pNativeTextureRef, uint32_t * pWidth, uint32_t * pHeight, uint32_t * pNativeFormat, ETextureType * pAPIType, EColorSpace * pColorSpace, VRTextureBounds_t * pTextureBounds)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pNativeTextureHandle);
    push_ptr_parameter(pNativeTextureRef);
    push_ptr_parameter(pWidth);
    push_ptr_parameter(pHeight);
    push_ptr_parameter(pNativeFormat);
    push_ptr_parameter(pAPIType);
    push_ptr_parameter(pColorSpace);
    push_ptr_parameter(pTextureBounds);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_ReleaseNativeOverlayHandle(void *_this, VROverlayHandle_t ulOverlayHandle, void * pNativeTextureHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pNativeTextureHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_GetOverlayTextureSize(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * pWidth, uint32_t * pHeight)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pWidth);
    push_ptr_parameter(pHeight);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_CreateDashboardOverlay(void *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pMainHandle, VROverlayHandle_t * pThumbnailHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayKey);
    push_ptr_parameter(pchOverlayFriendlyName);
    push_ptr_parameter(pMainHandle);
    push_ptr_parameter(pThumbnailHandle);
    return 0;
}

bool __thiscall IVROverlay_019_IsDashboardVisible(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVROverlay_019_IsActiveDashboardOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_SetDashboardOverlaySceneProcess(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unProcessId);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_GetDashboardOverlaySceneProcess(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * punProcessId)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(punProcessId);
    return 0;
}

void __thiscall IVROverlay_019_ShowDashboard(void *_this, const char * pchOverlayToShow)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayToShow);
}

TrackedDeviceIndex_t __thiscall IVROverlay_019_GetPrimaryDashboardDevice(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_ShowKeyboard(void *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eInputMode);
    push_uint32_parameter(eLineInputMode);
    push_ptr_parameter(pchDescription);
    push_uint32_parameter(unCharMax);
    push_ptr_parameter(pchExistingText);
    push_bool_parameter(bUseMinimalMode);
    push_uint64_parameter(uUserValue);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_ShowKeyboardForOverlay(void *_this, VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eInputMode);
    push_uint32_parameter(eLineInputMode);
    push_ptr_parameter(pchDescription);
    push_uint32_parameter(unCharMax);
    push_ptr_parameter(pchExistingText);
    push_bool_parameter(bUseMinimalMode);
    push_uint64_parameter(uUserValue);
    return 0;
}

uint32_t __thiscall IVROverlay_019_GetKeyboardText(void *_this, char * pchText, uint32_t cchText)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchText);
    push_uint32_parameter(cchText);
    return 0;
}

void __thiscall IVROverlay_019_HideKeyboard(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVROverlay_019_SetKeyboardTransformAbsolute(void *_this, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToKeyboardTransform)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eTrackingOrigin);
    push_ptr_parameter(pmatTrackingOriginToKeyboardTransform);
}

void __thiscall IVROverlay_019_SetKeyboardPositionForOverlay(void *_this, VROverlayHandle_t ulOverlayHandle, HmdRect2_t avoidRect)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_HmdRect2_parameter(avoidRect);
}

EVROverlayError __thiscall IVROverlay_019_SetOverlayIntersectionMask(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionMaskPrimitive_t * pMaskPrimitives, uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pMaskPrimitives);
    push_uint32_parameter(unNumMaskPrimitives);
    push_uint32_parameter(unPrimitiveSize);
    return 0;
}

EVROverlayError __thiscall IVROverlay_019_GetOverlayFlags(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * pFlags)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pFlags);
    return 0;
}

VRMessageOverlayResponse __thiscall IVROverlay_019_ShowMessageOverlay(void *_this, const char * pchText, const char * pchCaption, const char * pchButton0Text, const char * pchButton1Text, const char * pchButton2Text, const char * pchButton3Text)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchText);
    push_ptr_parameter(pchCaption);
    push_ptr_parameter(pchButton0Text);
    push_ptr_parameter(pchButton1Text);
    push_ptr_parameter(pchButton2Text);
    push_ptr_parameter(pchButton3Text);
    return 0;
}

void __thiscall IVROverlay_019_CloseMessageOverlay(void *_this)
{
    push_ptr_parameter(_this);
}

EVRRenderModelError __thiscall IVRRenderModels_006_LoadRenderModel_Async(void *_this, const char * pchRenderModelName, RenderModel_t ** ppRenderModel)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchRenderModelName);
    push_ptr_parameter(ppRenderModel);
    return 0;
}

void __thiscall IVRRenderModels_006_FreeRenderModel(void *_this, RenderModel_t * pRenderModel)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pRenderModel);
}

EVRRenderModelError __thiscall IVRRenderModels_006_LoadTexture_Async(void *_this, TextureID_t textureId, RenderModel_TextureMap_t ** ppTexture)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(textureId);
    push_ptr_parameter(ppTexture);
    return 0;
}

void __thiscall IVRRenderModels_006_FreeTexture(void *_this, RenderModel_TextureMap_t * pTexture)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pTexture);
}

EVRRenderModelError __thiscall IVRRenderModels_006_LoadTextureD3D11_Async(void *_this, TextureID_t textureId, void * pD3D11Device, void ** ppD3D11Texture2D)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(textureId);
    push_ptr_parameter(pD3D11Device);
    push_ptr_parameter(ppD3D11Texture2D);
    return 0;
}

EVRRenderModelError __thiscall IVRRenderModels_006_LoadIntoTextureD3D11_Async(void *_this, TextureID_t textureId, void * pDstTexture)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(textureId);
    push_ptr_parameter(pDstTexture);
    return 0;
}

void __thiscall IVRRenderModels_006_FreeTextureD3D11(void *_this, void * pD3D11Texture2D)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pD3D11Texture2D);
}

uint32_t __thiscall IVRRenderModels_006_GetRenderModelName(void *_this, uint32_t unRenderModelIndex, char * pchRenderModelName, uint32_t unRenderModelNameLen)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unRenderModelIndex);
    push_ptr_parameter(pchRenderModelName);
    push_uint32_parameter(unRenderModelNameLen);
    return 0;
}

uint32_t __thiscall IVRRenderModels_006_GetRenderModelCount(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRRenderModels_006_GetComponentCount(void *_this, const char * pchRenderModelName)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchRenderModelName);
    return 0;
}

uint32_t __thiscall IVRRenderModels_006_GetComponentName(void *_this, const char * pchRenderModelName, uint32_t unComponentIndex, char * pchComponentName, uint32_t unComponentNameLen)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchRenderModelName);
    push_uint32_parameter(unComponentIndex);
    push_ptr_parameter(pchComponentName);
    push_uint32_parameter(unComponentNameLen);
    return 0;
}

uint64_t __thiscall IVRRenderModels_006_GetComponentButtonMask(void *_this, const char * pchRenderModelName, const char * pchComponentName)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchRenderModelName);
    push_ptr_parameter(pchComponentName);
    return 0;
}

uint32_t __thiscall IVRRenderModels_006_GetComponentRenderModelName(void *_this, const char * pchRenderModelName, const char * pchComponentName, char * pchComponentRenderModelName, uint32_t unComponentRenderModelNameLen)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchRenderModelName);
    push_ptr_parameter(pchComponentName);
    push_ptr_parameter(pchComponentRenderModelName);
    push_uint32_parameter(unComponentRenderModelNameLen);
    return 0;
}

bool __thiscall IVRRenderModels_006_GetComponentStateForDevicePath(void *_this, const char * pchRenderModelName, const char * pchComponentName, VRInputValueHandle_t devicePath, RenderModel_ControllerMode_State_t * pState, RenderModel_ComponentState_t * pComponentState)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchRenderModelName);
    push_ptr_parameter(pchComponentName);
    push_uint64_parameter(devicePath);
    push_ptr_parameter(pState);
    push_ptr_parameter(pComponentState);
    return 0;
}

bool __thiscall IVRRenderModels_006_GetComponentState(void *_this, const char * pchRenderModelName, const char * pchComponentName, VRControllerState_t * pControllerState, RenderModel_ControllerMode_State_t * pState, RenderModel_ComponentState_t * pComponentState)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchRenderModelName);
    push_ptr_parameter(pchComponentName);
    push_ptr_parameter(pControllerState);
    push_ptr_parameter(pState);
    push_ptr_parameter(pComponentState);
    return 0;
}

bool __thiscall IVRRenderModels_006_RenderModelHasComponent(void *_this, const char * pchRenderModelName, const char * pchComponentName)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchRenderModelName);
    push_ptr_parameter(pchComponentName);
    return 0;
}

uint32_t __thiscall IVRRenderModels_006_GetRenderModelThumbnailURL(void *_this, const char * pchRenderModelName, char * pchThumbnailURL, uint32_t unThumbnailURLLen, EVRRenderModelError * peError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchRenderModelName);
    push_ptr_parameter(pchThumbnailURL);
    push_uint32_parameter(unThumbnailURLLen);
    push_ptr_parameter(peError);
    return 0;
}

uint32_t __thiscall IVRRenderModels_006_GetRenderModelOriginalPath(void *_this, const char * pchRenderModelName, char * pchOriginalPath, uint32_t unOriginalPathLen, EVRRenderModelError * peError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchRenderModelName);
    push_ptr_parameter(pchOriginalPath);
    push_uint32_parameter(unOriginalPathLen);
    push_ptr_parameter(peError);
    return 0;
}

const char * __thiscall IVRRenderModels_006_GetRenderModelErrorNameFromEnum(void *_this, EVRRenderModelError error)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(error);
    return 0;
}

void __thiscall IVRExtendedDisplay_001_GetWindowBounds(void *_this, int32_t * pnX, int32_t * pnY, uint32_t * pnWidth, uint32_t * pnHeight)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pnX);
    push_ptr_parameter(pnY);
    push_ptr_parameter(pnWidth);
    push_ptr_parameter(pnHeight);
}

void __thiscall IVRExtendedDisplay_001_GetEyeOutputViewport(void *_this, EVREye eEye, uint32_t * pnX, uint32_t * pnY, uint32_t * pnWidth, uint32_t * pnHeight)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pnX);
    push_ptr_parameter(pnY);
    push_ptr_parameter(pnWidth);
    push_ptr_parameter(pnHeight);
}

void __thiscall IVRExtendedDisplay_001_GetDXGIOutputInfo(void *_this, int32_t * pnAdapterIndex, int32_t * pnAdapterOutputIndex)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pnAdapterIndex);
    push_ptr_parameter(pnAdapterOutputIndex);
}

const char * __thiscall IVRTrackedCamera_005_GetCameraErrorNameFromEnum(void *_this, EVRTrackedCameraError eCameraError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eCameraError);
    return 0;
}

EVRTrackedCameraError __thiscall IVRTrackedCamera_005_HasCamera(void *_this, TrackedDeviceIndex_t nDeviceIndex, bool * pHasCamera)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(nDeviceIndex);
    push_ptr_parameter(pHasCamera);
    return 0;
}

EVRTrackedCameraError __thiscall IVRTrackedCamera_005_GetCameraFrameSize(void *_this, TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, uint32_t * pnWidth, uint32_t * pnHeight, uint32_t * pnFrameBufferSize)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(nDeviceIndex);
    push_uint32_parameter(eFrameType);
    push_ptr_parameter(pnWidth);
    push_ptr_parameter(pnHeight);
    push_ptr_parameter(pnFrameBufferSize);
    return 0;
}

EVRTrackedCameraError __thiscall IVRTrackedCamera_005_GetCameraIntrinsics(void *_this, TrackedDeviceIndex_t nDeviceIndex, uint32_t nCameraIndex, EVRTrackedCameraFrameType eFrameType, HmdVector2_t * pFocalLength, HmdVector2_t * pCenter)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(nDeviceIndex);
    push_uint32_parameter(nCameraIndex);
    push_uint32_parameter(eFrameType);
    push_ptr_parameter(pFocalLength);
    push_ptr_parameter(pCenter);
    return 0;
}

EVRTrackedCameraError __thiscall IVRTrackedCamera_005_GetCameraProjection(void *_this, TrackedDeviceIndex_t nDeviceIndex, uint32_t nCameraIndex, EVRTrackedCameraFrameType eFrameType, float flZNear, float flZFar, HmdMatrix44_t * pProjection)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(nDeviceIndex);
    push_uint32_parameter(nCameraIndex);
    push_uint32_parameter(eFrameType);
    push_float_parameter(flZNear);
    push_float_parameter(flZFar);
    push_ptr_parameter(pProjection);
    return 0;
}

EVRTrackedCameraError __thiscall IVRTrackedCamera_005_AcquireVideoStreamingService(void *_this, TrackedDeviceIndex_t nDeviceIndex, TrackedCameraHandle_t * pHandle)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(nDeviceIndex);
    push_ptr_parameter(pHandle);
    return 0;
}

EVRTrackedCameraError __thiscall IVRTrackedCamera_005_ReleaseVideoStreamingService(void *_this, TrackedCameraHandle_t hTrackedCamera)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(hTrackedCamera);
    return 0;
}

EVRTrackedCameraError __thiscall IVRTrackedCamera_005_GetVideoStreamFrameBuffer(void *_this, TrackedCameraHandle_t hTrackedCamera, EVRTrackedCameraFrameType eFrameType, void * pFrameBuffer, uint32_t nFrameBufferSize, CameraVideoStreamFrameHeader_t * pFrameHeader, uint32_t nFrameHeaderSize)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(hTrackedCamera);
    push_uint32_parameter(eFrameType);
    push_ptr_parameter(pFrameBuffer);
    push_uint32_parameter(nFrameBufferSize);
    push_ptr_parameter(pFrameHeader);
    push_uint32_parameter(nFrameHeaderSize);
    return 0;
}

EVRTrackedCameraError __thiscall IVRTrackedCamera_005_GetVideoStreamTextureSize(void *_this, TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, VRTextureBounds_t * pTextureBounds, uint32_t * pnWidth, uint32_t * pnHeight)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(nDeviceIndex);
    push_uint32_parameter(eFrameType);
    push_ptr_parameter(pTextureBounds);
    push_ptr_parameter(pnWidth);
    push_ptr_parameter(pnHeight);
    return 0;
}

EVRTrackedCameraError __thiscall IVRTrackedCamera_005_GetVideoStreamTextureD3D11(void *_this, TrackedCameraHandle_t hTrackedCamera, EVRTrackedCameraFrameType eFrameType, void * pD3D11DeviceOrResource, void ** ppD3D11ShaderResourceView, CameraVideoStreamFrameHeader_t * pFrameHeader, uint32_t nFrameHeaderSize)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(hTrackedCamera);
    push_uint32_parameter(eFrameType);
    push_ptr_parameter(pD3D11DeviceOrResource);
    push_ptr_parameter(ppD3D11ShaderResourceView);
    push_ptr_parameter(pFrameHeader);
    push_uint32_parameter(nFrameHeaderSize);
    return 0;
}

EVRTrackedCameraError __thiscall IVRTrackedCamera_005_GetVideoStreamTextureGL(void *_this, TrackedCameraHandle_t hTrackedCamera, EVRTrackedCameraFrameType eFrameType, glUInt_t * pglTextureId, CameraVideoStreamFrameHeader_t * pFrameHeader, uint32_t nFrameHeaderSize)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(hTrackedCamera);
    push_uint32_parameter(eFrameType);
    push_ptr_parameter(pglTextureId);
    push_ptr_parameter(pFrameHeader);
    push_uint32_parameter(nFrameHeaderSize);
    return 0;
}

EVRTrackedCameraError __thiscall IVRTrackedCamera_005_ReleaseVideoStreamTextureGL(void *_this, TrackedCameraHandle_t hTrackedCamera, glUInt_t glTextureId)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(hTrackedCamera);
    push_uint32_parameter(glTextureId);
    return 0;
}

EVRScreenshotError __thiscall IVRScreenshots_001_RequestScreenshot(void *_this, ScreenshotHandle_t * pOutScreenshotHandle, EVRScreenshotType type, const char * pchPreviewFilename, const char * pchVRFilename)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pOutScreenshotHandle);
    push_uint32_parameter(type);
    push_ptr_parameter(pchPreviewFilename);
    push_ptr_parameter(pchVRFilename);
    return 0;
}

EVRScreenshotError __thiscall IVRScreenshots_001_HookScreenshot(void *_this, EVRScreenshotType * pSupportedTypes, int numTypes)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pSupportedTypes);
    push_uint32_parameter(numTypes);
    return 0;
}

EVRScreenshotType __thiscall IVRScreenshots_001_GetScreenshotPropertyType(void *_this, ScreenshotHandle_t screenshotHandle, EVRScreenshotError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(screenshotHandle);
    push_ptr_parameter(pError);
    return 0;
}

uint32_t __thiscall IVRScreenshots_001_GetScreenshotPropertyFilename(void *_this, ScreenshotHandle_t screenshotHandle, EVRScreenshotPropertyFilenames filenameType, char * pchFilename, uint32_t cchFilename, EVRScreenshotError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(screenshotHandle);
    push_uint32_parameter(filenameType);
    push_ptr_parameter(pchFilename);
    push_uint32_parameter(cchFilename);
    push_ptr_parameter(pError);
    return 0;
}

EVRScreenshotError __thiscall IVRScreenshots_001_UpdateScreenshotProgress(void *_this, ScreenshotHandle_t screenshotHandle, float flProgress)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(screenshotHandle);
    push_float_parameter(flProgress);
    return 0;
}

EVRScreenshotError __thiscall IVRScreenshots_001_TakeStereoScreenshot(void *_this, ScreenshotHandle_t * pOutScreenshotHandle, const char * pchPreviewFilename, const char * pchVRFilename)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pOutScreenshotHandle);
    push_ptr_parameter(pchPreviewFilename);
    push_ptr_parameter(pchVRFilename);
    return 0;
}

EVRScreenshotError __thiscall IVRScreenshots_001_SubmitScreenshot(void *_this, ScreenshotHandle_t screenshotHandle, EVRScreenshotType type, const char * pchSourcePreviewFilename, const char * pchSourceVRFilename)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(screenshotHandle);
    push_uint32_parameter(type);
    push_ptr_parameter(pchSourcePreviewFilename);
    push_ptr_parameter(pchSourceVRFilename);
    return 0;
}

uint32_t __thiscall IVRResources_001_LoadSharedResource(void *_this, const char * pchResourceName, char * pchBuffer, uint32_t unBufferLen)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchResourceName);
    push_ptr_parameter(pchBuffer);
    push_uint32_parameter(unBufferLen);
    return 0;
}

uint32_t __thiscall IVRResources_001_GetResourceFullPath(void *_this, const char * pchResourceName, const char * pchResourceTypeDirectory, char * pchPathBuffer, uint32_t unBufferLen)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchResourceName);
    push_ptr_parameter(pchResourceTypeDirectory);
    push_ptr_parameter(pchPathBuffer);
    push_uint32_parameter(unBufferLen);
    return 0;
}

uint32_t __thiscall IVRDriverManager_001_GetDriverCount(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRDriverManager_001_GetDriverName(void *_this, DriverId_t nDriver, char * pchValue, uint32_t unBufferSize)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(nDriver);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    return 0;
}

DriverHandle_t __thiscall IVRDriverManager_001_GetDriverHandle(void *_this, const char * pchDriverName)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchDriverName);
    return 0;
}

EVRInputError __thiscall IVRInput_005_SetActionManifestPath(void *_this, const char * pchActionManifestPath)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchActionManifestPath);
    return 0;
}

EVRInputError __thiscall IVRInput_005_GetActionSetHandle(void *_this, const char * pchActionSetName, VRActionSetHandle_t * pHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchActionSetName);
    push_ptr_parameter(pHandle);
    return 0;
}

EVRInputError __thiscall IVRInput_005_GetActionHandle(void *_this, const char * pchActionName, VRActionHandle_t * pHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchActionName);
    push_ptr_parameter(pHandle);
    return 0;
}

EVRInputError __thiscall IVRInput_005_GetInputSourceHandle(void *_this, const char * pchInputSourcePath, VRInputValueHandle_t * pHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchInputSourcePath);
    push_ptr_parameter(pHandle);
    return 0;
}

EVRInputError __thiscall IVRInput_005_UpdateActionState(void *_this, VRActiveActionSet_t * pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pSets);
    push_uint32_parameter(unSizeOfVRSelectedActionSet_t);
    push_uint32_parameter(unSetCount);
    return 0;
}

EVRInputError __thiscall IVRInput_005_GetDigitalActionData(void *_this, VRActionHandle_t action, InputDigitalActionData_t * pActionData, uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(action);
    push_ptr_parameter(pActionData);
    push_uint32_parameter(unActionDataSize);
    push_uint64_parameter(ulRestrictToDevice);
    return 0;
}

EVRInputError __thiscall IVRInput_005_GetAnalogActionData(void *_this, VRActionHandle_t action, InputAnalogActionData_t * pActionData, uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(action);
    push_ptr_parameter(pActionData);
    push_uint32_parameter(unActionDataSize);
    push_uint64_parameter(ulRestrictToDevice);
    return 0;
}

EVRInputError __thiscall IVRInput_005_GetPoseActionData(void *_this, VRActionHandle_t action, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsFromNow, InputPoseActionData_t * pActionData, uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(action);
    push_uint32_parameter(eOrigin);
    push_float_parameter(fPredictedSecondsFromNow);
    push_ptr_parameter(pActionData);
    push_uint32_parameter(unActionDataSize);
    push_uint64_parameter(ulRestrictToDevice);
    return 0;
}

EVRInputError __thiscall IVRInput_005_GetSkeletalActionData(void *_this, VRActionHandle_t action, InputSkeletalActionData_t * pActionData, uint32_t unActionDataSize)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(action);
    push_ptr_parameter(pActionData);
    push_uint32_parameter(unActionDataSize);
    return 0;
}

EVRInputError __thiscall IVRInput_005_GetBoneCount(void *_this, VRActionHandle_t action, uint32_t * pBoneCount)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(action);
    push_ptr_parameter(pBoneCount);
    return 0;
}

EVRInputError __thiscall IVRInput_005_GetBoneHierarchy(void *_this, VRActionHandle_t action, BoneIndex_t * pParentIndices, uint32_t unIndexArayCount)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(action);
    push_ptr_parameter(pParentIndices);
    push_uint32_parameter(unIndexArayCount);
    return 0;
}

EVRInputError __thiscall IVRInput_005_GetBoneName(void *_this, VRActionHandle_t action, BoneIndex_t nBoneIndex, char * pchBoneName, uint32_t unNameBufferSize)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(action);
    push_uint32_parameter(nBoneIndex);
    push_ptr_parameter(pchBoneName);
    push_uint32_parameter(unNameBufferSize);
    return 0;
}

EVRInputError __thiscall IVRInput_005_GetSkeletalReferenceTransforms(void *_this, VRActionHandle_t action, EVRSkeletalTransformSpace eTransformSpace, EVRSkeletalReferencePose eReferencePose, VRBoneTransform_t * pTransformArray, uint32_t unTransformArrayCount)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(action);
    push_uint32_parameter(eTransformSpace);
    push_uint32_parameter(eReferencePose);
    push_ptr_parameter(pTransformArray);
    push_uint32_parameter(unTransformArrayCount);
    return 0;
}

EVRInputError __thiscall IVRInput_005_GetSkeletalTrackingLevel(void *_this, VRActionHandle_t action, EVRSkeletalTrackingLevel * pSkeletalTrackingLevel)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(action);
    push_ptr_parameter(pSkeletalTrackingLevel);
    return 0;
}

EVRInputError __thiscall IVRInput_005_GetSkeletalBoneData(void *_this, VRActionHandle_t action, EVRSkeletalTransformSpace eTransformSpace, EVRSkeletalMotionRange eMotionRange, VRBoneTransform_t * pTransformArray, uint32_t unTransformArrayCount)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(action);
    push_uint32_parameter(eTransformSpace);
    push_uint32_parameter(eMotionRange);
    push_ptr_parameter(pTransformArray);
    push_uint32_parameter(unTransformArrayCount);
    return 0;
}

EVRInputError __thiscall IVRInput_005_GetSkeletalSummaryData(void *_this, VRActionHandle_t action, VRSkeletalSummaryData_t * pSkeletalSummaryData)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(action);
    push_ptr_parameter(pSkeletalSummaryData);
    return 0;
}

EVRInputError __thiscall IVRInput_005_GetSkeletalBoneDataCompressed(void *_this, VRActionHandle_t action, EVRSkeletalMotionRange eMotionRange, void * pvCompressedData, uint32_t unCompressedSize, uint32_t * punRequiredCompressedSize)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(action);
    push_uint32_parameter(eMotionRange);
    push_ptr_parameter(pvCompressedData);
    push_uint32_parameter(unCompressedSize);
    push_ptr_parameter(punRequiredCompressedSize);
    return 0;
}

EVRInputError __thiscall IVRInput_005_DecompressSkeletalBoneData(void *_this, const void * pvCompressedBuffer, uint32_t unCompressedBufferSize, EVRSkeletalTransformSpace eTransformSpace, VRBoneTransform_t * pTransformArray, uint32_t unTransformArrayCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pvCompressedBuffer);
    push_uint32_parameter(unCompressedBufferSize);
    push_uint32_parameter(eTransformSpace);
    push_ptr_parameter(pTransformArray);
    push_uint32_parameter(unTransformArrayCount);
    return 0;
}

EVRInputError __thiscall IVRInput_005_TriggerHapticVibrationAction(void *_this, VRActionHandle_t action, float fStartSecondsFromNow, float fDurationSeconds, float fFrequency, float fAmplitude, VRInputValueHandle_t ulRestrictToDevice)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(action);
    push_float_parameter(fStartSecondsFromNow);
    push_float_parameter(fDurationSeconds);
    push_float_parameter(fFrequency);
    push_float_parameter(fAmplitude);
    push_uint64_parameter(ulRestrictToDevice);
    return 0;
}

EVRInputError __thiscall IVRInput_005_GetActionOrigins(void *_this, VRActionSetHandle_t actionSetHandle, VRActionHandle_t digitalActionHandle, VRInputValueHandle_t * originsOut, uint32_t originOutCount)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(actionSetHandle);
    push_uint64_parameter(digitalActionHandle);
    push_ptr_parameter(originsOut);
    push_uint32_parameter(originOutCount);
    return 0;
}

EVRInputError __thiscall IVRInput_005_GetOriginLocalizedName(void *_this, VRInputValueHandle_t origin, char * pchNameArray, uint32_t unNameArraySize, int32_t unStringSectionsToInclude)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(origin);
    push_ptr_parameter(pchNameArray);
    push_uint32_parameter(unNameArraySize);
    push_uint32_parameter(unStringSectionsToInclude);
    return 0;
}

EVRInputError __thiscall IVRInput_005_GetOriginTrackedDeviceInfo(void *_this, VRInputValueHandle_t origin, InputOriginInfo_t * pOriginInfo, uint32_t unOriginInfoSize)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(origin);
    push_ptr_parameter(pOriginInfo);
    push_uint32_parameter(unOriginInfoSize);
    return 0;
}

EVRInputError __thiscall IVRInput_005_ShowActionOrigins(void *_this, VRActionSetHandle_t actionSetHandle, VRActionHandle_t ulActionHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(actionSetHandle);
    push_uint64_parameter(ulActionHandle);
    return 0;
}

EVRInputError __thiscall IVRInput_005_ShowBindingsForActionSet(void *_this, VRActiveActionSet_t * pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount, VRInputValueHandle_t originToHighlight)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pSets);
    push_uint32_parameter(unSizeOfVRSelectedActionSet_t);
    push_uint32_parameter(unSetCount);
    push_uint64_parameter(originToHighlight);
    return 0;
}

EIOBufferError __thiscall IVRIOBuffer_001_Open(void *_this, const char * pchPath, EIOBufferMode mode, uint32_t unElementSize, uint32_t unElements, IOBufferHandle_t * pulBuffer)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchPath);
    push_uint32_parameter(mode);
    push_uint32_parameter(unElementSize);
    push_uint32_parameter(unElements);
    push_ptr_parameter(pulBuffer);
    return 0;
}

EIOBufferError __thiscall IVRIOBuffer_001_Close(void *_this, IOBufferHandle_t ulBuffer)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulBuffer);
    return 0;
}

EIOBufferError __thiscall IVRIOBuffer_001_Read(void *_this, IOBufferHandle_t ulBuffer, void * pDst, uint32_t unBytes, uint32_t * punRead)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulBuffer);
    push_ptr_parameter(pDst);
    push_uint32_parameter(unBytes);
    push_ptr_parameter(punRead);
    return 0;
}

EIOBufferError __thiscall IVRIOBuffer_001_Write(void *_this, IOBufferHandle_t ulBuffer, void * pSrc, uint32_t unBytes)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulBuffer);
    push_ptr_parameter(pSrc);
    push_uint32_parameter(unBytes);
    return 0;
}

PropertyContainerHandle_t __thiscall IVRIOBuffer_001_PropertyContainer(void *_this, IOBufferHandle_t ulBuffer)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulBuffer);
    return 0;
}

EVRInitError __thiscall IVRClientCore_003_Init(void *_this, EVRApplicationType eApplicationType, const char * pStartupInfo)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eApplicationType);
    push_ptr_parameter(pStartupInfo);
    return 0;
}

void __thiscall IVRClientCore_003_Cleanup(void *_this)
{
    push_ptr_parameter(_this);
}

EVRInitError __thiscall IVRClientCore_003_IsInterfaceVersionValid(void *_this, const char * pchInterfaceVersion)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchInterfaceVersion);
    return 0;
}

void * __thiscall IVRClientCore_003_GetGenericInterface(void *_this, const char * pchNameAndVersion, EVRInitError * peError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchNameAndVersion);
    push_ptr_parameter(peError);
    return 0;
}

bool __thiscall IVRClientCore_003_BIsHmdPresent(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

const char * __thiscall IVRClientCore_003_GetEnglishStringForHmdError(void *_this, EVRInitError eError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eError);
    return 0;
}

const char * __thiscall IVRClientCore_003_GetIDForVRInitError(void *_this, EVRInitError eError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eError);
    return 0;
}

bool __thiscall IVRChaperoneSetup_005_CommitWorkingCopy(void *_this, EChaperoneConfigFile configFile)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(configFile);
    return 0;
}

void __thiscall IVRChaperoneSetup_005_RevertWorkingCopy(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRChaperoneSetup_005_GetWorkingPlayAreaSize(void *_this, float * pSizeX, float * pSizeZ)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pSizeX);
    push_ptr_parameter(pSizeZ);
    return 0;
}

bool __thiscall IVRChaperoneSetup_005_GetWorkingPlayAreaRect(void *_this, HmdQuad_t * rect)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(rect);
    return 0;
}

bool __thiscall IVRChaperoneSetup_005_GetWorkingCollisionBoundsInfo(void *_this, HmdQuad_t * pQuadsBuffer, uint32_t * punQuadsCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pQuadsBuffer);
    push_ptr_parameter(punQuadsCount);
    return 0;
}

bool __thiscall IVRChaperoneSetup_005_GetLiveCollisionBoundsInfo(void *_this, HmdQuad_t * pQuadsBuffer, uint32_t * punQuadsCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pQuadsBuffer);
    push_ptr_parameter(punQuadsCount);
    return 0;
}

bool __thiscall IVRChaperoneSetup_005_GetWorkingSeatedZeroPoseToRawTrackingPose(void *_this, HmdMatrix34_t * pmatSeatedZeroPoseToRawTrackingPose)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pmatSeatedZeroPoseToRawTrackingPose);
    return 0;
}

bool __thiscall IVRChaperoneSetup_005_GetWorkingStandingZeroPoseToRawTrackingPose(void *_this, HmdMatrix34_t * pmatStandingZeroPoseToRawTrackingPose)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pmatStandingZeroPoseToRawTrackingPose);
    return 0;
}

void __thiscall IVRChaperoneSetup_005_SetWorkingPlayAreaSize(void *_this, float sizeX, float sizeZ)
{
    push_ptr_parameter(_this);
    push_float_parameter(sizeX);
    push_float_parameter(sizeZ);
}

void __thiscall IVRChaperoneSetup_005_SetWorkingCollisionBoundsInfo(void *_this, HmdQuad_t * pQuadsBuffer, uint32_t unQuadsCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pQuadsBuffer);
    push_uint32_parameter(unQuadsCount);
}

void __thiscall IVRChaperoneSetup_005_SetWorkingSeatedZeroPoseToRawTrackingPose(void *_this, HmdMatrix34_t * pMatSeatedZeroPoseToRawTrackingPose)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pMatSeatedZeroPoseToRawTrackingPose);
}

void __thiscall IVRChaperoneSetup_005_SetWorkingStandingZeroPoseToRawTrackingPose(void *_this, HmdMatrix34_t * pMatStandingZeroPoseToRawTrackingPose)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pMatStandingZeroPoseToRawTrackingPose);
}

void __thiscall IVRChaperoneSetup_005_ReloadFromDisk(void *_this, EChaperoneConfigFile configFile)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(configFile);
}

bool __thiscall IVRChaperoneSetup_005_GetLiveSeatedZeroPoseToRawTrackingPose(void *_this, HmdMatrix34_t * pmatSeatedZeroPoseToRawTrackingPose)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pmatSeatedZeroPoseToRawTrackingPose);
    return 0;
}

void __thiscall IVRChaperoneSetup_005_SetWorkingCollisionBoundsTagsInfo(void *_this, uint8_t * pTagsBuffer, uint32_t unTagCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pTagsBuffer);
    push_uint32_parameter(unTagCount);
}

bool __thiscall IVRChaperoneSetup_005_GetLiveCollisionBoundsTagsInfo(void *_this, uint8_t * pTagsBuffer, uint32_t * punTagCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pTagsBuffer);
    push_ptr_parameter(punTagCount);
    return 0;
}

bool __thiscall IVRChaperoneSetup_005_SetWorkingPhysicalBoundsInfo(void *_this, HmdQuad_t * pQuadsBuffer, uint32_t unQuadsCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pQuadsBuffer);
    push_uint32_parameter(unQuadsCount);
    return 0;
}

bool __thiscall IVRChaperoneSetup_005_GetLivePhysicalBoundsInfo(void *_this, HmdQuad_t * pQuadsBuffer, uint32_t * punQuadsCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pQuadsBuffer);
    push_ptr_parameter(punQuadsCount);
    return 0;
}

bool __thiscall IVRChaperoneSetup_005_ExportLiveToBuffer(void *_this, char * pBuffer, uint32_t * pnBufferLength)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pBuffer);
    push_ptr_parameter(pnBufferLength);
    return 0;
}

bool __thiscall IVRChaperoneSetup_005_ImportFromBufferToWorking(void *_this, const char * pBuffer, uint32_t nImportFlags)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pBuffer);
    push_uint32_parameter(nImportFlags);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_FindOverlay(void *_this, const char * pchOverlayKey, VROverlayHandle_t * pOverlayHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayKey);
    push_ptr_parameter(pOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_CreateOverlay(void *_this, const char * pchOverlayKey, const char * pchOverlayName, VROverlayHandle_t * pOverlayHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayKey);
    push_ptr_parameter(pchOverlayName);
    push_ptr_parameter(pOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_DestroyOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_SetHighQualityOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

VROverlayHandle_t __thiscall IVROverlay_018_GetHighQualityOverlay(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVROverlay_018_GetOverlayKey(void *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(pError);
    return 0;
}

uint32_t __thiscall IVROverlay_018_GetOverlayName(void *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(pError);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_SetOverlayName(void *_this, VROverlayHandle_t ulOverlayHandle, const char * pchName)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchName);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_GetOverlayImageData(void *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unBufferSize, uint32_t * punWidth, uint32_t * punHeight)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvBuffer);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(punWidth);
    push_ptr_parameter(punHeight);
    return 0;
}

const char * __thiscall IVROverlay_018_GetOverlayErrorNameFromEnum(void *_this, EVROverlayError error)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(error);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_SetOverlayRenderingPid(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unPID)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unPID);
    return 0;
}

uint32_t __thiscall IVROverlay_018_GetOverlayRenderingPid(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_SetOverlayFlag(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eOverlayFlag);
    push_bool_parameter(bEnabled);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_GetOverlayFlag(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool * pbEnabled)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eOverlayFlag);
    push_ptr_parameter(pbEnabled);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_SetOverlayColor(void *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fRed);
    push_float_parameter(fGreen);
    push_float_parameter(fBlue);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_GetOverlayColor(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfRed, float * pfGreen, float * pfBlue)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfRed);
    push_ptr_parameter(pfGreen);
    push_ptr_parameter(pfBlue);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_SetOverlayAlpha(void *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fAlpha);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_GetOverlayAlpha(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfAlpha)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfAlpha);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_SetOverlayTexelAspect(void *_this, VROverlayHandle_t ulOverlayHandle, float fTexelAspect)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fTexelAspect);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_GetOverlayTexelAspect(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfTexelAspect)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfTexelAspect);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_SetOverlaySortOrder(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unSortOrder)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unSortOrder);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_GetOverlaySortOrder(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * punSortOrder)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(punSortOrder);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_SetOverlayWidthInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fWidthInMeters);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_GetOverlayWidthInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfWidthInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfWidthInMeters);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_SetOverlayAutoCurveDistanceRangeInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fMinDistanceInMeters);
    push_float_parameter(fMaxDistanceInMeters);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_GetOverlayAutoCurveDistanceRangeInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfMinDistanceInMeters, float * pfMaxDistanceInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfMinDistanceInMeters);
    push_ptr_parameter(pfMaxDistanceInMeters);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_SetOverlayTextureColorSpace(void *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eTextureColorSpace);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_GetOverlayTextureColorSpace(void *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace * peTextureColorSpace)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peTextureColorSpace);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_SetOverlayTextureBounds(void *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pOverlayTextureBounds);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_GetOverlayTextureBounds(void *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pOverlayTextureBounds);
    return 0;
}

uint32_t __thiscall IVROverlay_018_GetOverlayRenderModel(void *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, HmdColor_t * pColor, EVROverlayError * pError)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(pColor);
    push_ptr_parameter(pError);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_SetOverlayRenderModel(void *_this, VROverlayHandle_t ulOverlayHandle, const char * pchRenderModel, HmdColor_t * pColor)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchRenderModel);
    push_ptr_parameter(pColor);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_GetOverlayTransformType(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType * peTransformType)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peTransformType);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_SetOverlayTransformAbsolute(void *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eTrackingOrigin);
    push_ptr_parameter(pmatTrackingOriginToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_GetOverlayTransformAbsolute(void *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin * peTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peTrackingOrigin);
    push_ptr_parameter(pmatTrackingOriginToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_SetOverlayTransformTrackedDeviceRelative(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unTrackedDevice);
    push_ptr_parameter(pmatTrackedDeviceToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_GetOverlayTransformTrackedDeviceRelative(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(punTrackedDevice);
    push_ptr_parameter(pmatTrackedDeviceToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_SetOverlayTransformTrackedDeviceComponent(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unDeviceIndex, const char * pchComponentName)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unDeviceIndex);
    push_ptr_parameter(pchComponentName);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_GetOverlayTransformTrackedDeviceComponent(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punDeviceIndex, char * pchComponentName, uint32_t unComponentNameSize)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(punDeviceIndex);
    push_ptr_parameter(pchComponentName);
    push_uint32_parameter(unComponentNameSize);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_GetOverlayTransformOverlayRelative(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t * ulOverlayHandleParent, HmdMatrix34_t * pmatParentOverlayToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(ulOverlayHandleParent);
    push_ptr_parameter(pmatParentOverlayToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_SetOverlayTransformOverlayRelative(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t ulOverlayHandleParent, HmdMatrix34_t * pmatParentOverlayToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint64_parameter(ulOverlayHandleParent);
    push_ptr_parameter(pmatParentOverlayToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_ShowOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_HideOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

bool __thiscall IVROverlay_018_IsOverlayVisible(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_GetTransformForOverlayCoordinates(void *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdVector2_t coordinatesInOverlay, HmdMatrix34_t * pmatTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eTrackingOrigin);
    push_HmdVector2_parameter(coordinatesInOverlay);
    push_ptr_parameter(pmatTransform);
    return 0;
}

bool __thiscall IVROverlay_018_PollNextOverlayEvent(void *_this, VROverlayHandle_t ulOverlayHandle, VREvent_t * pEvent, uint32_t uncbVREvent)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pEvent);
    push_uint32_parameter(uncbVREvent);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_GetOverlayInputMethod(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod * peInputMethod)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peInputMethod);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_SetOverlayInputMethod(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eInputMethod);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_GetOverlayMouseScale(void *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvecMouseScale);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_SetOverlayMouseScale(void *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvecMouseScale);
    return 0;
}

bool __thiscall IVROverlay_018_ComputeOverlayIntersection(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t * pParams, VROverlayIntersectionResults_t * pResults)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pParams);
    push_ptr_parameter(pResults);
    return 0;
}

bool __thiscall IVROverlay_018_IsHoverTargetOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

VROverlayHandle_t __thiscall IVROverlay_018_GetGamepadFocusOverlay(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_SetGamepadFocusOverlay(void *_this, VROverlayHandle_t ulNewFocusOverlay)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulNewFocusOverlay);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_SetOverlayNeighbor(void *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom, VROverlayHandle_t ulTo)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eDirection);
    push_uint64_parameter(ulFrom);
    push_uint64_parameter(ulTo);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_MoveGamepadFocusToNeighbor(void *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eDirection);
    push_uint64_parameter(ulFrom);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_SetOverlayDualAnalogTransform(void *_this, VROverlayHandle_t ulOverlay, EDualAnalogWhich eWhich, HmdVector2_t * vCenter, float fRadius)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlay);
    push_uint32_parameter(eWhich);
    push_ptr_parameter(vCenter);
    push_float_parameter(fRadius);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_GetOverlayDualAnalogTransform(void *_this, VROverlayHandle_t ulOverlay, EDualAnalogWhich eWhich, HmdVector2_t * pvCenter, float * pfRadius)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlay);
    push_uint32_parameter(eWhich);
    push_ptr_parameter(pvCenter);
    push_ptr_parameter(pfRadius);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_SetOverlayTexture(void *_this, VROverlayHandle_t ulOverlayHandle, Texture_t * pTexture)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pTexture);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_ClearOverlayTexture(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_SetOverlayRaw(void *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvBuffer);
    push_uint32_parameter(unWidth);
    push_uint32_parameter(unHeight);
    push_uint32_parameter(unDepth);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_SetOverlayFromFile(void *_this, VROverlayHandle_t ulOverlayHandle, const char * pchFilePath)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchFilePath);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_GetOverlayTexture(void *_this, VROverlayHandle_t ulOverlayHandle, void ** pNativeTextureHandle, void * pNativeTextureRef, uint32_t * pWidth, uint32_t * pHeight, uint32_t * pNativeFormat, ETextureType * pAPIType, EColorSpace * pColorSpace, VRTextureBounds_t * pTextureBounds)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pNativeTextureHandle);
    push_ptr_parameter(pNativeTextureRef);
    push_ptr_parameter(pWidth);
    push_ptr_parameter(pHeight);
    push_ptr_parameter(pNativeFormat);
    push_ptr_parameter(pAPIType);
    push_ptr_parameter(pColorSpace);
    push_ptr_parameter(pTextureBounds);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_ReleaseNativeOverlayHandle(void *_this, VROverlayHandle_t ulOverlayHandle, void * pNativeTextureHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pNativeTextureHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_GetOverlayTextureSize(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * pWidth, uint32_t * pHeight)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pWidth);
    push_ptr_parameter(pHeight);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_CreateDashboardOverlay(void *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pMainHandle, VROverlayHandle_t * pThumbnailHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayKey);
    push_ptr_parameter(pchOverlayFriendlyName);
    push_ptr_parameter(pMainHandle);
    push_ptr_parameter(pThumbnailHandle);
    return 0;
}

bool __thiscall IVROverlay_018_IsDashboardVisible(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVROverlay_018_IsActiveDashboardOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_SetDashboardOverlaySceneProcess(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unProcessId);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_GetDashboardOverlaySceneProcess(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * punProcessId)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(punProcessId);
    return 0;
}

void __thiscall IVROverlay_018_ShowDashboard(void *_this, const char * pchOverlayToShow)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayToShow);
}

TrackedDeviceIndex_t __thiscall IVROverlay_018_GetPrimaryDashboardDevice(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_ShowKeyboard(void *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eInputMode);
    push_uint32_parameter(eLineInputMode);
    push_ptr_parameter(pchDescription);
    push_uint32_parameter(unCharMax);
    push_ptr_parameter(pchExistingText);
    push_bool_parameter(bUseMinimalMode);
    push_uint64_parameter(uUserValue);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_ShowKeyboardForOverlay(void *_this, VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eInputMode);
    push_uint32_parameter(eLineInputMode);
    push_ptr_parameter(pchDescription);
    push_uint32_parameter(unCharMax);
    push_ptr_parameter(pchExistingText);
    push_bool_parameter(bUseMinimalMode);
    push_uint64_parameter(uUserValue);
    return 0;
}

uint32_t __thiscall IVROverlay_018_GetKeyboardText(void *_this, char * pchText, uint32_t cchText)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchText);
    push_uint32_parameter(cchText);
    return 0;
}

void __thiscall IVROverlay_018_HideKeyboard(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVROverlay_018_SetKeyboardTransformAbsolute(void *_this, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToKeyboardTransform)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eTrackingOrigin);
    push_ptr_parameter(pmatTrackingOriginToKeyboardTransform);
}

void __thiscall IVROverlay_018_SetKeyboardPositionForOverlay(void *_this, VROverlayHandle_t ulOverlayHandle, HmdRect2_t avoidRect)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_HmdRect2_parameter(avoidRect);
}

EVROverlayError __thiscall IVROverlay_018_SetOverlayIntersectionMask(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionMaskPrimitive_t * pMaskPrimitives, uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pMaskPrimitives);
    push_uint32_parameter(unNumMaskPrimitives);
    push_uint32_parameter(unPrimitiveSize);
    return 0;
}

EVROverlayError __thiscall IVROverlay_018_GetOverlayFlags(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * pFlags)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pFlags);
    return 0;
}

VRMessageOverlayResponse __thiscall IVROverlay_018_ShowMessageOverlay(void *_this, const char * pchText, const char * pchCaption, const char * pchButton0Text, const char * pchButton1Text, const char * pchButton2Text, const char * pchButton3Text)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchText);
    push_ptr_parameter(pchCaption);
    push_ptr_parameter(pchButton0Text);
    push_ptr_parameter(pchButton1Text);
    push_ptr_parameter(pchButton2Text);
    push_ptr_parameter(pchButton3Text);
    return 0;
}

void __thiscall IVROverlay_018_CloseMessageOverlay(void *_this)
{
    push_ptr_parameter(_this);
}

const char * __thiscall IVRTrackedCamera_004_GetCameraErrorNameFromEnum(void *_this, EVRTrackedCameraError eCameraError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eCameraError);
    return 0;
}

EVRTrackedCameraError __thiscall IVRTrackedCamera_004_HasCamera(void *_this, TrackedDeviceIndex_t nDeviceIndex, bool * pHasCamera)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(nDeviceIndex);
    push_ptr_parameter(pHasCamera);
    return 0;
}

EVRTrackedCameraError __thiscall IVRTrackedCamera_004_GetCameraFrameSize(void *_this, TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, uint32_t * pnWidth, uint32_t * pnHeight, uint32_t * pnFrameBufferSize)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(nDeviceIndex);
    push_uint32_parameter(eFrameType);
    push_ptr_parameter(pnWidth);
    push_ptr_parameter(pnHeight);
    push_ptr_parameter(pnFrameBufferSize);
    return 0;
}

EVRTrackedCameraError __thiscall IVRTrackedCamera_004_GetCameraIntrinsics(void *_this, TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, HmdVector2_t * pFocalLength, HmdVector2_t * pCenter)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(nDeviceIndex);
    push_uint32_parameter(eFrameType);
    push_ptr_parameter(pFocalLength);
    push_ptr_parameter(pCenter);
    return 0;
}

EVRTrackedCameraError __thiscall IVRTrackedCamera_004_GetCameraProjection(void *_this, TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, float flZNear, float flZFar, HmdMatrix44_t * pProjection)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(nDeviceIndex);
    push_uint32_parameter(eFrameType);
    push_float_parameter(flZNear);
    push_float_parameter(flZFar);
    push_ptr_parameter(pProjection);
    return 0;
}

EVRTrackedCameraError __thiscall IVRTrackedCamera_004_AcquireVideoStreamingService(void *_this, TrackedDeviceIndex_t nDeviceIndex, TrackedCameraHandle_t * pHandle)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(nDeviceIndex);
    push_ptr_parameter(pHandle);
    return 0;
}

EVRTrackedCameraError __thiscall IVRTrackedCamera_004_ReleaseVideoStreamingService(void *_this, TrackedCameraHandle_t hTrackedCamera)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(hTrackedCamera);
    return 0;
}

EVRTrackedCameraError __thiscall IVRTrackedCamera_004_GetVideoStreamFrameBuffer(void *_this, TrackedCameraHandle_t hTrackedCamera, EVRTrackedCameraFrameType eFrameType, void * pFrameBuffer, uint32_t nFrameBufferSize, CameraVideoStreamFrameHeader_t * pFrameHeader, uint32_t nFrameHeaderSize)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(hTrackedCamera);
    push_uint32_parameter(eFrameType);
    push_ptr_parameter(pFrameBuffer);
    push_uint32_parameter(nFrameBufferSize);
    push_ptr_parameter(pFrameHeader);
    push_uint32_parameter(nFrameHeaderSize);
    return 0;
}

EVRTrackedCameraError __thiscall IVRTrackedCamera_004_GetVideoStreamTextureSize(void *_this, TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, VRTextureBounds_t * pTextureBounds, uint32_t * pnWidth, uint32_t * pnHeight)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(nDeviceIndex);
    push_uint32_parameter(eFrameType);
    push_ptr_parameter(pTextureBounds);
    push_ptr_parameter(pnWidth);
    push_ptr_parameter(pnHeight);
    return 0;
}

EVRTrackedCameraError __thiscall IVRTrackedCamera_004_GetVideoStreamTextureD3D11(void *_this, TrackedCameraHandle_t hTrackedCamera, EVRTrackedCameraFrameType eFrameType, void * pD3D11DeviceOrResource, void ** ppD3D11ShaderResourceView, CameraVideoStreamFrameHeader_t * pFrameHeader, uint32_t nFrameHeaderSize)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(hTrackedCamera);
    push_uint32_parameter(eFrameType);
    push_ptr_parameter(pD3D11DeviceOrResource);
    push_ptr_parameter(ppD3D11ShaderResourceView);
    push_ptr_parameter(pFrameHeader);
    push_uint32_parameter(nFrameHeaderSize);
    return 0;
}

EVRTrackedCameraError __thiscall IVRTrackedCamera_004_GetVideoStreamTextureGL(void *_this, TrackedCameraHandle_t hTrackedCamera, EVRTrackedCameraFrameType eFrameType, glUInt_t * pglTextureId, CameraVideoStreamFrameHeader_t * pFrameHeader, uint32_t nFrameHeaderSize)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(hTrackedCamera);
    push_uint32_parameter(eFrameType);
    push_ptr_parameter(pglTextureId);
    push_ptr_parameter(pFrameHeader);
    push_uint32_parameter(nFrameHeaderSize);
    return 0;
}

EVRTrackedCameraError __thiscall IVRTrackedCamera_004_ReleaseVideoStreamTextureGL(void *_this, TrackedCameraHandle_t hTrackedCamera, glUInt_t glTextureId)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(hTrackedCamera);
    push_uint32_parameter(glTextureId);
    return 0;
}

EVRInputError __thiscall IVRInput_004_SetActionManifestPath(void *_this, const char * pchActionManifestPath)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchActionManifestPath);
    return 0;
}

EVRInputError __thiscall IVRInput_004_GetActionSetHandle(void *_this, const char * pchActionSetName, VRActionSetHandle_t * pHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchActionSetName);
    push_ptr_parameter(pHandle);
    return 0;
}

EVRInputError __thiscall IVRInput_004_GetActionHandle(void *_this, const char * pchActionName, VRActionHandle_t * pHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchActionName);
    push_ptr_parameter(pHandle);
    return 0;
}

EVRInputError __thiscall IVRInput_004_GetInputSourceHandle(void *_this, const char * pchInputSourcePath, VRInputValueHandle_t * pHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchInputSourcePath);
    push_ptr_parameter(pHandle);
    return 0;
}

EVRInputError __thiscall IVRInput_004_UpdateActionState(void *_this, VRActiveActionSet_t * pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pSets);
    push_uint32_parameter(unSizeOfVRSelectedActionSet_t);
    push_uint32_parameter(unSetCount);
    return 0;
}

EVRInputError __thiscall IVRInput_004_GetDigitalActionData(void *_this, VRActionHandle_t action, InputDigitalActionData_t * pActionData, uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(action);
    push_ptr_parameter(pActionData);
    push_uint32_parameter(unActionDataSize);
    push_uint64_parameter(ulRestrictToDevice);
    return 0;
}

EVRInputError __thiscall IVRInput_004_GetAnalogActionData(void *_this, VRActionHandle_t action, InputAnalogActionData_t * pActionData, uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(action);
    push_ptr_parameter(pActionData);
    push_uint32_parameter(unActionDataSize);
    push_uint64_parameter(ulRestrictToDevice);
    return 0;
}

EVRInputError __thiscall IVRInput_004_GetPoseActionData(void *_this, VRActionHandle_t action, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsFromNow, InputPoseActionData_t * pActionData, uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(action);
    push_uint32_parameter(eOrigin);
    push_float_parameter(fPredictedSecondsFromNow);
    push_ptr_parameter(pActionData);
    push_uint32_parameter(unActionDataSize);
    push_uint64_parameter(ulRestrictToDevice);
    return 0;
}

EVRInputError __thiscall IVRInput_004_GetSkeletalActionData(void *_this, VRActionHandle_t action, InputSkeletalActionData_t * pActionData, uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(action);
    push_ptr_parameter(pActionData);
    push_uint32_parameter(unActionDataSize);
    push_uint64_parameter(ulRestrictToDevice);
    return 0;
}

EVRInputError __thiscall IVRInput_004_GetSkeletalBoneData(void *_this, VRActionHandle_t action, EVRSkeletalTransformSpace eTransformSpace, EVRSkeletalMotionRange eMotionRange, VRBoneTransform_t * pTransformArray, uint32_t unTransformArrayCount, VRInputValueHandle_t ulRestrictToDevice)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(action);
    push_uint32_parameter(eTransformSpace);
    push_uint32_parameter(eMotionRange);
    push_ptr_parameter(pTransformArray);
    push_uint32_parameter(unTransformArrayCount);
    push_uint64_parameter(ulRestrictToDevice);
    return 0;
}

EVRInputError __thiscall IVRInput_004_GetSkeletalBoneDataCompressed(void *_this, VRActionHandle_t action, EVRSkeletalTransformSpace eTransformSpace, EVRSkeletalMotionRange eMotionRange, void * pvCompressedData, uint32_t unCompressedSize, uint32_t * punRequiredCompressedSize, VRInputValueHandle_t ulRestrictToDevice)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(action);
    push_uint32_parameter(eTransformSpace);
    push_uint32_parameter(eMotionRange);
    push_ptr_parameter(pvCompressedData);
    push_uint32_parameter(unCompressedSize);
    push_ptr_parameter(punRequiredCompressedSize);
    push_uint64_parameter(ulRestrictToDevice);
    return 0;
}

EVRInputError __thiscall IVRInput_004_DecompressSkeletalBoneData(void *_this, void * pvCompressedBuffer, uint32_t unCompressedBufferSize, EVRSkeletalTransformSpace * peTransformSpace, VRBoneTransform_t * pTransformArray, uint32_t unTransformArrayCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pvCompressedBuffer);
    push_uint32_parameter(unCompressedBufferSize);
    push_ptr_parameter(peTransformSpace);
    push_ptr_parameter(pTransformArray);
    push_uint32_parameter(unTransformArrayCount);
    return 0;
}

EVRInputError __thiscall IVRInput_004_TriggerHapticVibrationAction(void *_this, VRActionHandle_t action, float fStartSecondsFromNow, float fDurationSeconds, float fFrequency, float fAmplitude, VRInputValueHandle_t ulRestrictToDevice)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(action);
    push_float_parameter(fStartSecondsFromNow);
    push_float_parameter(fDurationSeconds);
    push_float_parameter(fFrequency);
    push_float_parameter(fAmplitude);
    push_uint64_parameter(ulRestrictToDevice);
    return 0;
}

EVRInputError __thiscall IVRInput_004_GetActionOrigins(void *_this, VRActionSetHandle_t actionSetHandle, VRActionHandle_t digitalActionHandle, VRInputValueHandle_t * originsOut, uint32_t originOutCount)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(actionSetHandle);
    push_uint64_parameter(digitalActionHandle);
    push_ptr_parameter(originsOut);
    push_uint32_parameter(originOutCount);
    return 0;
}

EVRInputError __thiscall IVRInput_004_GetOriginLocalizedName(void *_this, VRInputValueHandle_t origin, char * pchNameArray, uint32_t unNameArraySize)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(origin);
    push_ptr_parameter(pchNameArray);
    push_uint32_parameter(unNameArraySize);
    return 0;
}

EVRInputError __thiscall IVRInput_004_GetOriginTrackedDeviceInfo(void *_this, VRInputValueHandle_t origin, InputOriginInfo_t * pOriginInfo, uint32_t unOriginInfoSize)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(origin);
    push_ptr_parameter(pOriginInfo);
    push_uint32_parameter(unOriginInfoSize);
    return 0;
}

EVRInputError __thiscall IVRInput_004_ShowActionOrigins(void *_this, VRActionSetHandle_t actionSetHandle, VRActionHandle_t ulActionHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(actionSetHandle);
    push_uint64_parameter(ulActionHandle);
    return 0;
}

EVRInputError __thiscall IVRInput_004_ShowBindingsForActionSet(void *_this, VRActiveActionSet_t * pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount, VRInputValueHandle_t originToHighlight)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pSets);
    push_uint32_parameter(unSizeOfVRSelectedActionSet_t);
    push_uint32_parameter(unSetCount);
    push_uint64_parameter(originToHighlight);
    return 0;
}

const char * __thiscall IVRTrackedCamera_003_GetCameraErrorNameFromEnum(void *_this, EVRTrackedCameraError eCameraError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eCameraError);
    return 0;
}

EVRTrackedCameraError __thiscall IVRTrackedCamera_003_HasCamera(void *_this, TrackedDeviceIndex_t nDeviceIndex, bool * pHasCamera)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(nDeviceIndex);
    push_ptr_parameter(pHasCamera);
    return 0;
}

EVRTrackedCameraError __thiscall IVRTrackedCamera_003_GetCameraFrameSize(void *_this, TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, uint32_t * pnWidth, uint32_t * pnHeight, uint32_t * pnFrameBufferSize)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(nDeviceIndex);
    push_uint32_parameter(eFrameType);
    push_ptr_parameter(pnWidth);
    push_ptr_parameter(pnHeight);
    push_ptr_parameter(pnFrameBufferSize);
    return 0;
}

EVRTrackedCameraError __thiscall IVRTrackedCamera_003_GetCameraIntrinsics(void *_this, TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, HmdVector2_t * pFocalLength, HmdVector2_t * pCenter)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(nDeviceIndex);
    push_uint32_parameter(eFrameType);
    push_ptr_parameter(pFocalLength);
    push_ptr_parameter(pCenter);
    return 0;
}

EVRTrackedCameraError __thiscall IVRTrackedCamera_003_GetCameraProjection(void *_this, TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, float flZNear, float flZFar, HmdMatrix44_t * pProjection)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(nDeviceIndex);
    push_uint32_parameter(eFrameType);
    push_float_parameter(flZNear);
    push_float_parameter(flZFar);
    push_ptr_parameter(pProjection);
    return 0;
}

EVRTrackedCameraError __thiscall IVRTrackedCamera_003_AcquireVideoStreamingService(void *_this, TrackedDeviceIndex_t nDeviceIndex, TrackedCameraHandle_t * pHandle)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(nDeviceIndex);
    push_ptr_parameter(pHandle);
    return 0;
}

EVRTrackedCameraError __thiscall IVRTrackedCamera_003_ReleaseVideoStreamingService(void *_this, TrackedCameraHandle_t hTrackedCamera)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(hTrackedCamera);
    return 0;
}

EVRTrackedCameraError __thiscall IVRTrackedCamera_003_GetVideoStreamFrameBuffer(void *_this, TrackedCameraHandle_t hTrackedCamera, EVRTrackedCameraFrameType eFrameType, void * pFrameBuffer, uint32_t nFrameBufferSize, CameraVideoStreamFrameHeader_t * pFrameHeader, uint32_t nFrameHeaderSize)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(hTrackedCamera);
    push_uint32_parameter(eFrameType);
    push_ptr_parameter(pFrameBuffer);
    push_uint32_parameter(nFrameBufferSize);
    push_ptr_parameter(pFrameHeader);
    push_uint32_parameter(nFrameHeaderSize);
    return 0;
}

EVRTrackedCameraError __thiscall IVRTrackedCamera_003_GetVideoStreamTextureSize(void *_this, TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, VRTextureBounds_t * pTextureBounds, uint32_t * pnWidth, uint32_t * pnHeight)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(nDeviceIndex);
    push_uint32_parameter(eFrameType);
    push_ptr_parameter(pTextureBounds);
    push_ptr_parameter(pnWidth);
    push_ptr_parameter(pnHeight);
    return 0;
}

EVRTrackedCameraError __thiscall IVRTrackedCamera_003_GetVideoStreamTextureD3D11(void *_this, TrackedCameraHandle_t hTrackedCamera, EVRTrackedCameraFrameType eFrameType, void * pD3D11DeviceOrResource, void ** ppD3D11ShaderResourceView, CameraVideoStreamFrameHeader_t * pFrameHeader, uint32_t nFrameHeaderSize)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(hTrackedCamera);
    push_uint32_parameter(eFrameType);
    push_ptr_parameter(pD3D11DeviceOrResource);
    push_ptr_parameter(ppD3D11ShaderResourceView);
    push_ptr_parameter(pFrameHeader);
    push_uint32_parameter(nFrameHeaderSize);
    return 0;
}

EVRTrackedCameraError __thiscall IVRTrackedCamera_003_GetVideoStreamTextureGL(void *_this, TrackedCameraHandle_t hTrackedCamera, EVRTrackedCameraFrameType eFrameType, glUInt_t * pglTextureId, CameraVideoStreamFrameHeader_t * pFrameHeader, uint32_t nFrameHeaderSize)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(hTrackedCamera);
    push_uint32_parameter(eFrameType);
    push_ptr_parameter(pglTextureId);
    push_ptr_parameter(pFrameHeader);
    push_uint32_parameter(nFrameHeaderSize);
    return 0;
}

EVRTrackedCameraError __thiscall IVRTrackedCamera_003_ReleaseVideoStreamTextureGL(void *_this, TrackedCameraHandle_t hTrackedCamera, glUInt_t glTextureId)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(hTrackedCamera);
    push_uint32_parameter(glTextureId);
    return 0;
}

EVRRenderModelError __thiscall IVRRenderModels_005_LoadRenderModel_Async(void *_this, const char * pchRenderModelName, RenderModel_t ** ppRenderModel)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchRenderModelName);
    push_ptr_parameter(ppRenderModel);
    return 0;
}

void __thiscall IVRRenderModels_005_FreeRenderModel(void *_this, RenderModel_t * pRenderModel)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pRenderModel);
}

EVRRenderModelError __thiscall IVRRenderModels_005_LoadTexture_Async(void *_this, TextureID_t textureId, RenderModel_TextureMap_t ** ppTexture)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(textureId);
    push_ptr_parameter(ppTexture);
    return 0;
}

void __thiscall IVRRenderModels_005_FreeTexture(void *_this, RenderModel_TextureMap_t * pTexture)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pTexture);
}

EVRRenderModelError __thiscall IVRRenderModels_005_LoadTextureD3D11_Async(void *_this, TextureID_t textureId, void * pD3D11Device, void ** ppD3D11Texture2D)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(textureId);
    push_ptr_parameter(pD3D11Device);
    push_ptr_parameter(ppD3D11Texture2D);
    return 0;
}

EVRRenderModelError __thiscall IVRRenderModels_005_LoadIntoTextureD3D11_Async(void *_this, TextureID_t textureId, void * pDstTexture)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(textureId);
    push_ptr_parameter(pDstTexture);
    return 0;
}

void __thiscall IVRRenderModels_005_FreeTextureD3D11(void *_this, void * pD3D11Texture2D)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pD3D11Texture2D);
}

uint32_t __thiscall IVRRenderModels_005_GetRenderModelName(void *_this, uint32_t unRenderModelIndex, char * pchRenderModelName, uint32_t unRenderModelNameLen)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unRenderModelIndex);
    push_ptr_parameter(pchRenderModelName);
    push_uint32_parameter(unRenderModelNameLen);
    return 0;
}

uint32_t __thiscall IVRRenderModels_005_GetRenderModelCount(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRRenderModels_005_GetComponentCount(void *_this, const char * pchRenderModelName)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchRenderModelName);
    return 0;
}

uint32_t __thiscall IVRRenderModels_005_GetComponentName(void *_this, const char * pchRenderModelName, uint32_t unComponentIndex, char * pchComponentName, uint32_t unComponentNameLen)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchRenderModelName);
    push_uint32_parameter(unComponentIndex);
    push_ptr_parameter(pchComponentName);
    push_uint32_parameter(unComponentNameLen);
    return 0;
}

uint64_t __thiscall IVRRenderModels_005_GetComponentButtonMask(void *_this, const char * pchRenderModelName, const char * pchComponentName)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchRenderModelName);
    push_ptr_parameter(pchComponentName);
    return 0;
}

uint32_t __thiscall IVRRenderModels_005_GetComponentRenderModelName(void *_this, const char * pchRenderModelName, const char * pchComponentName, char * pchComponentRenderModelName, uint32_t unComponentRenderModelNameLen)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchRenderModelName);
    push_ptr_parameter(pchComponentName);
    push_ptr_parameter(pchComponentRenderModelName);
    push_uint32_parameter(unComponentRenderModelNameLen);
    return 0;
}

bool __thiscall IVRRenderModels_005_GetComponentState(void *_this, const char * pchRenderModelName, const char * pchComponentName, VRControllerState_t * pControllerState, RenderModel_ControllerMode_State_t * pState, RenderModel_ComponentState_t * pComponentState)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchRenderModelName);
    push_ptr_parameter(pchComponentName);
    push_ptr_parameter(pControllerState);
    push_ptr_parameter(pState);
    push_ptr_parameter(pComponentState);
    return 0;
}

bool __thiscall IVRRenderModels_005_RenderModelHasComponent(void *_this, const char * pchRenderModelName, const char * pchComponentName)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchRenderModelName);
    push_ptr_parameter(pchComponentName);
    return 0;
}

uint32_t __thiscall IVRRenderModels_005_GetRenderModelThumbnailURL(void *_this, const char * pchRenderModelName, char * pchThumbnailURL, uint32_t unThumbnailURLLen, EVRRenderModelError * peError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchRenderModelName);
    push_ptr_parameter(pchThumbnailURL);
    push_uint32_parameter(unThumbnailURLLen);
    push_ptr_parameter(peError);
    return 0;
}

uint32_t __thiscall IVRRenderModels_005_GetRenderModelOriginalPath(void *_this, const char * pchRenderModelName, char * pchOriginalPath, uint32_t unOriginalPathLen, EVRRenderModelError * peError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchRenderModelName);
    push_ptr_parameter(pchOriginalPath);
    push_uint32_parameter(unOriginalPathLen);
    push_ptr_parameter(peError);
    return 0;
}

const char * __thiscall IVRRenderModels_005_GetRenderModelErrorNameFromEnum(void *_this, EVRRenderModelError error)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(error);
    return 0;
}

EVRInputError __thiscall IVRInput_003_SetActionManifestPath(void *_this, const char * pchActionManifestPath)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchActionManifestPath);
    return 0;
}

EVRInputError __thiscall IVRInput_003_GetActionSetHandle(void *_this, const char * pchActionSetName, VRActionSetHandle_t * pHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchActionSetName);
    push_ptr_parameter(pHandle);
    return 0;
}

EVRInputError __thiscall IVRInput_003_GetActionHandle(void *_this, const char * pchActionName, VRActionHandle_t * pHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchActionName);
    push_ptr_parameter(pHandle);
    return 0;
}

EVRInputError __thiscall IVRInput_003_GetInputSourceHandle(void *_this, const char * pchInputSourcePath, VRInputValueHandle_t * pHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchInputSourcePath);
    push_ptr_parameter(pHandle);
    return 0;
}

EVRInputError __thiscall IVRInput_003_UpdateActionState(void *_this, VRActiveActionSet_t * pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pSets);
    push_uint32_parameter(unSizeOfVRSelectedActionSet_t);
    push_uint32_parameter(unSetCount);
    return 0;
}

EVRInputError __thiscall IVRInput_003_GetDigitalActionData(void *_this, VRActionHandle_t action, InputDigitalActionData_t * pActionData, uint32_t unActionDataSize)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(action);
    push_ptr_parameter(pActionData);
    push_uint32_parameter(unActionDataSize);
    return 0;
}

EVRInputError __thiscall IVRInput_003_GetAnalogActionData(void *_this, VRActionHandle_t action, InputAnalogActionData_t * pActionData, uint32_t unActionDataSize)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(action);
    push_ptr_parameter(pActionData);
    push_uint32_parameter(unActionDataSize);
    return 0;
}

EVRInputError __thiscall IVRInput_003_GetPoseActionData(void *_this, VRActionHandle_t action, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsFromNow, InputPoseActionData_t * pActionData, uint32_t unActionDataSize)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(action);
    push_uint32_parameter(eOrigin);
    push_float_parameter(fPredictedSecondsFromNow);
    push_ptr_parameter(pActionData);
    push_uint32_parameter(unActionDataSize);
    return 0;
}

EVRInputError __thiscall IVRInput_003_GetSkeletalActionData(void *_this, VRActionHandle_t action, EVRSkeletalTransformSpace eBoneParent, float fPredictedSecondsFromNow, InputSkeletonActionData_t * pActionData, uint32_t unActionDataSize, VRBoneTransform_t * pTransformArray, uint32_t unTransformArrayCount)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(action);
    push_uint32_parameter(eBoneParent);
    push_float_parameter(fPredictedSecondsFromNow);
    push_ptr_parameter(pActionData);
    push_uint32_parameter(unActionDataSize);
    push_ptr_parameter(pTransformArray);
    push_uint32_parameter(unTransformArrayCount);
    return 0;
}

EVRInputError __thiscall IVRInput_003_GetSkeletalActionDataCompressed(void *_this, VRActionHandle_t action, EVRSkeletalTransformSpace eBoneParent, float fPredictedSecondsFromNow, void * pvCompressedData, uint32_t unCompressedSize, uint32_t * punRequiredCompressedSize)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(action);
    push_uint32_parameter(eBoneParent);
    push_float_parameter(fPredictedSecondsFromNow);
    push_ptr_parameter(pvCompressedData);
    push_uint32_parameter(unCompressedSize);
    push_ptr_parameter(punRequiredCompressedSize);
    return 0;
}

EVRInputError __thiscall IVRInput_003_UncompressSkeletalActionData(void *_this, void * pvCompressedBuffer, uint32_t unCompressedBufferSize, EVRSkeletalTransformSpace * peBoneParent, VRBoneTransform_t * pTransformArray, uint32_t unTransformArrayCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pvCompressedBuffer);
    push_uint32_parameter(unCompressedBufferSize);
    push_ptr_parameter(peBoneParent);
    push_ptr_parameter(pTransformArray);
    push_uint32_parameter(unTransformArrayCount);
    return 0;
}

EVRInputError __thiscall IVRInput_003_TriggerHapticVibrationAction(void *_this, VRActionHandle_t action, float fStartSecondsFromNow, float fDurationSeconds, float fFrequency, float fAmplitude)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(action);
    push_float_parameter(fStartSecondsFromNow);
    push_float_parameter(fDurationSeconds);
    push_float_parameter(fFrequency);
    push_float_parameter(fAmplitude);
    return 0;
}

EVRInputError __thiscall IVRInput_003_GetActionOrigins(void *_this, VRActionSetHandle_t actionSetHandle, VRActionHandle_t digitalActionHandle, VRInputValueHandle_t * originsOut, uint32_t originOutCount)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(actionSetHandle);
    push_uint64_parameter(digitalActionHandle);
    push_ptr_parameter(originsOut);
    push_uint32_parameter(originOutCount);
    return 0;
}

EVRInputError __thiscall IVRInput_003_GetOriginLocalizedName(void *_this, VRInputValueHandle_t origin, char * pchNameArray, uint32_t unNameArraySize)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(origin);
    push_ptr_parameter(pchNameArray);
    push_uint32_parameter(unNameArraySize);
    return 0;
}

EVRInputError __thiscall IVRInput_003_GetOriginTrackedDeviceInfo(void *_this, VRInputValueHandle_t origin, InputOriginInfo_t * pOriginInfo, uint32_t unOriginInfoSize)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(origin);
    push_ptr_parameter(pOriginInfo);
    push_uint32_parameter(unOriginInfoSize);
    return 0;
}

EVRInputError __thiscall IVRInput_003_ShowActionOrigins(void *_this, VRActionSetHandle_t actionSetHandle, VRActionHandle_t ulActionHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(actionSetHandle);
    push_uint64_parameter(ulActionHandle);
    return 0;
}

EVRInputError __thiscall IVRInput_003_ShowBindingsForActionSet(void *_this, VRActiveActionSet_t * pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount, VRInputValueHandle_t originToHighlight)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pSets);
    push_uint32_parameter(unSizeOfVRSelectedActionSet_t);
    push_uint32_parameter(unSetCount);
    push_uint64_parameter(originToHighlight);
    return 0;
}

void __thiscall IVRSystem_017_GetRecommendedRenderTargetSize(void *_this, uint32_t * pnWidth, uint32_t * pnHeight)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pnWidth);
    push_ptr_parameter(pnHeight);
}

HmdMatrix44_t *__thiscall IVRSystem_017_GetProjectionMatrix(void *_this, HmdMatrix44_t *_r, EVREye eEye, float fNearZ, float fFarZ)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(eEye);
    push_float_parameter(fNearZ);
    push_float_parameter(fFarZ);
    return 0;
}

void __thiscall IVRSystem_017_GetProjectionRaw(void *_this, EVREye eEye, float * pfLeft, float * pfRight, float * pfTop, float * pfBottom)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pfLeft);
    push_ptr_parameter(pfRight);
    push_ptr_parameter(pfTop);
    push_ptr_parameter(pfBottom);
}

bool __thiscall IVRSystem_017_ComputeDistortion(void *_this, EVREye eEye, float fU, float fV, DistortionCoordinates_t * pDistortionCoordinates)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_float_parameter(fU);
    push_float_parameter(fV);
    push_ptr_parameter(pDistortionCoordinates);
    return 0;
}

HmdMatrix34_t *__thiscall IVRSystem_017_GetEyeToHeadTransform(void *_this, HmdMatrix34_t *_r, EVREye eEye)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(eEye);
    return 0;
}

bool __thiscall IVRSystem_017_GetTimeSinceLastVsync(void *_this, float * pfSecondsSinceLastVsync, uint64_t * pulFrameCounter)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pfSecondsSinceLastVsync);
    push_ptr_parameter(pulFrameCounter);
    return 0;
}

int32_t __thiscall IVRSystem_017_GetD3D9AdapterIndex(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRSystem_017_GetDXGIOutputInfo(void *_this, int32_t * pnAdapterIndex)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pnAdapterIndex);
}

void __thiscall IVRSystem_017_GetOutputDevice(void *_this, uint64_t * pnDevice, ETextureType textureType, VkInstance_T * pInstance)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pnDevice);
    push_uint32_parameter(textureType);
    push_ptr_parameter(pInstance);
}

bool __thiscall IVRSystem_017_IsDisplayOnDesktop(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVRSystem_017_SetDisplayVisibility(void *_this, bool bIsVisibleOnDesktop)
{
    push_ptr_parameter(_this);
    push_bool_parameter(bIsVisibleOnDesktop);
    return 0;
}

void __thiscall IVRSystem_017_GetDeviceToAbsoluteTrackingPose(void *_this, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t * pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
    push_float_parameter(fPredictedSecondsToPhotonsFromNow);
    push_ptr_parameter(pTrackedDevicePoseArray);
    push_uint32_parameter(unTrackedDevicePoseArrayCount);
}

void __thiscall IVRSystem_017_ResetSeatedZeroPose(void *_this)
{
    push_ptr_parameter(_this);
}

HmdMatrix34_t *__thiscall IVRSystem_017_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(void *_this, HmdMatrix34_t *_r)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    return 0;
}

HmdMatrix34_t *__thiscall IVRSystem_017_GetRawZeroPoseToStandingAbsoluteTrackingPose(void *_this, HmdMatrix34_t *_r)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    return 0;
}

uint32_t __thiscall IVRSystem_017_GetSortedTrackedDeviceIndicesOfClass(void *_this, ETrackedDeviceClass eTrackedDeviceClass, TrackedDeviceIndex_t * punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eTrackedDeviceClass);
    push_ptr_parameter(punTrackedDeviceIndexArray);
    push_uint32_parameter(unTrackedDeviceIndexArrayCount);
    push_uint32_parameter(unRelativeToTrackedDeviceIndex);
    return 0;
}

EDeviceActivityLevel __thiscall IVRSystem_017_GetTrackedDeviceActivityLevel(void *_this, TrackedDeviceIndex_t unDeviceId)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceId);
    return 0;
}

void __thiscall IVRSystem_017_ApplyTransform(void *_this, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pTrackedDevicePose, HmdMatrix34_t * pTransform)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pOutputPose);
    push_ptr_parameter(pTrackedDevicePose);
    push_ptr_parameter(pTransform);
}

TrackedDeviceIndex_t __thiscall IVRSystem_017_GetTrackedDeviceIndexForControllerRole(void *_this, ETrackedControllerRole unDeviceType)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceType);
    return 0;
}

ETrackedControllerRole __thiscall IVRSystem_017_GetControllerRoleForTrackedDeviceIndex(void *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    return 0;
}

ETrackedDeviceClass __thiscall IVRSystem_017_GetTrackedDeviceClass(void *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    return 0;
}

bool __thiscall IVRSystem_017_IsTrackedDeviceConnected(void *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    return 0;
}

bool __thiscall IVRSystem_017_GetBoolTrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

float __thiscall IVRSystem_017_GetFloatTrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

int32_t __thiscall IVRSystem_017_GetInt32TrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

uint64_t __thiscall IVRSystem_017_GetUint64TrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

HmdMatrix34_t *__thiscall IVRSystem_017_GetMatrix34TrackedDeviceProperty(void *_this, HmdMatrix34_t *_r, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

uint32_t __thiscall IVRSystem_017_GetStringTrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, char * pchValue, uint32_t unBufferSize, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(pError);
    return 0;
}

const char * __thiscall IVRSystem_017_GetPropErrorNameFromEnum(void *_this, ETrackedPropertyError error)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(error);
    return 0;
}

bool __thiscall IVRSystem_017_PollNextEvent(void *_this, VREvent_t * pEvent, uint32_t uncbVREvent)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pEvent);
    push_uint32_parameter(uncbVREvent);
    return 0;
}

bool __thiscall IVRSystem_017_PollNextEventWithPose(void *_this, ETrackingUniverseOrigin eOrigin, VREvent_t * pEvent, uint32_t uncbVREvent, TrackedDevicePose_t * pTrackedDevicePose)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
    push_ptr_parameter(pEvent);
    push_uint32_parameter(uncbVREvent);
    push_ptr_parameter(pTrackedDevicePose);
    return 0;
}

const char * __thiscall IVRSystem_017_GetEventTypeNameFromEnum(void *_this, EVREventType eType)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eType);
    return 0;
}

HiddenAreaMesh_t *__thiscall IVRSystem_017_GetHiddenAreaMesh(void *_this, HiddenAreaMesh_t *_r, EVREye eEye, EHiddenAreaMeshType type)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(eEye);
    push_uint32_parameter(type);
    return 0;
}

bool __thiscall IVRSystem_017_GetControllerState(void *_this, TrackedDeviceIndex_t unControllerDeviceIndex, VRControllerState_t * pControllerState, uint32_t unControllerStateSize)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unControllerDeviceIndex);
    push_ptr_parameter(pControllerState);
    push_uint32_parameter(unControllerStateSize);
    return 0;
}

bool __thiscall IVRSystem_017_GetControllerStateWithPose(void *_this, ETrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, VRControllerState_t * pControllerState, uint32_t unControllerStateSize, TrackedDevicePose_t * pTrackedDevicePose)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
    push_uint32_parameter(unControllerDeviceIndex);
    push_ptr_parameter(pControllerState);
    push_uint32_parameter(unControllerStateSize);
    push_ptr_parameter(pTrackedDevicePose);
    return 0;
}

void __thiscall IVRSystem_017_TriggerHapticPulse(void *_this, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unControllerDeviceIndex);
    push_uint32_parameter(unAxisId);
    push_uint32_parameter(usDurationMicroSec);
}

const char * __thiscall IVRSystem_017_GetButtonIdNameFromEnum(void *_this, EVRButtonId eButtonId)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eButtonId);
    return 0;
}

const char * __thiscall IVRSystem_017_GetControllerAxisTypeNameFromEnum(void *_this, EVRControllerAxisType eAxisType)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eAxisType);
    return 0;
}

bool __thiscall IVRSystem_017_CaptureInputFocus(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRSystem_017_ReleaseInputFocus(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRSystem_017_IsInputFocusCapturedByAnotherProcess(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRSystem_017_DriverDebugRequest(void *_this, TrackedDeviceIndex_t unDeviceIndex, const char * pchRequest, char * pchResponseBuffer, uint32_t unResponseBufferSize)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_ptr_parameter(pchRequest);
    push_ptr_parameter(pchResponseBuffer);
    push_uint32_parameter(unResponseBufferSize);
    return 0;
}

EVRFirmwareError __thiscall IVRSystem_017_PerformFirmwareUpdate(void *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    return 0;
}

void __thiscall IVRSystem_017_AcknowledgeQuit_Exiting(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRSystem_017_AcknowledgeQuit_UserPrompt(void *_this)
{
    push_ptr_parameter(_this);
}

EVROverlayError __thiscall IVROverlay_017_FindOverlay(void *_this, const char * pchOverlayKey, VROverlayHandle_t * pOverlayHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayKey);
    push_ptr_parameter(pOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_CreateOverlay(void *_this, const char * pchOverlayKey, const char * pchOverlayName, VROverlayHandle_t * pOverlayHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayKey);
    push_ptr_parameter(pchOverlayName);
    push_ptr_parameter(pOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_DestroyOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_SetHighQualityOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

VROverlayHandle_t __thiscall IVROverlay_017_GetHighQualityOverlay(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVROverlay_017_GetOverlayKey(void *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(pError);
    return 0;
}

uint32_t __thiscall IVROverlay_017_GetOverlayName(void *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(pError);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_SetOverlayName(void *_this, VROverlayHandle_t ulOverlayHandle, const char * pchName)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchName);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_GetOverlayImageData(void *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unBufferSize, uint32_t * punWidth, uint32_t * punHeight)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvBuffer);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(punWidth);
    push_ptr_parameter(punHeight);
    return 0;
}

const char * __thiscall IVROverlay_017_GetOverlayErrorNameFromEnum(void *_this, EVROverlayError error)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(error);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_SetOverlayRenderingPid(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unPID)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unPID);
    return 0;
}

uint32_t __thiscall IVROverlay_017_GetOverlayRenderingPid(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_SetOverlayFlag(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eOverlayFlag);
    push_bool_parameter(bEnabled);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_GetOverlayFlag(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool * pbEnabled)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eOverlayFlag);
    push_ptr_parameter(pbEnabled);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_SetOverlayColor(void *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fRed);
    push_float_parameter(fGreen);
    push_float_parameter(fBlue);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_GetOverlayColor(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfRed, float * pfGreen, float * pfBlue)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfRed);
    push_ptr_parameter(pfGreen);
    push_ptr_parameter(pfBlue);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_SetOverlayAlpha(void *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fAlpha);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_GetOverlayAlpha(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfAlpha)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfAlpha);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_SetOverlayTexelAspect(void *_this, VROverlayHandle_t ulOverlayHandle, float fTexelAspect)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fTexelAspect);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_GetOverlayTexelAspect(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfTexelAspect)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfTexelAspect);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_SetOverlaySortOrder(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unSortOrder)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unSortOrder);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_GetOverlaySortOrder(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * punSortOrder)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(punSortOrder);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_SetOverlayWidthInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fWidthInMeters);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_GetOverlayWidthInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfWidthInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfWidthInMeters);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_SetOverlayAutoCurveDistanceRangeInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fMinDistanceInMeters);
    push_float_parameter(fMaxDistanceInMeters);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_GetOverlayAutoCurveDistanceRangeInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfMinDistanceInMeters, float * pfMaxDistanceInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfMinDistanceInMeters);
    push_ptr_parameter(pfMaxDistanceInMeters);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_SetOverlayTextureColorSpace(void *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eTextureColorSpace);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_GetOverlayTextureColorSpace(void *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace * peTextureColorSpace)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peTextureColorSpace);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_SetOverlayTextureBounds(void *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pOverlayTextureBounds);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_GetOverlayTextureBounds(void *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pOverlayTextureBounds);
    return 0;
}

uint32_t __thiscall IVROverlay_017_GetOverlayRenderModel(void *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, HmdColor_t * pColor, EVROverlayError * pError)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(pColor);
    push_ptr_parameter(pError);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_SetOverlayRenderModel(void *_this, VROverlayHandle_t ulOverlayHandle, const char * pchRenderModel, HmdColor_t * pColor)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchRenderModel);
    push_ptr_parameter(pColor);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_GetOverlayTransformType(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType * peTransformType)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peTransformType);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_SetOverlayTransformAbsolute(void *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eTrackingOrigin);
    push_ptr_parameter(pmatTrackingOriginToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_GetOverlayTransformAbsolute(void *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin * peTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peTrackingOrigin);
    push_ptr_parameter(pmatTrackingOriginToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_SetOverlayTransformTrackedDeviceRelative(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unTrackedDevice);
    push_ptr_parameter(pmatTrackedDeviceToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_GetOverlayTransformTrackedDeviceRelative(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(punTrackedDevice);
    push_ptr_parameter(pmatTrackedDeviceToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_SetOverlayTransformTrackedDeviceComponent(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unDeviceIndex, const char * pchComponentName)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unDeviceIndex);
    push_ptr_parameter(pchComponentName);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_GetOverlayTransformTrackedDeviceComponent(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punDeviceIndex, char * pchComponentName, uint32_t unComponentNameSize)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(punDeviceIndex);
    push_ptr_parameter(pchComponentName);
    push_uint32_parameter(unComponentNameSize);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_GetOverlayTransformOverlayRelative(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t * ulOverlayHandleParent, HmdMatrix34_t * pmatParentOverlayToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(ulOverlayHandleParent);
    push_ptr_parameter(pmatParentOverlayToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_SetOverlayTransformOverlayRelative(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t ulOverlayHandleParent, HmdMatrix34_t * pmatParentOverlayToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint64_parameter(ulOverlayHandleParent);
    push_ptr_parameter(pmatParentOverlayToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_ShowOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_HideOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

bool __thiscall IVROverlay_017_IsOverlayVisible(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_GetTransformForOverlayCoordinates(void *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdVector2_t coordinatesInOverlay, HmdMatrix34_t * pmatTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eTrackingOrigin);
    push_HmdVector2_parameter(coordinatesInOverlay);
    push_ptr_parameter(pmatTransform);
    return 0;
}

bool __thiscall IVROverlay_017_PollNextOverlayEvent(void *_this, VROverlayHandle_t ulOverlayHandle, VREvent_t * pEvent, uint32_t uncbVREvent)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pEvent);
    push_uint32_parameter(uncbVREvent);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_GetOverlayInputMethod(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod * peInputMethod)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peInputMethod);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_SetOverlayInputMethod(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eInputMethod);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_GetOverlayMouseScale(void *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvecMouseScale);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_SetOverlayMouseScale(void *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvecMouseScale);
    return 0;
}

bool __thiscall IVROverlay_017_ComputeOverlayIntersection(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t * pParams, VROverlayIntersectionResults_t * pResults)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pParams);
    push_ptr_parameter(pResults);
    return 0;
}

bool __thiscall IVROverlay_017_HandleControllerOverlayInteractionAsMouse(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unControllerDeviceIndex);
    return 0;
}

bool __thiscall IVROverlay_017_IsHoverTargetOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

VROverlayHandle_t __thiscall IVROverlay_017_GetGamepadFocusOverlay(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_SetGamepadFocusOverlay(void *_this, VROverlayHandle_t ulNewFocusOverlay)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulNewFocusOverlay);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_SetOverlayNeighbor(void *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom, VROverlayHandle_t ulTo)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eDirection);
    push_uint64_parameter(ulFrom);
    push_uint64_parameter(ulTo);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_MoveGamepadFocusToNeighbor(void *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eDirection);
    push_uint64_parameter(ulFrom);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_SetOverlayDualAnalogTransform(void *_this, VROverlayHandle_t ulOverlay, EDualAnalogWhich eWhich, HmdVector2_t * vCenter, float fRadius)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlay);
    push_uint32_parameter(eWhich);
    push_ptr_parameter(vCenter);
    push_float_parameter(fRadius);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_GetOverlayDualAnalogTransform(void *_this, VROverlayHandle_t ulOverlay, EDualAnalogWhich eWhich, HmdVector2_t * pvCenter, float * pfRadius)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlay);
    push_uint32_parameter(eWhich);
    push_ptr_parameter(pvCenter);
    push_ptr_parameter(pfRadius);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_SetOverlayTexture(void *_this, VROverlayHandle_t ulOverlayHandle, Texture_t * pTexture)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pTexture);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_ClearOverlayTexture(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_SetOverlayRaw(void *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvBuffer);
    push_uint32_parameter(unWidth);
    push_uint32_parameter(unHeight);
    push_uint32_parameter(unDepth);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_SetOverlayFromFile(void *_this, VROverlayHandle_t ulOverlayHandle, const char * pchFilePath)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchFilePath);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_GetOverlayTexture(void *_this, VROverlayHandle_t ulOverlayHandle, void ** pNativeTextureHandle, void * pNativeTextureRef, uint32_t * pWidth, uint32_t * pHeight, uint32_t * pNativeFormat, ETextureType * pAPIType, EColorSpace * pColorSpace, VRTextureBounds_t * pTextureBounds)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pNativeTextureHandle);
    push_ptr_parameter(pNativeTextureRef);
    push_ptr_parameter(pWidth);
    push_ptr_parameter(pHeight);
    push_ptr_parameter(pNativeFormat);
    push_ptr_parameter(pAPIType);
    push_ptr_parameter(pColorSpace);
    push_ptr_parameter(pTextureBounds);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_ReleaseNativeOverlayHandle(void *_this, VROverlayHandle_t ulOverlayHandle, void * pNativeTextureHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pNativeTextureHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_GetOverlayTextureSize(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * pWidth, uint32_t * pHeight)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pWidth);
    push_ptr_parameter(pHeight);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_CreateDashboardOverlay(void *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pMainHandle, VROverlayHandle_t * pThumbnailHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayKey);
    push_ptr_parameter(pchOverlayFriendlyName);
    push_ptr_parameter(pMainHandle);
    push_ptr_parameter(pThumbnailHandle);
    return 0;
}

bool __thiscall IVROverlay_017_IsDashboardVisible(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVROverlay_017_IsActiveDashboardOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_SetDashboardOverlaySceneProcess(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unProcessId);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_GetDashboardOverlaySceneProcess(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * punProcessId)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(punProcessId);
    return 0;
}

void __thiscall IVROverlay_017_ShowDashboard(void *_this, const char * pchOverlayToShow)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayToShow);
}

TrackedDeviceIndex_t __thiscall IVROverlay_017_GetPrimaryDashboardDevice(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_ShowKeyboard(void *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eInputMode);
    push_uint32_parameter(eLineInputMode);
    push_ptr_parameter(pchDescription);
    push_uint32_parameter(unCharMax);
    push_ptr_parameter(pchExistingText);
    push_bool_parameter(bUseMinimalMode);
    push_uint64_parameter(uUserValue);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_ShowKeyboardForOverlay(void *_this, VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eInputMode);
    push_uint32_parameter(eLineInputMode);
    push_ptr_parameter(pchDescription);
    push_uint32_parameter(unCharMax);
    push_ptr_parameter(pchExistingText);
    push_bool_parameter(bUseMinimalMode);
    push_uint64_parameter(uUserValue);
    return 0;
}

uint32_t __thiscall IVROverlay_017_GetKeyboardText(void *_this, char * pchText, uint32_t cchText)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchText);
    push_uint32_parameter(cchText);
    return 0;
}

void __thiscall IVROverlay_017_HideKeyboard(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVROverlay_017_SetKeyboardTransformAbsolute(void *_this, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToKeyboardTransform)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eTrackingOrigin);
    push_ptr_parameter(pmatTrackingOriginToKeyboardTransform);
}

void __thiscall IVROverlay_017_SetKeyboardPositionForOverlay(void *_this, VROverlayHandle_t ulOverlayHandle, HmdRect2_t avoidRect)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_HmdRect2_parameter(avoidRect);
}

EVROverlayError __thiscall IVROverlay_017_SetOverlayIntersectionMask(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionMaskPrimitive_t * pMaskPrimitives, uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pMaskPrimitives);
    push_uint32_parameter(unNumMaskPrimitives);
    push_uint32_parameter(unPrimitiveSize);
    return 0;
}

EVROverlayError __thiscall IVROverlay_017_GetOverlayFlags(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * pFlags)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pFlags);
    return 0;
}

VRMessageOverlayResponse __thiscall IVROverlay_017_ShowMessageOverlay(void *_this, const char * pchText, const char * pchCaption, const char * pchButton0Text, const char * pchButton1Text, const char * pchButton2Text, const char * pchButton3Text)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchText);
    push_ptr_parameter(pchCaption);
    push_ptr_parameter(pchButton0Text);
    push_ptr_parameter(pchButton1Text);
    push_ptr_parameter(pchButton2Text);
    push_ptr_parameter(pchButton3Text);
    return 0;
}

void __thiscall IVROverlay_017_CloseMessageOverlay(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_021_SetTrackingSpace(void *_this, ETrackingUniverseOrigin eOrigin)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
}

ETrackingUniverseOrigin __thiscall IVRCompositor_021_GetTrackingSpace(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_021_WaitGetPoses(void *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pRenderPoseArray);
    push_uint32_parameter(unRenderPoseArrayCount);
    push_ptr_parameter(pGamePoseArray);
    push_uint32_parameter(unGamePoseArrayCount);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_021_GetLastPoses(void *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pRenderPoseArray);
    push_uint32_parameter(unRenderPoseArrayCount);
    push_ptr_parameter(pGamePoseArray);
    push_uint32_parameter(unGamePoseArrayCount);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_021_GetLastPoseForTrackedDeviceIndex(void *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pOutputGamePose)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_ptr_parameter(pOutputPose);
    push_ptr_parameter(pOutputGamePose);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_021_Submit(void *_this, EVREye eEye, Texture_t * pTexture, VRTextureBounds_t * pBounds, EVRSubmitFlags nSubmitFlags)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pTexture);
    push_ptr_parameter(pBounds);
    push_uint32_parameter(nSubmitFlags);
    return 0;
}

void __thiscall IVRCompositor_021_ClearLastSubmittedFrame(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_021_PostPresentHandoff(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_021_GetFrameTiming(void *_this, Compositor_FrameTiming * pTiming, uint32_t unFramesAgo)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pTiming);
    push_uint32_parameter(unFramesAgo);
    return 0;
}

uint32_t __thiscall IVRCompositor_021_GetFrameTimings(void *_this, Compositor_FrameTiming * pTiming, uint32_t nFrames)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pTiming);
    push_uint32_parameter(nFrames);
    return 0;
}

float __thiscall IVRCompositor_021_GetFrameTimeRemaining(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_021_GetCumulativeStats(void *_this, Compositor_CumulativeStats * pStats, uint32_t nStatsSizeInBytes)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pStats);
    push_uint32_parameter(nStatsSizeInBytes);
}

void __thiscall IVRCompositor_021_FadeToColor(void *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground)
{
    push_ptr_parameter(_this);
    push_float_parameter(fSeconds);
    push_float_parameter(fRed);
    push_float_parameter(fGreen);
    push_float_parameter(fBlue);
    push_float_parameter(fAlpha);
    push_bool_parameter(bBackground);
}

HmdColor_t *__thiscall IVRCompositor_021_GetCurrentFadeColor(void *_this, HmdColor_t *_r, bool bBackground)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_bool_parameter(bBackground);
    return 0;
}

void __thiscall IVRCompositor_021_FadeGrid(void *_this, float fSeconds, bool bFadeIn)
{
    push_ptr_parameter(_this);
    push_float_parameter(fSeconds);
    push_bool_parameter(bFadeIn);
}

float __thiscall IVRCompositor_021_GetCurrentGridAlpha(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_021_SetSkyboxOverride(void *_this, Texture_t * pTextures, uint32_t unTextureCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pTextures);
    push_uint32_parameter(unTextureCount);
    return 0;
}

void __thiscall IVRCompositor_021_ClearSkyboxOverride(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_021_CompositorBringToFront(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_021_CompositorGoToBack(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_021_CompositorQuit(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_021_IsFullscreen(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRCompositor_021_GetCurrentSceneFocusProcess(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRCompositor_021_GetLastFrameRenderer(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVRCompositor_021_CanRenderScene(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_021_ShowMirrorWindow(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_021_HideMirrorWindow(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_021_IsMirrorWindowVisible(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_021_CompositorDumpImages(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_021_ShouldAppRenderWithLowResources(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_021_ForceInterleavedReprojectionOn(void *_this, bool bOverride)
{
    push_ptr_parameter(_this);
    push_bool_parameter(bOverride);
}

void __thiscall IVRCompositor_021_ForceReconnectProcess(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_021_SuspendRendering(void *_this, bool bSuspend)
{
    push_ptr_parameter(_this);
    push_bool_parameter(bSuspend);
}

EVRCompositorError __thiscall IVRCompositor_021_GetMirrorTextureD3D11(void *_this, EVREye eEye, void * pD3D11DeviceOrResource, void ** ppD3D11ShaderResourceView)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pD3D11DeviceOrResource);
    push_ptr_parameter(ppD3D11ShaderResourceView);
    return 0;
}

void __thiscall IVRCompositor_021_ReleaseMirrorTextureD3D11(void *_this, void * pD3D11ShaderResourceView)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pD3D11ShaderResourceView);
}

EVRCompositorError __thiscall IVRCompositor_021_GetMirrorTextureGL(void *_this, EVREye eEye, glUInt_t * pglTextureId, glSharedTextureHandle_t * pglSharedTextureHandle)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pglTextureId);
    push_ptr_parameter(pglSharedTextureHandle);
    return 0;
}

bool __thiscall IVRCompositor_021_ReleaseSharedGLTexture(void *_this, glUInt_t glTextureId, glSharedTextureHandle_t glSharedTextureHandle)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(glTextureId);
    push_ptr_parameter(glSharedTextureHandle);
    return 0;
}

void __thiscall IVRCompositor_021_LockGLSharedTextureForAccess(void *_this, glSharedTextureHandle_t glSharedTextureHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(glSharedTextureHandle);
}

void __thiscall IVRCompositor_021_UnlockGLSharedTextureForAccess(void *_this, glSharedTextureHandle_t glSharedTextureHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(glSharedTextureHandle);
}

uint32_t __thiscall IVRCompositor_021_GetVulkanInstanceExtensionsRequired(void *_this, char * pchValue, uint32_t unBufferSize)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    return 0;
}

uint32_t __thiscall IVRCompositor_021_GetVulkanDeviceExtensionsRequired(void *_this, VkPhysicalDevice_T * pPhysicalDevice, char * pchValue, uint32_t unBufferSize)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pPhysicalDevice);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    return 0;
}

void __thiscall IVRCompositor_021_SetExplicitTimingMode(void *_this, bool bExplicitTimingMode)
{
    push_ptr_parameter(_this);
    push_bool_parameter(bExplicitTimingMode);
}

EVRCompositorError __thiscall IVRCompositor_021_SubmitExplicitTimingData(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_FindOverlay(void *_this, const char * pchOverlayKey, VROverlayHandle_t * pOverlayHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayKey);
    push_ptr_parameter(pOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_CreateOverlay(void *_this, const char * pchOverlayKey, const char * pchOverlayName, VROverlayHandle_t * pOverlayHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayKey);
    push_ptr_parameter(pchOverlayName);
    push_ptr_parameter(pOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_DestroyOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_SetHighQualityOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

VROverlayHandle_t __thiscall IVROverlay_016_GetHighQualityOverlay(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVROverlay_016_GetOverlayKey(void *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(pError);
    return 0;
}

uint32_t __thiscall IVROverlay_016_GetOverlayName(void *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(pError);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_SetOverlayName(void *_this, VROverlayHandle_t ulOverlayHandle, const char * pchName)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchName);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_GetOverlayImageData(void *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unBufferSize, uint32_t * punWidth, uint32_t * punHeight)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvBuffer);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(punWidth);
    push_ptr_parameter(punHeight);
    return 0;
}

const char * __thiscall IVROverlay_016_GetOverlayErrorNameFromEnum(void *_this, EVROverlayError error)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(error);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_SetOverlayRenderingPid(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unPID)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unPID);
    return 0;
}

uint32_t __thiscall IVROverlay_016_GetOverlayRenderingPid(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_SetOverlayFlag(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eOverlayFlag);
    push_bool_parameter(bEnabled);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_GetOverlayFlag(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool * pbEnabled)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eOverlayFlag);
    push_ptr_parameter(pbEnabled);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_SetOverlayColor(void *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fRed);
    push_float_parameter(fGreen);
    push_float_parameter(fBlue);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_GetOverlayColor(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfRed, float * pfGreen, float * pfBlue)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfRed);
    push_ptr_parameter(pfGreen);
    push_ptr_parameter(pfBlue);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_SetOverlayAlpha(void *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fAlpha);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_GetOverlayAlpha(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfAlpha)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfAlpha);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_SetOverlayTexelAspect(void *_this, VROverlayHandle_t ulOverlayHandle, float fTexelAspect)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fTexelAspect);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_GetOverlayTexelAspect(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfTexelAspect)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfTexelAspect);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_SetOverlaySortOrder(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unSortOrder)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unSortOrder);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_GetOverlaySortOrder(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * punSortOrder)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(punSortOrder);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_SetOverlayWidthInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fWidthInMeters);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_GetOverlayWidthInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfWidthInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfWidthInMeters);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_SetOverlayAutoCurveDistanceRangeInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fMinDistanceInMeters);
    push_float_parameter(fMaxDistanceInMeters);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_GetOverlayAutoCurveDistanceRangeInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfMinDistanceInMeters, float * pfMaxDistanceInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfMinDistanceInMeters);
    push_ptr_parameter(pfMaxDistanceInMeters);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_SetOverlayTextureColorSpace(void *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eTextureColorSpace);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_GetOverlayTextureColorSpace(void *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace * peTextureColorSpace)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peTextureColorSpace);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_SetOverlayTextureBounds(void *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pOverlayTextureBounds);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_GetOverlayTextureBounds(void *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pOverlayTextureBounds);
    return 0;
}

uint32_t __thiscall IVROverlay_016_GetOverlayRenderModel(void *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, HmdColor_t * pColor, EVROverlayError * pError)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(pColor);
    push_ptr_parameter(pError);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_SetOverlayRenderModel(void *_this, VROverlayHandle_t ulOverlayHandle, const char * pchRenderModel, HmdColor_t * pColor)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchRenderModel);
    push_ptr_parameter(pColor);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_GetOverlayTransformType(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType * peTransformType)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peTransformType);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_SetOverlayTransformAbsolute(void *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eTrackingOrigin);
    push_ptr_parameter(pmatTrackingOriginToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_GetOverlayTransformAbsolute(void *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin * peTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peTrackingOrigin);
    push_ptr_parameter(pmatTrackingOriginToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_SetOverlayTransformTrackedDeviceRelative(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unTrackedDevice);
    push_ptr_parameter(pmatTrackedDeviceToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_GetOverlayTransformTrackedDeviceRelative(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(punTrackedDevice);
    push_ptr_parameter(pmatTrackedDeviceToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_SetOverlayTransformTrackedDeviceComponent(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unDeviceIndex, const char * pchComponentName)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unDeviceIndex);
    push_ptr_parameter(pchComponentName);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_GetOverlayTransformTrackedDeviceComponent(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punDeviceIndex, char * pchComponentName, uint32_t unComponentNameSize)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(punDeviceIndex);
    push_ptr_parameter(pchComponentName);
    push_uint32_parameter(unComponentNameSize);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_GetOverlayTransformOverlayRelative(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t * ulOverlayHandleParent, HmdMatrix34_t * pmatParentOverlayToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(ulOverlayHandleParent);
    push_ptr_parameter(pmatParentOverlayToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_SetOverlayTransformOverlayRelative(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t ulOverlayHandleParent, HmdMatrix34_t * pmatParentOverlayToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint64_parameter(ulOverlayHandleParent);
    push_ptr_parameter(pmatParentOverlayToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_ShowOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_HideOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

bool __thiscall IVROverlay_016_IsOverlayVisible(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_GetTransformForOverlayCoordinates(void *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdVector2_t coordinatesInOverlay, HmdMatrix34_t * pmatTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eTrackingOrigin);
    push_HmdVector2_parameter(coordinatesInOverlay);
    push_ptr_parameter(pmatTransform);
    return 0;
}

bool __thiscall IVROverlay_016_PollNextOverlayEvent(void *_this, VROverlayHandle_t ulOverlayHandle, VREvent_t * pEvent, uint32_t uncbVREvent)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pEvent);
    push_uint32_parameter(uncbVREvent);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_GetOverlayInputMethod(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod * peInputMethod)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peInputMethod);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_SetOverlayInputMethod(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eInputMethod);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_GetOverlayMouseScale(void *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvecMouseScale);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_SetOverlayMouseScale(void *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvecMouseScale);
    return 0;
}

bool __thiscall IVROverlay_016_ComputeOverlayIntersection(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t * pParams, VROverlayIntersectionResults_t * pResults)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pParams);
    push_ptr_parameter(pResults);
    return 0;
}

bool __thiscall IVROverlay_016_HandleControllerOverlayInteractionAsMouse(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unControllerDeviceIndex);
    return 0;
}

bool __thiscall IVROverlay_016_IsHoverTargetOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

VROverlayHandle_t __thiscall IVROverlay_016_GetGamepadFocusOverlay(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_SetGamepadFocusOverlay(void *_this, VROverlayHandle_t ulNewFocusOverlay)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulNewFocusOverlay);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_SetOverlayNeighbor(void *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom, VROverlayHandle_t ulTo)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eDirection);
    push_uint64_parameter(ulFrom);
    push_uint64_parameter(ulTo);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_MoveGamepadFocusToNeighbor(void *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eDirection);
    push_uint64_parameter(ulFrom);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_SetOverlayTexture(void *_this, VROverlayHandle_t ulOverlayHandle, Texture_t * pTexture)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pTexture);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_ClearOverlayTexture(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_SetOverlayRaw(void *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvBuffer);
    push_uint32_parameter(unWidth);
    push_uint32_parameter(unHeight);
    push_uint32_parameter(unDepth);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_SetOverlayFromFile(void *_this, VROverlayHandle_t ulOverlayHandle, const char * pchFilePath)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchFilePath);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_GetOverlayTexture(void *_this, VROverlayHandle_t ulOverlayHandle, void ** pNativeTextureHandle, void * pNativeTextureRef, uint32_t * pWidth, uint32_t * pHeight, uint32_t * pNativeFormat, ETextureType * pAPIType, EColorSpace * pColorSpace, VRTextureBounds_t * pTextureBounds)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pNativeTextureHandle);
    push_ptr_parameter(pNativeTextureRef);
    push_ptr_parameter(pWidth);
    push_ptr_parameter(pHeight);
    push_ptr_parameter(pNativeFormat);
    push_ptr_parameter(pAPIType);
    push_ptr_parameter(pColorSpace);
    push_ptr_parameter(pTextureBounds);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_ReleaseNativeOverlayHandle(void *_this, VROverlayHandle_t ulOverlayHandle, void * pNativeTextureHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pNativeTextureHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_GetOverlayTextureSize(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * pWidth, uint32_t * pHeight)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pWidth);
    push_ptr_parameter(pHeight);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_CreateDashboardOverlay(void *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pMainHandle, VROverlayHandle_t * pThumbnailHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayKey);
    push_ptr_parameter(pchOverlayFriendlyName);
    push_ptr_parameter(pMainHandle);
    push_ptr_parameter(pThumbnailHandle);
    return 0;
}

bool __thiscall IVROverlay_016_IsDashboardVisible(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVROverlay_016_IsActiveDashboardOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_SetDashboardOverlaySceneProcess(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unProcessId);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_GetDashboardOverlaySceneProcess(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * punProcessId)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(punProcessId);
    return 0;
}

void __thiscall IVROverlay_016_ShowDashboard(void *_this, const char * pchOverlayToShow)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayToShow);
}

TrackedDeviceIndex_t __thiscall IVROverlay_016_GetPrimaryDashboardDevice(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_ShowKeyboard(void *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eInputMode);
    push_uint32_parameter(eLineInputMode);
    push_ptr_parameter(pchDescription);
    push_uint32_parameter(unCharMax);
    push_ptr_parameter(pchExistingText);
    push_bool_parameter(bUseMinimalMode);
    push_uint64_parameter(uUserValue);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_ShowKeyboardForOverlay(void *_this, VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eInputMode);
    push_uint32_parameter(eLineInputMode);
    push_ptr_parameter(pchDescription);
    push_uint32_parameter(unCharMax);
    push_ptr_parameter(pchExistingText);
    push_bool_parameter(bUseMinimalMode);
    push_uint64_parameter(uUserValue);
    return 0;
}

uint32_t __thiscall IVROverlay_016_GetKeyboardText(void *_this, char * pchText, uint32_t cchText)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchText);
    push_uint32_parameter(cchText);
    return 0;
}

void __thiscall IVROverlay_016_HideKeyboard(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVROverlay_016_SetKeyboardTransformAbsolute(void *_this, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToKeyboardTransform)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eTrackingOrigin);
    push_ptr_parameter(pmatTrackingOriginToKeyboardTransform);
}

void __thiscall IVROverlay_016_SetKeyboardPositionForOverlay(void *_this, VROverlayHandle_t ulOverlayHandle, HmdRect2_t avoidRect)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_HmdRect2_parameter(avoidRect);
}

EVROverlayError __thiscall IVROverlay_016_SetOverlayIntersectionMask(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionMaskPrimitive_t * pMaskPrimitives, uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pMaskPrimitives);
    push_uint32_parameter(unNumMaskPrimitives);
    push_uint32_parameter(unPrimitiveSize);
    return 0;
}

EVROverlayError __thiscall IVROverlay_016_GetOverlayFlags(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * pFlags)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pFlags);
    return 0;
}

VRMessageOverlayResponse __thiscall IVROverlay_016_ShowMessageOverlay(void *_this, const char * pchText, const char * pchCaption, const char * pchButton0Text, const char * pchButton1Text, const char * pchButton2Text, const char * pchButton3Text)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchText);
    push_ptr_parameter(pchCaption);
    push_ptr_parameter(pchButton0Text);
    push_ptr_parameter(pchButton1Text);
    push_ptr_parameter(pchButton2Text);
    push_ptr_parameter(pchButton3Text);
    return 0;
}

void __thiscall IVROverlay_016_CloseMessageOverlay(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRSystem_016_GetRecommendedRenderTargetSize(void *_this, uint32_t * pnWidth, uint32_t * pnHeight)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pnWidth);
    push_ptr_parameter(pnHeight);
}

HmdMatrix44_t *__thiscall IVRSystem_016_GetProjectionMatrix(void *_this, HmdMatrix44_t *_r, EVREye eEye, float fNearZ, float fFarZ)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(eEye);
    push_float_parameter(fNearZ);
    push_float_parameter(fFarZ);
    return 0;
}

void __thiscall IVRSystem_016_GetProjectionRaw(void *_this, EVREye eEye, float * pfLeft, float * pfRight, float * pfTop, float * pfBottom)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pfLeft);
    push_ptr_parameter(pfRight);
    push_ptr_parameter(pfTop);
    push_ptr_parameter(pfBottom);
}

bool __thiscall IVRSystem_016_ComputeDistortion(void *_this, EVREye eEye, float fU, float fV, DistortionCoordinates_t * pDistortionCoordinates)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_float_parameter(fU);
    push_float_parameter(fV);
    push_ptr_parameter(pDistortionCoordinates);
    return 0;
}

HmdMatrix34_t *__thiscall IVRSystem_016_GetEyeToHeadTransform(void *_this, HmdMatrix34_t *_r, EVREye eEye)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(eEye);
    return 0;
}

bool __thiscall IVRSystem_016_GetTimeSinceLastVsync(void *_this, float * pfSecondsSinceLastVsync, uint64_t * pulFrameCounter)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pfSecondsSinceLastVsync);
    push_ptr_parameter(pulFrameCounter);
    return 0;
}

int32_t __thiscall IVRSystem_016_GetD3D9AdapterIndex(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRSystem_016_GetDXGIOutputInfo(void *_this, int32_t * pnAdapterIndex)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pnAdapterIndex);
}

void __thiscall IVRSystem_016_GetOutputDevice(void *_this, uint64_t * pnDevice, ETextureType textureType)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pnDevice);
    push_uint32_parameter(textureType);
}

bool __thiscall IVRSystem_016_IsDisplayOnDesktop(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVRSystem_016_SetDisplayVisibility(void *_this, bool bIsVisibleOnDesktop)
{
    push_ptr_parameter(_this);
    push_bool_parameter(bIsVisibleOnDesktop);
    return 0;
}

void __thiscall IVRSystem_016_GetDeviceToAbsoluteTrackingPose(void *_this, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t * pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
    push_float_parameter(fPredictedSecondsToPhotonsFromNow);
    push_ptr_parameter(pTrackedDevicePoseArray);
    push_uint32_parameter(unTrackedDevicePoseArrayCount);
}

void __thiscall IVRSystem_016_ResetSeatedZeroPose(void *_this)
{
    push_ptr_parameter(_this);
}

HmdMatrix34_t *__thiscall IVRSystem_016_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(void *_this, HmdMatrix34_t *_r)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    return 0;
}

HmdMatrix34_t *__thiscall IVRSystem_016_GetRawZeroPoseToStandingAbsoluteTrackingPose(void *_this, HmdMatrix34_t *_r)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    return 0;
}

uint32_t __thiscall IVRSystem_016_GetSortedTrackedDeviceIndicesOfClass(void *_this, ETrackedDeviceClass eTrackedDeviceClass, TrackedDeviceIndex_t * punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eTrackedDeviceClass);
    push_ptr_parameter(punTrackedDeviceIndexArray);
    push_uint32_parameter(unTrackedDeviceIndexArrayCount);
    push_uint32_parameter(unRelativeToTrackedDeviceIndex);
    return 0;
}

EDeviceActivityLevel __thiscall IVRSystem_016_GetTrackedDeviceActivityLevel(void *_this, TrackedDeviceIndex_t unDeviceId)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceId);
    return 0;
}

void __thiscall IVRSystem_016_ApplyTransform(void *_this, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pTrackedDevicePose, HmdMatrix34_t * pTransform)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pOutputPose);
    push_ptr_parameter(pTrackedDevicePose);
    push_ptr_parameter(pTransform);
}

TrackedDeviceIndex_t __thiscall IVRSystem_016_GetTrackedDeviceIndexForControllerRole(void *_this, ETrackedControllerRole unDeviceType)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceType);
    return 0;
}

ETrackedControllerRole __thiscall IVRSystem_016_GetControllerRoleForTrackedDeviceIndex(void *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    return 0;
}

ETrackedDeviceClass __thiscall IVRSystem_016_GetTrackedDeviceClass(void *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    return 0;
}

bool __thiscall IVRSystem_016_IsTrackedDeviceConnected(void *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    return 0;
}

bool __thiscall IVRSystem_016_GetBoolTrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

float __thiscall IVRSystem_016_GetFloatTrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

int32_t __thiscall IVRSystem_016_GetInt32TrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

uint64_t __thiscall IVRSystem_016_GetUint64TrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

HmdMatrix34_t *__thiscall IVRSystem_016_GetMatrix34TrackedDeviceProperty(void *_this, HmdMatrix34_t *_r, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

uint32_t __thiscall IVRSystem_016_GetStringTrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, char * pchValue, uint32_t unBufferSize, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(pError);
    return 0;
}

const char * __thiscall IVRSystem_016_GetPropErrorNameFromEnum(void *_this, ETrackedPropertyError error)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(error);
    return 0;
}

bool __thiscall IVRSystem_016_PollNextEvent(void *_this, VREvent_t * pEvent, uint32_t uncbVREvent)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pEvent);
    push_uint32_parameter(uncbVREvent);
    return 0;
}

bool __thiscall IVRSystem_016_PollNextEventWithPose(void *_this, ETrackingUniverseOrigin eOrigin, VREvent_t * pEvent, uint32_t uncbVREvent, TrackedDevicePose_t * pTrackedDevicePose)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
    push_ptr_parameter(pEvent);
    push_uint32_parameter(uncbVREvent);
    push_ptr_parameter(pTrackedDevicePose);
    return 0;
}

const char * __thiscall IVRSystem_016_GetEventTypeNameFromEnum(void *_this, EVREventType eType)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eType);
    return 0;
}

HiddenAreaMesh_t *__thiscall IVRSystem_016_GetHiddenAreaMesh(void *_this, HiddenAreaMesh_t *_r, EVREye eEye, EHiddenAreaMeshType type)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(eEye);
    push_uint32_parameter(type);
    return 0;
}

bool __thiscall IVRSystem_016_GetControllerState(void *_this, TrackedDeviceIndex_t unControllerDeviceIndex, VRControllerState_t * pControllerState, uint32_t unControllerStateSize)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unControllerDeviceIndex);
    push_ptr_parameter(pControllerState);
    push_uint32_parameter(unControllerStateSize);
    return 0;
}

bool __thiscall IVRSystem_016_GetControllerStateWithPose(void *_this, ETrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, VRControllerState_t * pControllerState, uint32_t unControllerStateSize, TrackedDevicePose_t * pTrackedDevicePose)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
    push_uint32_parameter(unControllerDeviceIndex);
    push_ptr_parameter(pControllerState);
    push_uint32_parameter(unControllerStateSize);
    push_ptr_parameter(pTrackedDevicePose);
    return 0;
}

void __thiscall IVRSystem_016_TriggerHapticPulse(void *_this, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unControllerDeviceIndex);
    push_uint32_parameter(unAxisId);
    push_uint32_parameter(usDurationMicroSec);
}

const char * __thiscall IVRSystem_016_GetButtonIdNameFromEnum(void *_this, EVRButtonId eButtonId)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eButtonId);
    return 0;
}

const char * __thiscall IVRSystem_016_GetControllerAxisTypeNameFromEnum(void *_this, EVRControllerAxisType eAxisType)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eAxisType);
    return 0;
}

bool __thiscall IVRSystem_016_CaptureInputFocus(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRSystem_016_ReleaseInputFocus(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRSystem_016_IsInputFocusCapturedByAnotherProcess(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRSystem_016_DriverDebugRequest(void *_this, TrackedDeviceIndex_t unDeviceIndex, const char * pchRequest, char * pchResponseBuffer, uint32_t unResponseBufferSize)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_ptr_parameter(pchRequest);
    push_ptr_parameter(pchResponseBuffer);
    push_uint32_parameter(unResponseBufferSize);
    return 0;
}

EVRFirmwareError __thiscall IVRSystem_016_PerformFirmwareUpdate(void *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    return 0;
}

void __thiscall IVRSystem_016_AcknowledgeQuit_Exiting(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRSystem_016_AcknowledgeQuit_UserPrompt(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_020_SetTrackingSpace(void *_this, ETrackingUniverseOrigin eOrigin)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
}

ETrackingUniverseOrigin __thiscall IVRCompositor_020_GetTrackingSpace(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_020_WaitGetPoses(void *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pRenderPoseArray);
    push_uint32_parameter(unRenderPoseArrayCount);
    push_ptr_parameter(pGamePoseArray);
    push_uint32_parameter(unGamePoseArrayCount);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_020_GetLastPoses(void *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pRenderPoseArray);
    push_uint32_parameter(unRenderPoseArrayCount);
    push_ptr_parameter(pGamePoseArray);
    push_uint32_parameter(unGamePoseArrayCount);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_020_GetLastPoseForTrackedDeviceIndex(void *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pOutputGamePose)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_ptr_parameter(pOutputPose);
    push_ptr_parameter(pOutputGamePose);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_020_Submit(void *_this, EVREye eEye, Texture_t * pTexture, VRTextureBounds_t * pBounds, EVRSubmitFlags nSubmitFlags)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pTexture);
    push_ptr_parameter(pBounds);
    push_uint32_parameter(nSubmitFlags);
    return 0;
}

void __thiscall IVRCompositor_020_ClearLastSubmittedFrame(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_020_PostPresentHandoff(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_020_GetFrameTiming(void *_this, Compositor_FrameTiming * pTiming, uint32_t unFramesAgo)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pTiming);
    push_uint32_parameter(unFramesAgo);
    return 0;
}

uint32_t __thiscall IVRCompositor_020_GetFrameTimings(void *_this, Compositor_FrameTiming * pTiming, uint32_t nFrames)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pTiming);
    push_uint32_parameter(nFrames);
    return 0;
}

float __thiscall IVRCompositor_020_GetFrameTimeRemaining(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_020_GetCumulativeStats(void *_this, Compositor_CumulativeStats * pStats, uint32_t nStatsSizeInBytes)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pStats);
    push_uint32_parameter(nStatsSizeInBytes);
}

void __thiscall IVRCompositor_020_FadeToColor(void *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground)
{
    push_ptr_parameter(_this);
    push_float_parameter(fSeconds);
    push_float_parameter(fRed);
    push_float_parameter(fGreen);
    push_float_parameter(fBlue);
    push_float_parameter(fAlpha);
    push_bool_parameter(bBackground);
}

HmdColor_t *__thiscall IVRCompositor_020_GetCurrentFadeColor(void *_this, HmdColor_t *_r, bool bBackground)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_bool_parameter(bBackground);
    return 0;
}

void __thiscall IVRCompositor_020_FadeGrid(void *_this, float fSeconds, bool bFadeIn)
{
    push_ptr_parameter(_this);
    push_float_parameter(fSeconds);
    push_bool_parameter(bFadeIn);
}

float __thiscall IVRCompositor_020_GetCurrentGridAlpha(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_020_SetSkyboxOverride(void *_this, Texture_t * pTextures, uint32_t unTextureCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pTextures);
    push_uint32_parameter(unTextureCount);
    return 0;
}

void __thiscall IVRCompositor_020_ClearSkyboxOverride(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_020_CompositorBringToFront(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_020_CompositorGoToBack(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_020_CompositorQuit(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_020_IsFullscreen(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRCompositor_020_GetCurrentSceneFocusProcess(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRCompositor_020_GetLastFrameRenderer(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVRCompositor_020_CanRenderScene(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_020_ShowMirrorWindow(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_020_HideMirrorWindow(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_020_IsMirrorWindowVisible(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_020_CompositorDumpImages(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_020_ShouldAppRenderWithLowResources(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_020_ForceInterleavedReprojectionOn(void *_this, bool bOverride)
{
    push_ptr_parameter(_this);
    push_bool_parameter(bOverride);
}

void __thiscall IVRCompositor_020_ForceReconnectProcess(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_020_SuspendRendering(void *_this, bool bSuspend)
{
    push_ptr_parameter(_this);
    push_bool_parameter(bSuspend);
}

EVRCompositorError __thiscall IVRCompositor_020_GetMirrorTextureD3D11(void *_this, EVREye eEye, void * pD3D11DeviceOrResource, void ** ppD3D11ShaderResourceView)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pD3D11DeviceOrResource);
    push_ptr_parameter(ppD3D11ShaderResourceView);
    return 0;
}

void __thiscall IVRCompositor_020_ReleaseMirrorTextureD3D11(void *_this, void * pD3D11ShaderResourceView)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pD3D11ShaderResourceView);
}

EVRCompositorError __thiscall IVRCompositor_020_GetMirrorTextureGL(void *_this, EVREye eEye, glUInt_t * pglTextureId, glSharedTextureHandle_t * pglSharedTextureHandle)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pglTextureId);
    push_ptr_parameter(pglSharedTextureHandle);
    return 0;
}

bool __thiscall IVRCompositor_020_ReleaseSharedGLTexture(void *_this, glUInt_t glTextureId, glSharedTextureHandle_t glSharedTextureHandle)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(glTextureId);
    push_ptr_parameter(glSharedTextureHandle);
    return 0;
}

void __thiscall IVRCompositor_020_LockGLSharedTextureForAccess(void *_this, glSharedTextureHandle_t glSharedTextureHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(glSharedTextureHandle);
}

void __thiscall IVRCompositor_020_UnlockGLSharedTextureForAccess(void *_this, glSharedTextureHandle_t glSharedTextureHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(glSharedTextureHandle);
}

uint32_t __thiscall IVRCompositor_020_GetVulkanInstanceExtensionsRequired(void *_this, char * pchValue, uint32_t unBufferSize)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    return 0;
}

uint32_t __thiscall IVRCompositor_020_GetVulkanDeviceExtensionsRequired(void *_this, VkPhysicalDevice_T * pPhysicalDevice, char * pchValue, uint32_t unBufferSize)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pPhysicalDevice);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    return 0;
}

EVRInitError __thiscall IVRClientCore_002_Init(void *_this, EVRApplicationType eApplicationType)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eApplicationType);
    return 0;
}

void __thiscall IVRClientCore_002_Cleanup(void *_this)
{
    push_ptr_parameter(_this);
}

EVRInitError __thiscall IVRClientCore_002_IsInterfaceVersionValid(void *_this, const char * pchInterfaceVersion)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchInterfaceVersion);
    return 0;
}

void * __thiscall IVRClientCore_002_GetGenericInterface(void *_this, const char * pchNameAndVersion, EVRInitError * peError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchNameAndVersion);
    push_ptr_parameter(peError);
    return 0;
}

bool __thiscall IVRClientCore_002_BIsHmdPresent(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

const char * __thiscall IVRClientCore_002_GetEnglishStringForHmdError(void *_this, EVRInitError eError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eError);
    return 0;
}

const char * __thiscall IVRClientCore_002_GetIDForVRInitError(void *_this, EVRInitError eError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eError);
    return 0;
}

void __thiscall IVRSystem_015_GetRecommendedRenderTargetSize(void *_this, uint32_t * pnWidth, uint32_t * pnHeight)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pnWidth);
    push_ptr_parameter(pnHeight);
}

HmdMatrix44_t *__thiscall IVRSystem_015_GetProjectionMatrix(void *_this, HmdMatrix44_t *_r, EVREye eEye, float fNearZ, float fFarZ)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(eEye);
    push_float_parameter(fNearZ);
    push_float_parameter(fFarZ);
    return 0;
}

void __thiscall IVRSystem_015_GetProjectionRaw(void *_this, EVREye eEye, float * pfLeft, float * pfRight, float * pfTop, float * pfBottom)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pfLeft);
    push_ptr_parameter(pfRight);
    push_ptr_parameter(pfTop);
    push_ptr_parameter(pfBottom);
}

bool __thiscall IVRSystem_015_ComputeDistortion(void *_this, EVREye eEye, float fU, float fV, DistortionCoordinates_t * pDistortionCoordinates)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_float_parameter(fU);
    push_float_parameter(fV);
    push_ptr_parameter(pDistortionCoordinates);
    return 0;
}

HmdMatrix34_t *__thiscall IVRSystem_015_GetEyeToHeadTransform(void *_this, HmdMatrix34_t *_r, EVREye eEye)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(eEye);
    return 0;
}

bool __thiscall IVRSystem_015_GetTimeSinceLastVsync(void *_this, float * pfSecondsSinceLastVsync, uint64_t * pulFrameCounter)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pfSecondsSinceLastVsync);
    push_ptr_parameter(pulFrameCounter);
    return 0;
}

int32_t __thiscall IVRSystem_015_GetD3D9AdapterIndex(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRSystem_015_GetDXGIOutputInfo(void *_this, int32_t * pnAdapterIndex)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pnAdapterIndex);
}

bool __thiscall IVRSystem_015_IsDisplayOnDesktop(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVRSystem_015_SetDisplayVisibility(void *_this, bool bIsVisibleOnDesktop)
{
    push_ptr_parameter(_this);
    push_bool_parameter(bIsVisibleOnDesktop);
    return 0;
}

void __thiscall IVRSystem_015_GetDeviceToAbsoluteTrackingPose(void *_this, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t * pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
    push_float_parameter(fPredictedSecondsToPhotonsFromNow);
    push_ptr_parameter(pTrackedDevicePoseArray);
    push_uint32_parameter(unTrackedDevicePoseArrayCount);
}

void __thiscall IVRSystem_015_ResetSeatedZeroPose(void *_this)
{
    push_ptr_parameter(_this);
}

HmdMatrix34_t *__thiscall IVRSystem_015_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(void *_this, HmdMatrix34_t *_r)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    return 0;
}

HmdMatrix34_t *__thiscall IVRSystem_015_GetRawZeroPoseToStandingAbsoluteTrackingPose(void *_this, HmdMatrix34_t *_r)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    return 0;
}

uint32_t __thiscall IVRSystem_015_GetSortedTrackedDeviceIndicesOfClass(void *_this, ETrackedDeviceClass eTrackedDeviceClass, TrackedDeviceIndex_t * punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eTrackedDeviceClass);
    push_ptr_parameter(punTrackedDeviceIndexArray);
    push_uint32_parameter(unTrackedDeviceIndexArrayCount);
    push_uint32_parameter(unRelativeToTrackedDeviceIndex);
    return 0;
}

EDeviceActivityLevel __thiscall IVRSystem_015_GetTrackedDeviceActivityLevel(void *_this, TrackedDeviceIndex_t unDeviceId)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceId);
    return 0;
}

void __thiscall IVRSystem_015_ApplyTransform(void *_this, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pTrackedDevicePose, HmdMatrix34_t * pTransform)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pOutputPose);
    push_ptr_parameter(pTrackedDevicePose);
    push_ptr_parameter(pTransform);
}

TrackedDeviceIndex_t __thiscall IVRSystem_015_GetTrackedDeviceIndexForControllerRole(void *_this, ETrackedControllerRole unDeviceType)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceType);
    return 0;
}

ETrackedControllerRole __thiscall IVRSystem_015_GetControllerRoleForTrackedDeviceIndex(void *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    return 0;
}

ETrackedDeviceClass __thiscall IVRSystem_015_GetTrackedDeviceClass(void *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    return 0;
}

bool __thiscall IVRSystem_015_IsTrackedDeviceConnected(void *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    return 0;
}

bool __thiscall IVRSystem_015_GetBoolTrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

float __thiscall IVRSystem_015_GetFloatTrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

int32_t __thiscall IVRSystem_015_GetInt32TrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

uint64_t __thiscall IVRSystem_015_GetUint64TrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

HmdMatrix34_t *__thiscall IVRSystem_015_GetMatrix34TrackedDeviceProperty(void *_this, HmdMatrix34_t *_r, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

uint32_t __thiscall IVRSystem_015_GetStringTrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, char * pchValue, uint32_t unBufferSize, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(pError);
    return 0;
}

const char * __thiscall IVRSystem_015_GetPropErrorNameFromEnum(void *_this, ETrackedPropertyError error)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(error);
    return 0;
}

bool __thiscall IVRSystem_015_PollNextEvent(void *_this, VREvent_t * pEvent, uint32_t uncbVREvent)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pEvent);
    push_uint32_parameter(uncbVREvent);
    return 0;
}

bool __thiscall IVRSystem_015_PollNextEventWithPose(void *_this, ETrackingUniverseOrigin eOrigin, VREvent_t * pEvent, uint32_t uncbVREvent, TrackedDevicePose_t * pTrackedDevicePose)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
    push_ptr_parameter(pEvent);
    push_uint32_parameter(uncbVREvent);
    push_ptr_parameter(pTrackedDevicePose);
    return 0;
}

const char * __thiscall IVRSystem_015_GetEventTypeNameFromEnum(void *_this, EVREventType eType)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eType);
    return 0;
}

HiddenAreaMesh_t *__thiscall IVRSystem_015_GetHiddenAreaMesh(void *_this, HiddenAreaMesh_t *_r, EVREye eEye, EHiddenAreaMeshType type)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(eEye);
    push_uint32_parameter(type);
    return 0;
}

bool __thiscall IVRSystem_015_GetControllerState(void *_this, TrackedDeviceIndex_t unControllerDeviceIndex, VRControllerState_t * pControllerState, uint32_t unControllerStateSize)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unControllerDeviceIndex);
    push_ptr_parameter(pControllerState);
    push_uint32_parameter(unControllerStateSize);
    return 0;
}

bool __thiscall IVRSystem_015_GetControllerStateWithPose(void *_this, ETrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, VRControllerState_t * pControllerState, uint32_t unControllerStateSize, TrackedDevicePose_t * pTrackedDevicePose)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
    push_uint32_parameter(unControllerDeviceIndex);
    push_ptr_parameter(pControllerState);
    push_uint32_parameter(unControllerStateSize);
    push_ptr_parameter(pTrackedDevicePose);
    return 0;
}

void __thiscall IVRSystem_015_TriggerHapticPulse(void *_this, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unControllerDeviceIndex);
    push_uint32_parameter(unAxisId);
    push_uint32_parameter(usDurationMicroSec);
}

const char * __thiscall IVRSystem_015_GetButtonIdNameFromEnum(void *_this, EVRButtonId eButtonId)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eButtonId);
    return 0;
}

const char * __thiscall IVRSystem_015_GetControllerAxisTypeNameFromEnum(void *_this, EVRControllerAxisType eAxisType)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eAxisType);
    return 0;
}

bool __thiscall IVRSystem_015_CaptureInputFocus(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRSystem_015_ReleaseInputFocus(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRSystem_015_IsInputFocusCapturedByAnotherProcess(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRSystem_015_DriverDebugRequest(void *_this, TrackedDeviceIndex_t unDeviceIndex, const char * pchRequest, char * pchResponseBuffer, uint32_t unResponseBufferSize)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_ptr_parameter(pchRequest);
    push_ptr_parameter(pchResponseBuffer);
    push_uint32_parameter(unResponseBufferSize);
    return 0;
}

EVRFirmwareError __thiscall IVRSystem_015_PerformFirmwareUpdate(void *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    return 0;
}

void __thiscall IVRSystem_015_AcknowledgeQuit_Exiting(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRSystem_015_AcknowledgeQuit_UserPrompt(void *_this)
{
    push_ptr_parameter(_this);
}

EVROverlayError __thiscall IVROverlay_014_FindOverlay(void *_this, const char * pchOverlayKey, VROverlayHandle_t * pOverlayHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayKey);
    push_ptr_parameter(pOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_CreateOverlay(void *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pOverlayHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayKey);
    push_ptr_parameter(pchOverlayFriendlyName);
    push_ptr_parameter(pOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_DestroyOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_SetHighQualityOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

VROverlayHandle_t __thiscall IVROverlay_014_GetHighQualityOverlay(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVROverlay_014_GetOverlayKey(void *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(pError);
    return 0;
}

uint32_t __thiscall IVROverlay_014_GetOverlayName(void *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(pError);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_GetOverlayImageData(void *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unBufferSize, uint32_t * punWidth, uint32_t * punHeight)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvBuffer);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(punWidth);
    push_ptr_parameter(punHeight);
    return 0;
}

const char * __thiscall IVROverlay_014_GetOverlayErrorNameFromEnum(void *_this, EVROverlayError error)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(error);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_SetOverlayRenderingPid(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unPID)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unPID);
    return 0;
}

uint32_t __thiscall IVROverlay_014_GetOverlayRenderingPid(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_SetOverlayFlag(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eOverlayFlag);
    push_bool_parameter(bEnabled);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_GetOverlayFlag(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool * pbEnabled)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eOverlayFlag);
    push_ptr_parameter(pbEnabled);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_SetOverlayColor(void *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fRed);
    push_float_parameter(fGreen);
    push_float_parameter(fBlue);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_GetOverlayColor(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfRed, float * pfGreen, float * pfBlue)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfRed);
    push_ptr_parameter(pfGreen);
    push_ptr_parameter(pfBlue);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_SetOverlayAlpha(void *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fAlpha);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_GetOverlayAlpha(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfAlpha)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfAlpha);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_SetOverlayTexelAspect(void *_this, VROverlayHandle_t ulOverlayHandle, float fTexelAspect)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fTexelAspect);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_GetOverlayTexelAspect(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfTexelAspect)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfTexelAspect);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_SetOverlaySortOrder(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unSortOrder)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unSortOrder);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_GetOverlaySortOrder(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * punSortOrder)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(punSortOrder);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_SetOverlayWidthInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fWidthInMeters);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_GetOverlayWidthInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfWidthInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfWidthInMeters);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_SetOverlayAutoCurveDistanceRangeInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fMinDistanceInMeters);
    push_float_parameter(fMaxDistanceInMeters);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_GetOverlayAutoCurveDistanceRangeInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfMinDistanceInMeters, float * pfMaxDistanceInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfMinDistanceInMeters);
    push_ptr_parameter(pfMaxDistanceInMeters);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_SetOverlayTextureColorSpace(void *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eTextureColorSpace);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_GetOverlayTextureColorSpace(void *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace * peTextureColorSpace)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peTextureColorSpace);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_SetOverlayTextureBounds(void *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pOverlayTextureBounds);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_GetOverlayTextureBounds(void *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pOverlayTextureBounds);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_GetOverlayTransformType(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType * peTransformType)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peTransformType);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_SetOverlayTransformAbsolute(void *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eTrackingOrigin);
    push_ptr_parameter(pmatTrackingOriginToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_GetOverlayTransformAbsolute(void *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin * peTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peTrackingOrigin);
    push_ptr_parameter(pmatTrackingOriginToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_SetOverlayTransformTrackedDeviceRelative(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unTrackedDevice);
    push_ptr_parameter(pmatTrackedDeviceToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_GetOverlayTransformTrackedDeviceRelative(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(punTrackedDevice);
    push_ptr_parameter(pmatTrackedDeviceToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_SetOverlayTransformTrackedDeviceComponent(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unDeviceIndex, const char * pchComponentName)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unDeviceIndex);
    push_ptr_parameter(pchComponentName);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_GetOverlayTransformTrackedDeviceComponent(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punDeviceIndex, char * pchComponentName, uint32_t unComponentNameSize)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(punDeviceIndex);
    push_ptr_parameter(pchComponentName);
    push_uint32_parameter(unComponentNameSize);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_ShowOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_HideOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

bool __thiscall IVROverlay_014_IsOverlayVisible(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_GetTransformForOverlayCoordinates(void *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdVector2_t coordinatesInOverlay, HmdMatrix34_t * pmatTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eTrackingOrigin);
    push_HmdVector2_parameter(coordinatesInOverlay);
    push_ptr_parameter(pmatTransform);
    return 0;
}

bool __thiscall IVROverlay_014_PollNextOverlayEvent(void *_this, VROverlayHandle_t ulOverlayHandle, VREvent_t * pEvent, uint32_t uncbVREvent)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pEvent);
    push_uint32_parameter(uncbVREvent);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_GetOverlayInputMethod(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod * peInputMethod)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peInputMethod);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_SetOverlayInputMethod(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eInputMethod);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_GetOverlayMouseScale(void *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvecMouseScale);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_SetOverlayMouseScale(void *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvecMouseScale);
    return 0;
}

bool __thiscall IVROverlay_014_ComputeOverlayIntersection(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t * pParams, VROverlayIntersectionResults_t * pResults)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pParams);
    push_ptr_parameter(pResults);
    return 0;
}

bool __thiscall IVROverlay_014_HandleControllerOverlayInteractionAsMouse(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unControllerDeviceIndex);
    return 0;
}

bool __thiscall IVROverlay_014_IsHoverTargetOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

VROverlayHandle_t __thiscall IVROverlay_014_GetGamepadFocusOverlay(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_SetGamepadFocusOverlay(void *_this, VROverlayHandle_t ulNewFocusOverlay)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulNewFocusOverlay);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_SetOverlayNeighbor(void *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom, VROverlayHandle_t ulTo)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eDirection);
    push_uint64_parameter(ulFrom);
    push_uint64_parameter(ulTo);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_MoveGamepadFocusToNeighbor(void *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eDirection);
    push_uint64_parameter(ulFrom);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_SetOverlayTexture(void *_this, VROverlayHandle_t ulOverlayHandle, Texture_t * pTexture)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pTexture);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_ClearOverlayTexture(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_SetOverlayRaw(void *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvBuffer);
    push_uint32_parameter(unWidth);
    push_uint32_parameter(unHeight);
    push_uint32_parameter(unDepth);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_SetOverlayFromFile(void *_this, VROverlayHandle_t ulOverlayHandle, const char * pchFilePath)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchFilePath);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_GetOverlayTexture(void *_this, VROverlayHandle_t ulOverlayHandle, void ** pNativeTextureHandle, void * pNativeTextureRef, uint32_t * pWidth, uint32_t * pHeight, uint32_t * pNativeFormat, ETextureType * pAPIType, EColorSpace * pColorSpace, VRTextureBounds_t * pTextureBounds)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pNativeTextureHandle);
    push_ptr_parameter(pNativeTextureRef);
    push_ptr_parameter(pWidth);
    push_ptr_parameter(pHeight);
    push_ptr_parameter(pNativeFormat);
    push_ptr_parameter(pAPIType);
    push_ptr_parameter(pColorSpace);
    push_ptr_parameter(pTextureBounds);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_ReleaseNativeOverlayHandle(void *_this, VROverlayHandle_t ulOverlayHandle, void * pNativeTextureHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pNativeTextureHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_GetOverlayTextureSize(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * pWidth, uint32_t * pHeight)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pWidth);
    push_ptr_parameter(pHeight);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_CreateDashboardOverlay(void *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pMainHandle, VROverlayHandle_t * pThumbnailHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayKey);
    push_ptr_parameter(pchOverlayFriendlyName);
    push_ptr_parameter(pMainHandle);
    push_ptr_parameter(pThumbnailHandle);
    return 0;
}

bool __thiscall IVROverlay_014_IsDashboardVisible(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVROverlay_014_IsActiveDashboardOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_SetDashboardOverlaySceneProcess(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unProcessId);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_GetDashboardOverlaySceneProcess(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * punProcessId)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(punProcessId);
    return 0;
}

void __thiscall IVROverlay_014_ShowDashboard(void *_this, const char * pchOverlayToShow)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayToShow);
}

TrackedDeviceIndex_t __thiscall IVROverlay_014_GetPrimaryDashboardDevice(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_ShowKeyboard(void *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eInputMode);
    push_uint32_parameter(eLineInputMode);
    push_ptr_parameter(pchDescription);
    push_uint32_parameter(unCharMax);
    push_ptr_parameter(pchExistingText);
    push_bool_parameter(bUseMinimalMode);
    push_uint64_parameter(uUserValue);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_ShowKeyboardForOverlay(void *_this, VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eInputMode);
    push_uint32_parameter(eLineInputMode);
    push_ptr_parameter(pchDescription);
    push_uint32_parameter(unCharMax);
    push_ptr_parameter(pchExistingText);
    push_bool_parameter(bUseMinimalMode);
    push_uint64_parameter(uUserValue);
    return 0;
}

uint32_t __thiscall IVROverlay_014_GetKeyboardText(void *_this, char * pchText, uint32_t cchText)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchText);
    push_uint32_parameter(cchText);
    return 0;
}

void __thiscall IVROverlay_014_HideKeyboard(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVROverlay_014_SetKeyboardTransformAbsolute(void *_this, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToKeyboardTransform)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eTrackingOrigin);
    push_ptr_parameter(pmatTrackingOriginToKeyboardTransform);
}

void __thiscall IVROverlay_014_SetKeyboardPositionForOverlay(void *_this, VROverlayHandle_t ulOverlayHandle, HmdRect2_t avoidRect)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_HmdRect2_parameter(avoidRect);
}

EVROverlayError __thiscall IVROverlay_014_SetOverlayIntersectionMask(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionMaskPrimitive_t * pMaskPrimitives, uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pMaskPrimitives);
    push_uint32_parameter(unNumMaskPrimitives);
    push_uint32_parameter(unPrimitiveSize);
    return 0;
}

EVROverlayError __thiscall IVROverlay_014_GetOverlayFlags(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * pFlags)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pFlags);
    return 0;
}

VRMessageOverlayResponse __thiscall IVROverlay_014_ShowMessageOverlay(void *_this, const char * pchText, const char * pchCaption, const char * pchButton0Text, const char * pchButton1Text, const char * pchButton2Text, const char * pchButton3Text)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchText);
    push_ptr_parameter(pchCaption);
    push_ptr_parameter(pchButton0Text);
    push_ptr_parameter(pchButton1Text);
    push_ptr_parameter(pchButton2Text);
    push_ptr_parameter(pchButton3Text);
    return 0;
}

void __thiscall IVRCompositor_019_SetTrackingSpace(void *_this, ETrackingUniverseOrigin eOrigin)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
}

ETrackingUniverseOrigin __thiscall IVRCompositor_019_GetTrackingSpace(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_019_WaitGetPoses(void *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pRenderPoseArray);
    push_uint32_parameter(unRenderPoseArrayCount);
    push_ptr_parameter(pGamePoseArray);
    push_uint32_parameter(unGamePoseArrayCount);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_019_GetLastPoses(void *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pRenderPoseArray);
    push_uint32_parameter(unRenderPoseArrayCount);
    push_ptr_parameter(pGamePoseArray);
    push_uint32_parameter(unGamePoseArrayCount);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_019_GetLastPoseForTrackedDeviceIndex(void *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pOutputGamePose)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_ptr_parameter(pOutputPose);
    push_ptr_parameter(pOutputGamePose);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_019_Submit(void *_this, EVREye eEye, Texture_t * pTexture, VRTextureBounds_t * pBounds, EVRSubmitFlags nSubmitFlags)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pTexture);
    push_ptr_parameter(pBounds);
    push_uint32_parameter(nSubmitFlags);
    return 0;
}

void __thiscall IVRCompositor_019_ClearLastSubmittedFrame(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_019_PostPresentHandoff(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_019_GetFrameTiming(void *_this, Compositor_FrameTiming * pTiming, uint32_t unFramesAgo)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pTiming);
    push_uint32_parameter(unFramesAgo);
    return 0;
}

uint32_t __thiscall IVRCompositor_019_GetFrameTimings(void *_this, Compositor_FrameTiming * pTiming, uint32_t nFrames)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pTiming);
    push_uint32_parameter(nFrames);
    return 0;
}

float __thiscall IVRCompositor_019_GetFrameTimeRemaining(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_019_GetCumulativeStats(void *_this, Compositor_CumulativeStats * pStats, uint32_t nStatsSizeInBytes)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pStats);
    push_uint32_parameter(nStatsSizeInBytes);
}

void __thiscall IVRCompositor_019_FadeToColor(void *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground)
{
    push_ptr_parameter(_this);
    push_float_parameter(fSeconds);
    push_float_parameter(fRed);
    push_float_parameter(fGreen);
    push_float_parameter(fBlue);
    push_float_parameter(fAlpha);
    push_bool_parameter(bBackground);
}

HmdColor_t *__thiscall IVRCompositor_019_GetCurrentFadeColor(void *_this, HmdColor_t *_r, bool bBackground)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_bool_parameter(bBackground);
    return 0;
}

void __thiscall IVRCompositor_019_FadeGrid(void *_this, float fSeconds, bool bFadeIn)
{
    push_ptr_parameter(_this);
    push_float_parameter(fSeconds);
    push_bool_parameter(bFadeIn);
}

float __thiscall IVRCompositor_019_GetCurrentGridAlpha(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_019_SetSkyboxOverride(void *_this, Texture_t * pTextures, uint32_t unTextureCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pTextures);
    push_uint32_parameter(unTextureCount);
    return 0;
}

void __thiscall IVRCompositor_019_ClearSkyboxOverride(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_019_CompositorBringToFront(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_019_CompositorGoToBack(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_019_CompositorQuit(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_019_IsFullscreen(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRCompositor_019_GetCurrentSceneFocusProcess(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRCompositor_019_GetLastFrameRenderer(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVRCompositor_019_CanRenderScene(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_019_ShowMirrorWindow(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_019_HideMirrorWindow(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_019_IsMirrorWindowVisible(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_019_CompositorDumpImages(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_019_ShouldAppRenderWithLowResources(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_019_ForceInterleavedReprojectionOn(void *_this, bool bOverride)
{
    push_ptr_parameter(_this);
    push_bool_parameter(bOverride);
}

void __thiscall IVRCompositor_019_ForceReconnectProcess(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_019_SuspendRendering(void *_this, bool bSuspend)
{
    push_ptr_parameter(_this);
    push_bool_parameter(bSuspend);
}

EVRCompositorError __thiscall IVRCompositor_019_GetMirrorTextureD3D11(void *_this, EVREye eEye, void * pD3D11DeviceOrResource, void ** ppD3D11ShaderResourceView)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pD3D11DeviceOrResource);
    push_ptr_parameter(ppD3D11ShaderResourceView);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_019_GetMirrorTextureGL(void *_this, EVREye eEye, glUInt_t * pglTextureId, glSharedTextureHandle_t * pglSharedTextureHandle)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pglTextureId);
    push_ptr_parameter(pglSharedTextureHandle);
    return 0;
}

bool __thiscall IVRCompositor_019_ReleaseSharedGLTexture(void *_this, glUInt_t glTextureId, glSharedTextureHandle_t glSharedTextureHandle)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(glTextureId);
    push_ptr_parameter(glSharedTextureHandle);
    return 0;
}

void __thiscall IVRCompositor_019_LockGLSharedTextureForAccess(void *_this, glSharedTextureHandle_t glSharedTextureHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(glSharedTextureHandle);
}

void __thiscall IVRCompositor_019_UnlockGLSharedTextureForAccess(void *_this, glSharedTextureHandle_t glSharedTextureHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(glSharedTextureHandle);
}

uint32_t __thiscall IVRCompositor_019_GetVulkanInstanceExtensionsRequired(void *_this, char * pchValue, uint32_t unBufferSize)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    return 0;
}

uint32_t __thiscall IVRCompositor_019_GetVulkanDeviceExtensionsRequired(void *_this, VkPhysicalDevice_T * pPhysicalDevice, char * pchValue, uint32_t unBufferSize)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pPhysicalDevice);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    return 0;
}

void __thiscall IVRSystem_014_GetRecommendedRenderTargetSize(void *_this, uint32_t * pnWidth, uint32_t * pnHeight)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pnWidth);
    push_ptr_parameter(pnHeight);
}

HmdMatrix44_t *__thiscall IVRSystem_014_GetProjectionMatrix(void *_this, HmdMatrix44_t *_r, EVREye eEye, float fNearZ, float fFarZ, EGraphicsAPIConvention eProjType)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(eEye);
    push_float_parameter(fNearZ);
    push_float_parameter(fFarZ);
    push_uint32_parameter(eProjType);
    return 0;
}

void __thiscall IVRSystem_014_GetProjectionRaw(void *_this, EVREye eEye, float * pfLeft, float * pfRight, float * pfTop, float * pfBottom)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pfLeft);
    push_ptr_parameter(pfRight);
    push_ptr_parameter(pfTop);
    push_ptr_parameter(pfBottom);
}

bool __thiscall IVRSystem_014_ComputeDistortion(void *_this, EVREye eEye, float fU, float fV, DistortionCoordinates_t * pDistortionCoordinates)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_float_parameter(fU);
    push_float_parameter(fV);
    push_ptr_parameter(pDistortionCoordinates);
    return 0;
}

HmdMatrix34_t *__thiscall IVRSystem_014_GetEyeToHeadTransform(void *_this, HmdMatrix34_t *_r, EVREye eEye)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(eEye);
    return 0;
}

bool __thiscall IVRSystem_014_GetTimeSinceLastVsync(void *_this, float * pfSecondsSinceLastVsync, uint64_t * pulFrameCounter)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pfSecondsSinceLastVsync);
    push_ptr_parameter(pulFrameCounter);
    return 0;
}

int32_t __thiscall IVRSystem_014_GetD3D9AdapterIndex(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRSystem_014_GetDXGIOutputInfo(void *_this, int32_t * pnAdapterIndex)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pnAdapterIndex);
}

bool __thiscall IVRSystem_014_IsDisplayOnDesktop(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVRSystem_014_SetDisplayVisibility(void *_this, bool bIsVisibleOnDesktop)
{
    push_ptr_parameter(_this);
    push_bool_parameter(bIsVisibleOnDesktop);
    return 0;
}

void __thiscall IVRSystem_014_GetDeviceToAbsoluteTrackingPose(void *_this, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t * pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
    push_float_parameter(fPredictedSecondsToPhotonsFromNow);
    push_ptr_parameter(pTrackedDevicePoseArray);
    push_uint32_parameter(unTrackedDevicePoseArrayCount);
}

void __thiscall IVRSystem_014_ResetSeatedZeroPose(void *_this)
{
    push_ptr_parameter(_this);
}

HmdMatrix34_t *__thiscall IVRSystem_014_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(void *_this, HmdMatrix34_t *_r)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    return 0;
}

HmdMatrix34_t *__thiscall IVRSystem_014_GetRawZeroPoseToStandingAbsoluteTrackingPose(void *_this, HmdMatrix34_t *_r)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    return 0;
}

uint32_t __thiscall IVRSystem_014_GetSortedTrackedDeviceIndicesOfClass(void *_this, ETrackedDeviceClass eTrackedDeviceClass, TrackedDeviceIndex_t * punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eTrackedDeviceClass);
    push_ptr_parameter(punTrackedDeviceIndexArray);
    push_uint32_parameter(unTrackedDeviceIndexArrayCount);
    push_uint32_parameter(unRelativeToTrackedDeviceIndex);
    return 0;
}

EDeviceActivityLevel __thiscall IVRSystem_014_GetTrackedDeviceActivityLevel(void *_this, TrackedDeviceIndex_t unDeviceId)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceId);
    return 0;
}

void __thiscall IVRSystem_014_ApplyTransform(void *_this, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pTrackedDevicePose, HmdMatrix34_t * pTransform)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pOutputPose);
    push_ptr_parameter(pTrackedDevicePose);
    push_ptr_parameter(pTransform);
}

TrackedDeviceIndex_t __thiscall IVRSystem_014_GetTrackedDeviceIndexForControllerRole(void *_this, ETrackedControllerRole unDeviceType)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceType);
    return 0;
}

ETrackedControllerRole __thiscall IVRSystem_014_GetControllerRoleForTrackedDeviceIndex(void *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    return 0;
}

ETrackedDeviceClass __thiscall IVRSystem_014_GetTrackedDeviceClass(void *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    return 0;
}

bool __thiscall IVRSystem_014_IsTrackedDeviceConnected(void *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    return 0;
}

bool __thiscall IVRSystem_014_GetBoolTrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

float __thiscall IVRSystem_014_GetFloatTrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

int32_t __thiscall IVRSystem_014_GetInt32TrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

uint64_t __thiscall IVRSystem_014_GetUint64TrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

HmdMatrix34_t *__thiscall IVRSystem_014_GetMatrix34TrackedDeviceProperty(void *_this, HmdMatrix34_t *_r, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

uint32_t __thiscall IVRSystem_014_GetStringTrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, char * pchValue, uint32_t unBufferSize, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(pError);
    return 0;
}

const char * __thiscall IVRSystem_014_GetPropErrorNameFromEnum(void *_this, ETrackedPropertyError error)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(error);
    return 0;
}

bool __thiscall IVRSystem_014_PollNextEvent(void *_this, VREvent_t * pEvent, uint32_t uncbVREvent)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pEvent);
    push_uint32_parameter(uncbVREvent);
    return 0;
}

bool __thiscall IVRSystem_014_PollNextEventWithPose(void *_this, ETrackingUniverseOrigin eOrigin, VREvent_t * pEvent, uint32_t uncbVREvent, TrackedDevicePose_t * pTrackedDevicePose)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
    push_ptr_parameter(pEvent);
    push_uint32_parameter(uncbVREvent);
    push_ptr_parameter(pTrackedDevicePose);
    return 0;
}

const char * __thiscall IVRSystem_014_GetEventTypeNameFromEnum(void *_this, EVREventType eType)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eType);
    return 0;
}

HiddenAreaMesh_t *__thiscall IVRSystem_014_GetHiddenAreaMesh(void *_this, HiddenAreaMesh_t *_r, EVREye eEye, EHiddenAreaMeshType type)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(eEye);
    push_uint32_parameter(type);
    return 0;
}

bool __thiscall IVRSystem_014_GetControllerState(void *_this, TrackedDeviceIndex_t unControllerDeviceIndex, VRControllerState_t * pControllerState, uint32_t unControllerStateSize)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unControllerDeviceIndex);
    push_ptr_parameter(pControllerState);
    push_uint32_parameter(unControllerStateSize);
    return 0;
}

bool __thiscall IVRSystem_014_GetControllerStateWithPose(void *_this, ETrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, VRControllerState_t * pControllerState, uint32_t unControllerStateSize, TrackedDevicePose_t * pTrackedDevicePose)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
    push_uint32_parameter(unControllerDeviceIndex);
    push_ptr_parameter(pControllerState);
    push_uint32_parameter(unControllerStateSize);
    push_ptr_parameter(pTrackedDevicePose);
    return 0;
}

void __thiscall IVRSystem_014_TriggerHapticPulse(void *_this, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unControllerDeviceIndex);
    push_uint32_parameter(unAxisId);
    push_uint32_parameter(usDurationMicroSec);
}

const char * __thiscall IVRSystem_014_GetButtonIdNameFromEnum(void *_this, EVRButtonId eButtonId)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eButtonId);
    return 0;
}

const char * __thiscall IVRSystem_014_GetControllerAxisTypeNameFromEnum(void *_this, EVRControllerAxisType eAxisType)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eAxisType);
    return 0;
}

bool __thiscall IVRSystem_014_CaptureInputFocus(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRSystem_014_ReleaseInputFocus(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRSystem_014_IsInputFocusCapturedByAnotherProcess(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRSystem_014_DriverDebugRequest(void *_this, TrackedDeviceIndex_t unDeviceIndex, const char * pchRequest, char * pchResponseBuffer, uint32_t unResponseBufferSize)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_ptr_parameter(pchRequest);
    push_ptr_parameter(pchResponseBuffer);
    push_uint32_parameter(unResponseBufferSize);
    return 0;
}

EVRFirmwareError __thiscall IVRSystem_014_PerformFirmwareUpdate(void *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    return 0;
}

void __thiscall IVRSystem_014_AcknowledgeQuit_Exiting(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRSystem_014_AcknowledgeQuit_UserPrompt(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_018_SetTrackingSpace(void *_this, ETrackingUniverseOrigin eOrigin)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
}

ETrackingUniverseOrigin __thiscall IVRCompositor_018_GetTrackingSpace(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_018_WaitGetPoses(void *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pRenderPoseArray);
    push_uint32_parameter(unRenderPoseArrayCount);
    push_ptr_parameter(pGamePoseArray);
    push_uint32_parameter(unGamePoseArrayCount);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_018_GetLastPoses(void *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pRenderPoseArray);
    push_uint32_parameter(unRenderPoseArrayCount);
    push_ptr_parameter(pGamePoseArray);
    push_uint32_parameter(unGamePoseArrayCount);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_018_GetLastPoseForTrackedDeviceIndex(void *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pOutputGamePose)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_ptr_parameter(pOutputPose);
    push_ptr_parameter(pOutputGamePose);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_018_Submit(void *_this, EVREye eEye, Texture_t * pTexture, VRTextureBounds_t * pBounds, EVRSubmitFlags nSubmitFlags)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pTexture);
    push_ptr_parameter(pBounds);
    push_uint32_parameter(nSubmitFlags);
    return 0;
}

void __thiscall IVRCompositor_018_ClearLastSubmittedFrame(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_018_PostPresentHandoff(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_018_GetFrameTiming(void *_this, Compositor_FrameTiming * pTiming, uint32_t unFramesAgo)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pTiming);
    push_uint32_parameter(unFramesAgo);
    return 0;
}

uint32_t __thiscall IVRCompositor_018_GetFrameTimings(void *_this, Compositor_FrameTiming * pTiming, uint32_t nFrames)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pTiming);
    push_uint32_parameter(nFrames);
    return 0;
}

float __thiscall IVRCompositor_018_GetFrameTimeRemaining(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_018_GetCumulativeStats(void *_this, Compositor_CumulativeStats * pStats, uint32_t nStatsSizeInBytes)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pStats);
    push_uint32_parameter(nStatsSizeInBytes);
}

void __thiscall IVRCompositor_018_FadeToColor(void *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground)
{
    push_ptr_parameter(_this);
    push_float_parameter(fSeconds);
    push_float_parameter(fRed);
    push_float_parameter(fGreen);
    push_float_parameter(fBlue);
    push_float_parameter(fAlpha);
    push_bool_parameter(bBackground);
}

HmdColor_t *__thiscall IVRCompositor_018_GetCurrentFadeColor(void *_this, HmdColor_t *_r, bool bBackground)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_bool_parameter(bBackground);
    return 0;
}

void __thiscall IVRCompositor_018_FadeGrid(void *_this, float fSeconds, bool bFadeIn)
{
    push_ptr_parameter(_this);
    push_float_parameter(fSeconds);
    push_bool_parameter(bFadeIn);
}

float __thiscall IVRCompositor_018_GetCurrentGridAlpha(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_018_SetSkyboxOverride(void *_this, Texture_t * pTextures, uint32_t unTextureCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pTextures);
    push_uint32_parameter(unTextureCount);
    return 0;
}

void __thiscall IVRCompositor_018_ClearSkyboxOverride(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_018_CompositorBringToFront(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_018_CompositorGoToBack(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_018_CompositorQuit(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_018_IsFullscreen(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRCompositor_018_GetCurrentSceneFocusProcess(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRCompositor_018_GetLastFrameRenderer(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVRCompositor_018_CanRenderScene(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_018_ShowMirrorWindow(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_018_HideMirrorWindow(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_018_IsMirrorWindowVisible(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_018_CompositorDumpImages(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_018_ShouldAppRenderWithLowResources(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_018_ForceInterleavedReprojectionOn(void *_this, bool bOverride)
{
    push_ptr_parameter(_this);
    push_bool_parameter(bOverride);
}

void __thiscall IVRCompositor_018_ForceReconnectProcess(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_018_SuspendRendering(void *_this, bool bSuspend)
{
    push_ptr_parameter(_this);
    push_bool_parameter(bSuspend);
}

EVRCompositorError __thiscall IVRCompositor_018_GetMirrorTextureD3D11(void *_this, EVREye eEye, void * pD3D11DeviceOrResource, void ** ppD3D11ShaderResourceView)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pD3D11DeviceOrResource);
    push_ptr_parameter(ppD3D11ShaderResourceView);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_018_GetMirrorTextureGL(void *_this, EVREye eEye, glUInt_t * pglTextureId, glSharedTextureHandle_t * pglSharedTextureHandle)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pglTextureId);
    push_ptr_parameter(pglSharedTextureHandle);
    return 0;
}

bool __thiscall IVRCompositor_018_ReleaseSharedGLTexture(void *_this, glUInt_t glTextureId, glSharedTextureHandle_t glSharedTextureHandle)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(glTextureId);
    push_ptr_parameter(glSharedTextureHandle);
    return 0;
}

void __thiscall IVRCompositor_018_LockGLSharedTextureForAccess(void *_this, glSharedTextureHandle_t glSharedTextureHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(glSharedTextureHandle);
}

void __thiscall IVRCompositor_018_UnlockGLSharedTextureForAccess(void *_this, glSharedTextureHandle_t glSharedTextureHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(glSharedTextureHandle);
}

EVROverlayError __thiscall IVROverlay_013_FindOverlay(void *_this, const char * pchOverlayKey, VROverlayHandle_t * pOverlayHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayKey);
    push_ptr_parameter(pOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_CreateOverlay(void *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pOverlayHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayKey);
    push_ptr_parameter(pchOverlayFriendlyName);
    push_ptr_parameter(pOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_DestroyOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_SetHighQualityOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

VROverlayHandle_t __thiscall IVROverlay_013_GetHighQualityOverlay(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVROverlay_013_GetOverlayKey(void *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(pError);
    return 0;
}

uint32_t __thiscall IVROverlay_013_GetOverlayName(void *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(pError);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_GetOverlayImageData(void *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unBufferSize, uint32_t * punWidth, uint32_t * punHeight)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvBuffer);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(punWidth);
    push_ptr_parameter(punHeight);
    return 0;
}

const char * __thiscall IVROverlay_013_GetOverlayErrorNameFromEnum(void *_this, EVROverlayError error)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(error);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_SetOverlayRenderingPid(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unPID)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unPID);
    return 0;
}

uint32_t __thiscall IVROverlay_013_GetOverlayRenderingPid(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_SetOverlayFlag(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eOverlayFlag);
    push_bool_parameter(bEnabled);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_GetOverlayFlag(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool * pbEnabled)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eOverlayFlag);
    push_ptr_parameter(pbEnabled);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_SetOverlayColor(void *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fRed);
    push_float_parameter(fGreen);
    push_float_parameter(fBlue);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_GetOverlayColor(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfRed, float * pfGreen, float * pfBlue)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfRed);
    push_ptr_parameter(pfGreen);
    push_ptr_parameter(pfBlue);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_SetOverlayAlpha(void *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fAlpha);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_GetOverlayAlpha(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfAlpha)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfAlpha);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_SetOverlayTexelAspect(void *_this, VROverlayHandle_t ulOverlayHandle, float fTexelAspect)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fTexelAspect);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_GetOverlayTexelAspect(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfTexelAspect)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfTexelAspect);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_SetOverlaySortOrder(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unSortOrder)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unSortOrder);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_GetOverlaySortOrder(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * punSortOrder)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(punSortOrder);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_SetOverlayWidthInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fWidthInMeters);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_GetOverlayWidthInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfWidthInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfWidthInMeters);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_SetOverlayAutoCurveDistanceRangeInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fMinDistanceInMeters);
    push_float_parameter(fMaxDistanceInMeters);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_GetOverlayAutoCurveDistanceRangeInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfMinDistanceInMeters, float * pfMaxDistanceInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfMinDistanceInMeters);
    push_ptr_parameter(pfMaxDistanceInMeters);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_SetOverlayTextureColorSpace(void *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eTextureColorSpace);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_GetOverlayTextureColorSpace(void *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace * peTextureColorSpace)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peTextureColorSpace);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_SetOverlayTextureBounds(void *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pOverlayTextureBounds);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_GetOverlayTextureBounds(void *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pOverlayTextureBounds);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_GetOverlayTransformType(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType * peTransformType)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peTransformType);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_SetOverlayTransformAbsolute(void *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eTrackingOrigin);
    push_ptr_parameter(pmatTrackingOriginToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_GetOverlayTransformAbsolute(void *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin * peTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peTrackingOrigin);
    push_ptr_parameter(pmatTrackingOriginToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_SetOverlayTransformTrackedDeviceRelative(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unTrackedDevice);
    push_ptr_parameter(pmatTrackedDeviceToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_GetOverlayTransformTrackedDeviceRelative(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(punTrackedDevice);
    push_ptr_parameter(pmatTrackedDeviceToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_SetOverlayTransformTrackedDeviceComponent(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unDeviceIndex, const char * pchComponentName)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unDeviceIndex);
    push_ptr_parameter(pchComponentName);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_GetOverlayTransformTrackedDeviceComponent(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punDeviceIndex, char * pchComponentName, uint32_t unComponentNameSize)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(punDeviceIndex);
    push_ptr_parameter(pchComponentName);
    push_uint32_parameter(unComponentNameSize);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_ShowOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_HideOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

bool __thiscall IVROverlay_013_IsOverlayVisible(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_GetTransformForOverlayCoordinates(void *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdVector2_t coordinatesInOverlay, HmdMatrix34_t * pmatTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eTrackingOrigin);
    push_HmdVector2_parameter(coordinatesInOverlay);
    push_ptr_parameter(pmatTransform);
    return 0;
}

bool __thiscall IVROverlay_013_PollNextOverlayEvent(void *_this, VROverlayHandle_t ulOverlayHandle, VREvent_t * pEvent, uint32_t uncbVREvent)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pEvent);
    push_uint32_parameter(uncbVREvent);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_GetOverlayInputMethod(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod * peInputMethod)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peInputMethod);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_SetOverlayInputMethod(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eInputMethod);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_GetOverlayMouseScale(void *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvecMouseScale);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_SetOverlayMouseScale(void *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvecMouseScale);
    return 0;
}

bool __thiscall IVROverlay_013_ComputeOverlayIntersection(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t * pParams, VROverlayIntersectionResults_t * pResults)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pParams);
    push_ptr_parameter(pResults);
    return 0;
}

bool __thiscall IVROverlay_013_HandleControllerOverlayInteractionAsMouse(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unControllerDeviceIndex);
    return 0;
}

bool __thiscall IVROverlay_013_IsHoverTargetOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

VROverlayHandle_t __thiscall IVROverlay_013_GetGamepadFocusOverlay(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_SetGamepadFocusOverlay(void *_this, VROverlayHandle_t ulNewFocusOverlay)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulNewFocusOverlay);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_SetOverlayNeighbor(void *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom, VROverlayHandle_t ulTo)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eDirection);
    push_uint64_parameter(ulFrom);
    push_uint64_parameter(ulTo);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_MoveGamepadFocusToNeighbor(void *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eDirection);
    push_uint64_parameter(ulFrom);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_SetOverlayTexture(void *_this, VROverlayHandle_t ulOverlayHandle, Texture_t * pTexture)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pTexture);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_ClearOverlayTexture(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_SetOverlayRaw(void *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvBuffer);
    push_uint32_parameter(unWidth);
    push_uint32_parameter(unHeight);
    push_uint32_parameter(unDepth);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_SetOverlayFromFile(void *_this, VROverlayHandle_t ulOverlayHandle, const char * pchFilePath)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchFilePath);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_GetOverlayTexture(void *_this, VROverlayHandle_t ulOverlayHandle, void ** pNativeTextureHandle, void * pNativeTextureRef, uint32_t * pWidth, uint32_t * pHeight, uint32_t * pNativeFormat, EGraphicsAPIConvention * pAPI, EColorSpace * pColorSpace)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pNativeTextureHandle);
    push_ptr_parameter(pNativeTextureRef);
    push_ptr_parameter(pWidth);
    push_ptr_parameter(pHeight);
    push_ptr_parameter(pNativeFormat);
    push_ptr_parameter(pAPI);
    push_ptr_parameter(pColorSpace);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_ReleaseNativeOverlayHandle(void *_this, VROverlayHandle_t ulOverlayHandle, void * pNativeTextureHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pNativeTextureHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_GetOverlayTextureSize(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * pWidth, uint32_t * pHeight)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pWidth);
    push_ptr_parameter(pHeight);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_CreateDashboardOverlay(void *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pMainHandle, VROverlayHandle_t * pThumbnailHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayKey);
    push_ptr_parameter(pchOverlayFriendlyName);
    push_ptr_parameter(pMainHandle);
    push_ptr_parameter(pThumbnailHandle);
    return 0;
}

bool __thiscall IVROverlay_013_IsDashboardVisible(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVROverlay_013_IsActiveDashboardOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_SetDashboardOverlaySceneProcess(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unProcessId);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_GetDashboardOverlaySceneProcess(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * punProcessId)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(punProcessId);
    return 0;
}

void __thiscall IVROverlay_013_ShowDashboard(void *_this, const char * pchOverlayToShow)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayToShow);
}

TrackedDeviceIndex_t __thiscall IVROverlay_013_GetPrimaryDashboardDevice(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_ShowKeyboard(void *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eInputMode);
    push_uint32_parameter(eLineInputMode);
    push_ptr_parameter(pchDescription);
    push_uint32_parameter(unCharMax);
    push_ptr_parameter(pchExistingText);
    push_bool_parameter(bUseMinimalMode);
    push_uint64_parameter(uUserValue);
    return 0;
}

EVROverlayError __thiscall IVROverlay_013_ShowKeyboardForOverlay(void *_this, VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eInputMode);
    push_uint32_parameter(eLineInputMode);
    push_ptr_parameter(pchDescription);
    push_uint32_parameter(unCharMax);
    push_ptr_parameter(pchExistingText);
    push_bool_parameter(bUseMinimalMode);
    push_uint64_parameter(uUserValue);
    return 0;
}

uint32_t __thiscall IVROverlay_013_GetKeyboardText(void *_this, char * pchText, uint32_t cchText)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchText);
    push_uint32_parameter(cchText);
    return 0;
}

void __thiscall IVROverlay_013_HideKeyboard(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVROverlay_013_SetKeyboardTransformAbsolute(void *_this, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToKeyboardTransform)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eTrackingOrigin);
    push_ptr_parameter(pmatTrackingOriginToKeyboardTransform);
}

void __thiscall IVROverlay_013_SetKeyboardPositionForOverlay(void *_this, VROverlayHandle_t ulOverlayHandle, HmdRect2_t avoidRect)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_HmdRect2_parameter(avoidRect);
}

EVROverlayError __thiscall IVROverlay_013_SetOverlayIntersectionMask(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionMaskPrimitive_t * pMaskPrimitives, uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pMaskPrimitives);
    push_uint32_parameter(unNumMaskPrimitives);
    push_uint32_parameter(unPrimitiveSize);
    return 0;
}

void __thiscall IVRCompositor_017_SetTrackingSpace(void *_this, ETrackingUniverseOrigin eOrigin)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
}

ETrackingUniverseOrigin __thiscall IVRCompositor_017_GetTrackingSpace(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_017_WaitGetPoses(void *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pRenderPoseArray);
    push_uint32_parameter(unRenderPoseArrayCount);
    push_ptr_parameter(pGamePoseArray);
    push_uint32_parameter(unGamePoseArrayCount);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_017_GetLastPoses(void *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pRenderPoseArray);
    push_uint32_parameter(unRenderPoseArrayCount);
    push_ptr_parameter(pGamePoseArray);
    push_uint32_parameter(unGamePoseArrayCount);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_017_GetLastPoseForTrackedDeviceIndex(void *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pOutputGamePose)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_ptr_parameter(pOutputPose);
    push_ptr_parameter(pOutputGamePose);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_017_Submit(void *_this, EVREye eEye, Texture_t * pTexture, VRTextureBounds_t * pBounds, EVRSubmitFlags nSubmitFlags)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pTexture);
    push_ptr_parameter(pBounds);
    push_uint32_parameter(nSubmitFlags);
    return 0;
}

void __thiscall IVRCompositor_017_ClearLastSubmittedFrame(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_017_PostPresentHandoff(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_017_GetFrameTiming(void *_this, Compositor_FrameTiming * pTiming, uint32_t unFramesAgo)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pTiming);
    push_uint32_parameter(unFramesAgo);
    return 0;
}

uint32_t __thiscall IVRCompositor_017_GetFrameTimings(void *_this, Compositor_FrameTiming * pTiming, uint32_t nFrames)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pTiming);
    push_uint32_parameter(nFrames);
    return 0;
}

float __thiscall IVRCompositor_017_GetFrameTimeRemaining(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_017_GetCumulativeStats(void *_this, Compositor_CumulativeStats * pStats, uint32_t nStatsSizeInBytes)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pStats);
    push_uint32_parameter(nStatsSizeInBytes);
}

void __thiscall IVRCompositor_017_FadeToColor(void *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground)
{
    push_ptr_parameter(_this);
    push_float_parameter(fSeconds);
    push_float_parameter(fRed);
    push_float_parameter(fGreen);
    push_float_parameter(fBlue);
    push_float_parameter(fAlpha);
    push_bool_parameter(bBackground);
}

void __thiscall IVRCompositor_017_FadeGrid(void *_this, float fSeconds, bool bFadeIn)
{
    push_ptr_parameter(_this);
    push_float_parameter(fSeconds);
    push_bool_parameter(bFadeIn);
}

EVRCompositorError __thiscall IVRCompositor_017_SetSkyboxOverride(void *_this, Texture_t * pTextures, uint32_t unTextureCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pTextures);
    push_uint32_parameter(unTextureCount);
    return 0;
}

void __thiscall IVRCompositor_017_ClearSkyboxOverride(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_017_CompositorBringToFront(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_017_CompositorGoToBack(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_017_CompositorQuit(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_017_IsFullscreen(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRCompositor_017_GetCurrentSceneFocusProcess(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRCompositor_017_GetLastFrameRenderer(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVRCompositor_017_CanRenderScene(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_017_ShowMirrorWindow(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_017_HideMirrorWindow(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_017_IsMirrorWindowVisible(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_017_CompositorDumpImages(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_017_ShouldAppRenderWithLowResources(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_017_ForceInterleavedReprojectionOn(void *_this, bool bOverride)
{
    push_ptr_parameter(_this);
    push_bool_parameter(bOverride);
}

void __thiscall IVRCompositor_017_ForceReconnectProcess(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_017_SuspendRendering(void *_this, bool bSuspend)
{
    push_ptr_parameter(_this);
    push_bool_parameter(bSuspend);
}

EVRCompositorError __thiscall IVRCompositor_017_GetMirrorTextureD3D11(void *_this, EVREye eEye, void * pD3D11DeviceOrResource, void ** ppD3D11ShaderResourceView)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pD3D11DeviceOrResource);
    push_ptr_parameter(ppD3D11ShaderResourceView);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_017_GetMirrorTextureGL(void *_this, EVREye eEye, glUInt_t * pglTextureId, glSharedTextureHandle_t * pglSharedTextureHandle)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pglTextureId);
    push_ptr_parameter(pglSharedTextureHandle);
    return 0;
}

bool __thiscall IVRCompositor_017_ReleaseSharedGLTexture(void *_this, glUInt_t glTextureId, glSharedTextureHandle_t glSharedTextureHandle)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(glTextureId);
    push_ptr_parameter(glSharedTextureHandle);
    return 0;
}

void __thiscall IVRCompositor_017_LockGLSharedTextureForAccess(void *_this, glSharedTextureHandle_t glSharedTextureHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(glSharedTextureHandle);
}

void __thiscall IVRCompositor_017_UnlockGLSharedTextureForAccess(void *_this, glSharedTextureHandle_t glSharedTextureHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(glSharedTextureHandle);
}

void __thiscall IVRSystem_012_GetRecommendedRenderTargetSize(void *_this, uint32_t * pnWidth, uint32_t * pnHeight)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pnWidth);
    push_ptr_parameter(pnHeight);
}

HmdMatrix44_t *__thiscall IVRSystem_012_GetProjectionMatrix(void *_this, HmdMatrix44_t *_r, EVREye eEye, float fNearZ, float fFarZ, EGraphicsAPIConvention eProjType)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(eEye);
    push_float_parameter(fNearZ);
    push_float_parameter(fFarZ);
    push_uint32_parameter(eProjType);
    return 0;
}

void __thiscall IVRSystem_012_GetProjectionRaw(void *_this, EVREye eEye, float * pfLeft, float * pfRight, float * pfTop, float * pfBottom)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pfLeft);
    push_ptr_parameter(pfRight);
    push_ptr_parameter(pfTop);
    push_ptr_parameter(pfBottom);
}

DistortionCoordinates_t *__thiscall IVRSystem_012_ComputeDistortion(void *_this, DistortionCoordinates_t *_r, EVREye eEye, float fU, float fV)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(eEye);
    push_float_parameter(fU);
    push_float_parameter(fV);
    return 0;
}

HmdMatrix34_t *__thiscall IVRSystem_012_GetEyeToHeadTransform(void *_this, HmdMatrix34_t *_r, EVREye eEye)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(eEye);
    return 0;
}

bool __thiscall IVRSystem_012_GetTimeSinceLastVsync(void *_this, float * pfSecondsSinceLastVsync, uint64_t * pulFrameCounter)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pfSecondsSinceLastVsync);
    push_ptr_parameter(pulFrameCounter);
    return 0;
}

int32_t __thiscall IVRSystem_012_GetD3D9AdapterIndex(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRSystem_012_GetDXGIOutputInfo(void *_this, int32_t * pnAdapterIndex)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pnAdapterIndex);
}

bool __thiscall IVRSystem_012_IsDisplayOnDesktop(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVRSystem_012_SetDisplayVisibility(void *_this, bool bIsVisibleOnDesktop)
{
    push_ptr_parameter(_this);
    push_bool_parameter(bIsVisibleOnDesktop);
    return 0;
}

void __thiscall IVRSystem_012_GetDeviceToAbsoluteTrackingPose(void *_this, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t * pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
    push_float_parameter(fPredictedSecondsToPhotonsFromNow);
    push_ptr_parameter(pTrackedDevicePoseArray);
    push_uint32_parameter(unTrackedDevicePoseArrayCount);
}

void __thiscall IVRSystem_012_ResetSeatedZeroPose(void *_this)
{
    push_ptr_parameter(_this);
}

HmdMatrix34_t *__thiscall IVRSystem_012_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(void *_this, HmdMatrix34_t *_r)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    return 0;
}

HmdMatrix34_t *__thiscall IVRSystem_012_GetRawZeroPoseToStandingAbsoluteTrackingPose(void *_this, HmdMatrix34_t *_r)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    return 0;
}

uint32_t __thiscall IVRSystem_012_GetSortedTrackedDeviceIndicesOfClass(void *_this, ETrackedDeviceClass eTrackedDeviceClass, TrackedDeviceIndex_t * punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eTrackedDeviceClass);
    push_ptr_parameter(punTrackedDeviceIndexArray);
    push_uint32_parameter(unTrackedDeviceIndexArrayCount);
    push_uint32_parameter(unRelativeToTrackedDeviceIndex);
    return 0;
}

EDeviceActivityLevel __thiscall IVRSystem_012_GetTrackedDeviceActivityLevel(void *_this, TrackedDeviceIndex_t unDeviceId)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceId);
    return 0;
}

void __thiscall IVRSystem_012_ApplyTransform(void *_this, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pTrackedDevicePose, HmdMatrix34_t * pTransform)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pOutputPose);
    push_ptr_parameter(pTrackedDevicePose);
    push_ptr_parameter(pTransform);
}

TrackedDeviceIndex_t __thiscall IVRSystem_012_GetTrackedDeviceIndexForControllerRole(void *_this, ETrackedControllerRole unDeviceType)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceType);
    return 0;
}

ETrackedControllerRole __thiscall IVRSystem_012_GetControllerRoleForTrackedDeviceIndex(void *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    return 0;
}

ETrackedDeviceClass __thiscall IVRSystem_012_GetTrackedDeviceClass(void *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    return 0;
}

bool __thiscall IVRSystem_012_IsTrackedDeviceConnected(void *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    return 0;
}

bool __thiscall IVRSystem_012_GetBoolTrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

float __thiscall IVRSystem_012_GetFloatTrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

int32_t __thiscall IVRSystem_012_GetInt32TrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

uint64_t __thiscall IVRSystem_012_GetUint64TrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

HmdMatrix34_t *__thiscall IVRSystem_012_GetMatrix34TrackedDeviceProperty(void *_this, HmdMatrix34_t *_r, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

uint32_t __thiscall IVRSystem_012_GetStringTrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, char * pchValue, uint32_t unBufferSize, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(pError);
    return 0;
}

const char * __thiscall IVRSystem_012_GetPropErrorNameFromEnum(void *_this, ETrackedPropertyError error)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(error);
    return 0;
}

bool __thiscall IVRSystem_012_PollNextEvent(void *_this, VREvent_t * pEvent, uint32_t uncbVREvent)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pEvent);
    push_uint32_parameter(uncbVREvent);
    return 0;
}

bool __thiscall IVRSystem_012_PollNextEventWithPose(void *_this, ETrackingUniverseOrigin eOrigin, VREvent_t * pEvent, uint32_t uncbVREvent, TrackedDevicePose_t * pTrackedDevicePose)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
    push_ptr_parameter(pEvent);
    push_uint32_parameter(uncbVREvent);
    push_ptr_parameter(pTrackedDevicePose);
    return 0;
}

const char * __thiscall IVRSystem_012_GetEventTypeNameFromEnum(void *_this, EVREventType eType)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eType);
    return 0;
}

HiddenAreaMesh_t *__thiscall IVRSystem_012_GetHiddenAreaMesh(void *_this, HiddenAreaMesh_t *_r, EVREye eEye)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(eEye);
    return 0;
}

bool __thiscall IVRSystem_012_GetControllerState(void *_this, TrackedDeviceIndex_t unControllerDeviceIndex, VRControllerState_t * pControllerState)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unControllerDeviceIndex);
    push_ptr_parameter(pControllerState);
    return 0;
}

bool __thiscall IVRSystem_012_GetControllerStateWithPose(void *_this, ETrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, VRControllerState_t * pControllerState, TrackedDevicePose_t * pTrackedDevicePose)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
    push_uint32_parameter(unControllerDeviceIndex);
    push_ptr_parameter(pControllerState);
    push_ptr_parameter(pTrackedDevicePose);
    return 0;
}

void __thiscall IVRSystem_012_TriggerHapticPulse(void *_this, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unControllerDeviceIndex);
    push_uint32_parameter(unAxisId);
    push_uint32_parameter(usDurationMicroSec);
}

const char * __thiscall IVRSystem_012_GetButtonIdNameFromEnum(void *_this, EVRButtonId eButtonId)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eButtonId);
    return 0;
}

const char * __thiscall IVRSystem_012_GetControllerAxisTypeNameFromEnum(void *_this, EVRControllerAxisType eAxisType)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eAxisType);
    return 0;
}

bool __thiscall IVRSystem_012_CaptureInputFocus(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRSystem_012_ReleaseInputFocus(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRSystem_012_IsInputFocusCapturedByAnotherProcess(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRSystem_012_DriverDebugRequest(void *_this, TrackedDeviceIndex_t unDeviceIndex, const char * pchRequest, char * pchResponseBuffer, uint32_t unResponseBufferSize)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_ptr_parameter(pchRequest);
    push_ptr_parameter(pchResponseBuffer);
    push_uint32_parameter(unResponseBufferSize);
    return 0;
}

EVRFirmwareError __thiscall IVRSystem_012_PerformFirmwareUpdate(void *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    return 0;
}

void __thiscall IVRSystem_012_AcknowledgeQuit_Exiting(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRSystem_012_AcknowledgeQuit_UserPrompt(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_016_SetTrackingSpace(void *_this, ETrackingUniverseOrigin eOrigin)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
}

ETrackingUniverseOrigin __thiscall IVRCompositor_016_GetTrackingSpace(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_016_WaitGetPoses(void *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pRenderPoseArray);
    push_uint32_parameter(unRenderPoseArrayCount);
    push_ptr_parameter(pGamePoseArray);
    push_uint32_parameter(unGamePoseArrayCount);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_016_GetLastPoses(void *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pRenderPoseArray);
    push_uint32_parameter(unRenderPoseArrayCount);
    push_ptr_parameter(pGamePoseArray);
    push_uint32_parameter(unGamePoseArrayCount);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_016_GetLastPoseForTrackedDeviceIndex(void *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pOutputGamePose)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_ptr_parameter(pOutputPose);
    push_ptr_parameter(pOutputGamePose);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_016_Submit(void *_this, EVREye eEye, Texture_t * pTexture, VRTextureBounds_t * pBounds, EVRSubmitFlags nSubmitFlags)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pTexture);
    push_ptr_parameter(pBounds);
    push_uint32_parameter(nSubmitFlags);
    return 0;
}

void __thiscall IVRCompositor_016_ClearLastSubmittedFrame(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_016_PostPresentHandoff(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_016_GetFrameTiming(void *_this, Compositor_FrameTiming * pTiming, uint32_t unFramesAgo)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pTiming);
    push_uint32_parameter(unFramesAgo);
    return 0;
}

float __thiscall IVRCompositor_016_GetFrameTimeRemaining(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_016_GetCumulativeStats(void *_this, Compositor_CumulativeStats * pStats, uint32_t nStatsSizeInBytes)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pStats);
    push_uint32_parameter(nStatsSizeInBytes);
}

void __thiscall IVRCompositor_016_FadeToColor(void *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground)
{
    push_ptr_parameter(_this);
    push_float_parameter(fSeconds);
    push_float_parameter(fRed);
    push_float_parameter(fGreen);
    push_float_parameter(fBlue);
    push_float_parameter(fAlpha);
    push_bool_parameter(bBackground);
}

void __thiscall IVRCompositor_016_FadeGrid(void *_this, float fSeconds, bool bFadeIn)
{
    push_ptr_parameter(_this);
    push_float_parameter(fSeconds);
    push_bool_parameter(bFadeIn);
}

EVRCompositorError __thiscall IVRCompositor_016_SetSkyboxOverride(void *_this, Texture_t * pTextures, uint32_t unTextureCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pTextures);
    push_uint32_parameter(unTextureCount);
    return 0;
}

void __thiscall IVRCompositor_016_ClearSkyboxOverride(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_016_CompositorBringToFront(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_016_CompositorGoToBack(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_016_CompositorQuit(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_016_IsFullscreen(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRCompositor_016_GetCurrentSceneFocusProcess(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRCompositor_016_GetLastFrameRenderer(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVRCompositor_016_CanRenderScene(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_016_ShowMirrorWindow(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_016_HideMirrorWindow(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_016_IsMirrorWindowVisible(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_016_CompositorDumpImages(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_016_ShouldAppRenderWithLowResources(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_016_ForceInterleavedReprojectionOn(void *_this, bool bOverride)
{
    push_ptr_parameter(_this);
    push_bool_parameter(bOverride);
}

void __thiscall IVRCompositor_016_ForceReconnectProcess(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_016_SuspendRendering(void *_this, bool bSuspend)
{
    push_ptr_parameter(_this);
    push_bool_parameter(bSuspend);
}

EVRCompositorError __thiscall IVRCompositor_016_GetMirrorTextureD3D11(void *_this, EVREye eEye, void * pD3D11DeviceOrResource, void ** ppD3D11ShaderResourceView)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pD3D11DeviceOrResource);
    push_ptr_parameter(ppD3D11ShaderResourceView);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_016_GetMirrorTextureGL(void *_this, EVREye eEye, glUInt_t * pglTextureId, glSharedTextureHandle_t * pglSharedTextureHandle)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pglTextureId);
    push_ptr_parameter(pglSharedTextureHandle);
    return 0;
}

bool __thiscall IVRCompositor_016_ReleaseSharedGLTexture(void *_this, glUInt_t glTextureId, glSharedTextureHandle_t glSharedTextureHandle)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(glTextureId);
    push_ptr_parameter(glSharedTextureHandle);
    return 0;
}

void __thiscall IVRCompositor_016_LockGLSharedTextureForAccess(void *_this, glSharedTextureHandle_t glSharedTextureHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(glSharedTextureHandle);
}

void __thiscall IVRCompositor_016_UnlockGLSharedTextureForAccess(void *_this, glSharedTextureHandle_t glSharedTextureHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(glSharedTextureHandle);
}

const char * __thiscall IVRSettings_001_GetSettingsErrorNameFromEnum(void *_this, EVRSettingsError eError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eError);
    return 0;
}

bool __thiscall IVRSettings_001_Sync(void *_this, bool bForce, EVRSettingsError * peError)
{
    push_ptr_parameter(_this);
    push_bool_parameter(bForce);
    push_ptr_parameter(peError);
    return 0;
}

bool __thiscall IVRSettings_001_GetBool(void *_this, const char * pchSection, const char * pchSettingsKey, bool bDefaultValue, EVRSettingsError * peError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchSection);
    push_ptr_parameter(pchSettingsKey);
    push_bool_parameter(bDefaultValue);
    push_ptr_parameter(peError);
    return 0;
}

void __thiscall IVRSettings_001_SetBool(void *_this, const char * pchSection, const char * pchSettingsKey, bool bValue, EVRSettingsError * peError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchSection);
    push_ptr_parameter(pchSettingsKey);
    push_bool_parameter(bValue);
    push_ptr_parameter(peError);
}

int32_t __thiscall IVRSettings_001_GetInt32(void *_this, const char * pchSection, const char * pchSettingsKey, int32_t nDefaultValue, EVRSettingsError * peError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchSection);
    push_ptr_parameter(pchSettingsKey);
    push_uint32_parameter(nDefaultValue);
    push_ptr_parameter(peError);
    return 0;
}

void __thiscall IVRSettings_001_SetInt32(void *_this, const char * pchSection, const char * pchSettingsKey, int32_t nValue, EVRSettingsError * peError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchSection);
    push_ptr_parameter(pchSettingsKey);
    push_uint32_parameter(nValue);
    push_ptr_parameter(peError);
}

float __thiscall IVRSettings_001_GetFloat(void *_this, const char * pchSection, const char * pchSettingsKey, float flDefaultValue, EVRSettingsError * peError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchSection);
    push_ptr_parameter(pchSettingsKey);
    push_float_parameter(flDefaultValue);
    push_ptr_parameter(peError);
    return 0;
}

void __thiscall IVRSettings_001_SetFloat(void *_this, const char * pchSection, const char * pchSettingsKey, float flValue, EVRSettingsError * peError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchSection);
    push_ptr_parameter(pchSettingsKey);
    push_float_parameter(flValue);
    push_ptr_parameter(peError);
}

void __thiscall IVRSettings_001_GetString(void *_this, const char * pchSection, const char * pchSettingsKey, char * pchValue, uint32_t unValueLen, const char * pchDefaultValue, EVRSettingsError * peError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchSection);
    push_ptr_parameter(pchSettingsKey);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unValueLen);
    push_ptr_parameter(pchDefaultValue);
    push_ptr_parameter(peError);
}

void __thiscall IVRSettings_001_SetString(void *_this, const char * pchSection, const char * pchSettingsKey, const char * pchValue, EVRSettingsError * peError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchSection);
    push_ptr_parameter(pchSettingsKey);
    push_ptr_parameter(pchValue);
    push_ptr_parameter(peError);
}

void __thiscall IVRSettings_001_RemoveSection(void *_this, const char * pchSection, EVRSettingsError * peError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchSection);
    push_ptr_parameter(peError);
}

void __thiscall IVRSettings_001_RemoveKeyInSection(void *_this, const char * pchSection, const char * pchSettingsKey, EVRSettingsError * peError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchSection);
    push_ptr_parameter(pchSettingsKey);
    push_ptr_parameter(peError);
}

EVRApplicationError __thiscall IVRApplications_005_AddApplicationManifest(void *_this, const char * pchApplicationManifestFullPath, bool bTemporary)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchApplicationManifestFullPath);
    push_bool_parameter(bTemporary);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_005_RemoveApplicationManifest(void *_this, const char * pchApplicationManifestFullPath)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchApplicationManifestFullPath);
    return 0;
}

bool __thiscall IVRApplications_005_IsApplicationInstalled(void *_this, const char * pchAppKey)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    return 0;
}

uint32_t __thiscall IVRApplications_005_GetApplicationCount(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_005_GetApplicationKeyByIndex(void *_this, uint32_t unApplicationIndex, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unApplicationIndex);
    push_ptr_parameter(pchAppKeyBuffer);
    push_uint32_parameter(unAppKeyBufferLen);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_005_GetApplicationKeyByProcessId(void *_this, uint32_t unProcessId, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unProcessId);
    push_ptr_parameter(pchAppKeyBuffer);
    push_uint32_parameter(unAppKeyBufferLen);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_005_LaunchApplication(void *_this, const char * pchAppKey)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_005_LaunchTemplateApplication(void *_this, const char * pchTemplateAppKey, const char * pchNewAppKey, AppOverrideKeys_t * pKeys, uint32_t unKeys)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchTemplateAppKey);
    push_ptr_parameter(pchNewAppKey);
    push_ptr_parameter(pKeys);
    push_uint32_parameter(unKeys);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_005_LaunchDashboardOverlay(void *_this, const char * pchAppKey)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    return 0;
}

bool __thiscall IVRApplications_005_CancelApplicationLaunch(void *_this, const char * pchAppKey)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_005_IdentifyApplication(void *_this, uint32_t unProcessId, const char * pchAppKey)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unProcessId);
    push_ptr_parameter(pchAppKey);
    return 0;
}

uint32_t __thiscall IVRApplications_005_GetApplicationProcessId(void *_this, const char * pchAppKey)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    return 0;
}

const char * __thiscall IVRApplications_005_GetApplicationsErrorNameFromEnum(void *_this, EVRApplicationError error)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(error);
    return 0;
}

uint32_t __thiscall IVRApplications_005_GetApplicationPropertyString(void *_this, const char * pchAppKey, EVRApplicationProperty eProperty, char * pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen, EVRApplicationError * peError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    push_uint32_parameter(eProperty);
    push_ptr_parameter(pchPropertyValueBuffer);
    push_uint32_parameter(unPropertyValueBufferLen);
    push_ptr_parameter(peError);
    return 0;
}

bool __thiscall IVRApplications_005_GetApplicationPropertyBool(void *_this, const char * pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError * peError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    push_uint32_parameter(eProperty);
    push_ptr_parameter(peError);
    return 0;
}

uint64_t __thiscall IVRApplications_005_GetApplicationPropertyUint64(void *_this, const char * pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError * peError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    push_uint32_parameter(eProperty);
    push_ptr_parameter(peError);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_005_SetApplicationAutoLaunch(void *_this, const char * pchAppKey, bool bAutoLaunch)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    push_bool_parameter(bAutoLaunch);
    return 0;
}

bool __thiscall IVRApplications_005_GetApplicationAutoLaunch(void *_this, const char * pchAppKey)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_005_GetStartingApplication(void *_this, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKeyBuffer);
    push_uint32_parameter(unAppKeyBufferLen);
    return 0;
}

EVRApplicationTransitionState __thiscall IVRApplications_005_GetTransitionState(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_005_PerformApplicationPrelaunchCheck(void *_this, const char * pchAppKey)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    return 0;
}

const char * __thiscall IVRApplications_005_GetApplicationsTransitionStateNameFromEnum(void *_this, EVRApplicationTransitionState state)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(state);
    return 0;
}

bool __thiscall IVRApplications_005_IsQuitUserPromptRequested(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_005_LaunchInternalProcess(void *_this, const char * pchBinaryPath, const char * pchArguments, const char * pchWorkingDirectory)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchBinaryPath);
    push_ptr_parameter(pchArguments);
    push_ptr_parameter(pchWorkingDirectory);
    return 0;
}

void __thiscall IVRCompositor_015_SetTrackingSpace(void *_this, ETrackingUniverseOrigin eOrigin)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
}

ETrackingUniverseOrigin __thiscall IVRCompositor_015_GetTrackingSpace(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_015_WaitGetPoses(void *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pRenderPoseArray);
    push_uint32_parameter(unRenderPoseArrayCount);
    push_ptr_parameter(pGamePoseArray);
    push_uint32_parameter(unGamePoseArrayCount);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_015_GetLastPoses(void *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pRenderPoseArray);
    push_uint32_parameter(unRenderPoseArrayCount);
    push_ptr_parameter(pGamePoseArray);
    push_uint32_parameter(unGamePoseArrayCount);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_015_GetLastPoseForTrackedDeviceIndex(void *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pOutputGamePose)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_ptr_parameter(pOutputPose);
    push_ptr_parameter(pOutputGamePose);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_015_Submit(void *_this, EVREye eEye, Texture_t * pTexture, VRTextureBounds_t * pBounds, EVRSubmitFlags nSubmitFlags)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pTexture);
    push_ptr_parameter(pBounds);
    push_uint32_parameter(nSubmitFlags);
    return 0;
}

void __thiscall IVRCompositor_015_ClearLastSubmittedFrame(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_015_PostPresentHandoff(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_015_GetFrameTiming(void *_this, Compositor_FrameTiming * pTiming, uint32_t unFramesAgo)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pTiming);
    push_uint32_parameter(unFramesAgo);
    return 0;
}

float __thiscall IVRCompositor_015_GetFrameTimeRemaining(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_015_GetCumulativeStats(void *_this, Compositor_CumulativeStats * pStats, uint32_t nStatsSizeInBytes)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pStats);
    push_uint32_parameter(nStatsSizeInBytes);
}

void __thiscall IVRCompositor_015_FadeToColor(void *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground)
{
    push_ptr_parameter(_this);
    push_float_parameter(fSeconds);
    push_float_parameter(fRed);
    push_float_parameter(fGreen);
    push_float_parameter(fBlue);
    push_float_parameter(fAlpha);
    push_bool_parameter(bBackground);
}

void __thiscall IVRCompositor_015_FadeGrid(void *_this, float fSeconds, bool bFadeIn)
{
    push_ptr_parameter(_this);
    push_float_parameter(fSeconds);
    push_bool_parameter(bFadeIn);
}

EVRCompositorError __thiscall IVRCompositor_015_SetSkyboxOverride(void *_this, Texture_t * pTextures, uint32_t unTextureCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pTextures);
    push_uint32_parameter(unTextureCount);
    return 0;
}

void __thiscall IVRCompositor_015_ClearSkyboxOverride(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_015_CompositorBringToFront(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_015_CompositorGoToBack(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_015_CompositorQuit(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_015_IsFullscreen(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRCompositor_015_GetCurrentSceneFocusProcess(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRCompositor_015_GetLastFrameRenderer(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVRCompositor_015_CanRenderScene(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_015_ShowMirrorWindow(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_015_HideMirrorWindow(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_015_IsMirrorWindowVisible(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_015_CompositorDumpImages(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_015_ShouldAppRenderWithLowResources(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_015_ForceInterleavedReprojectionOn(void *_this, bool bOverride)
{
    push_ptr_parameter(_this);
    push_bool_parameter(bOverride);
}

void __thiscall IVRCompositor_015_ForceReconnectProcess(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_015_SuspendRendering(void *_this, bool bSuspend)
{
    push_ptr_parameter(_this);
    push_bool_parameter(bSuspend);
}

EVRCompositorError __thiscall IVRCompositor_015_RequestScreenshot(void *_this, EVRScreenshotType type, const char * pchDestinationFileName, const char * pchVRDestinationFileName)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(type);
    push_ptr_parameter(pchDestinationFileName);
    push_ptr_parameter(pchVRDestinationFileName);
    return 0;
}

EVRScreenshotType __thiscall IVRCompositor_015_GetCurrentScreenshotType(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_015_GetMirrorTextureD3D11(void *_this, EVREye eEye, void * pD3D11DeviceOrResource, void ** ppD3D11ShaderResourceView)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pD3D11DeviceOrResource);
    push_ptr_parameter(ppD3D11ShaderResourceView);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_015_GetMirrorTextureGL(void *_this, EVREye eEye, glUInt_t * pglTextureId, glSharedTextureHandle_t * pglSharedTextureHandle)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pglTextureId);
    push_ptr_parameter(pglSharedTextureHandle);
    return 0;
}

bool __thiscall IVRCompositor_015_ReleaseSharedGLTexture(void *_this, glUInt_t glTextureId, glSharedTextureHandle_t glSharedTextureHandle)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(glTextureId);
    push_ptr_parameter(glSharedTextureHandle);
    return 0;
}

void __thiscall IVRCompositor_015_LockGLSharedTextureForAccess(void *_this, glSharedTextureHandle_t glSharedTextureHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(glSharedTextureHandle);
}

void __thiscall IVRCompositor_015_UnlockGLSharedTextureForAccess(void *_this, glSharedTextureHandle_t glSharedTextureHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(glSharedTextureHandle);
}

EVROverlayError __thiscall IVROverlay_012_FindOverlay(void *_this, const char * pchOverlayKey, VROverlayHandle_t * pOverlayHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayKey);
    push_ptr_parameter(pOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_012_CreateOverlay(void *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pOverlayHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayKey);
    push_ptr_parameter(pchOverlayFriendlyName);
    push_ptr_parameter(pOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_012_DestroyOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_012_SetHighQualityOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

VROverlayHandle_t __thiscall IVROverlay_012_GetHighQualityOverlay(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVROverlay_012_GetOverlayKey(void *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(pError);
    return 0;
}

uint32_t __thiscall IVROverlay_012_GetOverlayName(void *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(pError);
    return 0;
}

EVROverlayError __thiscall IVROverlay_012_GetOverlayImageData(void *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unBufferSize, uint32_t * punWidth, uint32_t * punHeight)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvBuffer);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(punWidth);
    push_ptr_parameter(punHeight);
    return 0;
}

const char * __thiscall IVROverlay_012_GetOverlayErrorNameFromEnum(void *_this, EVROverlayError error)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(error);
    return 0;
}

EVROverlayError __thiscall IVROverlay_012_SetOverlayRenderingPid(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unPID)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unPID);
    return 0;
}

uint32_t __thiscall IVROverlay_012_GetOverlayRenderingPid(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_012_SetOverlayFlag(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eOverlayFlag);
    push_bool_parameter(bEnabled);
    return 0;
}

EVROverlayError __thiscall IVROverlay_012_GetOverlayFlag(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool * pbEnabled)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eOverlayFlag);
    push_ptr_parameter(pbEnabled);
    return 0;
}

EVROverlayError __thiscall IVROverlay_012_SetOverlayColor(void *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fRed);
    push_float_parameter(fGreen);
    push_float_parameter(fBlue);
    return 0;
}

EVROverlayError __thiscall IVROverlay_012_GetOverlayColor(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfRed, float * pfGreen, float * pfBlue)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfRed);
    push_ptr_parameter(pfGreen);
    push_ptr_parameter(pfBlue);
    return 0;
}

EVROverlayError __thiscall IVROverlay_012_SetOverlayAlpha(void *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fAlpha);
    return 0;
}

EVROverlayError __thiscall IVROverlay_012_GetOverlayAlpha(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfAlpha)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfAlpha);
    return 0;
}

EVROverlayError __thiscall IVROverlay_012_SetOverlayWidthInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fWidthInMeters);
    return 0;
}

EVROverlayError __thiscall IVROverlay_012_GetOverlayWidthInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfWidthInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfWidthInMeters);
    return 0;
}

EVROverlayError __thiscall IVROverlay_012_SetOverlayAutoCurveDistanceRangeInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fMinDistanceInMeters);
    push_float_parameter(fMaxDistanceInMeters);
    return 0;
}

EVROverlayError __thiscall IVROverlay_012_GetOverlayAutoCurveDistanceRangeInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfMinDistanceInMeters, float * pfMaxDistanceInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfMinDistanceInMeters);
    push_ptr_parameter(pfMaxDistanceInMeters);
    return 0;
}

EVROverlayError __thiscall IVROverlay_012_SetOverlayTextureColorSpace(void *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eTextureColorSpace);
    return 0;
}

EVROverlayError __thiscall IVROverlay_012_GetOverlayTextureColorSpace(void *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace * peTextureColorSpace)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peTextureColorSpace);
    return 0;
}

EVROverlayError __thiscall IVROverlay_012_SetOverlayTextureBounds(void *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pOverlayTextureBounds);
    return 0;
}

EVROverlayError __thiscall IVROverlay_012_GetOverlayTextureBounds(void *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pOverlayTextureBounds);
    return 0;
}

EVROverlayError __thiscall IVROverlay_012_GetOverlayTransformType(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType * peTransformType)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peTransformType);
    return 0;
}

EVROverlayError __thiscall IVROverlay_012_SetOverlayTransformAbsolute(void *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eTrackingOrigin);
    push_ptr_parameter(pmatTrackingOriginToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_012_GetOverlayTransformAbsolute(void *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin * peTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peTrackingOrigin);
    push_ptr_parameter(pmatTrackingOriginToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_012_SetOverlayTransformTrackedDeviceRelative(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unTrackedDevice);
    push_ptr_parameter(pmatTrackedDeviceToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_012_GetOverlayTransformTrackedDeviceRelative(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(punTrackedDevice);
    push_ptr_parameter(pmatTrackedDeviceToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_012_SetOverlayTransformTrackedDeviceComponent(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unDeviceIndex, const char * pchComponentName)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unDeviceIndex);
    push_ptr_parameter(pchComponentName);
    return 0;
}

EVROverlayError __thiscall IVROverlay_012_GetOverlayTransformTrackedDeviceComponent(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punDeviceIndex, char * pchComponentName, uint32_t unComponentNameSize)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(punDeviceIndex);
    push_ptr_parameter(pchComponentName);
    push_uint32_parameter(unComponentNameSize);
    return 0;
}

EVROverlayError __thiscall IVROverlay_012_ShowOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_012_HideOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

bool __thiscall IVROverlay_012_IsOverlayVisible(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_012_GetTransformForOverlayCoordinates(void *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdVector2_t coordinatesInOverlay, HmdMatrix34_t * pmatTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eTrackingOrigin);
    push_HmdVector2_parameter(coordinatesInOverlay);
    push_ptr_parameter(pmatTransform);
    return 0;
}

bool __thiscall IVROverlay_012_PollNextOverlayEvent(void *_this, VROverlayHandle_t ulOverlayHandle, VREvent_t * pEvent, uint32_t uncbVREvent)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pEvent);
    push_uint32_parameter(uncbVREvent);
    return 0;
}

EVROverlayError __thiscall IVROverlay_012_GetOverlayInputMethod(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod * peInputMethod)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peInputMethod);
    return 0;
}

EVROverlayError __thiscall IVROverlay_012_SetOverlayInputMethod(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eInputMethod);
    return 0;
}

EVROverlayError __thiscall IVROverlay_012_GetOverlayMouseScale(void *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvecMouseScale);
    return 0;
}

EVROverlayError __thiscall IVROverlay_012_SetOverlayMouseScale(void *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvecMouseScale);
    return 0;
}

bool __thiscall IVROverlay_012_ComputeOverlayIntersection(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t * pParams, VROverlayIntersectionResults_t * pResults)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pParams);
    push_ptr_parameter(pResults);
    return 0;
}

bool __thiscall IVROverlay_012_HandleControllerOverlayInteractionAsMouse(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unControllerDeviceIndex);
    return 0;
}

bool __thiscall IVROverlay_012_IsHoverTargetOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

VROverlayHandle_t __thiscall IVROverlay_012_GetGamepadFocusOverlay(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVROverlayError __thiscall IVROverlay_012_SetGamepadFocusOverlay(void *_this, VROverlayHandle_t ulNewFocusOverlay)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulNewFocusOverlay);
    return 0;
}

EVROverlayError __thiscall IVROverlay_012_SetOverlayNeighbor(void *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom, VROverlayHandle_t ulTo)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eDirection);
    push_uint64_parameter(ulFrom);
    push_uint64_parameter(ulTo);
    return 0;
}

EVROverlayError __thiscall IVROverlay_012_MoveGamepadFocusToNeighbor(void *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eDirection);
    push_uint64_parameter(ulFrom);
    return 0;
}

EVROverlayError __thiscall IVROverlay_012_SetOverlayTexture(void *_this, VROverlayHandle_t ulOverlayHandle, Texture_t * pTexture)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pTexture);
    return 0;
}

EVROverlayError __thiscall IVROverlay_012_ClearOverlayTexture(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_012_SetOverlayRaw(void *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvBuffer);
    push_uint32_parameter(unWidth);
    push_uint32_parameter(unHeight);
    push_uint32_parameter(unDepth);
    return 0;
}

EVROverlayError __thiscall IVROverlay_012_SetOverlayFromFile(void *_this, VROverlayHandle_t ulOverlayHandle, const char * pchFilePath)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchFilePath);
    return 0;
}

EVROverlayError __thiscall IVROverlay_012_GetOverlayTexture(void *_this, VROverlayHandle_t ulOverlayHandle, void ** pNativeTextureHandle, void * pNativeTextureRef, uint32_t * pWidth, uint32_t * pHeight, uint32_t * pNativeFormat, EGraphicsAPIConvention * pAPI, EColorSpace * pColorSpace)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pNativeTextureHandle);
    push_ptr_parameter(pNativeTextureRef);
    push_ptr_parameter(pWidth);
    push_ptr_parameter(pHeight);
    push_ptr_parameter(pNativeFormat);
    push_ptr_parameter(pAPI);
    push_ptr_parameter(pColorSpace);
    return 0;
}

EVROverlayError __thiscall IVROverlay_012_ReleaseNativeOverlayHandle(void *_this, VROverlayHandle_t ulOverlayHandle, void * pNativeTextureHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pNativeTextureHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_012_GetOverlayTextureSize(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * pWidth, uint32_t * pHeight)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pWidth);
    push_ptr_parameter(pHeight);
    return 0;
}

EVROverlayError __thiscall IVROverlay_012_CreateDashboardOverlay(void *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pMainHandle, VROverlayHandle_t * pThumbnailHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayKey);
    push_ptr_parameter(pchOverlayFriendlyName);
    push_ptr_parameter(pMainHandle);
    push_ptr_parameter(pThumbnailHandle);
    return 0;
}

bool __thiscall IVROverlay_012_IsDashboardVisible(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVROverlay_012_IsActiveDashboardOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_012_SetDashboardOverlaySceneProcess(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unProcessId);
    return 0;
}

EVROverlayError __thiscall IVROverlay_012_GetDashboardOverlaySceneProcess(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * punProcessId)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(punProcessId);
    return 0;
}

void __thiscall IVROverlay_012_ShowDashboard(void *_this, const char * pchOverlayToShow)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayToShow);
}

TrackedDeviceIndex_t __thiscall IVROverlay_012_GetPrimaryDashboardDevice(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVROverlayError __thiscall IVROverlay_012_ShowKeyboard(void *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eInputMode);
    push_uint32_parameter(eLineInputMode);
    push_ptr_parameter(pchDescription);
    push_uint32_parameter(unCharMax);
    push_ptr_parameter(pchExistingText);
    push_bool_parameter(bUseMinimalMode);
    push_uint64_parameter(uUserValue);
    return 0;
}

EVROverlayError __thiscall IVROverlay_012_ShowKeyboardForOverlay(void *_this, VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eInputMode);
    push_uint32_parameter(eLineInputMode);
    push_ptr_parameter(pchDescription);
    push_uint32_parameter(unCharMax);
    push_ptr_parameter(pchExistingText);
    push_bool_parameter(bUseMinimalMode);
    push_uint64_parameter(uUserValue);
    return 0;
}

uint32_t __thiscall IVROverlay_012_GetKeyboardText(void *_this, char * pchText, uint32_t cchText)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchText);
    push_uint32_parameter(cchText);
    return 0;
}

void __thiscall IVROverlay_012_HideKeyboard(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVROverlay_012_SetKeyboardTransformAbsolute(void *_this, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToKeyboardTransform)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eTrackingOrigin);
    push_ptr_parameter(pmatTrackingOriginToKeyboardTransform);
}

void __thiscall IVROverlay_012_SetKeyboardPositionForOverlay(void *_this, VROverlayHandle_t ulOverlayHandle, HmdRect2_t avoidRect)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_HmdRect2_parameter(avoidRect);
}

const char * __thiscall IVRTrackedCamera_002_GetCameraErrorNameFromEnum(void *_this, EVRTrackedCameraError eCameraError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eCameraError);
    return 0;
}

EVRTrackedCameraError __thiscall IVRTrackedCamera_002_HasCamera(void *_this, TrackedDeviceIndex_t nDeviceIndex, bool * pHasCamera)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(nDeviceIndex);
    push_ptr_parameter(pHasCamera);
    return 0;
}

EVRTrackedCameraError __thiscall IVRTrackedCamera_002_GetCameraFrameSize(void *_this, TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, uint32_t * pnWidth, uint32_t * pnHeight, uint32_t * pnFrameBufferSize)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(nDeviceIndex);
    push_uint32_parameter(eFrameType);
    push_ptr_parameter(pnWidth);
    push_ptr_parameter(pnHeight);
    push_ptr_parameter(pnFrameBufferSize);
    return 0;
}

EVRTrackedCameraError __thiscall IVRTrackedCamera_002_GetCameraIntrinisics(void *_this, TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, HmdVector2_t * pFocalLength, HmdVector2_t * pCenter)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(nDeviceIndex);
    push_uint32_parameter(eFrameType);
    push_ptr_parameter(pFocalLength);
    push_ptr_parameter(pCenter);
    return 0;
}

EVRTrackedCameraError __thiscall IVRTrackedCamera_002_GetCameraProjection(void *_this, TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, float flZNear, float flZFar, HmdMatrix44_t * pProjection)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(nDeviceIndex);
    push_uint32_parameter(eFrameType);
    push_float_parameter(flZNear);
    push_float_parameter(flZFar);
    push_ptr_parameter(pProjection);
    return 0;
}

EVRTrackedCameraError __thiscall IVRTrackedCamera_002_AcquireVideoStreamingService(void *_this, TrackedDeviceIndex_t nDeviceIndex, TrackedCameraHandle_t * pHandle)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(nDeviceIndex);
    push_ptr_parameter(pHandle);
    return 0;
}

EVRTrackedCameraError __thiscall IVRTrackedCamera_002_ReleaseVideoStreamingService(void *_this, TrackedCameraHandle_t hTrackedCamera)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(hTrackedCamera);
    return 0;
}

EVRTrackedCameraError __thiscall IVRTrackedCamera_002_GetVideoStreamFrameBuffer(void *_this, TrackedCameraHandle_t hTrackedCamera, EVRTrackedCameraFrameType eFrameType, void * pFrameBuffer, uint32_t nFrameBufferSize, CameraVideoStreamFrameHeader_t * pFrameHeader, uint32_t nFrameHeaderSize)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(hTrackedCamera);
    push_uint32_parameter(eFrameType);
    push_ptr_parameter(pFrameBuffer);
    push_uint32_parameter(nFrameBufferSize);
    push_ptr_parameter(pFrameHeader);
    push_uint32_parameter(nFrameHeaderSize);
    return 0;
}

void __thiscall IVRCompositor_014_SetTrackingSpace(void *_this, ETrackingUniverseOrigin eOrigin)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
}

ETrackingUniverseOrigin __thiscall IVRCompositor_014_GetTrackingSpace(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_014_WaitGetPoses(void *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pRenderPoseArray);
    push_uint32_parameter(unRenderPoseArrayCount);
    push_ptr_parameter(pGamePoseArray);
    push_uint32_parameter(unGamePoseArrayCount);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_014_GetLastPoses(void *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pRenderPoseArray);
    push_uint32_parameter(unRenderPoseArrayCount);
    push_ptr_parameter(pGamePoseArray);
    push_uint32_parameter(unGamePoseArrayCount);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_014_GetLastPoseForTrackedDeviceIndex(void *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pOutputGamePose)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_ptr_parameter(pOutputPose);
    push_ptr_parameter(pOutputGamePose);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_014_Submit(void *_this, EVREye eEye, Texture_t * pTexture, VRTextureBounds_t * pBounds, EVRSubmitFlags nSubmitFlags)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pTexture);
    push_ptr_parameter(pBounds);
    push_uint32_parameter(nSubmitFlags);
    return 0;
}

void __thiscall IVRCompositor_014_ClearLastSubmittedFrame(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_014_PostPresentHandoff(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_014_GetFrameTiming(void *_this, Compositor_FrameTiming * pTiming, uint32_t unFramesAgo)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pTiming);
    push_uint32_parameter(unFramesAgo);
    return 0;
}

float __thiscall IVRCompositor_014_GetFrameTimeRemaining(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_014_FadeToColor(void *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground)
{
    push_ptr_parameter(_this);
    push_float_parameter(fSeconds);
    push_float_parameter(fRed);
    push_float_parameter(fGreen);
    push_float_parameter(fBlue);
    push_float_parameter(fAlpha);
    push_bool_parameter(bBackground);
}

void __thiscall IVRCompositor_014_FadeGrid(void *_this, float fSeconds, bool bFadeIn)
{
    push_ptr_parameter(_this);
    push_float_parameter(fSeconds);
    push_bool_parameter(bFadeIn);
}

EVRCompositorError __thiscall IVRCompositor_014_SetSkyboxOverride(void *_this, Texture_t * pTextures, uint32_t unTextureCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pTextures);
    push_uint32_parameter(unTextureCount);
    return 0;
}

void __thiscall IVRCompositor_014_ClearSkyboxOverride(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_014_CompositorBringToFront(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_014_CompositorGoToBack(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_014_CompositorQuit(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_014_IsFullscreen(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRCompositor_014_GetCurrentSceneFocusProcess(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRCompositor_014_GetLastFrameRenderer(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVRCompositor_014_CanRenderScene(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_014_ShowMirrorWindow(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_014_HideMirrorWindow(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_014_IsMirrorWindowVisible(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_014_CompositorDumpImages(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_014_ShouldAppRenderWithLowResources(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_014_ForceInterleavedReprojectionOn(void *_this, bool bOverride)
{
    push_ptr_parameter(_this);
    push_bool_parameter(bOverride);
}

void __thiscall IVRCompositor_014_ForceReconnectProcess(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_014_SuspendRendering(void *_this, bool bSuspend)
{
    push_ptr_parameter(_this);
    push_bool_parameter(bSuspend);
}

EVROverlayError __thiscall IVROverlay_011_FindOverlay(void *_this, const char * pchOverlayKey, VROverlayHandle_t * pOverlayHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayKey);
    push_ptr_parameter(pOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_011_CreateOverlay(void *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pOverlayHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayKey);
    push_ptr_parameter(pchOverlayFriendlyName);
    push_ptr_parameter(pOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_011_DestroyOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_011_SetHighQualityOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

VROverlayHandle_t __thiscall IVROverlay_011_GetHighQualityOverlay(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVROverlay_011_GetOverlayKey(void *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(pError);
    return 0;
}

uint32_t __thiscall IVROverlay_011_GetOverlayName(void *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(pError);
    return 0;
}

EVROverlayError __thiscall IVROverlay_011_GetOverlayImageData(void *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unBufferSize, uint32_t * punWidth, uint32_t * punHeight)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvBuffer);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(punWidth);
    push_ptr_parameter(punHeight);
    return 0;
}

const char * __thiscall IVROverlay_011_GetOverlayErrorNameFromEnum(void *_this, EVROverlayError error)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(error);
    return 0;
}

EVROverlayError __thiscall IVROverlay_011_SetOverlayRenderingPid(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unPID)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unPID);
    return 0;
}

uint32_t __thiscall IVROverlay_011_GetOverlayRenderingPid(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_011_SetOverlayFlag(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eOverlayFlag);
    push_bool_parameter(bEnabled);
    return 0;
}

EVROverlayError __thiscall IVROverlay_011_GetOverlayFlag(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool * pbEnabled)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eOverlayFlag);
    push_ptr_parameter(pbEnabled);
    return 0;
}

EVROverlayError __thiscall IVROverlay_011_SetOverlayColor(void *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fRed);
    push_float_parameter(fGreen);
    push_float_parameter(fBlue);
    return 0;
}

EVROverlayError __thiscall IVROverlay_011_GetOverlayColor(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfRed, float * pfGreen, float * pfBlue)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfRed);
    push_ptr_parameter(pfGreen);
    push_ptr_parameter(pfBlue);
    return 0;
}

EVROverlayError __thiscall IVROverlay_011_SetOverlayAlpha(void *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fAlpha);
    return 0;
}

EVROverlayError __thiscall IVROverlay_011_GetOverlayAlpha(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfAlpha)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfAlpha);
    return 0;
}

EVROverlayError __thiscall IVROverlay_011_SetOverlayWidthInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fWidthInMeters);
    return 0;
}

EVROverlayError __thiscall IVROverlay_011_GetOverlayWidthInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfWidthInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfWidthInMeters);
    return 0;
}

EVROverlayError __thiscall IVROverlay_011_SetOverlayAutoCurveDistanceRangeInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fMinDistanceInMeters);
    push_float_parameter(fMaxDistanceInMeters);
    return 0;
}

EVROverlayError __thiscall IVROverlay_011_GetOverlayAutoCurveDistanceRangeInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfMinDistanceInMeters, float * pfMaxDistanceInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfMinDistanceInMeters);
    push_ptr_parameter(pfMaxDistanceInMeters);
    return 0;
}

EVROverlayError __thiscall IVROverlay_011_SetOverlayTextureColorSpace(void *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eTextureColorSpace);
    return 0;
}

EVROverlayError __thiscall IVROverlay_011_GetOverlayTextureColorSpace(void *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace * peTextureColorSpace)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peTextureColorSpace);
    return 0;
}

EVROverlayError __thiscall IVROverlay_011_SetOverlayTextureBounds(void *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pOverlayTextureBounds);
    return 0;
}

EVROverlayError __thiscall IVROverlay_011_GetOverlayTextureBounds(void *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pOverlayTextureBounds);
    return 0;
}

EVROverlayError __thiscall IVROverlay_011_GetOverlayTransformType(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType * peTransformType)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peTransformType);
    return 0;
}

EVROverlayError __thiscall IVROverlay_011_SetOverlayTransformAbsolute(void *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eTrackingOrigin);
    push_ptr_parameter(pmatTrackingOriginToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_011_GetOverlayTransformAbsolute(void *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin * peTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peTrackingOrigin);
    push_ptr_parameter(pmatTrackingOriginToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_011_SetOverlayTransformTrackedDeviceRelative(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unTrackedDevice);
    push_ptr_parameter(pmatTrackedDeviceToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_011_GetOverlayTransformTrackedDeviceRelative(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(punTrackedDevice);
    push_ptr_parameter(pmatTrackedDeviceToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_011_SetOverlayTransformTrackedDeviceComponent(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unDeviceIndex, const char * pchComponentName)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unDeviceIndex);
    push_ptr_parameter(pchComponentName);
    return 0;
}

EVROverlayError __thiscall IVROverlay_011_GetOverlayTransformTrackedDeviceComponent(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punDeviceIndex, char * pchComponentName, uint32_t unComponentNameSize)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(punDeviceIndex);
    push_ptr_parameter(pchComponentName);
    push_uint32_parameter(unComponentNameSize);
    return 0;
}

EVROverlayError __thiscall IVROverlay_011_ShowOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_011_HideOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

bool __thiscall IVROverlay_011_IsOverlayVisible(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_011_GetTransformForOverlayCoordinates(void *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdVector2_t coordinatesInOverlay, HmdMatrix34_t * pmatTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eTrackingOrigin);
    push_HmdVector2_parameter(coordinatesInOverlay);
    push_ptr_parameter(pmatTransform);
    return 0;
}

bool __thiscall IVROverlay_011_PollNextOverlayEvent(void *_this, VROverlayHandle_t ulOverlayHandle, VREvent_t * pEvent, uint32_t uncbVREvent)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pEvent);
    push_uint32_parameter(uncbVREvent);
    return 0;
}

EVROverlayError __thiscall IVROverlay_011_GetOverlayInputMethod(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod * peInputMethod)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peInputMethod);
    return 0;
}

EVROverlayError __thiscall IVROverlay_011_SetOverlayInputMethod(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eInputMethod);
    return 0;
}

EVROverlayError __thiscall IVROverlay_011_GetOverlayMouseScale(void *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvecMouseScale);
    return 0;
}

EVROverlayError __thiscall IVROverlay_011_SetOverlayMouseScale(void *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvecMouseScale);
    return 0;
}

bool __thiscall IVROverlay_011_ComputeOverlayIntersection(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t * pParams, VROverlayIntersectionResults_t * pResults)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pParams);
    push_ptr_parameter(pResults);
    return 0;
}

bool __thiscall IVROverlay_011_HandleControllerOverlayInteractionAsMouse(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unControllerDeviceIndex);
    return 0;
}

bool __thiscall IVROverlay_011_IsHoverTargetOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

VROverlayHandle_t __thiscall IVROverlay_011_GetGamepadFocusOverlay(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVROverlayError __thiscall IVROverlay_011_SetGamepadFocusOverlay(void *_this, VROverlayHandle_t ulNewFocusOverlay)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulNewFocusOverlay);
    return 0;
}

EVROverlayError __thiscall IVROverlay_011_SetOverlayNeighbor(void *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom, VROverlayHandle_t ulTo)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eDirection);
    push_uint64_parameter(ulFrom);
    push_uint64_parameter(ulTo);
    return 0;
}

EVROverlayError __thiscall IVROverlay_011_MoveGamepadFocusToNeighbor(void *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eDirection);
    push_uint64_parameter(ulFrom);
    return 0;
}

EVROverlayError __thiscall IVROverlay_011_SetOverlayTexture(void *_this, VROverlayHandle_t ulOverlayHandle, Texture_t * pTexture)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pTexture);
    return 0;
}

EVROverlayError __thiscall IVROverlay_011_ClearOverlayTexture(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_011_SetOverlayRaw(void *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvBuffer);
    push_uint32_parameter(unWidth);
    push_uint32_parameter(unHeight);
    push_uint32_parameter(unDepth);
    return 0;
}

EVROverlayError __thiscall IVROverlay_011_SetOverlayFromFile(void *_this, VROverlayHandle_t ulOverlayHandle, const char * pchFilePath)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchFilePath);
    return 0;
}

EVROverlayError __thiscall IVROverlay_011_GetOverlayTexture(void *_this, VROverlayHandle_t ulOverlayHandle, void ** pNativeTextureHandle, void * pNativeTextureRef, uint32_t * pWidth, uint32_t * pHeight, uint32_t * pNativeFormat, EGraphicsAPIConvention * pAPI, EColorSpace * pColorSpace)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pNativeTextureHandle);
    push_ptr_parameter(pNativeTextureRef);
    push_ptr_parameter(pWidth);
    push_ptr_parameter(pHeight);
    push_ptr_parameter(pNativeFormat);
    push_ptr_parameter(pAPI);
    push_ptr_parameter(pColorSpace);
    return 0;
}

EVROverlayError __thiscall IVROverlay_011_ReleaseNativeOverlayHandle(void *_this, VROverlayHandle_t ulOverlayHandle, void * pNativeTextureHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pNativeTextureHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_011_CreateDashboardOverlay(void *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pMainHandle, VROverlayHandle_t * pThumbnailHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayKey);
    push_ptr_parameter(pchOverlayFriendlyName);
    push_ptr_parameter(pMainHandle);
    push_ptr_parameter(pThumbnailHandle);
    return 0;
}

bool __thiscall IVROverlay_011_IsDashboardVisible(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVROverlay_011_IsActiveDashboardOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_011_SetDashboardOverlaySceneProcess(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unProcessId);
    return 0;
}

EVROverlayError __thiscall IVROverlay_011_GetDashboardOverlaySceneProcess(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * punProcessId)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(punProcessId);
    return 0;
}

void __thiscall IVROverlay_011_ShowDashboard(void *_this, const char * pchOverlayToShow)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayToShow);
}

TrackedDeviceIndex_t __thiscall IVROverlay_011_GetPrimaryDashboardDevice(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVROverlayError __thiscall IVROverlay_011_ShowKeyboard(void *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eInputMode);
    push_uint32_parameter(eLineInputMode);
    push_ptr_parameter(pchDescription);
    push_uint32_parameter(unCharMax);
    push_ptr_parameter(pchExistingText);
    push_bool_parameter(bUseMinimalMode);
    push_uint64_parameter(uUserValue);
    return 0;
}

EVROverlayError __thiscall IVROverlay_011_ShowKeyboardForOverlay(void *_this, VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eInputMode);
    push_uint32_parameter(eLineInputMode);
    push_ptr_parameter(pchDescription);
    push_uint32_parameter(unCharMax);
    push_ptr_parameter(pchExistingText);
    push_bool_parameter(bUseMinimalMode);
    push_uint64_parameter(uUserValue);
    return 0;
}

uint32_t __thiscall IVROverlay_011_GetKeyboardText(void *_this, char * pchText, uint32_t cchText)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchText);
    push_uint32_parameter(cchText);
    return 0;
}

void __thiscall IVROverlay_011_HideKeyboard(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVROverlay_011_SetKeyboardTransformAbsolute(void *_this, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToKeyboardTransform)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eTrackingOrigin);
    push_ptr_parameter(pmatTrackingOriginToKeyboardTransform);
}

void __thiscall IVROverlay_011_SetKeyboardPositionForOverlay(void *_this, VROverlayHandle_t ulOverlayHandle, HmdRect2_t avoidRect)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_HmdRect2_parameter(avoidRect);
}

void __thiscall IVRCompositor_013_SetTrackingSpace(void *_this, ETrackingUniverseOrigin eOrigin)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
}

ETrackingUniverseOrigin __thiscall IVRCompositor_013_GetTrackingSpace(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_013_WaitGetPoses(void *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pRenderPoseArray);
    push_uint32_parameter(unRenderPoseArrayCount);
    push_ptr_parameter(pGamePoseArray);
    push_uint32_parameter(unGamePoseArrayCount);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_013_GetLastPoses(void *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pRenderPoseArray);
    push_uint32_parameter(unRenderPoseArrayCount);
    push_ptr_parameter(pGamePoseArray);
    push_uint32_parameter(unGamePoseArrayCount);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_013_GetLastPoseForTrackedDeviceIndex(void *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pOutputGamePose)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_ptr_parameter(pOutputPose);
    push_ptr_parameter(pOutputGamePose);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_013_Submit(void *_this, EVREye eEye, Texture_t * pTexture, VRTextureBounds_t * pBounds, EVRSubmitFlags nSubmitFlags)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pTexture);
    push_ptr_parameter(pBounds);
    push_uint32_parameter(nSubmitFlags);
    return 0;
}

void __thiscall IVRCompositor_013_ClearLastSubmittedFrame(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_013_PostPresentHandoff(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_013_GetFrameTiming(void *_this, Compositor_FrameTiming * pTiming, uint32_t unFramesAgo)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pTiming);
    push_uint32_parameter(unFramesAgo);
    return 0;
}

float __thiscall IVRCompositor_013_GetFrameTimeRemaining(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_013_FadeToColor(void *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground)
{
    push_ptr_parameter(_this);
    push_float_parameter(fSeconds);
    push_float_parameter(fRed);
    push_float_parameter(fGreen);
    push_float_parameter(fBlue);
    push_float_parameter(fAlpha);
    push_bool_parameter(bBackground);
}

void __thiscall IVRCompositor_013_FadeGrid(void *_this, float fSeconds, bool bFadeIn)
{
    push_ptr_parameter(_this);
    push_float_parameter(fSeconds);
    push_bool_parameter(bFadeIn);
}

EVRCompositorError __thiscall IVRCompositor_013_SetSkyboxOverride(void *_this, Texture_t * pTextures, uint32_t unTextureCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pTextures);
    push_uint32_parameter(unTextureCount);
    return 0;
}

void __thiscall IVRCompositor_013_ClearSkyboxOverride(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_013_CompositorBringToFront(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_013_CompositorGoToBack(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_013_CompositorQuit(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_013_IsFullscreen(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRCompositor_013_GetCurrentSceneFocusProcess(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRCompositor_013_GetLastFrameRenderer(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVRCompositor_013_CanRenderScene(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_013_ShowMirrorWindow(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_013_HideMirrorWindow(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_013_IsMirrorWindowVisible(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_013_CompositorDumpImages(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_013_ShouldAppRenderWithLowResources(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_013_ForceInterleavedReprojectionOn(void *_this, bool bOverride)
{
    push_ptr_parameter(_this);
    push_bool_parameter(bOverride);
}

void __thiscall IVRSystem_011_GetRecommendedRenderTargetSize(void *_this, uint32_t * pnWidth, uint32_t * pnHeight)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pnWidth);
    push_ptr_parameter(pnHeight);
}

HmdMatrix44_t *__thiscall IVRSystem_011_GetProjectionMatrix(void *_this, HmdMatrix44_t *_r, EVREye eEye, float fNearZ, float fFarZ, EGraphicsAPIConvention eProjType)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(eEye);
    push_float_parameter(fNearZ);
    push_float_parameter(fFarZ);
    push_uint32_parameter(eProjType);
    return 0;
}

void __thiscall IVRSystem_011_GetProjectionRaw(void *_this, EVREye eEye, float * pfLeft, float * pfRight, float * pfTop, float * pfBottom)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pfLeft);
    push_ptr_parameter(pfRight);
    push_ptr_parameter(pfTop);
    push_ptr_parameter(pfBottom);
}

DistortionCoordinates_t *__thiscall IVRSystem_011_ComputeDistortion(void *_this, DistortionCoordinates_t *_r, EVREye eEye, float fU, float fV)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(eEye);
    push_float_parameter(fU);
    push_float_parameter(fV);
    return 0;
}

HmdMatrix34_t *__thiscall IVRSystem_011_GetEyeToHeadTransform(void *_this, HmdMatrix34_t *_r, EVREye eEye)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(eEye);
    return 0;
}

bool __thiscall IVRSystem_011_GetTimeSinceLastVsync(void *_this, float * pfSecondsSinceLastVsync, uint64_t * pulFrameCounter)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pfSecondsSinceLastVsync);
    push_ptr_parameter(pulFrameCounter);
    return 0;
}

int32_t __thiscall IVRSystem_011_GetD3D9AdapterIndex(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRSystem_011_GetDXGIOutputInfo(void *_this, int32_t * pnAdapterIndex)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pnAdapterIndex);
}

bool __thiscall IVRSystem_011_IsDisplayOnDesktop(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVRSystem_011_SetDisplayVisibility(void *_this, bool bIsVisibleOnDesktop)
{
    push_ptr_parameter(_this);
    push_bool_parameter(bIsVisibleOnDesktop);
    return 0;
}

void __thiscall IVRSystem_011_GetDeviceToAbsoluteTrackingPose(void *_this, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t * pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
    push_float_parameter(fPredictedSecondsToPhotonsFromNow);
    push_ptr_parameter(pTrackedDevicePoseArray);
    push_uint32_parameter(unTrackedDevicePoseArrayCount);
}

void __thiscall IVRSystem_011_ResetSeatedZeroPose(void *_this)
{
    push_ptr_parameter(_this);
}

HmdMatrix34_t *__thiscall IVRSystem_011_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(void *_this, HmdMatrix34_t *_r)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    return 0;
}

HmdMatrix34_t *__thiscall IVRSystem_011_GetRawZeroPoseToStandingAbsoluteTrackingPose(void *_this, HmdMatrix34_t *_r)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    return 0;
}

uint32_t __thiscall IVRSystem_011_GetSortedTrackedDeviceIndicesOfClass(void *_this, ETrackedDeviceClass eTrackedDeviceClass, TrackedDeviceIndex_t * punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eTrackedDeviceClass);
    push_ptr_parameter(punTrackedDeviceIndexArray);
    push_uint32_parameter(unTrackedDeviceIndexArrayCount);
    push_uint32_parameter(unRelativeToTrackedDeviceIndex);
    return 0;
}

EDeviceActivityLevel __thiscall IVRSystem_011_GetTrackedDeviceActivityLevel(void *_this, TrackedDeviceIndex_t unDeviceId)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceId);
    return 0;
}

void __thiscall IVRSystem_011_ApplyTransform(void *_this, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pTrackedDevicePose, HmdMatrix34_t * pTransform)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pOutputPose);
    push_ptr_parameter(pTrackedDevicePose);
    push_ptr_parameter(pTransform);
}

TrackedDeviceIndex_t __thiscall IVRSystem_011_GetTrackedDeviceIndexForControllerRole(void *_this, ETrackedControllerRole unDeviceType)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceType);
    return 0;
}

ETrackedControllerRole __thiscall IVRSystem_011_GetControllerRoleForTrackedDeviceIndex(void *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    return 0;
}

ETrackedDeviceClass __thiscall IVRSystem_011_GetTrackedDeviceClass(void *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    return 0;
}

bool __thiscall IVRSystem_011_IsTrackedDeviceConnected(void *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    return 0;
}

bool __thiscall IVRSystem_011_GetBoolTrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

float __thiscall IVRSystem_011_GetFloatTrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

int32_t __thiscall IVRSystem_011_GetInt32TrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

uint64_t __thiscall IVRSystem_011_GetUint64TrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

HmdMatrix34_t *__thiscall IVRSystem_011_GetMatrix34TrackedDeviceProperty(void *_this, HmdMatrix34_t *_r, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

uint32_t __thiscall IVRSystem_011_GetStringTrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, char * pchValue, uint32_t unBufferSize, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(pError);
    return 0;
}

const char * __thiscall IVRSystem_011_GetPropErrorNameFromEnum(void *_this, ETrackedPropertyError error)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(error);
    return 0;
}

bool __thiscall IVRSystem_011_PollNextEvent(void *_this, VREvent_t * pEvent, uint32_t uncbVREvent)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pEvent);
    push_uint32_parameter(uncbVREvent);
    return 0;
}

bool __thiscall IVRSystem_011_PollNextEventWithPose(void *_this, ETrackingUniverseOrigin eOrigin, VREvent_t * pEvent, uint32_t uncbVREvent, TrackedDevicePose_t * pTrackedDevicePose)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
    push_ptr_parameter(pEvent);
    push_uint32_parameter(uncbVREvent);
    push_ptr_parameter(pTrackedDevicePose);
    return 0;
}

const char * __thiscall IVRSystem_011_GetEventTypeNameFromEnum(void *_this, EVREventType eType)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eType);
    return 0;
}

HiddenAreaMesh_t *__thiscall IVRSystem_011_GetHiddenAreaMesh(void *_this, HiddenAreaMesh_t *_r, EVREye eEye)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(eEye);
    return 0;
}

bool __thiscall IVRSystem_011_GetControllerState(void *_this, TrackedDeviceIndex_t unControllerDeviceIndex, VRControllerState_t * pControllerState)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unControllerDeviceIndex);
    push_ptr_parameter(pControllerState);
    return 0;
}

bool __thiscall IVRSystem_011_GetControllerStateWithPose(void *_this, ETrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, VRControllerState_t * pControllerState, TrackedDevicePose_t * pTrackedDevicePose)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
    push_uint32_parameter(unControllerDeviceIndex);
    push_ptr_parameter(pControllerState);
    push_ptr_parameter(pTrackedDevicePose);
    return 0;
}

void __thiscall IVRSystem_011_TriggerHapticPulse(void *_this, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unControllerDeviceIndex);
    push_uint32_parameter(unAxisId);
    push_uint32_parameter(usDurationMicroSec);
}

const char * __thiscall IVRSystem_011_GetButtonIdNameFromEnum(void *_this, EVRButtonId eButtonId)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eButtonId);
    return 0;
}

const char * __thiscall IVRSystem_011_GetControllerAxisTypeNameFromEnum(void *_this, EVRControllerAxisType eAxisType)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eAxisType);
    return 0;
}

bool __thiscall IVRSystem_011_CaptureInputFocus(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRSystem_011_ReleaseInputFocus(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRSystem_011_IsInputFocusCapturedByAnotherProcess(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRSystem_011_DriverDebugRequest(void *_this, TrackedDeviceIndex_t unDeviceIndex, const char * pchRequest, char * pchResponseBuffer, uint32_t unResponseBufferSize)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_ptr_parameter(pchRequest);
    push_ptr_parameter(pchResponseBuffer);
    push_uint32_parameter(unResponseBufferSize);
    return 0;
}

EVRFirmwareError __thiscall IVRSystem_011_PerformFirmwareUpdate(void *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    return 0;
}

void __thiscall IVRSystem_011_AcknowledgeQuit_Exiting(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRSystem_011_AcknowledgeQuit_UserPrompt(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRSystem_011_PerformanceTestEnableCapture(void *_this, bool bEnable)
{
    push_ptr_parameter(_this);
    push_bool_parameter(bEnable);
}

void __thiscall IVRSystem_011_PerformanceTestReportFidelityLevelChange(void *_this, int nFidelityLevel)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(nFidelityLevel);
}

EVRApplicationError __thiscall IVRApplications_004_AddApplicationManifest(void *_this, const char * pchApplicationManifestFullPath, bool bTemporary)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchApplicationManifestFullPath);
    push_bool_parameter(bTemporary);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_004_RemoveApplicationManifest(void *_this, const char * pchApplicationManifestFullPath)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchApplicationManifestFullPath);
    return 0;
}

bool __thiscall IVRApplications_004_IsApplicationInstalled(void *_this, const char * pchAppKey)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    return 0;
}

uint32_t __thiscall IVRApplications_004_GetApplicationCount(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_004_GetApplicationKeyByIndex(void *_this, uint32_t unApplicationIndex, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unApplicationIndex);
    push_ptr_parameter(pchAppKeyBuffer);
    push_uint32_parameter(unAppKeyBufferLen);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_004_GetApplicationKeyByProcessId(void *_this, uint32_t unProcessId, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unProcessId);
    push_ptr_parameter(pchAppKeyBuffer);
    push_uint32_parameter(unAppKeyBufferLen);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_004_LaunchApplication(void *_this, const char * pchAppKey)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_004_LaunchDashboardOverlay(void *_this, const char * pchAppKey)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    return 0;
}

bool __thiscall IVRApplications_004_CancelApplicationLaunch(void *_this, const char * pchAppKey)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_004_IdentifyApplication(void *_this, uint32_t unProcessId, const char * pchAppKey)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unProcessId);
    push_ptr_parameter(pchAppKey);
    return 0;
}

uint32_t __thiscall IVRApplications_004_GetApplicationProcessId(void *_this, const char * pchAppKey)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    return 0;
}

const char * __thiscall IVRApplications_004_GetApplicationsErrorNameFromEnum(void *_this, EVRApplicationError error)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(error);
    return 0;
}

uint32_t __thiscall IVRApplications_004_GetApplicationPropertyString(void *_this, const char * pchAppKey, EVRApplicationProperty eProperty, char * pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen, EVRApplicationError * peError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    push_uint32_parameter(eProperty);
    push_ptr_parameter(pchPropertyValueBuffer);
    push_uint32_parameter(unPropertyValueBufferLen);
    push_ptr_parameter(peError);
    return 0;
}

bool __thiscall IVRApplications_004_GetApplicationPropertyBool(void *_this, const char * pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError * peError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    push_uint32_parameter(eProperty);
    push_ptr_parameter(peError);
    return 0;
}

uint64_t __thiscall IVRApplications_004_GetApplicationPropertyUint64(void *_this, const char * pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError * peError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    push_uint32_parameter(eProperty);
    push_ptr_parameter(peError);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_004_SetApplicationAutoLaunch(void *_this, const char * pchAppKey, bool bAutoLaunch)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    push_bool_parameter(bAutoLaunch);
    return 0;
}

bool __thiscall IVRApplications_004_GetApplicationAutoLaunch(void *_this, const char * pchAppKey)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_004_GetStartingApplication(void *_this, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKeyBuffer);
    push_uint32_parameter(unAppKeyBufferLen);
    return 0;
}

EVRApplicationTransitionState __thiscall IVRApplications_004_GetTransitionState(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_004_PerformApplicationPrelaunchCheck(void *_this, const char * pchAppKey)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    return 0;
}

const char * __thiscall IVRApplications_004_GetApplicationsTransitionStateNameFromEnum(void *_this, EVRApplicationTransitionState state)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(state);
    return 0;
}

bool __thiscall IVRApplications_004_IsQuitUserPromptRequested(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_004_LaunchInternalProcess(void *_this, const char * pchBinaryPath, const char * pchArguments, const char * pchWorkingDirectory)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchBinaryPath);
    push_ptr_parameter(pchArguments);
    push_ptr_parameter(pchWorkingDirectory);
    return 0;
}

EVROverlayError __thiscall IVROverlay_010_FindOverlay(void *_this, const char * pchOverlayKey, VROverlayHandle_t * pOverlayHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayKey);
    push_ptr_parameter(pOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_010_CreateOverlay(void *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pOverlayHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayKey);
    push_ptr_parameter(pchOverlayFriendlyName);
    push_ptr_parameter(pOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_010_DestroyOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_010_SetHighQualityOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

VROverlayHandle_t __thiscall IVROverlay_010_GetHighQualityOverlay(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVROverlay_010_GetOverlayKey(void *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(pError);
    return 0;
}

uint32_t __thiscall IVROverlay_010_GetOverlayName(void *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(pError);
    return 0;
}

EVROverlayError __thiscall IVROverlay_010_GetOverlayImageData(void *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unBufferSize, uint32_t * punWidth, uint32_t * punHeight)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvBuffer);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(punWidth);
    push_ptr_parameter(punHeight);
    return 0;
}

const char * __thiscall IVROverlay_010_GetOverlayErrorNameFromEnum(void *_this, EVROverlayError error)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(error);
    return 0;
}

EVROverlayError __thiscall IVROverlay_010_SetOverlayFlag(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eOverlayFlag);
    push_bool_parameter(bEnabled);
    return 0;
}

EVROverlayError __thiscall IVROverlay_010_GetOverlayFlag(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool * pbEnabled)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eOverlayFlag);
    push_ptr_parameter(pbEnabled);
    return 0;
}

EVROverlayError __thiscall IVROverlay_010_SetOverlayColor(void *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fRed);
    push_float_parameter(fGreen);
    push_float_parameter(fBlue);
    return 0;
}

EVROverlayError __thiscall IVROverlay_010_GetOverlayColor(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfRed, float * pfGreen, float * pfBlue)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfRed);
    push_ptr_parameter(pfGreen);
    push_ptr_parameter(pfBlue);
    return 0;
}

EVROverlayError __thiscall IVROverlay_010_SetOverlayAlpha(void *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fAlpha);
    return 0;
}

EVROverlayError __thiscall IVROverlay_010_GetOverlayAlpha(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfAlpha)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfAlpha);
    return 0;
}

EVROverlayError __thiscall IVROverlay_010_SetOverlayWidthInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fWidthInMeters);
    return 0;
}

EVROverlayError __thiscall IVROverlay_010_GetOverlayWidthInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfWidthInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfWidthInMeters);
    return 0;
}

EVROverlayError __thiscall IVROverlay_010_SetOverlayAutoCurveDistanceRangeInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fMinDistanceInMeters);
    push_float_parameter(fMaxDistanceInMeters);
    return 0;
}

EVROverlayError __thiscall IVROverlay_010_GetOverlayAutoCurveDistanceRangeInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfMinDistanceInMeters, float * pfMaxDistanceInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfMinDistanceInMeters);
    push_ptr_parameter(pfMaxDistanceInMeters);
    return 0;
}

EVROverlayError __thiscall IVROverlay_010_SetOverlayTextureColorSpace(void *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eTextureColorSpace);
    return 0;
}

EVROverlayError __thiscall IVROverlay_010_GetOverlayTextureColorSpace(void *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace * peTextureColorSpace)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peTextureColorSpace);
    return 0;
}

EVROverlayError __thiscall IVROverlay_010_SetOverlayTextureBounds(void *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pOverlayTextureBounds);
    return 0;
}

EVROverlayError __thiscall IVROverlay_010_GetOverlayTextureBounds(void *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pOverlayTextureBounds);
    return 0;
}

EVROverlayError __thiscall IVROverlay_010_GetOverlayTransformType(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType * peTransformType)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peTransformType);
    return 0;
}

EVROverlayError __thiscall IVROverlay_010_SetOverlayTransformAbsolute(void *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eTrackingOrigin);
    push_ptr_parameter(pmatTrackingOriginToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_010_GetOverlayTransformAbsolute(void *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin * peTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peTrackingOrigin);
    push_ptr_parameter(pmatTrackingOriginToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_010_SetOverlayTransformTrackedDeviceRelative(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unTrackedDevice);
    push_ptr_parameter(pmatTrackedDeviceToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_010_GetOverlayTransformTrackedDeviceRelative(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(punTrackedDevice);
    push_ptr_parameter(pmatTrackedDeviceToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_010_SetOverlayTransformTrackedDeviceComponent(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unDeviceIndex, const char * pchComponentName)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unDeviceIndex);
    push_ptr_parameter(pchComponentName);
    return 0;
}

EVROverlayError __thiscall IVROverlay_010_GetOverlayTransformTrackedDeviceComponent(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punDeviceIndex, char * pchComponentName, uint32_t unComponentNameSize)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(punDeviceIndex);
    push_ptr_parameter(pchComponentName);
    push_uint32_parameter(unComponentNameSize);
    return 0;
}

EVROverlayError __thiscall IVROverlay_010_ShowOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_010_HideOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

bool __thiscall IVROverlay_010_IsOverlayVisible(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_010_GetTransformForOverlayCoordinates(void *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdVector2_t coordinatesInOverlay, HmdMatrix34_t * pmatTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eTrackingOrigin);
    push_HmdVector2_parameter(coordinatesInOverlay);
    push_ptr_parameter(pmatTransform);
    return 0;
}

bool __thiscall IVROverlay_010_PollNextOverlayEvent(void *_this, VROverlayHandle_t ulOverlayHandle, VREvent_t * pEvent, uint32_t uncbVREvent)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pEvent);
    push_uint32_parameter(uncbVREvent);
    return 0;
}

EVROverlayError __thiscall IVROverlay_010_GetOverlayInputMethod(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod * peInputMethod)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peInputMethod);
    return 0;
}

EVROverlayError __thiscall IVROverlay_010_SetOverlayInputMethod(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eInputMethod);
    return 0;
}

EVROverlayError __thiscall IVROverlay_010_GetOverlayMouseScale(void *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvecMouseScale);
    return 0;
}

EVROverlayError __thiscall IVROverlay_010_SetOverlayMouseScale(void *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvecMouseScale);
    return 0;
}

bool __thiscall IVROverlay_010_ComputeOverlayIntersection(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t * pParams, VROverlayIntersectionResults_t * pResults)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pParams);
    push_ptr_parameter(pResults);
    return 0;
}

bool __thiscall IVROverlay_010_HandleControllerOverlayInteractionAsMouse(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unControllerDeviceIndex);
    return 0;
}

bool __thiscall IVROverlay_010_IsHoverTargetOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

VROverlayHandle_t __thiscall IVROverlay_010_GetGamepadFocusOverlay(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVROverlayError __thiscall IVROverlay_010_SetGamepadFocusOverlay(void *_this, VROverlayHandle_t ulNewFocusOverlay)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulNewFocusOverlay);
    return 0;
}

EVROverlayError __thiscall IVROverlay_010_SetOverlayNeighbor(void *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom, VROverlayHandle_t ulTo)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eDirection);
    push_uint64_parameter(ulFrom);
    push_uint64_parameter(ulTo);
    return 0;
}

EVROverlayError __thiscall IVROverlay_010_MoveGamepadFocusToNeighbor(void *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eDirection);
    push_uint64_parameter(ulFrom);
    return 0;
}

EVROverlayError __thiscall IVROverlay_010_SetOverlayTexture(void *_this, VROverlayHandle_t ulOverlayHandle, Texture_t * pTexture)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pTexture);
    return 0;
}

EVROverlayError __thiscall IVROverlay_010_ClearOverlayTexture(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_010_SetOverlayRaw(void *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvBuffer);
    push_uint32_parameter(unWidth);
    push_uint32_parameter(unHeight);
    push_uint32_parameter(unDepth);
    return 0;
}

EVROverlayError __thiscall IVROverlay_010_SetOverlayFromFile(void *_this, VROverlayHandle_t ulOverlayHandle, const char * pchFilePath)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchFilePath);
    return 0;
}

EVROverlayError __thiscall IVROverlay_010_CreateDashboardOverlay(void *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pMainHandle, VROverlayHandle_t * pThumbnailHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayKey);
    push_ptr_parameter(pchOverlayFriendlyName);
    push_ptr_parameter(pMainHandle);
    push_ptr_parameter(pThumbnailHandle);
    return 0;
}

bool __thiscall IVROverlay_010_IsDashboardVisible(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVROverlay_010_IsActiveDashboardOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_010_SetDashboardOverlaySceneProcess(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unProcessId);
    return 0;
}

EVROverlayError __thiscall IVROverlay_010_GetDashboardOverlaySceneProcess(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * punProcessId)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(punProcessId);
    return 0;
}

void __thiscall IVROverlay_010_ShowDashboard(void *_this, const char * pchOverlayToShow)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayToShow);
}

TrackedDeviceIndex_t __thiscall IVROverlay_010_GetPrimaryDashboardDevice(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVROverlayError __thiscall IVROverlay_010_ShowKeyboard(void *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eInputMode);
    push_uint32_parameter(eLineInputMode);
    push_ptr_parameter(pchDescription);
    push_uint32_parameter(unCharMax);
    push_ptr_parameter(pchExistingText);
    push_bool_parameter(bUseMinimalMode);
    push_uint64_parameter(uUserValue);
    return 0;
}

EVROverlayError __thiscall IVROverlay_010_ShowKeyboardForOverlay(void *_this, VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eInputMode);
    push_uint32_parameter(eLineInputMode);
    push_ptr_parameter(pchDescription);
    push_uint32_parameter(unCharMax);
    push_ptr_parameter(pchExistingText);
    push_bool_parameter(bUseMinimalMode);
    push_uint64_parameter(uUserValue);
    return 0;
}

uint32_t __thiscall IVROverlay_010_GetKeyboardText(void *_this, char * pchText, uint32_t cchText)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchText);
    push_uint32_parameter(cchText);
    return 0;
}

void __thiscall IVROverlay_010_HideKeyboard(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVROverlay_010_SetKeyboardTransformAbsolute(void *_this, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToKeyboardTransform)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eTrackingOrigin);
    push_ptr_parameter(pmatTrackingOriginToKeyboardTransform);
}

void __thiscall IVROverlay_010_SetKeyboardPositionForOverlay(void *_this, VROverlayHandle_t ulOverlayHandle, HmdRect2_t avoidRect)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_HmdRect2_parameter(avoidRect);
}

EVRRenderModelError __thiscall IVRRenderModels_004_LoadRenderModel_Async(void *_this, const char * pchRenderModelName, RenderModel_t ** ppRenderModel)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchRenderModelName);
    push_ptr_parameter(ppRenderModel);
    return 0;
}

void __thiscall IVRRenderModels_004_FreeRenderModel(void *_this, RenderModel_t * pRenderModel)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pRenderModel);
}

EVRRenderModelError __thiscall IVRRenderModels_004_LoadTexture_Async(void *_this, TextureID_t textureId, RenderModel_TextureMap_t ** ppTexture)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(textureId);
    push_ptr_parameter(ppTexture);
    return 0;
}

void __thiscall IVRRenderModels_004_FreeTexture(void *_this, RenderModel_TextureMap_t * pTexture)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pTexture);
}

EVRRenderModelError __thiscall IVRRenderModels_004_LoadTextureD3D11_Async(void *_this, TextureID_t textureId, void * pD3D11Device, void ** ppD3D11Texture2D)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(textureId);
    push_ptr_parameter(pD3D11Device);
    push_ptr_parameter(ppD3D11Texture2D);
    return 0;
}

void __thiscall IVRRenderModels_004_FreeTextureD3D11(void *_this, void * pD3D11Texture2D)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pD3D11Texture2D);
}

uint32_t __thiscall IVRRenderModels_004_GetRenderModelName(void *_this, uint32_t unRenderModelIndex, char * pchRenderModelName, uint32_t unRenderModelNameLen)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unRenderModelIndex);
    push_ptr_parameter(pchRenderModelName);
    push_uint32_parameter(unRenderModelNameLen);
    return 0;
}

uint32_t __thiscall IVRRenderModels_004_GetRenderModelCount(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRRenderModels_004_GetComponentCount(void *_this, const char * pchRenderModelName)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchRenderModelName);
    return 0;
}

uint32_t __thiscall IVRRenderModels_004_GetComponentName(void *_this, const char * pchRenderModelName, uint32_t unComponentIndex, char * pchComponentName, uint32_t unComponentNameLen)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchRenderModelName);
    push_uint32_parameter(unComponentIndex);
    push_ptr_parameter(pchComponentName);
    push_uint32_parameter(unComponentNameLen);
    return 0;
}

uint64_t __thiscall IVRRenderModels_004_GetComponentButtonMask(void *_this, const char * pchRenderModelName, const char * pchComponentName)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchRenderModelName);
    push_ptr_parameter(pchComponentName);
    return 0;
}

uint32_t __thiscall IVRRenderModels_004_GetComponentRenderModelName(void *_this, const char * pchRenderModelName, const char * pchComponentName, char * pchComponentRenderModelName, uint32_t unComponentRenderModelNameLen)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchRenderModelName);
    push_ptr_parameter(pchComponentName);
    push_ptr_parameter(pchComponentRenderModelName);
    push_uint32_parameter(unComponentRenderModelNameLen);
    return 0;
}

bool __thiscall IVRRenderModels_004_GetComponentState(void *_this, const char * pchRenderModelName, const char * pchComponentName, VRControllerState_t * pControllerState, RenderModel_ControllerMode_State_t * pState, RenderModel_ComponentState_t * pComponentState)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchRenderModelName);
    push_ptr_parameter(pchComponentName);
    push_ptr_parameter(pControllerState);
    push_ptr_parameter(pState);
    push_ptr_parameter(pComponentState);
    return 0;
}

bool __thiscall IVRRenderModels_004_RenderModelHasComponent(void *_this, const char * pchRenderModelName, const char * pchComponentName)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchRenderModelName);
    push_ptr_parameter(pchComponentName);
    return 0;
}

void __thiscall IVRCompositor_012_SetTrackingSpace(void *_this, ETrackingUniverseOrigin eOrigin)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
}

ETrackingUniverseOrigin __thiscall IVRCompositor_012_GetTrackingSpace(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_012_WaitGetPoses(void *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pRenderPoseArray);
    push_uint32_parameter(unRenderPoseArrayCount);
    push_ptr_parameter(pGamePoseArray);
    push_uint32_parameter(unGamePoseArrayCount);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_012_GetLastPoses(void *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pRenderPoseArray);
    push_uint32_parameter(unRenderPoseArrayCount);
    push_ptr_parameter(pGamePoseArray);
    push_uint32_parameter(unGamePoseArrayCount);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_012_GetLastPoseForTrackedDeviceIndex(void *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pOutputGamePose)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_ptr_parameter(pOutputPose);
    push_ptr_parameter(pOutputGamePose);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_012_Submit(void *_this, EVREye eEye, Texture_t * pTexture, VRTextureBounds_t * pBounds, EVRSubmitFlags nSubmitFlags)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pTexture);
    push_ptr_parameter(pBounds);
    push_uint32_parameter(nSubmitFlags);
    return 0;
}

void __thiscall IVRCompositor_012_ClearLastSubmittedFrame(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_012_PostPresentHandoff(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_012_GetFrameTiming(void *_this, Compositor_FrameTiming * pTiming, uint32_t unFramesAgo)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pTiming);
    push_uint32_parameter(unFramesAgo);
    return 0;
}

float __thiscall IVRCompositor_012_GetFrameTimeRemaining(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_012_FadeToColor(void *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground)
{
    push_ptr_parameter(_this);
    push_float_parameter(fSeconds);
    push_float_parameter(fRed);
    push_float_parameter(fGreen);
    push_float_parameter(fBlue);
    push_float_parameter(fAlpha);
    push_bool_parameter(bBackground);
}

void __thiscall IVRCompositor_012_FadeGrid(void *_this, float fSeconds, bool bFadeIn)
{
    push_ptr_parameter(_this);
    push_float_parameter(fSeconds);
    push_bool_parameter(bFadeIn);
}

EVRCompositorError __thiscall IVRCompositor_012_SetSkyboxOverride(void *_this, Texture_t * pTextures, uint32_t unTextureCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pTextures);
    push_uint32_parameter(unTextureCount);
    return 0;
}

void __thiscall IVRCompositor_012_ClearSkyboxOverride(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_012_CompositorBringToFront(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_012_CompositorGoToBack(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_012_CompositorQuit(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_012_IsFullscreen(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRCompositor_012_GetCurrentSceneFocusProcess(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRCompositor_012_GetLastFrameRenderer(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVRCompositor_012_CanRenderScene(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_012_ShowMirrorWindow(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_012_HideMirrorWindow(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_012_IsMirrorWindowVisible(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_012_CompositorDumpImages(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_012_ShouldAppRenderWithLowResources(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_003_AddApplicationManifest(void *_this, const char * pchApplicationManifestFullPath, bool bTemporary)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchApplicationManifestFullPath);
    push_bool_parameter(bTemporary);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_003_RemoveApplicationManifest(void *_this, const char * pchApplicationManifestFullPath)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchApplicationManifestFullPath);
    return 0;
}

bool __thiscall IVRApplications_003_IsApplicationInstalled(void *_this, const char * pchAppKey)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    return 0;
}

uint32_t __thiscall IVRApplications_003_GetApplicationCount(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_003_GetApplicationKeyByIndex(void *_this, uint32_t unApplicationIndex, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unApplicationIndex);
    push_ptr_parameter(pchAppKeyBuffer);
    push_uint32_parameter(unAppKeyBufferLen);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_003_GetApplicationKeyByProcessId(void *_this, uint32_t unProcessId, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unProcessId);
    push_ptr_parameter(pchAppKeyBuffer);
    push_uint32_parameter(unAppKeyBufferLen);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_003_LaunchApplication(void *_this, const char * pchAppKey)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_003_LaunchDashboardOverlay(void *_this, const char * pchAppKey)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_003_IdentifyApplication(void *_this, uint32_t unProcessId, const char * pchAppKey)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unProcessId);
    push_ptr_parameter(pchAppKey);
    return 0;
}

uint32_t __thiscall IVRApplications_003_GetApplicationProcessId(void *_this, const char * pchAppKey)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    return 0;
}

const char * __thiscall IVRApplications_003_GetApplicationsErrorNameFromEnum(void *_this, EVRApplicationError error)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(error);
    return 0;
}

uint32_t __thiscall IVRApplications_003_GetApplicationPropertyString(void *_this, const char * pchAppKey, EVRApplicationProperty eProperty, char * pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen, EVRApplicationError * peError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    push_uint32_parameter(eProperty);
    push_ptr_parameter(pchPropertyValueBuffer);
    push_uint32_parameter(unPropertyValueBufferLen);
    push_ptr_parameter(peError);
    return 0;
}

bool __thiscall IVRApplications_003_GetApplicationPropertyBool(void *_this, const char * pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError * peError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    push_uint32_parameter(eProperty);
    push_ptr_parameter(peError);
    return 0;
}

uint64_t __thiscall IVRApplications_003_GetApplicationPropertyUint64(void *_this, const char * pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError * peError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    push_uint32_parameter(eProperty);
    push_ptr_parameter(peError);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_003_SetApplicationAutoLaunch(void *_this, const char * pchAppKey, bool bAutoLaunch)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    push_bool_parameter(bAutoLaunch);
    return 0;
}

bool __thiscall IVRApplications_003_GetApplicationAutoLaunch(void *_this, const char * pchAppKey)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_003_GetStartingApplication(void *_this, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKeyBuffer);
    push_uint32_parameter(unAppKeyBufferLen);
    return 0;
}

EVRApplicationTransitionState __thiscall IVRApplications_003_GetTransitionState(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_003_PerformApplicationPrelaunchCheck(void *_this, const char * pchAppKey)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    return 0;
}

const char * __thiscall IVRApplications_003_GetApplicationsTransitionStateNameFromEnum(void *_this, EVRApplicationTransitionState state)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(state);
    return 0;
}

bool __thiscall IVRApplications_003_IsQuitUserPromptRequested(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_011_SetTrackingSpace(void *_this, ETrackingUniverseOrigin eOrigin)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
}

ETrackingUniverseOrigin __thiscall IVRCompositor_011_GetTrackingSpace(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_011_WaitGetPoses(void *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pRenderPoseArray);
    push_uint32_parameter(unRenderPoseArrayCount);
    push_ptr_parameter(pGamePoseArray);
    push_uint32_parameter(unGamePoseArrayCount);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_011_GetLastPoses(void *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pRenderPoseArray);
    push_uint32_parameter(unRenderPoseArrayCount);
    push_ptr_parameter(pGamePoseArray);
    push_uint32_parameter(unGamePoseArrayCount);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_011_Submit(void *_this, EVREye eEye, Texture_t * pTexture, VRTextureBounds_t * pBounds, EVRSubmitFlags nSubmitFlags)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pTexture);
    push_ptr_parameter(pBounds);
    push_uint32_parameter(nSubmitFlags);
    return 0;
}

void __thiscall IVRCompositor_011_ClearLastSubmittedFrame(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_011_PostPresentHandoff(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_011_GetFrameTiming(void *_this, Compositor_FrameTiming * pTiming, uint32_t unFramesAgo)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pTiming);
    push_uint32_parameter(unFramesAgo);
    return 0;
}

float __thiscall IVRCompositor_011_GetFrameTimeRemaining(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_011_FadeToColor(void *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground)
{
    push_ptr_parameter(_this);
    push_float_parameter(fSeconds);
    push_float_parameter(fRed);
    push_float_parameter(fGreen);
    push_float_parameter(fBlue);
    push_float_parameter(fAlpha);
    push_bool_parameter(bBackground);
}

void __thiscall IVRCompositor_011_FadeGrid(void *_this, float fSeconds, bool bFadeIn)
{
    push_ptr_parameter(_this);
    push_float_parameter(fSeconds);
    push_bool_parameter(bFadeIn);
}

EVRCompositorError __thiscall IVRCompositor_011_SetSkyboxOverride(void *_this, Texture_t * pTextures, uint32_t unTextureCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pTextures);
    push_uint32_parameter(unTextureCount);
    return 0;
}

void __thiscall IVRCompositor_011_ClearSkyboxOverride(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_011_CompositorBringToFront(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_011_CompositorGoToBack(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_011_CompositorQuit(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_011_IsFullscreen(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRCompositor_011_GetCurrentSceneFocusProcess(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRCompositor_011_GetLastFrameRenderer(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVRCompositor_011_CanRenderScene(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_011_ShowMirrorWindow(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_011_HideMirrorWindow(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_011_IsMirrorWindowVisible(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_011_CompositorDumpImages(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRRenderModels_002_LoadRenderModel(void *_this, const char * pchRenderModelName, RenderModel_t ** ppRenderModel)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchRenderModelName);
    push_ptr_parameter(ppRenderModel);
    return 0;
}

void __thiscall IVRRenderModels_002_FreeRenderModel(void *_this, RenderModel_t * pRenderModel)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pRenderModel);
}

bool __thiscall IVRRenderModels_002_LoadTexture(void *_this, TextureID_t textureId, RenderModel_TextureMap_t ** ppTexture)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(textureId);
    push_ptr_parameter(ppTexture);
    return 0;
}

void __thiscall IVRRenderModels_002_FreeTexture(void *_this, RenderModel_TextureMap_t * pTexture)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pTexture);
}

uint32_t __thiscall IVRRenderModels_002_GetRenderModelName(void *_this, uint32_t unRenderModelIndex, char * pchRenderModelName, uint32_t unRenderModelNameLen)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unRenderModelIndex);
    push_ptr_parameter(pchRenderModelName);
    push_uint32_parameter(unRenderModelNameLen);
    return 0;
}

uint32_t __thiscall IVRRenderModels_002_GetRenderModelCount(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRRenderModels_002_GetComponentCount(void *_this, const char * pchRenderModelName)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchRenderModelName);
    return 0;
}

uint32_t __thiscall IVRRenderModels_002_GetComponentName(void *_this, const char * pchRenderModelName, uint32_t unComponentIndex, char * pchComponentName, uint32_t unComponentNameLen)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchRenderModelName);
    push_uint32_parameter(unComponentIndex);
    push_ptr_parameter(pchComponentName);
    push_uint32_parameter(unComponentNameLen);
    return 0;
}

uint64_t __thiscall IVRRenderModels_002_GetComponentButtonMask(void *_this, const char * pchRenderModelName, const char * pchComponentName)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchRenderModelName);
    push_ptr_parameter(pchComponentName);
    return 0;
}

uint32_t __thiscall IVRRenderModels_002_GetComponentRenderModelName(void *_this, const char * pchRenderModelName, const char * pchComponentName, char * pchComponentRenderModelName, uint32_t unComponentRenderModelNameLen)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchRenderModelName);
    push_ptr_parameter(pchComponentName);
    push_ptr_parameter(pchComponentRenderModelName);
    push_uint32_parameter(unComponentRenderModelNameLen);
    return 0;
}

bool __thiscall IVRRenderModels_002_GetComponentState(void *_this, const char * pchRenderModelName, const char * pchComponentName, VRControllerState_t * pControllerState, RenderModel_ComponentState_t * pComponentState)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchRenderModelName);
    push_ptr_parameter(pchComponentName);
    push_ptr_parameter(pControllerState);
    push_ptr_parameter(pComponentState);
    return 0;
}

bool __thiscall IVRRenderModels_002_RenderModelHasComponent(void *_this, const char * pchRenderModelName, const char * pchComponentName)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchRenderModelName);
    push_ptr_parameter(pchComponentName);
    return 0;
}

void __thiscall IVRSystem_010_GetRecommendedRenderTargetSize(void *_this, uint32_t * pnWidth, uint32_t * pnHeight)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pnWidth);
    push_ptr_parameter(pnHeight);
}

HmdMatrix44_t *__thiscall IVRSystem_010_GetProjectionMatrix(void *_this, HmdMatrix44_t *_r, EVREye eEye, float fNearZ, float fFarZ, EGraphicsAPIConvention eProjType)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(eEye);
    push_float_parameter(fNearZ);
    push_float_parameter(fFarZ);
    push_uint32_parameter(eProjType);
    return 0;
}

void __thiscall IVRSystem_010_GetProjectionRaw(void *_this, EVREye eEye, float * pfLeft, float * pfRight, float * pfTop, float * pfBottom)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pfLeft);
    push_ptr_parameter(pfRight);
    push_ptr_parameter(pfTop);
    push_ptr_parameter(pfBottom);
}

DistortionCoordinates_t *__thiscall IVRSystem_010_ComputeDistortion(void *_this, DistortionCoordinates_t *_r, EVREye eEye, float fU, float fV)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(eEye);
    push_float_parameter(fU);
    push_float_parameter(fV);
    return 0;
}

HmdMatrix34_t *__thiscall IVRSystem_010_GetEyeToHeadTransform(void *_this, HmdMatrix34_t *_r, EVREye eEye)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(eEye);
    return 0;
}

bool __thiscall IVRSystem_010_GetTimeSinceLastVsync(void *_this, float * pfSecondsSinceLastVsync, uint64_t * pulFrameCounter)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pfSecondsSinceLastVsync);
    push_ptr_parameter(pulFrameCounter);
    return 0;
}

int32_t __thiscall IVRSystem_010_GetD3D9AdapterIndex(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRSystem_010_GetDXGIOutputInfo(void *_this, int32_t * pnAdapterIndex)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pnAdapterIndex);
}

bool __thiscall IVRSystem_010_IsDisplayOnDesktop(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVRSystem_010_SetDisplayVisibility(void *_this, bool bIsVisibleOnDesktop)
{
    push_ptr_parameter(_this);
    push_bool_parameter(bIsVisibleOnDesktop);
    return 0;
}

void __thiscall IVRSystem_010_GetDeviceToAbsoluteTrackingPose(void *_this, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t * pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
    push_float_parameter(fPredictedSecondsToPhotonsFromNow);
    push_ptr_parameter(pTrackedDevicePoseArray);
    push_uint32_parameter(unTrackedDevicePoseArrayCount);
}

void __thiscall IVRSystem_010_ResetSeatedZeroPose(void *_this)
{
    push_ptr_parameter(_this);
}

HmdMatrix34_t *__thiscall IVRSystem_010_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(void *_this, HmdMatrix34_t *_r)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    return 0;
}

HmdMatrix34_t *__thiscall IVRSystem_010_GetRawZeroPoseToStandingAbsoluteTrackingPose(void *_this, HmdMatrix34_t *_r)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    return 0;
}

uint32_t __thiscall IVRSystem_010_GetSortedTrackedDeviceIndicesOfClass(void *_this, ETrackedDeviceClass eTrackedDeviceClass, TrackedDeviceIndex_t * punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eTrackedDeviceClass);
    push_ptr_parameter(punTrackedDeviceIndexArray);
    push_uint32_parameter(unTrackedDeviceIndexArrayCount);
    push_uint32_parameter(unRelativeToTrackedDeviceIndex);
    return 0;
}

EDeviceActivityLevel __thiscall IVRSystem_010_GetTrackedDeviceActivityLevel(void *_this, TrackedDeviceIndex_t unDeviceId)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceId);
    return 0;
}

void __thiscall IVRSystem_010_ApplyTransform(void *_this, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pTrackedDevicePose, HmdMatrix34_t * pTransform)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pOutputPose);
    push_ptr_parameter(pTrackedDevicePose);
    push_ptr_parameter(pTransform);
}

TrackedDeviceIndex_t __thiscall IVRSystem_010_GetTrackedDeviceIndexForControllerRole(void *_this, ETrackedControllerRole unDeviceType)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceType);
    return 0;
}

ETrackedControllerRole __thiscall IVRSystem_010_GetControllerRoleForTrackedDeviceIndex(void *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    return 0;
}

ETrackedDeviceClass __thiscall IVRSystem_010_GetTrackedDeviceClass(void *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    return 0;
}

bool __thiscall IVRSystem_010_IsTrackedDeviceConnected(void *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    return 0;
}

bool __thiscall IVRSystem_010_GetBoolTrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

float __thiscall IVRSystem_010_GetFloatTrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

int32_t __thiscall IVRSystem_010_GetInt32TrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

uint64_t __thiscall IVRSystem_010_GetUint64TrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

HmdMatrix34_t *__thiscall IVRSystem_010_GetMatrix34TrackedDeviceProperty(void *_this, HmdMatrix34_t *_r, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

uint32_t __thiscall IVRSystem_010_GetStringTrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, char * pchValue, uint32_t unBufferSize, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(pError);
    return 0;
}

const char * __thiscall IVRSystem_010_GetPropErrorNameFromEnum(void *_this, ETrackedPropertyError error)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(error);
    return 0;
}

bool __thiscall IVRSystem_010_PollNextEvent(void *_this, VREvent_t * pEvent)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pEvent);
    return 0;
}

bool __thiscall IVRSystem_010_PollNextEventWithPose(void *_this, ETrackingUniverseOrigin eOrigin, VREvent_t * pEvent, TrackedDevicePose_t * pTrackedDevicePose)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
    push_ptr_parameter(pEvent);
    push_ptr_parameter(pTrackedDevicePose);
    return 0;
}

const char * __thiscall IVRSystem_010_GetEventTypeNameFromEnum(void *_this, EVREventType eType)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eType);
    return 0;
}

HiddenAreaMesh_t *__thiscall IVRSystem_010_GetHiddenAreaMesh(void *_this, HiddenAreaMesh_t *_r, EVREye eEye)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(eEye);
    return 0;
}

bool __thiscall IVRSystem_010_GetControllerState(void *_this, TrackedDeviceIndex_t unControllerDeviceIndex, VRControllerState_t * pControllerState)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unControllerDeviceIndex);
    push_ptr_parameter(pControllerState);
    return 0;
}

bool __thiscall IVRSystem_010_GetControllerStateWithPose(void *_this, ETrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, VRControllerState_t * pControllerState, TrackedDevicePose_t * pTrackedDevicePose)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
    push_uint32_parameter(unControllerDeviceIndex);
    push_ptr_parameter(pControllerState);
    push_ptr_parameter(pTrackedDevicePose);
    return 0;
}

void __thiscall IVRSystem_010_TriggerHapticPulse(void *_this, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unControllerDeviceIndex);
    push_uint32_parameter(unAxisId);
    push_uint32_parameter(usDurationMicroSec);
}

const char * __thiscall IVRSystem_010_GetButtonIdNameFromEnum(void *_this, EVRButtonId eButtonId)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eButtonId);
    return 0;
}

const char * __thiscall IVRSystem_010_GetControllerAxisTypeNameFromEnum(void *_this, EVRControllerAxisType eAxisType)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eAxisType);
    return 0;
}

bool __thiscall IVRSystem_010_CaptureInputFocus(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRSystem_010_ReleaseInputFocus(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRSystem_010_IsInputFocusCapturedByAnotherProcess(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRSystem_010_DriverDebugRequest(void *_this, TrackedDeviceIndex_t unDeviceIndex, const char * pchRequest, char * pchResponseBuffer, uint32_t unResponseBufferSize)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_ptr_parameter(pchRequest);
    push_ptr_parameter(pchResponseBuffer);
    push_uint32_parameter(unResponseBufferSize);
    return 0;
}

EVRFirmwareError __thiscall IVRSystem_010_PerformFirmwareUpdate(void *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    return 0;
}

void __thiscall IVRSystem_010_AcknowledgeQuit_Exiting(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRSystem_010_AcknowledgeQuit_UserPrompt(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRSystem_010_PerformanceTestEnableCapture(void *_this, bool bEnable)
{
    push_ptr_parameter(_this);
    push_bool_parameter(bEnable);
}

void __thiscall IVRSystem_010_PerformanceTestReportFidelityLevelChange(void *_this, int nFidelityLevel)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(nFidelityLevel);
}

EVRApplicationError __thiscall IVRApplications_002_AddApplicationManifest(void *_this, const char * pchApplicationManifestFullPath, bool bTemporary)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchApplicationManifestFullPath);
    push_bool_parameter(bTemporary);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_002_RemoveApplicationManifest(void *_this, const char * pchApplicationManifestFullPath)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchApplicationManifestFullPath);
    return 0;
}

bool __thiscall IVRApplications_002_IsApplicationInstalled(void *_this, const char * pchAppKey)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    return 0;
}

uint32_t __thiscall IVRApplications_002_GetApplicationCount(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_002_GetApplicationKeyByIndex(void *_this, uint32_t unApplicationIndex, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unApplicationIndex);
    push_ptr_parameter(pchAppKeyBuffer);
    push_uint32_parameter(unAppKeyBufferLen);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_002_GetApplicationKeyByProcessId(void *_this, uint32_t unProcessId, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unProcessId);
    push_ptr_parameter(pchAppKeyBuffer);
    push_uint32_parameter(unAppKeyBufferLen);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_002_LaunchApplication(void *_this, const char * pchAppKey)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_002_LaunchDashboardOverlay(void *_this, const char * pchAppKey)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_002_IdentifyApplication(void *_this, uint32_t unProcessId, const char * pchAppKey)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unProcessId);
    push_ptr_parameter(pchAppKey);
    return 0;
}

uint32_t __thiscall IVRApplications_002_GetApplicationProcessId(void *_this, const char * pchAppKey)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    return 0;
}

const char * __thiscall IVRApplications_002_GetApplicationsErrorNameFromEnum(void *_this, EVRApplicationError error)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(error);
    return 0;
}

uint32_t __thiscall IVRApplications_002_GetApplicationPropertyString(void *_this, const char * pchAppKey, EVRApplicationProperty eProperty, char * pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen, EVRApplicationError * peError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    push_uint32_parameter(eProperty);
    push_ptr_parameter(pchPropertyValueBuffer);
    push_uint32_parameter(unPropertyValueBufferLen);
    push_ptr_parameter(peError);
    return 0;
}

bool __thiscall IVRApplications_002_GetApplicationPropertyBool(void *_this, const char * pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError * peError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    push_uint32_parameter(eProperty);
    push_ptr_parameter(peError);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_002_SetApplicationAutoLaunch(void *_this, const char * pchAppKey, bool bAutoLaunch)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    push_bool_parameter(bAutoLaunch);
    return 0;
}

bool __thiscall IVRApplications_002_GetApplicationAutoLaunch(void *_this, const char * pchAppKey)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_002_GetStartingApplication(void *_this, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKeyBuffer);
    push_uint32_parameter(unAppKeyBufferLen);
    return 0;
}

EVRApplicationTransitionState __thiscall IVRApplications_002_GetTransitionState(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_002_PerformApplicationPrelaunchCheck(void *_this, const char * pchAppKey)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    return 0;
}

const char * __thiscall IVRApplications_002_GetApplicationsTransitionStateNameFromEnum(void *_this, EVRApplicationTransitionState state)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(state);
    return 0;
}

bool __thiscall IVRApplications_002_IsQuitUserPromptRequested(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVRChaperoneSetup_004_CommitWorkingCopy(void *_this, EChaperoneConfigFile configFile)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(configFile);
    return 0;
}

void __thiscall IVRChaperoneSetup_004_RevertWorkingCopy(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRChaperoneSetup_004_GetWorkingPlayAreaSize(void *_this, float * pSizeX, float * pSizeZ)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pSizeX);
    push_ptr_parameter(pSizeZ);
    return 0;
}

bool __thiscall IVRChaperoneSetup_004_GetWorkingPlayAreaRect(void *_this, HmdQuad_t * rect)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(rect);
    return 0;
}

bool __thiscall IVRChaperoneSetup_004_GetWorkingCollisionBoundsInfo(void *_this, HmdQuad_t * pQuadsBuffer, uint32_t * punQuadsCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pQuadsBuffer);
    push_ptr_parameter(punQuadsCount);
    return 0;
}

bool __thiscall IVRChaperoneSetup_004_GetLiveCollisionBoundsInfo(void *_this, HmdQuad_t * pQuadsBuffer, uint32_t * punQuadsCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pQuadsBuffer);
    push_ptr_parameter(punQuadsCount);
    return 0;
}

bool __thiscall IVRChaperoneSetup_004_GetWorkingSeatedZeroPoseToRawTrackingPose(void *_this, HmdMatrix34_t * pmatSeatedZeroPoseToRawTrackingPose)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pmatSeatedZeroPoseToRawTrackingPose);
    return 0;
}

bool __thiscall IVRChaperoneSetup_004_GetWorkingStandingZeroPoseToRawTrackingPose(void *_this, HmdMatrix34_t * pmatStandingZeroPoseToRawTrackingPose)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pmatStandingZeroPoseToRawTrackingPose);
    return 0;
}

void __thiscall IVRChaperoneSetup_004_SetWorkingPlayAreaSize(void *_this, float sizeX, float sizeZ)
{
    push_ptr_parameter(_this);
    push_float_parameter(sizeX);
    push_float_parameter(sizeZ);
}

void __thiscall IVRChaperoneSetup_004_SetWorkingCollisionBoundsInfo(void *_this, HmdQuad_t * pQuadsBuffer, uint32_t unQuadsCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pQuadsBuffer);
    push_uint32_parameter(unQuadsCount);
}

void __thiscall IVRChaperoneSetup_004_SetWorkingSeatedZeroPoseToRawTrackingPose(void *_this, HmdMatrix34_t * pMatSeatedZeroPoseToRawTrackingPose)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pMatSeatedZeroPoseToRawTrackingPose);
}

void __thiscall IVRChaperoneSetup_004_SetWorkingStandingZeroPoseToRawTrackingPose(void *_this, HmdMatrix34_t * pMatStandingZeroPoseToRawTrackingPose)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pMatStandingZeroPoseToRawTrackingPose);
}

void __thiscall IVRChaperoneSetup_004_ReloadFromDisk(void *_this, EChaperoneConfigFile configFile)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(configFile);
}

bool __thiscall IVRChaperoneSetup_004_GetLiveSeatedZeroPoseToRawTrackingPose(void *_this, HmdMatrix34_t * pmatSeatedZeroPoseToRawTrackingPose)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pmatSeatedZeroPoseToRawTrackingPose);
    return 0;
}

void __thiscall IVRChaperoneSetup_004_SetWorkingWallTagInfo(void *_this, uint8_t * pTagsBuffer, uint32_t unTagCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pTagsBuffer);
    push_uint32_parameter(unTagCount);
}

bool __thiscall IVRChaperoneSetup_004_GetLiveWallTagInfo(void *_this, uint8_t * pTagsBuffer, uint32_t * punTagCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pTagsBuffer);
    push_ptr_parameter(punTagCount);
    return 0;
}

void __thiscall IVRCompositor_010_SetTrackingSpace(void *_this, ETrackingUniverseOrigin eOrigin)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
}

ETrackingUniverseOrigin __thiscall IVRCompositor_010_GetTrackingSpace(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_010_WaitGetPoses(void *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pRenderPoseArray);
    push_uint32_parameter(unRenderPoseArrayCount);
    push_ptr_parameter(pGamePoseArray);
    push_uint32_parameter(unGamePoseArrayCount);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_010_GetLastPoses(void *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pRenderPoseArray);
    push_uint32_parameter(unRenderPoseArrayCount);
    push_ptr_parameter(pGamePoseArray);
    push_uint32_parameter(unGamePoseArrayCount);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_010_Submit(void *_this, EVREye eEye, Texture_t * pTexture, VRTextureBounds_t * pBounds, EVRSubmitFlags nSubmitFlags)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pTexture);
    push_ptr_parameter(pBounds);
    push_uint32_parameter(nSubmitFlags);
    return 0;
}

void __thiscall IVRCompositor_010_ClearLastSubmittedFrame(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_010_PostPresentHandoff(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_010_GetFrameTiming(void *_this, Compositor_FrameTiming * pTiming, uint32_t unFramesAgo)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pTiming);
    push_uint32_parameter(unFramesAgo);
    return 0;
}

float __thiscall IVRCompositor_010_GetFrameTimeRemaining(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_010_FadeToColor(void *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground)
{
    push_ptr_parameter(_this);
    push_float_parameter(fSeconds);
    push_float_parameter(fRed);
    push_float_parameter(fGreen);
    push_float_parameter(fBlue);
    push_float_parameter(fAlpha);
    push_bool_parameter(bBackground);
}

void __thiscall IVRCompositor_010_FadeGrid(void *_this, float fSeconds, bool bFadeIn)
{
    push_ptr_parameter(_this);
    push_float_parameter(fSeconds);
    push_bool_parameter(bFadeIn);
}

EVRCompositorError __thiscall IVRCompositor_010_SetSkyboxOverride(void *_this, Texture_t * pTextures, uint32_t unTextureCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pTextures);
    push_uint32_parameter(unTextureCount);
    return 0;
}

void __thiscall IVRCompositor_010_ClearSkyboxOverride(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_010_CompositorBringToFront(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_010_CompositorGoToBack(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_010_CompositorQuit(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_010_IsFullscreen(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRCompositor_010_GetCurrentSceneFocusProcess(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRCompositor_010_GetLastFrameRenderer(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVRCompositor_010_CanRenderScene(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_010_ShowMirrorWindow(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_010_HideMirrorWindow(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_010_IsMirrorWindowVisible(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_010_CompositorDumpImages(void *_this)
{
    push_ptr_parameter(_this);
}

EVROverlayError __thiscall IVROverlay_008_FindOverlay(void *_this, const char * pchOverlayKey, VROverlayHandle_t * pOverlayHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayKey);
    push_ptr_parameter(pOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_008_CreateOverlay(void *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pOverlayHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayKey);
    push_ptr_parameter(pchOverlayFriendlyName);
    push_ptr_parameter(pOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_008_DestroyOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_008_SetHighQualityOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

VROverlayHandle_t __thiscall IVROverlay_008_GetHighQualityOverlay(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVROverlay_008_GetOverlayKey(void *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(pError);
    return 0;
}

uint32_t __thiscall IVROverlay_008_GetOverlayName(void *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(pError);
    return 0;
}

EVROverlayError __thiscall IVROverlay_008_GetOverlayImageData(void *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unBufferSize, uint32_t * punWidth, uint32_t * punHeight)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvBuffer);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(punWidth);
    push_ptr_parameter(punHeight);
    return 0;
}

const char * __thiscall IVROverlay_008_GetOverlayErrorNameFromEnum(void *_this, EVROverlayError error)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(error);
    return 0;
}

EVROverlayError __thiscall IVROverlay_008_SetOverlayFlag(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eOverlayFlag);
    push_bool_parameter(bEnabled);
    return 0;
}

EVROverlayError __thiscall IVROverlay_008_GetOverlayFlag(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool * pbEnabled)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eOverlayFlag);
    push_ptr_parameter(pbEnabled);
    return 0;
}

EVROverlayError __thiscall IVROverlay_008_SetOverlayColor(void *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fRed);
    push_float_parameter(fGreen);
    push_float_parameter(fBlue);
    return 0;
}

EVROverlayError __thiscall IVROverlay_008_GetOverlayColor(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfRed, float * pfGreen, float * pfBlue)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfRed);
    push_ptr_parameter(pfGreen);
    push_ptr_parameter(pfBlue);
    return 0;
}

EVROverlayError __thiscall IVROverlay_008_SetOverlayAlpha(void *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fAlpha);
    return 0;
}

EVROverlayError __thiscall IVROverlay_008_GetOverlayAlpha(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfAlpha)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfAlpha);
    return 0;
}

EVROverlayError __thiscall IVROverlay_008_SetOverlayWidthInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fWidthInMeters);
    return 0;
}

EVROverlayError __thiscall IVROverlay_008_GetOverlayWidthInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfWidthInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfWidthInMeters);
    return 0;
}

EVROverlayError __thiscall IVROverlay_008_SetOverlayAutoCurveDistanceRangeInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fMinDistanceInMeters);
    push_float_parameter(fMaxDistanceInMeters);
    return 0;
}

EVROverlayError __thiscall IVROverlay_008_GetOverlayAutoCurveDistanceRangeInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfMinDistanceInMeters, float * pfMaxDistanceInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfMinDistanceInMeters);
    push_ptr_parameter(pfMaxDistanceInMeters);
    return 0;
}

EVROverlayError __thiscall IVROverlay_008_SetOverlayTextureColorSpace(void *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eTextureColorSpace);
    return 0;
}

EVROverlayError __thiscall IVROverlay_008_GetOverlayTextureColorSpace(void *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace * peTextureColorSpace)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peTextureColorSpace);
    return 0;
}

EVROverlayError __thiscall IVROverlay_008_SetOverlayTextureBounds(void *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pOverlayTextureBounds);
    return 0;
}

EVROverlayError __thiscall IVROverlay_008_GetOverlayTextureBounds(void *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pOverlayTextureBounds);
    return 0;
}

EVROverlayError __thiscall IVROverlay_008_GetOverlayTransformType(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType * peTransformType)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peTransformType);
    return 0;
}

EVROverlayError __thiscall IVROverlay_008_SetOverlayTransformAbsolute(void *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eTrackingOrigin);
    push_ptr_parameter(pmatTrackingOriginToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_008_GetOverlayTransformAbsolute(void *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin * peTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peTrackingOrigin);
    push_ptr_parameter(pmatTrackingOriginToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_008_SetOverlayTransformTrackedDeviceRelative(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unTrackedDevice);
    push_ptr_parameter(pmatTrackedDeviceToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_008_GetOverlayTransformTrackedDeviceRelative(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(punTrackedDevice);
    push_ptr_parameter(pmatTrackedDeviceToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_008_ShowOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_008_HideOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

bool __thiscall IVROverlay_008_IsOverlayVisible(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_008_GetTransformForOverlayCoordinates(void *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdVector2_t coordinatesInOverlay, HmdMatrix34_t * pmatTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eTrackingOrigin);
    push_HmdVector2_parameter(coordinatesInOverlay);
    push_ptr_parameter(pmatTransform);
    return 0;
}

bool __thiscall IVROverlay_008_PollNextOverlayEvent(void *_this, VROverlayHandle_t ulOverlayHandle, VREvent_t * pEvent)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pEvent);
    return 0;
}

EVROverlayError __thiscall IVROverlay_008_GetOverlayInputMethod(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod * peInputMethod)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peInputMethod);
    return 0;
}

EVROverlayError __thiscall IVROverlay_008_SetOverlayInputMethod(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eInputMethod);
    return 0;
}

EVROverlayError __thiscall IVROverlay_008_GetOverlayMouseScale(void *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvecMouseScale);
    return 0;
}

EVROverlayError __thiscall IVROverlay_008_SetOverlayMouseScale(void *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvecMouseScale);
    return 0;
}

bool __thiscall IVROverlay_008_ComputeOverlayIntersection(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t * pParams, VROverlayIntersectionResults_t * pResults)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pParams);
    push_ptr_parameter(pResults);
    return 0;
}

bool __thiscall IVROverlay_008_HandleControllerOverlayInteractionAsMouse(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unControllerDeviceIndex);
    return 0;
}

bool __thiscall IVROverlay_008_IsHoverTargetOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

VROverlayHandle_t __thiscall IVROverlay_008_GetGamepadFocusOverlay(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVROverlayError __thiscall IVROverlay_008_SetGamepadFocusOverlay(void *_this, VROverlayHandle_t ulNewFocusOverlay)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulNewFocusOverlay);
    return 0;
}

EVROverlayError __thiscall IVROverlay_008_SetOverlayNeighbor(void *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom, VROverlayHandle_t ulTo)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eDirection);
    push_uint64_parameter(ulFrom);
    push_uint64_parameter(ulTo);
    return 0;
}

EVROverlayError __thiscall IVROverlay_008_MoveGamepadFocusToNeighbor(void *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eDirection);
    push_uint64_parameter(ulFrom);
    return 0;
}

EVROverlayError __thiscall IVROverlay_008_SetOverlayTexture(void *_this, VROverlayHandle_t ulOverlayHandle, Texture_t * pTexture)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pTexture);
    return 0;
}

EVROverlayError __thiscall IVROverlay_008_ClearOverlayTexture(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_008_SetOverlayRaw(void *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvBuffer);
    push_uint32_parameter(unWidth);
    push_uint32_parameter(unHeight);
    push_uint32_parameter(unDepth);
    return 0;
}

EVROverlayError __thiscall IVROverlay_008_SetOverlayFromFile(void *_this, VROverlayHandle_t ulOverlayHandle, const char * pchFilePath)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchFilePath);
    return 0;
}

EVROverlayError __thiscall IVROverlay_008_CreateDashboardOverlay(void *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pMainHandle, VROverlayHandle_t * pThumbnailHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayKey);
    push_ptr_parameter(pchOverlayFriendlyName);
    push_ptr_parameter(pMainHandle);
    push_ptr_parameter(pThumbnailHandle);
    return 0;
}

bool __thiscall IVROverlay_008_IsDashboardVisible(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVROverlay_008_IsActiveDashboardOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_008_SetDashboardOverlaySceneProcess(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unProcessId);
    return 0;
}

EVROverlayError __thiscall IVROverlay_008_GetDashboardOverlaySceneProcess(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * punProcessId)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(punProcessId);
    return 0;
}

void __thiscall IVROverlay_008_ShowDashboard(void *_this, const char * pchOverlayToShow)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayToShow);
}

EVROverlayError __thiscall IVROverlay_008_ShowKeyboard(void *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eInputMode);
    push_uint32_parameter(eLineInputMode);
    push_ptr_parameter(pchDescription);
    push_uint32_parameter(unCharMax);
    push_ptr_parameter(pchExistingText);
    push_bool_parameter(bUseMinimalMode);
    push_uint64_parameter(uUserValue);
    return 0;
}

EVROverlayError __thiscall IVROverlay_008_ShowKeyboardForOverlay(void *_this, VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eInputMode);
    push_uint32_parameter(eLineInputMode);
    push_ptr_parameter(pchDescription);
    push_uint32_parameter(unCharMax);
    push_ptr_parameter(pchExistingText);
    push_bool_parameter(bUseMinimalMode);
    push_uint64_parameter(uUserValue);
    return 0;
}

uint32_t __thiscall IVROverlay_008_GetKeyboardText(void *_this, char * pchText, uint32_t cchText)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchText);
    push_uint32_parameter(cchText);
    return 0;
}

void __thiscall IVROverlay_008_HideKeyboard(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVROverlay_008_SetKeyboardTransformAbsolute(void *_this, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToKeyboardTransform)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eTrackingOrigin);
    push_ptr_parameter(pmatTrackingOriginToKeyboardTransform);
}

void __thiscall IVROverlay_008_SetKeyboardPositionForOverlay(void *_this, VROverlayHandle_t ulOverlayHandle, HmdRect2_t avoidRect)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_HmdRect2_parameter(avoidRect);
}

bool __thiscall IVRTrackedCamera_001_HasCamera(void *_this, TrackedDeviceIndex_t nDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(nDeviceIndex);
    return 0;
}

bool __thiscall IVRTrackedCamera_001_GetCameraFirmwareDescription(void *_this, TrackedDeviceIndex_t nDeviceIndex, char * pBuffer, uint32_t nBufferLen)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(nDeviceIndex);
    push_ptr_parameter(pBuffer);
    push_uint32_parameter(nBufferLen);
    return 0;
}

bool __thiscall IVRTrackedCamera_001_GetCameraFrameDimensions(void *_this, TrackedDeviceIndex_t nDeviceIndex, ECameraVideoStreamFormat nVideoStreamFormat, uint32_t * pWidth, uint32_t * pHeight)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(nDeviceIndex);
    push_uint32_parameter(nVideoStreamFormat);
    push_ptr_parameter(pWidth);
    push_ptr_parameter(pHeight);
    return 0;
}

bool __thiscall IVRTrackedCamera_001_SetCameraVideoStreamFormat(void *_this, TrackedDeviceIndex_t nDeviceIndex, ECameraVideoStreamFormat nVideoStreamFormat)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(nDeviceIndex);
    push_uint32_parameter(nVideoStreamFormat);
    return 0;
}

ECameraVideoStreamFormat __thiscall IVRTrackedCamera_001_GetCameraVideoStreamFormat(void *_this, TrackedDeviceIndex_t nDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(nDeviceIndex);
    return 0;
}

bool __thiscall IVRTrackedCamera_001_EnableCameraForStreaming(void *_this, TrackedDeviceIndex_t nDeviceIndex, bool bEnable)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(nDeviceIndex);
    push_bool_parameter(bEnable);
    return 0;
}

bool __thiscall IVRTrackedCamera_001_StartVideoStream(void *_this, TrackedDeviceIndex_t nDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(nDeviceIndex);
    return 0;
}

bool __thiscall IVRTrackedCamera_001_StopVideoStream(void *_this, TrackedDeviceIndex_t nDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(nDeviceIndex);
    return 0;
}

bool __thiscall IVRTrackedCamera_001_IsVideoStreamActive(void *_this, TrackedDeviceIndex_t nDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(nDeviceIndex);
    return 0;
}

float __thiscall IVRTrackedCamera_001_GetVideoStreamElapsedTime(void *_this, TrackedDeviceIndex_t nDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(nDeviceIndex);
    return 0;
}

const CameraVideoStreamFrame_t * __thiscall IVRTrackedCamera_001_GetVideoStreamFrame(void *_this, TrackedDeviceIndex_t nDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(nDeviceIndex);
    return 0;
}

bool __thiscall IVRTrackedCamera_001_ReleaseVideoStreamFrame(void *_this, TrackedDeviceIndex_t nDeviceIndex, CameraVideoStreamFrame_t * pFrameImage)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(nDeviceIndex);
    push_ptr_parameter(pFrameImage);
    return 0;
}

bool __thiscall IVRTrackedCamera_001_SetAutoExposure(void *_this, TrackedDeviceIndex_t nDeviceIndex, bool bEnable)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(nDeviceIndex);
    push_bool_parameter(bEnable);
    return 0;
}

bool __thiscall IVRTrackedCamera_001_PauseVideoStream(void *_this, TrackedDeviceIndex_t nDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(nDeviceIndex);
    return 0;
}

bool __thiscall IVRTrackedCamera_001_ResumeVideoStream(void *_this, TrackedDeviceIndex_t nDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(nDeviceIndex);
    return 0;
}

bool __thiscall IVRTrackedCamera_001_IsVideoStreamPaused(void *_this, TrackedDeviceIndex_t nDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(nDeviceIndex);
    return 0;
}

bool __thiscall IVRTrackedCamera_001_GetCameraDistortion(void *_this, TrackedDeviceIndex_t nDeviceIndex, float flInputU, float flInputV, float * pflOutputU, float * pflOutputV)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(nDeviceIndex);
    push_float_parameter(flInputU);
    push_float_parameter(flInputV);
    push_ptr_parameter(pflOutputU);
    push_ptr_parameter(pflOutputV);
    return 0;
}

bool __thiscall IVRTrackedCamera_001_GetCameraProjection(void *_this, TrackedDeviceIndex_t nDeviceIndex, float flWidthPixels, float flHeightPixels, float flZNear, float flZFar, HmdMatrix44_t * pProjection)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(nDeviceIndex);
    push_float_parameter(flWidthPixels);
    push_float_parameter(flHeightPixels);
    push_float_parameter(flZNear);
    push_float_parameter(flZFar);
    push_ptr_parameter(pProjection);
    return 0;
}

void __thiscall IVRCompositor_009_SetTrackingSpace(void *_this, ETrackingUniverseOrigin eOrigin)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
}

ETrackingUniverseOrigin __thiscall IVRCompositor_009_GetTrackingSpace(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_009_WaitGetPoses(void *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pRenderPoseArray);
    push_uint32_parameter(unRenderPoseArrayCount);
    push_ptr_parameter(pGamePoseArray);
    push_uint32_parameter(unGamePoseArrayCount);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_009_GetLastPoses(void *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pRenderPoseArray);
    push_uint32_parameter(unRenderPoseArrayCount);
    push_ptr_parameter(pGamePoseArray);
    push_uint32_parameter(unGamePoseArrayCount);
    return 0;
}

EVRCompositorError __thiscall IVRCompositor_009_Submit(void *_this, EVREye eEye, Texture_t * pTexture, VRTextureBounds_t * pBounds, EVRSubmitFlags nSubmitFlags)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pTexture);
    push_ptr_parameter(pBounds);
    push_uint32_parameter(nSubmitFlags);
    return 0;
}

void __thiscall IVRCompositor_009_ClearLastSubmittedFrame(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_009_PostPresentHandoff(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_009_GetFrameTiming(void *_this, Compositor_FrameTiming * pTiming, uint32_t unFramesAgo)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pTiming);
    push_uint32_parameter(unFramesAgo);
    return 0;
}

float __thiscall IVRCompositor_009_GetFrameTimeRemaining(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_009_FadeToColor(void *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground)
{
    push_ptr_parameter(_this);
    push_float_parameter(fSeconds);
    push_float_parameter(fRed);
    push_float_parameter(fGreen);
    push_float_parameter(fBlue);
    push_float_parameter(fAlpha);
    push_bool_parameter(bBackground);
}

void __thiscall IVRCompositor_009_FadeGrid(void *_this, float fSeconds, bool bFadeIn)
{
    push_ptr_parameter(_this);
    push_float_parameter(fSeconds);
    push_bool_parameter(bFadeIn);
}

EVRCompositorError __thiscall IVRCompositor_009_SetSkyboxOverride(void *_this, Texture_t * pTextures, uint32_t unTextureCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pTextures);
    push_uint32_parameter(unTextureCount);
    return 0;
}

void __thiscall IVRCompositor_009_ClearSkyboxOverride(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_009_CompositorBringToFront(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_009_CompositorGoToBack(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_009_CompositorQuit(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_009_IsFullscreen(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRCompositor_009_GetCurrentSceneFocusProcess(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRCompositor_009_GetLastFrameRenderer(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVRCompositor_009_CanRenderScene(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_009_ShowMirrorWindow(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_009_HideMirrorWindow(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_009_IsMirrorWindowVisible(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_009_CompositorDumpImages(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRSystem_009_GetRecommendedRenderTargetSize(void *_this, uint32_t * pnWidth, uint32_t * pnHeight)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pnWidth);
    push_ptr_parameter(pnHeight);
}

HmdMatrix44_t *__thiscall IVRSystem_009_GetProjectionMatrix(void *_this, HmdMatrix44_t *_r, EVREye eEye, float fNearZ, float fFarZ, EGraphicsAPIConvention eProjType)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(eEye);
    push_float_parameter(fNearZ);
    push_float_parameter(fFarZ);
    push_uint32_parameter(eProjType);
    return 0;
}

void __thiscall IVRSystem_009_GetProjectionRaw(void *_this, EVREye eEye, float * pfLeft, float * pfRight, float * pfTop, float * pfBottom)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pfLeft);
    push_ptr_parameter(pfRight);
    push_ptr_parameter(pfTop);
    push_ptr_parameter(pfBottom);
}

DistortionCoordinates_t *__thiscall IVRSystem_009_ComputeDistortion(void *_this, DistortionCoordinates_t *_r, EVREye eEye, float fU, float fV)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(eEye);
    push_float_parameter(fU);
    push_float_parameter(fV);
    return 0;
}

HmdMatrix34_t *__thiscall IVRSystem_009_GetEyeToHeadTransform(void *_this, HmdMatrix34_t *_r, EVREye eEye)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(eEye);
    return 0;
}

bool __thiscall IVRSystem_009_GetTimeSinceLastVsync(void *_this, float * pfSecondsSinceLastVsync, uint64_t * pulFrameCounter)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pfSecondsSinceLastVsync);
    push_ptr_parameter(pulFrameCounter);
    return 0;
}

int32_t __thiscall IVRSystem_009_GetD3D9AdapterIndex(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRSystem_009_GetDXGIOutputInfo(void *_this, int32_t * pnAdapterIndex)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pnAdapterIndex);
}

bool __thiscall IVRSystem_009_IsDisplayOnDesktop(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVRSystem_009_SetDisplayVisibility(void *_this, bool bIsVisibleOnDesktop)
{
    push_ptr_parameter(_this);
    push_bool_parameter(bIsVisibleOnDesktop);
    return 0;
}

void __thiscall IVRSystem_009_GetDeviceToAbsoluteTrackingPose(void *_this, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t * pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
    push_float_parameter(fPredictedSecondsToPhotonsFromNow);
    push_ptr_parameter(pTrackedDevicePoseArray);
    push_uint32_parameter(unTrackedDevicePoseArrayCount);
}

void __thiscall IVRSystem_009_ResetSeatedZeroPose(void *_this)
{
    push_ptr_parameter(_this);
}

HmdMatrix34_t *__thiscall IVRSystem_009_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(void *_this, HmdMatrix34_t *_r)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    return 0;
}

HmdMatrix34_t *__thiscall IVRSystem_009_GetRawZeroPoseToStandingAbsoluteTrackingPose(void *_this, HmdMatrix34_t *_r)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    return 0;
}

uint32_t __thiscall IVRSystem_009_GetSortedTrackedDeviceIndicesOfClass(void *_this, ETrackedDeviceClass eTrackedDeviceClass, TrackedDeviceIndex_t * punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eTrackedDeviceClass);
    push_ptr_parameter(punTrackedDeviceIndexArray);
    push_uint32_parameter(unTrackedDeviceIndexArrayCount);
    push_uint32_parameter(unRelativeToTrackedDeviceIndex);
    return 0;
}

EDeviceActivityLevel __thiscall IVRSystem_009_GetTrackedDeviceActivityLevel(void *_this, TrackedDeviceIndex_t unDeviceId)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceId);
    return 0;
}

void __thiscall IVRSystem_009_ApplyTransform(void *_this, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pTrackedDevicePose, HmdMatrix34_t * pTransform)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pOutputPose);
    push_ptr_parameter(pTrackedDevicePose);
    push_ptr_parameter(pTransform);
}

ETrackedDeviceClass __thiscall IVRSystem_009_GetTrackedDeviceClass(void *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    return 0;
}

bool __thiscall IVRSystem_009_IsTrackedDeviceConnected(void *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    return 0;
}

bool __thiscall IVRSystem_009_GetBoolTrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

float __thiscall IVRSystem_009_GetFloatTrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

int32_t __thiscall IVRSystem_009_GetInt32TrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

uint64_t __thiscall IVRSystem_009_GetUint64TrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

HmdMatrix34_t *__thiscall IVRSystem_009_GetMatrix34TrackedDeviceProperty(void *_this, HmdMatrix34_t *_r, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

uint32_t __thiscall IVRSystem_009_GetStringTrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, char * pchValue, uint32_t unBufferSize, ETrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(pError);
    return 0;
}

const char * __thiscall IVRSystem_009_GetPropErrorNameFromEnum(void *_this, ETrackedPropertyError error)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(error);
    return 0;
}

bool __thiscall IVRSystem_009_PollNextEvent(void *_this, VREvent_t * pEvent)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pEvent);
    return 0;
}

bool __thiscall IVRSystem_009_PollNextEventWithPose(void *_this, ETrackingUniverseOrigin eOrigin, VREvent_t * pEvent, TrackedDevicePose_t * pTrackedDevicePose)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
    push_ptr_parameter(pEvent);
    push_ptr_parameter(pTrackedDevicePose);
    return 0;
}

const char * __thiscall IVRSystem_009_GetEventTypeNameFromEnum(void *_this, EVREventType eType)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eType);
    return 0;
}

HiddenAreaMesh_t *__thiscall IVRSystem_009_GetHiddenAreaMesh(void *_this, HiddenAreaMesh_t *_r, EVREye eEye)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(eEye);
    return 0;
}

bool __thiscall IVRSystem_009_GetControllerState(void *_this, TrackedDeviceIndex_t unControllerDeviceIndex, VRControllerState_t * pControllerState)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unControllerDeviceIndex);
    push_ptr_parameter(pControllerState);
    return 0;
}

bool __thiscall IVRSystem_009_GetControllerStateWithPose(void *_this, ETrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, VRControllerState_t * pControllerState, TrackedDevicePose_t * pTrackedDevicePose)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
    push_uint32_parameter(unControllerDeviceIndex);
    push_ptr_parameter(pControllerState);
    push_ptr_parameter(pTrackedDevicePose);
    return 0;
}

void __thiscall IVRSystem_009_TriggerHapticPulse(void *_this, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unControllerDeviceIndex);
    push_uint32_parameter(unAxisId);
    push_uint32_parameter(usDurationMicroSec);
}

const char * __thiscall IVRSystem_009_GetButtonIdNameFromEnum(void *_this, EVRButtonId eButtonId)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eButtonId);
    return 0;
}

const char * __thiscall IVRSystem_009_GetControllerAxisTypeNameFromEnum(void *_this, EVRControllerAxisType eAxisType)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eAxisType);
    return 0;
}

bool __thiscall IVRSystem_009_CaptureInputFocus(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRSystem_009_ReleaseInputFocus(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRSystem_009_IsInputFocusCapturedByAnotherProcess(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRSystem_009_DriverDebugRequest(void *_this, TrackedDeviceIndex_t unDeviceIndex, const char * pchRequest, char * pchResponseBuffer, uint32_t unResponseBufferSize)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_ptr_parameter(pchRequest);
    push_ptr_parameter(pchResponseBuffer);
    push_uint32_parameter(unResponseBufferSize);
    return 0;
}

EVRFirmwareError __thiscall IVRSystem_009_PerformFirmwareUpdate(void *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    return 0;
}

void __thiscall IVRSystem_009_AcknowledgeQuit_Exiting(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRSystem_009_AcknowledgeQuit_UserPrompt(void *_this)
{
    push_ptr_parameter(_this);
}

EVROverlayError __thiscall IVROverlay_007_FindOverlay(void *_this, const char * pchOverlayKey, VROverlayHandle_t * pOverlayHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayKey);
    push_ptr_parameter(pOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_007_CreateOverlay(void *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pOverlayHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayKey);
    push_ptr_parameter(pchOverlayFriendlyName);
    push_ptr_parameter(pOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_007_DestroyOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_007_SetHighQualityOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

VROverlayHandle_t __thiscall IVROverlay_007_GetHighQualityOverlay(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVROverlay_007_GetOverlayKey(void *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(pError);
    return 0;
}

uint32_t __thiscall IVROverlay_007_GetOverlayName(void *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(pError);
    return 0;
}

EVROverlayError __thiscall IVROverlay_007_GetOverlayImageData(void *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unBufferSize, uint32_t * punWidth, uint32_t * punHeight)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvBuffer);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(punWidth);
    push_ptr_parameter(punHeight);
    return 0;
}

const char * __thiscall IVROverlay_007_GetOverlayErrorNameFromEnum(void *_this, EVROverlayError error)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(error);
    return 0;
}

EVROverlayError __thiscall IVROverlay_007_SetOverlayFlag(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eOverlayFlag);
    push_bool_parameter(bEnabled);
    return 0;
}

EVROverlayError __thiscall IVROverlay_007_GetOverlayFlag(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool * pbEnabled)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eOverlayFlag);
    push_ptr_parameter(pbEnabled);
    return 0;
}

EVROverlayError __thiscall IVROverlay_007_SetOverlayColor(void *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fRed);
    push_float_parameter(fGreen);
    push_float_parameter(fBlue);
    return 0;
}

EVROverlayError __thiscall IVROverlay_007_GetOverlayColor(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfRed, float * pfGreen, float * pfBlue)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfRed);
    push_ptr_parameter(pfGreen);
    push_ptr_parameter(pfBlue);
    return 0;
}

EVROverlayError __thiscall IVROverlay_007_SetOverlayAlpha(void *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fAlpha);
    return 0;
}

EVROverlayError __thiscall IVROverlay_007_GetOverlayAlpha(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfAlpha)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfAlpha);
    return 0;
}

EVROverlayError __thiscall IVROverlay_007_SetOverlayWidthInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fWidthInMeters);
    return 0;
}

EVROverlayError __thiscall IVROverlay_007_GetOverlayWidthInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfWidthInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfWidthInMeters);
    return 0;
}

EVROverlayError __thiscall IVROverlay_007_SetOverlayAutoCurveDistanceRangeInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fMinDistanceInMeters);
    push_float_parameter(fMaxDistanceInMeters);
    return 0;
}

EVROverlayError __thiscall IVROverlay_007_GetOverlayAutoCurveDistanceRangeInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfMinDistanceInMeters, float * pfMaxDistanceInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfMinDistanceInMeters);
    push_ptr_parameter(pfMaxDistanceInMeters);
    return 0;
}

EVROverlayError __thiscall IVROverlay_007_SetOverlayTextureColorSpace(void *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eTextureColorSpace);
    return 0;
}

EVROverlayError __thiscall IVROverlay_007_GetOverlayTextureColorSpace(void *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace * peTextureColorSpace)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peTextureColorSpace);
    return 0;
}

EVROverlayError __thiscall IVROverlay_007_SetOverlayTextureBounds(void *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pOverlayTextureBounds);
    return 0;
}

EVROverlayError __thiscall IVROverlay_007_GetOverlayTextureBounds(void *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pOverlayTextureBounds);
    return 0;
}

EVROverlayError __thiscall IVROverlay_007_GetOverlayTransformType(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType * peTransformType)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peTransformType);
    return 0;
}

EVROverlayError __thiscall IVROverlay_007_SetOverlayTransformAbsolute(void *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eTrackingOrigin);
    push_ptr_parameter(pmatTrackingOriginToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_007_GetOverlayTransformAbsolute(void *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin * peTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peTrackingOrigin);
    push_ptr_parameter(pmatTrackingOriginToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_007_SetOverlayTransformTrackedDeviceRelative(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unTrackedDevice);
    push_ptr_parameter(pmatTrackedDeviceToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_007_GetOverlayTransformTrackedDeviceRelative(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(punTrackedDevice);
    push_ptr_parameter(pmatTrackedDeviceToOverlayTransform);
    return 0;
}

EVROverlayError __thiscall IVROverlay_007_ShowOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_007_HideOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

bool __thiscall IVROverlay_007_IsOverlayVisible(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

bool __thiscall IVROverlay_007_PollNextOverlayEvent(void *_this, VROverlayHandle_t ulOverlayHandle, VREvent_t * pEvent)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pEvent);
    return 0;
}

EVROverlayError __thiscall IVROverlay_007_GetOverlayInputMethod(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod * peInputMethod)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peInputMethod);
    return 0;
}

EVROverlayError __thiscall IVROverlay_007_SetOverlayInputMethod(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eInputMethod);
    return 0;
}

EVROverlayError __thiscall IVROverlay_007_GetOverlayMouseScale(void *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvecMouseScale);
    return 0;
}

EVROverlayError __thiscall IVROverlay_007_SetOverlayMouseScale(void *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvecMouseScale);
    return 0;
}

bool __thiscall IVROverlay_007_ComputeOverlayIntersection(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t * pParams, VROverlayIntersectionResults_t * pResults)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pParams);
    push_ptr_parameter(pResults);
    return 0;
}

bool __thiscall IVROverlay_007_HandleControllerOverlayInteractionAsMouse(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unControllerDeviceIndex);
    return 0;
}

bool __thiscall IVROverlay_007_IsHoverTargetOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

VROverlayHandle_t __thiscall IVROverlay_007_GetGamepadFocusOverlay(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVROverlayError __thiscall IVROverlay_007_SetGamepadFocusOverlay(void *_this, VROverlayHandle_t ulNewFocusOverlay)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulNewFocusOverlay);
    return 0;
}

EVROverlayError __thiscall IVROverlay_007_SetOverlayNeighbor(void *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom, VROverlayHandle_t ulTo)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eDirection);
    push_uint64_parameter(ulFrom);
    push_uint64_parameter(ulTo);
    return 0;
}

EVROverlayError __thiscall IVROverlay_007_MoveGamepadFocusToNeighbor(void *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eDirection);
    push_uint64_parameter(ulFrom);
    return 0;
}

EVROverlayError __thiscall IVROverlay_007_SetOverlayTexture(void *_this, VROverlayHandle_t ulOverlayHandle, Texture_t * pTexture)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pTexture);
    return 0;
}

EVROverlayError __thiscall IVROverlay_007_ClearOverlayTexture(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_007_SetOverlayRaw(void *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvBuffer);
    push_uint32_parameter(unWidth);
    push_uint32_parameter(unHeight);
    push_uint32_parameter(unDepth);
    return 0;
}

EVROverlayError __thiscall IVROverlay_007_SetOverlayFromFile(void *_this, VROverlayHandle_t ulOverlayHandle, const char * pchFilePath)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchFilePath);
    return 0;
}

EVROverlayError __thiscall IVROverlay_007_CreateDashboardOverlay(void *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pMainHandle, VROverlayHandle_t * pThumbnailHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayKey);
    push_ptr_parameter(pchOverlayFriendlyName);
    push_ptr_parameter(pMainHandle);
    push_ptr_parameter(pThumbnailHandle);
    return 0;
}

bool __thiscall IVROverlay_007_IsDashboardVisible(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVROverlay_007_IsActiveDashboardOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

EVROverlayError __thiscall IVROverlay_007_SetDashboardOverlaySceneProcess(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unProcessId);
    return 0;
}

EVROverlayError __thiscall IVROverlay_007_GetDashboardOverlaySceneProcess(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * punProcessId)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(punProcessId);
    return 0;
}

void __thiscall IVROverlay_007_ShowDashboard(void *_this, const char * pchOverlayToShow)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayToShow);
}

EVROverlayError __thiscall IVROverlay_007_ShowKeyboard(void *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eInputMode);
    push_uint32_parameter(eLineInputMode);
    push_ptr_parameter(pchDescription);
    push_uint32_parameter(unCharMax);
    push_ptr_parameter(pchExistingText);
    push_bool_parameter(bUseMinimalMode);
    push_uint64_parameter(uUserValue);
    return 0;
}

EVROverlayError __thiscall IVROverlay_007_ShowKeyboardForOverlay(void *_this, VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eInputMode);
    push_uint32_parameter(eLineInputMode);
    push_ptr_parameter(pchDescription);
    push_uint32_parameter(unCharMax);
    push_ptr_parameter(pchExistingText);
    push_bool_parameter(bUseMinimalMode);
    push_uint64_parameter(uUserValue);
    return 0;
}

uint32_t __thiscall IVROverlay_007_GetKeyboardText(void *_this, char * pchText, uint32_t cchText)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchText);
    push_uint32_parameter(cchText);
    return 0;
}

void __thiscall IVROverlay_007_HideKeyboard(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRSystem_006_GetWindowBounds(void *_this, int32_t * pnX, int32_t * pnY, uint32_t * pnWidth, uint32_t * pnHeight)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pnX);
    push_ptr_parameter(pnY);
    push_ptr_parameter(pnWidth);
    push_ptr_parameter(pnHeight);
}

void __thiscall IVRSystem_006_GetRecommendedRenderTargetSize(void *_this, uint32_t * pnWidth, uint32_t * pnHeight)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pnWidth);
    push_ptr_parameter(pnHeight);
}

void __thiscall IVRSystem_006_GetEyeOutputViewport(void *_this, Hmd_Eye eEye, uint32_t * pnX, uint32_t * pnY, uint32_t * pnWidth, uint32_t * pnHeight)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pnX);
    push_ptr_parameter(pnY);
    push_ptr_parameter(pnWidth);
    push_ptr_parameter(pnHeight);
}

HmdMatrix44_t *__thiscall IVRSystem_006_GetProjectionMatrix(void *_this, HmdMatrix44_t *_r, Hmd_Eye eEye, float fNearZ, float fFarZ, GraphicsAPIConvention eProjType)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(eEye);
    push_float_parameter(fNearZ);
    push_float_parameter(fFarZ);
    push_uint32_parameter(eProjType);
    return 0;
}

void __thiscall IVRSystem_006_GetProjectionRaw(void *_this, Hmd_Eye eEye, float * pfLeft, float * pfRight, float * pfTop, float * pfBottom)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pfLeft);
    push_ptr_parameter(pfRight);
    push_ptr_parameter(pfTop);
    push_ptr_parameter(pfBottom);
}

DistortionCoordinates_t *__thiscall IVRSystem_006_ComputeDistortion(void *_this, DistortionCoordinates_t *_r, Hmd_Eye eEye, float fU, float fV)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(eEye);
    push_float_parameter(fU);
    push_float_parameter(fV);
    return 0;
}

HmdMatrix34_t *__thiscall IVRSystem_006_GetEyeToHeadTransform(void *_this, HmdMatrix34_t *_r, Hmd_Eye eEye)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(eEye);
    return 0;
}

bool __thiscall IVRSystem_006_GetTimeSinceLastVsync(void *_this, float * pfSecondsSinceLastVsync, uint64_t * pulFrameCounter)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pfSecondsSinceLastVsync);
    push_ptr_parameter(pulFrameCounter);
    return 0;
}

int32_t __thiscall IVRSystem_006_GetD3D9AdapterIndex(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRSystem_006_GetDXGIOutputInfo(void *_this, int32_t * pnAdapterIndex, int32_t * pnAdapterOutputIndex)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pnAdapterIndex);
    push_ptr_parameter(pnAdapterOutputIndex);
}

bool __thiscall IVRSystem_006_AttachToWindow(void *_this, void * hWnd)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(hWnd);
    return 0;
}

void __thiscall IVRSystem_006_GetDeviceToAbsoluteTrackingPose(void *_this, TrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t * pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
    push_float_parameter(fPredictedSecondsToPhotonsFromNow);
    push_ptr_parameter(pTrackedDevicePoseArray);
    push_uint32_parameter(unTrackedDevicePoseArrayCount);
}

void __thiscall IVRSystem_006_ResetSeatedZeroPose(void *_this)
{
    push_ptr_parameter(_this);
}

HmdMatrix34_t *__thiscall IVRSystem_006_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(void *_this, HmdMatrix34_t *_r)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    return 0;
}

HmdMatrix34_t *__thiscall IVRSystem_006_GetRawZeroPoseToStandingAbsoluteTrackingPose(void *_this, HmdMatrix34_t *_r)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    return 0;
}

uint32_t __thiscall IVRSystem_006_GetSortedTrackedDeviceIndicesOfClass(void *_this, TrackedDeviceClass eTrackedDeviceClass, TrackedDeviceIndex_t * punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eTrackedDeviceClass);
    push_ptr_parameter(punTrackedDeviceIndexArray);
    push_uint32_parameter(unTrackedDeviceIndexArrayCount);
    push_uint32_parameter(unRelativeToTrackedDeviceIndex);
    return 0;
}

EDeviceActivityLevel __thiscall IVRSystem_006_GetTrackedDeviceActivityLevel(void *_this, TrackedDeviceIndex_t unDeviceId)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceId);
    return 0;
}

TrackedDeviceClass __thiscall IVRSystem_006_GetTrackedDeviceClass(void *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    return 0;
}

bool __thiscall IVRSystem_006_IsTrackedDeviceConnected(void *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    return 0;
}

bool __thiscall IVRSystem_006_GetBoolTrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

float __thiscall IVRSystem_006_GetFloatTrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

int32_t __thiscall IVRSystem_006_GetInt32TrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

uint64_t __thiscall IVRSystem_006_GetUint64TrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

HmdMatrix34_t *__thiscall IVRSystem_006_GetMatrix34TrackedDeviceProperty(void *_this, HmdMatrix34_t *_r, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

uint32_t __thiscall IVRSystem_006_GetStringTrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, char * pchValue, uint32_t unBufferSize, TrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(pError);
    return 0;
}

const char * __thiscall IVRSystem_006_GetPropErrorNameFromEnum(void *_this, TrackedPropertyError error)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(error);
    return 0;
}

bool __thiscall IVRSystem_006_PollNextEvent(void *_this, VREvent_t * pEvent)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pEvent);
    return 0;
}

bool __thiscall IVRSystem_006_PollNextEventWithPose(void *_this, TrackingUniverseOrigin eOrigin, VREvent_t * pEvent, TrackedDevicePose_t * pTrackedDevicePose)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
    push_ptr_parameter(pEvent);
    push_ptr_parameter(pTrackedDevicePose);
    return 0;
}

const char * __thiscall IVRSystem_006_GetEventTypeNameFromEnum(void *_this, EVREventType eType)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eType);
    return 0;
}

HiddenAreaMesh_t *__thiscall IVRSystem_006_GetHiddenAreaMesh(void *_this, HiddenAreaMesh_t *_r, Hmd_Eye eEye)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(eEye);
    return 0;
}

bool __thiscall IVRSystem_006_GetControllerState(void *_this, TrackedDeviceIndex_t unControllerDeviceIndex, VRControllerState_t * pControllerState)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unControllerDeviceIndex);
    push_ptr_parameter(pControllerState);
    return 0;
}

bool __thiscall IVRSystem_006_GetControllerStateWithPose(void *_this, TrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, VRControllerState_t * pControllerState, TrackedDevicePose_t * pTrackedDevicePose)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
    push_uint32_parameter(unControllerDeviceIndex);
    push_ptr_parameter(pControllerState);
    push_ptr_parameter(pTrackedDevicePose);
    return 0;
}

void __thiscall IVRSystem_006_TriggerHapticPulse(void *_this, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unControllerDeviceIndex);
    push_uint32_parameter(unAxisId);
    push_uint32_parameter(usDurationMicroSec);
}

const char * __thiscall IVRSystem_006_GetButtonIdNameFromEnum(void *_this, EVRButtonId eButtonId)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eButtonId);
    return 0;
}

const char * __thiscall IVRSystem_006_GetControllerAxisTypeNameFromEnum(void *_this, EVRControllerAxisType eAxisType)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eAxisType);
    return 0;
}

bool __thiscall IVRSystem_006_CaptureInputFocus(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRSystem_006_ReleaseInputFocus(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRSystem_006_IsInputFocusCapturedByAnotherProcess(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRSystem_006_DriverDebugRequest(void *_this, TrackedDeviceIndex_t unDeviceIndex, const char * pchRequest, char * pchResponseBuffer, uint32_t unResponseBufferSize)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_ptr_parameter(pchRequest);
    push_ptr_parameter(pchResponseBuffer);
    push_uint32_parameter(unResponseBufferSize);
    return 0;
}

VRFirmwareError __thiscall IVRSystem_006_PerformFirmwareUpdate(void *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    return 0;
}

bool __thiscall IVRSystem_006_IsDisplayOnDesktop(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVRSystem_006_SetDisplayVisibility(void *_this, bool bIsVisibleOnDesktop)
{
    push_ptr_parameter(_this);
    push_bool_parameter(bIsVisibleOnDesktop);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_001_AddApplicationManifest(void *_this, const char * pchApplicationManifestFullPath, bool bTemporary)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchApplicationManifestFullPath);
    push_bool_parameter(bTemporary);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_001_RemoveApplicationManifest(void *_this, const char * pchApplicationManifestFullPath)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchApplicationManifestFullPath);
    return 0;
}

bool __thiscall IVRApplications_001_IsApplicationInstalled(void *_this, const char * pchAppKey)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    return 0;
}

uint32_t __thiscall IVRApplications_001_GetApplicationCount(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_001_GetApplicationKeyByIndex(void *_this, uint32_t unApplicationIndex, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unApplicationIndex);
    push_ptr_parameter(pchAppKeyBuffer);
    push_uint32_parameter(unAppKeyBufferLen);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_001_GetApplicationKeyByProcessId(void *_this, uint32_t unProcessId, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unProcessId);
    push_ptr_parameter(pchAppKeyBuffer);
    push_uint32_parameter(unAppKeyBufferLen);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_001_LaunchApplication(void *_this, const char * pchAppKey)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_001_LaunchDashboardOverlay(void *_this, const char * pchAppKey)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_001_IdentifyApplication(void *_this, uint32_t unProcessId, const char * pchAppKey)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unProcessId);
    push_ptr_parameter(pchAppKey);
    return 0;
}

uint32_t __thiscall IVRApplications_001_GetApplicationProcessId(void *_this, const char * pchAppKey)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    return 0;
}

const char * __thiscall IVRApplications_001_GetApplicationsErrorNameFromEnum(void *_this, EVRApplicationError error)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(error);
    return 0;
}

uint32_t __thiscall IVRApplications_001_GetApplicationPropertyString(void *_this, const char * pchAppKey, EVRApplicationProperty eProperty, char * pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen, EVRApplicationError * peError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    push_uint32_parameter(eProperty);
    push_ptr_parameter(pchPropertyValueBuffer);
    push_uint32_parameter(unPropertyValueBufferLen);
    push_ptr_parameter(peError);
    return 0;
}

bool __thiscall IVRApplications_001_GetApplicationPropertyBool(void *_this, const char * pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError * peError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    push_uint32_parameter(eProperty);
    push_ptr_parameter(peError);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_001_GetHomeApplication(void *_this, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKeyBuffer);
    push_uint32_parameter(unAppKeyBufferLen);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_001_SetHomeApplication(void *_this, const char * pchAppKey)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_001_SetApplicationAutoLaunch(void *_this, const char * pchAppKey, bool bAutoLaunch)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    push_bool_parameter(bAutoLaunch);
    return 0;
}

bool __thiscall IVRApplications_001_GetApplicationAutoLaunch(void *_this, const char * pchAppKey)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_001_GetStartingApplication(void *_this, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKeyBuffer);
    push_uint32_parameter(unAppKeyBufferLen);
    return 0;
}

EVRApplicationTransitionState __thiscall IVRApplications_001_GetTransitionState(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

EVRApplicationError __thiscall IVRApplications_001_PerformApplicationPrelaunchCheck(void *_this, const char * pchAppKey)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchAppKey);
    return 0;
}

const char * __thiscall IVRApplications_001_GetApplicationsTransitionStateNameFromEnum(void *_this, EVRApplicationTransitionState state)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(state);
    return 0;
}

ChaperoneCalibrationState __thiscall IVRChaperone_002_GetCalibrationState(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVRChaperone_002_GetSoftBoundsInfo(void *_this, ChaperoneSoftBoundsInfo_t * pInfo)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pInfo);
    return 0;
}

bool __thiscall IVRChaperone_002_GetHardBoundsInfo(void *_this, HmdQuad_t * pQuadsBuffer, uint32_t * punQuadsCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pQuadsBuffer);
    push_ptr_parameter(punQuadsCount);
    return 0;
}

bool __thiscall IVRChaperone_002_GetSeatedBoundsInfo(void *_this, ChaperoneSeatedBoundsInfo_t * pInfo)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pInfo);
    return 0;
}

void __thiscall IVRChaperone_002_ReloadInfo(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRChaperone_002_SetSceneColor(void *_this, HmdColor_t color)
{
    push_ptr_parameter(_this);
    push_HmdColor_parameter(color);
}

void __thiscall IVRChaperone_002_GetBoundsColor(void *_this, HmdColor_t * pOutputColorArray, int nNumOutputColors)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pOutputColorArray);
    push_uint32_parameter(nNumOutputColors);
}

bool __thiscall IVRChaperone_002_AreBoundsVisible(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRChaperone_002_ForceBoundsVisible(void *_this, bool bForce)
{
    push_ptr_parameter(_this);
    push_bool_parameter(bForce);
}

uint32_t __thiscall IVRCompositor_008_GetLastError(void *_this, char * pchBuffer, uint32_t unBufferSize)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchBuffer);
    push_uint32_parameter(unBufferSize);
    return 0;
}

void __thiscall IVRCompositor_008_SetVSync(void *_this, bool bVSync)
{
    push_ptr_parameter(_this);
    push_bool_parameter(bVSync);
}

bool __thiscall IVRCompositor_008_GetVSync(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_008_SetGamma(void *_this, float fGamma)
{
    push_ptr_parameter(_this);
    push_float_parameter(fGamma);
}

float __thiscall IVRCompositor_008_GetGamma(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

VRCompositorError __thiscall IVRCompositor_008_WaitGetPoses(void *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pRenderPoseArray);
    push_uint32_parameter(unRenderPoseArrayCount);
    push_ptr_parameter(pGamePoseArray);
    push_uint32_parameter(unGamePoseArrayCount);
    return 0;
}

VRCompositorError __thiscall IVRCompositor_008_Submit(void *_this, Hmd_Eye eEye, GraphicsAPIConvention eTextureType, void * pTexture, VRTextureBounds_t * pBounds, VRSubmitFlags_t nSubmitFlags)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_uint32_parameter(eTextureType);
    push_ptr_parameter(pTexture);
    push_ptr_parameter(pBounds);
    push_uint32_parameter(nSubmitFlags);
    return 0;
}

void __thiscall IVRCompositor_008_ClearLastSubmittedFrame(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_008_GetFrameTiming(void *_this, Compositor_FrameTiming * pTiming, uint32_t unFramesAgo)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pTiming);
    push_uint32_parameter(unFramesAgo);
    return 0;
}

void __thiscall IVRCompositor_008_FadeToColor(void *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground)
{
    push_ptr_parameter(_this);
    push_float_parameter(fSeconds);
    push_float_parameter(fRed);
    push_float_parameter(fGreen);
    push_float_parameter(fBlue);
    push_float_parameter(fAlpha);
    push_bool_parameter(bBackground);
}

void __thiscall IVRCompositor_008_FadeGrid(void *_this, float fSeconds, bool bFadeIn)
{
    push_ptr_parameter(_this);
    push_float_parameter(fSeconds);
    push_bool_parameter(bFadeIn);
}

void __thiscall IVRCompositor_008_SetSkyboxOverride(void *_this, GraphicsAPIConvention eTextureType, void * pFront, void * pBack, void * pLeft, void * pRight, void * pTop, void * pBottom)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eTextureType);
    push_ptr_parameter(pFront);
    push_ptr_parameter(pBack);
    push_ptr_parameter(pLeft);
    push_ptr_parameter(pRight);
    push_ptr_parameter(pTop);
    push_ptr_parameter(pBottom);
}

void __thiscall IVRCompositor_008_ClearSkyboxOverride(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_008_CompositorBringToFront(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_008_CompositorGoToBack(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_008_CompositorQuit(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_008_IsFullscreen(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_008_SetTrackingSpace(void *_this, TrackingUniverseOrigin eOrigin)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
}

TrackingUniverseOrigin __thiscall IVRCompositor_008_GetTrackingSpace(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRCompositor_008_GetCurrentSceneFocusProcess(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVRCompositor_008_CanRenderScene(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_008_ShowMirrorWindow(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_008_HideMirrorWindow(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_008_CompositorDumpImages(void *_this)
{
    push_ptr_parameter(_this);
}

float __thiscall IVRCompositor_008_GetFrameTimeRemaining(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRCompositor_008_GetLastFrameRenderer(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRNotifications_001_GetErrorString(void *_this, NotificationError_t error, char * pchBuffer, uint32_t unBufferSize)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(error);
    push_ptr_parameter(pchBuffer);
    push_uint32_parameter(unBufferSize);
    return 0;
}

NotificationError_t __thiscall IVRNotifications_001_CreateNotification(void *_this, VROverlayHandle_t ulOverlayHandle, uint64_t ulUserValue, const char * strType, const char * strText, const char * strCategory, NotificationBitmap * photo, VRNotificationId * notificationId)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint64_parameter(ulUserValue);
    push_ptr_parameter(strType);
    push_ptr_parameter(strText);
    push_ptr_parameter(strCategory);
    push_ptr_parameter(photo);
    push_ptr_parameter(notificationId);
    return 0;
}

NotificationError_t __thiscall IVRNotifications_001_DismissNotification(void *_this, VRNotificationId notificationId)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(notificationId);
    return 0;
}

VROverlayError __thiscall IVROverlay_005_FindOverlay(void *_this, const char * pchOverlayKey, VROverlayHandle_t * pOverlayHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayKey);
    push_ptr_parameter(pOverlayHandle);
    return 0;
}

VROverlayError __thiscall IVROverlay_005_CreateOverlay(void *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pOverlayHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayKey);
    push_ptr_parameter(pchOverlayFriendlyName);
    push_ptr_parameter(pOverlayHandle);
    return 0;
}

VROverlayError __thiscall IVROverlay_005_DestroyOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

VROverlayError __thiscall IVROverlay_005_SetHighQualityOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

VROverlayHandle_t __thiscall IVROverlay_005_GetHighQualityOverlay(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVROverlay_005_GetOverlayKey(void *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, VROverlayError * pError)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(pError);
    return 0;
}

uint32_t __thiscall IVROverlay_005_GetOverlayName(void *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, VROverlayError * pError)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(pError);
    return 0;
}

VROverlayError __thiscall IVROverlay_005_GetOverlayImageData(void *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unBufferSize, uint32_t * punWidth, uint32_t * punHeight)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvBuffer);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(punWidth);
    push_ptr_parameter(punHeight);
    return 0;
}

const char * __thiscall IVROverlay_005_GetOverlayErrorNameFromEnum(void *_this, VROverlayError error)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(error);
    return 0;
}

VROverlayError __thiscall IVROverlay_005_SetOverlayFlag(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eOverlayFlag);
    push_bool_parameter(bEnabled);
    return 0;
}

VROverlayError __thiscall IVROverlay_005_GetOverlayFlag(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool * pbEnabled)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eOverlayFlag);
    push_ptr_parameter(pbEnabled);
    return 0;
}

VROverlayError __thiscall IVROverlay_005_SetOverlayColor(void *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fRed);
    push_float_parameter(fGreen);
    push_float_parameter(fBlue);
    return 0;
}

VROverlayError __thiscall IVROverlay_005_GetOverlayColor(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfRed, float * pfGreen, float * pfBlue)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfRed);
    push_ptr_parameter(pfGreen);
    push_ptr_parameter(pfBlue);
    return 0;
}

VROverlayError __thiscall IVROverlay_005_SetOverlayAlpha(void *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fAlpha);
    return 0;
}

VROverlayError __thiscall IVROverlay_005_GetOverlayAlpha(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfAlpha)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfAlpha);
    return 0;
}

VROverlayError __thiscall IVROverlay_005_SetOverlayGamma(void *_this, VROverlayHandle_t ulOverlayHandle, float fGamma)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fGamma);
    return 0;
}

VROverlayError __thiscall IVROverlay_005_GetOverlayGamma(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfGamma)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfGamma);
    return 0;
}

VROverlayError __thiscall IVROverlay_005_SetOverlayWidthInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fWidthInMeters);
    return 0;
}

VROverlayError __thiscall IVROverlay_005_GetOverlayWidthInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfWidthInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfWidthInMeters);
    return 0;
}

VROverlayError __thiscall IVROverlay_005_SetOverlayAutoCurveDistanceRangeInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fMinDistanceInMeters);
    push_float_parameter(fMaxDistanceInMeters);
    return 0;
}

VROverlayError __thiscall IVROverlay_005_GetOverlayAutoCurveDistanceRangeInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfMinDistanceInMeters, float * pfMaxDistanceInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfMinDistanceInMeters);
    push_ptr_parameter(pfMaxDistanceInMeters);
    return 0;
}

VROverlayError __thiscall IVROverlay_005_SetOverlayTextureBounds(void *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pOverlayTextureBounds);
    return 0;
}

VROverlayError __thiscall IVROverlay_005_GetOverlayTextureBounds(void *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pOverlayTextureBounds);
    return 0;
}

VROverlayError __thiscall IVROverlay_005_GetOverlayTransformType(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType * peTransformType)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peTransformType);
    return 0;
}

VROverlayError __thiscall IVROverlay_005_SetOverlayTransformAbsolute(void *_this, VROverlayHandle_t ulOverlayHandle, TrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eTrackingOrigin);
    push_ptr_parameter(pmatTrackingOriginToOverlayTransform);
    return 0;
}

VROverlayError __thiscall IVROverlay_005_GetOverlayTransformAbsolute(void *_this, VROverlayHandle_t ulOverlayHandle, TrackingUniverseOrigin * peTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peTrackingOrigin);
    push_ptr_parameter(pmatTrackingOriginToOverlayTransform);
    return 0;
}

VROverlayError __thiscall IVROverlay_005_SetOverlayTransformTrackedDeviceRelative(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unTrackedDevice);
    push_ptr_parameter(pmatTrackedDeviceToOverlayTransform);
    return 0;
}

VROverlayError __thiscall IVROverlay_005_GetOverlayTransformTrackedDeviceRelative(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(punTrackedDevice);
    push_ptr_parameter(pmatTrackedDeviceToOverlayTransform);
    return 0;
}

VROverlayError __thiscall IVROverlay_005_ShowOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

VROverlayError __thiscall IVROverlay_005_HideOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

bool __thiscall IVROverlay_005_IsOverlayVisible(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

bool __thiscall IVROverlay_005_PollNextOverlayEvent(void *_this, VROverlayHandle_t ulOverlayHandle, VREvent_t * pEvent)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pEvent);
    return 0;
}

VROverlayError __thiscall IVROverlay_005_GetOverlayInputMethod(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod * peInputMethod)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peInputMethod);
    return 0;
}

VROverlayError __thiscall IVROverlay_005_SetOverlayInputMethod(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eInputMethod);
    return 0;
}

VROverlayError __thiscall IVROverlay_005_GetOverlayMouseScale(void *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvecMouseScale);
    return 0;
}

VROverlayError __thiscall IVROverlay_005_SetOverlayMouseScale(void *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvecMouseScale);
    return 0;
}

bool __thiscall IVROverlay_005_ComputeOverlayIntersection(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t * pParams, VROverlayIntersectionResults_t * pResults)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pParams);
    push_ptr_parameter(pResults);
    return 0;
}

bool __thiscall IVROverlay_005_HandleControllerOverlayInteractionAsMouse(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unControllerDeviceIndex);
    return 0;
}

bool __thiscall IVROverlay_005_IsFocusOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

VROverlayError __thiscall IVROverlay_005_SetOverlayTexture(void *_this, VROverlayHandle_t ulOverlayHandle, GraphicsAPIConvention eTextureType, void * pTexture)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eTextureType);
    push_ptr_parameter(pTexture);
    return 0;
}

VROverlayError __thiscall IVROverlay_005_ClearOverlayTexture(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

VROverlayError __thiscall IVROverlay_005_SetOverlayRaw(void *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvBuffer);
    push_uint32_parameter(unWidth);
    push_uint32_parameter(unHeight);
    push_uint32_parameter(unDepth);
    return 0;
}

VROverlayError __thiscall IVROverlay_005_SetOverlayFromFile(void *_this, VROverlayHandle_t ulOverlayHandle, const char * pchFilePath)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchFilePath);
    return 0;
}

VROverlayError __thiscall IVROverlay_005_CreateDashboardOverlay(void *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pMainHandle, VROverlayHandle_t * pThumbnailHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayKey);
    push_ptr_parameter(pchOverlayFriendlyName);
    push_ptr_parameter(pMainHandle);
    push_ptr_parameter(pThumbnailHandle);
    return 0;
}

bool __thiscall IVROverlay_005_IsDashboardVisible(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVROverlay_005_IsActiveDashboardOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

VROverlayError __thiscall IVROverlay_005_SetDashboardOverlaySceneProcess(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unProcessId);
    return 0;
}

VROverlayError __thiscall IVROverlay_005_GetDashboardOverlaySceneProcess(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * punProcessId)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(punProcessId);
    return 0;
}

void __thiscall IVROverlay_005_ShowDashboard(void *_this, const char * pchOverlayToShow)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayToShow);
}

VROverlayError __thiscall IVROverlay_005_ShowKeyboard(void *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eInputMode);
    push_uint32_parameter(eLineInputMode);
    push_ptr_parameter(pchDescription);
    push_uint32_parameter(unCharMax);
    push_ptr_parameter(pchExistingText);
    push_bool_parameter(bUseMinimalMode);
    return 0;
}

uint32_t __thiscall IVROverlay_005_GetKeyboardText(void *_this, char * pchText, uint32_t cchText)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchText);
    push_uint32_parameter(cchText);
    return 0;
}

void __thiscall IVROverlay_005_HideKeyboard(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRRenderModels_001_LoadRenderModel(void *_this, const char * pchRenderModelName, RenderModel_t * pRenderModel)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchRenderModelName);
    push_ptr_parameter(pRenderModel);
    return 0;
}

void __thiscall IVRRenderModels_001_FreeRenderModel(void *_this, RenderModel_t * pRenderModel)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pRenderModel);
}

uint32_t __thiscall IVRRenderModels_001_GetRenderModelName(void *_this, uint32_t unRenderModelIndex, char * pchRenderModelName, uint32_t unRenderModelNameLen)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unRenderModelIndex);
    push_ptr_parameter(pchRenderModelName);
    push_uint32_parameter(unRenderModelNameLen);
    return 0;
}

uint32_t __thiscall IVRRenderModels_001_GetRenderModelCount(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRSystem_005_GetWindowBounds(void *_this, int32_t * pnX, int32_t * pnY, uint32_t * pnWidth, uint32_t * pnHeight)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pnX);
    push_ptr_parameter(pnY);
    push_ptr_parameter(pnWidth);
    push_ptr_parameter(pnHeight);
}

void __thiscall IVRSystem_005_GetRecommendedRenderTargetSize(void *_this, uint32_t * pnWidth, uint32_t * pnHeight)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pnWidth);
    push_ptr_parameter(pnHeight);
}

void __thiscall IVRSystem_005_GetEyeOutputViewport(void *_this, Hmd_Eye eEye, uint32_t * pnX, uint32_t * pnY, uint32_t * pnWidth, uint32_t * pnHeight)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pnX);
    push_ptr_parameter(pnY);
    push_ptr_parameter(pnWidth);
    push_ptr_parameter(pnHeight);
}

HmdMatrix44_t *__thiscall IVRSystem_005_GetProjectionMatrix(void *_this, HmdMatrix44_t *_r, Hmd_Eye eEye, float fNearZ, float fFarZ, GraphicsAPIConvention eProjType)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(eEye);
    push_float_parameter(fNearZ);
    push_float_parameter(fFarZ);
    push_uint32_parameter(eProjType);
    return 0;
}

void __thiscall IVRSystem_005_GetProjectionRaw(void *_this, Hmd_Eye eEye, float * pfLeft, float * pfRight, float * pfTop, float * pfBottom)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pfLeft);
    push_ptr_parameter(pfRight);
    push_ptr_parameter(pfTop);
    push_ptr_parameter(pfBottom);
}

DistortionCoordinates_t *__thiscall IVRSystem_005_ComputeDistortion(void *_this, DistortionCoordinates_t *_r, Hmd_Eye eEye, float fU, float fV)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(eEye);
    push_float_parameter(fU);
    push_float_parameter(fV);
    return 0;
}

HmdMatrix34_t *__thiscall IVRSystem_005_GetEyeToHeadTransform(void *_this, HmdMatrix34_t *_r, Hmd_Eye eEye)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(eEye);
    return 0;
}

bool __thiscall IVRSystem_005_GetTimeSinceLastVsync(void *_this, float * pfSecondsSinceLastVsync, uint64_t * pulFrameCounter)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pfSecondsSinceLastVsync);
    push_ptr_parameter(pulFrameCounter);
    return 0;
}

int32_t __thiscall IVRSystem_005_GetD3D9AdapterIndex(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRSystem_005_GetDXGIOutputInfo(void *_this, int32_t * pnAdapterIndex, int32_t * pnAdapterOutputIndex)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pnAdapterIndex);
    push_ptr_parameter(pnAdapterOutputIndex);
}

bool __thiscall IVRSystem_005_AttachToWindow(void *_this, void * hWnd)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(hWnd);
    return 0;
}

void __thiscall IVRSystem_005_GetDeviceToAbsoluteTrackingPose(void *_this, TrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t * pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
    push_float_parameter(fPredictedSecondsToPhotonsFromNow);
    push_ptr_parameter(pTrackedDevicePoseArray);
    push_uint32_parameter(unTrackedDevicePoseArrayCount);
}

void __thiscall IVRSystem_005_ResetSeatedZeroPose(void *_this)
{
    push_ptr_parameter(_this);
}

HmdMatrix34_t *__thiscall IVRSystem_005_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(void *_this, HmdMatrix34_t *_r)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    return 0;
}

uint32_t __thiscall IVRSystem_005_GetSortedTrackedDeviceIndicesOfClass(void *_this, TrackedDeviceClass eTrackedDeviceClass, TrackedDeviceIndex_t * punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eTrackedDeviceClass);
    push_ptr_parameter(punTrackedDeviceIndexArray);
    push_uint32_parameter(unTrackedDeviceIndexArrayCount);
    push_uint32_parameter(unRelativeToTrackedDeviceIndex);
    return 0;
}

TrackedDeviceClass __thiscall IVRSystem_005_GetTrackedDeviceClass(void *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    return 0;
}

bool __thiscall IVRSystem_005_IsTrackedDeviceConnected(void *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    return 0;
}

bool __thiscall IVRSystem_005_GetBoolTrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

float __thiscall IVRSystem_005_GetFloatTrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

int32_t __thiscall IVRSystem_005_GetInt32TrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

uint64_t __thiscall IVRSystem_005_GetUint64TrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

HmdMatrix34_t *__thiscall IVRSystem_005_GetMatrix34TrackedDeviceProperty(void *_this, HmdMatrix34_t *_r, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

uint32_t __thiscall IVRSystem_005_GetStringTrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, char * pchValue, uint32_t unBufferSize, TrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(pError);
    return 0;
}

const char * __thiscall IVRSystem_005_GetPropErrorNameFromEnum(void *_this, TrackedPropertyError error)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(error);
    return 0;
}

bool __thiscall IVRSystem_005_PollNextEvent(void *_this, VREvent_t * pEvent)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pEvent);
    return 0;
}

bool __thiscall IVRSystem_005_PollNextEventWithPose(void *_this, TrackingUniverseOrigin eOrigin, VREvent_t * pEvent, TrackedDevicePose_t * pTrackedDevicePose)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
    push_ptr_parameter(pEvent);
    push_ptr_parameter(pTrackedDevicePose);
    return 0;
}

const char * __thiscall IVRSystem_005_GetEventTypeNameFromEnum(void *_this, EVREventType eType)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eType);
    return 0;
}

HiddenAreaMesh_t *__thiscall IVRSystem_005_GetHiddenAreaMesh(void *_this, HiddenAreaMesh_t *_r, Hmd_Eye eEye)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(eEye);
    return 0;
}

bool __thiscall IVRSystem_005_GetControllerState(void *_this, TrackedDeviceIndex_t unControllerDeviceIndex, VRControllerState_t * pControllerState)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unControllerDeviceIndex);
    push_ptr_parameter(pControllerState);
    return 0;
}

bool __thiscall IVRSystem_005_GetControllerStateWithPose(void *_this, TrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, VRControllerState_t * pControllerState, TrackedDevicePose_t * pTrackedDevicePose)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
    push_uint32_parameter(unControllerDeviceIndex);
    push_ptr_parameter(pControllerState);
    push_ptr_parameter(pTrackedDevicePose);
    return 0;
}

void __thiscall IVRSystem_005_TriggerHapticPulse(void *_this, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unControllerDeviceIndex);
    push_uint32_parameter(unAxisId);
    push_uint32_parameter(usDurationMicroSec);
}

const char * __thiscall IVRSystem_005_GetButtonIdNameFromEnum(void *_this, EVRButtonId eButtonId)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eButtonId);
    return 0;
}

const char * __thiscall IVRSystem_005_GetControllerAxisTypeNameFromEnum(void *_this, EVRControllerAxisType eAxisType)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eAxisType);
    return 0;
}

bool __thiscall IVRSystem_005_CaptureInputFocus(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRSystem_005_ReleaseInputFocus(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRSystem_005_IsInputFocusCapturedByAnotherProcess(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRSystem_005_DriverDebugRequest(void *_this, TrackedDeviceIndex_t unDeviceIndex, const char * pchRequest, char * pchResponseBuffer, uint32_t unResponseBufferSize)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_ptr_parameter(pchRequest);
    push_ptr_parameter(pchResponseBuffer);
    push_uint32_parameter(unResponseBufferSize);
    return 0;
}

uint32_t __thiscall IVRCompositor_007_GetLastError(void *_this, char * pchBuffer, uint32_t unBufferSize)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchBuffer);
    push_uint32_parameter(unBufferSize);
    return 0;
}

void __thiscall IVRCompositor_007_SetVSync(void *_this, bool bVSync)
{
    push_ptr_parameter(_this);
    push_bool_parameter(bVSync);
}

bool __thiscall IVRCompositor_007_GetVSync(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_007_SetGamma(void *_this, float fGamma)
{
    push_ptr_parameter(_this);
    push_float_parameter(fGamma);
}

float __thiscall IVRCompositor_007_GetGamma(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

VRCompositorError __thiscall IVRCompositor_007_WaitGetPoses(void *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pRenderPoseArray);
    push_uint32_parameter(unRenderPoseArrayCount);
    push_ptr_parameter(pGamePoseArray);
    push_uint32_parameter(unGamePoseArrayCount);
    return 0;
}

VRCompositorError __thiscall IVRCompositor_007_Submit(void *_this, Hmd_Eye eEye, GraphicsAPIConvention eTextureType, void * pTexture, VRTextureBounds_t * pBounds)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_uint32_parameter(eTextureType);
    push_ptr_parameter(pTexture);
    push_ptr_parameter(pBounds);
    return 0;
}

void __thiscall IVRCompositor_007_ClearLastSubmittedFrame(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_007_GetFrameTiming(void *_this, Compositor_FrameTiming * pTiming, uint32_t unFramesAgo)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pTiming);
    push_uint32_parameter(unFramesAgo);
    return 0;
}

void __thiscall IVRCompositor_007_FadeToColor(void *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground)
{
    push_ptr_parameter(_this);
    push_float_parameter(fSeconds);
    push_float_parameter(fRed);
    push_float_parameter(fGreen);
    push_float_parameter(fBlue);
    push_float_parameter(fAlpha);
    push_bool_parameter(bBackground);
}

void __thiscall IVRCompositor_007_FadeGrid(void *_this, float fSeconds, bool bFadeIn)
{
    push_ptr_parameter(_this);
    push_float_parameter(fSeconds);
    push_bool_parameter(bFadeIn);
}

void __thiscall IVRCompositor_007_CompositorBringToFront(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_007_CompositorGoToBack(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_007_CompositorQuit(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_007_IsFullscreen(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_007_SetTrackingSpace(void *_this, TrackingUniverseOrigin eOrigin)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
}

TrackingUniverseOrigin __thiscall IVRCompositor_007_GetTrackingSpace(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRCompositor_007_GetCurrentSceneFocusProcess(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVRCompositor_007_CanRenderScene(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

VROverlayError __thiscall IVROverlay_004_FindOverlay(void *_this, const char * pchOverlayKey, VROverlayHandle_t * pOverlayHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayKey);
    push_ptr_parameter(pOverlayHandle);
    return 0;
}

VROverlayError __thiscall IVROverlay_004_CreateOverlay(void *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pOverlayHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayKey);
    push_ptr_parameter(pchOverlayFriendlyName);
    push_ptr_parameter(pOverlayHandle);
    return 0;
}

VROverlayError __thiscall IVROverlay_004_DestroyOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

VROverlayError __thiscall IVROverlay_004_SetHighQualityOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

VROverlayHandle_t __thiscall IVROverlay_004_GetHighQualityOverlay(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVROverlay_004_GetOverlayKey(void *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, VROverlayError * pError)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(pError);
    return 0;
}

uint32_t __thiscall IVROverlay_004_GetOverlayName(void *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, VROverlayError * pError)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(pError);
    return 0;
}

VROverlayError __thiscall IVROverlay_004_GetOverlayImageData(void *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unBufferSize, uint32_t * punWidth, uint32_t * punHeight)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvBuffer);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(punWidth);
    push_ptr_parameter(punHeight);
    return 0;
}

const char * __thiscall IVROverlay_004_GetOverlayErrorNameFromEnum(void *_this, VROverlayError error)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(error);
    return 0;
}

VROverlayError __thiscall IVROverlay_004_SetOverlayFlag(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eOverlayFlag);
    push_bool_parameter(bEnabled);
    return 0;
}

VROverlayError __thiscall IVROverlay_004_GetOverlayFlag(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool * pbEnabled)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eOverlayFlag);
    push_ptr_parameter(pbEnabled);
    return 0;
}

VROverlayError __thiscall IVROverlay_004_SetOverlayColor(void *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fRed);
    push_float_parameter(fGreen);
    push_float_parameter(fBlue);
    return 0;
}

VROverlayError __thiscall IVROverlay_004_GetOverlayColor(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfRed, float * pfGreen, float * pfBlue)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfRed);
    push_ptr_parameter(pfGreen);
    push_ptr_parameter(pfBlue);
    return 0;
}

VROverlayError __thiscall IVROverlay_004_SetOverlayAlpha(void *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fAlpha);
    return 0;
}

VROverlayError __thiscall IVROverlay_004_GetOverlayAlpha(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfAlpha)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfAlpha);
    return 0;
}

VROverlayError __thiscall IVROverlay_004_SetOverlayGamma(void *_this, VROverlayHandle_t ulOverlayHandle, float fGamma)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fGamma);
    return 0;
}

VROverlayError __thiscall IVROverlay_004_GetOverlayGamma(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfGamma)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfGamma);
    return 0;
}

VROverlayError __thiscall IVROverlay_004_SetOverlayWidthInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fWidthInMeters);
    return 0;
}

VROverlayError __thiscall IVROverlay_004_GetOverlayWidthInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfWidthInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfWidthInMeters);
    return 0;
}

VROverlayError __thiscall IVROverlay_004_SetOverlayAutoCurveDistanceRangeInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fMinDistanceInMeters);
    push_float_parameter(fMaxDistanceInMeters);
    return 0;
}

VROverlayError __thiscall IVROverlay_004_GetOverlayAutoCurveDistanceRangeInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfMinDistanceInMeters, float * pfMaxDistanceInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfMinDistanceInMeters);
    push_ptr_parameter(pfMaxDistanceInMeters);
    return 0;
}

VROverlayError __thiscall IVROverlay_004_SetOverlayTextureBounds(void *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pOverlayTextureBounds);
    return 0;
}

VROverlayError __thiscall IVROverlay_004_GetOverlayTextureBounds(void *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pOverlayTextureBounds);
    return 0;
}

VROverlayError __thiscall IVROverlay_004_GetOverlayTransformType(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType * peTransformType)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peTransformType);
    return 0;
}

VROverlayError __thiscall IVROverlay_004_SetOverlayTransformAbsolute(void *_this, VROverlayHandle_t ulOverlayHandle, TrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eTrackingOrigin);
    push_ptr_parameter(pmatTrackingOriginToOverlayTransform);
    return 0;
}

VROverlayError __thiscall IVROverlay_004_GetOverlayTransformAbsolute(void *_this, VROverlayHandle_t ulOverlayHandle, TrackingUniverseOrigin * peTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peTrackingOrigin);
    push_ptr_parameter(pmatTrackingOriginToOverlayTransform);
    return 0;
}

VROverlayError __thiscall IVROverlay_004_SetOverlayTransformTrackedDeviceRelative(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unTrackedDevice);
    push_ptr_parameter(pmatTrackedDeviceToOverlayTransform);
    return 0;
}

VROverlayError __thiscall IVROverlay_004_GetOverlayTransformTrackedDeviceRelative(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(punTrackedDevice);
    push_ptr_parameter(pmatTrackedDeviceToOverlayTransform);
    return 0;
}

VROverlayError __thiscall IVROverlay_004_ShowOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

VROverlayError __thiscall IVROverlay_004_HideOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

bool __thiscall IVROverlay_004_IsOverlayVisible(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

bool __thiscall IVROverlay_004_PollNextOverlayEvent(void *_this, VROverlayHandle_t ulOverlayHandle, VREvent_t * pEvent)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pEvent);
    return 0;
}

VROverlayError __thiscall IVROverlay_004_GetOverlayInputMethod(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod * peInputMethod)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peInputMethod);
    return 0;
}

VROverlayError __thiscall IVROverlay_004_SetOverlayInputMethod(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eInputMethod);
    return 0;
}

VROverlayError __thiscall IVROverlay_004_GetOverlayMouseScale(void *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvecMouseScale);
    return 0;
}

VROverlayError __thiscall IVROverlay_004_SetOverlayMouseScale(void *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvecMouseScale);
    return 0;
}

bool __thiscall IVROverlay_004_ComputeOverlayIntersection(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t * pParams, VROverlayIntersectionResults_t * pResults)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pParams);
    push_ptr_parameter(pResults);
    return 0;
}

bool __thiscall IVROverlay_004_HandleControllerOverlayInteractionAsMouse(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unControllerDeviceIndex);
    return 0;
}

VROverlayError __thiscall IVROverlay_004_SetOverlayTexture(void *_this, VROverlayHandle_t ulOverlayHandle, GraphicsAPIConvention eTextureType, void * pTexture)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eTextureType);
    push_ptr_parameter(pTexture);
    return 0;
}

VROverlayError __thiscall IVROverlay_004_ClearOverlayTexture(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

VROverlayError __thiscall IVROverlay_004_SetOverlayRaw(void *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvBuffer);
    push_uint32_parameter(unWidth);
    push_uint32_parameter(unHeight);
    push_uint32_parameter(unDepth);
    return 0;
}

VROverlayError __thiscall IVROverlay_004_SetOverlayFromFile(void *_this, VROverlayHandle_t ulOverlayHandle, const char * pchFilePath)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchFilePath);
    return 0;
}

VROverlayError __thiscall IVROverlay_004_CreateDashboardOverlay(void *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pMainHandle, VROverlayHandle_t * pThumbnailHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayKey);
    push_ptr_parameter(pchOverlayFriendlyName);
    push_ptr_parameter(pMainHandle);
    push_ptr_parameter(pThumbnailHandle);
    return 0;
}

bool __thiscall IVROverlay_004_IsDashboardVisible(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVROverlay_004_IsActiveDashboardOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

VROverlayError __thiscall IVROverlay_004_SetDashboardOverlaySceneProcess(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unProcessId);
    return 0;
}

VROverlayError __thiscall IVROverlay_004_GetDashboardOverlaySceneProcess(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * punProcessId)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(punProcessId);
    return 0;
}

void __thiscall IVROverlay_004_ShowDashboard(void *_this, const char * pchOverlayToShow)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayToShow);
}

VROverlayError __thiscall IVROverlay_003_FindOverlay(void *_this, const char * pchOverlayKey, VROverlayHandle_t * pOverlayHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayKey);
    push_ptr_parameter(pOverlayHandle);
    return 0;
}

VROverlayError __thiscall IVROverlay_003_CreateOverlay(void *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pOverlayHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayKey);
    push_ptr_parameter(pchOverlayFriendlyName);
    push_ptr_parameter(pOverlayHandle);
    return 0;
}

VROverlayError __thiscall IVROverlay_003_DestroyOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

VROverlayError __thiscall IVROverlay_003_SetHighQualityOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

VROverlayHandle_t __thiscall IVROverlay_003_GetHighQualityOverlay(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVROverlay_003_GetOverlayKey(void *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, VROverlayError * pError)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(pError);
    return 0;
}

uint32_t __thiscall IVROverlay_003_GetOverlayName(void *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, VROverlayError * pError)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(pError);
    return 0;
}

VROverlayError __thiscall IVROverlay_003_GetOverlayImageData(void *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unBufferSize, uint32_t * punWidth, uint32_t * punHeight)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvBuffer);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(punWidth);
    push_ptr_parameter(punHeight);
    return 0;
}

const char * __thiscall IVROverlay_003_GetOverlayErrorNameFromEnum(void *_this, VROverlayError error)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(error);
    return 0;
}

VROverlayError __thiscall IVROverlay_003_SetOverlayFlag(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eOverlayFlag);
    push_bool_parameter(bEnabled);
    return 0;
}

VROverlayError __thiscall IVROverlay_003_GetOverlayFlag(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool * pbEnabled)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eOverlayFlag);
    push_ptr_parameter(pbEnabled);
    return 0;
}

VROverlayError __thiscall IVROverlay_003_SetOverlayColor(void *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fRed);
    push_float_parameter(fGreen);
    push_float_parameter(fBlue);
    return 0;
}

VROverlayError __thiscall IVROverlay_003_GetOverlayColor(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfRed, float * pfGreen, float * pfBlue)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfRed);
    push_ptr_parameter(pfGreen);
    push_ptr_parameter(pfBlue);
    return 0;
}

VROverlayError __thiscall IVROverlay_003_SetOverlayAlpha(void *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fAlpha);
    return 0;
}

VROverlayError __thiscall IVROverlay_003_GetOverlayAlpha(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfAlpha)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfAlpha);
    return 0;
}

VROverlayError __thiscall IVROverlay_003_SetOverlayGamma(void *_this, VROverlayHandle_t ulOverlayHandle, float fGamma)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fGamma);
    return 0;
}

VROverlayError __thiscall IVROverlay_003_GetOverlayGamma(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfGamma)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfGamma);
    return 0;
}

VROverlayError __thiscall IVROverlay_003_SetOverlayWidthInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fWidthInMeters);
    return 0;
}

VROverlayError __thiscall IVROverlay_003_GetOverlayWidthInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfWidthInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfWidthInMeters);
    return 0;
}

VROverlayError __thiscall IVROverlay_003_SetOverlayTextureBounds(void *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pOverlayTextureBounds);
    return 0;
}

VROverlayError __thiscall IVROverlay_003_GetOverlayTextureBounds(void *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pOverlayTextureBounds);
    return 0;
}

VROverlayError __thiscall IVROverlay_003_GetOverlayTransformType(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType * peTransformType)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peTransformType);
    return 0;
}

VROverlayError __thiscall IVROverlay_003_SetOverlayTransformAbsolute(void *_this, VROverlayHandle_t ulOverlayHandle, TrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eTrackingOrigin);
    push_ptr_parameter(pmatTrackingOriginToOverlayTransform);
    return 0;
}

VROverlayError __thiscall IVROverlay_003_GetOverlayTransformAbsolute(void *_this, VROverlayHandle_t ulOverlayHandle, TrackingUniverseOrigin * peTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peTrackingOrigin);
    push_ptr_parameter(pmatTrackingOriginToOverlayTransform);
    return 0;
}

VROverlayError __thiscall IVROverlay_003_SetOverlayTransformTrackedDeviceRelative(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unTrackedDevice);
    push_ptr_parameter(pmatTrackedDeviceToOverlayTransform);
    return 0;
}

VROverlayError __thiscall IVROverlay_003_GetOverlayTransformTrackedDeviceRelative(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(punTrackedDevice);
    push_ptr_parameter(pmatTrackedDeviceToOverlayTransform);
    return 0;
}

VROverlayError __thiscall IVROverlay_003_ShowOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

VROverlayError __thiscall IVROverlay_003_HideOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

bool __thiscall IVROverlay_003_IsOverlayVisible(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

bool __thiscall IVROverlay_003_PollNextOverlayEvent(void *_this, VROverlayHandle_t ulOverlayHandle, VREvent_t * pEvent)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pEvent);
    return 0;
}

VROverlayError __thiscall IVROverlay_003_GetOverlayInputMethod(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod * peInputMethod)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peInputMethod);
    return 0;
}

VROverlayError __thiscall IVROverlay_003_SetOverlayInputMethod(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eInputMethod);
    return 0;
}

VROverlayError __thiscall IVROverlay_003_GetOverlayMouseScale(void *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvecMouseScale);
    return 0;
}

VROverlayError __thiscall IVROverlay_003_SetOverlayMouseScale(void *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvecMouseScale);
    return 0;
}

bool __thiscall IVROverlay_003_ComputeOverlayIntersection(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t * pParams, VROverlayIntersectionResults_t * pResults)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pParams);
    push_ptr_parameter(pResults);
    return 0;
}

bool __thiscall IVROverlay_003_HandleControllerOverlayInteractionAsMouse(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unControllerDeviceIndex);
    return 0;
}

VROverlayError __thiscall IVROverlay_003_SetOverlayTexture(void *_this, VROverlayHandle_t ulOverlayHandle, GraphicsAPIConvention eTextureType, void * pTexture)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eTextureType);
    push_ptr_parameter(pTexture);
    return 0;
}

VROverlayError __thiscall IVROverlay_003_ClearOverlayTexture(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

VROverlayError __thiscall IVROverlay_003_SetOverlayRaw(void *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvBuffer);
    push_uint32_parameter(unWidth);
    push_uint32_parameter(unHeight);
    push_uint32_parameter(unDepth);
    return 0;
}

VROverlayError __thiscall IVROverlay_003_SetOverlayFromFile(void *_this, VROverlayHandle_t ulOverlayHandle, const char * pchFilePath)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchFilePath);
    return 0;
}

VROverlayError __thiscall IVROverlay_003_CreateDashboardOverlay(void *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pMainHandle, VROverlayHandle_t * pThumbnailHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayKey);
    push_ptr_parameter(pchOverlayFriendlyName);
    push_ptr_parameter(pMainHandle);
    push_ptr_parameter(pThumbnailHandle);
    return 0;
}

bool __thiscall IVROverlay_003_IsDashboardVisible(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVROverlay_003_IsActiveDashboardOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

VROverlayError __thiscall IVROverlay_003_SetDashboardOverlaySceneProcess(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unProcessId);
    return 0;
}

VROverlayError __thiscall IVROverlay_003_GetDashboardOverlaySceneProcess(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * punProcessId)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(punProcessId);
    return 0;
}

void __thiscall IVROverlay_003_ShowDashboard(void *_this, const char * pchOverlayToShow)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayToShow);
}

VROverlayError __thiscall IVROverlay_002_FindOverlay(void *_this, const char * pchOverlayKey, VROverlayHandle_t * pOverlayHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayKey);
    push_ptr_parameter(pOverlayHandle);
    return 0;
}

VROverlayError __thiscall IVROverlay_002_CreateOverlay(void *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pOverlayHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayKey);
    push_ptr_parameter(pchOverlayFriendlyName);
    push_ptr_parameter(pOverlayHandle);
    return 0;
}

VROverlayError __thiscall IVROverlay_002_DestroyOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

VROverlayError __thiscall IVROverlay_002_SetHighQualityOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

VROverlayHandle_t __thiscall IVROverlay_002_GetHighQualityOverlay(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

const char * __thiscall IVROverlay_002_GetOverlayErrorNameFromEnum(void *_this, VROverlayError error)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(error);
    return 0;
}

VROverlayError __thiscall IVROverlay_002_SetOverlayFlag(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eOverlayFlag);
    push_bool_parameter(bEnabled);
    return 0;
}

VROverlayError __thiscall IVROverlay_002_GetOverlayFlag(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool * pbEnabled)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eOverlayFlag);
    push_ptr_parameter(pbEnabled);
    return 0;
}

VROverlayError __thiscall IVROverlay_002_SetOverlayColor(void *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fRed);
    push_float_parameter(fGreen);
    push_float_parameter(fBlue);
    return 0;
}

VROverlayError __thiscall IVROverlay_002_GetOverlayColor(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfRed, float * pfGreen, float * pfBlue)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfRed);
    push_ptr_parameter(pfGreen);
    push_ptr_parameter(pfBlue);
    return 0;
}

VROverlayError __thiscall IVROverlay_002_SetOverlayAlpha(void *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fAlpha);
    return 0;
}

VROverlayError __thiscall IVROverlay_002_GetOverlayAlpha(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfAlpha)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfAlpha);
    return 0;
}

VROverlayError __thiscall IVROverlay_002_SetOverlayGamma(void *_this, VROverlayHandle_t ulOverlayHandle, float fGamma)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fGamma);
    return 0;
}

VROverlayError __thiscall IVROverlay_002_GetOverlayGamma(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfGamma)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfGamma);
    return 0;
}

VROverlayError __thiscall IVROverlay_002_SetOverlayWidthInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fWidthInMeters);
    return 0;
}

VROverlayError __thiscall IVROverlay_002_GetOverlayWidthInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfWidthInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfWidthInMeters);
    return 0;
}

VROverlayError __thiscall IVROverlay_002_SetOverlayTextureBounds(void *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pOverlayTextureBounds);
    return 0;
}

VROverlayError __thiscall IVROverlay_002_GetOverlayTextureBounds(void *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pOverlayTextureBounds);
    return 0;
}

VROverlayError __thiscall IVROverlay_002_GetOverlayTransformType(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType * peTransformType)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peTransformType);
    return 0;
}

VROverlayError __thiscall IVROverlay_002_SetOverlayTransformAbsolute(void *_this, VROverlayHandle_t ulOverlayHandle, TrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eTrackingOrigin);
    push_ptr_parameter(pmatTrackingOriginToOverlayTransform);
    return 0;
}

VROverlayError __thiscall IVROverlay_002_GetOverlayTransformAbsolute(void *_this, VROverlayHandle_t ulOverlayHandle, TrackingUniverseOrigin * peTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peTrackingOrigin);
    push_ptr_parameter(pmatTrackingOriginToOverlayTransform);
    return 0;
}

VROverlayError __thiscall IVROverlay_002_SetOverlayTransformTrackedDeviceRelative(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unTrackedDevice);
    push_ptr_parameter(pmatTrackedDeviceToOverlayTransform);
    return 0;
}

VROverlayError __thiscall IVROverlay_002_GetOverlayTransformTrackedDeviceRelative(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(punTrackedDevice);
    push_ptr_parameter(pmatTrackedDeviceToOverlayTransform);
    return 0;
}

VROverlayError __thiscall IVROverlay_002_ShowOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

VROverlayError __thiscall IVROverlay_002_HideOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

bool __thiscall IVROverlay_002_IsOverlayVisible(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

bool __thiscall IVROverlay_002_PollNextOverlayEvent(void *_this, VROverlayHandle_t ulOverlayHandle, VREvent_t * pEvent)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pEvent);
    return 0;
}

VROverlayError __thiscall IVROverlay_002_GetOverlayInputMethod(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod * peInputMethod)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peInputMethod);
    return 0;
}

VROverlayError __thiscall IVROverlay_002_SetOverlayInputMethod(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eInputMethod);
    return 0;
}

VROverlayError __thiscall IVROverlay_002_GetOverlayMouseScale(void *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvecMouseScale);
    return 0;
}

VROverlayError __thiscall IVROverlay_002_SetOverlayMouseScale(void *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvecMouseScale);
    return 0;
}

bool __thiscall IVROverlay_002_ComputeOverlayIntersection(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t * pParams, VROverlayIntersectionResults_t * pResults)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pParams);
    push_ptr_parameter(pResults);
    return 0;
}

bool __thiscall IVROverlay_002_HandleControllerOverlayInteractionAsMouse(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unControllerDeviceIndex);
    return 0;
}

VROverlayError __thiscall IVROverlay_002_SetOverlayTexture(void *_this, VROverlayHandle_t ulOverlayHandle, GraphicsAPIConvention eTextureType, void * pTexture)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eTextureType);
    push_ptr_parameter(pTexture);
    return 0;
}

VROverlayError __thiscall IVROverlay_002_ClearOverlayTexture(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

VROverlayError __thiscall IVROverlay_002_SetOverlayRaw(void *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvBuffer);
    push_uint32_parameter(unWidth);
    push_uint32_parameter(unHeight);
    push_uint32_parameter(unDepth);
    return 0;
}

VROverlayError __thiscall IVROverlay_002_SetOverlayFromFile(void *_this, VROverlayHandle_t ulOverlayHandle, const char * pchFilePath)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchFilePath);
    return 0;
}

VROverlayError __thiscall IVROverlay_002_CreateDashboardOverlay(void *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pMainHandle, VROverlayHandle_t * pThumbnailHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayKey);
    push_ptr_parameter(pchOverlayFriendlyName);
    push_ptr_parameter(pMainHandle);
    push_ptr_parameter(pThumbnailHandle);
    return 0;
}

bool __thiscall IVROverlay_002_IsDashboardVisible(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVROverlay_002_IsActiveDashboardOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

VROverlayError __thiscall IVROverlay_002_SetDashboardOverlaySceneProcess(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unProcessId);
    return 0;
}

VROverlayError __thiscall IVROverlay_002_GetDashboardOverlaySceneProcess(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * punProcessId)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(punProcessId);
    return 0;
}

void __thiscall IVRSystem_004_GetWindowBounds(void *_this, int32_t * pnX, int32_t * pnY, uint32_t * pnWidth, uint32_t * pnHeight)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pnX);
    push_ptr_parameter(pnY);
    push_ptr_parameter(pnWidth);
    push_ptr_parameter(pnHeight);
}

void __thiscall IVRSystem_004_GetRecommendedRenderTargetSize(void *_this, uint32_t * pnWidth, uint32_t * pnHeight)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pnWidth);
    push_ptr_parameter(pnHeight);
}

void __thiscall IVRSystem_004_GetEyeOutputViewport(void *_this, Hmd_Eye eEye, uint32_t * pnX, uint32_t * pnY, uint32_t * pnWidth, uint32_t * pnHeight)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pnX);
    push_ptr_parameter(pnY);
    push_ptr_parameter(pnWidth);
    push_ptr_parameter(pnHeight);
}

HmdMatrix44_t *__thiscall IVRSystem_004_GetProjectionMatrix(void *_this, HmdMatrix44_t *_r, Hmd_Eye eEye, float fNearZ, float fFarZ, GraphicsAPIConvention eProjType)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(eEye);
    push_float_parameter(fNearZ);
    push_float_parameter(fFarZ);
    push_uint32_parameter(eProjType);
    return 0;
}

void __thiscall IVRSystem_004_GetProjectionRaw(void *_this, Hmd_Eye eEye, float * pfLeft, float * pfRight, float * pfTop, float * pfBottom)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pfLeft);
    push_ptr_parameter(pfRight);
    push_ptr_parameter(pfTop);
    push_ptr_parameter(pfBottom);
}

DistortionCoordinates_t *__thiscall IVRSystem_004_ComputeDistortion(void *_this, DistortionCoordinates_t *_r, Hmd_Eye eEye, float fU, float fV)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(eEye);
    push_float_parameter(fU);
    push_float_parameter(fV);
    return 0;
}

HmdMatrix34_t *__thiscall IVRSystem_004_GetEyeToHeadTransform(void *_this, HmdMatrix34_t *_r, Hmd_Eye eEye)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(eEye);
    return 0;
}

bool __thiscall IVRSystem_004_GetTimeSinceLastVsync(void *_this, float * pfSecondsSinceLastVsync, uint64_t * pulFrameCounter)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pfSecondsSinceLastVsync);
    push_ptr_parameter(pulFrameCounter);
    return 0;
}

int32_t __thiscall IVRSystem_004_GetD3D9AdapterIndex(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRSystem_004_GetDXGIOutputInfo(void *_this, int32_t * pnAdapterIndex, int32_t * pnAdapterOutputIndex)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pnAdapterIndex);
    push_ptr_parameter(pnAdapterOutputIndex);
}

bool __thiscall IVRSystem_004_AttachToWindow(void *_this, void * hWnd)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(hWnd);
    return 0;
}

void __thiscall IVRSystem_004_GetDeviceToAbsoluteTrackingPose(void *_this, TrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t * pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
    push_float_parameter(fPredictedSecondsToPhotonsFromNow);
    push_ptr_parameter(pTrackedDevicePoseArray);
    push_uint32_parameter(unTrackedDevicePoseArrayCount);
}

void __thiscall IVRSystem_004_ResetSeatedZeroPose(void *_this)
{
    push_ptr_parameter(_this);
}

HmdMatrix34_t *__thiscall IVRSystem_004_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(void *_this, HmdMatrix34_t *_r)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    return 0;
}

TrackedDeviceClass __thiscall IVRSystem_004_GetTrackedDeviceClass(void *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    return 0;
}

bool __thiscall IVRSystem_004_IsTrackedDeviceConnected(void *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    return 0;
}

bool __thiscall IVRSystem_004_GetBoolTrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

float __thiscall IVRSystem_004_GetFloatTrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

int32_t __thiscall IVRSystem_004_GetInt32TrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

uint64_t __thiscall IVRSystem_004_GetUint64TrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

HmdMatrix34_t *__thiscall IVRSystem_004_GetMatrix34TrackedDeviceProperty(void *_this, HmdMatrix34_t *_r, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

uint32_t __thiscall IVRSystem_004_GetStringTrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, char * pchValue, uint32_t unBufferSize, TrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(pError);
    return 0;
}

const char * __thiscall IVRSystem_004_GetPropErrorNameFromEnum(void *_this, TrackedPropertyError error)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(error);
    return 0;
}

bool __thiscall IVRSystem_004_PollNextEvent(void *_this, VREvent_t * pEvent)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pEvent);
    return 0;
}

bool __thiscall IVRSystem_004_PollNextEventWithPose(void *_this, TrackingUniverseOrigin eOrigin, VREvent_t * pEvent, TrackedDevicePose_t * pTrackedDevicePose)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
    push_ptr_parameter(pEvent);
    push_ptr_parameter(pTrackedDevicePose);
    return 0;
}

const char * __thiscall IVRSystem_004_GetEventTypeNameFromEnum(void *_this, EVREventType eType)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eType);
    return 0;
}

HiddenAreaMesh_t *__thiscall IVRSystem_004_GetHiddenAreaMesh(void *_this, HiddenAreaMesh_t *_r, Hmd_Eye eEye)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(eEye);
    return 0;
}

bool __thiscall IVRSystem_004_GetControllerState(void *_this, TrackedDeviceIndex_t unControllerDeviceIndex, VRControllerState_t * pControllerState)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unControllerDeviceIndex);
    push_ptr_parameter(pControllerState);
    return 0;
}

bool __thiscall IVRSystem_004_GetControllerStateWithPose(void *_this, TrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, VRControllerState_t * pControllerState, TrackedDevicePose_t * pTrackedDevicePose)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
    push_uint32_parameter(unControllerDeviceIndex);
    push_ptr_parameter(pControllerState);
    push_ptr_parameter(pTrackedDevicePose);
    return 0;
}

void __thiscall IVRSystem_004_TriggerHapticPulse(void *_this, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unControllerDeviceIndex);
    push_uint32_parameter(unAxisId);
    push_uint32_parameter(usDurationMicroSec);
}

const char * __thiscall IVRSystem_004_GetButtonIdNameFromEnum(void *_this, EVRButtonId eButtonId)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eButtonId);
    return 0;
}

const char * __thiscall IVRSystem_004_GetControllerAxisTypeNameFromEnum(void *_this, EVRControllerAxisType eAxisType)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eAxisType);
    return 0;
}

bool __thiscall IVRSystem_004_CaptureInputFocus(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRSystem_004_ReleaseInputFocus(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRSystem_004_IsInputFocusCapturedByAnotherProcess(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRSystem_004_DriverDebugRequest(void *_this, TrackedDeviceIndex_t unDeviceIndex, const char * pchRequest, char * pchResponseBuffer, uint32_t unResponseBufferSize)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_ptr_parameter(pchRequest);
    push_ptr_parameter(pchResponseBuffer);
    push_uint32_parameter(unResponseBufferSize);
    return 0;
}

uint32_t __thiscall IVRCompositor_006_GetLastError(void *_this, char * pchBuffer, uint32_t unBufferSize)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchBuffer);
    push_uint32_parameter(unBufferSize);
    return 0;
}

void __thiscall IVRCompositor_006_SetVSync(void *_this, bool bVSync)
{
    push_ptr_parameter(_this);
    push_bool_parameter(bVSync);
}

bool __thiscall IVRCompositor_006_GetVSync(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_006_SetGamma(void *_this, float fGamma)
{
    push_ptr_parameter(_this);
    push_float_parameter(fGamma);
}

float __thiscall IVRCompositor_006_GetGamma(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_006_SetGraphicsDevice(void *_this, Compositor_DeviceType eType, void * pDevice)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eType);
    push_ptr_parameter(pDevice);
}

VRCompositorError __thiscall IVRCompositor_006_WaitGetPoses(void *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pRenderPoseArray);
    push_uint32_parameter(unRenderPoseArrayCount);
    push_ptr_parameter(pGamePoseArray);
    push_uint32_parameter(unGamePoseArrayCount);
    return 0;
}

VRCompositorError __thiscall IVRCompositor_006_Submit(void *_this, Hmd_Eye eEye, void * pTexture, VRTextureBounds_t * pBounds)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pTexture);
    push_ptr_parameter(pBounds);
    return 0;
}

void __thiscall IVRCompositor_006_ClearLastSubmittedFrame(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_006_GetFrameTiming(void *_this, Compositor_FrameTiming * pTiming, uint32_t unFramesAgo)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pTiming);
    push_uint32_parameter(unFramesAgo);
    return 0;
}

void __thiscall IVRCompositor_006_FadeToColor(void *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground)
{
    push_ptr_parameter(_this);
    push_float_parameter(fSeconds);
    push_float_parameter(fRed);
    push_float_parameter(fGreen);
    push_float_parameter(fBlue);
    push_float_parameter(fAlpha);
    push_bool_parameter(bBackground);
}

void __thiscall IVRCompositor_006_FadeGrid(void *_this, float fSeconds, bool bFadeIn)
{
    push_ptr_parameter(_this);
    push_float_parameter(fSeconds);
    push_bool_parameter(bFadeIn);
}

void __thiscall IVRCompositor_006_CompositorBringToFront(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_006_CompositorGoToBack(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_006_CompositorQuit(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_006_IsFullscreen(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_006_SetTrackingSpace(void *_this, TrackingUniverseOrigin eOrigin)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
}

TrackingUniverseOrigin __thiscall IVRCompositor_006_GetTrackingSpace(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRCompositor_006_GetCurrentSceneFocusProcess(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVRCompositor_006_CanRenderScene(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

VROverlayError __thiscall IVROverlay_001_FindOverlay(void *_this, const char * pchOverlayKey, VROverlayHandle_t * pOverlayHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayKey);
    push_ptr_parameter(pOverlayHandle);
    return 0;
}

VROverlayError __thiscall IVROverlay_001_CreateOverlay(void *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pOverlayHandle)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchOverlayKey);
    push_ptr_parameter(pchOverlayFriendlyName);
    push_ptr_parameter(pOverlayHandle);
    return 0;
}

VROverlayError __thiscall IVROverlay_001_DestroyOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

VROverlayError __thiscall IVROverlay_001_SetHighQualityOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

VROverlayHandle_t __thiscall IVROverlay_001_GetHighQualityOverlay(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

const char * __thiscall IVROverlay_001_GetOverlayErrorNameFromEnum(void *_this, VROverlayError error)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(error);
    return 0;
}

VROverlayError __thiscall IVROverlay_001_SetOverlayFlag(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eOverlayFlag);
    push_bool_parameter(bEnabled);
    return 0;
}

VROverlayError __thiscall IVROverlay_001_GetOverlayFlag(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool * pbEnabled)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eOverlayFlag);
    push_ptr_parameter(pbEnabled);
    return 0;
}

VROverlayError __thiscall IVROverlay_001_SetOverlayAlpha(void *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fAlpha);
    return 0;
}

VROverlayError __thiscall IVROverlay_001_GetOverlayAlpha(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfAlpha)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfAlpha);
    return 0;
}

VROverlayError __thiscall IVROverlay_001_SetOverlayGamma(void *_this, VROverlayHandle_t ulOverlayHandle, float fGamma)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fGamma);
    return 0;
}

VROverlayError __thiscall IVROverlay_001_GetOverlayGamma(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfGamma)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfGamma);
    return 0;
}

VROverlayError __thiscall IVROverlay_001_SetOverlayWidthInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_float_parameter(fWidthInMeters);
    return 0;
}

VROverlayError __thiscall IVROverlay_001_GetOverlayWidthInMeters(void *_this, VROverlayHandle_t ulOverlayHandle, float * pfWidthInMeters)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pfWidthInMeters);
    return 0;
}

VROverlayError __thiscall IVROverlay_001_SetOverlayTextureBounds(void *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pOverlayTextureBounds);
    return 0;
}

VROverlayError __thiscall IVROverlay_001_GetOverlayTextureBounds(void *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pOverlayTextureBounds);
    return 0;
}

VROverlayError __thiscall IVROverlay_001_GetOverlayTransformType(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType * peTransformType)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peTransformType);
    return 0;
}

VROverlayError __thiscall IVROverlay_001_SetOverlayTransformAbsolute(void *_this, VROverlayHandle_t ulOverlayHandle, TrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eTrackingOrigin);
    push_ptr_parameter(pmatTrackingOriginToOverlayTransform);
    return 0;
}

VROverlayError __thiscall IVROverlay_001_GetOverlayTransformAbsolute(void *_this, VROverlayHandle_t ulOverlayHandle, TrackingUniverseOrigin * peTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peTrackingOrigin);
    push_ptr_parameter(pmatTrackingOriginToOverlayTransform);
    return 0;
}

VROverlayError __thiscall IVROverlay_001_SetOverlayTransformTrackedDeviceRelative(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unTrackedDevice);
    push_ptr_parameter(pmatTrackedDeviceToOverlayTransform);
    return 0;
}

VROverlayError __thiscall IVROverlay_001_GetOverlayTransformTrackedDeviceRelative(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(punTrackedDevice);
    push_ptr_parameter(pmatTrackedDeviceToOverlayTransform);
    return 0;
}

VROverlayError __thiscall IVROverlay_001_GetOverlayVisibility(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayVisibility * peOverlayVisibility)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peOverlayVisibility);
    return 0;
}

VROverlayError __thiscall IVROverlay_001_SetOverlayVisibility(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayVisibility eOverlayVisibility)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eOverlayVisibility);
    return 0;
}

VROverlayError __thiscall IVROverlay_001_ShowOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

VROverlayError __thiscall IVROverlay_001_HideOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

bool __thiscall IVROverlay_001_IsOverlayVisible(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

bool __thiscall IVROverlay_001_PollNextOverlayEvent(void *_this, VROverlayHandle_t ulOverlayHandle, VREvent_t * pEvent)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pEvent);
    return 0;
}

VROverlayError __thiscall IVROverlay_001_GetOverlayInputMethod(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod * peInputMethod)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(peInputMethod);
    return 0;
}

VROverlayError __thiscall IVROverlay_001_SetOverlayInputMethod(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(eInputMethod);
    return 0;
}

VROverlayError __thiscall IVROverlay_001_GetOverlayMouseScale(void *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvecMouseScale);
    return 0;
}

VROverlayError __thiscall IVROverlay_001_SetOverlayMouseScale(void *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvecMouseScale);
    return 0;
}

bool __thiscall IVROverlay_001_ComputeOverlayIntersection(void *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t * pParams, VROverlayIntersectionResults_t * pResults)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pParams);
    push_ptr_parameter(pResults);
    return 0;
}

bool __thiscall IVROverlay_001_HandleControllerOverlayInteractionAsMouse(void *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unControllerDeviceIndex);
    return 0;
}

VROverlayError __thiscall IVROverlay_001_SetOverlayTexture(void *_this, VROverlayHandle_t ulOverlayHandle, void * pTexture)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pTexture);
    return 0;
}

VROverlayError __thiscall IVROverlay_001_SetOverlayRaw(void *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pvBuffer);
    push_uint32_parameter(unWidth);
    push_uint32_parameter(unHeight);
    push_uint32_parameter(unDepth);
    return 0;
}

VROverlayError __thiscall IVROverlay_001_SetOverlayFromFile(void *_this, VROverlayHandle_t ulOverlayHandle, const char * pchFilePath)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(pchFilePath);
    return 0;
}

bool __thiscall IVROverlay_001_IsSystemOverlayVisible(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVROverlay_001_IsActiveSystemOverlay(void *_this, VROverlayHandle_t ulOverlayHandle)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    return 0;
}

VROverlayError __thiscall IVROverlay_001_SetSystemOverlaySceneProcess(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_uint32_parameter(unProcessId);
    return 0;
}

VROverlayError __thiscall IVROverlay_001_GetSystemOverlaySceneProcess(void *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * punProcessId)
{
    push_ptr_parameter(_this);
    push_uint64_parameter(ulOverlayHandle);
    push_ptr_parameter(punProcessId);
    return 0;
}

void __thiscall IVRSystem_003_GetWindowBounds(void *_this, int32_t * pnX, int32_t * pnY, uint32_t * pnWidth, uint32_t * pnHeight)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pnX);
    push_ptr_parameter(pnY);
    push_ptr_parameter(pnWidth);
    push_ptr_parameter(pnHeight);
}

void __thiscall IVRSystem_003_GetRecommendedRenderTargetSize(void *_this, uint32_t * pnWidth, uint32_t * pnHeight)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pnWidth);
    push_ptr_parameter(pnHeight);
}

void __thiscall IVRSystem_003_GetEyeOutputViewport(void *_this, Hmd_Eye eEye, uint32_t * pnX, uint32_t * pnY, uint32_t * pnWidth, uint32_t * pnHeight)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pnX);
    push_ptr_parameter(pnY);
    push_ptr_parameter(pnWidth);
    push_ptr_parameter(pnHeight);
}

HmdMatrix44_t *__thiscall IVRSystem_003_GetProjectionMatrix(void *_this, HmdMatrix44_t *_r, Hmd_Eye eEye, float fNearZ, float fFarZ, GraphicsAPIConvention eProjType)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(eEye);
    push_float_parameter(fNearZ);
    push_float_parameter(fFarZ);
    push_uint32_parameter(eProjType);
    return 0;
}

void __thiscall IVRSystem_003_GetProjectionRaw(void *_this, Hmd_Eye eEye, float * pfLeft, float * pfRight, float * pfTop, float * pfBottom)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pfLeft);
    push_ptr_parameter(pfRight);
    push_ptr_parameter(pfTop);
    push_ptr_parameter(pfBottom);
}

DistortionCoordinates_t *__thiscall IVRSystem_003_ComputeDistortion(void *_this, DistortionCoordinates_t *_r, Hmd_Eye eEye, float fU, float fV)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(eEye);
    push_float_parameter(fU);
    push_float_parameter(fV);
    return 0;
}

HmdMatrix34_t *__thiscall IVRSystem_003_GetEyeToHeadTransform(void *_this, HmdMatrix34_t *_r, Hmd_Eye eEye)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(eEye);
    return 0;
}

bool __thiscall IVRSystem_003_GetTimeSinceLastVsync(void *_this, float * pfSecondsSinceLastVsync, uint64_t * pulFrameCounter)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pfSecondsSinceLastVsync);
    push_ptr_parameter(pulFrameCounter);
    return 0;
}

int32_t __thiscall IVRSystem_003_GetD3D9AdapterIndex(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRSystem_003_GetDXGIOutputInfo(void *_this, int32_t * pnAdapterIndex, int32_t * pnAdapterOutputIndex)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pnAdapterIndex);
    push_ptr_parameter(pnAdapterOutputIndex);
}

bool __thiscall IVRSystem_003_AttachToWindow(void *_this, void * hWnd)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(hWnd);
    return 0;
}

void __thiscall IVRSystem_003_GetDeviceToAbsoluteTrackingPose(void *_this, TrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t * pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
    push_float_parameter(fPredictedSecondsToPhotonsFromNow);
    push_ptr_parameter(pTrackedDevicePoseArray);
    push_uint32_parameter(unTrackedDevicePoseArrayCount);
}

void __thiscall IVRSystem_003_ResetSeatedZeroPose(void *_this)
{
    push_ptr_parameter(_this);
}

HmdMatrix34_t *__thiscall IVRSystem_003_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(void *_this, HmdMatrix34_t *_r)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    return 0;
}

bool __thiscall IVRSystem_003_LoadRenderModel(void *_this, const char * pchRenderModelName, RenderModel_t * pRenderModel)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchRenderModelName);
    push_ptr_parameter(pRenderModel);
    return 0;
}

void __thiscall IVRSystem_003_FreeRenderModel(void *_this, RenderModel_t * pRenderModel)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pRenderModel);
}

TrackedDeviceClass __thiscall IVRSystem_003_GetTrackedDeviceClass(void *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    return 0;
}

bool __thiscall IVRSystem_003_IsTrackedDeviceConnected(void *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    return 0;
}

bool __thiscall IVRSystem_003_GetBoolTrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

float __thiscall IVRSystem_003_GetFloatTrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

int32_t __thiscall IVRSystem_003_GetInt32TrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

uint64_t __thiscall IVRSystem_003_GetUint64TrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

HmdMatrix34_t *__thiscall IVRSystem_003_GetMatrix34TrackedDeviceProperty(void *_this, HmdMatrix34_t *_r, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pError);
    return 0;
}

uint32_t __thiscall IVRSystem_003_GetStringTrackedDeviceProperty(void *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, char * pchValue, uint32_t unBufferSize, TrackedPropertyError * pError)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unDeviceIndex);
    push_uint32_parameter(prop);
    push_ptr_parameter(pchValue);
    push_uint32_parameter(unBufferSize);
    push_ptr_parameter(pError);
    return 0;
}

const char * __thiscall IVRSystem_003_GetPropErrorNameFromEnum(void *_this, TrackedPropertyError error)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(error);
    return 0;
}

bool __thiscall IVRSystem_003_PollNextEvent(void *_this, VREvent_t * pEvent)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pEvent);
    return 0;
}

bool __thiscall IVRSystem_003_PollNextEventWithPose(void *_this, TrackingUniverseOrigin eOrigin, VREvent_t * pEvent, TrackedDevicePose_t * pTrackedDevicePose)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
    push_ptr_parameter(pEvent);
    push_ptr_parameter(pTrackedDevicePose);
    return 0;
}

const char * __thiscall IVRSystem_003_GetEventTypeNameFromEnum(void *_this, EVREventType eType)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eType);
    return 0;
}

HiddenAreaMesh_t *__thiscall IVRSystem_003_GetHiddenAreaMesh(void *_this, HiddenAreaMesh_t *_r, Hmd_Eye eEye)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(_r);
    push_uint32_parameter(eEye);
    return 0;
}

bool __thiscall IVRSystem_003_GetControllerState(void *_this, TrackedDeviceIndex_t unControllerDeviceIndex, VRControllerState_t * pControllerState)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unControllerDeviceIndex);
    push_ptr_parameter(pControllerState);
    return 0;
}

bool __thiscall IVRSystem_003_GetControllerStateWithPose(void *_this, TrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, VRControllerState_t * pControllerState, TrackedDevicePose_t * pTrackedDevicePose)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
    push_uint32_parameter(unControllerDeviceIndex);
    push_ptr_parameter(pControllerState);
    push_ptr_parameter(pTrackedDevicePose);
    return 0;
}

void __thiscall IVRSystem_003_TriggerHapticPulse(void *_this, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(unControllerDeviceIndex);
    push_uint32_parameter(unAxisId);
    push_uint32_parameter(usDurationMicroSec);
}

const char * __thiscall IVRSystem_003_GetButtonIdNameFromEnum(void *_this, EVRButtonId eButtonId)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eButtonId);
    return 0;
}

const char * __thiscall IVRSystem_003_GetControllerAxisTypeNameFromEnum(void *_this, EVRControllerAxisType eAxisType)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eAxisType);
    return 0;
}

bool __thiscall IVRSystem_003_HandleControllerOverlayInteractionAsMouse(void *_this, Compositor_OverlaySettings * overlaySettings, HmdVector2_t vecWindowClientPositionOnScreen, HmdVector2_t vecWindowClientSize, TrackedDeviceIndex_t unControllerDeviceIndex, EVRControllerEventOutputType eOutputType)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(overlaySettings);
    push_HmdVector2_parameter(vecWindowClientPositionOnScreen);
    push_HmdVector2_parameter(vecWindowClientSize);
    push_uint32_parameter(unControllerDeviceIndex);
    push_uint32_parameter(eOutputType);
    return 0;
}

bool __thiscall IVRSystem_003_CaptureInputFocus(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRSystem_003_ReleaseInputFocus(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRSystem_003_IsInputFocusCapturedByAnotherProcess(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

uint32_t __thiscall IVRCompositor_005_GetLastError(void *_this, char * pchBuffer, uint32_t unBufferSize)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchBuffer);
    push_uint32_parameter(unBufferSize);
    return 0;
}

void __thiscall IVRCompositor_005_SetVSync(void *_this, bool bVSync)
{
    push_ptr_parameter(_this);
    push_bool_parameter(bVSync);
}

bool __thiscall IVRCompositor_005_GetVSync(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_005_SetGamma(void *_this, float fGamma)
{
    push_ptr_parameter(_this);
    push_float_parameter(fGamma);
}

float __thiscall IVRCompositor_005_GetGamma(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

void __thiscall IVRCompositor_005_SetGraphicsDevice(void *_this, Compositor_DeviceType eType, void * pDevice)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eType);
    push_ptr_parameter(pDevice);
}

void __thiscall IVRCompositor_005_WaitGetPoses(void *_this, TrackedDevicePose_t * pPoseArray, uint32_t unPoseArrayCount)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pPoseArray);
    push_uint32_parameter(unPoseArrayCount);
}

void __thiscall IVRCompositor_005_Submit(void *_this, Hmd_Eye eEye, void * pTexture, Compositor_TextureBounds * pBounds)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eEye);
    push_ptr_parameter(pTexture);
    push_ptr_parameter(pBounds);
}

void __thiscall IVRCompositor_005_ClearLastSubmittedFrame(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_005_GetOverlayDefaults(void *_this, Compositor_OverlaySettings * pSettings)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pSettings);
}

void __thiscall IVRCompositor_005_SetOverlay(void *_this, void * pTexture, Compositor_OverlaySettings * pSettings)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pTexture);
    push_ptr_parameter(pSettings);
}

void __thiscall IVRCompositor_005_SetOverlayRaw(void *_this, void * buffer, uint32_t width, uint32_t height, uint32_t depth, Compositor_OverlaySettings * pSettings)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(buffer);
    push_uint32_parameter(width);
    push_uint32_parameter(height);
    push_uint32_parameter(depth);
    push_ptr_parameter(pSettings);
}

void __thiscall IVRCompositor_005_SetOverlayFromFile(void *_this, const char * pchFilePath, Compositor_OverlaySettings * pSettings)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pchFilePath);
    push_ptr_parameter(pSettings);
}

void __thiscall IVRCompositor_005_ClearOverlay(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_005_GetFrameTiming(void *_this, Compositor_FrameTiming * pTiming, uint32_t unFramesAgo)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pTiming);
    push_uint32_parameter(unFramesAgo);
    return 0;
}

void __thiscall IVRCompositor_005_FadeToColor(void *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground)
{
    push_ptr_parameter(_this);
    push_float_parameter(fSeconds);
    push_float_parameter(fRed);
    push_float_parameter(fGreen);
    push_float_parameter(fBlue);
    push_float_parameter(fAlpha);
    push_bool_parameter(bBackground);
}

void __thiscall IVRCompositor_005_FadeGrid(void *_this, float fSeconds, bool bFadeIn)
{
    push_ptr_parameter(_this);
    push_float_parameter(fSeconds);
    push_bool_parameter(bFadeIn);
}

void __thiscall IVRCompositor_005_CompositorBringToFront(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_005_CompositorGoToBack(void *_this)
{
    push_ptr_parameter(_this);
}

void __thiscall IVRCompositor_005_CompositorQuit(void *_this)
{
    push_ptr_parameter(_this);
}

bool __thiscall IVRCompositor_005_IsFullscreen(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}

bool __thiscall IVRCompositor_005_ComputeOverlayIntersection(void *_this, Compositor_OverlaySettings * pSettings, float fAspectRatio, TrackingUniverseOrigin eOrigin, HmdVector3_t vSource, HmdVector3_t vDirection, HmdVector2_t * pvecIntersectionUV, HmdVector3_t * pvecIntersectionTrackingSpace)
{
    push_ptr_parameter(_this);
    push_ptr_parameter(pSettings);
    push_float_parameter(fAspectRatio);
    push_uint32_parameter(eOrigin);
    push_HmdVector3_parameter(vSource);
    push_HmdVector3_parameter(vDirection);
    push_ptr_parameter(pvecIntersectionUV);
    push_ptr_parameter(pvecIntersectionTrackingSpace);
    return 0;
}

void __thiscall IVRCompositor_005_SetTrackingSpace(void *_this, TrackingUniverseOrigin eOrigin)
{
    push_ptr_parameter(_this);
    push_uint32_parameter(eOrigin);
}

TrackingUniverseOrigin __thiscall IVRCompositor_005_GetTrackingSpace(void *_this)
{
    push_ptr_parameter(_this);
    return 0;
}
