#ifdef __cplusplus
extern "C" {
#endif
extern VROverlayError cppIVROverlay_IVROverlay_002_FindOverlay(void *, const char *, VROverlayHandle_t *);
extern VROverlayError cppIVROverlay_IVROverlay_002_CreateOverlay(void *, const char *, const char *, VROverlayHandle_t *);
extern VROverlayError cppIVROverlay_IVROverlay_002_DestroyOverlay(void *, VROverlayHandle_t);
extern VROverlayError cppIVROverlay_IVROverlay_002_SetHighQualityOverlay(void *, VROverlayHandle_t);
extern VROverlayHandle_t cppIVROverlay_IVROverlay_002_GetHighQualityOverlay(void *);
extern const char * cppIVROverlay_IVROverlay_002_GetOverlayErrorNameFromEnum(void *, VROverlayError);
extern VROverlayError cppIVROverlay_IVROverlay_002_SetOverlayFlag(void *, VROverlayHandle_t, VROverlayFlags, bool);
extern VROverlayError cppIVROverlay_IVROverlay_002_GetOverlayFlag(void *, VROverlayHandle_t, VROverlayFlags, bool *);
extern VROverlayError cppIVROverlay_IVROverlay_002_SetOverlayColor(void *, VROverlayHandle_t, float, float, float);
extern VROverlayError cppIVROverlay_IVROverlay_002_GetOverlayColor(void *, VROverlayHandle_t, float *, float *, float *);
extern VROverlayError cppIVROverlay_IVROverlay_002_SetOverlayAlpha(void *, VROverlayHandle_t, float);
extern VROverlayError cppIVROverlay_IVROverlay_002_GetOverlayAlpha(void *, VROverlayHandle_t, float *);
extern VROverlayError cppIVROverlay_IVROverlay_002_SetOverlayGamma(void *, VROverlayHandle_t, float);
extern VROverlayError cppIVROverlay_IVROverlay_002_GetOverlayGamma(void *, VROverlayHandle_t, float *);
extern VROverlayError cppIVROverlay_IVROverlay_002_SetOverlayWidthInMeters(void *, VROverlayHandle_t, float);
extern VROverlayError cppIVROverlay_IVROverlay_002_GetOverlayWidthInMeters(void *, VROverlayHandle_t, float *);
extern VROverlayError cppIVROverlay_IVROverlay_002_SetOverlayTextureBounds(void *, VROverlayHandle_t, VRTextureBounds_t *);
extern VROverlayError cppIVROverlay_IVROverlay_002_GetOverlayTextureBounds(void *, VROverlayHandle_t, VRTextureBounds_t *);
extern VROverlayError cppIVROverlay_IVROverlay_002_GetOverlayTransformType(void *, VROverlayHandle_t, VROverlayTransformType *);
extern VROverlayError cppIVROverlay_IVROverlay_002_SetOverlayTransformAbsolute(void *, VROverlayHandle_t, TrackingUniverseOrigin, HmdMatrix34_t *);
extern VROverlayError cppIVROverlay_IVROverlay_002_GetOverlayTransformAbsolute(void *, VROverlayHandle_t, TrackingUniverseOrigin *, HmdMatrix34_t *);
extern VROverlayError cppIVROverlay_IVROverlay_002_SetOverlayTransformTrackedDeviceRelative(void *, VROverlayHandle_t, TrackedDeviceIndex_t, HmdMatrix34_t *);
extern VROverlayError cppIVROverlay_IVROverlay_002_GetOverlayTransformTrackedDeviceRelative(void *, VROverlayHandle_t, TrackedDeviceIndex_t *, HmdMatrix34_t *);
extern VROverlayError cppIVROverlay_IVROverlay_002_ShowOverlay(void *, VROverlayHandle_t);
extern VROverlayError cppIVROverlay_IVROverlay_002_HideOverlay(void *, VROverlayHandle_t);
extern bool cppIVROverlay_IVROverlay_002_IsOverlayVisible(void *, VROverlayHandle_t);
extern bool cppIVROverlay_IVROverlay_002_PollNextOverlayEvent(void *, VROverlayHandle_t, VREvent_t *);
extern VROverlayError cppIVROverlay_IVROverlay_002_GetOverlayInputMethod(void *, VROverlayHandle_t, VROverlayInputMethod *);
extern VROverlayError cppIVROverlay_IVROverlay_002_SetOverlayInputMethod(void *, VROverlayHandle_t, VROverlayInputMethod);
extern VROverlayError cppIVROverlay_IVROverlay_002_GetOverlayMouseScale(void *, VROverlayHandle_t, HmdVector2_t *);
extern VROverlayError cppIVROverlay_IVROverlay_002_SetOverlayMouseScale(void *, VROverlayHandle_t, HmdVector2_t *);
extern bool cppIVROverlay_IVROverlay_002_ComputeOverlayIntersection(void *, VROverlayHandle_t, VROverlayIntersectionParams_t *, VROverlayIntersectionResults_t *);
extern bool cppIVROverlay_IVROverlay_002_HandleControllerOverlayInteractionAsMouse(void *, VROverlayHandle_t, TrackedDeviceIndex_t);
extern VROverlayError cppIVROverlay_IVROverlay_002_SetOverlayTexture(void *, VROverlayHandle_t, GraphicsAPIConvention, void *);
extern VROverlayError cppIVROverlay_IVROverlay_002_ClearOverlayTexture(void *, VROverlayHandle_t);
extern VROverlayError cppIVROverlay_IVROverlay_002_SetOverlayRaw(void *, VROverlayHandle_t, void *, uint32_t, uint32_t, uint32_t);
extern VROverlayError cppIVROverlay_IVROverlay_002_SetOverlayFromFile(void *, VROverlayHandle_t, const char *);
extern VROverlayError cppIVROverlay_IVROverlay_002_CreateDashboardOverlay(void *, const char *, const char *, VROverlayHandle_t *, VROverlayHandle_t *);
extern bool cppIVROverlay_IVROverlay_002_IsDashboardVisible(void *);
extern bool cppIVROverlay_IVROverlay_002_IsActiveDashboardOverlay(void *, VROverlayHandle_t);
extern VROverlayError cppIVROverlay_IVROverlay_002_SetDashboardOverlaySceneProcess(void *, VROverlayHandle_t, uint32_t);
extern VROverlayError cppIVROverlay_IVROverlay_002_GetDashboardOverlaySceneProcess(void *, VROverlayHandle_t, uint32_t *);
#ifdef __cplusplus
}
#endif
