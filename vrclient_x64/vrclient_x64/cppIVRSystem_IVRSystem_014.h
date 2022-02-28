#ifdef __cplusplus
extern "C" {
#endif
extern void cppIVRSystem_IVRSystem_014_GetRecommendedRenderTargetSize(void *, uint32_t *, uint32_t *);
extern HmdMatrix44_t cppIVRSystem_IVRSystem_014_GetProjectionMatrix(void *, EVREye, float, float, EGraphicsAPIConvention);
extern void cppIVRSystem_IVRSystem_014_GetProjectionRaw(void *, EVREye, float *, float *, float *, float *);
extern bool cppIVRSystem_IVRSystem_014_ComputeDistortion(void *, EVREye, float, float, DistortionCoordinates_t *);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_014_GetEyeToHeadTransform(void *, EVREye);
extern bool cppIVRSystem_IVRSystem_014_GetTimeSinceLastVsync(void *, float *, uint64_t *);
extern int32_t cppIVRSystem_IVRSystem_014_GetD3D9AdapterIndex(void *);
extern void cppIVRSystem_IVRSystem_014_GetDXGIOutputInfo(void *, int32_t *);
extern bool cppIVRSystem_IVRSystem_014_IsDisplayOnDesktop(void *);
extern bool cppIVRSystem_IVRSystem_014_SetDisplayVisibility(void *, bool);
extern void cppIVRSystem_IVRSystem_014_GetDeviceToAbsoluteTrackingPose(void *, ETrackingUniverseOrigin, float, TrackedDevicePose_t *, uint32_t);
extern void cppIVRSystem_IVRSystem_014_ResetSeatedZeroPose(void *);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_014_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(void *);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_014_GetRawZeroPoseToStandingAbsoluteTrackingPose(void *);
extern uint32_t cppIVRSystem_IVRSystem_014_GetSortedTrackedDeviceIndicesOfClass(void *, ETrackedDeviceClass, TrackedDeviceIndex_t *, uint32_t, TrackedDeviceIndex_t);
extern EDeviceActivityLevel cppIVRSystem_IVRSystem_014_GetTrackedDeviceActivityLevel(void *, TrackedDeviceIndex_t);
extern void cppIVRSystem_IVRSystem_014_ApplyTransform(void *, TrackedDevicePose_t *, TrackedDevicePose_t *, HmdMatrix34_t *);
extern TrackedDeviceIndex_t cppIVRSystem_IVRSystem_014_GetTrackedDeviceIndexForControllerRole(void *, ETrackedControllerRole);
extern ETrackedControllerRole cppIVRSystem_IVRSystem_014_GetControllerRoleForTrackedDeviceIndex(void *, TrackedDeviceIndex_t);
extern ETrackedDeviceClass cppIVRSystem_IVRSystem_014_GetTrackedDeviceClass(void *, TrackedDeviceIndex_t);
extern bool cppIVRSystem_IVRSystem_014_IsTrackedDeviceConnected(void *, TrackedDeviceIndex_t);
extern bool cppIVRSystem_IVRSystem_014_GetBoolTrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, ETrackedPropertyError *);
extern float cppIVRSystem_IVRSystem_014_GetFloatTrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, ETrackedPropertyError *);
extern int32_t cppIVRSystem_IVRSystem_014_GetInt32TrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, ETrackedPropertyError *);
extern uint64_t cppIVRSystem_IVRSystem_014_GetUint64TrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, ETrackedPropertyError *);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_014_GetMatrix34TrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, ETrackedPropertyError *);
extern uint32_t cppIVRSystem_IVRSystem_014_GetStringTrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, char *, uint32_t, ETrackedPropertyError *);
extern const char * cppIVRSystem_IVRSystem_014_GetPropErrorNameFromEnum(void *, ETrackedPropertyError);
extern bool cppIVRSystem_IVRSystem_014_PollNextEvent(void *, winVREvent_t_104 *, uint32_t);
extern bool cppIVRSystem_IVRSystem_014_PollNextEventWithPose(void *, ETrackingUniverseOrigin, winVREvent_t_104 *, uint32_t, TrackedDevicePose_t *);
extern const char * cppIVRSystem_IVRSystem_014_GetEventTypeNameFromEnum(void *, EVREventType);
extern HiddenAreaMesh_t cppIVRSystem_IVRSystem_014_GetHiddenAreaMesh(void *, EVREye, EHiddenAreaMeshType);
extern bool cppIVRSystem_IVRSystem_014_GetControllerState(void *, TrackedDeviceIndex_t, winVRControllerState001_t_104 *, uint32_t);
extern bool cppIVRSystem_IVRSystem_014_GetControllerStateWithPose(void *, ETrackingUniverseOrigin, TrackedDeviceIndex_t, winVRControllerState001_t_104 *, uint32_t, TrackedDevicePose_t *);
extern void cppIVRSystem_IVRSystem_014_TriggerHapticPulse(void *, TrackedDeviceIndex_t, uint32_t, unsigned short);
extern const char * cppIVRSystem_IVRSystem_014_GetButtonIdNameFromEnum(void *, EVRButtonId);
extern const char * cppIVRSystem_IVRSystem_014_GetControllerAxisTypeNameFromEnum(void *, EVRControllerAxisType);
extern bool cppIVRSystem_IVRSystem_014_CaptureInputFocus(void *);
extern void cppIVRSystem_IVRSystem_014_ReleaseInputFocus(void *);
extern bool cppIVRSystem_IVRSystem_014_IsInputFocusCapturedByAnotherProcess(void *);
extern uint32_t cppIVRSystem_IVRSystem_014_DriverDebugRequest(void *, TrackedDeviceIndex_t, const char *, char *, uint32_t);
extern EVRFirmwareError cppIVRSystem_IVRSystem_014_PerformFirmwareUpdate(void *, TrackedDeviceIndex_t);
extern void cppIVRSystem_IVRSystem_014_AcknowledgeQuit_Exiting(void *);
extern void cppIVRSystem_IVRSystem_014_AcknowledgeQuit_UserPrompt(void *);
#ifdef __cplusplus
}
#endif
