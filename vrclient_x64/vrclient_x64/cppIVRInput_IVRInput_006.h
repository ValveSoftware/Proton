#ifdef __cplusplus
extern "C" {
#endif
extern EVRInputError cppIVRInput_IVRInput_006_SetActionManifestPath(void *, const char *);
extern EVRInputError cppIVRInput_IVRInput_006_GetActionSetHandle(void *, const char *, VRActionSetHandle_t *);
extern EVRInputError cppIVRInput_IVRInput_006_GetActionHandle(void *, const char *, VRActionHandle_t *);
extern EVRInputError cppIVRInput_IVRInput_006_GetInputSourceHandle(void *, const char *, VRInputValueHandle_t *);
extern EVRInputError cppIVRInput_IVRInput_006_UpdateActionState(void *, VRActiveActionSet_t *, uint32_t, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_006_GetDigitalActionData(void *, VRActionHandle_t, winInputDigitalActionData_t_1418 *, uint32_t, VRInputValueHandle_t);
extern EVRInputError cppIVRInput_IVRInput_006_GetAnalogActionData(void *, VRActionHandle_t, winInputAnalogActionData_t_1418 *, uint32_t, VRInputValueHandle_t);
extern EVRInputError cppIVRInput_IVRInput_006_GetPoseActionDataRelativeToNow(void *, VRActionHandle_t, ETrackingUniverseOrigin, float, winInputPoseActionData_t_1418 *, uint32_t, VRInputValueHandle_t);
extern EVRInputError cppIVRInput_IVRInput_006_GetPoseActionDataForNextFrame(void *, VRActionHandle_t, ETrackingUniverseOrigin, winInputPoseActionData_t_1418 *, uint32_t, VRInputValueHandle_t);
extern EVRInputError cppIVRInput_IVRInput_006_GetSkeletalActionData(void *, VRActionHandle_t, winInputSkeletalActionData_t_1418 *, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_006_GetBoneCount(void *, VRActionHandle_t, uint32_t *);
extern EVRInputError cppIVRInput_IVRInput_006_GetBoneHierarchy(void *, VRActionHandle_t, BoneIndex_t *, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_006_GetBoneName(void *, VRActionHandle_t, BoneIndex_t, char *, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_006_GetSkeletalReferenceTransforms(void *, VRActionHandle_t, EVRSkeletalTransformSpace, EVRSkeletalReferencePose, VRBoneTransform_t *, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_006_GetSkeletalTrackingLevel(void *, VRActionHandle_t, EVRSkeletalTrackingLevel *);
extern EVRInputError cppIVRInput_IVRInput_006_GetSkeletalBoneData(void *, VRActionHandle_t, EVRSkeletalTransformSpace, EVRSkeletalMotionRange, VRBoneTransform_t *, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_006_GetSkeletalSummaryData(void *, VRActionHandle_t, EVRSummaryType, VRSkeletalSummaryData_t *);
extern EVRInputError cppIVRInput_IVRInput_006_GetSkeletalBoneDataCompressed(void *, VRActionHandle_t, EVRSkeletalMotionRange, void *, uint32_t, uint32_t *);
extern EVRInputError cppIVRInput_IVRInput_006_DecompressSkeletalBoneData(void *, const void *, uint32_t, EVRSkeletalTransformSpace, VRBoneTransform_t *, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_006_TriggerHapticVibrationAction(void *, VRActionHandle_t, float, float, float, float, VRInputValueHandle_t);
extern EVRInputError cppIVRInput_IVRInput_006_GetActionOrigins(void *, VRActionSetHandle_t, VRActionHandle_t, VRInputValueHandle_t *, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_006_GetOriginLocalizedName(void *, VRInputValueHandle_t, char *, uint32_t, int32_t);
extern EVRInputError cppIVRInput_IVRInput_006_GetOriginTrackedDeviceInfo(void *, VRInputValueHandle_t, InputOriginInfo_t *, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_006_ShowActionOrigins(void *, VRActionSetHandle_t, VRActionHandle_t);
extern EVRInputError cppIVRInput_IVRInput_006_ShowBindingsForActionSet(void *, VRActiveActionSet_t *, uint32_t, uint32_t, VRInputValueHandle_t);
extern bool cppIVRInput_IVRInput_006_IsUsingLegacyInput(void *);
#ifdef __cplusplus
}
#endif
