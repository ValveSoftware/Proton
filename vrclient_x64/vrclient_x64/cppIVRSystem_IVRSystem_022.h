#ifdef __cplusplus
extern "C" {
#endif
extern void cppIVRSystem_IVRSystem_022_GetRecommendedRenderTargetSize(void *, uint32_t *, uint32_t *);
extern HmdMatrix44_t cppIVRSystem_IVRSystem_022_GetProjectionMatrix(void *, EVREye, float, float);
extern void cppIVRSystem_IVRSystem_022_GetProjectionRaw(void *, EVREye, float *, float *, float *, float *);
extern bool cppIVRSystem_IVRSystem_022_ComputeDistortion(void *, EVREye, float, float, DistortionCoordinates_t *);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_022_GetEyeToHeadTransform(void *, EVREye);
extern bool cppIVRSystem_IVRSystem_022_GetTimeSinceLastVsync(void *, float *, uint64_t *);
extern int32_t cppIVRSystem_IVRSystem_022_GetD3D9AdapterIndex(void *);
extern void cppIVRSystem_IVRSystem_022_GetDXGIOutputInfo(void *, int32_t *);
extern void cppIVRSystem_IVRSystem_022_GetOutputDevice(void *, uint64_t *, ETextureType, VkInstance_T *);
extern bool cppIVRSystem_IVRSystem_022_IsDisplayOnDesktop(void *);
extern bool cppIVRSystem_IVRSystem_022_SetDisplayVisibility(void *, bool);
extern void cppIVRSystem_IVRSystem_022_GetDeviceToAbsoluteTrackingPose(void *, ETrackingUniverseOrigin, float, TrackedDevicePose_t *, uint32_t);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_022_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(void *);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_022_GetRawZeroPoseToStandingAbsoluteTrackingPose(void *);
extern uint32_t cppIVRSystem_IVRSystem_022_GetSortedTrackedDeviceIndicesOfClass(void *, ETrackedDeviceClass, TrackedDeviceIndex_t *, uint32_t, TrackedDeviceIndex_t);
extern EDeviceActivityLevel cppIVRSystem_IVRSystem_022_GetTrackedDeviceActivityLevel(void *, TrackedDeviceIndex_t);
extern void cppIVRSystem_IVRSystem_022_ApplyTransform(void *, TrackedDevicePose_t *, TrackedDevicePose_t *, HmdMatrix34_t *);
extern TrackedDeviceIndex_t cppIVRSystem_IVRSystem_022_GetTrackedDeviceIndexForControllerRole(void *, ETrackedControllerRole);
extern ETrackedControllerRole cppIVRSystem_IVRSystem_022_GetControllerRoleForTrackedDeviceIndex(void *, TrackedDeviceIndex_t);
extern ETrackedDeviceClass cppIVRSystem_IVRSystem_022_GetTrackedDeviceClass(void *, TrackedDeviceIndex_t);
extern bool cppIVRSystem_IVRSystem_022_IsTrackedDeviceConnected(void *, TrackedDeviceIndex_t);
extern bool cppIVRSystem_IVRSystem_022_GetBoolTrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, ETrackedPropertyError *);
extern float cppIVRSystem_IVRSystem_022_GetFloatTrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, ETrackedPropertyError *);
extern int32_t cppIVRSystem_IVRSystem_022_GetInt32TrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, ETrackedPropertyError *);
extern uint64_t cppIVRSystem_IVRSystem_022_GetUint64TrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, ETrackedPropertyError *);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_022_GetMatrix34TrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, ETrackedPropertyError *);
extern uint32_t cppIVRSystem_IVRSystem_022_GetArrayTrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, PropertyTypeTag_t, void *, uint32_t, ETrackedPropertyError *);
extern uint32_t cppIVRSystem_IVRSystem_022_GetStringTrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, char *, uint32_t, ETrackedPropertyError *);
extern const char * cppIVRSystem_IVRSystem_022_GetPropErrorNameFromEnum(void *, ETrackedPropertyError);
extern bool cppIVRSystem_IVRSystem_022_PollNextEvent(void *, winVREvent_t_1237 *, uint32_t);
extern bool cppIVRSystem_IVRSystem_022_PollNextEventWithPose(void *, ETrackingUniverseOrigin, winVREvent_t_1237 *, uint32_t, TrackedDevicePose_t *);
extern const char * cppIVRSystem_IVRSystem_022_GetEventTypeNameFromEnum(void *, EVREventType);
extern HiddenAreaMesh_t cppIVRSystem_IVRSystem_022_GetHiddenAreaMesh(void *, EVREye, EHiddenAreaMeshType);
extern bool cppIVRSystem_IVRSystem_022_GetControllerState(void *, TrackedDeviceIndex_t, winVRControllerState001_t_1237 *, uint32_t);
extern bool cppIVRSystem_IVRSystem_022_GetControllerStateWithPose(void *, ETrackingUniverseOrigin, TrackedDeviceIndex_t, winVRControllerState001_t_1237 *, uint32_t, TrackedDevicePose_t *);
extern void cppIVRSystem_IVRSystem_022_TriggerHapticPulse(void *, TrackedDeviceIndex_t, uint32_t, unsigned short);
extern const char * cppIVRSystem_IVRSystem_022_GetButtonIdNameFromEnum(void *, EVRButtonId);
extern const char * cppIVRSystem_IVRSystem_022_GetControllerAxisTypeNameFromEnum(void *, EVRControllerAxisType);
extern bool cppIVRSystem_IVRSystem_022_IsInputAvailable(void *);
extern bool cppIVRSystem_IVRSystem_022_IsSteamVRDrawingControllers(void *);
extern bool cppIVRSystem_IVRSystem_022_ShouldApplicationPause(void *);
extern bool cppIVRSystem_IVRSystem_022_ShouldApplicationReduceRenderingWork(void *);
extern EVRFirmwareError cppIVRSystem_IVRSystem_022_PerformFirmwareUpdate(void *, TrackedDeviceIndex_t);
extern void cppIVRSystem_IVRSystem_022_AcknowledgeQuit_Exiting(void *);
extern uint32_t cppIVRSystem_IVRSystem_022_GetAppContainerFilePaths(void *, char *, uint32_t);
extern const char * cppIVRSystem_IVRSystem_022_GetRuntimeVersion(void *);
#ifdef __cplusplus
}
#endif
