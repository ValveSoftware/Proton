#ifdef __cplusplus
extern "C" {
#endif
extern void cppIVRCompositor_IVRCompositor_009_SetTrackingSpace(void *, ETrackingUniverseOrigin);
extern ETrackingUniverseOrigin cppIVRCompositor_IVRCompositor_009_GetTrackingSpace(void *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_009_WaitGetPoses(void *, TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_009_GetLastPoses(void *, TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_009_Submit(void *, EVREye, Texture_t *, VRTextureBounds_t *, EVRSubmitFlags);
extern void cppIVRCompositor_IVRCompositor_009_ClearLastSubmittedFrame(void *);
extern void cppIVRCompositor_IVRCompositor_009_PostPresentHandoff(void *);
extern bool cppIVRCompositor_IVRCompositor_009_GetFrameTiming(void *, winCompositor_FrameTiming_0913 *, uint32_t);
extern float cppIVRCompositor_IVRCompositor_009_GetFrameTimeRemaining(void *);
extern void cppIVRCompositor_IVRCompositor_009_FadeToColor(void *, float, float, float, float, float, bool);
extern void cppIVRCompositor_IVRCompositor_009_FadeGrid(void *, float, bool);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_009_SetSkyboxOverride(void *, Texture_t *, uint32_t);
extern void cppIVRCompositor_IVRCompositor_009_ClearSkyboxOverride(void *);
extern void cppIVRCompositor_IVRCompositor_009_CompositorBringToFront(void *);
extern void cppIVRCompositor_IVRCompositor_009_CompositorGoToBack(void *);
extern void cppIVRCompositor_IVRCompositor_009_CompositorQuit(void *);
extern bool cppIVRCompositor_IVRCompositor_009_IsFullscreen(void *);
extern uint32_t cppIVRCompositor_IVRCompositor_009_GetCurrentSceneFocusProcess(void *);
extern uint32_t cppIVRCompositor_IVRCompositor_009_GetLastFrameRenderer(void *);
extern bool cppIVRCompositor_IVRCompositor_009_CanRenderScene(void *);
extern void cppIVRCompositor_IVRCompositor_009_ShowMirrorWindow(void *);
extern void cppIVRCompositor_IVRCompositor_009_HideMirrorWindow(void *);
extern bool cppIVRCompositor_IVRCompositor_009_IsMirrorWindowVisible(void *);
extern void cppIVRCompositor_IVRCompositor_009_CompositorDumpImages(void *);
#ifdef __cplusplus
}
#endif
