#ifdef __cplusplus
extern "C" {
#endif
extern void cppIVRSystem_IVRSystem_004_GetWindowBounds(void *, int32_t *, int32_t *, uint32_t *, uint32_t *);
extern void cppIVRSystem_IVRSystem_004_GetRecommendedRenderTargetSize(void *, uint32_t *, uint32_t *);
extern void cppIVRSystem_IVRSystem_004_GetEyeOutputViewport(void *, Hmd_Eye, uint32_t *, uint32_t *, uint32_t *, uint32_t *);
extern HmdMatrix44_t cppIVRSystem_IVRSystem_004_GetProjectionMatrix(void *, Hmd_Eye, float, float, GraphicsAPIConvention);
extern void cppIVRSystem_IVRSystem_004_GetProjectionRaw(void *, Hmd_Eye, float *, float *, float *, float *);
extern DistortionCoordinates_t cppIVRSystem_IVRSystem_004_ComputeDistortion(void *, Hmd_Eye, float, float);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_004_GetEyeToHeadTransform(void *, Hmd_Eye);
extern bool cppIVRSystem_IVRSystem_004_GetTimeSinceLastVsync(void *, float *, uint64_t *);
extern int32_t cppIVRSystem_IVRSystem_004_GetD3D9AdapterIndex(void *);
extern void cppIVRSystem_IVRSystem_004_GetDXGIOutputInfo(void *, int32_t *, int32_t *);
extern bool cppIVRSystem_IVRSystem_004_AttachToWindow(void *, void *);
extern void cppIVRSystem_IVRSystem_004_GetDeviceToAbsoluteTrackingPose(void *, TrackingUniverseOrigin, float, TrackedDevicePose_t *, uint32_t);
extern void cppIVRSystem_IVRSystem_004_ResetSeatedZeroPose(void *);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_004_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(void *);
extern TrackedDeviceClass cppIVRSystem_IVRSystem_004_GetTrackedDeviceClass(void *, TrackedDeviceIndex_t);
extern bool cppIVRSystem_IVRSystem_004_IsTrackedDeviceConnected(void *, TrackedDeviceIndex_t);
extern bool cppIVRSystem_IVRSystem_004_GetBoolTrackedDeviceProperty(void *, TrackedDeviceIndex_t, TrackedDeviceProperty, TrackedPropertyError *);
extern float cppIVRSystem_IVRSystem_004_GetFloatTrackedDeviceProperty(void *, TrackedDeviceIndex_t, TrackedDeviceProperty, TrackedPropertyError *);
extern int32_t cppIVRSystem_IVRSystem_004_GetInt32TrackedDeviceProperty(void *, TrackedDeviceIndex_t, TrackedDeviceProperty, TrackedPropertyError *);
extern uint64_t cppIVRSystem_IVRSystem_004_GetUint64TrackedDeviceProperty(void *, TrackedDeviceIndex_t, TrackedDeviceProperty, TrackedPropertyError *);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_004_GetMatrix34TrackedDeviceProperty(void *, TrackedDeviceIndex_t, TrackedDeviceProperty, TrackedPropertyError *);
extern uint32_t cppIVRSystem_IVRSystem_004_GetStringTrackedDeviceProperty(void *, TrackedDeviceIndex_t, TrackedDeviceProperty, char *, uint32_t, TrackedPropertyError *);
extern const char * cppIVRSystem_IVRSystem_004_GetPropErrorNameFromEnum(void *, TrackedPropertyError);
extern bool cppIVRSystem_IVRSystem_004_PollNextEvent(void *, VREvent_t *);
extern bool cppIVRSystem_IVRSystem_004_PollNextEventWithPose(void *, TrackingUniverseOrigin, VREvent_t *, TrackedDevicePose_t *);
extern const char * cppIVRSystem_IVRSystem_004_GetEventTypeNameFromEnum(void *, EVREventType);
extern HiddenAreaMesh_t cppIVRSystem_IVRSystem_004_GetHiddenAreaMesh(void *, Hmd_Eye);
extern bool cppIVRSystem_IVRSystem_004_GetControllerState(void *, TrackedDeviceIndex_t, winVRControllerState001_t_092 *);
extern bool cppIVRSystem_IVRSystem_004_GetControllerStateWithPose(void *, TrackingUniverseOrigin, TrackedDeviceIndex_t, winVRControllerState001_t_092 *, TrackedDevicePose_t *);
extern void cppIVRSystem_IVRSystem_004_TriggerHapticPulse(void *, TrackedDeviceIndex_t, uint32_t, unsigned short);
extern const char * cppIVRSystem_IVRSystem_004_GetButtonIdNameFromEnum(void *, EVRButtonId);
extern const char * cppIVRSystem_IVRSystem_004_GetControllerAxisTypeNameFromEnum(void *, EVRControllerAxisType);
extern bool cppIVRSystem_IVRSystem_004_CaptureInputFocus(void *);
extern void cppIVRSystem_IVRSystem_004_ReleaseInputFocus(void *);
extern bool cppIVRSystem_IVRSystem_004_IsInputFocusCapturedByAnotherProcess(void *);
extern uint32_t cppIVRSystem_IVRSystem_004_DriverDebugRequest(void *, TrackedDeviceIndex_t, const char *, char *, uint32_t);
#ifdef __cplusplus
}
#endif
