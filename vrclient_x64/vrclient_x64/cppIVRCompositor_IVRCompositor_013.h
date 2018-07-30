#ifdef __cplusplus
extern "C" {
#endif
extern void cppIVRCompositor_IVRCompositor_013_SetTrackingSpace(void *, ETrackingUniverseOrigin);
extern ETrackingUniverseOrigin cppIVRCompositor_IVRCompositor_013_GetTrackingSpace(void *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_013_WaitGetPoses(void *, TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_013_GetLastPoses(void *, TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_013_GetLastPoseForTrackedDeviceIndex(void *, TrackedDeviceIndex_t, TrackedDevicePose_t *, TrackedDevicePose_t *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_013_Submit(void *, EVREye, Texture_t *, VRTextureBounds_t *, EVRSubmitFlags);
extern void cppIVRCompositor_IVRCompositor_013_ClearLastSubmittedFrame(void *);
extern void cppIVRCompositor_IVRCompositor_013_PostPresentHandoff(void *);
extern bool cppIVRCompositor_IVRCompositor_013_GetFrameTiming(void *, Compositor_FrameTiming *, uint32_t);
extern float cppIVRCompositor_IVRCompositor_013_GetFrameTimeRemaining(void *);
extern void cppIVRCompositor_IVRCompositor_013_FadeToColor(void *, float, float, float, float, float, bool);
extern void cppIVRCompositor_IVRCompositor_013_FadeGrid(void *, float, bool);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_013_SetSkyboxOverride(void *, Texture_t *, uint32_t);
extern void cppIVRCompositor_IVRCompositor_013_ClearSkyboxOverride(void *);
extern void cppIVRCompositor_IVRCompositor_013_CompositorBringToFront(void *);
extern void cppIVRCompositor_IVRCompositor_013_CompositorGoToBack(void *);
extern void cppIVRCompositor_IVRCompositor_013_CompositorQuit(void *);
extern bool cppIVRCompositor_IVRCompositor_013_IsFullscreen(void *);
extern uint32_t cppIVRCompositor_IVRCompositor_013_GetCurrentSceneFocusProcess(void *);
extern uint32_t cppIVRCompositor_IVRCompositor_013_GetLastFrameRenderer(void *);
extern bool cppIVRCompositor_IVRCompositor_013_CanRenderScene(void *);
extern void cppIVRCompositor_IVRCompositor_013_ShowMirrorWindow(void *);
extern void cppIVRCompositor_IVRCompositor_013_HideMirrorWindow(void *);
extern bool cppIVRCompositor_IVRCompositor_013_IsMirrorWindowVisible(void *);
extern void cppIVRCompositor_IVRCompositor_013_CompositorDumpImages(void *);
extern bool cppIVRCompositor_IVRCompositor_013_ShouldAppRenderWithLowResources(void *);
extern void cppIVRCompositor_IVRCompositor_013_ForceInterleavedReprojectionOn(void *, bool);
#ifdef __cplusplus
}
#endif
