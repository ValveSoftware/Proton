/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct cppIVRInput_IVRInput_010_SetActionManifestPath_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchActionManifestPath;
};
extern void cppIVRInput_IVRInput_010_SetActionManifestPath( struct cppIVRInput_IVRInput_010_SetActionManifestPath_params *params );

struct cppIVRInput_IVRInput_010_GetActionSetHandle_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchActionSetName;
    uint64_t *pHandle;
};
extern void cppIVRInput_IVRInput_010_GetActionSetHandle( struct cppIVRInput_IVRInput_010_GetActionSetHandle_params *params );

struct cppIVRInput_IVRInput_010_GetActionHandle_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchActionName;
    uint64_t *pHandle;
};
extern void cppIVRInput_IVRInput_010_GetActionHandle( struct cppIVRInput_IVRInput_010_GetActionHandle_params *params );

struct cppIVRInput_IVRInput_010_GetInputSourceHandle_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchInputSourcePath;
    uint64_t *pHandle;
};
extern void cppIVRInput_IVRInput_010_GetInputSourceHandle( struct cppIVRInput_IVRInput_010_GetInputSourceHandle_params *params );

struct cppIVRInput_IVRInput_010_UpdateActionState_params
{
    void *linux_side;
    uint32_t _ret;
    VRActiveActionSet_t_1016 *pSets;
    uint32_t unSizeOfVRSelectedActionSet_t;
    uint32_t unSetCount;
};
extern void cppIVRInput_IVRInput_010_UpdateActionState( struct cppIVRInput_IVRInput_010_UpdateActionState_params *params );

struct cppIVRInput_IVRInput_010_GetDigitalActionData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    w_InputDigitalActionData_t *pActionData;
    uint32_t unActionDataSize;
    uint64_t ulRestrictToDevice;
};
extern void cppIVRInput_IVRInput_010_GetDigitalActionData( struct cppIVRInput_IVRInput_010_GetDigitalActionData_params *params );

struct cppIVRInput_IVRInput_010_GetAnalogActionData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    w_InputAnalogActionData_t *pActionData;
    uint32_t unActionDataSize;
    uint64_t ulRestrictToDevice;
};
extern void cppIVRInput_IVRInput_010_GetAnalogActionData( struct cppIVRInput_IVRInput_010_GetAnalogActionData_params *params );

struct cppIVRInput_IVRInput_010_GetPoseActionDataRelativeToNow_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eOrigin;
    float fPredictedSecondsFromNow;
    w_InputPoseActionData_t *pActionData;
    uint32_t unActionDataSize;
    uint64_t ulRestrictToDevice;
};
extern void cppIVRInput_IVRInput_010_GetPoseActionDataRelativeToNow( struct cppIVRInput_IVRInput_010_GetPoseActionDataRelativeToNow_params *params );

struct cppIVRInput_IVRInput_010_GetPoseActionDataForNextFrame_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eOrigin;
    w_InputPoseActionData_t *pActionData;
    uint32_t unActionDataSize;
    uint64_t ulRestrictToDevice;
};
extern void cppIVRInput_IVRInput_010_GetPoseActionDataForNextFrame( struct cppIVRInput_IVRInput_010_GetPoseActionDataForNextFrame_params *params );

struct cppIVRInput_IVRInput_010_GetSkeletalActionData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    w_InputSkeletalActionData_t_113b *pActionData;
    uint32_t unActionDataSize;
};
extern void cppIVRInput_IVRInput_010_GetSkeletalActionData( struct cppIVRInput_IVRInput_010_GetSkeletalActionData_params *params );

struct cppIVRInput_IVRInput_010_GetDominantHand_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t *peDominantHand;
};
extern void cppIVRInput_IVRInput_010_GetDominantHand( struct cppIVRInput_IVRInput_010_GetDominantHand_params *params );

struct cppIVRInput_IVRInput_010_SetDominantHand_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eDominantHand;
};
extern void cppIVRInput_IVRInput_010_SetDominantHand( struct cppIVRInput_IVRInput_010_SetDominantHand_params *params );

struct cppIVRInput_IVRInput_010_GetBoneCount_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t *pBoneCount;
};
extern void cppIVRInput_IVRInput_010_GetBoneCount( struct cppIVRInput_IVRInput_010_GetBoneCount_params *params );

struct cppIVRInput_IVRInput_010_GetBoneHierarchy_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    int32_t *pParentIndices;
    uint32_t unIndexArayCount;
};
extern void cppIVRInput_IVRInput_010_GetBoneHierarchy( struct cppIVRInput_IVRInput_010_GetBoneHierarchy_params *params );

struct cppIVRInput_IVRInput_010_GetBoneName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    int32_t nBoneIndex;
    char *pchBoneName;
    uint32_t unNameBufferSize;
};
extern void cppIVRInput_IVRInput_010_GetBoneName( struct cppIVRInput_IVRInput_010_GetBoneName_params *params );

struct cppIVRInput_IVRInput_010_GetSkeletalReferenceTransforms_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eTransformSpace;
    uint32_t eReferencePose;
    VRBoneTransform_t *pTransformArray;
    uint32_t unTransformArrayCount;
};
extern void cppIVRInput_IVRInput_010_GetSkeletalReferenceTransforms( struct cppIVRInput_IVRInput_010_GetSkeletalReferenceTransforms_params *params );

struct cppIVRInput_IVRInput_010_GetSkeletalTrackingLevel_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t *pSkeletalTrackingLevel;
};
extern void cppIVRInput_IVRInput_010_GetSkeletalTrackingLevel( struct cppIVRInput_IVRInput_010_GetSkeletalTrackingLevel_params *params );

