#ifdef __cplusplus
extern "C" {
#endif
extern void cppIVRCompositor_IVRCompositor_011_SetTrackingSpace(void *, ETrackingUniverseOrigin);
extern ETrackingUniverseOrigin cppIVRCompositor_IVRCompositor_011_GetTrackingSpace(void *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_011_WaitGetPoses(void *, TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_011_GetLastPoses(void *, TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_011_Submit(void *, EVREye, Texture_t *, VRTextureBounds_t *, EVRSubmitFlags);
extern void cppIVRCompositor_IVRCompositor_011_ClearLastSubmittedFrame(void *);
extern void cppIVRCompositor_IVRCompositor_011_PostPresentHandoff(void *);
extern bool cppIVRCompositor_IVRCompositor_011_GetFrameTiming(void *, Compositor_FrameTiming *, uint32_t);
extern float cppIVRCompositor_IVRCompositor_011_GetFrameTimeRemaining(void *);
extern void cppIVRCompositor_IVRCompositor_011_FadeToColor(void *, float, float, float, float, float, bool);
extern void cppIVRCompositor_IVRCompositor_011_FadeGrid(void *, float, bool);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_011_SetSkyboxOverride(void *, Texture_t *, uint32_t);
extern void cppIVRCompositor_IVRCompositor_011_ClearSkyboxOverride(void *);
extern void cppIVRCompositor_IVRCompositor_011_CompositorBringToFront(void *);
extern void cppIVRCompositor_IVRCompositor_011_CompositorGoToBack(void *);
extern void cppIVRCompositor_IVRCompositor_011_CompositorQuit(void *);
extern bool cppIVRCompositor_IVRCompositor_011_IsFullscreen(void *);
extern uint32_t cppIVRCompositor_IVRCompositor_011_GetCurrentSceneFocusProcess(void *);
extern uint32_t cppIVRCompositor_IVRCompositor_011_GetLastFrameRenderer(void *);
extern bool cppIVRCompositor_IVRCompositor_011_CanRenderScene(void *);
extern void cppIVRCompositor_IVRCompositor_011_ShowMirrorWindow(void *);
extern void cppIVRCompositor_IVRCompositor_011_HideMirrorWindow(void *);
extern bool cppIVRCompositor_IVRCompositor_011_IsMirrorWindowVisible(void *);
extern void cppIVRCompositor_IVRCompositor_011_CompositorDumpImages(void *);
#ifdef __cplusplus
}
#endif
