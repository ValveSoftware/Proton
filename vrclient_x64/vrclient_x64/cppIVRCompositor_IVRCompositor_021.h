#ifdef __cplusplus
extern "C" {
#endif
extern void cppIVRCompositor_IVRCompositor_021_SetTrackingSpace(void *, ETrackingUniverseOrigin);
extern ETrackingUniverseOrigin cppIVRCompositor_IVRCompositor_021_GetTrackingSpace(void *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_021_WaitGetPoses(void *, TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_021_GetLastPoses(void *, TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_021_GetLastPoseForTrackedDeviceIndex(void *, TrackedDeviceIndex_t, TrackedDevicePose_t *, TrackedDevicePose_t *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_021_Submit(void *, EVREye, Texture_t *, VRTextureBounds_t *, EVRSubmitFlags);
extern void cppIVRCompositor_IVRCompositor_021_ClearLastSubmittedFrame(void *);
extern void cppIVRCompositor_IVRCompositor_021_PostPresentHandoff(void *);
extern bool cppIVRCompositor_IVRCompositor_021_GetFrameTiming(void *, Compositor_FrameTiming *, uint32_t);
extern uint32_t cppIVRCompositor_IVRCompositor_021_GetFrameTimings(void *, Compositor_FrameTiming *, uint32_t);
extern float cppIVRCompositor_IVRCompositor_021_GetFrameTimeRemaining(void *);
extern void cppIVRCompositor_IVRCompositor_021_GetCumulativeStats(void *, Compositor_CumulativeStats *, uint32_t);
extern void cppIVRCompositor_IVRCompositor_021_FadeToColor(void *, float, float, float, float, float, bool);
extern HmdColor_t cppIVRCompositor_IVRCompositor_021_GetCurrentFadeColor(void *, bool);
extern void cppIVRCompositor_IVRCompositor_021_FadeGrid(void *, float, bool);
extern float cppIVRCompositor_IVRCompositor_021_GetCurrentGridAlpha(void *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_021_SetSkyboxOverride(void *, Texture_t *, uint32_t);
extern void cppIVRCompositor_IVRCompositor_021_ClearSkyboxOverride(void *);
extern void cppIVRCompositor_IVRCompositor_021_CompositorBringToFront(void *);
extern void cppIVRCompositor_IVRCompositor_021_CompositorGoToBack(void *);
extern void cppIVRCompositor_IVRCompositor_021_CompositorQuit(void *);
extern bool cppIVRCompositor_IVRCompositor_021_IsFullscreen(void *);
extern uint32_t cppIVRCompositor_IVRCompositor_021_GetCurrentSceneFocusProcess(void *);
extern uint32_t cppIVRCompositor_IVRCompositor_021_GetLastFrameRenderer(void *);
extern bool cppIVRCompositor_IVRCompositor_021_CanRenderScene(void *);
extern void cppIVRCompositor_IVRCompositor_021_ShowMirrorWindow(void *);
extern void cppIVRCompositor_IVRCompositor_021_HideMirrorWindow(void *);
extern bool cppIVRCompositor_IVRCompositor_021_IsMirrorWindowVisible(void *);
extern void cppIVRCompositor_IVRCompositor_021_CompositorDumpImages(void *);
extern bool cppIVRCompositor_IVRCompositor_021_ShouldAppRenderWithLowResources(void *);
extern void cppIVRCompositor_IVRCompositor_021_ForceInterleavedReprojectionOn(void *, bool);
extern void cppIVRCompositor_IVRCompositor_021_ForceReconnectProcess(void *);
extern void cppIVRCompositor_IVRCompositor_021_SuspendRendering(void *, bool);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_021_GetMirrorTextureD3D11(void *, EVREye, void *, void **);
extern void cppIVRCompositor_IVRCompositor_021_ReleaseMirrorTextureD3D11(void *, void *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_021_GetMirrorTextureGL(void *, EVREye, glUInt_t *, glSharedTextureHandle_t *);
extern bool cppIVRCompositor_IVRCompositor_021_ReleaseSharedGLTexture(void *, glUInt_t, glSharedTextureHandle_t);
extern void cppIVRCompositor_IVRCompositor_021_LockGLSharedTextureForAccess(void *, glSharedTextureHandle_t);
extern void cppIVRCompositor_IVRCompositor_021_UnlockGLSharedTextureForAccess(void *, glSharedTextureHandle_t);
extern uint32_t cppIVRCompositor_IVRCompositor_021_GetVulkanInstanceExtensionsRequired(void *, char *, uint32_t);
extern uint32_t cppIVRCompositor_IVRCompositor_021_GetVulkanDeviceExtensionsRequired(void *, VkPhysicalDevice_T *, char *, uint32_t);
extern void cppIVRCompositor_IVRCompositor_021_SetExplicitTimingMode(void *, bool);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_021_SubmitExplicitTimingData(void *);
#ifdef __cplusplus
}
#endif
