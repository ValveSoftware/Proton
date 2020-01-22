#ifdef __cplusplus
extern "C" {
#endif
extern EVRInputError cppIVRInput_IVRInput_007_SetActionManifestPath(void *, const char *);
extern EVRInputError cppIVRInput_IVRInput_007_GetActionSetHandle(void *, const char *, VRActionSetHandle_t *);
extern EVRInputError cppIVRInput_IVRInput_007_GetActionHandle(void *, const char *, VRActionHandle_t *);
extern EVRInputError cppIVRInput_IVRInput_007_GetInputSourceHandle(void *, const char *, VRInputValueHandle_t *);
extern EVRInputError cppIVRInput_IVRInput_007_UpdateActionState(void *, VRActiveActionSet_t *, uint32_t, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_007_GetDigitalActionData(void *, VRActionHandle_t, winInputDigitalActionData_t_1819 *, uint32_t, VRInputValueHandle_t);
extern EVRInputError cppIVRInput_IVRInput_007_GetAnalogActionData(void *, VRActionHandle_t, winInputAnalogActionData_t_1819 *, uint32_t, VRInputValueHandle_t);
extern EVRInputError cppIVRInput_IVRInput_007_GetPoseActionDataRelativeToNow(void *, VRActionHandle_t, ETrackingUniverseOrigin, float, winInputPoseActionData_t_1819 *, uint32_t, VRInputValueHandle_t);
extern EVRInputError cppIVRInput_IVRInput_007_GetPoseActionDataForNextFrame(void *, VRActionHandle_t, ETrackingUniverseOrigin, winInputPoseActionData_t_1819 *, uint32_t, VRInputValueHandle_t);
extern EVRInputError cppIVRInput_IVRInput_007_GetSkeletalActionData(void *, VRActionHandle_t, winInputSkeletalActionData_t_1819 *, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_007_GetBoneCount(void *, VRActionHandle_t, uint32_t *);
extern EVRInputError cppIVRInput_IVRInput_007_GetBoneHierarchy(void *, VRActionHandle_t, BoneIndex_t *, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_007_GetBoneName(void *, VRActionHandle_t, BoneIndex_t, char *, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_007_GetSkeletalReferenceTransforms(void *, VRActionHandle_t, EVRSkeletalTransformSpace, EVRSkeletalReferencePose, VRBoneTransform_t *, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_007_GetSkeletalTrackingLevel(void *, VRActionHandle_t, EVRSkeletalTrackingLevel *);
extern EVRInputError cppIVRInput_IVRInput_007_GetSkeletalBoneData(void *, VRActionHandle_t, EVRSkeletalTransformSpace, EVRSkeletalMotionRange, VRBoneTransform_t *, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_007_GetSkeletalSummaryData(void *, VRActionHandle_t, EVRSummaryType, VRSkeletalSummaryData_t *);
extern EVRInputError cppIVRInput_IVRInput_007_GetSkeletalBoneDataCompressed(void *, VRActionHandle_t, EVRSkeletalMotionRange, void *, uint32_t, uint32_t *);
extern EVRInputError cppIVRInput_IVRInput_007_DecompressSkeletalBoneData(void *, const void *, uint32_t, EVRSkeletalTransformSpace, VRBoneTransform_t *, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_007_TriggerHapticVibrationAction(void *, VRActionHandle_t, float, float, float, float, VRInputValueHandle_t);
extern EVRInputError cppIVRInput_IVRInput_007_GetActionOrigins(void *, VRActionSetHandle_t, VRActionHandle_t, VRInputValueHandle_t *, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_007_GetOriginLocalizedName(void *, VRInputValueHandle_t, char *, uint32_t, int32_t);
extern EVRInputError cppIVRInput_IVRInput_007_GetOriginTrackedDeviceInfo(void *, VRInputValueHandle_t, InputOriginInfo_t *, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_007_GetActionBindingInfo(void *, VRActionHandle_t, InputBindingInfo_t *, uint32_t, uint32_t, uint32_t *);
extern EVRInputError cppIVRInput_IVRInput_007_ShowActionOrigins(void *, VRActionSetHandle_t, VRActionHandle_t);
extern EVRInputError cppIVRInput_IVRInput_007_ShowBindingsForActionSet(void *, VRActiveActionSet_t *, uint32_t, uint32_t, VRInputValueHandle_t);
extern bool cppIVRInput_IVRInput_007_IsUsingLegacyInput(void *);
extern EVRInputError cppIVRInput_IVRInput_007_OpenBindingUI(void *, const char *, VRActionSetHandle_t, VRInputValueHandle_t, bool);
#ifdef __cplusplus
}
#endif
