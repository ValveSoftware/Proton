#ifdef __cplusplus
extern "C" {
#endif
extern VROverlayError cppIVROverlay_IVROverlay_005_FindOverlay(void *, const char *, VROverlayHandle_t *);
extern VROverlayError cppIVROverlay_IVROverlay_005_CreateOverlay(void *, const char *, const char *, VROverlayHandle_t *);
extern VROverlayError cppIVROverlay_IVROverlay_005_DestroyOverlay(void *, VROverlayHandle_t);
extern VROverlayError cppIVROverlay_IVROverlay_005_SetHighQualityOverlay(void *, VROverlayHandle_t);
extern VROverlayHandle_t cppIVROverlay_IVROverlay_005_GetHighQualityOverlay(void *);
extern uint32_t cppIVROverlay_IVROverlay_005_GetOverlayKey(void *, VROverlayHandle_t, char *, uint32_t, VROverlayError *);
extern uint32_t cppIVROverlay_IVROverlay_005_GetOverlayName(void *, VROverlayHandle_t, char *, uint32_t, VROverlayError *);
extern VROverlayError cppIVROverlay_IVROverlay_005_GetOverlayImageData(void *, VROverlayHandle_t, void *, uint32_t, uint32_t *, uint32_t *);
extern const char * cppIVROverlay_IVROverlay_005_GetOverlayErrorNameFromEnum(void *, VROverlayError);
extern VROverlayError cppIVROverlay_IVROverlay_005_SetOverlayFlag(void *, VROverlayHandle_t, VROverlayFlags, bool);
extern VROverlayError cppIVROverlay_IVROverlay_005_GetOverlayFlag(void *, VROverlayHandle_t, VROverlayFlags, bool *);
extern VROverlayError cppIVROverlay_IVROverlay_005_SetOverlayColor(void *, VROverlayHandle_t, float, float, float);
extern VROverlayError cppIVROverlay_IVROverlay_005_GetOverlayColor(void *, VROverlayHandle_t, float *, float *, float *);
extern VROverlayError cppIVROverlay_IVROverlay_005_SetOverlayAlpha(void *, VROverlayHandle_t, float);
extern VROverlayError cppIVROverlay_IVROverlay_005_GetOverlayAlpha(void *, VROverlayHandle_t, float *);
extern VROverlayError cppIVROverlay_IVROverlay_005_SetOverlayGamma(void *, VROverlayHandle_t, float);
extern VROverlayError cppIVROverlay_IVROverlay_005_GetOverlayGamma(void *, VROverlayHandle_t, float *);
extern VROverlayError cppIVROverlay_IVROverlay_005_SetOverlayWidthInMeters(void *, VROverlayHandle_t, float);
extern VROverlayError cppIVROverlay_IVROverlay_005_GetOverlayWidthInMeters(void *, VROverlayHandle_t, float *);
extern VROverlayError cppIVROverlay_IVROverlay_005_SetOverlayAutoCurveDistanceRangeInMeters(void *, VROverlayHandle_t, float, float);
extern VROverlayError cppIVROverlay_IVROverlay_005_GetOverlayAutoCurveDistanceRangeInMeters(void *, VROverlayHandle_t, float *, float *);
extern VROverlayError cppIVROverlay_IVROverlay_005_SetOverlayTextureBounds(void *, VROverlayHandle_t, VRTextureBounds_t *);
extern VROverlayError cppIVROverlay_IVROverlay_005_GetOverlayTextureBounds(void *, VROverlayHandle_t, VRTextureBounds_t *);
extern VROverlayError cppIVROverlay_IVROverlay_005_GetOverlayTransformType(void *, VROverlayHandle_t, VROverlayTransformType *);
extern VROverlayError cppIVROverlay_IVROverlay_005_SetOverlayTransformAbsolute(void *, VROverlayHandle_t, TrackingUniverseOrigin, HmdMatrix34_t *);
extern VROverlayError cppIVROverlay_IVROverlay_005_GetOverlayTransformAbsolute(void *, VROverlayHandle_t, TrackingUniverseOrigin *, HmdMatrix34_t *);
extern VROverlayError cppIVROverlay_IVROverlay_005_SetOverlayTransformTrackedDeviceRelative(void *, VROverlayHandle_t, TrackedDeviceIndex_t, HmdMatrix34_t *);
extern VROverlayError cppIVROverlay_IVROverlay_005_GetOverlayTransformTrackedDeviceRelative(void *, VROverlayHandle_t, TrackedDeviceIndex_t *, HmdMatrix34_t *);
extern VROverlayError cppIVROverlay_IVROverlay_005_ShowOverlay(void *, VROverlayHandle_t);
extern VROverlayError cppIVROverlay_IVROverlay_005_HideOverlay(void *, VROverlayHandle_t);
extern bool cppIVROverlay_IVROverlay_005_IsOverlayVisible(void *, VROverlayHandle_t);
extern bool cppIVROverlay_IVROverlay_005_PollNextOverlayEvent(void *, VROverlayHandle_t, VREvent_t *);
extern VROverlayError cppIVROverlay_IVROverlay_005_GetOverlayInputMethod(void *, VROverlayHandle_t, VROverlayInputMethod *);
extern VROverlayError cppIVROverlay_IVROverlay_005_SetOverlayInputMethod(void *, VROverlayHandle_t, VROverlayInputMethod);
extern VROverlayError cppIVROverlay_IVROverlay_005_GetOverlayMouseScale(void *, VROverlayHandle_t, HmdVector2_t *);
extern VROverlayError cppIVROverlay_IVROverlay_005_SetOverlayMouseScale(void *, VROverlayHandle_t, HmdVector2_t *);
extern bool cppIVROverlay_IVROverlay_005_ComputeOverlayIntersection(void *, VROverlayHandle_t, VROverlayIntersectionParams_t *, VROverlayIntersectionResults_t *);
extern bool cppIVROverlay_IVROverlay_005_HandleControllerOverlayInteractionAsMouse(void *, VROverlayHandle_t, TrackedDeviceIndex_t);
extern bool cppIVROverlay_IVROverlay_005_IsFocusOverlay(void *, VROverlayHandle_t);
extern VROverlayError cppIVROverlay_IVROverlay_005_SetOverlayTexture(void *, VROverlayHandle_t, GraphicsAPIConvention, void *);
extern VROverlayError cppIVROverlay_IVROverlay_005_ClearOverlayTexture(void *, VROverlayHandle_t);
extern VROverlayError cppIVROverlay_IVROverlay_005_SetOverlayRaw(void *, VROverlayHandle_t, void *, uint32_t, uint32_t, uint32_t);
extern VROverlayError cppIVROverlay_IVROverlay_005_SetOverlayFromFile(void *, VROverlayHandle_t, const char *);
extern VROverlayError cppIVROverlay_IVROverlay_005_CreateDashboardOverlay(void *, const char *, const char *, VROverlayHandle_t *, VROverlayHandle_t *);
extern bool cppIVROverlay_IVROverlay_005_IsDashboardVisible(void *);
extern bool cppIVROverlay_IVROverlay_005_IsActiveDashboardOverlay(void *, VROverlayHandle_t);
extern VROverlayError cppIVROverlay_IVROverlay_005_SetDashboardOverlaySceneProcess(void *, VROverlayHandle_t, uint32_t);
extern VROverlayError cppIVROverlay_IVROverlay_005_GetDashboardOverlaySceneProcess(void *, VROverlayHandle_t, uint32_t *);
extern void cppIVROverlay_IVROverlay_005_ShowDashboard(void *, const char *);
extern VROverlayError cppIVROverlay_IVROverlay_005_ShowKeyboard(void *, EGamepadTextInputMode, EGamepadTextInputLineMode, const char *, uint32_t, const char *, bool);
extern uint32_t cppIVROverlay_IVROverlay_005_GetKeyboardText(void *, char *, uint32_t);
extern void cppIVROverlay_IVROverlay_005_HideKeyboard(void *);
#ifdef __cplusplus
}
#endif
