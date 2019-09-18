#ifdef __cplusplus
extern "C" {
#endif
extern void cppIVRSystem_IVRSystem_005_GetWindowBounds(void *, int32_t *, int32_t *, uint32_t *, uint32_t *);
extern void cppIVRSystem_IVRSystem_005_GetRecommendedRenderTargetSize(void *, uint32_t *, uint32_t *);
extern void cppIVRSystem_IVRSystem_005_GetEyeOutputViewport(void *, Hmd_Eye, uint32_t *, uint32_t *, uint32_t *, uint32_t *);
extern HmdMatrix44_t cppIVRSystem_IVRSystem_005_GetProjectionMatrix(void *, Hmd_Eye, float, float, GraphicsAPIConvention);
extern void cppIVRSystem_IVRSystem_005_GetProjectionRaw(void *, Hmd_Eye, float *, float *, float *, float *);
extern DistortionCoordinates_t cppIVRSystem_IVRSystem_005_ComputeDistortion(void *, Hmd_Eye, float, float);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_005_GetEyeToHeadTransform(void *, Hmd_Eye);
extern bool cppIVRSystem_IVRSystem_005_GetTimeSinceLastVsync(void *, float *, uint64_t *);
extern int32_t cppIVRSystem_IVRSystem_005_GetD3D9AdapterIndex(void *);
extern void cppIVRSystem_IVRSystem_005_GetDXGIOutputInfo(void *, int32_t *, int32_t *);
extern bool cppIVRSystem_IVRSystem_005_AttachToWindow(void *, void *);
extern void cppIVRSystem_IVRSystem_005_GetDeviceToAbsoluteTrackingPose(void *, TrackingUniverseOrigin, float, TrackedDevicePose_t *, uint32_t);
extern void cppIVRSystem_IVRSystem_005_ResetSeatedZeroPose(void *);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_005_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(void *);
extern uint32_t cppIVRSystem_IVRSystem_005_GetSortedTrackedDeviceIndicesOfClass(void *, TrackedDeviceClass, TrackedDeviceIndex_t *, uint32_t, TrackedDeviceIndex_t);
extern TrackedDeviceClass cppIVRSystem_IVRSystem_005_GetTrackedDeviceClass(void *, TrackedDeviceIndex_t);
extern bool cppIVRSystem_IVRSystem_005_IsTrackedDeviceConnected(void *, TrackedDeviceIndex_t);
extern bool cppIVRSystem_IVRSystem_005_GetBoolTrackedDeviceProperty(void *, TrackedDeviceIndex_t, TrackedDeviceProperty, TrackedPropertyError *);
extern float cppIVRSystem_IVRSystem_005_GetFloatTrackedDeviceProperty(void *, TrackedDeviceIndex_t, TrackedDeviceProperty, TrackedPropertyError *);
extern int32_t cppIVRSystem_IVRSystem_005_GetInt32TrackedDeviceProperty(void *, TrackedDeviceIndex_t, TrackedDeviceProperty, TrackedPropertyError *);
extern uint64_t cppIVRSystem_IVRSystem_005_GetUint64TrackedDeviceProperty(void *, TrackedDeviceIndex_t, TrackedDeviceProperty, TrackedPropertyError *);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_005_GetMatrix34TrackedDeviceProperty(void *, TrackedDeviceIndex_t, TrackedDeviceProperty, TrackedPropertyError *);
extern uint32_t cppIVRSystem_IVRSystem_005_GetStringTrackedDeviceProperty(void *, TrackedDeviceIndex_t, TrackedDeviceProperty, char *, uint32_t, TrackedPropertyError *);
extern const char * cppIVRSystem_IVRSystem_005_GetPropErrorNameFromEnum(void *, TrackedPropertyError);
extern bool cppIVRSystem_IVRSystem_005_PollNextEvent(void *, VREvent_t *);
extern bool cppIVRSystem_IVRSystem_005_PollNextEventWithPose(void *, TrackingUniverseOrigin, VREvent_t *, TrackedDevicePose_t *);
extern const char * cppIVRSystem_IVRSystem_005_GetEventTypeNameFromEnum(void *, EVREventType);
extern HiddenAreaMesh_t cppIVRSystem_IVRSystem_005_GetHiddenAreaMesh(void *, Hmd_Eye);
extern bool cppIVRSystem_IVRSystem_005_GetControllerState(void *, TrackedDeviceIndex_t, winVRControllerState001_t_098 *);
extern bool cppIVRSystem_IVRSystem_005_GetControllerStateWithPose(void *, TrackingUniverseOrigin, TrackedDeviceIndex_t, winVRControllerState001_t_098 *, TrackedDevicePose_t *);
extern void cppIVRSystem_IVRSystem_005_TriggerHapticPulse(void *, TrackedDeviceIndex_t, uint32_t, unsigned short);
extern const char * cppIVRSystem_IVRSystem_005_GetButtonIdNameFromEnum(void *, EVRButtonId);
extern const char * cppIVRSystem_IVRSystem_005_GetControllerAxisTypeNameFromEnum(void *, EVRControllerAxisType);
extern bool cppIVRSystem_IVRSystem_005_CaptureInputFocus(void *);
extern void cppIVRSystem_IVRSystem_005_ReleaseInputFocus(void *);
extern bool cppIVRSystem_IVRSystem_005_IsInputFocusCapturedByAnotherProcess(void *);
extern uint32_t cppIVRSystem_IVRSystem_005_DriverDebugRequest(void *, TrackedDeviceIndex_t, const char *, char *, uint32_t);
#ifdef __cplusplus
}
#endif
