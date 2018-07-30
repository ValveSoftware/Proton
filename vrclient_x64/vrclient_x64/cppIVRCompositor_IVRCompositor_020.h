#ifdef __cplusplus
extern "C" {
#endif
extern void cppIVRCompositor_IVRCompositor_020_SetTrackingSpace(void *, ETrackingUniverseOrigin);
extern ETrackingUniverseOrigin cppIVRCompositor_IVRCompositor_020_GetTrackingSpace(void *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_020_WaitGetPoses(void *, TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_020_GetLastPoses(void *, TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_020_GetLastPoseForTrackedDeviceIndex(void *, TrackedDeviceIndex_t, TrackedDevicePose_t *, TrackedDevicePose_t *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_020_Submit(void *, EVREye, Texture_t *, VRTextureBounds_t *, EVRSubmitFlags);
extern void cppIVRCompositor_IVRCompositor_020_ClearLastSubmittedFrame(void *);
extern void cppIVRCompositor_IVRCompositor_020_PostPresentHandoff(void *);
extern bool cppIVRCompositor_IVRCompositor_020_GetFrameTiming(void *, Compositor_FrameTiming *, uint32_t);
extern uint32_t cppIVRCompositor_IVRCompositor_020_GetFrameTimings(void *, Compositor_FrameTiming *, uint32_t);
extern float cppIVRCompositor_IVRCompositor_020_GetFrameTimeRemaining(void *);
extern void cppIVRCompositor_IVRCompositor_020_GetCumulativeStats(void *, Compositor_CumulativeStats *, uint32_t);
extern void cppIVRCompositor_IVRCompositor_020_FadeToColor(void *, float, float, float, float, float, bool);
extern HmdColor_t cppIVRCompositor_IVRCompositor_020_GetCurrentFadeColor(void *, bool);
extern void cppIVRCompositor_IVRCompositor_020_FadeGrid(void *, float, bool);
extern float cppIVRCompositor_IVRCompositor_020_GetCurrentGridAlpha(void *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_020_SetSkyboxOverride(void *, Texture_t *, uint32_t);
extern void cppIVRCompositor_IVRCompositor_020_ClearSkyboxOverride(void *);
extern void cppIVRCompositor_IVRCompositor_020_CompositorBringToFront(void *);
extern void cppIVRCompositor_IVRCompositor_020_CompositorGoToBack(void *);
extern void cppIVRCompositor_IVRCompositor_020_CompositorQuit(void *);
extern bool cppIVRCompositor_IVRCompositor_020_IsFullscreen(void *);
extern uint32_t cppIVRCompositor_IVRCompositor_020_GetCurrentSceneFocusProcess(void *);
extern uint32_t cppIVRCompositor_IVRCompositor_020_GetLastFrameRenderer(void *);
extern bool cppIVRCompositor_IVRCompositor_020_CanRenderScene(void *);
extern void cppIVRCompositor_IVRCompositor_020_ShowMirrorWindow(void *);
extern void cppIVRCompositor_IVRCompositor_020_HideMirrorWindow(void *);
extern bool cppIVRCompositor_IVRCompositor_020_IsMirrorWindowVisible(void *);
extern void cppIVRCompositor_IVRCompositor_020_CompositorDumpImages(void *);
extern bool cppIVRCompositor_IVRCompositor_020_ShouldAppRenderWithLowResources(void *);
extern void cppIVRCompositor_IVRCompositor_020_ForceInterleavedReprojectionOn(void *, bool);
extern void cppIVRCompositor_IVRCompositor_020_ForceReconnectProcess(void *);
extern void cppIVRCompositor_IVRCompositor_020_SuspendRendering(void *, bool);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_020_GetMirrorTextureD3D11(void *, EVREye, void *, void **);
extern void cppIVRCompositor_IVRCompositor_020_ReleaseMirrorTextureD3D11(void *, void *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_020_GetMirrorTextureGL(void *, EVREye, glUInt_t *, glSharedTextureHandle_t *);
extern bool cppIVRCompositor_IVRCompositor_020_ReleaseSharedGLTexture(void *, glUInt_t, glSharedTextureHandle_t);
extern void cppIVRCompositor_IVRCompositor_020_LockGLSharedTextureForAccess(void *, glSharedTextureHandle_t);
extern void cppIVRCompositor_IVRCompositor_020_UnlockGLSharedTextureForAccess(void *, glSharedTextureHandle_t);
extern uint32_t cppIVRCompositor_IVRCompositor_020_GetVulkanInstanceExtensionsRequired(void *, char *, uint32_t);
extern uint32_t cppIVRCompositor_IVRCompositor_020_GetVulkanDeviceExtensionsRequired(void *, VkPhysicalDevice_T *, char *, uint32_t);
#ifdef __cplusplus
}
#endif
