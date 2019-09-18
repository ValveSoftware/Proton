#ifdef __cplusplus
extern "C" {
#endif
extern uint32_t cppIVRCompositor_IVRCompositor_005_GetLastError(void *, char *, uint32_t);
extern void cppIVRCompositor_IVRCompositor_005_SetVSync(void *, bool);
extern bool cppIVRCompositor_IVRCompositor_005_GetVSync(void *);
extern void cppIVRCompositor_IVRCompositor_005_SetGamma(void *, float);
extern float cppIVRCompositor_IVRCompositor_005_GetGamma(void *);
extern void cppIVRCompositor_IVRCompositor_005_SetGraphicsDevice(void *, Compositor_DeviceType, void *);
extern void cppIVRCompositor_IVRCompositor_005_WaitGetPoses(void *, TrackedDevicePose_t *, uint32_t);
extern void cppIVRCompositor_IVRCompositor_005_Submit(void *, Hmd_Eye, void *, Compositor_TextureBounds *);
extern void cppIVRCompositor_IVRCompositor_005_ClearLastSubmittedFrame(void *);
extern void cppIVRCompositor_IVRCompositor_005_GetOverlayDefaults(void *, Compositor_OverlaySettings *);
extern void cppIVRCompositor_IVRCompositor_005_SetOverlay(void *, void *, Compositor_OverlaySettings *);
extern void cppIVRCompositor_IVRCompositor_005_SetOverlayRaw(void *, void *, uint32_t, uint32_t, uint32_t, Compositor_OverlaySettings *);
extern void cppIVRCompositor_IVRCompositor_005_SetOverlayFromFile(void *, const char *, Compositor_OverlaySettings *);
extern void cppIVRCompositor_IVRCompositor_005_ClearOverlay(void *);
extern bool cppIVRCompositor_IVRCompositor_005_GetFrameTiming(void *, winCompositor_FrameTiming_091 *, uint32_t);
extern void cppIVRCompositor_IVRCompositor_005_FadeToColor(void *, float, float, float, float, float, bool);
extern void cppIVRCompositor_IVRCompositor_005_FadeGrid(void *, float, bool);
extern void cppIVRCompositor_IVRCompositor_005_CompositorBringToFront(void *);
extern void cppIVRCompositor_IVRCompositor_005_CompositorGoToBack(void *);
extern void cppIVRCompositor_IVRCompositor_005_CompositorQuit(void *);
extern bool cppIVRCompositor_IVRCompositor_005_IsFullscreen(void *);
extern bool cppIVRCompositor_IVRCompositor_005_ComputeOverlayIntersection(void *, Compositor_OverlaySettings *, float, TrackingUniverseOrigin, HmdVector3_t, HmdVector3_t, HmdVector2_t *, HmdVector3_t *);
extern void cppIVRCompositor_IVRCompositor_005_SetTrackingSpace(void *, TrackingUniverseOrigin);
extern TrackingUniverseOrigin cppIVRCompositor_IVRCompositor_005_GetTrackingSpace(void *);
#ifdef __cplusplus
}
#endif
