#ifdef __cplusplus
extern "C" {
#endif
extern void cppIVRCompositor_IVRCompositor_019_SetTrackingSpace(void *, ETrackingUniverseOrigin);
extern ETrackingUniverseOrigin cppIVRCompositor_IVRCompositor_019_GetTrackingSpace(void *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_019_WaitGetPoses(void *, TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_019_GetLastPoses(void *, TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_019_GetLastPoseForTrackedDeviceIndex(void *, TrackedDeviceIndex_t, TrackedDevicePose_t *, TrackedDevicePose_t *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_019_Submit(void *, EVREye, Texture_t *, VRTextureBounds_t *, EVRSubmitFlags);
extern void cppIVRCompositor_IVRCompositor_019_ClearLastSubmittedFrame(void *);
extern void cppIVRCompositor_IVRCompositor_019_PostPresentHandoff(void *);
extern bool cppIVRCompositor_IVRCompositor_019_GetFrameTiming(void *, Compositor_FrameTiming *, uint32_t);
extern uint32_t cppIVRCompositor_IVRCompositor_019_GetFrameTimings(void *, Compositor_FrameTiming *, uint32_t);
extern float cppIVRCompositor_IVRCompositor_019_GetFrameTimeRemaining(void *);
extern void cppIVRCompositor_IVRCompositor_019_GetCumulativeStats(void *, Compositor_CumulativeStats *, uint32_t);
extern void cppIVRCompositor_IVRCompositor_019_FadeToColor(void *, float, float, float, float, float, bool);
extern HmdColor_t cppIVRCompositor_IVRCompositor_019_GetCurrentFadeColor(void *, bool);
extern void cppIVRCompositor_IVRCompositor_019_FadeGrid(void *, float, bool);
extern float cppIVRCompositor_IVRCompositor_019_GetCurrentGridAlpha(void *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_019_SetSkyboxOverride(void *, Texture_t *, uint32_t);
extern void cppIVRCompositor_IVRCompositor_019_ClearSkyboxOverride(void *);
extern void cppIVRCompositor_IVRCompositor_019_CompositorBringToFront(void *);
extern void cppIVRCompositor_IVRCompositor_019_CompositorGoToBack(void *);
extern void cppIVRCompositor_IVRCompositor_019_CompositorQuit(void *);
extern bool cppIVRCompositor_IVRCompositor_019_IsFullscreen(void *);
extern uint32_t cppIVRCompositor_IVRCompositor_019_GetCurrentSceneFocusProcess(void *);
extern uint32_t cppIVRCompositor_IVRCompositor_019_GetLastFrameRenderer(void *);
extern bool cppIVRCompositor_IVRCompositor_019_CanRenderScene(void *);
extern void cppIVRCompositor_IVRCompositor_019_ShowMirrorWindow(void *);
extern void cppIVRCompositor_IVRCompositor_019_HideMirrorWindow(void *);
extern bool cppIVRCompositor_IVRCompositor_019_IsMirrorWindowVisible(void *);
extern void cppIVRCompositor_IVRCompositor_019_CompositorDumpImages(void *);
extern bool cppIVRCompositor_IVRCompositor_019_ShouldAppRenderWithLowResources(void *);
extern void cppIVRCompositor_IVRCompositor_019_ForceInterleavedReprojectionOn(void *, bool);
extern void cppIVRCompositor_IVRCompositor_019_ForceReconnectProcess(void *);
extern void cppIVRCompositor_IVRCompositor_019_SuspendRendering(void *, bool);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_019_GetMirrorTextureD3D11(void *, EVREye, void *, void **);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_019_GetMirrorTextureGL(void *, EVREye, glUInt_t *, glSharedTextureHandle_t *);
extern bool cppIVRCompositor_IVRCompositor_019_ReleaseSharedGLTexture(void *, glUInt_t, glSharedTextureHandle_t);
extern void cppIVRCompositor_IVRCompositor_019_LockGLSharedTextureForAccess(void *, glSharedTextureHandle_t);
extern void cppIVRCompositor_IVRCompositor_019_UnlockGLSharedTextureForAccess(void *, glSharedTextureHandle_t);
extern uint32_t cppIVRCompositor_IVRCompositor_019_GetVulkanInstanceExtensionsRequired(void *, char *, uint32_t);
extern uint32_t cppIVRCompositor_IVRCompositor_019_GetVulkanDeviceExtensionsRequired(void *, VkPhysicalDevice_T *, char *, uint32_t);
#ifdef __cplusplus
}
#endif
