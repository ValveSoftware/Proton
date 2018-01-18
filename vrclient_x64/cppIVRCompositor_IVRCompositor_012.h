#ifdef __cplusplus
extern "C" {
#endif
extern void cppIVRCompositor_IVRCompositor_012_SetTrackingSpace(void *, ETrackingUniverseOrigin);
extern ETrackingUniverseOrigin cppIVRCompositor_IVRCompositor_012_GetTrackingSpace(void *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_012_WaitGetPoses(void *, TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_012_GetLastPoses(void *, TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_012_GetLastPoseForTrackedDeviceIndex(void *, TrackedDeviceIndex_t, TrackedDevicePose_t *, TrackedDevicePose_t *);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_012_Submit(void *, EVREye, Texture_t *, VRTextureBounds_t *, EVRSubmitFlags);
extern void cppIVRCompositor_IVRCompositor_012_ClearLastSubmittedFrame(void *);
extern void cppIVRCompositor_IVRCompositor_012_PostPresentHandoff(void *);
extern bool cppIVRCompositor_IVRCompositor_012_GetFrameTiming(void *, Compositor_FrameTiming *, uint32_t);
extern float cppIVRCompositor_IVRCompositor_012_GetFrameTimeRemaining(void *);
extern void cppIVRCompositor_IVRCompositor_012_FadeToColor(void *, float, float, float, float, float, bool);
extern void cppIVRCompositor_IVRCompositor_012_FadeGrid(void *, float, bool);
extern EVRCompositorError cppIVRCompositor_IVRCompositor_012_SetSkyboxOverride(void *, Texture_t *, uint32_t);
extern void cppIVRCompositor_IVRCompositor_012_ClearSkyboxOverride(void *);
extern void cppIVRCompositor_IVRCompositor_012_CompositorBringToFront(void *);
extern void cppIVRCompositor_IVRCompositor_012_CompositorGoToBack(void *);
extern void cppIVRCompositor_IVRCompositor_012_CompositorQuit(void *);
extern bool cppIVRCompositor_IVRCompositor_012_IsFullscreen(void *);
extern uint32_t cppIVRCompositor_IVRCompositor_012_GetCurrentSceneFocusProcess(void *);
extern uint32_t cppIVRCompositor_IVRCompositor_012_GetLastFrameRenderer(void *);
extern bool cppIVRCompositor_IVRCompositor_012_CanRenderScene(void *);
extern void cppIVRCompositor_IVRCompositor_012_ShowMirrorWindow(void *);
extern void cppIVRCompositor_IVRCompositor_012_HideMirrorWindow(void *);
extern bool cppIVRCompositor_IVRCompositor_012_IsMirrorWindowVisible(void *);
extern void cppIVRCompositor_IVRCompositor_012_CompositorDumpImages(void *);
extern bool cppIVRCompositor_IVRCompositor_012_ShouldAppRenderWithLowResources(void *);
#ifdef __cplusplus
}
#endif
