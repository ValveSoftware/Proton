#ifdef __cplusplus
extern "C" {
#endif
extern uint32_t cppIVRCompositor_IVRCompositor_006_GetLastError(void *, char *, uint32_t);
extern void cppIVRCompositor_IVRCompositor_006_SetVSync(void *, bool);
extern bool cppIVRCompositor_IVRCompositor_006_GetVSync(void *);
extern void cppIVRCompositor_IVRCompositor_006_SetGamma(void *, float);
extern float cppIVRCompositor_IVRCompositor_006_GetGamma(void *);
extern void cppIVRCompositor_IVRCompositor_006_SetGraphicsDevice(void *, Compositor_DeviceType, void *);
extern VRCompositorError cppIVRCompositor_IVRCompositor_006_WaitGetPoses(void *, TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t);
extern VRCompositorError cppIVRCompositor_IVRCompositor_006_Submit(void *, Hmd_Eye, void *, VRTextureBounds_t *);
extern void cppIVRCompositor_IVRCompositor_006_ClearLastSubmittedFrame(void *);
extern bool cppIVRCompositor_IVRCompositor_006_GetFrameTiming(void *, winCompositor_FrameTiming_092 *, uint32_t);
extern void cppIVRCompositor_IVRCompositor_006_FadeToColor(void *, float, float, float, float, float, bool);
extern void cppIVRCompositor_IVRCompositor_006_FadeGrid(void *, float, bool);
extern void cppIVRCompositor_IVRCompositor_006_CompositorBringToFront(void *);
extern void cppIVRCompositor_IVRCompositor_006_CompositorGoToBack(void *);
extern void cppIVRCompositor_IVRCompositor_006_CompositorQuit(void *);
extern bool cppIVRCompositor_IVRCompositor_006_IsFullscreen(void *);
extern void cppIVRCompositor_IVRCompositor_006_SetTrackingSpace(void *, TrackingUniverseOrigin);
extern TrackingUniverseOrigin cppIVRCompositor_IVRCompositor_006_GetTrackingSpace(void *);
extern uint32_t cppIVRCompositor_IVRCompositor_006_GetCurrentSceneFocusProcess(void *);
extern bool cppIVRCompositor_IVRCompositor_006_CanRenderScene(void *);
#ifdef __cplusplus
}
#endif
