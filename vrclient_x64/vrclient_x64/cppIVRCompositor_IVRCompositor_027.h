#ifdef __cplusplus
extern "C" {
#endif
extern void cppIVRCompositor_IVRCompositor_027_SetTrackingSpace(void *, ETrackingUniverseOrigin);
extern ETrackingUniverseOrigin cppIVRCompositor_IVRCompositor_027_GetTrackingSpace(void *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_027_WaitGetPoses(void *, TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_027_GetLastPoses(void *, TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_027_GetLastPoseForTrackedDeviceIndex(void *, TrackedDeviceIndex_t, TrackedDevicePose_t *, TrackedDevicePose_t *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_027_Submit(void *, EVREye, const Texture_t *, const VRTextureBounds_t *, EVRSubmitFlags);
extern void cppIVRCompositor_IVRCompositor_027_ClearLastSubmittedFrame(void *);
extern void cppIVRCompositor_IVRCompositor_027_PostPresentHandoff(void *);
extern bool cppIVRCompositor_IVRCompositor_027_GetFrameTiming(void *, Compositor_FrameTiming *, uint32_t);
extern uint32_t cppIVRCompositor_IVRCompositor_027_GetFrameTimings(void *, Compositor_FrameTiming *, uint32_t);
extern float cppIVRCompositor_IVRCompositor_027_GetFrameTimeRemaining(void *);
extern void cppIVRCompositor_IVRCompositor_027_GetCumulativeStats(void *, Compositor_CumulativeStats *, uint32_t);
extern void cppIVRCompositor_IVRCompositor_027_FadeToColor(void *, float, float, float, float, float, bool);
extern HmdColor_t cppIVRCompositor_IVRCompositor_027_GetCurrentFadeColor(void *, bool);
extern void cppIVRCompositor_IVRCompositor_027_FadeGrid(void *, float, bool);
extern float cppIVRCompositor_IVRCompositor_027_GetCurrentGridAlpha(void *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_027_SetSkyboxOverride(void *, const Texture_t *, uint32_t);
extern void cppIVRCompositor_IVRCompositor_027_ClearSkyboxOverride(void *);
extern void cppIVRCompositor_IVRCompositor_027_CompositorBringToFront(void *);
extern void cppIVRCompositor_IVRCompositor_027_CompositorGoToBack(void *);
extern void cppIVRCompositor_IVRCompositor_027_CompositorQuit(void *);
extern bool cppIVRCompositor_IVRCompositor_027_IsFullscreen(void *);
extern uint32_t cppIVRCompositor_IVRCompositor_027_GetCurrentSceneFocusProcess(void *);
extern uint32_t cppIVRCompositor_IVRCompositor_027_GetLastFrameRenderer(void *);
extern bool cppIVRCompositor_IVRCompositor_027_CanRenderScene(void *);
extern void cppIVRCompositor_IVRCompositor_027_ShowMirrorWindow(void *);
extern void cppIVRCompositor_IVRCompositor_027_HideMirrorWindow(void *);
extern bool cppIVRCompositor_IVRCompositor_027_IsMirrorWindowVisible(void *);
extern void cppIVRCompositor_IVRCompositor_027_CompositorDumpImages(void *);
extern bool cppIVRCompositor_IVRCompositor_027_ShouldAppRenderWithLowResources(void *);
extern void cppIVRCompositor_IVRCompositor_027_ForceInterleavedReprojectionOn(void *, bool);
extern void cppIVRCompositor_IVRCompositor_027_ForceReconnectProcess(void *);
extern void cppIVRCompositor_IVRCompositor_027_SuspendRendering(void *, bool);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_027_GetMirrorTextureD3D11(void *, EVREye, void *, void **);
extern void cppIVRCompositor_IVRCompositor_027_ReleaseMirrorTextureD3D11(void *, void *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_027_GetMirrorTextureGL(void *, EVREye, glUInt_t *, glSharedTextureHandle_t *);
extern bool cppIVRCompositor_IVRCompositor_027_ReleaseSharedGLTexture(void *, glUInt_t, glSharedTextureHandle_t);
extern void cppIVRCompositor_IVRCompositor_027_LockGLSharedTextureForAccess(void *, glSharedTextureHandle_t);
extern void cppIVRCompositor_IVRCompositor_027_UnlockGLSharedTextureForAccess(void *, glSharedTextureHandle_t);
extern uint32_t cppIVRCompositor_IVRCompositor_027_GetVulkanInstanceExtensionsRequired(void *, char *, uint32_t);
extern uint32_t cppIVRCompositor_IVRCompositor_027_GetVulkanDeviceExtensionsRequired(void *, VkPhysicalDevice_T *, char *, uint32_t);
extern void cppIVRCompositor_IVRCompositor_027_SetExplicitTimingMode(void *, EVRCompositorTimingMode);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_027_SubmitExplicitTimingData(void *);
extern bool cppIVRCompositor_IVRCompositor_027_IsMotionSmoothingEnabled(void *);
extern bool cppIVRCompositor_IVRCompositor_027_IsMotionSmoothingSupported(void *);
extern bool cppIVRCompositor_IVRCompositor_027_IsCurrentSceneFocusAppLoading(void *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_027_SetStageOverride_Async(void *, const char *, const HmdMatrix34_t *, const Compositor_StageRenderSettings *, uint32_t);
extern void cppIVRCompositor_IVRCompositor_027_ClearStageOverride(void *);
extern bool cppIVRCompositor_IVRCompositor_027_GetCompositorBenchmarkResults(void *, Compositor_BenchmarkResults *, uint32_t);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_027_GetLastPosePredictionIDs(void *, uint32_t *, uint32_t *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_027_GetPosesForFrame(void *, uint32_t, TrackedDevicePose_t *, uint32_t);
#ifdef __cplusplus
}
#endif
