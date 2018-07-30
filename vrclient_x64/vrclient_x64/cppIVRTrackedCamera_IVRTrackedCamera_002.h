#ifdef __cplusplus
extern "C" {
#endif
extern const char * cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraErrorNameFromEnum(void *, EVRTrackedCameraError);
extern EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_002_HasCamera(void *, TrackedDeviceIndex_t, bool *);
extern EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraFrameSize(void *, TrackedDeviceIndex_t, EVRTrackedCameraFrameType, uint32_t *, uint32_t *, uint32_t *);
extern EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraIntrinisics(void *, TrackedDeviceIndex_t, EVRTrackedCameraFrameType, HmdVector2_t *, HmdVector2_t *);
extern EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraProjection(void *, TrackedDeviceIndex_t, EVRTrackedCameraFrameType, float, float, HmdMatrix44_t *);
extern EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_002_AcquireVideoStreamingService(void *, TrackedDeviceIndex_t, TrackedCameraHandle_t *);
extern EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_002_ReleaseVideoStreamingService(void *, TrackedCameraHandle_t);
extern EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_002_GetVideoStreamFrameBuffer(void *, TrackedCameraHandle_t, EVRTrackedCameraFrameType, void *, uint32_t, CameraVideoStreamFrameHeader_t *, uint32_t);
#ifdef __cplusplus
}
#endif
