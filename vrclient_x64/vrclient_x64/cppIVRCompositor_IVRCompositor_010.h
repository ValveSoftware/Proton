#ifdef __cplusplus
extern "C" {
#endif
extern void cppIVRCompositor_IVRCompositor_010_SetTrackingSpace(void *, ETrackingUniverseOrigin);
extern ETrackingUniverseOrigin cppIVRCompositor_IVRCompositor_010_GetTrackingSpace(void *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_010_WaitGetPoses(void *, TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_010_GetLastPoses(void *, TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_010_Submit(void *, EVREye, Texture_t *, VRTextureBounds_t *, EVRSubmitFlags);
extern void cppIVRCompositor_IVRCompositor_010_ClearLastSubmittedFrame(void *);
extern void cppIVRCompositor_IVRCompositor_010_PostPresentHandoff(void *);
extern bool cppIVRCompositor_IVRCompositor_010_GetFrameTiming(void *, winCompositor_FrameTiming_0914 *, uint32_t);
extern float cppIVRCompositor_IVRCompositor_010_GetFrameTimeRemaining(void *);
extern void cppIVRCompositor_IVRCompositor_010_FadeToColor(void *, float, float, float, float, float, bool);
extern void cppIVRCompositor_IVRCompositor_010_FadeGrid(void *, float, bool);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_010_SetSkyboxOverride(void *, Texture_t *, uint32_t);
extern void cppIVRCompositor_IVRCompositor_010_ClearSkyboxOverride(void *);
extern void cppIVRCompositor_IVRCompositor_010_CompositorBringToFront(void *);
extern void cppIVRCompositor_IVRCompositor_010_CompositorGoToBack(void *);
extern void cppIVRCompositor_IVRCompositor_010_CompositorQuit(void *);
extern bool cppIVRCompositor_IVRCompositor_010_IsFullscreen(void *);
extern uint32_t cppIVRCompositor_IVRCompositor_010_GetCurrentSceneFocusProcess(void *);
extern uint32_t cppIVRCompositor_IVRCompositor_010_GetLastFrameRenderer(void *);
extern bool cppIVRCompositor_IVRCompositor_010_CanRenderScene(void *);
extern void cppIVRCompositor_IVRCompositor_010_ShowMirrorWindow(void *);
extern void cppIVRCompositor_IVRCompositor_010_HideMirrorWindow(void *);
extern bool cppIVRCompositor_IVRCompositor_010_IsMirrorWindowVisible(void *);
extern void cppIVRCompositor_IVRCompositor_010_CompositorDumpImages(void *);
#ifdef __cplusplus
}
#endif
