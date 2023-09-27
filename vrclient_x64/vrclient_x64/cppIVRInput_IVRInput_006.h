#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRInput_IVRInput_006_SetActionManifestPath_params
{
    void *linux_side;
    EVRInputError _ret;
    const char *pchActionManifestPath;
};
extern void cppIVRInput_IVRInput_006_SetActionManifestPath( struct cppIVRInput_IVRInput_006_SetActionManifestPath_params *params );

struct cppIVRInput_IVRInput_006_GetActionSetHandle_params
{
    void *linux_side;
    EVRInputError _ret;
    const char *pchActionSetName;
    VRActionSetHandle_t *pHandle;
};
extern void cppIVRInput_IVRInput_006_GetActionSetHandle( struct cppIVRInput_IVRInput_006_GetActionSetHandle_params *params );

struct cppIVRInput_IVRInput_006_GetActionHandle_params
{
    void *linux_side;
    EVRInputError _ret;
    const char *pchActionName;
    VRActionHandle_t *pHandle;
};
extern void cppIVRInput_IVRInput_006_GetActionHandle( struct cppIVRInput_IVRInput_006_GetActionHandle_params *params );

struct cppIVRInput_IVRInput_006_GetInputSourceHandle_params
{
    void *linux_side;
    EVRInputError _ret;
    const char *pchInputSourcePath;
    VRInputValueHandle_t *pHandle;
};
extern void cppIVRInput_IVRInput_006_GetInputSourceHandle( struct cppIVRInput_IVRInput_006_GetInputSourceHandle_params *params );

struct cppIVRInput_IVRInput_006_UpdateActionState_params
{
    void *linux_side;
    EVRInputError _ret;
    VRActiveActionSet_t *pSets;
    uint32_t unSizeOfVRSelectedActionSet_t;
    uint32_t unSetCount;
};
extern void cppIVRInput_IVRInput_006_UpdateActionState( struct cppIVRInput_IVRInput_006_UpdateActionState_params *params );

struct cppIVRInput_IVRInput_006_GetDigitalActionData_params
{
    void *linux_side;
    EVRInputError _ret;
    VRActionHandle_t action;
    winInputDigitalActionData_t_1418 *pActionData;
    uint32_t unActionDataSize;
    VRInputValueHandle_t ulRestrictToDevice;
};
extern void cppIVRInput_IVRInput_006_GetDigitalActionData( struct cppIVRInput_IVRInput_006_GetDigitalActionData_params *params );

struct cppIVRInput_IVRInput_006_GetAnalogActionData_params
{
    void *linux_side;
    EVRInputError _ret;
    VRActionHandle_t action;
    winInputAnalogActionData_t_1418 *pActionData;
    uint32_t unActionDataSize;
    VRInputValueHandle_t ulRestrictToDevice;
};
extern void cppIVRInput_IVRInput_006_GetAnalogActionData( struct cppIVRInput_IVRInput_006_GetAnalogActionData_params *params );

struct cppIVRInput_IVRInput_006_GetPoseActionDataRelativeToNow_params
{
    void *linux_side;
    EVRInputError _ret;
    VRActionHandle_t action;
    ETrackingUniverseOrigin eOrigin;
    float fPredictedSecondsFromNow;
    winInputPoseActionData_t_1418 *pActionData;
    uint32_t unActionDataSize;
    VRInputValueHandle_t ulRestrictToDevice;
};
extern void cppIVRInput_IVRInput_006_GetPoseActionDataRelativeToNow( struct cppIVRInput_IVRInput_006_GetPoseActionDataRelativeToNow_params *params );

struct cppIVRInput_IVRInput_006_GetPoseActionDataForNextFrame_params
{
    void *linux_side;
    EVRInputError _ret;
    VRActionHandle_t action;
    ETrackingUniverseOrigin eOrigin;
    winInputPoseActionData_t_1418 *pActionData;
    uint32_t unActionDataSize;
    VRInputValueHandle_t ulRestrictToDevice;
};
extern void cppIVRInput_IVRInput_006_GetPoseActionDataForNextFrame( struct cppIVRInput_IVRInput_006_GetPoseActionDataForNextFrame_params *params );

