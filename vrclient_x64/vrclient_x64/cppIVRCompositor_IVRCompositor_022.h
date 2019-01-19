#ifdef __cplusplus
extern "C" {
#endif
extern void cppIVRCompositor_IVRCompositor_022_SetTrackingSpace(void *, ETrackingUniverseOrigin);
extern ETrackingUniverseOrigin cppIVRCompositor_IVRCompositor_022_GetTrackingSpace(void *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_022_WaitGetPoses(void *, TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_022_GetLastPoses(void *, TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_022_GetLastPoseForTrackedDeviceIndex(void *, TrackedDeviceIndex_t, TrackedDevicePose_t *, TrackedDevicePose_t *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_022_Submit(void *, EVREye, Texture_t *, VRTextureBounds_t *, EVRSubmitFlags);
extern void cppIVRCompositor_IVRCompositor_022_ClearLastSubmittedFrame(void *);
extern void cppIVRCompositor_IVRCompositor_022_PostPresentHandoff(void *);
extern bool cppIVRCompositor_IVRCompositor_022_GetFrameTiming(void *, Compositor_FrameTiming *, uint32_t);
extern uint32_t cppIVRCompositor_IVRCompositor_022_GetFrameTimings(void *, Compositor_FrameTiming *, uint32_t);
extern float cppIVRCompositor_IVRCompositor_022_GetFrameTimeRemaining(void *);
extern void cppIVRCompositor_IVRCompositor_022_GetCumulativeStats(void *, Compositor_CumulativeStats *, uint32_t);
extern void cppIVRCompositor_IVRCompositor_022_FadeToColor(void *, float, float, float, float, float, bool);
extern HmdColor_t cppIVRCompositor_IVRCompositor_022_GetCurrentFadeColor(void *, bool);
extern void cppIVRCompositor_IVRCompositor_022_FadeGrid(void *, float, bool);
extern float cppIVRCompositor_IVRCompositor_022_GetCurrentGridAlpha(void *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_022_SetSkyboxOverride(void *, Texture_t *, uint32_t);
extern void cppIVRCompositor_IVRCompositor_022_ClearSkyboxOverride(void *);
extern void cppIVRCompositor_IVRCompositor_022_CompositorBringToFront(void *);
extern void cppIVRCompositor_IVRCompositor_022_CompositorGoToBack(void *);
extern void cppIVRCompositor_IVRCompositor_022_CompositorQuit(void *);
extern bool cppIVRCompositor_IVRCompositor_022_IsFullscreen(void *);
extern uint32_t cppIVRCompositor_IVRCompositor_022_GetCurrentSceneFocusProcess(void *);
extern uint32_t cppIVRCompositor_IVRCompositor_022_GetLastFrameRenderer(void *);
extern bool cppIVRCompositor_IVRCompositor_022_CanRenderScene(void *);
extern void cppIVRCompositor_IVRCompositor_022_ShowMirrorWindow(void *);
extern void cppIVRCompositor_IVRCompositor_022_HideMirrorWindow(void *);
extern bool cppIVRCompositor_IVRCompositor_022_IsMirrorWindowVisible(void *);
extern void cppIVRCompositor_IVRCompositor_022_CompositorDumpImages(void *);
extern bool cppIVRCompositor_IVRCompositor_022_ShouldAppRenderWithLowResources(void *);
extern void cppIVRCompositor_IVRCompositor_022_ForceInterleavedReprojectionOn(void *, bool);
extern void cppIVRCompositor_IVRCompositor_022_ForceReconnectProcess(void *);
extern void cppIVRCompositor_IVRCompositor_022_SuspendRendering(void *, bool);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_022_GetMirrorTextureD3D11(void *, EVREye, void *, void **);
extern void cppIVRCompositor_IVRCompositor_022_ReleaseMirrorTextureD3D11(void *, void *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_022_GetMirrorTextureGL(void *, EVREye, glUInt_t *, glSharedTextureHandle_t *);
extern bool cppIVRCompositor_IVRCompositor_022_ReleaseSharedGLTexture(void *, glUInt_t, glSharedTextureHandle_t);
extern void cppIVRCompositor_IVRCompositor_022_LockGLSharedTextureForAccess(void *, glSharedTextureHandle_t);
extern void cppIVRCompositor_IVRCompositor_022_UnlockGLSharedTextureForAccess(void *, glSharedTextureHandle_t);
extern uint32_t cppIVRCompositor_IVRCompositor_022_GetVulkanInstanceExtensionsRequired(void *, char *, uint32_t);
extern uint32_t cppIVRCompositor_IVRCompositor_022_GetVulkanDeviceExtensionsRequired(void *, VkPhysicalDevice_T *, char *, uint32_t);
extern void cppIVRCompositor_IVRCompositor_022_SetExplicitTimingMode(void *, EVRCompositorTimingMode);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_022_SubmitExplicitTimingData(void *);
extern bool cppIVRCompositor_IVRCompositor_022_IsMotionSmoothingEnabled(void *);
#ifdef __cplusplus
}
#endif
