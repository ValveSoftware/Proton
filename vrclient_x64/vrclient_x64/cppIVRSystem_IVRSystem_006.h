#ifdef __cplusplus
extern "C" {
#endif
extern void cppIVRSystem_IVRSystem_006_GetWindowBounds(void *, int32_t *, int32_t *, uint32_t *, uint32_t *);
extern void cppIVRSystem_IVRSystem_006_GetRecommendedRenderTargetSize(void *, uint32_t *, uint32_t *);
extern void cppIVRSystem_IVRSystem_006_GetEyeOutputViewport(void *, Hmd_Eye, uint32_t *, uint32_t *, uint32_t *, uint32_t *);
extern HmdMatrix44_t cppIVRSystem_IVRSystem_006_GetProjectionMatrix(void *, Hmd_Eye, float, float, GraphicsAPIConvention);
extern void cppIVRSystem_IVRSystem_006_GetProjectionRaw(void *, Hmd_Eye, float *, float *, float *, float *);
extern DistortionCoordinates_t cppIVRSystem_IVRSystem_006_ComputeDistortion(void *, Hmd_Eye, float, float);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_006_GetEyeToHeadTransform(void *, Hmd_Eye);
extern bool cppIVRSystem_IVRSystem_006_GetTimeSinceLastVsync(void *, float *, uint64_t *);
extern int32_t cppIVRSystem_IVRSystem_006_GetD3D9AdapterIndex(void *);
extern void cppIVRSystem_IVRSystem_006_GetDXGIOutputInfo(void *, int32_t *, int32_t *);
extern bool cppIVRSystem_IVRSystem_006_AttachToWindow(void *, void *);
extern void cppIVRSystem_IVRSystem_006_GetDeviceToAbsoluteTrackingPose(void *, TrackingUniverseOrigin, float, TrackedDevicePose_t *, uint32_t);
extern void cppIVRSystem_IVRSystem_006_ResetSeatedZeroPose(void *);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_006_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(void *);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_006_GetRawZeroPoseToStandingAbsoluteTrackingPose(void *);
extern uint32_t cppIVRSystem_IVRSystem_006_GetSortedTrackedDeviceIndicesOfClass(void *, TrackedDeviceClass, TrackedDeviceIndex_t *, uint32_t, TrackedDeviceIndex_t);
extern EDeviceActivityLevel cppIVRSystem_IVRSystem_006_GetTrackedDeviceActivityLevel(void *, TrackedDeviceIndex_t);
extern TrackedDeviceClass cppIVRSystem_IVRSystem_006_GetTrackedDeviceClass(void *, TrackedDeviceIndex_t);
extern bool cppIVRSystem_IVRSystem_006_IsTrackedDeviceConnected(void *, TrackedDeviceIndex_t);
extern bool cppIVRSystem_IVRSystem_006_GetBoolTrackedDeviceProperty(void *, TrackedDeviceIndex_t, TrackedDeviceProperty, TrackedPropertyError *);
extern float cppIVRSystem_IVRSystem_006_GetFloatTrackedDeviceProperty(void *, TrackedDeviceIndex_t, TrackedDeviceProperty, TrackedPropertyError *);
extern int32_t cppIVRSystem_IVRSystem_006_GetInt32TrackedDeviceProperty(void *, TrackedDeviceIndex_t, TrackedDeviceProperty, TrackedPropertyError *);
extern uint64_t cppIVRSystem_IVRSystem_006_GetUint64TrackedDeviceProperty(void *, TrackedDeviceIndex_t, TrackedDeviceProperty, TrackedPropertyError *);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_006_GetMatrix34TrackedDeviceProperty(void *, TrackedDeviceIndex_t, TrackedDeviceProperty, TrackedPropertyError *);
extern uint32_t cppIVRSystem_IVRSystem_006_GetStringTrackedDeviceProperty(void *, TrackedDeviceIndex_t, TrackedDeviceProperty, char *, uint32_t, TrackedPropertyError *);
extern const char * cppIVRSystem_IVRSystem_006_GetPropErrorNameFromEnum(void *, TrackedPropertyError);
extern bool cppIVRSystem_IVRSystem_006_PollNextEvent(void *, VREvent_t *);
extern bool cppIVRSystem_IVRSystem_006_PollNextEventWithPose(void *, TrackingUniverseOrigin, VREvent_t *, TrackedDevicePose_t *);
extern const char * cppIVRSystem_IVRSystem_006_GetEventTypeNameFromEnum(void *, EVREventType);
extern HiddenAreaMesh_t cppIVRSystem_IVRSystem_006_GetHiddenAreaMesh(void *, Hmd_Eye);
extern bool cppIVRSystem_IVRSystem_006_GetControllerState(void *, TrackedDeviceIndex_t, winVRControllerState001_t_0910 *);
extern bool cppIVRSystem_IVRSystem_006_GetControllerStateWithPose(void *, TrackingUniverseOrigin, TrackedDeviceIndex_t, winVRControllerState001_t_0910 *, TrackedDevicePose_t *);
extern void cppIVRSystem_IVRSystem_006_TriggerHapticPulse(void *, TrackedDeviceIndex_t, uint32_t, unsigned short);
extern const char * cppIVRSystem_IVRSystem_006_GetButtonIdNameFromEnum(void *, EVRButtonId);
extern const char * cppIVRSystem_IVRSystem_006_GetControllerAxisTypeNameFromEnum(void *, EVRControllerAxisType);
extern bool cppIVRSystem_IVRSystem_006_CaptureInputFocus(void *);
extern void cppIVRSystem_IVRSystem_006_ReleaseInputFocus(void *);
extern bool cppIVRSystem_IVRSystem_006_IsInputFocusCapturedByAnotherProcess(void *);
extern uint32_t cppIVRSystem_IVRSystem_006_DriverDebugRequest(void *, TrackedDeviceIndex_t, const char *, char *, uint32_t);
extern VRFirmwareError cppIVRSystem_IVRSystem_006_PerformFirmwareUpdate(void *, TrackedDeviceIndex_t);
extern bool cppIVRSystem_IVRSystem_006_IsDisplayOnDesktop(void *);
extern bool cppIVRSystem_IVRSystem_006_SetDisplayVisibility(void *, bool);
#ifdef __cplusplus
}
#endif
