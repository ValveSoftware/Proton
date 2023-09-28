#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRInput_IVRInput_007;
struct cppIVRInput_IVRInput_007_SetActionManifestPath_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchActionManifestPath;
};
extern void cppIVRInput_IVRInput_007_SetActionManifestPath( struct cppIVRInput_IVRInput_007_SetActionManifestPath_params *params );

struct cppIVRInput_IVRInput_007_GetActionSetHandle_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchActionSetName;
    uint64_t *pHandle;
};
extern void cppIVRInput_IVRInput_007_GetActionSetHandle( struct cppIVRInput_IVRInput_007_GetActionSetHandle_params *params );

struct cppIVRInput_IVRInput_007_GetActionHandle_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchActionName;
    uint64_t *pHandle;
};
extern void cppIVRInput_IVRInput_007_GetActionHandle( struct cppIVRInput_IVRInput_007_GetActionHandle_params *params );

struct cppIVRInput_IVRInput_007_GetInputSourceHandle_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchInputSourcePath;
    uint64_t *pHandle;
};
extern void cppIVRInput_IVRInput_007_GetInputSourceHandle( struct cppIVRInput_IVRInput_007_GetInputSourceHandle_params *params );

struct cppIVRInput_IVRInput_007_UpdateActionState_params
{
    void *linux_side;
    uint32_t _ret;
    VRActiveActionSet_t *pSets;
    uint32_t unSizeOfVRSelectedActionSet_t;
    uint32_t unSetCount;
};
extern void cppIVRInput_IVRInput_007_UpdateActionState( struct cppIVRInput_IVRInput_007_UpdateActionState_params *params );

struct cppIVRInput_IVRInput_007_GetDigitalActionData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    winInputDigitalActionData_t_1916 *pActionData;
    uint32_t unActionDataSize;
    uint64_t ulRestrictToDevice;
};
extern void cppIVRInput_IVRInput_007_GetDigitalActionData( struct cppIVRInput_IVRInput_007_GetDigitalActionData_params *params );

struct cppIVRInput_IVRInput_007_GetAnalogActionData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    winInputAnalogActionData_t_1916 *pActionData;
    uint32_t unActionDataSize;
    uint64_t ulRestrictToDevice;
};
extern void cppIVRInput_IVRInput_007_GetAnalogActionData( struct cppIVRInput_IVRInput_007_GetAnalogActionData_params *params );

struct cppIVRInput_IVRInput_007_GetPoseActionDataRelativeToNow_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eOrigin;
    float fPredictedSecondsFromNow;
    winInputPoseActionData_t_1916 *pActionData;
    uint32_t unActionDataSize;
    uint64_t ulRestrictToDevice;
};
extern void cppIVRInput_IVRInput_007_GetPoseActionDataRelativeToNow( struct cppIVRInput_IVRInput_007_GetPoseActionDataRelativeToNow_params *params );

struct cppIVRInput_IVRInput_007_GetPoseActionDataForNextFrame_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eOrigin;
    winInputPoseActionData_t_1916 *pActionData;
    uint32_t unActionDataSize;
    uint64_t ulRestrictToDevice;
};
extern void cppIVRInput_IVRInput_007_GetPoseActionDataForNextFrame( struct cppIVRInput_IVRInput_007_GetPoseActionDataForNextFrame_params *params );

struct cppIVRInput_IVRInput_007_GetSkeletalActionData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    winInputSkeletalActionData_t_1916 *pActionData;
    uint32_t unActionDataSize;
};
extern void cppIVRInput_IVRInput_007_GetSkeletalActionData( struct cppIVRInput_IVRInput_007_GetSkeletalActionData_params *params );

struct cppIVRInput_IVRInput_007_GetBoneCount_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t *pBoneCount;
};
extern void cppIVRInput_IVRInput_007_GetBoneCount( struct cppIVRInput_IVRInput_007_GetBoneCount_params *params );

struct cppIVRInput_IVRInput_007_GetBoneHierarchy_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    int32_t *pParentIndices;
    uint32_t unIndexArayCount;
};
extern void cppIVRInput_IVRInput_007_GetBoneHierarchy( struct cppIVRInput_IVRInput_007_GetBoneHierarchy_params *params );

struct cppIVRInput_IVRInput_007_GetBoneName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    int32_t nBoneIndex;
    char *pchBoneName;
    uint32_t unNameBufferSize;
};
extern void cppIVRInput_IVRInput_007_GetBoneName( struct cppIVRInput_IVRInput_007_GetBoneName_params *params );

struct cppIVRInput_IVRInput_007_GetSkeletalReferenceTransforms_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eTransformSpace;
    uint32_t eReferencePose;
    VRBoneTransform_t *pTransformArray;
    uint32_t unTransformArrayCount;
};
extern void cppIVRInput_IVRInput_007_GetSkeletalReferenceTransforms( struct cppIVRInput_IVRInput_007_GetSkeletalReferenceTransforms_params *params );

struct cppIVRInput_IVRInput_007_GetSkeletalTrackingLevel_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t *pSkeletalTrackingLevel;
};
extern void cppIVRInput_IVRInput_007_GetSkeletalTrackingLevel( struct cppIVRInput_IVRInput_007_GetSkeletalTrackingLevel_params *params );

