#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRInput_IVRInput_004_SetActionManifestPath_params
{
    void *linux_side;
    EVRInputError _ret;
    const char *pchActionManifestPath;
};
extern void cppIVRInput_IVRInput_004_SetActionManifestPath( struct cppIVRInput_IVRInput_004_SetActionManifestPath_params *params );

struct cppIVRInput_IVRInput_004_GetActionSetHandle_params
{
    void *linux_side;
    EVRInputError _ret;
    const char *pchActionSetName;
    VRActionSetHandle_t *pHandle;
};
extern void cppIVRInput_IVRInput_004_GetActionSetHandle( struct cppIVRInput_IVRInput_004_GetActionSetHandle_params *params );

struct cppIVRInput_IVRInput_004_GetActionHandle_params
{
    void *linux_side;
    EVRInputError _ret;
    const char *pchActionName;
    VRActionHandle_t *pHandle;
};
extern void cppIVRInput_IVRInput_004_GetActionHandle( struct cppIVRInput_IVRInput_004_GetActionHandle_params *params );

struct cppIVRInput_IVRInput_004_GetInputSourceHandle_params
{
    void *linux_side;
    EVRInputError _ret;
    const char *pchInputSourcePath;
    VRInputValueHandle_t *pHandle;
};
extern void cppIVRInput_IVRInput_004_GetInputSourceHandle( struct cppIVRInput_IVRInput_004_GetInputSourceHandle_params *params );

struct cppIVRInput_IVRInput_004_UpdateActionState_params
{
    void *linux_side;
    EVRInputError _ret;
    VRActiveActionSet_t *pSets;
    uint32_t unSizeOfVRSelectedActionSet_t;
    uint32_t unSetCount;
};
extern void cppIVRInput_IVRInput_004_UpdateActionState( struct cppIVRInput_IVRInput_004_UpdateActionState_params *params );

struct cppIVRInput_IVRInput_004_GetDigitalActionData_params
{
    void *linux_side;
    EVRInputError _ret;
    VRActionHandle_t action;
    winInputDigitalActionData_t_1017 *pActionData;
    uint32_t unActionDataSize;
    VRInputValueHandle_t ulRestrictToDevice;
};
extern void cppIVRInput_IVRInput_004_GetDigitalActionData( struct cppIVRInput_IVRInput_004_GetDigitalActionData_params *params );

struct cppIVRInput_IVRInput_004_GetAnalogActionData_params
{
    void *linux_side;
    EVRInputError _ret;
    VRActionHandle_t action;
    winInputAnalogActionData_t_1017 *pActionData;
    uint32_t unActionDataSize;
    VRInputValueHandle_t ulRestrictToDevice;
};
extern void cppIVRInput_IVRInput_004_GetAnalogActionData( struct cppIVRInput_IVRInput_004_GetAnalogActionData_params *params );

struct cppIVRInput_IVRInput_004_GetPoseActionData_params
{
    void *linux_side;
    EVRInputError _ret;
    VRActionHandle_t action;
    ETrackingUniverseOrigin eOrigin;
    float fPredictedSecondsFromNow;
    winInputPoseActionData_t_1017 *pActionData;
    uint32_t unActionDataSize;
    VRInputValueHandle_t ulRestrictToDevice;
};
extern void cppIVRInput_IVRInput_004_GetPoseActionData( struct cppIVRInput_IVRInput_004_GetPoseActionData_params *params );

struct cppIVRInput_IVRInput_004_GetSkeletalActionData_params
{
    void *linux_side;
    EVRInputError _ret;
    VRActionHandle_t action;
    winInputSkeletalActionData_t_1017 *pActionData;
    uint32_t unActionDataSize;
    VRInputValueHandle_t ulRestrictToDevice;
};
extern void cppIVRInput_IVRInput_004_GetSkeletalActionData( struct cppIVRInput_IVRInput_004_GetSkeletalActionData_params *params );

