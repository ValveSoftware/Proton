#ifdef __cplusplus
extern "C" {
#endif
extern EVRInputError cppIVRInput_IVRInput_003_SetActionManifestPath(void *, const char *);
extern EVRInputError cppIVRInput_IVRInput_003_GetActionSetHandle(void *, const char *, VRActionSetHandle_t *);
extern EVRInputError cppIVRInput_IVRInput_003_GetActionHandle(void *, const char *, VRActionHandle_t *);
extern EVRInputError cppIVRInput_IVRInput_003_GetInputSourceHandle(void *, const char *, VRInputValueHandle_t *);
extern EVRInputError cppIVRInput_IVRInput_003_UpdateActionState(void *, VRActiveActionSet_t *, uint32_t, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_003_GetDigitalActionData(void *, VRActionHandle_t, winInputDigitalActionData_t_1015 *, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_003_GetAnalogActionData(void *, VRActionHandle_t, winInputAnalogActionData_t_1015 *, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_003_GetPoseActionData(void *, VRActionHandle_t, ETrackingUniverseOrigin, float, winInputPoseActionData_t_1015 *, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_003_GetSkeletalActionData(void *, VRActionHandle_t, EVRSkeletalTransformSpace, float, winInputSkeletonActionData_t_1015 *, uint32_t, VRBoneTransform_t *, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_003_GetSkeletalActionDataCompressed(void *, VRActionHandle_t, EVRSkeletalTransformSpace, float, void *, uint32_t, uint32_t *);
extern EVRInputError cppIVRInput_IVRInput_003_UncompressSkeletalActionData(void *, void *, uint32_t, EVRSkeletalTransformSpace *, VRBoneTransform_t *, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_003_TriggerHapticVibrationAction(void *, VRActionHandle_t, float, float, float, float);
extern EVRInputError cppIVRInput_IVRInput_003_GetActionOrigins(void *, VRActionSetHandle_t, VRActionHandle_t, VRInputValueHandle_t *, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_003_GetOriginLocalizedName(void *, VRInputValueHandle_t, char *, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_003_GetOriginTrackedDeviceInfo(void *, VRInputValueHandle_t, InputOriginInfo_t *, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_003_ShowActionOrigins(void *, VRActionSetHandle_t, VRActionHandle_t);
extern EVRInputError cppIVRInput_IVRInput_003_ShowBindingsForActionSet(void *, VRActiveActionSet_t *, uint32_t, uint32_t, VRInputValueHandle_t);
#ifdef __cplusplus
}
#endif
