#ifdef __cplusplus
extern "C" {
#endif
extern uint32_t cppIVRCompositor_IVRCompositor_008_GetLastError(void *, char *, uint32_t);
extern void cppIVRCompositor_IVRCompositor_008_SetVSync(void *, bool);
extern bool cppIVRCompositor_IVRCompositor_008_GetVSync(void *);
extern void cppIVRCompositor_IVRCompositor_008_SetGamma(void *, float);
extern float cppIVRCompositor_IVRCompositor_008_GetGamma(void *);
extern VRCompositorError cppIVRCompositor_IVRCompositor_008_WaitGetPoses(void *, TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t);
extern VRCompositorError cppIVRCompositor_IVRCompositor_008_Submit(void *, Hmd_Eye, GraphicsAPIConvention, void *, VRTextureBounds_t *, VRSubmitFlags_t);
extern void cppIVRCompositor_IVRCompositor_008_ClearLastSubmittedFrame(void *);
extern bool cppIVRCompositor_IVRCompositor_008_GetFrameTiming(void *, winCompositor_FrameTiming_0910 *, uint32_t);
extern void cppIVRCompositor_IVRCompositor_008_FadeToColor(void *, float, float, float, float, float, bool);
extern void cppIVRCompositor_IVRCompositor_008_FadeGrid(void *, float, bool);
extern void cppIVRCompositor_IVRCompositor_008_SetSkyboxOverride(void *, GraphicsAPIConvention, void *, void *, void *, void *, void *, void *);
extern void cppIVRCompositor_IVRCompositor_008_ClearSkyboxOverride(void *);
extern void cppIVRCompositor_IVRCompositor_008_CompositorBringToFront(void *);
extern void cppIVRCompositor_IVRCompositor_008_CompositorGoToBack(void *);
extern void cppIVRCompositor_IVRCompositor_008_CompositorQuit(void *);
extern bool cppIVRCompositor_IVRCompositor_008_IsFullscreen(void *);
extern void cppIVRCompositor_IVRCompositor_008_SetTrackingSpace(void *, TrackingUniverseOrigin);
extern TrackingUniverseOrigin cppIVRCompositor_IVRCompositor_008_GetTrackingSpace(void *);
extern uint32_t cppIVRCompositor_IVRCompositor_008_GetCurrentSceneFocusProcess(void *);
extern bool cppIVRCompositor_IVRCompositor_008_CanRenderScene(void *);
extern void cppIVRCompositor_IVRCompositor_008_ShowMirrorWindow(void *);
extern void cppIVRCompositor_IVRCompositor_008_HideMirrorWindow(void *);
extern void cppIVRCompositor_IVRCompositor_008_CompositorDumpImages(void *);
extern float cppIVRCompositor_IVRCompositor_008_GetFrameTimeRemaining(void *);
extern uint32_t cppIVRCompositor_IVRCompositor_008_GetLastFrameRenderer(void *);
#ifdef __cplusplus
}
#endif