struct cppIVRInput_IVRInput_006_GetSkeletalActionData_params
{
    void *linux_side;
    EVRInputError _ret;
    VRActionHandle_t action;
    winInputSkeletalActionData_t_1418 *pActionData;
    uint32_t unActionDataSize;
};
extern void cppIVRInput_IVRInput_006_GetSkeletalActionData( struct cppIVRInput_IVRInput_006_GetSkeletalActionData_params *params );

struct cppIVRInput_IVRInput_006_GetBoneCount_params
{
    void *linux_side;
    EVRInputError _ret;
    VRActionHandle_t action;
    uint32_t *pBoneCount;
};
extern void cppIVRInput_IVRInput_006_GetBoneCount( struct cppIVRInput_IVRInput_006_GetBoneCount_params *params );

struct cppIVRInput_IVRInput_006_GetBoneHierarchy_params
{
    void *linux_side;
    EVRInputError _ret;
    VRActionHandle_t action;
    BoneIndex_t *pParentIndices;
    uint32_t unIndexArayCount;
};
extern void cppIVRInput_IVRInput_006_GetBoneHierarchy( struct cppIVRInput_IVRInput_006_GetBoneHierarchy_params *params );

struct cppIVRInput_IVRInput_006_GetBoneName_params
{
    void *linux_side;
    EVRInputError _ret;
    VRActionHandle_t action;
    BoneIndex_t nBoneIndex;
    char *pchBoneName;
    uint32_t unNameBufferSize;
};
extern void cppIVRInput_IVRInput_006_GetBoneName( struct cppIVRInput_IVRInput_006_GetBoneName_params *params );

struct cppIVRInput_IVRInput_006_GetSkeletalReferenceTransforms_params
{
    void *linux_side;
    EVRInputError _ret;
    VRActionHandle_t action;
    EVRSkeletalTransformSpace eTransformSpace;
    EVRSkeletalReferencePose eReferencePose;
    VRBoneTransform_t *pTransformArray;
    uint32_t unTransformArrayCount;
};
extern void cppIVRInput_IVRInput_006_GetSkeletalReferenceTransforms( struct cppIVRInput_IVRInput_006_GetSkeletalReferenceTransforms_params *params );

struct cppIVRInput_IVRInput_006_GetSkeletalTrackingLevel_params
{
    void *linux_side;
    EVRInputError _ret;
    VRActionHandle_t action;
    EVRSkeletalTrackingLevel *pSkeletalTrackingLevel;
};
extern void cppIVRInput_IVRInput_006_GetSkeletalTrackingLevel( struct cppIVRInput_IVRInput_006_GetSkeletalTrackingLevel_params *params );

struct cppIVRInput_IVRInput_006_GetSkeletalBoneData_params
{
    void *linux_side;
    EVRInputError _ret;
    VRActionHandle_t action;
    EVRSkeletalTransformSpace eTransformSpace;
    EVRSkeletalMotionRange eMotionRange;
    VRBoneTransform_t *pTransformArray;
    uint32_t unTransformArrayCount;
};
extern void cppIVRInput_IVRInput_006_GetSkeletalBoneData( struct cppIVRInput_IVRInput_006_GetSkeletalBoneData_params *params );

struct cppIVRInput_IVRInput_006_GetSkeletalSummaryData_params
{
    void *linux_side;
    EVRInputError _ret;
    VRActionHandle_t action;
    EVRSummaryType eSummaryType;
    VRSkeletalSummaryData_t *pSkeletalSummaryData;
};
extern void cppIVRInput_IVRInput_006_GetSkeletalSummaryData( struct cppIVRInput_IVRInput_006_GetSkeletalSummaryData_params *params );

