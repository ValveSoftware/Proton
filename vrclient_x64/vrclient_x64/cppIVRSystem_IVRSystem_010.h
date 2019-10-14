#ifdef __cplusplus
extern "C" {
#endif
extern void cppIVRSystem_IVRSystem_010_GetRecommendedRenderTargetSize(void *, uint32_t *, uint32_t *);
extern HmdMatrix44_t cppIVRSystem_IVRSystem_010_GetProjectionMatrix(void *, EVREye, float, float, EGraphicsAPIConvention);
extern void cppIVRSystem_IVRSystem_010_GetProjectionRaw(void *, EVREye, float *, float *, float *, float *);
extern DistortionCoordinates_t cppIVRSystem_IVRSystem_010_ComputeDistortion(void *, EVREye, float, float);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_010_GetEyeToHeadTransform(void *, EVREye);
extern bool cppIVRSystem_IVRSystem_010_GetTimeSinceLastVsync(void *, float *, uint64_t *);
extern int32_t cppIVRSystem_IVRSystem_010_GetD3D9AdapterIndex(void *);
extern void cppIVRSystem_IVRSystem_010_GetDXGIOutputInfo(void *, int32_t *);
extern bool cppIVRSystem_IVRSystem_010_IsDisplayOnDesktop(void *);
extern bool cppIVRSystem_IVRSystem_010_SetDisplayVisibility(void *, bool);
extern void cppIVRSystem_IVRSystem_010_GetDeviceToAbsoluteTrackingPose(void *, ETrackingUniverseOrigin, float, TrackedDevicePose_t *, uint32_t);
extern void cppIVRSystem_IVRSystem_010_ResetSeatedZeroPose(void *);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_010_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(void *);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_010_GetRawZeroPoseToStandingAbsoluteTrackingPose(void *);
extern uint32_t cppIVRSystem_IVRSystem_010_GetSortedTrackedDeviceIndicesOfClass(void *, ETrackedDeviceClass, TrackedDeviceIndex_t *, uint32_t, TrackedDeviceIndex_t);
extern EDeviceActivityLevel cppIVRSystem_IVRSystem_010_GetTrackedDeviceActivityLevel(void *, TrackedDeviceIndex_t);
extern void cppIVRSystem_IVRSystem_010_ApplyTransform(void *, TrackedDevicePose_t *, TrackedDevicePose_t *, HmdMatrix34_t *);
extern TrackedDeviceIndex_t cppIVRSystem_IVRSystem_010_GetTrackedDeviceIndexForControllerRole(void *, ETrackedControllerRole);
extern ETrackedControllerRole cppIVRSystem_IVRSystem_010_GetControllerRoleForTrackedDeviceIndex(void *, TrackedDeviceIndex_t);
extern ETrackedDeviceClass cppIVRSystem_IVRSystem_010_GetTrackedDeviceClass(void *, TrackedDeviceIndex_t);
extern bool cppIVRSystem_IVRSystem_010_IsTrackedDeviceConnected(void *, TrackedDeviceIndex_t);
extern bool cppIVRSystem_IVRSystem_010_GetBoolTrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, ETrackedPropertyError *);
extern float cppIVRSystem_IVRSystem_010_GetFloatTrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, ETrackedPropertyError *);
extern int32_t cppIVRSystem_IVRSystem_010_GetInt32TrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, ETrackedPropertyError *);
extern uint64_t cppIVRSystem_IVRSystem_010_GetUint64TrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, ETrackedPropertyError *);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_010_GetMatrix34TrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, ETrackedPropertyError *);
extern uint32_t cppIVRSystem_IVRSystem_010_GetStringTrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, char *, uint32_t, ETrackedPropertyError *);
extern const char * cppIVRSystem_IVRSystem_010_GetPropErrorNameFromEnum(void *, ETrackedPropertyError);
extern bool cppIVRSystem_IVRSystem_010_PollNextEvent(void *, VREvent_t *);
extern bool cppIVRSystem_IVRSystem_010_PollNextEventWithPose(void *, ETrackingUniverseOrigin, VREvent_t *, TrackedDevicePose_t *);
extern const char * cppIVRSystem_IVRSystem_010_GetEventTypeNameFromEnum(void *, EVREventType);
extern HiddenAreaMesh_t cppIVRSystem_IVRSystem_010_GetHiddenAreaMesh(void *, EVREye);
extern bool cppIVRSystem_IVRSystem_010_GetControllerState(void *, TrackedDeviceIndex_t, winVRControllerState001_t_0914 *);
extern bool cppIVRSystem_IVRSystem_010_GetControllerStateWithPose(void *, ETrackingUniverseOrigin, TrackedDeviceIndex_t, winVRControllerState001_t_0914 *, TrackedDevicePose_t *);
extern void cppIVRSystem_IVRSystem_010_TriggerHapticPulse(void *, TrackedDeviceIndex_t, uint32_t, unsigned short);
extern const char * cppIVRSystem_IVRSystem_010_GetButtonIdNameFromEnum(void *, EVRButtonId);
extern const char * cppIVRSystem_IVRSystem_010_GetControllerAxisTypeNameFromEnum(void *, EVRControllerAxisType);
extern bool cppIVRSystem_IVRSystem_010_CaptureInputFocus(void *);
extern void cppIVRSystem_IVRSystem_010_ReleaseInputFocus(void *);
extern bool cppIVRSystem_IVRSystem_010_IsInputFocusCapturedByAnotherProcess(void *);
extern uint32_t cppIVRSystem_IVRSystem_010_DriverDebugRequest(void *, TrackedDeviceIndex_t, const char *, char *, uint32_t);
extern EVRFirmwareError cppIVRSystem_IVRSystem_010_PerformFirmwareUpdate(void *, TrackedDeviceIndex_t);
extern void cppIVRSystem_IVRSystem_010_AcknowledgeQuit_Exiting(void *);
extern void cppIVRSystem_IVRSystem_010_AcknowledgeQuit_UserPrompt(void *);
extern void cppIVRSystem_IVRSystem_010_PerformanceTestEnableCapture(void *, bool);
extern void cppIVRSystem_IVRSystem_010_PerformanceTestReportFidelityLevelChange(void *, int);
#ifdef __cplusplus
}
#endif
