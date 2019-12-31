#ifdef __cplusplus
extern "C" {
#endif
extern const char * cppIVRTrackedCamera_IVRTrackedCamera_006_GetCameraErrorNameFromEnum(void *, EVRTrackedCameraError);
extern EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_006_HasCamera(void *, TrackedDeviceIndex_t, bool *);
extern EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_006_GetCameraFrameSize(void *, TrackedDeviceIndex_t, EVRTrackedCameraFrameType, uint32_t *, uint32_t *, uint32_t *);
extern EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_006_GetCameraIntrinsics(void *, TrackedDeviceIndex_t, uint32_t, EVRTrackedCameraFrameType, HmdVector2_t *, HmdVector2_t *);
extern EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_006_GetCameraProjection(void *, TrackedDeviceIndex_t, uint32_t, EVRTrackedCameraFrameType, float, float, HmdMatrix44_t *);
extern EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_006_AcquireVideoStreamingService(void *, TrackedDeviceIndex_t, TrackedCameraHandle_t *);
extern EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_006_ReleaseVideoStreamingService(void *, TrackedCameraHandle_t);
extern EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamFrameBuffer(void *, TrackedCameraHandle_t, EVRTrackedCameraFrameType, void *, uint32_t, winCameraVideoStreamFrameHeader_t_1819 *, uint32_t);
extern EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureSize(void *, TrackedDeviceIndex_t, EVRTrackedCameraFrameType, VRTextureBounds_t *, uint32_t *, uint32_t *);
extern EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureD3D11(void *, TrackedCameraHandle_t, EVRTrackedCameraFrameType, void *, void **, winCameraVideoStreamFrameHeader_t_1819 *, uint32_t);
extern EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureGL(void *, TrackedCameraHandle_t, EVRTrackedCameraFrameType, glUInt_t *, winCameraVideoStreamFrameHeader_t_1819 *, uint32_t);
extern EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_006_ReleaseVideoStreamTextureGL(void *, TrackedCameraHandle_t, glUInt_t);
extern void cppIVRTrackedCamera_IVRTrackedCamera_006_SetCameraTrackingSpace(void *, ETrackingUniverseOrigin);
extern ETrackingUniverseOrigin cppIVRTrackedCamera_IVRTrackedCamera_006_GetCameraTrackingSpace(void *);
#ifdef __cplusplus
}
#endif