struct cppIVRInput_IVRInput_006_GetSkeletalBoneDataCompressed_params
{
    void *linux_side;
    EVRInputError _ret;
    VRActionHandle_t action;
    EVRSkeletalMotionRange eMotionRange;
    void *pvCompressedData;
    uint32_t unCompressedSize;
    uint32_t *punRequiredCompressedSize;
};
extern void cppIVRInput_IVRInput_006_GetSkeletalBoneDataCompressed( struct cppIVRInput_IVRInput_006_GetSkeletalBoneDataCompressed_params *params );

struct cppIVRInput_IVRInput_006_DecompressSkeletalBoneData_params
{
    void *linux_side;
    EVRInputError _ret;
    const void *pvCompressedBuffer;
    uint32_t unCompressedBufferSize;
    EVRSkeletalTransformSpace eTransformSpace;
    VRBoneTransform_t *pTransformArray;
    uint32_t unTransformArrayCount;
};
extern void cppIVRInput_IVRInput_006_DecompressSkeletalBoneData( struct cppIVRInput_IVRInput_006_DecompressSkeletalBoneData_params *params );

struct cppIVRInput_IVRInput_006_TriggerHapticVibrationAction_params
{
    void *linux_side;
    EVRInputError _ret;
    VRActionHandle_t action;
    float fStartSecondsFromNow;
    float fDurationSeconds;
    float fFrequency;
    float fAmplitude;
    VRInputValueHandle_t ulRestrictToDevice;
};
extern void cppIVRInput_IVRInput_006_TriggerHapticVibrationAction( struct cppIVRInput_IVRInput_006_TriggerHapticVibrationAction_params *params );

struct cppIVRInput_IVRInput_006_GetActionOrigins_params
{
    void *linux_side;
    EVRInputError _ret;
    VRActionSetHandle_t actionSetHandle;
    VRActionHandle_t digitalActionHandle;
    VRInputValueHandle_t *originsOut;
    uint32_t originOutCount;
};
extern void cppIVRInput_IVRInput_006_GetActionOrigins( struct cppIVRInput_IVRInput_006_GetActionOrigins_params *params );

struct cppIVRInput_IVRInput_006_GetOriginLocalizedName_params
{
    void *linux_side;
    EVRInputError _ret;
    VRInputValueHandle_t origin;
    char *pchNameArray;
    uint32_t unNameArraySize;
    int32_t unStringSectionsToInclude;
};
extern void cppIVRInput_IVRInput_006_GetOriginLocalizedName( struct cppIVRInput_IVRInput_006_GetOriginLocalizedName_params *params );

struct cppIVRInput_IVRInput_006_GetOriginTrackedDeviceInfo_params
{
    void *linux_side;
    EVRInputError _ret;
    VRInputValueHandle_t origin;
    InputOriginInfo_t *pOriginInfo;
    uint32_t unOriginInfoSize;
};
extern void cppIVRInput_IVRInput_006_GetOriginTrackedDeviceInfo( struct cppIVRInput_IVRInput_006_GetOriginTrackedDeviceInfo_params *params );

struct cppIVRInput_IVRInput_006_ShowActionOrigins_params
{
    void *linux_side;
    EVRInputError _ret;
    VRActionSetHandle_t actionSetHandle;
    VRActionHandle_t ulActionHandle;
};
extern void cppIVRInput_IVRInput_006_ShowActionOrigins( struct cppIVRInput_IVRInput_006_ShowActionOrigins_params *params );

struct cppIVRInput_IVRInput_006_ShowBindingsForActionSet_params
{
    void *linux_side;
    EVRInputError _ret;
    VRActiveActionSet_t *pSets;
    uint32_t unSizeOfVRSelectedActionSet_t;
    uint32_t unSetCount;
    VRInputValueHandle_t originToHighlight;
};
extern void cppIVRInput_IVRInput_006_ShowBindingsForActionSet( struct cppIVRInput_IVRInput_006_ShowBindingsForActionSet_params *params );

struct cppIVRInput_IVRInput_006_IsUsingLegacyInput_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRInput_IVRInput_006_IsUsingLegacyInput( struct cppIVRInput_IVRInput_006_IsUsingLegacyInput_params *params );

#ifdef __cplusplus
}
#endif
