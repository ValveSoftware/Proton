#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRInput_IVRInput_003_SetActionManifestPath_params
{
    void *linux_side;
    EVRInputError _ret;
    const char *pchActionManifestPath;
};
extern void cppIVRInput_IVRInput_003_SetActionManifestPath( struct cppIVRInput_IVRInput_003_SetActionManifestPath_params *params );

struct cppIVRInput_IVRInput_003_GetActionSetHandle_params
{
    void *linux_side;
    EVRInputError _ret;
    const char *pchActionSetName;
    VRActionSetHandle_t *pHandle;
};
extern void cppIVRInput_IVRInput_003_GetActionSetHandle( struct cppIVRInput_IVRInput_003_GetActionSetHandle_params *params );

struct cppIVRInput_IVRInput_003_GetActionHandle_params
{
    void *linux_side;
    EVRInputError _ret;
    const char *pchActionName;
    VRActionHandle_t *pHandle;
};
extern void cppIVRInput_IVRInput_003_GetActionHandle( struct cppIVRInput_IVRInput_003_GetActionHandle_params *params );

struct cppIVRInput_IVRInput_003_GetInputSourceHandle_params
{
    void *linux_side;
    EVRInputError _ret;
    const char *pchInputSourcePath;
    VRInputValueHandle_t *pHandle;
};
extern void cppIVRInput_IVRInput_003_GetInputSourceHandle( struct cppIVRInput_IVRInput_003_GetInputSourceHandle_params *params );

struct cppIVRInput_IVRInput_003_UpdateActionState_params
{
    void *linux_side;
    EVRInputError _ret;
    VRActiveActionSet_t *pSets;
    uint32_t unSizeOfVRSelectedActionSet_t;
    uint32_t unSetCount;
};
extern void cppIVRInput_IVRInput_003_UpdateActionState( struct cppIVRInput_IVRInput_003_UpdateActionState_params *params );

struct cppIVRInput_IVRInput_003_GetDigitalActionData_params
{
    void *linux_side;
    EVRInputError _ret;
    VRActionHandle_t action;
    winInputDigitalActionData_t_1015 *pActionData;
    uint32_t unActionDataSize;
};
extern void cppIVRInput_IVRInput_003_GetDigitalActionData( struct cppIVRInput_IVRInput_003_GetDigitalActionData_params *params );

struct cppIVRInput_IVRInput_003_GetAnalogActionData_params
{
    void *linux_side;
    EVRInputError _ret;
    VRActionHandle_t action;
    winInputAnalogActionData_t_1015 *pActionData;
    uint32_t unActionDataSize;
};
extern void cppIVRInput_IVRInput_003_GetAnalogActionData( struct cppIVRInput_IVRInput_003_GetAnalogActionData_params *params );

struct cppIVRInput_IVRInput_003_GetPoseActionData_params
{
    void *linux_side;
    EVRInputError _ret;
    VRActionHandle_t action;
    ETrackingUniverseOrigin eOrigin;
    float fPredictedSecondsFromNow;
    winInputPoseActionData_t_1015 *pActionData;
    uint32_t unActionDataSize;
};
extern void cppIVRInput_IVRInput_003_GetPoseActionData( struct cppIVRInput_IVRInput_003_GetPoseActionData_params *params );

struct cppIVRInput_IVRInput_003_GetSkeletalActionData_params
{
    void *linux_side;
    EVRInputError _ret;
    VRActionHandle_t action;
    EVRSkeletalTransformSpace eBoneParent;
    float fPredictedSecondsFromNow;
    winInputSkeletonActionData_t_1015 *pActionData;
    uint32_t unActionDataSize;
    VRBoneTransform_t *pTransformArray;
    uint32_t unTransformArrayCount;
};
extern void cppIVRInput_IVRInput_003_GetSkeletalActionData( struct cppIVRInput_IVRInput_003_GetSkeletalActionData_params *params );