struct cppIVRInput_IVRInput_007_GetSkeletalBoneData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eTransformSpace;
    uint32_t eMotionRange;
    VRBoneTransform_t *pTransformArray;
    uint32_t unTransformArrayCount;
};
extern void cppIVRInput_IVRInput_007_GetSkeletalBoneData( struct cppIVRInput_IVRInput_007_GetSkeletalBoneData_params *params );

struct cppIVRInput_IVRInput_007_GetSkeletalSummaryData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eSummaryType;
    VRSkeletalSummaryData_t *pSkeletalSummaryData;
};
extern void cppIVRInput_IVRInput_007_GetSkeletalSummaryData( struct cppIVRInput_IVRInput_007_GetSkeletalSummaryData_params *params );

struct cppIVRInput_IVRInput_007_GetSkeletalBoneDataCompressed_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eMotionRange;
    void *pvCompressedData;
    uint32_t unCompressedSize;
    uint32_t *punRequiredCompressedSize;
};
extern void cppIVRInput_IVRInput_007_GetSkeletalBoneDataCompressed( struct cppIVRInput_IVRInput_007_GetSkeletalBoneDataCompressed_params *params );

struct cppIVRInput_IVRInput_007_DecompressSkeletalBoneData_params
{
    void *linux_side;
    uint32_t _ret;
    const void *pvCompressedBuffer;
    uint32_t unCompressedBufferSize;
    uint32_t eTransformSpace;
    VRBoneTransform_t *pTransformArray;
    uint32_t unTransformArrayCount;
};
extern void cppIVRInput_IVRInput_007_DecompressSkeletalBoneData( struct cppIVRInput_IVRInput_007_DecompressSkeletalBoneData_params *params );

struct cppIVRInput_IVRInput_007_TriggerHapticVibrationAction_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    float fStartSecondsFromNow;
    float fDurationSeconds;
    float fFrequency;
    float fAmplitude;
    uint64_t ulRestrictToDevice;
};
extern void cppIVRInput_IVRInput_007_TriggerHapticVibrationAction( struct cppIVRInput_IVRInput_007_TriggerHapticVibrationAction_params *params );

struct cppIVRInput_IVRInput_007_GetActionOrigins_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t actionSetHandle;
    uint64_t digitalActionHandle;
    uint64_t *originsOut;
    uint32_t originOutCount;
};
extern void cppIVRInput_IVRInput_007_GetActionOrigins( struct cppIVRInput_IVRInput_007_GetActionOrigins_params *params );

struct cppIVRInput_IVRInput_007_GetOriginLocalizedName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t origin;
    char *pchNameArray;
    uint32_t unNameArraySize;
    int32_t unStringSectionsToInclude;
};
extern void cppIVRInput_IVRInput_007_GetOriginLocalizedName( struct cppIVRInput_IVRInput_007_GetOriginLocalizedName_params *params );

struct cppIVRInput_IVRInput_007_GetOriginTrackedDeviceInfo_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t origin;
    InputOriginInfo_t *pOriginInfo;
    uint32_t unOriginInfoSize;
};
extern void cppIVRInput_IVRInput_007_GetOriginTrackedDeviceInfo( struct cppIVRInput_IVRInput_007_GetOriginTrackedDeviceInfo_params *params );

struct cppIVRInput_IVRInput_007_GetActionBindingInfo_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    InputBindingInfo_t *pOriginInfo;
    uint32_t unBindingInfoSize;
    uint32_t unBindingInfoCount;
    uint32_t *punReturnedBindingInfoCount;
};
extern void cppIVRInput_IVRInput_007_GetActionBindingInfo( struct cppIVRInput_IVRInput_007_GetActionBindingInfo_params *params );

struct cppIVRInput_IVRInput_007_ShowActionOrigins_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t actionSetHandle;
    uint64_t ulActionHandle;
};
extern void cppIVRInput_IVRInput_007_ShowActionOrigins( struct cppIVRInput_IVRInput_007_ShowActionOrigins_params *params );

struct cppIVRInput_IVRInput_007_ShowBindingsForActionSet_params
{
    void *linux_side;
    uint32_t _ret;
    VRActiveActionSet_t *pSets;
    uint32_t unSizeOfVRSelectedActionSet_t;
    uint32_t unSetCount;
    uint64_t originToHighlight;
};
extern void cppIVRInput_IVRInput_007_ShowBindingsForActionSet( struct cppIVRInput_IVRInput_007_ShowBindingsForActionSet_params *params );

struct cppIVRInput_IVRInput_007_IsUsingLegacyInput_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRInput_IVRInput_007_IsUsingLegacyInput( struct cppIVRInput_IVRInput_007_IsUsingLegacyInput_params *params );

struct cppIVRInput_IVRInput_007_OpenBindingUI_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
    uint64_t ulActionSetHandle;
    uint64_t ulDeviceHandle;
    bool bShowOnDesktop;
};
extern void cppIVRInput_IVRInput_007_OpenBindingUI( struct cppIVRInput_IVRInput_007_OpenBindingUI_params *params );

#ifdef __cplusplus
}
#endif
