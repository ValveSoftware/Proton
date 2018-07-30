#ifdef __cplusplus
extern "C" {
#endif
extern const char * cppIVRTrackedCamera_IVRTrackedCamera_003_GetCameraErrorNameFromEnum(void *, EVRTrackedCameraError);
extern EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_003_HasCamera(void *, TrackedDeviceIndex_t, bool *);
extern EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_003_GetCameraFrameSize(void *, TrackedDeviceIndex_t, EVRTrackedCameraFrameType, uint32_t *, uint32_t *, uint32_t *);
extern EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_003_GetCameraIntrinsics(void *, TrackedDeviceIndex_t, EVRTrackedCameraFrameType, HmdVector2_t *, HmdVector2_t *);
extern EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_003_GetCameraProjection(void *, TrackedDeviceIndex_t, EVRTrackedCameraFrameType, float, float, HmdMatrix44_t *);
extern EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_003_AcquireVideoStreamingService(void *, TrackedDeviceIndex_t, TrackedCameraHandle_t *);
extern EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_003_ReleaseVideoStreamingService(void *, TrackedCameraHandle_t);
extern EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamFrameBuffer(void *, TrackedCameraHandle_t, EVRTrackedCameraFrameType, void *, uint32_t, CameraVideoStreamFrameHeader_t *, uint32_t);
extern EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureSize(void *, TrackedDeviceIndex_t, EVRTrackedCameraFrameType, VRTextureBounds_t *, uint32_t *, uint32_t *);
extern EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureD3D11(void *, TrackedCameraHandle_t, EVRTrackedCameraFrameType, void *, void **, CameraVideoStreamFrameHeader_t *, uint32_t);
extern EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureGL(void *, TrackedCameraHandle_t, EVRTrackedCameraFrameType, glUInt_t *, CameraVideoStreamFrameHeader_t *, uint32_t);
extern EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_003_ReleaseVideoStreamTextureGL(void *, TrackedCameraHandle_t, glUInt_t);
#ifdef __cplusplus
}
#endif
