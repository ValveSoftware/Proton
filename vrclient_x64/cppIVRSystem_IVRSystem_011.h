#ifdef __cplusplus
extern "C" {
#endif
extern void cppIVRSystem_IVRSystem_011_GetRecommendedRenderTargetSize(void *, uint32_t *, uint32_t *);
extern HmdMatrix44_t cppIVRSystem_IVRSystem_011_GetProjectionMatrix(void *, EVREye, float, float, EGraphicsAPIConvention);
extern void cppIVRSystem_IVRSystem_011_GetProjectionRaw(void *, EVREye, float *, float *, float *, float *);
extern DistortionCoordinates_t cppIVRSystem_IVRSystem_011_ComputeDistortion(void *, EVREye, float, float);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_011_GetEyeToHeadTransform(void *, EVREye);
extern bool cppIVRSystem_IVRSystem_011_GetTimeSinceLastVsync(void *, float *, uint64_t *);
extern int32_t cppIVRSystem_IVRSystem_011_GetD3D9AdapterIndex(void *);
extern void cppIVRSystem_IVRSystem_011_GetDXGIOutputInfo(void *, int32_t *);
extern bool cppIVRSystem_IVRSystem_011_IsDisplayOnDesktop(void *);
extern bool cppIVRSystem_IVRSystem_011_SetDisplayVisibility(void *, bool);
extern void cppIVRSystem_IVRSystem_011_GetDeviceToAbsoluteTrackingPose(void *, ETrackingUniverseOrigin, float, TrackedDevicePose_t *, uint32_t);
extern void cppIVRSystem_IVRSystem_011_ResetSeatedZeroPose(void *);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_011_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(void *);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_011_GetRawZeroPoseToStandingAbsoluteTrackingPose(void *);
extern uint32_t cppIVRSystem_IVRSystem_011_GetSortedTrackedDeviceIndicesOfClass(void *, ETrackedDeviceClass, TrackedDeviceIndex_t *, uint32_t, TrackedDeviceIndex_t);
extern EDeviceActivityLevel cppIVRSystem_IVRSystem_011_GetTrackedDeviceActivityLevel(void *, TrackedDeviceIndex_t);
extern void cppIVRSystem_IVRSystem_011_ApplyTransform(void *, TrackedDevicePose_t *, TrackedDevicePose_t *, HmdMatrix34_t *);
extern TrackedDeviceIndex_t cppIVRSystem_IVRSystem_011_GetTrackedDeviceIndexForControllerRole(void *, ETrackedControllerRole);
extern ETrackedControllerRole cppIVRSystem_IVRSystem_011_GetControllerRoleForTrackedDeviceIndex(void *, TrackedDeviceIndex_t);
extern ETrackedDeviceClass cppIVRSystem_IVRSystem_011_GetTrackedDeviceClass(void *, TrackedDeviceIndex_t);
extern bool cppIVRSystem_IVRSystem_011_IsTrackedDeviceConnected(void *, TrackedDeviceIndex_t);
extern bool cppIVRSystem_IVRSystem_011_GetBoolTrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, ETrackedPropertyError *);
extern float cppIVRSystem_IVRSystem_011_GetFloatTrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, ETrackedPropertyError *);
extern int32_t cppIVRSystem_IVRSystem_011_GetInt32TrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, ETrackedPropertyError *);
extern uint64_t cppIVRSystem_IVRSystem_011_GetUint64TrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, ETrackedPropertyError *);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_011_GetMatrix34TrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, ETrackedPropertyError *);
extern uint32_t cppIVRSystem_IVRSystem_011_GetStringTrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, char *, uint32_t, ETrackedPropertyError *);
extern const char * cppIVRSystem_IVRSystem_011_GetPropErrorNameFromEnum(void *, ETrackedPropertyError);
extern bool cppIVRSystem_IVRSystem_011_PollNextEvent(void *, winVREvent_t_0918 *, uint32_t);
extern bool cppIVRSystem_IVRSystem_011_PollNextEventWithPose(void *, ETrackingUniverseOrigin, winVREvent_t_0918 *, uint32_t, TrackedDevicePose_t *);
extern const char * cppIVRSystem_IVRSystem_011_GetEventTypeNameFromEnum(void *, EVREventType);
extern HiddenAreaMesh_t cppIVRSystem_IVRSystem_011_GetHiddenAreaMesh(void *, EVREye);
extern bool cppIVRSystem_IVRSystem_011_GetControllerState(void *, TrackedDeviceIndex_t, winVRControllerState001_t_0918 *);
extern bool cppIVRSystem_IVRSystem_011_GetControllerStateWithPose(void *, ETrackingUniverseOrigin, TrackedDeviceIndex_t, winVRControllerState001_t_0918 *, TrackedDevicePose_t *);
extern void cppIVRSystem_IVRSystem_011_TriggerHapticPulse(void *, TrackedDeviceIndex_t, uint32_t, unsigned short);
extern const char * cppIVRSystem_IVRSystem_011_GetButtonIdNameFromEnum(void *, EVRButtonId);
extern const char * cppIVRSystem_IVRSystem_011_GetControllerAxisTypeNameFromEnum(void *, EVRControllerAxisType);
extern bool cppIVRSystem_IVRSystem_011_CaptureInputFocus(void *);
extern void cppIVRSystem_IVRSystem_011_ReleaseInputFocus(void *);
extern bool cppIVRSystem_IVRSystem_011_IsInputFocusCapturedByAnotherProcess(void *);
extern uint32_t cppIVRSystem_IVRSystem_011_DriverDebugRequest(void *, TrackedDeviceIndex_t, const char *, char *, uint32_t);
extern EVRFirmwareError cppIVRSystem_IVRSystem_011_PerformFirmwareUpdate(void *, TrackedDeviceIndex_t);
extern void cppIVRSystem_IVRSystem_011_AcknowledgeQuit_Exiting(void *);
extern void cppIVRSystem_IVRSystem_011_AcknowledgeQuit_UserPrompt(void *);
extern void cppIVRSystem_IVRSystem_011_PerformanceTestEnableCapture(void *, bool);
extern void cppIVRSystem_IVRSystem_011_PerformanceTestReportFidelityLevelChange(void *, int);
#ifdef __cplusplus
}
#endif
