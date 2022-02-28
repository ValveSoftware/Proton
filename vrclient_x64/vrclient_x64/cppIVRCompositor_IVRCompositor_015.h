#ifdef __cplusplus
extern "C" {
#endif
extern void cppIVRCompositor_IVRCompositor_015_SetTrackingSpace(void *, ETrackingUniverseOrigin);
extern ETrackingUniverseOrigin cppIVRCompositor_IVRCompositor_015_GetTrackingSpace(void *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_015_WaitGetPoses(void *, TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_015_GetLastPoses(void *, TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_015_GetLastPoseForTrackedDeviceIndex(void *, TrackedDeviceIndex_t, TrackedDevicePose_t *, TrackedDevicePose_t *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_015_Submit(void *, EVREye, Texture_t *, VRTextureBounds_t *, EVRSubmitFlags);
extern void cppIVRCompositor_IVRCompositor_015_ClearLastSubmittedFrame(void *);
extern void cppIVRCompositor_IVRCompositor_015_PostPresentHandoff(void *);
extern bool cppIVRCompositor_IVRCompositor_015_GetFrameTiming(void *, Compositor_FrameTiming *, uint32_t);
extern float cppIVRCompositor_IVRCompositor_015_GetFrameTimeRemaining(void *);
extern void cppIVRCompositor_IVRCompositor_015_GetCumulativeStats(void *, Compositor_CumulativeStats *, uint32_t);
extern void cppIVRCompositor_IVRCompositor_015_FadeToColor(void *, float, float, float, float, float, bool);
extern void cppIVRCompositor_IVRCompositor_015_FadeGrid(void *, float, bool);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_015_SetSkyboxOverride(void *, Texture_t *, uint32_t);
extern void cppIVRCompositor_IVRCompositor_015_ClearSkyboxOverride(void *);
extern void cppIVRCompositor_IVRCompositor_015_CompositorBringToFront(void *);
extern void cppIVRCompositor_IVRCompositor_015_CompositorGoToBack(void *);
extern void cppIVRCompositor_IVRCompositor_015_CompositorQuit(void *);
extern bool cppIVRCompositor_IVRCompositor_015_IsFullscreen(void *);
extern uint32_t cppIVRCompositor_IVRCompositor_015_GetCurrentSceneFocusProcess(void *);
extern uint32_t cppIVRCompositor_IVRCompositor_015_GetLastFrameRenderer(void *);
extern bool cppIVRCompositor_IVRCompositor_015_CanRenderScene(void *);
extern void cppIVRCompositor_IVRCompositor_015_ShowMirrorWindow(void *);
extern void cppIVRCompositor_IVRCompositor_015_HideMirrorWindow(void *);
extern bool cppIVRCompositor_IVRCompositor_015_IsMirrorWindowVisible(void *);
extern void cppIVRCompositor_IVRCompositor_015_CompositorDumpImages(void *);
extern bool cppIVRCompositor_IVRCompositor_015_ShouldAppRenderWithLowResources(void *);
extern void cppIVRCompositor_IVRCompositor_015_ForceInterleavedReprojectionOn(void *, bool);
extern void cppIVRCompositor_IVRCompositor_015_ForceReconnectProcess(void *);
extern void cppIVRCompositor_IVRCompositor_015_SuspendRendering(void *, bool);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_015_RequestScreenshot(void *, EVRScreenshotType, const char *, const char *);
extern EVRScreenshotType cppIVRCompositor_IVRCompositor_015_GetCurrentScreenshotType(void *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_015_GetMirrorTextureD3D11(void *, EVREye, void *, void **);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_015_GetMirrorTextureGL(void *, EVREye, glUInt_t *, glSharedTextureHandle_t *);
extern bool cppIVRCompositor_IVRCompositor_015_ReleaseSharedGLTexture(void *, glUInt_t, glSharedTextureHandle_t);
extern void cppIVRCompositor_IVRCompositor_015_LockGLSharedTextureForAccess(void *, glSharedTextureHandle_t);
extern void cppIVRCompositor_IVRCompositor_015_UnlockGLSharedTextureForAccess(void *, glSharedTextureHandle_t);
#ifdef __cplusplus
}
#endif
