/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct cppIVRInput_IVRInput_003_SetActionManifestPath_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchActionManifestPath;
};
extern void cppIVRInput_IVRInput_003_SetActionManifestPath( struct cppIVRInput_IVRInput_003_SetActionManifestPath_params *params );

struct cppIVRInput_IVRInput_003_GetActionSetHandle_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchActionSetName;
    uint64_t *pHandle;
};
extern void cppIVRInput_IVRInput_003_GetActionSetHandle( struct cppIVRInput_IVRInput_003_GetActionSetHandle_params *params );

struct cppIVRInput_IVRInput_003_GetActionHandle_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchActionName;
    uint64_t *pHandle;
};
extern void cppIVRInput_IVRInput_003_GetActionHandle( struct cppIVRInput_IVRInput_003_GetActionHandle_params *params );

struct cppIVRInput_IVRInput_003_GetInputSourceHandle_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchInputSourcePath;
    uint64_t *pHandle;
};
extern void cppIVRInput_IVRInput_003_GetInputSourceHandle( struct cppIVRInput_IVRInput_003_GetInputSourceHandle_params *params );

struct cppIVRInput_IVRInput_003_UpdateActionState_params
{
    void *linux_side;
    uint32_t _ret;
    VRActiveActionSet_t_1015 *pSets;
    uint32_t unSizeOfVRSelectedActionSet_t;
    uint32_t unSetCount;
};
extern void cppIVRInput_IVRInput_003_UpdateActionState( struct cppIVRInput_IVRInput_003_UpdateActionState_params *params );

struct cppIVRInput_IVRInput_003_GetDigitalActionData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    w_InputDigitalActionData_t *pActionData;
    uint32_t unActionDataSize;
};
extern void cppIVRInput_IVRInput_003_GetDigitalActionData( struct cppIVRInput_IVRInput_003_GetDigitalActionData_params *params );

struct cppIVRInput_IVRInput_003_GetAnalogActionData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    w_InputAnalogActionData_t *pActionData;
    uint32_t unActionDataSize;
};
extern void cppIVRInput_IVRInput_003_GetAnalogActionData( struct cppIVRInput_IVRInput_003_GetAnalogActionData_params *params );

struct cppIVRInput_IVRInput_003_GetPoseActionData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eOrigin;
    float fPredictedSecondsFromNow;
    w_InputPoseActionData_t *pActionData;
    uint32_t unActionDataSize;
};
extern void cppIVRInput_IVRInput_003_GetPoseActionData( struct cppIVRInput_IVRInput_003_GetPoseActionData_params *params );

struct cppIVRInput_IVRInput_003_GetSkeletalActionData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eBoneParent;
    float fPredictedSecondsFromNow;
    w_InputSkeletonActionData_t *pActionData;
    uint32_t unActionDataSize;
    VRBoneTransform_t *pTransformArray;
    uint32_t unTransformArrayCount;
};
extern void cppIVRInput_IVRInput_003_GetSkeletalActionData( struct cppIVRInput_IVRInput_003_GetSkeletalActionData_params *params );

struct cppIVRInput_IVRInput_003_GetSkeletalActionDataCompressed_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eBoneParent;
    float fPredictedSecondsFromNow;
    void *pvCompressedData;
    uint32_t unCompressedSize;
    uint32_t *punRequiredCompressedSize;
};
extern void cppIVRInput_IVRInput_003_GetSkeletalActionDataCompressed( struct cppIVRInput_IVRInput_003_GetSkeletalActionDataCompressed_params *params );

struct cppIVRInput_IVRInput_003_UncompressSkeletalActionData_params
{
    void *linux_side;
    uint32_t _ret;
    void *pvCompressedBuffer;
    uint32_t unCompressedBufferSize;
    uint32_t *peBoneParent;
    VRBoneTransform_t *pTransformArray;
    uint32_t unTransformArrayCount;
};
extern void cppIVRInput_IVRInput_003_UncompressSkeletalActionData( struct cppIVRInput_IVRInput_003_UncompressSkeletalActionData_params *params );

struct cppIVRInput_IVRInput_003_TriggerHapticVibrationAction_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    float fStartSecondsFromNow;
    float fDurationSeconds;
    float fFrequency;
    float fAmplitude;
};
extern void cppIVRInput_IVRInput_003_TriggerHapticVibrationAction( struct cppIVRInput_IVRInput_003_TriggerHapticVibrationAction_params *params );

struct cppIVRInput_IVRInput_003_GetActionOrigins_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t actionSetHandle;
    uint64_t digitalActionHandle;
    uint64_t *originsOut;
    uint32_t originOutCount;
};
extern void cppIVRInput_IVRInput_003_GetActionOrigins( struct cppIVRInput_IVRInput_003_GetActionOrigins_params *params );

struct cppIVRInput_IVRInput_003_GetOriginLocalizedName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t origin;
    char *pchNameArray;
    uint32_t unNameArraySize;
};
extern void cppIVRInput_IVRInput_003_GetOriginLocalizedName( struct cppIVRInput_IVRInput_003_GetOriginLocalizedName_params *params );

struct cppIVRInput_IVRInput_003_GetOriginTrackedDeviceInfo_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t origin;
    w_InputOriginInfo_t *pOriginInfo;
    uint32_t unOriginInfoSize;
};
extern void cppIVRInput_IVRInput_003_GetOriginTrackedDeviceInfo( struct cppIVRInput_IVRInput_003_GetOriginTrackedDeviceInfo_params *params );

struct cppIVRInput_IVRInput_003_ShowActionOrigins_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t actionSetHandle;
    uint64_t ulActionHandle;
};
extern void cppIVRInput_IVRInput_003_ShowActionOrigins( struct cppIVRInput_IVRInput_003_ShowActionOrigins_params *params );

struct cppIVRInput_IVRInput_003_ShowBindingsForActionSet_params
{
    void *linux_side;
    uint32_t _ret;
    VRActiveActionSet_t_1015 *pSets;
    uint32_t unSizeOfVRSelectedActionSet_t;
    uint32_t unSetCount;
    uint64_t originToHighlight;
};
extern void cppIVRInput_IVRInput_003_ShowBindingsForActionSet( struct cppIVRInput_IVRInput_003_ShowBindingsForActionSet_params *params );

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
