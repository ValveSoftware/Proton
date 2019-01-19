#ifdef __cplusplus
extern "C" {
#endif
extern void cppIVRSystem_IVRSystem_019_GetRecommendedRenderTargetSize(void *, uint32_t *, uint32_t *);
extern HmdMatrix44_t cppIVRSystem_IVRSystem_019_GetProjectionMatrix(void *, EVREye, float, float);
extern void cppIVRSystem_IVRSystem_019_GetProjectionRaw(void *, EVREye, float *, float *, float *, float *);
extern bool cppIVRSystem_IVRSystem_019_ComputeDistortion(void *, EVREye, float, float, DistortionCoordinates_t *);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_019_GetEyeToHeadTransform(void *, EVREye);
extern bool cppIVRSystem_IVRSystem_019_GetTimeSinceLastVsync(void *, float *, uint64_t *);
extern int32_t cppIVRSystem_IVRSystem_019_GetD3D9AdapterIndex(void *);
extern void cppIVRSystem_IVRSystem_019_GetDXGIOutputInfo(void *, int32_t *);
extern void cppIVRSystem_IVRSystem_019_GetOutputDevice(void *, uint64_t *, ETextureType, VkInstance_T *);
extern bool cppIVRSystem_IVRSystem_019_IsDisplayOnDesktop(void *);
extern bool cppIVRSystem_IVRSystem_019_SetDisplayVisibility(void *, bool);
extern void cppIVRSystem_IVRSystem_019_GetDeviceToAbsoluteTrackingPose(void *, ETrackingUniverseOrigin, float, TrackedDevicePose_t *, uint32_t);
extern void cppIVRSystem_IVRSystem_019_ResetSeatedZeroPose(void *);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_019_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(void *);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_019_GetRawZeroPoseToStandingAbsoluteTrackingPose(void *);
extern uint32_t cppIVRSystem_IVRSystem_019_GetSortedTrackedDeviceIndicesOfClass(void *, ETrackedDeviceClass, TrackedDeviceIndex_t *, uint32_t, TrackedDeviceIndex_t);
extern EDeviceActivityLevel cppIVRSystem_IVRSystem_019_GetTrackedDeviceActivityLevel(void *, TrackedDeviceIndex_t);
extern void cppIVRSystem_IVRSystem_019_ApplyTransform(void *, TrackedDevicePose_t *, TrackedDevicePose_t *, HmdMatrix34_t *);
extern TrackedDeviceIndex_t cppIVRSystem_IVRSystem_019_GetTrackedDeviceIndexForControllerRole(void *, ETrackedControllerRole);
extern ETrackedControllerRole cppIVRSystem_IVRSystem_019_GetControllerRoleForTrackedDeviceIndex(void *, TrackedDeviceIndex_t);
extern ETrackedDeviceClass cppIVRSystem_IVRSystem_019_GetTrackedDeviceClass(void *, TrackedDeviceIndex_t);
extern bool cppIVRSystem_IVRSystem_019_IsTrackedDeviceConnected(void *, TrackedDeviceIndex_t);
extern bool cppIVRSystem_IVRSystem_019_GetBoolTrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, ETrackedPropertyError *);
extern float cppIVRSystem_IVRSystem_019_GetFloatTrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, ETrackedPropertyError *);
extern int32_t cppIVRSystem_IVRSystem_019_GetInt32TrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, ETrackedPropertyError *);
extern uint64_t cppIVRSystem_IVRSystem_019_GetUint64TrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, ETrackedPropertyError *);
extern HmdMatrix34_t cppIVRSystem_IVRSystem_019_GetMatrix34TrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, ETrackedPropertyError *);
extern uint32_t cppIVRSystem_IVRSystem_019_GetArrayTrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, PropertyTypeTag_t, void *, uint32_t, ETrackedPropertyError *);
extern uint32_t cppIVRSystem_IVRSystem_019_GetStringTrackedDeviceProperty(void *, TrackedDeviceIndex_t, ETrackedDeviceProperty, char *, uint32_t, ETrackedPropertyError *);
extern const char * cppIVRSystem_IVRSystem_019_GetPropErrorNameFromEnum(void *, ETrackedPropertyError);
extern bool cppIVRSystem_IVRSystem_019_PollNextEvent(void *, winVREvent_t_113b *, uint32_t);
extern bool cppIVRSystem_IVRSystem_019_PollNextEventWithPose(void *, ETrackingUniverseOrigin, winVREvent_t_113b *, uint32_t, TrackedDevicePose_t *);
extern const char * cppIVRSystem_IVRSystem_019_GetEventTypeNameFromEnum(void *, EVREventType);
extern HiddenAreaMesh_t cppIVRSystem_IVRSystem_019_GetHiddenAreaMesh(void *, EVREye, EHiddenAreaMeshType);
extern bool cppIVRSystem_IVRSystem_019_GetControllerState(void *, TrackedDeviceIndex_t, winVRControllerState001_t_113b *, uint32_t);
extern bool cppIVRSystem_IVRSystem_019_GetControllerStateWithPose(void *, ETrackingUniverseOrigin, TrackedDeviceIndex_t, winVRControllerState001_t_113b *, uint32_t, TrackedDevicePose_t *);
extern void cppIVRSystem_IVRSystem_019_TriggerHapticPulse(void *, TrackedDeviceIndex_t, uint32_t, unsigned short);
extern const char * cppIVRSystem_IVRSystem_019_GetButtonIdNameFromEnum(void *, EVRButtonId);
extern const char * cppIVRSystem_IVRSystem_019_GetControllerAxisTypeNameFromEnum(void *, EVRControllerAxisType);
extern bool cppIVRSystem_IVRSystem_019_IsInputAvailable(void *);
extern bool cppIVRSystem_IVRSystem_019_IsSteamVRDrawingControllers(void *);
extern bool cppIVRSystem_IVRSystem_019_ShouldApplicationPause(void *);
extern bool cppIVRSystem_IVRSystem_019_ShouldApplicationReduceRenderingWork(void *);
extern uint32_t cppIVRSystem_IVRSystem_019_DriverDebugRequest(void *, TrackedDeviceIndex_t, const char *, char *, uint32_t);
extern EVRFirmwareError cppIVRSystem_IVRSystem_019_PerformFirmwareUpdate(void *, TrackedDeviceIndex_t);
extern void cppIVRSystem_IVRSystem_019_AcknowledgeQuit_Exiting(void *);
extern void cppIVRSystem_IVRSystem_019_AcknowledgeQuit_UserPrompt(void *);
#ifdef __cplusplus
}
#endif
