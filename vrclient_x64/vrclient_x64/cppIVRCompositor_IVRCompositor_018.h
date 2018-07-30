#ifdef __cplusplus
extern "C" {
#endif
extern void cppIVRCompositor_IVRCompositor_018_SetTrackingSpace(void *, ETrackingUniverseOrigin);
extern ETrackingUniverseOrigin cppIVRCompositor_IVRCompositor_018_GetTrackingSpace(void *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_018_WaitGetPoses(void *, TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_018_GetLastPoses(void *, TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_018_GetLastPoseForTrackedDeviceIndex(void *, TrackedDeviceIndex_t, TrackedDevicePose_t *, TrackedDevicePose_t *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_018_Submit(void *, EVREye, Texture_t *, VRTextureBounds_t *, EVRSubmitFlags);
extern void cppIVRCompositor_IVRCompositor_018_ClearLastSubmittedFrame(void *);
extern void cppIVRCompositor_IVRCompositor_018_PostPresentHandoff(void *);
extern bool cppIVRCompositor_IVRCompositor_018_GetFrameTiming(void *, Compositor_FrameTiming *, uint32_t);
extern uint32_t cppIVRCompositor_IVRCompositor_018_GetFrameTimings(void *, Compositor_FrameTiming *, uint32_t);
extern float cppIVRCompositor_IVRCompositor_018_GetFrameTimeRemaining(void *);
extern void cppIVRCompositor_IVRCompositor_018_GetCumulativeStats(void *, Compositor_CumulativeStats *, uint32_t);
extern void cppIVRCompositor_IVRCompositor_018_FadeToColor(void *, float, float, float, float, float, bool);
extern HmdColor_t cppIVRCompositor_IVRCompositor_018_GetCurrentFadeColor(void *, bool);
extern void cppIVRCompositor_IVRCompositor_018_FadeGrid(void *, float, bool);
extern float cppIVRCompositor_IVRCompositor_018_GetCurrentGridAlpha(void *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_018_SetSkyboxOverride(void *, Texture_t *, uint32_t);
extern void cppIVRCompositor_IVRCompositor_018_ClearSkyboxOverride(void *);
extern void cppIVRCompositor_IVRCompositor_018_CompositorBringToFront(void *);
extern void cppIVRCompositor_IVRCompositor_018_CompositorGoToBack(void *);
extern void cppIVRCompositor_IVRCompositor_018_CompositorQuit(void *);
extern bool cppIVRCompositor_IVRCompositor_018_IsFullscreen(void *);
extern uint32_t cppIVRCompositor_IVRCompositor_018_GetCurrentSceneFocusProcess(void *);
extern uint32_t cppIVRCompositor_IVRCompositor_018_GetLastFrameRenderer(void *);
extern bool cppIVRCompositor_IVRCompositor_018_CanRenderScene(void *);
extern void cppIVRCompositor_IVRCompositor_018_ShowMirrorWindow(void *);
extern void cppIVRCompositor_IVRCompositor_018_HideMirrorWindow(void *);
extern bool cppIVRCompositor_IVRCompositor_018_IsMirrorWindowVisible(void *);
extern void cppIVRCompositor_IVRCompositor_018_CompositorDumpImages(void *);
extern bool cppIVRCompositor_IVRCompositor_018_ShouldAppRenderWithLowResources(void *);
extern void cppIVRCompositor_IVRCompositor_018_ForceInterleavedReprojectionOn(void *, bool);
extern void cppIVRCompositor_IVRCompositor_018_ForceReconnectProcess(void *);
extern void cppIVRCompositor_IVRCompositor_018_SuspendRendering(void *, bool);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_018_GetMirrorTextureD3D11(void *, EVREye, void *, void **);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_018_GetMirrorTextureGL(void *, EVREye, glUInt_t *, glSharedTextureHandle_t *);
extern bool cppIVRCompositor_IVRCompositor_018_ReleaseSharedGLTexture(void *, glUInt_t, glSharedTextureHandle_t);
extern void cppIVRCompositor_IVRCompositor_018_LockGLSharedTextureForAccess(void *, glSharedTextureHandle_t);
extern void cppIVRCompositor_IVRCompositor_018_UnlockGLSharedTextureForAccess(void *, glSharedTextureHandle_t);
#ifdef __cplusplus
}
#endif
