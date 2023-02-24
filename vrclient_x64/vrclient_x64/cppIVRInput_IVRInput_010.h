#ifdef __cplusplus
extern "C" {
#endif
extern EVRInputError cppIVRInput_IVRInput_010_SetActionManifestPath(void *, const char *);
extern EVRInputError cppIVRInput_IVRInput_010_GetActionSetHandle(void *, const char *, VRActionSetHandle_t *);
extern EVRInputError cppIVRInput_IVRInput_010_GetActionHandle(void *, const char *, VRActionHandle_t *);
extern EVRInputError cppIVRInput_IVRInput_010_GetInputSourceHandle(void *, const char *, VRInputValueHandle_t *);
extern EVRInputError cppIVRInput_IVRInput_010_UpdateActionState(void *, VRActiveActionSet_t *, uint32_t, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_010_GetDigitalActionData(void *, VRActionHandle_t, winInputDigitalActionData_t_1237 *, uint32_t, VRInputValueHandle_t);
extern EVRInputError cppIVRInput_IVRInput_010_GetAnalogActionData(void *, VRActionHandle_t, winInputAnalogActionData_t_1237 *, uint32_t, VRInputValueHandle_t);
extern EVRInputError cppIVRInput_IVRInput_010_GetPoseActionDataRelativeToNow(void *, VRActionHandle_t, ETrackingUniverseOrigin, float, winInputPoseActionData_t_1237 *, uint32_t, VRInputValueHandle_t);
extern EVRInputError cppIVRInput_IVRInput_010_GetPoseActionDataForNextFrame(void *, VRActionHandle_t, ETrackingUniverseOrigin, winInputPoseActionData_t_1237 *, uint32_t, VRInputValueHandle_t);
extern EVRInputError cppIVRInput_IVRInput_010_GetSkeletalActionData(void *, VRActionHandle_t, winInputSkeletalActionData_t_1237 *, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_010_GetDominantHand(void *, ETrackedControllerRole *);
extern EVRInputError cppIVRInput_IVRInput_010_SetDominantHand(void *, ETrackedControllerRole);
extern EVRInputError cppIVRInput_IVRInput_010_GetBoneCount(void *, VRActionHandle_t, uint32_t *);
extern EVRInputError cppIVRInput_IVRInput_010_GetBoneHierarchy(void *, VRActionHandle_t, BoneIndex_t *, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_010_GetBoneName(void *, VRActionHandle_t, BoneIndex_t, char *, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_010_GetSkeletalReferenceTransforms(void *, VRActionHandle_t, EVRSkeletalTransformSpace, EVRSkeletalReferencePose, VRBoneTransform_t *, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_010_GetSkeletalTrackingLevel(void *, VRActionHandle_t, EVRSkeletalTrackingLevel *);
extern EVRInputError cppIVRInput_IVRInput_010_GetSkeletalBoneData(void *, VRActionHandle_t, EVRSkeletalTransformSpace, EVRSkeletalMotionRange, VRBoneTransform_t *, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_010_GetSkeletalSummaryData(void *, VRActionHandle_t, EVRSummaryType, VRSkeletalSummaryData_t *);
extern EVRInputError cppIVRInput_IVRInput_010_GetSkeletalBoneDataCompressed(void *, VRActionHandle_t, EVRSkeletalMotionRange, void *, uint32_t, uint32_t *);
extern EVRInputError cppIVRInput_IVRInput_010_DecompressSkeletalBoneData(void *, const void *, uint32_t, EVRSkeletalTransformSpace, VRBoneTransform_t *, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_010_TriggerHapticVibrationAction(void *, VRActionHandle_t, float, float, float, float, VRInputValueHandle_t);
extern EVRInputError cppIVRInput_IVRInput_010_GetActionOrigins(void *, VRActionSetHandle_t, VRActionHandle_t, VRInputValueHandle_t *, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_010_GetOriginLocalizedName(void *, VRInputValueHandle_t, char *, uint32_t, int32_t);
extern EVRInputError cppIVRInput_IVRInput_010_GetOriginTrackedDeviceInfo(void *, VRInputValueHandle_t, InputOriginInfo_t *, uint32_t);
extern EVRInputError cppIVRInput_IVRInput_010_GetActionBindingInfo(void *, VRActionHandle_t, InputBindingInfo_t *, uint32_t, uint32_t, uint32_t *);
extern EVRInputError cppIVRInput_IVRInput_010_ShowActionOrigins(void *, VRActionSetHandle_t, VRActionHandle_t);
extern EVRInputError cppIVRInput_IVRInput_010_ShowBindingsForActionSet(void *, VRActiveActionSet_t *, uint32_t, uint32_t, VRInputValueHandle_t);
extern EVRInputError cppIVRInput_IVRInput_010_GetComponentStateForBinding(void *, const char *, const char *, InputBindingInfo_t *, uint32_t, uint32_t, RenderModel_ComponentState_t *);
extern bool cppIVRInput_IVRInput_010_IsUsingLegacyInput(void *);
extern EVRInputError cppIVRInput_IVRInput_010_OpenBindingUI(void *, const char *, VRActionSetHandle_t, VRInputValueHandle_t, bool);
extern EVRInputError cppIVRInput_IVRInput_010_GetBindingVariant(void *, VRInputValueHandle_t, char *, uint32_t);
#ifdef __cplusplus
}
#endif