struct cppIVRInput_IVRInput_003_GetSkeletalActionDataCompressed_params
{
    void *linux_side;
    EVRInputError _ret;
    VRActionHandle_t action;
    EVRSkeletalTransformSpace eBoneParent;
    float fPredictedSecondsFromNow;
    void *pvCompressedData;
    uint32_t unCompressedSize;
    uint32_t *punRequiredCompressedSize;
};
extern void cppIVRInput_IVRInput_003_GetSkeletalActionDataCompressed( struct cppIVRInput_IVRInput_003_GetSkeletalActionDataCompressed_params *params );

struct cppIVRInput_IVRInput_003_UncompressSkeletalActionData_params
{
    void *linux_side;
    EVRInputError _ret;
    void *pvCompressedBuffer;
    uint32_t unCompressedBufferSize;
    EVRSkeletalTransformSpace *peBoneParent;
    VRBoneTransform_t *pTransformArray;
    uint32_t unTransformArrayCount;
};
extern void cppIVRInput_IVRInput_003_UncompressSkeletalActionData( struct cppIVRInput_IVRInput_003_UncompressSkeletalActionData_params *params );

struct cppIVRInput_IVRInput_003_TriggerHapticVibrationAction_params
{
    void *linux_side;
    EVRInputError _ret;
    VRActionHandle_t action;
    float fStartSecondsFromNow;
    float fDurationSeconds;
    float fFrequency;
    float fAmplitude;
};
extern void cppIVRInput_IVRInput_003_TriggerHapticVibrationAction( struct cppIVRInput_IVRInput_003_TriggerHapticVibrationAction_params *params );

struct cppIVRInput_IVRInput_003_GetActionOrigins_params
{
    void *linux_side;
    EVRInputError _ret;
    VRActionSetHandle_t actionSetHandle;
    VRActionHandle_t digitalActionHandle;
    VRInputValueHandle_t *originsOut;
    uint32_t originOutCount;
};
extern void cppIVRInput_IVRInput_003_GetActionOrigins( struct cppIVRInput_IVRInput_003_GetActionOrigins_params *params );

struct cppIVRInput_IVRInput_003_GetOriginLocalizedName_params
{
    void *linux_side;
    EVRInputError _ret;
    VRInputValueHandle_t origin;
    char *pchNameArray;
    uint32_t unNameArraySize;
};
extern void cppIVRInput_IVRInput_003_GetOriginLocalizedName( struct cppIVRInput_IVRInput_003_GetOriginLocalizedName_params *params );

struct cppIVRInput_IVRInput_003_GetOriginTrackedDeviceInfo_params
{
    void *linux_side;
    EVRInputError _ret;
    VRInputValueHandle_t origin;
    InputOriginInfo_t *pOriginInfo;
    uint32_t unOriginInfoSize;
};
extern void cppIVRInput_IVRInput_003_GetOriginTrackedDeviceInfo( struct cppIVRInput_IVRInput_003_GetOriginTrackedDeviceInfo_params *params );

struct cppIVRInput_IVRInput_003_ShowActionOrigins_params
{
    void *linux_side;
    EVRInputError _ret;
    VRActionSetHandle_t actionSetHandle;
    VRActionHandle_t ulActionHandle;
};
extern void cppIVRInput_IVRInput_003_ShowActionOrigins( struct cppIVRInput_IVRInput_003_ShowActionOrigins_params *params );

struct cppIVRInput_IVRInput_003_ShowBindingsForActionSet_params
{
    void *linux_side;
    EVRInputError _ret;
    VRActiveActionSet_t *pSets;
    uint32_t unSizeOfVRSelectedActionSet_t;
    uint32_t unSetCount;
    VRInputValueHandle_t originToHighlight;
};
extern void cppIVRInput_IVRInput_003_ShowBindingsForActionSet( struct cppIVRInput_IVRInput_003_ShowBindingsForActionSet_params *params );

#ifdef __cplusplus
}
#endif
