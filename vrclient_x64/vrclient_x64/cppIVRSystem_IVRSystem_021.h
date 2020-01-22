#ifdef __cplusplus
extern "C" {
#endif
extern void cppIVRSystem_IVRSystem_021_GetRecommendedRenderTargetSize(void *, uint32_t *, uint32_t *);
extern HmdMatrix44_t cppIVRSystem_IVRSystem_021_GetProjectionMatrix(void *, EVREye, float, float);
extern void cppIVRSystem_IVRSystem_021_GetProjectionRaw(void *, EVREye, float *, float *, float *, float *);
extern bool cppIVRSystem_IVRSystem_021_ComputeDistortion(void *, EVREye, float, float, DistortionCoordinates_t *);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_021_GetEyeToHeadTransform(void *, EVREye);
extern bool cppIVRSystem_IVRSystem_021_GetTimeSinceLastVsync(void *, float *, uint64_t *);
extern int32_t cppIVRSystem_IVRSystem_021_GetD3D9AdapterIndex(void *);
extern void cppIVRSystem_IVRSystem_021_GetDXGIOutputInfo(void *, int32_t *);
extern void cppIVRSystem_IVRSystem_021_GetOutputDevice(void *, uint64_t *, ETextureType, VkInstance_T *);
extern bool cppIVRSystem_IVRSystem_021_IsDisplayOnDesktop(void *);
extern bool cppIVRSystem_IVRSystem_021_SetDisplayVisibility(void *, bool);
extern void cppIVRSystem_IVRSystem_021_GetDeviceToAbsoluteTrackingPose(void *, ETrackingUniverseOrigin, float, TrackedDevicePose_t *, uint32_t);
extern void cppIVRSystem_IVRSystem_021_ResetSeatedZeroPose(void *);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_021_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(void *);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_021_GetRawZeroPoseToStandingAbsoluteTrackingPose(void *);
extern uint32_t cppIVRSystem_IVRSystem_021_GetSortedTrackedDeviceIndicesOfClass(void *, ETrackedDeviceClass, TrackedDeviceIndex_t *, uint32_t, TrackedDeviceIndex_t);
extern EDeviceActivityLevel cppIVRSystem_IVRSystem_021_GetTrackedDeviceActivityLevel(void *, TrackedDeviceIndex_t);
extern void cppIVRSystem_IVRSystem_021_ApplyTransform(void *, TrackedDevicePose_t *, TrackedDevicePose_t *, HmdMatrix34_t *);
extern TrackedDeviceIndex_t cppIVRSystem_IVRSystem_021_GetTrackedDeviceIndexForControllerRole(void *, ETrackedControllerRole);
extern ETrackedControllerRole cppIVRSystem_IVRSystem_021_GetControllerRoleForTrackedDeviceIndex(void *, TrackedDeviceIndex_t);
extern ETrackedDeviceClass cppIVRSystem_IVRSystem_021_GetTrackedDeviceClass(void *, TrackedDeviceIndex_t);
extern bool cppIVRSystem_IVRSystem_021_IsTrackedDeviceConnected(void *, TrackedDeviceIndex_t);
extern bool cppIVRSystem_IVRSystem_021_GetBoolTrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, ETrackedPropertyError *);
extern float cppIVRSystem_IVRSystem_021_GetFloatTrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, ETrackedPropertyError *);
extern int32_t cppIVRSystem_IVRSystem_021_GetInt32TrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, ETrackedPropertyError *);
extern uint64_t cppIVRSystem_IVRSystem_021_GetUint64TrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, ETrackedPropertyError *);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_021_GetMatrix34TrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, ETrackedPropertyError *);
extern uint32_t cppIVRSystem_IVRSystem_021_GetArrayTrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, PropertyTypeTag_t, void *, uint32_t, ETrackedPropertyError *);
extern uint32_t cppIVRSystem_IVRSystem_021_GetStringTrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, char *, uint32_t, ETrackedPropertyError *);
extern const char * cppIVRSystem_IVRSystem_021_GetPropErrorNameFromEnum(void *, ETrackedPropertyError);
extern bool cppIVRSystem_IVRSystem_021_PollNextEvent(void *, winVREvent_t_1819 *, uint32_t);
extern bool cppIVRSystem_IVRSystem_021_PollNextEventWithPose(void *, ETrackingUniverseOrigin, winVREvent_t_1819 *, uint32_t, TrackedDevicePose_t *);
extern const char * cppIVRSystem_IVRSystem_021_GetEventTypeNameFromEnum(void *, EVREventType);
extern HiddenAreaMesh_t cppIVRSystem_IVRSystem_021_GetHiddenAreaMesh(void *, EVREye, EHiddenAreaMeshType);
extern bool cppIVRSystem_IVRSystem_021_GetControllerState(void *, TrackedDeviceIndex_t, winVRControllerState001_t_1819 *, uint32_t);
extern bool cppIVRSystem_IVRSystem_021_GetControllerStateWithPose(void *, ETrackingUniverseOrigin, TrackedDeviceIndex_t, winVRControllerState001_t_1819 *, uint32_t, TrackedDevicePose_t *);
extern void cppIVRSystem_IVRSystem_021_TriggerHapticPulse(void *, TrackedDeviceIndex_t, uint32_t, unsigned short);
extern const char * cppIVRSystem_IVRSystem_021_GetButtonIdNameFromEnum(void *, EVRButtonId);
extern const char * cppIVRSystem_IVRSystem_021_GetControllerAxisTypeNameFromEnum(void *, EVRControllerAxisType);
extern bool cppIVRSystem_IVRSystem_021_IsInputAvailable(void *);
extern bool cppIVRSystem_IVRSystem_021_IsSteamVRDrawingControllers(void *);
extern bool cppIVRSystem_IVRSystem_021_ShouldApplicationPause(void *);
extern bool cppIVRSystem_IVRSystem_021_ShouldApplicationReduceRenderingWork(void *);
extern EVRFirmwareError cppIVRSystem_IVRSystem_021_PerformFirmwareUpdate(void *, TrackedDeviceIndex_t);
extern void cppIVRSystem_IVRSystem_021_AcknowledgeQuit_Exiting(void *);
extern uint32_t cppIVRSystem_IVRSystem_021_GetAppContainerFilePaths(void *, char *, uint32_t);
extern const char * cppIVRSystem_IVRSystem_021_GetRuntimeVersion(void *);
#ifdef __cplusplus
}
#endif
