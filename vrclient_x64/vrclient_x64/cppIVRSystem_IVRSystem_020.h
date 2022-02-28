#ifdef __cplusplus
extern "C" {
#endif
extern void cppIVRSystem_IVRSystem_020_GetRecommendedRenderTargetSize(void *, uint32_t *, uint32_t *);
extern HmdMatrix44_t cppIVRSystem_IVRSystem_020_GetProjectionMatrix(void *, EVREye, float, float);
extern void cppIVRSystem_IVRSystem_020_GetProjectionRaw(void *, EVREye, float *, float *, float *, float *);
extern bool cppIVRSystem_IVRSystem_020_ComputeDistortion(void *, EVREye, float, float, DistortionCoordinates_t *);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_020_GetEyeToHeadTransform(void *, EVREye);
extern bool cppIVRSystem_IVRSystem_020_GetTimeSinceLastVsync(void *, float *, uint64_t *);
extern int32_t cppIVRSystem_IVRSystem_020_GetD3D9AdapterIndex(void *);
extern void cppIVRSystem_IVRSystem_020_GetDXGIOutputInfo(void *, int32_t *);
extern void cppIVRSystem_IVRSystem_020_GetOutputDevice(void *, uint64_t *, ETextureType, VkInstance_T *);
extern bool cppIVRSystem_IVRSystem_020_IsDisplayOnDesktop(void *);
extern bool cppIVRSystem_IVRSystem_020_SetDisplayVisibility(void *, bool);
extern void cppIVRSystem_IVRSystem_020_GetDeviceToAbsoluteTrackingPose(void *, ETrackingUniverseOrigin, float, TrackedDevicePose_t *, uint32_t);
extern void cppIVRSystem_IVRSystem_020_ResetSeatedZeroPose(void *);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_020_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(void *);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_020_GetRawZeroPoseToStandingAbsoluteTrackingPose(void *);
extern uint32_t cppIVRSystem_IVRSystem_020_GetSortedTrackedDeviceIndicesOfClass(void *, ETrackedDeviceClass, TrackedDeviceIndex_t *, uint32_t, TrackedDeviceIndex_t);
extern EDeviceActivityLevel cppIVRSystem_IVRSystem_020_GetTrackedDeviceActivityLevel(void *, TrackedDeviceIndex_t);
extern void cppIVRSystem_IVRSystem_020_ApplyTransform(void *, TrackedDevicePose_t *, TrackedDevicePose_t *, HmdMatrix34_t *);
extern TrackedDeviceIndex_t cppIVRSystem_IVRSystem_020_GetTrackedDeviceIndexForControllerRole(void *, ETrackedControllerRole);
extern ETrackedControllerRole cppIVRSystem_IVRSystem_020_GetControllerRoleForTrackedDeviceIndex(void *, TrackedDeviceIndex_t);
extern ETrackedDeviceClass cppIVRSystem_IVRSystem_020_GetTrackedDeviceClass(void *, TrackedDeviceIndex_t);
extern bool cppIVRSystem_IVRSystem_020_IsTrackedDeviceConnected(void *, TrackedDeviceIndex_t);
extern bool cppIVRSystem_IVRSystem_020_GetBoolTrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, ETrackedPropertyError *);
extern float cppIVRSystem_IVRSystem_020_GetFloatTrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, ETrackedPropertyError *);
extern int32_t cppIVRSystem_IVRSystem_020_GetInt32TrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, ETrackedPropertyError *);
extern uint64_t cppIVRSystem_IVRSystem_020_GetUint64TrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, ETrackedPropertyError *);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_020_GetMatrix34TrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, ETrackedPropertyError *);
extern uint32_t cppIVRSystem_IVRSystem_020_GetArrayTrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, PropertyTypeTag_t, void *, uint32_t, ETrackedPropertyError *);
extern uint32_t cppIVRSystem_IVRSystem_020_GetStringTrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, char *, uint32_t, ETrackedPropertyError *);
extern const char * cppIVRSystem_IVRSystem_020_GetPropErrorNameFromEnum(void *, ETrackedPropertyError);
extern bool cppIVRSystem_IVRSystem_020_PollNextEvent(void *, winVREvent_t_1715 *, uint32_t);
extern bool cppIVRSystem_IVRSystem_020_PollNextEventWithPose(void *, ETrackingUniverseOrigin, winVREvent_t_1715 *, uint32_t, TrackedDevicePose_t *);
extern const char * cppIVRSystem_IVRSystem_020_GetEventTypeNameFromEnum(void *, EVREventType);
extern HiddenAreaMesh_t cppIVRSystem_IVRSystem_020_GetHiddenAreaMesh(void *, EVREye, EHiddenAreaMeshType);
extern bool cppIVRSystem_IVRSystem_020_GetControllerState(void *, TrackedDeviceIndex_t, winVRControllerState001_t_1715 *, uint32_t);
extern bool cppIVRSystem_IVRSystem_020_GetControllerStateWithPose(void *, ETrackingUniverseOrigin, TrackedDeviceIndex_t, winVRControllerState001_t_1715 *, uint32_t, TrackedDevicePose_t *);
extern void cppIVRSystem_IVRSystem_020_TriggerHapticPulse(void *, TrackedDeviceIndex_t, uint32_t, unsigned short);
extern const char * cppIVRSystem_IVRSystem_020_GetButtonIdNameFromEnum(void *, EVRButtonId);
extern const char * cppIVRSystem_IVRSystem_020_GetControllerAxisTypeNameFromEnum(void *, EVRControllerAxisType);
extern bool cppIVRSystem_IVRSystem_020_IsInputAvailable(void *);
extern bool cppIVRSystem_IVRSystem_020_IsSteamVRDrawingControllers(void *);
extern bool cppIVRSystem_IVRSystem_020_ShouldApplicationPause(void *);
extern bool cppIVRSystem_IVRSystem_020_ShouldApplicationReduceRenderingWork(void *);
extern EVRFirmwareError cppIVRSystem_IVRSystem_020_PerformFirmwareUpdate(void *, TrackedDeviceIndex_t);
extern void cppIVRSystem_IVRSystem_020_AcknowledgeQuit_Exiting(void *);
extern void cppIVRSystem_IVRSystem_020_AcknowledgeQuit_UserPrompt(void *);
extern uint32_t cppIVRSystem_IVRSystem_020_GetAppContainerFilePaths(void *, char *, uint32_t);
extern const char * cppIVRSystem_IVRSystem_020_GetRuntimeVersion(void *);
#ifdef __cplusplus
}
#endif
