#ifdef __cplusplus
extern "C" {
#endif
extern EVRInputError cppIVRInput_IVRInput_004_SetActionManifestPath(void *, const char *);
extern EVRInputError cppIVRInput_IVRInput_004_GetActionSetHandle(void *, const char *, VRActionSetHandle_t *);
extern EVRInputError cppIVRInput_IVRInput_004_GetActionHandle(void *, const char *, VRActionHandle_t *);
extern EVRInputError cppIVRInput_IVRInput_004_GetInputSourceHandle(void *, const char *, VRInputValueHandle_t *);
extern EVRInputError cppIVRInput_IVRInput_004_UpdateActionState(void *, VRActiveActionSet_t *, uint32_t, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_004_GetDigitalActionData(void *, VRActionHandle_t, winInputDigitalActionData_t_1017 *, uint32_t, VRInputValueHandle_t);
extern EVRInputError cppIVRInput_IVRInput_004_GetAnalogActionData(void *, VRActionHandle_t, winInputAnalogActionData_t_1017 *, uint32_t, VRInputValueHandle_t);
extern EVRInputError cppIVRInput_IVRInput_004_GetPoseActionData(void *, VRActionHandle_t, ETrackingUniverseOrigin, float, winInputPoseActionData_t_1017 *, uint32_t, VRInputValueHandle_t);
extern EVRInputError cppIVRInput_IVRInput_004_GetSkeletalActionData(void *, VRActionHandle_t, winInputSkeletalActionData_t_1017 *, uint32_t, VRInputValueHandle_t);
extern EVRInputError cppIVRInput_IVRInput_004_GetSkeletalBoneData(void *, VRActionHandle_t, EVRSkeletalTransformSpace, EVRSkeletalMotionRange, VRBoneTransform_t *, uint32_t, VRInputValueHandle_t);
extern EVRInputError cppIVRInput_IVRInput_004_GetSkeletalBoneDataCompressed(void *, VRActionHandle_t, EVRSkeletalTransformSpace, EVRSkeletalMotionRange, void *, uint32_t, uint32_t *, VRInputValueHandle_t);
extern EVRInputError cppIVRInput_IVRInput_004_DecompressSkeletalBoneData(void *, void *, uint32_t, EVRSkeletalTransformSpace *, VRBoneTransform_t *, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_004_TriggerHapticVibrationAction(void *, VRActionHandle_t, float, float, float, float, VRInputValueHandle_t);
extern EVRInputError cppIVRInput_IVRInput_004_GetActionOrigins(void *, VRActionSetHandle_t, VRActionHandle_t, VRInputValueHandle_t *, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_004_GetOriginLocalizedName(void *, VRInputValueHandle_t, char *, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_004_GetOriginTrackedDeviceInfo(void *, VRInputValueHandle_t, InputOriginInfo_t *, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_004_ShowActionOrigins(void *, VRActionSetHandle_t, VRActionHandle_t);
extern EVRInputError cppIVRInput_IVRInput_004_ShowBindingsForActionSet(void *, VRActiveActionSet_t *, uint32_t, uint32_t, VRInputValueHandle_t);
#ifdef __cplusplus
}
#endif
