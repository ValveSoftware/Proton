#ifdef __cplusplus
extern "C" {
#endif
extern void cppIVRCompositor_IVRCompositor_014_SetTrackingSpace(void *, ETrackingUniverseOrigin);
extern ETrackingUniverseOrigin cppIVRCompositor_IVRCompositor_014_GetTrackingSpace(void *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_014_WaitGetPoses(void *, TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_014_GetLastPoses(void *, TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_014_GetLastPoseForTrackedDeviceIndex(void *, TrackedDeviceIndex_t, TrackedDevicePose_t *, TrackedDevicePose_t *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_014_Submit(void *, EVREye, Texture_t *, VRTextureBounds_t *, EVRSubmitFlags);
extern void cppIVRCompositor_IVRCompositor_014_ClearLastSubmittedFrame(void *);
extern void cppIVRCompositor_IVRCompositor_014_PostPresentHandoff(void *);
extern bool cppIVRCompositor_IVRCompositor_014_GetFrameTiming(void *, Compositor_FrameTiming *, uint32_t);
extern float cppIVRCompositor_IVRCompositor_014_GetFrameTimeRemaining(void *);
extern void cppIVRCompositor_IVRCompositor_014_FadeToColor(void *, float, float, float, float, float, bool);
extern void cppIVRCompositor_IVRCompositor_014_FadeGrid(void *, float, bool);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_014_SetSkyboxOverride(void *, Texture_t *, uint32_t);
extern void cppIVRCompositor_IVRCompositor_014_ClearSkyboxOverride(void *);
extern void cppIVRCompositor_IVRCompositor_014_CompositorBringToFront(void *);
extern void cppIVRCompositor_IVRCompositor_014_CompositorGoToBack(void *);
extern void cppIVRCompositor_IVRCompositor_014_CompositorQuit(void *);
extern bool cppIVRCompositor_IVRCompositor_014_IsFullscreen(void *);
extern uint32_t cppIVRCompositor_IVRCompositor_014_GetCurrentSceneFocusProcess(void *);
extern uint32_t cppIVRCompositor_IVRCompositor_014_GetLastFrameRenderer(void *);
extern bool cppIVRCompositor_IVRCompositor_014_CanRenderScene(void *);
extern void cppIVRCompositor_IVRCompositor_014_ShowMirrorWindow(void *);
extern void cppIVRCompositor_IVRCompositor_014_HideMirrorWindow(void *);
extern bool cppIVRCompositor_IVRCompositor_014_IsMirrorWindowVisible(void *);
extern void cppIVRCompositor_IVRCompositor_014_CompositorDumpImages(void *);
extern bool cppIVRCompositor_IVRCompositor_014_ShouldAppRenderWithLowResources(void *);
extern void cppIVRCompositor_IVRCompositor_014_ForceInterleavedReprojectionOn(void *, bool);
extern void cppIVRCompositor_IVRCompositor_014_ForceReconnectProcess(void *);
extern void cppIVRCompositor_IVRCompositor_014_SuspendRendering(void *, bool);
#ifdef __cplusplus
}
#endif
