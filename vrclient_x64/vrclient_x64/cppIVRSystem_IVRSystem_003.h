#ifdef __cplusplus
extern "C" {
#endif
extern void cppIVRSystem_IVRSystem_003_GetWindowBounds(void *, int32_t *, int32_t *, uint32_t *, uint32_t *);
extern void cppIVRSystem_IVRSystem_003_GetRecommendedRenderTargetSize(void *, uint32_t *, uint32_t *);
extern void cppIVRSystem_IVRSystem_003_GetEyeOutputViewport(void *, Hmd_Eye, uint32_t *, uint32_t *, uint32_t *, uint32_t *);
extern HmdMatrix44_t cppIVRSystem_IVRSystem_003_GetProjectionMatrix(void *, Hmd_Eye, float, float, GraphicsAPIConvention);
extern void cppIVRSystem_IVRSystem_003_GetProjectionRaw(void *, Hmd_Eye, float *, float *, float *, float *);
extern DistortionCoordinates_t cppIVRSystem_IVRSystem_003_ComputeDistortion(void *, Hmd_Eye, float, float);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_003_GetEyeToHeadTransform(void *, Hmd_Eye);
extern bool cppIVRSystem_IVRSystem_003_GetTimeSinceLastVsync(void *, float *, uint64_t *);
extern int32_t cppIVRSystem_IVRSystem_003_GetD3D9AdapterIndex(void *);
extern void cppIVRSystem_IVRSystem_003_GetDXGIOutputInfo(void *, int32_t *, int32_t *);
extern bool cppIVRSystem_IVRSystem_003_AttachToWindow(void *, void *);
extern void cppIVRSystem_IVRSystem_003_GetDeviceToAbsoluteTrackingPose(void *, TrackingUniverseOrigin, float, TrackedDevicePose_t *, uint32_t);
extern void cppIVRSystem_IVRSystem_003_ResetSeatedZeroPose(void *);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_003_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(void *);
extern bool cppIVRSystem_IVRSystem_003_LoadRenderModel(void *, const char *, winRenderModel_t_091 *);
extern void cppIVRSystem_IVRSystem_003_FreeRenderModel(void *, winRenderModel_t_091 *);
extern TrackedDeviceClass cppIVRSystem_IVRSystem_003_GetTrackedDeviceClass(void *, TrackedDeviceIndex_t);
extern bool cppIVRSystem_IVRSystem_003_IsTrackedDeviceConnected(void *, TrackedDeviceIndex_t);
extern bool cppIVRSystem_IVRSystem_003_GetBoolTrackedDeviceProperty(void *, TrackedDeviceIndex_t, TrackedDeviceProperty, TrackedPropertyError *);
extern float cppIVRSystem_IVRSystem_003_GetFloatTrackedDeviceProperty(void *, TrackedDeviceIndex_t, TrackedDeviceProperty, TrackedPropertyError *);
extern int32_t cppIVRSystem_IVRSystem_003_GetInt32TrackedDeviceProperty(void *, TrackedDeviceIndex_t, TrackedDeviceProperty, TrackedPropertyError *);
extern uint64_t cppIVRSystem_IVRSystem_003_GetUint64TrackedDeviceProperty(void *, TrackedDeviceIndex_t, TrackedDeviceProperty, TrackedPropertyError *);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_003_GetMatrix34TrackedDeviceProperty(void *, TrackedDeviceIndex_t, TrackedDeviceProperty, TrackedPropertyError *);
extern uint32_t cppIVRSystem_IVRSystem_003_GetStringTrackedDeviceProperty(void *, TrackedDeviceIndex_t, TrackedDeviceProperty, char *, uint32_t, TrackedPropertyError *);
extern const char * cppIVRSystem_IVRSystem_003_GetPropErrorNameFromEnum(void *, TrackedPropertyError);
extern bool cppIVRSystem_IVRSystem_003_PollNextEvent(void *, VREvent_t *);
extern bool cppIVRSystem_IVRSystem_003_PollNextEventWithPose(void *, TrackingUniverseOrigin, VREvent_t *, TrackedDevicePose_t *);
extern const char * cppIVRSystem_IVRSystem_003_GetEventTypeNameFromEnum(void *, EVREventType);
extern HiddenAreaMesh_t cppIVRSystem_IVRSystem_003_GetHiddenAreaMesh(void *, Hmd_Eye);
extern bool cppIVRSystem_IVRSystem_003_GetControllerState(void *, TrackedDeviceIndex_t, winVRControllerState001_t_091 *);
extern bool cppIVRSystem_IVRSystem_003_GetControllerStateWithPose(void *, TrackingUniverseOrigin, TrackedDeviceIndex_t, winVRControllerState001_t_091 *, TrackedDevicePose_t *);
extern void cppIVRSystem_IVRSystem_003_TriggerHapticPulse(void *, TrackedDeviceIndex_t, uint32_t, unsigned short);
extern const char * cppIVRSystem_IVRSystem_003_GetButtonIdNameFromEnum(void *, EVRButtonId);
extern const char * cppIVRSystem_IVRSystem_003_GetControllerAxisTypeNameFromEnum(void *, EVRControllerAxisType);
extern bool cppIVRSystem_IVRSystem_003_HandleControllerOverlayInteractionAsMouse(void *, Compositor_OverlaySettings *, HmdVector2_t, HmdVector2_t, TrackedDeviceIndex_t, EVRControllerEventOutputType);
extern bool cppIVRSystem_IVRSystem_003_CaptureInputFocus(void *);
extern void cppIVRSystem_IVRSystem_003_ReleaseInputFocus(void *);
extern bool cppIVRSystem_IVRSystem_003_IsInputFocusCapturedByAnotherProcess(void *);
#ifdef __cplusplus
}
#endif
