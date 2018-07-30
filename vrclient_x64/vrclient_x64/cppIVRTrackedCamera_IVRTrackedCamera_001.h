#ifdef __cplusplus
extern "C" {
#endif
extern bool cppIVRTrackedCamera_IVRTrackedCamera_001_HasCamera(void *, TrackedDeviceIndex_t);
extern bool cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraFirmwareDescription(void *, TrackedDeviceIndex_t, char *, uint32_t);
extern bool cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraFrameDimensions(void *, TrackedDeviceIndex_t, ECameraVideoStreamFormat, uint32_t *, uint32_t *);
extern bool cppIVRTrackedCamera_IVRTrackedCamera_001_SetCameraVideoStreamFormat(void *, TrackedDeviceIndex_t, ECameraVideoStreamFormat);
extern ECameraVideoStreamFormat cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraVideoStreamFormat(void *, TrackedDeviceIndex_t);
extern bool cppIVRTrackedCamera_IVRTrackedCamera_001_EnableCameraForStreaming(void *, TrackedDeviceIndex_t, bool);
extern bool cppIVRTrackedCamera_IVRTrackedCamera_001_StartVideoStream(void *, TrackedDeviceIndex_t);
extern bool cppIVRTrackedCamera_IVRTrackedCamera_001_StopVideoStream(void *, TrackedDeviceIndex_t);
extern bool cppIVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamActive(void *, TrackedDeviceIndex_t);
extern float cppIVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamElapsedTime(void *, TrackedDeviceIndex_t);
extern const CameraVideoStreamFrame_t * cppIVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamFrame(void *, TrackedDeviceIndex_t);
extern bool cppIVRTrackedCamera_IVRTrackedCamera_001_ReleaseVideoStreamFrame(void *, TrackedDeviceIndex_t, CameraVideoStreamFrame_t *);
extern bool cppIVRTrackedCamera_IVRTrackedCamera_001_SetAutoExposure(void *, TrackedDeviceIndex_t, bool);
extern bool cppIVRTrackedCamera_IVRTrackedCamera_001_PauseVideoStream(void *, TrackedDeviceIndex_t);
extern bool cppIVRTrackedCamera_IVRTrackedCamera_001_ResumeVideoStream(void *, TrackedDeviceIndex_t);
extern bool cppIVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamPaused(void *, TrackedDeviceIndex_t);
extern bool cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraDistortion(void *, TrackedDeviceIndex_t, float, float, float *, float *);
extern bool cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraProjection(void *, TrackedDeviceIndex_t, float, float, float, float, HmdMatrix44_t *);
#ifdef __cplusplus
}
#endif
