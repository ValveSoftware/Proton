#ifdef __cplusplus
extern "C" {
#endif
extern void cppIVRCompositor_IVRCompositor_024_SetTrackingSpace(void *, ETrackingUniverseOrigin);
extern ETrackingUniverseOrigin cppIVRCompositor_IVRCompositor_024_GetTrackingSpace(void *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_024_WaitGetPoses(void *, TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_024_GetLastPoses(void *, TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_024_GetLastPoseForTrackedDeviceIndex(void *, TrackedDeviceIndex_t, TrackedDevicePose_t *, TrackedDevicePose_t *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_024_Submit(void *, EVREye, Texture_t *, VRTextureBounds_t *, EVRSubmitFlags);
extern void cppIVRCompositor_IVRCompositor_024_ClearLastSubmittedFrame(void *);
extern void cppIVRCompositor_IVRCompositor_024_PostPresentHandoff(void *);
extern bool cppIVRCompositor_IVRCompositor_024_GetFrameTiming(void *, Compositor_FrameTiming *, uint32_t);
extern uint32_t cppIVRCompositor_IVRCompositor_024_GetFrameTimings(void *, Compositor_FrameTiming *, uint32_t);
extern float cppIVRCompositor_IVRCompositor_024_GetFrameTimeRemaining(void *);
extern void cppIVRCompositor_IVRCompositor_024_GetCumulativeStats(void *, Compositor_CumulativeStats *, uint32_t);
extern void cppIVRCompositor_IVRCompositor_024_FadeToColor(void *, float, float, float, float, float, bool);
extern HmdColor_t cppIVRCompositor_IVRCompositor_024_GetCurrentFadeColor(void *, bool);
extern void cppIVRCompositor_IVRCompositor_024_FadeGrid(void *, float, bool);
extern float cppIVRCompositor_IVRCompositor_024_GetCurrentGridAlpha(void *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_024_SetSkyboxOverride(void *, Texture_t *, uint32_t);
extern void cppIVRCompositor_IVRCompositor_024_ClearSkyboxOverride(void *);
extern void cppIVRCompositor_IVRCompositor_024_CompositorBringToFront(void *);
extern void cppIVRCompositor_IVRCompositor_024_CompositorGoToBack(void *);
extern void cppIVRCompositor_IVRCompositor_024_CompositorQuit(void *);
extern bool cppIVRCompositor_IVRCompositor_024_IsFullscreen(void *);
extern uint32_t cppIVRCompositor_IVRCompositor_024_GetCurrentSceneFocusProcess(void *);
extern uint32_t cppIVRCompositor_IVRCompositor_024_GetLastFrameRenderer(void *);
extern bool cppIVRCompositor_IVRCompositor_024_CanRenderScene(void *);
extern void cppIVRCompositor_IVRCompositor_024_ShowMirrorWindow(void *);
extern void cppIVRCompositor_IVRCompositor_024_HideMirrorWindow(void *);
extern bool cppIVRCompositor_IVRCompositor_024_IsMirrorWindowVisible(void *);
extern void cppIVRCompositor_IVRCompositor_024_CompositorDumpImages(void *);
extern bool cppIVRCompositor_IVRCompositor_024_ShouldAppRenderWithLowResources(void *);
extern void cppIVRCompositor_IVRCompositor_024_ForceInterleavedReprojectionOn(void *, bool);
extern void cppIVRCompositor_IVRCompositor_024_ForceReconnectProcess(void *);
extern void cppIVRCompositor_IVRCompositor_024_SuspendRendering(void *, bool);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_024_GetMirrorTextureD3D11(void *, EVREye, void *, void **);
extern void cppIVRCompositor_IVRCompositor_024_ReleaseMirrorTextureD3D11(void *, void *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_024_GetMirrorTextureGL(void *, EVREye, glUInt_t *, glSharedTextureHandle_t *);
extern bool cppIVRCompositor_IVRCompositor_024_ReleaseSharedGLTexture(void *, glUInt_t, glSharedTextureHandle_t);
extern void cppIVRCompositor_IVRCompositor_024_LockGLSharedTextureForAccess(void *, glSharedTextureHandle_t);
extern void cppIVRCompositor_IVRCompositor_024_UnlockGLSharedTextureForAccess(void *, glSharedTextureHandle_t);
extern uint32_t cppIVRCompositor_IVRCompositor_024_GetVulkanInstanceExtensionsRequired(void *, char *, uint32_t);
extern uint32_t cppIVRCompositor_IVRCompositor_024_GetVulkanDeviceExtensionsRequired(void *, VkPhysicalDevice_T *, char *, uint32_t);
extern void cppIVRCompositor_IVRCompositor_024_SetExplicitTimingMode(void *, EVRCompositorTimingMode);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_024_SubmitExplicitTimingData(void *);
extern bool cppIVRCompositor_IVRCompositor_024_IsMotionSmoothingEnabled(void *);
extern bool cppIVRCompositor_IVRCompositor_024_IsMotionSmoothingSupported(void *);
extern bool cppIVRCompositor_IVRCompositor_024_IsCurrentSceneFocusAppLoading(void *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_024_SetStageOverride_Async(void *, const char *, HmdMatrix34_t *, Compositor_StageRenderSettings *, uint32_t);
extern void cppIVRCompositor_IVRCompositor_024_ClearStageOverride(void *);
#ifdef __cplusplus
}
#endif
