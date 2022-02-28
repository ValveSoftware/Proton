#ifdef __cplusplus
extern "C" {
#endif
extern EVROverlayError cppIVROverlay_IVROverlay_010_FindOverlay(void *, const char *, VROverlayHandle_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_010_CreateOverlay(void *, const char *, const char *, VROverlayHandle_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_010_DestroyOverlay(void *, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_010_SetHighQualityOverlay(void *, VROverlayHandle_t);
extern VROverlayHandle_t cppIVROverlay_IVROverlay_010_GetHighQualityOverlay(void *);
extern uint32_t cppIVROverlay_IVROverlay_010_GetOverlayKey(void *, VROverlayHandle_t, char *, uint32_t, EVROverlayError *);
extern uint32_t cppIVROverlay_IVROverlay_010_GetOverlayName(void *, VROverlayHandle_t, char *, uint32_t, EVROverlayError *);
extern EVROverlayError cppIVROverlay_IVROverlay_010_GetOverlayImageData(void *, VROverlayHandle_t, void *, uint32_t, uint32_t *, uint32_t *);
extern const char * cppIVROverlay_IVROverlay_010_GetOverlayErrorNameFromEnum(void *, EVROverlayError);
extern EVROverlayError cppIVROverlay_IVROverlay_010_SetOverlayFlag(void *, VROverlayHandle_t, VROverlayFlags, bool);
extern EVROverlayError cppIVROverlay_IVROverlay_010_GetOverlayFlag(void *, VROverlayHandle_t, VROverlayFlags, bool *);
extern EVROverlayError cppIVROverlay_IVROverlay_010_SetOverlayColor(void *, VROverlayHandle_t, float, float, float);
extern EVROverlayError cppIVROverlay_IVROverlay_010_GetOverlayColor(void *, VROverlayHandle_t, float *, float *, float *);
extern EVROverlayError cppIVROverlay_IVROverlay_010_SetOverlayAlpha(void *, VROverlayHandle_t, float);
extern EVROverlayError cppIVROverlay_IVROverlay_010_GetOverlayAlpha(void *, VROverlayHandle_t, float *);
extern EVROverlayError cppIVROverlay_IVROverlay_010_SetOverlayWidthInMeters(void *, VROverlayHandle_t, float);
extern EVROverlayError cppIVROverlay_IVROverlay_010_GetOverlayWidthInMeters(void *, VROverlayHandle_t, float *);
extern EVROverlayError cppIVROverlay_IVROverlay_010_SetOverlayAutoCurveDistanceRangeInMeters(void *, VROverlayHandle_t, float, float);
extern EVROverlayError cppIVROverlay_IVROverlay_010_GetOverlayAutoCurveDistanceRangeInMeters(void *, VROverlayHandle_t, float *, float *);
extern EVROverlayError cppIVROverlay_IVROverlay_010_SetOverlayTextureColorSpace(void *, VROverlayHandle_t, EColorSpace);
extern EVROverlayError cppIVROverlay_IVROverlay_010_GetOverlayTextureColorSpace(void *, VROverlayHandle_t, EColorSpace *);
extern EVROverlayError cppIVROverlay_IVROverlay_010_SetOverlayTextureBounds(void *, VROverlayHandle_t, VRTextureBounds_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_010_GetOverlayTextureBounds(void *, VROverlayHandle_t, VRTextureBounds_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_010_GetOverlayTransformType(void *, VROverlayHandle_t, VROverlayTransformType *);
extern EVROverlayError cppIVROverlay_IVROverlay_010_SetOverlayTransformAbsolute(void *, VROverlayHandle_t, ETrackingUniverseOrigin, HmdMatrix34_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_010_GetOverlayTransformAbsolute(void *, VROverlayHandle_t, ETrackingUniverseOrigin *, HmdMatrix34_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_010_SetOverlayTransformTrackedDeviceRelative(void *, VROverlayHandle_t, TrackedDeviceIndex_t, HmdMatrix34_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_010_GetOverlayTransformTrackedDeviceRelative(void *, VROverlayHandle_t, TrackedDeviceIndex_t *, HmdMatrix34_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_010_SetOverlayTransformTrackedDeviceComponent(void *, VROverlayHandle_t, TrackedDeviceIndex_t, const char *);
extern EVROverlayError cppIVROverlay_IVROverlay_010_GetOverlayTransformTrackedDeviceComponent(void *, VROverlayHandle_t, TrackedDeviceIndex_t *, char *, uint32_t);
extern EVROverlayError cppIVROverlay_IVROverlay_010_ShowOverlay(void *, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_010_HideOverlay(void *, VROverlayHandle_t);
extern bool cppIVROverlay_IVROverlay_010_IsOverlayVisible(void *, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_010_GetTransformForOverlayCoordinates(void *, VROverlayHandle_t, ETrackingUniverseOrigin, HmdVector2_t, HmdMatrix34_t *);
extern bool cppIVROverlay_IVROverlay_010_PollNextOverlayEvent(void *, VROverlayHandle_t, winVREvent_t_0918 *, uint32_t);
extern EVROverlayError cppIVROverlay_IVROverlay_010_GetOverlayInputMethod(void *, VROverlayHandle_t, VROverlayInputMethod *);
extern EVROverlayError cppIVROverlay_IVROverlay_010_SetOverlayInputMethod(void *, VROverlayHandle_t, VROverlayInputMethod);
extern EVROverlayError cppIVROverlay_IVROverlay_010_GetOverlayMouseScale(void *, VROverlayHandle_t, HmdVector2_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_010_SetOverlayMouseScale(void *, VROverlayHandle_t, HmdVector2_t *);
extern bool cppIVROverlay_IVROverlay_010_ComputeOverlayIntersection(void *, VROverlayHandle_t, VROverlayIntersectionParams_t *, VROverlayIntersectionResults_t *);
extern bool cppIVROverlay_IVROverlay_010_HandleControllerOverlayInteractionAsMouse(void *, VROverlayHandle_t, TrackedDeviceIndex_t);
extern bool cppIVROverlay_IVROverlay_010_IsHoverTargetOverlay(void *, VROverlayHandle_t);
extern VROverlayHandle_t cppIVROverlay_IVROverlay_010_GetGamepadFocusOverlay(void *);
extern EVROverlayError cppIVROverlay_IVROverlay_010_SetGamepadFocusOverlay(void *, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_010_SetOverlayNeighbor(void *, EOverlayDirection, VROverlayHandle_t, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_010_MoveGamepadFocusToNeighbor(void *, EOverlayDirection, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_010_SetOverlayTexture(void *, VROverlayHandle_t, Texture_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_010_ClearOverlayTexture(void *, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_010_SetOverlayRaw(void *, VROverlayHandle_t, void *, uint32_t, uint32_t, uint32_t);
extern EVROverlayError cppIVROverlay_IVROverlay_010_SetOverlayFromFile(void *, VROverlayHandle_t, const char *);
extern EVROverlayError cppIVROverlay_IVROverlay_010_CreateDashboardOverlay(void *, const char *, const char *, VROverlayHandle_t *, VROverlayHandle_t *);
extern bool cppIVROverlay_IVROverlay_010_IsDashboardVisible(void *);
extern bool cppIVROverlay_IVROverlay_010_IsActiveDashboardOverlay(void *, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_010_SetDashboardOverlaySceneProcess(void *, VROverlayHandle_t, uint32_t);
extern EVROverlayError cppIVROverlay_IVROverlay_010_GetDashboardOverlaySceneProcess(void *, VROverlayHandle_t, uint32_t *);
extern void cppIVROverlay_IVROverlay_010_ShowDashboard(void *, const char *);
extern TrackedDeviceIndex_t cppIVROverlay_IVROverlay_010_GetPrimaryDashboardDevice(void *);
extern EVROverlayError cppIVROverlay_IVROverlay_010_ShowKeyboard(void *, EGamepadTextInputMode, EGamepadTextInputLineMode, const char *, uint32_t, const char *, bool, uint64_t);
extern EVROverlayError cppIVROverlay_IVROverlay_010_ShowKeyboardForOverlay(void *, VROverlayHandle_t, EGamepadTextInputMode, EGamepadTextInputLineMode, const char *, uint32_t, const char *, bool, uint64_t);
extern uint32_t cppIVROverlay_IVROverlay_010_GetKeyboardText(void *, char *, uint32_t);
extern void cppIVROverlay_IVROverlay_010_HideKeyboard(void *);
extern void cppIVROverlay_IVROverlay_010_SetKeyboardTransformAbsolute(void *, ETrackingUniverseOrigin, HmdMatrix34_t *);
extern void cppIVROverlay_IVROverlay_010_SetKeyboardPositionForOverlay(void *, VROverlayHandle_t, HmdRect2_t);
#ifdef __cplusplus
}
#endif
