#ifdef __cplusplus
extern "C" {
#endif
extern VROverlayError cppIVROverlay_IVROverlay_001_FindOverlay(void *, const char *, VROverlayHandle_t *);
extern VROverlayError cppIVROverlay_IVROverlay_001_CreateOverlay(void *, const char *, const char *, VROverlayHandle_t *);
extern VROverlayError cppIVROverlay_IVROverlay_001_DestroyOverlay(void *, VROverlayHandle_t);
extern VROverlayError cppIVROverlay_IVROverlay_001_SetHighQualityOverlay(void *, VROverlayHandle_t);
extern VROverlayHandle_t cppIVROverlay_IVROverlay_001_GetHighQualityOverlay(void *);
extern const char * cppIVROverlay_IVROverlay_001_GetOverlayErrorNameFromEnum(void *, VROverlayError);
extern VROverlayError cppIVROverlay_IVROverlay_001_SetOverlayFlag(void *, VROverlayHandle_t, VROverlayFlags, bool);
extern VROverlayError cppIVROverlay_IVROverlay_001_GetOverlayFlag(void *, VROverlayHandle_t, VROverlayFlags, bool *);
extern VROverlayError cppIVROverlay_IVROverlay_001_SetOverlayAlpha(void *, VROverlayHandle_t, float);
extern VROverlayError cppIVROverlay_IVROverlay_001_GetOverlayAlpha(void *, VROverlayHandle_t, float *);
extern VROverlayError cppIVROverlay_IVROverlay_001_SetOverlayGamma(void *, VROverlayHandle_t, float);
extern VROverlayError cppIVROverlay_IVROverlay_001_GetOverlayGamma(void *, VROverlayHandle_t, float *);
extern VROverlayError cppIVROverlay_IVROverlay_001_SetOverlayWidthInMeters(void *, VROverlayHandle_t, float);
extern VROverlayError cppIVROverlay_IVROverlay_001_GetOverlayWidthInMeters(void *, VROverlayHandle_t, float *);
extern VROverlayError cppIVROverlay_IVROverlay_001_SetOverlayTextureBounds(void *, VROverlayHandle_t, VRTextureBounds_t *);
extern VROverlayError cppIVROverlay_IVROverlay_001_GetOverlayTextureBounds(void *, VROverlayHandle_t, VRTextureBounds_t *);
extern VROverlayError cppIVROverlay_IVROverlay_001_GetOverlayTransformType(void *, VROverlayHandle_t, VROverlayTransformType *);
extern VROverlayError cppIVROverlay_IVROverlay_001_SetOverlayTransformAbsolute(void *, VROverlayHandle_t, TrackingUniverseOrigin, HmdMatrix34_t *);
extern VROverlayError cppIVROverlay_IVROverlay_001_GetOverlayTransformAbsolute(void *, VROverlayHandle_t, TrackingUniverseOrigin *, HmdMatrix34_t *);
extern VROverlayError cppIVROverlay_IVROverlay_001_SetOverlayTransformTrackedDeviceRelative(void *, VROverlayHandle_t, TrackedDeviceIndex_t, HmdMatrix34_t *);
extern VROverlayError cppIVROverlay_IVROverlay_001_GetOverlayTransformTrackedDeviceRelative(void *, VROverlayHandle_t, TrackedDeviceIndex_t *, HmdMatrix34_t *);
extern VROverlayError cppIVROverlay_IVROverlay_001_GetOverlayVisibility(void *, VROverlayHandle_t, VROverlayVisibility *);
extern VROverlayError cppIVROverlay_IVROverlay_001_SetOverlayVisibility(void *, VROverlayHandle_t, VROverlayVisibility);
extern VROverlayError cppIVROverlay_IVROverlay_001_ShowOverlay(void *, VROverlayHandle_t);
extern VROverlayError cppIVROverlay_IVROverlay_001_HideOverlay(void *, VROverlayHandle_t);
extern bool cppIVROverlay_IVROverlay_001_IsOverlayVisible(void *, VROverlayHandle_t);
extern bool cppIVROverlay_IVROverlay_001_PollNextOverlayEvent(void *, VROverlayHandle_t, VREvent_t *);
extern VROverlayError cppIVROverlay_IVROverlay_001_GetOverlayInputMethod(void *, VROverlayHandle_t, VROverlayInputMethod *);
extern VROverlayError cppIVROverlay_IVROverlay_001_SetOverlayInputMethod(void *, VROverlayHandle_t, VROverlayInputMethod);
extern VROverlayError cppIVROverlay_IVROverlay_001_GetOverlayMouseScale(void *, VROverlayHandle_t, HmdVector2_t *);
extern VROverlayError cppIVROverlay_IVROverlay_001_SetOverlayMouseScale(void *, VROverlayHandle_t, HmdVector2_t *);
extern bool cppIVROverlay_IVROverlay_001_ComputeOverlayIntersection(void *, VROverlayHandle_t, VROverlayIntersectionParams_t *, VROverlayIntersectionResults_t *);
extern bool cppIVROverlay_IVROverlay_001_HandleControllerOverlayInteractionAsMouse(void *, VROverlayHandle_t, TrackedDeviceIndex_t);
extern VROverlayError cppIVROverlay_IVROverlay_001_SetOverlayTexture(void *, VROverlayHandle_t, void *);
extern VROverlayError cppIVROverlay_IVROverlay_001_SetOverlayRaw(void *, VROverlayHandle_t, void *, uint32_t, uint32_t, uint32_t);
extern VROverlayError cppIVROverlay_IVROverlay_001_SetOverlayFromFile(void *, VROverlayHandle_t, const char *);
extern bool cppIVROverlay_IVROverlay_001_IsSystemOverlayVisible(void *);
extern bool cppIVROverlay_IVROverlay_001_IsActiveSystemOverlay(void *, VROverlayHandle_t);
extern VROverlayError cppIVROverlay_IVROverlay_001_SetSystemOverlaySceneProcess(void *, VROverlayHandle_t, uint32_t);
extern VROverlayError cppIVROverlay_IVROverlay_001_GetSystemOverlaySceneProcess(void *, VROverlayHandle_t, uint32_t *);
#ifdef __cplusplus
}
#endif
