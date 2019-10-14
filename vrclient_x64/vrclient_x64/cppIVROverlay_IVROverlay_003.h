#ifdef __cplusplus
extern "C" {
#endif
extern VROverlayError cppIVROverlay_IVROverlay_003_FindOverlay(void *, const char *, VROverlayHandle_t *);
extern VROverlayError cppIVROverlay_IVROverlay_003_CreateOverlay(void *, const char *, const char *, VROverlayHandle_t *);
extern VROverlayError cppIVROverlay_IVROverlay_003_DestroyOverlay(void *, VROverlayHandle_t);
extern VROverlayError cppIVROverlay_IVROverlay_003_SetHighQualityOverlay(void *, VROverlayHandle_t);
extern VROverlayHandle_t cppIVROverlay_IVROverlay_003_GetHighQualityOverlay(void *);
extern uint32_t cppIVROverlay_IVROverlay_003_GetOverlayKey(void *, VROverlayHandle_t, char *, uint32_t, VROverlayError *);
extern uint32_t cppIVROverlay_IVROverlay_003_GetOverlayName(void *, VROverlayHandle_t, char *, uint32_t, VROverlayError *);
extern VROverlayError cppIVROverlay_IVROverlay_003_GetOverlayImageData(void *, VROverlayHandle_t, void *, uint32_t, uint32_t *, uint32_t *);
extern const char * cppIVROverlay_IVROverlay_003_GetOverlayErrorNameFromEnum(void *, VROverlayError);
extern VROverlayError cppIVROverlay_IVROverlay_003_SetOverlayFlag(void *, VROverlayHandle_t, VROverlayFlags, bool);
extern VROverlayError cppIVROverlay_IVROverlay_003_GetOverlayFlag(void *, VROverlayHandle_t, VROverlayFlags, bool *);
extern VROverlayError cppIVROverlay_IVROverlay_003_SetOverlayColor(void *, VROverlayHandle_t, float, float, float);
extern VROverlayError cppIVROverlay_IVROverlay_003_GetOverlayColor(void *, VROverlayHandle_t, float *, float *, float *);
extern VROverlayError cppIVROverlay_IVROverlay_003_SetOverlayAlpha(void *, VROverlayHandle_t, float);
extern VROverlayError cppIVROverlay_IVROverlay_003_GetOverlayAlpha(void *, VROverlayHandle_t, float *);
extern VROverlayError cppIVROverlay_IVROverlay_003_SetOverlayGamma(void *, VROverlayHandle_t, float);
extern VROverlayError cppIVROverlay_IVROverlay_003_GetOverlayGamma(void *, VROverlayHandle_t, float *);
extern VROverlayError cppIVROverlay_IVROverlay_003_SetOverlayWidthInMeters(void *, VROverlayHandle_t, float);
extern VROverlayError cppIVROverlay_IVROverlay_003_GetOverlayWidthInMeters(void *, VROverlayHandle_t, float *);
extern VROverlayError cppIVROverlay_IVROverlay_003_SetOverlayTextureBounds(void *, VROverlayHandle_t, VRTextureBounds_t *);
extern VROverlayError cppIVROverlay_IVROverlay_003_GetOverlayTextureBounds(void *, VROverlayHandle_t, VRTextureBounds_t *);
extern VROverlayError cppIVROverlay_IVROverlay_003_GetOverlayTransformType(void *, VROverlayHandle_t, VROverlayTransformType *);
extern VROverlayError cppIVROverlay_IVROverlay_003_SetOverlayTransformAbsolute(void *, VROverlayHandle_t, TrackingUniverseOrigin, HmdMatrix34_t *);
extern VROverlayError cppIVROverlay_IVROverlay_003_GetOverlayTransformAbsolute(void *, VROverlayHandle_t, TrackingUniverseOrigin *, HmdMatrix34_t *);
extern VROverlayError cppIVROverlay_IVROverlay_003_SetOverlayTransformTrackedDeviceRelative(void *, VROverlayHandle_t, TrackedDeviceIndex_t, HmdMatrix34_t *);
extern VROverlayError cppIVROverlay_IVROverlay_003_GetOverlayTransformTrackedDeviceRelative(void *, VROverlayHandle_t, TrackedDeviceIndex_t *, HmdMatrix34_t *);
extern VROverlayError cppIVROverlay_IVROverlay_003_ShowOverlay(void *, VROverlayHandle_t);
extern VROverlayError cppIVROverlay_IVROverlay_003_HideOverlay(void *, VROverlayHandle_t);
extern bool cppIVROverlay_IVROverlay_003_IsOverlayVisible(void *, VROverlayHandle_t);
extern bool cppIVROverlay_IVROverlay_003_PollNextOverlayEvent(void *, VROverlayHandle_t, VREvent_t *);
extern VROverlayError cppIVROverlay_IVROverlay_003_GetOverlayInputMethod(void *, VROverlayHandle_t, VROverlayInputMethod *);
extern VROverlayError cppIVROverlay_IVROverlay_003_SetOverlayInputMethod(void *, VROverlayHandle_t, VROverlayInputMethod);
extern VROverlayError cppIVROverlay_IVROverlay_003_GetOverlayMouseScale(void *, VROverlayHandle_t, HmdVector2_t *);
extern VROverlayError cppIVROverlay_IVROverlay_003_SetOverlayMouseScale(void *, VROverlayHandle_t, HmdVector2_t *);
extern bool cppIVROverlay_IVROverlay_003_ComputeOverlayIntersection(void *, VROverlayHandle_t, VROverlayIntersectionParams_t *, VROverlayIntersectionResults_t *);
extern bool cppIVROverlay_IVROverlay_003_HandleControllerOverlayInteractionAsMouse(void *, VROverlayHandle_t, TrackedDeviceIndex_t);
extern VROverlayError cppIVROverlay_IVROverlay_003_SetOverlayTexture(void *, VROverlayHandle_t, GraphicsAPIConvention, void *);
extern VROverlayError cppIVROverlay_IVROverlay_003_ClearOverlayTexture(void *, VROverlayHandle_t);
extern VROverlayError cppIVROverlay_IVROverlay_003_SetOverlayRaw(void *, VROverlayHandle_t, void *, uint32_t, uint32_t, uint32_t);
extern VROverlayError cppIVROverlay_IVROverlay_003_SetOverlayFromFile(void *, VROverlayHandle_t, const char *);
extern VROverlayError cppIVROverlay_IVROverlay_003_CreateDashboardOverlay(void *, const char *, const char *, VROverlayHandle_t *, VROverlayHandle_t *);
extern bool cppIVROverlay_IVROverlay_003_IsDashboardVisible(void *);
extern bool cppIVROverlay_IVROverlay_003_IsActiveDashboardOverlay(void *, VROverlayHandle_t);
extern VROverlayError cppIVROverlay_IVROverlay_003_SetDashboardOverlaySceneProcess(void *, VROverlayHandle_t, uint32_t);
extern VROverlayError cppIVROverlay_IVROverlay_003_GetDashboardOverlaySceneProcess(void *, VROverlayHandle_t, uint32_t *);
extern void cppIVROverlay_IVROverlay_003_ShowDashboard(void *, const char *);
#ifdef __cplusplus
}
#endif
