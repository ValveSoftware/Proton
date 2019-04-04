#ifdef __cplusplus
extern "C" {
#endif
extern EVRInputError cppIVRInput_IVRInput_005_SetActionManifestPath(void *, const char *);
extern EVRInputError cppIVRInput_IVRInput_005_GetActionSetHandle(void *, const char *, VRActionSetHandle_t *);
extern EVRInputError cppIVRInput_IVRInput_005_GetActionHandle(void *, const char *, VRActionHandle_t *);
extern EVRInputError cppIVRInput_IVRInput_005_GetInputSourceHandle(void *, const char *, VRInputValueHandle_t *);
extern EVRInputError cppIVRInput_IVRInput_005_UpdateActionState(void *, VRActiveActionSet_t *, uint32_t, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_005_GetDigitalActionData(void *, VRActionHandle_t, InputDigitalActionData_t *, uint32_t, VRInputValueHandle_t);
extern EVRInputError cppIVRInput_IVRInput_005_GetAnalogActionData(void *, VRActionHandle_t, InputAnalogActionData_t *, uint32_t, VRInputValueHandle_t);
extern EVRInputError cppIVRInput_IVRInput_005_GetPoseActionData(void *, VRActionHandle_t, ETrackingUniverseOrigin, float, InputPoseActionData_t *, uint32_t, VRInputValueHandle_t);
extern EVRInputError cppIVRInput_IVRInput_005_GetSkeletalActionData(void *, VRActionHandle_t, InputSkeletalActionData_t *, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_005_GetBoneCount(void *, VRActionHandle_t, uint32_t *);
extern EVRInputError cppIVRInput_IVRInput_005_GetBoneHierarchy(void *, VRActionHandle_t, BoneIndex_t *, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_005_GetBoneName(void *, VRActionHandle_t, BoneIndex_t, char *, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_005_GetSkeletalReferenceTransforms(void *, VRActionHandle_t, EVRSkeletalTransformSpace, EVRSkeletalReferencePose, VRBoneTransform_t *, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_005_GetSkeletalTrackingLevel(void *, VRActionHandle_t, EVRSkeletalTrackingLevel *);
extern EVRInputError cppIVRInput_IVRInput_005_GetSkeletalBoneData(void *, VRActionHandle_t, EVRSkeletalTransformSpace, EVRSkeletalMotionRange, VRBoneTransform_t *, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_005_GetSkeletalSummaryData(void *, VRActionHandle_t, VRSkeletalSummaryData_t *);
extern EVRInputError cppIVRInput_IVRInput_005_GetSkeletalBoneDataCompressed(void *, VRActionHandle_t, EVRSkeletalMotionRange, void *, uint32_t, uint32_t *);
extern EVRInputError cppIVRInput_IVRInput_005_DecompressSkeletalBoneData(void *, const void *, uint32_t, EVRSkeletalTransformSpace, VRBoneTransform_t *, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_005_TriggerHapticVibrationAction(void *, VRActionHandle_t, float, float, float, float, VRInputValueHandle_t);
extern EVRInputError cppIVRInput_IVRInput_005_GetActionOrigins(void *, VRActionSetHandle_t, VRActionHandle_t, VRInputValueHandle_t *, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_005_GetOriginLocalizedName(void *, VRInputValueHandle_t, char *, uint32_t, int32_t);
extern EVRInputError cppIVRInput_IVRInput_005_GetOriginTrackedDeviceInfo(void *, VRInputValueHandle_t, InputOriginInfo_t *, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_005_ShowActionOrigins(void *, VRActionSetHandle_t, VRActionHandle_t);
extern EVRInputError cppIVRInput_IVRInput_005_ShowBindingsForActionSet(void *, VRActiveActionSet_t *, uint32_t, uint32_t, VRInputValueHandle_t);
#ifdef __cplusplus
}
#endif
