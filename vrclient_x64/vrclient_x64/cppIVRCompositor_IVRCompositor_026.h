#ifdef __cplusplus
extern "C" {
#endif
extern void cppIVRCompositor_IVRCompositor_026_SetTrackingSpace(void *, ETrackingUniverseOrigin);
extern ETrackingUniverseOrigin cppIVRCompositor_IVRCompositor_026_GetTrackingSpace(void *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_026_WaitGetPoses(void *, TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_026_GetLastPoses(void *, TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_026_GetLastPoseForTrackedDeviceIndex(void *, TrackedDeviceIndex_t, TrackedDevicePose_t *, TrackedDevicePose_t *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_026_Submit(void *, EVREye, Texture_t *, VRTextureBounds_t *, EVRSubmitFlags);
extern void cppIVRCompositor_IVRCompositor_026_ClearLastSubmittedFrame(void *);
extern void cppIVRCompositor_IVRCompositor_026_PostPresentHandoff(void *);
extern bool cppIVRCompositor_IVRCompositor_026_GetFrameTiming(void *, Compositor_FrameTiming *, uint32_t);
extern uint32_t cppIVRCompositor_IVRCompositor_026_GetFrameTimings(void *, Compositor_FrameTiming *, uint32_t);
extern float cppIVRCompositor_IVRCompositor_026_GetFrameTimeRemaining(void *);
extern void cppIVRCompositor_IVRCompositor_026_GetCumulativeStats(void *, Compositor_CumulativeStats *, uint32_t);
extern void cppIVRCompositor_IVRCompositor_026_FadeToColor(void *, float, float, float, float, float, bool);
extern HmdColor_t cppIVRCompositor_IVRCompositor_026_GetCurrentFadeColor(void *, bool);
extern void cppIVRCompositor_IVRCompositor_026_FadeGrid(void *, float, bool);
extern float cppIVRCompositor_IVRCompositor_026_GetCurrentGridAlpha(void *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_026_SetSkyboxOverride(void *, Texture_t *, uint32_t);
extern void cppIVRCompositor_IVRCompositor_026_ClearSkyboxOverride(void *);
extern void cppIVRCompositor_IVRCompositor_026_CompositorBringToFront(void *);
extern void cppIVRCompositor_IVRCompositor_026_CompositorGoToBack(void *);
extern void cppIVRCompositor_IVRCompositor_026_CompositorQuit(void *);
extern bool cppIVRCompositor_IVRCompositor_026_IsFullscreen(void *);
extern uint32_t cppIVRCompositor_IVRCompositor_026_GetCurrentSceneFocusProcess(void *);
extern uint32_t cppIVRCompositor_IVRCompositor_026_GetLastFrameRenderer(void *);
extern bool cppIVRCompositor_IVRCompositor_026_CanRenderScene(void *);
extern void cppIVRCompositor_IVRCompositor_026_ShowMirrorWindow(void *);
extern void cppIVRCompositor_IVRCompositor_026_HideMirrorWindow(void *);
extern bool cppIVRCompositor_IVRCompositor_026_IsMirrorWindowVisible(void *);
extern void cppIVRCompositor_IVRCompositor_026_CompositorDumpImages(void *);
extern bool cppIVRCompositor_IVRCompositor_026_ShouldAppRenderWithLowResources(void *);
extern void cppIVRCompositor_IVRCompositor_026_ForceInterleavedReprojectionOn(void *, bool);
extern void cppIVRCompositor_IVRCompositor_026_ForceReconnectProcess(void *);
extern void cppIVRCompositor_IVRCompositor_026_SuspendRendering(void *, bool);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_026_GetMirrorTextureD3D11(void *, EVREye, void *, void **);
extern void cppIVRCompositor_IVRCompositor_026_ReleaseMirrorTextureD3D11(void *, void *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_026_GetMirrorTextureGL(void *, EVREye, glUInt_t *, glSharedTextureHandle_t *);
extern bool cppIVRCompositor_IVRCompositor_026_ReleaseSharedGLTexture(void *, glUInt_t, glSharedTextureHandle_t);
extern void cppIVRCompositor_IVRCompositor_026_LockGLSharedTextureForAccess(void *, glSharedTextureHandle_t);
extern void cppIVRCompositor_IVRCompositor_026_UnlockGLSharedTextureForAccess(void *, glSharedTextureHandle_t);
extern uint32_t cppIVRCompositor_IVRCompositor_026_GetVulkanInstanceExtensionsRequired(void *, char *, uint32_t);
extern uint32_t cppIVRCompositor_IVRCompositor_026_GetVulkanDeviceExtensionsRequired(void *, VkPhysicalDevice_T *, char *, uint32_t);
extern void cppIVRCompositor_IVRCompositor_026_SetExplicitTimingMode(void *, EVRCompositorTimingMode);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_026_SubmitExplicitTimingData(void *);
extern bool cppIVRCompositor_IVRCompositor_026_IsMotionSmoothingEnabled(void *);
extern bool cppIVRCompositor_IVRCompositor_026_IsMotionSmoothingSupported(void *);
extern bool cppIVRCompositor_IVRCompositor_026_IsCurrentSceneFocusAppLoading(void *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_026_SetStageOverride_Async(void *, const char *, HmdMatrix34_t *, Compositor_StageRenderSettings *, uint32_t);
extern void cppIVRCompositor_IVRCompositor_026_ClearStageOverride(void *);
extern bool cppIVRCompositor_IVRCompositor_026_GetCompositorBenchmarkResults(void *, Compositor_BenchmarkResults *, uint32_t);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_026_GetLastPosePredictionIDs(void *, uint32_t *, uint32_t *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_026_GetPosesForFrame(void *, uint32_t, TrackedDevicePose_t *, uint32_t);
#ifdef __cplusplus
}
#endif
