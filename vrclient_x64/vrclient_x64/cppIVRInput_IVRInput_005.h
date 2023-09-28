#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRInput_IVRInput_005;
struct cppIVRInput_IVRInput_005_SetActionManifestPath_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchActionManifestPath;
};
extern void cppIVRInput_IVRInput_005_SetActionManifestPath( struct cppIVRInput_IVRInput_005_SetActionManifestPath_params *params );

struct cppIVRInput_IVRInput_005_GetActionSetHandle_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchActionSetName;
    uint64_t *pHandle;
};
extern void cppIVRInput_IVRInput_005_GetActionSetHandle( struct cppIVRInput_IVRInput_005_GetActionSetHandle_params *params );

struct cppIVRInput_IVRInput_005_GetActionHandle_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchActionName;
    uint64_t *pHandle;
};
extern void cppIVRInput_IVRInput_005_GetActionHandle( struct cppIVRInput_IVRInput_005_GetActionHandle_params *params );

struct cppIVRInput_IVRInput_005_GetInputSourceHandle_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchInputSourcePath;
    uint64_t *pHandle;
};
extern void cppIVRInput_IVRInput_005_GetInputSourceHandle( struct cppIVRInput_IVRInput_005_GetInputSourceHandle_params *params );

struct cppIVRInput_IVRInput_005_UpdateActionState_params
{
    void *linux_side;
    uint32_t _ret;
    VRActiveActionSet_t *pSets;
    uint32_t unSizeOfVRSelectedActionSet_t;
    uint32_t unSetCount;
};
extern void cppIVRInput_IVRInput_005_UpdateActionState( struct cppIVRInput_IVRInput_005_UpdateActionState_params *params );

struct cppIVRInput_IVRInput_005_GetDigitalActionData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    winInputDigitalActionData_t_1322 *pActionData;
    uint32_t unActionDataSize;
    uint64_t ulRestrictToDevice;
};
extern void cppIVRInput_IVRInput_005_GetDigitalActionData( struct cppIVRInput_IVRInput_005_GetDigitalActionData_params *params );

struct cppIVRInput_IVRInput_005_GetAnalogActionData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    winInputAnalogActionData_t_1322 *pActionData;
    uint32_t unActionDataSize;
    uint64_t ulRestrictToDevice;
};
extern void cppIVRInput_IVRInput_005_GetAnalogActionData( struct cppIVRInput_IVRInput_005_GetAnalogActionData_params *params );

struct cppIVRInput_IVRInput_005_GetPoseActionData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eOrigin;
    float fPredictedSecondsFromNow;
    winInputPoseActionData_t_1322 *pActionData;
    uint32_t unActionDataSize;
    uint64_t ulRestrictToDevice;
};
extern void cppIVRInput_IVRInput_005_GetPoseActionData( struct cppIVRInput_IVRInput_005_GetPoseActionData_params *params );

struct cppIVRInput_IVRInput_005_GetSkeletalActionData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    winInputSkeletalActionData_t_1322 *pActionData;
    uint32_t unActionDataSize;
};
extern void cppIVRInput_IVRInput_005_GetSkeletalActionData( struct cppIVRInput_IVRInput_005_GetSkeletalActionData_params *params );

struct cppIVRInput_IVRInput_005_GetBoneCount_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t *pBoneCount;
};
extern void cppIVRInput_IVRInput_005_GetBoneCount( struct cppIVRInput_IVRInput_005_GetBoneCount_params *params );

struct cppIVRInput_IVRInput_005_GetBoneHierarchy_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    int32_t *pParentIndices;
    uint32_t unIndexArayCount;
};
extern void cppIVRInput_IVRInput_005_GetBoneHierarchy( struct cppIVRInput_IVRInput_005_GetBoneHierarchy_params *params );

struct cppIVRInput_IVRInput_005_GetBoneName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    int32_t nBoneIndex;
    char *pchBoneName;
    uint32_t unNameBufferSize;
};
extern void cppIVRInput_IVRInput_005_GetBoneName( struct cppIVRInput_IVRInput_005_GetBoneName_params *params );

struct cppIVRInput_IVRInput_005_GetSkeletalReferenceTransforms_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eTransformSpace;
    uint32_t eReferencePose;
    VRBoneTransform_t *pTransformArray;
    uint32_t unTransformArrayCount;
};
extern void cppIVRInput_IVRInput_005_GetSkeletalReferenceTransforms( struct cppIVRInput_IVRInput_005_GetSkeletalReferenceTransforms_params *params );

