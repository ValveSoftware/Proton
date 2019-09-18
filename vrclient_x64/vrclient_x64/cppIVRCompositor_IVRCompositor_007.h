#ifdef __cplusplus
extern "C" {
#endif
extern uint32_t cppIVRCompositor_IVRCompositor_007_GetLastError(void *, char *, uint32_t);
extern void cppIVRCompositor_IVRCompositor_007_SetVSync(void *, bool);
extern bool cppIVRCompositor_IVRCompositor_007_GetVSync(void *);
extern void cppIVRCompositor_IVRCompositor_007_SetGamma(void *, float);
extern float cppIVRCompositor_IVRCompositor_007_GetGamma(void *);
extern VRCompositorError cppIVRCompositor_IVRCompositor_007_WaitGetPoses(void *, TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t);
extern VRCompositorError cppIVRCompositor_IVRCompositor_007_Submit(void *, Hmd_Eye, GraphicsAPIConvention, void *, VRTextureBounds_t *);
extern void cppIVRCompositor_IVRCompositor_007_ClearLastSubmittedFrame(void *);
extern bool cppIVRCompositor_IVRCompositor_007_GetFrameTiming(void *, winCompositor_FrameTiming_098 *, uint32_t);
extern void cppIVRCompositor_IVRCompositor_007_FadeToColor(void *, float, float, float, float, float, bool);
extern void cppIVRCompositor_IVRCompositor_007_FadeGrid(void *, float, bool);
extern void cppIVRCompositor_IVRCompositor_007_CompositorBringToFront(void *);
extern void cppIVRCompositor_IVRCompositor_007_CompositorGoToBack(void *);
extern void cppIVRCompositor_IVRCompositor_007_CompositorQuit(void *);
extern bool cppIVRCompositor_IVRCompositor_007_IsFullscreen(void *);
extern void cppIVRCompositor_IVRCompositor_007_SetTrackingSpace(void *, TrackingUniverseOrigin);
extern TrackingUniverseOrigin cppIVRCompositor_IVRCompositor_007_GetTrackingSpace(void *);
extern uint32_t cppIVRCompositor_IVRCompositor_007_GetCurrentSceneFocusProcess(void *);
extern bool cppIVRCompositor_IVRCompositor_007_CanRenderScene(void *);
#ifdef __cplusplus
}
#endif
