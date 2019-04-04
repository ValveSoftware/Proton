#ifdef __cplusplus
extern "C" {
#endif
extern void cppIVRCompositor_IVRCompositor_017_SetTrackingSpace(void *, ETrackingUniverseOrigin);
extern ETrackingUniverseOrigin cppIVRCompositor_IVRCompositor_017_GetTrackingSpace(void *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_017_WaitGetPoses(void *, TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_017_GetLastPoses(void *, TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_017_GetLastPoseForTrackedDeviceIndex(void *, TrackedDeviceIndex_t, TrackedDevicePose_t *, TrackedDevicePose_t *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_017_Submit(void *, EVREye, Texture_t *, VRTextureBounds_t *, EVRSubmitFlags);
extern void cppIVRCompositor_IVRCompositor_017_ClearLastSubmittedFrame(void *);
extern void cppIVRCompositor_IVRCompositor_017_PostPresentHandoff(void *);
extern bool cppIVRCompositor_IVRCompositor_017_GetFrameTiming(void *, Compositor_FrameTiming *, uint32_t);
extern uint32_t cppIVRCompositor_IVRCompositor_017_GetFrameTimings(void *, Compositor_FrameTiming *, uint32_t);
extern float cppIVRCompositor_IVRCompositor_017_GetFrameTimeRemaining(void *);
extern void cppIVRCompositor_IVRCompositor_017_GetCumulativeStats(void *, Compositor_CumulativeStats *, uint32_t);
extern void cppIVRCompositor_IVRCompositor_017_FadeToColor(void *, float, float, float, float, float, bool);
extern void cppIVRCompositor_IVRCompositor_017_FadeGrid(void *, float, bool);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_017_SetSkyboxOverride(void *, Texture_t *, uint32_t);
extern void cppIVRCompositor_IVRCompositor_017_ClearSkyboxOverride(void *);
extern void cppIVRCompositor_IVRCompositor_017_CompositorBringToFront(void *);
extern void cppIVRCompositor_IVRCompositor_017_CompositorGoToBack(void *);
extern void cppIVRCompositor_IVRCompositor_017_CompositorQuit(void *);
extern bool cppIVRCompositor_IVRCompositor_017_IsFullscreen(void *);
extern uint32_t cppIVRCompositor_IVRCompositor_017_GetCurrentSceneFocusProcess(void *);
extern uint32_t cppIVRCompositor_IVRCompositor_017_GetLastFrameRenderer(void *);
extern bool cppIVRCompositor_IVRCompositor_017_CanRenderScene(void *);
extern void cppIVRCompositor_IVRCompositor_017_ShowMirrorWindow(void *);
extern void cppIVRCompositor_IVRCompositor_017_HideMirrorWindow(void *);
extern bool cppIVRCompositor_IVRCompositor_017_IsMirrorWindowVisible(void *);
extern void cppIVRCompositor_IVRCompositor_017_CompositorDumpImages(void *);
extern bool cppIVRCompositor_IVRCompositor_017_ShouldAppRenderWithLowResources(void *);
extern void cppIVRCompositor_IVRCompositor_017_ForceInterleavedReprojectionOn(void *, bool);
extern void cppIVRCompositor_IVRCompositor_017_ForceReconnectProcess(void *);
extern void cppIVRCompositor_IVRCompositor_017_SuspendRendering(void *, bool);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_017_GetMirrorTextureD3D11(void *, EVREye, void *, void **);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_017_GetMirrorTextureGL(void *, EVREye, glUInt_t *, glSharedTextureHandle_t *);
extern bool cppIVRCompositor_IVRCompositor_017_ReleaseSharedGLTexture(void *, glUInt_t, glSharedTextureHandle_t);
extern void cppIVRCompositor_IVRCompositor_017_LockGLSharedTextureForAccess(void *, glSharedTextureHandle_t);
extern void cppIVRCompositor_IVRCompositor_017_UnlockGLSharedTextureForAccess(void *, glSharedTextureHandle_t);
#ifdef __cplusplus
}
#endif