struct cppIVRInput_IVRInput_004_GetSkeletalBoneData_params
{
    void *linux_side;
    EVRInputError _ret;
    VRActionHandle_t action;
    EVRSkeletalTransformSpace eTransformSpace;
    EVRSkeletalMotionRange eMotionRange;
    VRBoneTransform_t *pTransformArray;
    uint32_t unTransformArrayCount;
    VRInputValueHandle_t ulRestrictToDevice;
};
extern void cppIVRInput_IVRInput_004_GetSkeletalBoneData( struct cppIVRInput_IVRInput_004_GetSkeletalBoneData_params *params );

struct cppIVRInput_IVRInput_004_GetSkeletalBoneDataCompressed_params
{
    void *linux_side;
    EVRInputError _ret;
    VRActionHandle_t action;
    EVRSkeletalTransformSpace eTransformSpace;
    EVRSkeletalMotionRange eMotionRange;
    void *pvCompressedData;
    uint32_t unCompressedSize;
    uint32_t *punRequiredCompressedSize;
    VRInputValueHandle_t ulRestrictToDevice;
};
extern void cppIVRInput_IVRInput_004_GetSkeletalBoneDataCompressed( struct cppIVRInput_IVRInput_004_GetSkeletalBoneDataCompressed_params *params );

struct cppIVRInput_IVRInput_004_DecompressSkeletalBoneData_params
{
    void *linux_side;
    EVRInputError _ret;
    void *pvCompressedBuffer;
    uint32_t unCompressedBufferSize;
    EVRSkeletalTransformSpace *peTransformSpace;
    VRBoneTransform_t *pTransformArray;
    uint32_t unTransformArrayCount;
};
extern void cppIVRInput_IVRInput_004_DecompressSkeletalBoneData( struct cppIVRInput_IVRInput_004_DecompressSkeletalBoneData_params *params );

struct cppIVRInput_IVRInput_004_TriggerHapticVibrationAction_params
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
extern void cppIVRInput_IVRInput_004_TriggerHapticVibrationAction( struct cppIVRInput_IVRInput_004_TriggerHapticVibrationAction_params *params );

struct cppIVRInput_IVRInput_004_GetActionOrigins_params
{
    void *linux_side;
    EVRInputError _ret;
    VRActionSetHandle_t actionSetHandle;
    VRActionHandle_t digitalActionHandle;
    VRInputValueHandle_t *originsOut;
    uint32_t originOutCount;
};
extern void cppIVRInput_IVRInput_004_GetActionOrigins( struct cppIVRInput_IVRInput_004_GetActionOrigins_params *params );

struct cppIVRInput_IVRInput_004_GetOriginLocalizedName_params
{
    void *linux_side;
    EVRInputError _ret;
    VRInputValueHandle_t origin;
    char *pchNameArray;
    uint32_t unNameArraySize;
};
extern void cppIVRInput_IVRInput_004_GetOriginLocalizedName( struct cppIVRInput_IVRInput_004_GetOriginLocalizedName_params *params );

struct cppIVRInput_IVRInput_004_GetOriginTrackedDeviceInfo_params
{
    void *linux_side;
    EVRInputError _ret;
    VRInputValueHandle_t origin;
    InputOriginInfo_t *pOriginInfo;
    uint32_t unOriginInfoSize;
};
extern void cppIVRInput_IVRInput_004_GetOriginTrackedDeviceInfo( struct cppIVRInput_IVRInput_004_GetOriginTrackedDeviceInfo_params *params );

struct cppIVRInput_IVRInput_004_ShowActionOrigins_params
{
    void *linux_side;
    EVRInputError _ret;
    VRActionSetHandle_t actionSetHandle;
    VRActionHandle_t ulActionHandle;
};
extern void cppIVRInput_IVRInput_004_ShowActionOrigins( struct cppIVRInput_IVRInput_004_ShowActionOrigins_params *params );

struct cppIVRInput_IVRInput_004_ShowBindingsForActionSet_params
{
    void *linux_side;
    EVRInputError _ret;
    VRActiveActionSet_t *pSets;
    uint32_t unSizeOfVRSelectedActionSet_t;
    uint32_t unSetCount;
    VRInputValueHandle_t originToHighlight;
};
extern void cppIVRInput_IVRInput_004_ShowBindingsForActionSet( struct cppIVRInput_IVRInput_004_ShowBindingsForActionSet_params *params );

#ifdef __cplusplus
}
#endif