struct cppIVRInput_IVRInput_010_GetSkeletalBoneData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eTransformSpace;
    uint32_t eMotionRange;
    VRBoneTransform_t *pTransformArray;
    uint32_t unTransformArrayCount;
};
extern void cppIVRInput_IVRInput_010_GetSkeletalBoneData( struct cppIVRInput_IVRInput_010_GetSkeletalBoneData_params *params );

struct cppIVRInput_IVRInput_010_GetSkeletalSummaryData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eSummaryType;
    VRSkeletalSummaryData_t *pSkeletalSummaryData;
};
extern void cppIVRInput_IVRInput_010_GetSkeletalSummaryData( struct cppIVRInput_IVRInput_010_GetSkeletalSummaryData_params *params );

struct cppIVRInput_IVRInput_010_GetSkeletalBoneDataCompressed_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eMotionRange;
    void *pvCompressedData;
    uint32_t unCompressedSize;
    uint32_t *punRequiredCompressedSize;
};
extern void cppIVRInput_IVRInput_010_GetSkeletalBoneDataCompressed( struct cppIVRInput_IVRInput_010_GetSkeletalBoneDataCompressed_params *params );

struct cppIVRInput_IVRInput_010_DecompressSkeletalBoneData_params
{
    void *linux_side;
    uint32_t _ret;
    const void *pvCompressedBuffer;
    uint32_t unCompressedBufferSize;
    uint32_t eTransformSpace;
    VRBoneTransform_t *pTransformArray;
    uint32_t unTransformArrayCount;
};
extern void cppIVRInput_IVRInput_010_DecompressSkeletalBoneData( struct cppIVRInput_IVRInput_010_DecompressSkeletalBoneData_params *params );

struct cppIVRInput_IVRInput_010_TriggerHapticVibrationAction_params
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
extern void cppIVRInput_IVRInput_010_TriggerHapticVibrationAction( struct cppIVRInput_IVRInput_010_TriggerHapticVibrationAction_params *params );

struct cppIVRInput_IVRInput_010_GetActionOrigins_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t actionSetHandle;
    uint64_t digitalActionHandle;
    uint64_t *originsOut;
    uint32_t originOutCount;
};
extern void cppIVRInput_IVRInput_010_GetActionOrigins( struct cppIVRInput_IVRInput_010_GetActionOrigins_params *params );

struct cppIVRInput_IVRInput_010_GetOriginLocalizedName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t origin;
    char *pchNameArray;
    uint32_t unNameArraySize;
    int32_t unStringSectionsToInclude;
};
extern void cppIVRInput_IVRInput_010_GetOriginLocalizedName( struct cppIVRInput_IVRInput_010_GetOriginLocalizedName_params *params );

struct cppIVRInput_IVRInput_010_GetOriginTrackedDeviceInfo_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t origin;
    w_InputOriginInfo_t *pOriginInfo;
    uint32_t unOriginInfoSize;
};
extern void cppIVRInput_IVRInput_010_GetOriginTrackedDeviceInfo( struct cppIVRInput_IVRInput_010_GetOriginTrackedDeviceInfo_params *params );

struct cppIVRInput_IVRInput_010_GetActionBindingInfo_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    InputBindingInfo_t_11030 *pOriginInfo;
    uint32_t unBindingInfoSize;
    uint32_t unBindingInfoCount;
    uint32_t *punReturnedBindingInfoCount;
};
extern void cppIVRInput_IVRInput_010_GetActionBindingInfo( struct cppIVRInput_IVRInput_010_GetActionBindingInfo_params *params );

struct cppIVRInput_IVRInput_010_ShowActionOrigins_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t actionSetHandle;
    uint64_t ulActionHandle;
};
extern void cppIVRInput_IVRInput_010_ShowActionOrigins( struct cppIVRInput_IVRInput_010_ShowActionOrigins_params *params );

struct cppIVRInput_IVRInput_010_ShowBindingsForActionSet_params
{
    void *linux_side;
    uint32_t _ret;
    VRActiveActionSet_t_1016 *pSets;
    uint32_t unSizeOfVRSelectedActionSet_t;
    uint32_t unSetCount;
    uint64_t originToHighlight;
};
extern void cppIVRInput_IVRInput_010_ShowBindingsForActionSet( struct cppIVRInput_IVRInput_010_ShowBindingsForActionSet_params *params );

struct cppIVRInput_IVRInput_010_GetComponentStateForBinding_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchRenderModelName;
    const char *pchComponentName;
    const InputBindingInfo_t_11030 *pOriginInfo;
    uint32_t unBindingInfoSize;
    uint32_t unBindingInfoCount;
    RenderModel_ComponentState_t *pComponentState;
};
extern void cppIVRInput_IVRInput_010_GetComponentStateForBinding( struct cppIVRInput_IVRInput_010_GetComponentStateForBinding_params *params );

struct cppIVRInput_IVRInput_010_IsUsingLegacyInput_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRInput_IVRInput_010_IsUsingLegacyInput( struct cppIVRInput_IVRInput_010_IsUsingLegacyInput_params *params );

struct cppIVRInput_IVRInput_010_OpenBindingUI_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
    uint64_t ulActionSetHandle;
    uint64_t ulDeviceHandle;
    bool bShowOnDesktop;
};
extern void cppIVRInput_IVRInput_010_OpenBindingUI( struct cppIVRInput_IVRInput_010_OpenBindingUI_params *params );

struct cppIVRInput_IVRInput_010_GetBindingVariant_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulDevicePath;
    char *pchVariantArray;
    uint32_t unVariantArraySize;
};
extern void cppIVRInput_IVRInput_010_GetBindingVariant( struct cppIVRInput_IVRInput_010_GetBindingVariant_params *params );

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