struct cppIVRInput_IVRInput_005_GetSkeletalTrackingLevel_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t *pSkeletalTrackingLevel;
};
extern void cppIVRInput_IVRInput_005_GetSkeletalTrackingLevel( struct cppIVRInput_IVRInput_005_GetSkeletalTrackingLevel_params *params );

struct cppIVRInput_IVRInput_005_GetSkeletalBoneData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eTransformSpace;
    uint32_t eMotionRange;
    VRBoneTransform_t *pTransformArray;
    uint32_t unTransformArrayCount;
};
extern void cppIVRInput_IVRInput_005_GetSkeletalBoneData( struct cppIVRInput_IVRInput_005_GetSkeletalBoneData_params *params );

struct cppIVRInput_IVRInput_005_GetSkeletalSummaryData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    VRSkeletalSummaryData_t *pSkeletalSummaryData;
};
extern void cppIVRInput_IVRInput_005_GetSkeletalSummaryData( struct cppIVRInput_IVRInput_005_GetSkeletalSummaryData_params *params );

struct cppIVRInput_IVRInput_005_GetSkeletalBoneDataCompressed_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eMotionRange;
    void *pvCompressedData;
    uint32_t unCompressedSize;
    uint32_t *punRequiredCompressedSize;
};
extern void cppIVRInput_IVRInput_005_GetSkeletalBoneDataCompressed( struct cppIVRInput_IVRInput_005_GetSkeletalBoneDataCompressed_params *params );

struct cppIVRInput_IVRInput_005_DecompressSkeletalBoneData_params
{
    void *linux_side;
    uint32_t _ret;
    const void *pvCompressedBuffer;
    uint32_t unCompressedBufferSize;
    uint32_t eTransformSpace;
    VRBoneTransform_t *pTransformArray;
    uint32_t unTransformArrayCount;
};
extern void cppIVRInput_IVRInput_005_DecompressSkeletalBoneData( struct cppIVRInput_IVRInput_005_DecompressSkeletalBoneData_params *params );

struct cppIVRInput_IVRInput_005_TriggerHapticVibrationAction_params
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
extern void cppIVRInput_IVRInput_005_TriggerHapticVibrationAction( struct cppIVRInput_IVRInput_005_TriggerHapticVibrationAction_params *params );

struct cppIVRInput_IVRInput_005_GetActionOrigins_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t actionSetHandle;
    uint64_t digitalActionHandle;
    uint64_t *originsOut;
    uint32_t originOutCount;
};
extern void cppIVRInput_IVRInput_005_GetActionOrigins( struct cppIVRInput_IVRInput_005_GetActionOrigins_params *params );

struct cppIVRInput_IVRInput_005_GetOriginLocalizedName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t origin;
    char *pchNameArray;
    uint32_t unNameArraySize;
    int32_t unStringSectionsToInclude;
};
extern void cppIVRInput_IVRInput_005_GetOriginLocalizedName( struct cppIVRInput_IVRInput_005_GetOriginLocalizedName_params *params );

struct cppIVRInput_IVRInput_005_GetOriginTrackedDeviceInfo_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t origin;
    InputOriginInfo_t *pOriginInfo;
    uint32_t unOriginInfoSize;
};
extern void cppIVRInput_IVRInput_005_GetOriginTrackedDeviceInfo( struct cppIVRInput_IVRInput_005_GetOriginTrackedDeviceInfo_params *params );

struct cppIVRInput_IVRInput_005_ShowActionOrigins_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t actionSetHandle;
    uint64_t ulActionHandle;
};
extern void cppIVRInput_IVRInput_005_ShowActionOrigins( struct cppIVRInput_IVRInput_005_ShowActionOrigins_params *params );

struct cppIVRInput_IVRInput_005_ShowBindingsForActionSet_params
{
    void *linux_side;
    uint32_t _ret;
    VRActiveActionSet_t *pSets;
    uint32_t unSizeOfVRSelectedActionSet_t;
    uint32_t unSetCount;
    uint64_t originToHighlight;
};
extern void cppIVRInput_IVRInput_005_ShowBindingsForActionSet( struct cppIVRInput_IVRInput_005_ShowBindingsForActionSet_params *params );

struct cppIVRInput_IVRInput_005_IsUsingLegacyInput_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRInput_IVRInput_005_IsUsingLegacyInput( struct cppIVRInput_IVRInput_005_IsUsingLegacyInput_params *params );

#ifdef __cplusplus
}
#endif
