#ifdef __cplusplus
extern "C" {
#endif
extern VROverlayError cppIVROverlay_IVROverlay_004_FindOverlay(void *, const char *, VROverlayHandle_t *);
extern VROverlayError cppIVROverlay_IVROverlay_004_CreateOverlay(void *, const char *, const char *, VROverlayHandle_t *);
extern VROverlayError cppIVROverlay_IVROverlay_004_DestroyOverlay(void *, VROverlayHandle_t);
extern VROverlayError cppIVROverlay_IVROverlay_004_SetHighQualityOverlay(void *, VROverlayHandle_t);
extern VROverlayHandle_t cppIVROverlay_IVROverlay_004_GetHighQualityOverlay(void *);
extern uint32_t cppIVROverlay_IVROverlay_004_GetOverlayKey(void *, VROverlayHandle_t, char *, uint32_t, VROverlayError *);
extern uint32_t cppIVROverlay_IVROverlay_004_GetOverlayName(void *, VROverlayHandle_t, char *, uint32_t, VROverlayError *);
extern VROverlayError cppIVROverlay_IVROverlay_004_GetOverlayImageData(void *, VROverlayHandle_t, void *, uint32_t, uint32_t *, uint32_t *);
extern const char * cppIVROverlay_IVROverlay_004_GetOverlayErrorNameFromEnum(void *, VROverlayError);
extern VROverlayError cppIVROverlay_IVROverlay_004_SetOverlayFlag(void *, VROverlayHandle_t, VROverlayFlags, bool);
extern VROverlayError cppIVROverlay_IVROverlay_004_GetOverlayFlag(void *, VROverlayHandle_t, VROverlayFlags, bool *);
extern VROverlayError cppIVROverlay_IVROverlay_004_SetOverlayColor(void *, VROverlayHandle_t, float, float, float);
extern VROverlayError cppIVROverlay_IVROverlay_004_GetOverlayColor(void *, VROverlayHandle_t, float *, float *, float *);
extern VROverlayError cppIVROverlay_IVROverlay_004_SetOverlayAlpha(void *, VROverlayHandle_t, float);
extern VROverlayError cppIVROverlay_IVROverlay_004_GetOverlayAlpha(void *, VROverlayHandle_t, float *);
extern VROverlayError cppIVROverlay_IVROverlay_004_SetOverlayGamma(void *, VROverlayHandle_t, float);
extern VROverlayError cppIVROverlay_IVROverlay_004_GetOverlayGamma(void *, VROverlayHandle_t, float *);
extern VROverlayError cppIVROverlay_IVROverlay_004_SetOverlayWidthInMeters(void *, VROverlayHandle_t, float);
extern VROverlayError cppIVROverlay_IVROverlay_004_GetOverlayWidthInMeters(void *, VROverlayHandle_t, float *);
extern VROverlayError cppIVROverlay_IVROverlay_004_SetOverlayAutoCurveDistanceRangeInMeters(void *, VROverlayHandle_t, float, float);
extern VROverlayError cppIVROverlay_IVROverlay_004_GetOverlayAutoCurveDistanceRangeInMeters(void *, VROverlayHandle_t, float *, float *);
extern VROverlayError cppIVROverlay_IVROverlay_004_SetOverlayTextureBounds(void *, VROverlayHandle_t, VRTextureBounds_t *);
extern VROverlayError cppIVROverlay_IVROverlay_004_GetOverlayTextureBounds(void *, VROverlayHandle_t, VRTextureBounds_t *);
extern VROverlayError cppIVROverlay_IVROverlay_004_GetOverlayTransformType(void *, VROverlayHandle_t, VROverlayTransformType *);
extern VROverlayError cppIVROverlay_IVROverlay_004_SetOverlayTransformAbsolute(void *, VROverlayHandle_t, TrackingUniverseOrigin, HmdMatrix34_t *);
extern VROverlayError cppIVROverlay_IVROverlay_004_GetOverlayTransformAbsolute(void *, VROverlayHandle_t, TrackingUniverseOrigin *, HmdMatrix34_t *);
extern VROverlayError cppIVROverlay_IVROverlay_004_SetOverlayTransformTrackedDeviceRelative(void *, VROverlayHandle_t, TrackedDeviceIndex_t, HmdMatrix34_t *);
extern VROverlayError cppIVROverlay_IVROverlay_004_GetOverlayTransformTrackedDeviceRelative(void *, VROverlayHandle_t, TrackedDeviceIndex_t *, HmdMatrix34_t *);
extern VROverlayError cppIVROverlay_IVROverlay_004_ShowOverlay(void *, VROverlayHandle_t);
extern VROverlayError cppIVROverlay_IVROverlay_004_HideOverlay(void *, VROverlayHandle_t);
extern bool cppIVROverlay_IVROverlay_004_IsOverlayVisible(void *, VROverlayHandle_t);
extern bool cppIVROverlay_IVROverlay_004_PollNextOverlayEvent(void *, VROverlayHandle_t, VREvent_t *);
extern VROverlayError cppIVROverlay_IVROverlay_004_GetOverlayInputMethod(void *, VROverlayHandle_t, VROverlayInputMethod *);
extern VROverlayError cppIVROverlay_IVROverlay_004_SetOverlayInputMethod(void *, VROverlayHandle_t, VROverlayInputMethod);
extern VROverlayError cppIVROverlay_IVROverlay_004_GetOverlayMouseScale(void *, VROverlayHandle_t, HmdVector2_t *);
extern VROverlayError cppIVROverlay_IVROverlay_004_SetOverlayMouseScale(void *, VROverlayHandle_t, HmdVector2_t *);
extern bool cppIVROverlay_IVROverlay_004_ComputeOverlayIntersection(void *, VROverlayHandle_t, VROverlayIntersectionParams_t *, VROverlayIntersectionResults_t *);
extern bool cppIVROverlay_IVROverlay_004_HandleControllerOverlayInteractionAsMouse(void *, VROverlayHandle_t, TrackedDeviceIndex_t);
extern VROverlayError cppIVROverlay_IVROverlay_004_SetOverlayTexture(void *, VROverlayHandle_t, GraphicsAPIConvention, void *);
extern VROverlayError cppIVROverlay_IVROverlay_004_ClearOverlayTexture(void *, VROverlayHandle_t);
extern VROverlayError cppIVROverlay_IVROverlay_004_SetOverlayRaw(void *, VROverlayHandle_t, void *, uint32_t, uint32_t, uint32_t);
extern VROverlayError cppIVROverlay_IVROverlay_004_SetOverlayFromFile(void *, VROverlayHandle_t, const char *);
extern VROverlayError cppIVROverlay_IVROverlay_004_CreateDashboardOverlay(void *, const char *, const char *, VROverlayHandle_t *, VROverlayHandle_t *);
extern bool cppIVROverlay_IVROverlay_004_IsDashboardVisible(void *);
extern bool cppIVROverlay_IVROverlay_004_IsActiveDashboardOverlay(void *, VROverlayHandle_t);
extern VROverlayError cppIVROverlay_IVROverlay_004_SetDashboardOverlaySceneProcess(void *, VROverlayHandle_t, uint32_t);
extern VROverlayError cppIVROverlay_IVROverlay_004_GetDashboardOverlaySceneProcess(void *, VROverlayHandle_t, uint32_t *);
extern void cppIVROverlay_IVROverlay_004_ShowDashboard(void *, const char *);
#ifdef __cplusplus
}
#endif
