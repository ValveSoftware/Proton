#ifdef __cplusplus
extern "C" {
#endif
extern void cppIVRCompositor_IVRCompositor_016_SetTrackingSpace(void *, ETrackingUniverseOrigin);
extern ETrackingUniverseOrigin cppIVRCompositor_IVRCompositor_016_GetTrackingSpace(void *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_016_WaitGetPoses(void *, TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_016_GetLastPoses(void *, TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_016_GetLastPoseForTrackedDeviceIndex(void *, TrackedDeviceIndex_t, TrackedDevicePose_t *, TrackedDevicePose_t *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_016_Submit(void *, EVREye, Texture_t *, VRTextureBounds_t *, EVRSubmitFlags);
extern void cppIVRCompositor_IVRCompositor_016_ClearLastSubmittedFrame(void *);
extern void cppIVRCompositor_IVRCompositor_016_PostPresentHandoff(void *);
extern bool cppIVRCompositor_IVRCompositor_016_GetFrameTiming(void *, winCompositor_FrameTiming_103 *, uint32_t);
extern float cppIVRCompositor_IVRCompositor_016_GetFrameTimeRemaining(void *);
extern void cppIVRCompositor_IVRCompositor_016_GetCumulativeStats(void *, Compositor_CumulativeStats *, uint32_t);
extern void cppIVRCompositor_IVRCompositor_016_FadeToColor(void *, float, float, float, float, float, bool);
extern void cppIVRCompositor_IVRCompositor_016_FadeGrid(void *, float, bool);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_016_SetSkyboxOverride(void *, Texture_t *, uint32_t);
extern void cppIVRCompositor_IVRCompositor_016_ClearSkyboxOverride(void *);
extern void cppIVRCompositor_IVRCompositor_016_CompositorBringToFront(void *);
extern void cppIVRCompositor_IVRCompositor_016_CompositorGoToBack(void *);
extern void cppIVRCompositor_IVRCompositor_016_CompositorQuit(void *);
extern bool cppIVRCompositor_IVRCompositor_016_IsFullscreen(void *);
extern uint32_t cppIVRCompositor_IVRCompositor_016_GetCurrentSceneFocusProcess(void *);
extern uint32_t cppIVRCompositor_IVRCompositor_016_GetLastFrameRenderer(void *);
extern bool cppIVRCompositor_IVRCompositor_016_CanRenderScene(void *);
extern void cppIVRCompositor_IVRCompositor_016_ShowMirrorWindow(void *);
extern void cppIVRCompositor_IVRCompositor_016_HideMirrorWindow(void *);
extern bool cppIVRCompositor_IVRCompositor_016_IsMirrorWindowVisible(void *);
extern void cppIVRCompositor_IVRCompositor_016_CompositorDumpImages(void *);
extern bool cppIVRCompositor_IVRCompositor_016_ShouldAppRenderWithLowResources(void *);
extern void cppIVRCompositor_IVRCompositor_016_ForceInterleavedReprojectionOn(void *, bool);
extern void cppIVRCompositor_IVRCompositor_016_ForceReconnectProcess(void *);
extern void cppIVRCompositor_IVRCompositor_016_SuspendRendering(void *, bool);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_016_GetMirrorTextureD3D11(void *, EVREye, void *, void **);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_016_GetMirrorTextureGL(void *, EVREye, glUInt_t *, glSharedTextureHandle_t *);
extern bool cppIVRCompositor_IVRCompositor_016_ReleaseSharedGLTexture(void *, glUInt_t, glSharedTextureHandle_t);
extern void cppIVRCompositor_IVRCompositor_016_LockGLSharedTextureForAccess(void *, glSharedTextureHandle_t);
extern void cppIVRCompositor_IVRCompositor_016_UnlockGLSharedTextureForAccess(void *, glSharedTextureHandle_t);
#ifdef __cplusplus
}
#endif
