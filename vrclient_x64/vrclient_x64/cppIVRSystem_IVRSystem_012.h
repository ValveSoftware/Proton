#ifdef __cplusplus
extern "C" {
#endif
extern void cppIVRSystem_IVRSystem_012_GetRecommendedRenderTargetSize(void *, uint32_t *, uint32_t *);
extern HmdMatrix44_t cppIVRSystem_IVRSystem_012_GetProjectionMatrix(void *, EVREye, float, float, EGraphicsAPIConvention);
extern void cppIVRSystem_IVRSystem_012_GetProjectionRaw(void *, EVREye, float *, float *, float *, float *);
extern DistortionCoordinates_t cppIVRSystem_IVRSystem_012_ComputeDistortion(void *, EVREye, float, float);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_012_GetEyeToHeadTransform(void *, EVREye);
extern bool cppIVRSystem_IVRSystem_012_GetTimeSinceLastVsync(void *, float *, uint64_t *);
extern int32_t cppIVRSystem_IVRSystem_012_GetD3D9AdapterIndex(void *);
extern void cppIVRSystem_IVRSystem_012_GetDXGIOutputInfo(void *, int32_t *);
extern bool cppIVRSystem_IVRSystem_012_IsDisplayOnDesktop(void *);
extern bool cppIVRSystem_IVRSystem_012_SetDisplayVisibility(void *, bool);
extern void cppIVRSystem_IVRSystem_012_GetDeviceToAbsoluteTrackingPose(void *, ETrackingUniverseOrigin, float, TrackedDevicePose_t *, uint32_t);
extern void cppIVRSystem_IVRSystem_012_ResetSeatedZeroPose(void *);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_012_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(void *);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_012_GetRawZeroPoseToStandingAbsoluteTrackingPose(void *);
extern uint32_t cppIVRSystem_IVRSystem_012_GetSortedTrackedDeviceIndicesOfClass(void *, ETrackedDeviceClass, TrackedDeviceIndex_t *, uint32_t, TrackedDeviceIndex_t);
extern EDeviceActivityLevel cppIVRSystem_IVRSystem_012_GetTrackedDeviceActivityLevel(void *, TrackedDeviceIndex_t);
extern void cppIVRSystem_IVRSystem_012_ApplyTransform(void *, TrackedDevicePose_t *, TrackedDevicePose_t *, HmdMatrix34_t *);
extern TrackedDeviceIndex_t cppIVRSystem_IVRSystem_012_GetTrackedDeviceIndexForControllerRole(void *, ETrackedControllerRole);
extern ETrackedControllerRole cppIVRSystem_IVRSystem_012_GetControllerRoleForTrackedDeviceIndex(void *, TrackedDeviceIndex_t);
extern ETrackedDeviceClass cppIVRSystem_IVRSystem_012_GetTrackedDeviceClass(void *, TrackedDeviceIndex_t);
extern bool cppIVRSystem_IVRSystem_012_IsTrackedDeviceConnected(void *, TrackedDeviceIndex_t);
extern bool cppIVRSystem_IVRSystem_012_GetBoolTrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, ETrackedPropertyError *);
extern float cppIVRSystem_IVRSystem_012_GetFloatTrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, ETrackedPropertyError *);
extern int32_t cppIVRSystem_IVRSystem_012_GetInt32TrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, ETrackedPropertyError *);
extern uint64_t cppIVRSystem_IVRSystem_012_GetUint64TrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, ETrackedPropertyError *);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_012_GetMatrix34TrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, ETrackedPropertyError *);
extern uint32_t cppIVRSystem_IVRSystem_012_GetStringTrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, char *, uint32_t, ETrackedPropertyError *);
extern const char * cppIVRSystem_IVRSystem_012_GetPropErrorNameFromEnum(void *, ETrackedPropertyError);
extern bool cppIVRSystem_IVRSystem_012_PollNextEvent(void *, winVREvent_t_103 *, uint32_t);
extern bool cppIVRSystem_IVRSystem_012_PollNextEventWithPose(void *, ETrackingUniverseOrigin, winVREvent_t_103 *, uint32_t, TrackedDevicePose_t *);
extern const char * cppIVRSystem_IVRSystem_012_GetEventTypeNameFromEnum(void *, EVREventType);
extern HiddenAreaMesh_t cppIVRSystem_IVRSystem_012_GetHiddenAreaMesh(void *, EVREye);
extern bool cppIVRSystem_IVRSystem_012_GetControllerState(void *, TrackedDeviceIndex_t, winVRControllerState001_t_103 *);
extern bool cppIVRSystem_IVRSystem_012_GetControllerStateWithPose(void *, ETrackingUniverseOrigin, TrackedDeviceIndex_t, winVRControllerState001_t_103 *, TrackedDevicePose_t *);
extern void cppIVRSystem_IVRSystem_012_TriggerHapticPulse(void *, TrackedDeviceIndex_t, uint32_t, unsigned short);
extern const char * cppIVRSystem_IVRSystem_012_GetButtonIdNameFromEnum(void *, EVRButtonId);
extern const char * cppIVRSystem_IVRSystem_012_GetControllerAxisTypeNameFromEnum(void *, EVRControllerAxisType);
extern bool cppIVRSystem_IVRSystem_012_CaptureInputFocus(void *);
extern void cppIVRSystem_IVRSystem_012_ReleaseInputFocus(void *);
extern bool cppIVRSystem_IVRSystem_012_IsInputFocusCapturedByAnotherProcess(void *);
extern uint32_t cppIVRSystem_IVRSystem_012_DriverDebugRequest(void *, TrackedDeviceIndex_t, const char *, char *, uint32_t);
extern EVRFirmwareError cppIVRSystem_IVRSystem_012_PerformFirmwareUpdate(void *, TrackedDeviceIndex_t);
extern void cppIVRSystem_IVRSystem_012_AcknowledgeQuit_Exiting(void *);
extern void cppIVRSystem_IVRSystem_012_AcknowledgeQuit_UserPrompt(void *);
#ifdef __cplusplus
}
#endif
