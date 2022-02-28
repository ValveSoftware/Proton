#ifdef __cplusplus
extern "C" {
#endif
extern void cppIVRSystem_IVRSystem_009_GetRecommendedRenderTargetSize(void *, uint32_t *, uint32_t *);
extern HmdMatrix44_t cppIVRSystem_IVRSystem_009_GetProjectionMatrix(void *, EVREye, float, float, EGraphicsAPIConvention);
extern void cppIVRSystem_IVRSystem_009_GetProjectionRaw(void *, EVREye, float *, float *, float *, float *);
extern DistortionCoordinates_t cppIVRSystem_IVRSystem_009_ComputeDistortion(void *, EVREye, float, float);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_009_GetEyeToHeadTransform(void *, EVREye);
extern bool cppIVRSystem_IVRSystem_009_GetTimeSinceLastVsync(void *, float *, uint64_t *);
extern int32_t cppIVRSystem_IVRSystem_009_GetD3D9AdapterIndex(void *);
extern void cppIVRSystem_IVRSystem_009_GetDXGIOutputInfo(void *, int32_t *);
extern bool cppIVRSystem_IVRSystem_009_IsDisplayOnDesktop(void *);
extern bool cppIVRSystem_IVRSystem_009_SetDisplayVisibility(void *, bool);
extern void cppIVRSystem_IVRSystem_009_GetDeviceToAbsoluteTrackingPose(void *, ETrackingUniverseOrigin, float, TrackedDevicePose_t *, uint32_t);
extern void cppIVRSystem_IVRSystem_009_ResetSeatedZeroPose(void *);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_009_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(void *);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_009_GetRawZeroPoseToStandingAbsoluteTrackingPose(void *);
extern uint32_t cppIVRSystem_IVRSystem_009_GetSortedTrackedDeviceIndicesOfClass(void *, ETrackedDeviceClass, TrackedDeviceIndex_t *, uint32_t, TrackedDeviceIndex_t);
extern EDeviceActivityLevel cppIVRSystem_IVRSystem_009_GetTrackedDeviceActivityLevel(void *, TrackedDeviceIndex_t);
extern void cppIVRSystem_IVRSystem_009_ApplyTransform(void *, TrackedDevicePose_t *, TrackedDevicePose_t *, HmdMatrix34_t *);
extern ETrackedDeviceClass cppIVRSystem_IVRSystem_009_GetTrackedDeviceClass(void *, TrackedDeviceIndex_t);
extern bool cppIVRSystem_IVRSystem_009_IsTrackedDeviceConnected(void *, TrackedDeviceIndex_t);
extern bool cppIVRSystem_IVRSystem_009_GetBoolTrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, ETrackedPropertyError *);
extern float cppIVRSystem_IVRSystem_009_GetFloatTrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, ETrackedPropertyError *);
extern int32_t cppIVRSystem_IVRSystem_009_GetInt32TrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, ETrackedPropertyError *);
extern uint64_t cppIVRSystem_IVRSystem_009_GetUint64TrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, ETrackedPropertyError *);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_009_GetMatrix34TrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, ETrackedPropertyError *);
extern uint32_t cppIVRSystem_IVRSystem_009_GetStringTrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, char *, uint32_t, ETrackedPropertyError *);
extern const char * cppIVRSystem_IVRSystem_009_GetPropErrorNameFromEnum(void *, ETrackedPropertyError);
extern bool cppIVRSystem_IVRSystem_009_PollNextEvent(void *, VREvent_t *);
extern bool cppIVRSystem_IVRSystem_009_PollNextEventWithPose(void *, ETrackingUniverseOrigin, VREvent_t *, TrackedDevicePose_t *);
extern const char * cppIVRSystem_IVRSystem_009_GetEventTypeNameFromEnum(void *, EVREventType);
extern HiddenAreaMesh_t cppIVRSystem_IVRSystem_009_GetHiddenAreaMesh(void *, EVREye);
extern bool cppIVRSystem_IVRSystem_009_GetControllerState(void *, TrackedDeviceIndex_t, winVRControllerState001_t_0912 *);
extern bool cppIVRSystem_IVRSystem_009_GetControllerStateWithPose(void *, ETrackingUniverseOrigin, TrackedDeviceIndex_t, winVRControllerState001_t_0912 *, TrackedDevicePose_t *);
extern void cppIVRSystem_IVRSystem_009_TriggerHapticPulse(void *, TrackedDeviceIndex_t, uint32_t, unsigned short);
extern const char * cppIVRSystem_IVRSystem_009_GetButtonIdNameFromEnum(void *, EVRButtonId);
extern const char * cppIVRSystem_IVRSystem_009_GetControllerAxisTypeNameFromEnum(void *, EVRControllerAxisType);
extern bool cppIVRSystem_IVRSystem_009_CaptureInputFocus(void *);
extern void cppIVRSystem_IVRSystem_009_ReleaseInputFocus(void *);
extern bool cppIVRSystem_IVRSystem_009_IsInputFocusCapturedByAnotherProcess(void *);
extern uint32_t cppIVRSystem_IVRSystem_009_DriverDebugRequest(void *, TrackedDeviceIndex_t, const char *, char *, uint32_t);
extern EVRFirmwareError cppIVRSystem_IVRSystem_009_PerformFirmwareUpdate(void *, TrackedDeviceIndex_t);
extern void cppIVRSystem_IVRSystem_009_AcknowledgeQuit_Exiting(void *);
extern void cppIVRSystem_IVRSystem_009_AcknowledgeQuit_UserPrompt(void *);
#ifdef __cplusplus
}
#endif
