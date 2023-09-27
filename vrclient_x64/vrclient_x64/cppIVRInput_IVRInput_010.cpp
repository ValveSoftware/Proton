#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.26.7/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRInput_IVRInput_010.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVRInput_IVRInput_010_SetActionManifestPath( struct cppIVRInput_IVRInput_010_SetActionManifestPath_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->SetActionManifestPath((const char *)params->pchActionManifestPath);
}

void cppIVRInput_IVRInput_010_GetActionSetHandle( struct cppIVRInput_IVRInput_010_GetActionSetHandle_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->GetActionSetHandle((const char *)params->pchActionSetName, (vr::VRActionSetHandle_t *)params->pHandle);
}

void cppIVRInput_IVRInput_010_GetActionHandle( struct cppIVRInput_IVRInput_010_GetActionHandle_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->GetActionHandle((const char *)params->pchActionName, (vr::VRActionHandle_t *)params->pHandle);
}

void cppIVRInput_IVRInput_010_GetInputSourceHandle( struct cppIVRInput_IVRInput_010_GetInputSourceHandle_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->GetInputSourceHandle((const char *)params->pchInputSourcePath, (vr::VRInputValueHandle_t *)params->pHandle);
}

void cppIVRInput_IVRInput_010_UpdateActionState( struct cppIVRInput_IVRInput_010_UpdateActionState_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->UpdateActionState((vr::VRActiveActionSet_t *)params->pSets, (uint32_t)params->unSizeOfVRSelectedActionSet_t, (uint32_t)params->unSetCount);
}

void cppIVRInput_IVRInput_010_GetDigitalActionData( struct cppIVRInput_IVRInput_010_GetDigitalActionData_params *params )
{
    InputDigitalActionData_t lin_pActionData;
    if (params->pActionData)
        struct_InputDigitalActionData_t_1267_win_to_lin( params->pActionData, &lin_pActionData );
    uint32_t lin_unActionDataSize = params->unActionDataSize ? sizeof(lin_pActionData) : 0;
    params->_ret = ((IVRInput*)params->linux_side)->GetDigitalActionData((vr::VRActionHandle_t)params->action, params->pActionData ? &lin_pActionData : nullptr, lin_unActionDataSize, (vr::VRInputValueHandle_t)params->ulRestrictToDevice);
    if (params->pActionData)
        struct_InputDigitalActionData_t_1267_lin_to_win( &lin_pActionData, params->pActionData, params->unActionDataSize );
}

void cppIVRInput_IVRInput_010_GetAnalogActionData( struct cppIVRInput_IVRInput_010_GetAnalogActionData_params *params )
{
    InputAnalogActionData_t lin_pActionData;
    if (params->pActionData)
        struct_InputAnalogActionData_t_1267_win_to_lin( params->pActionData, &lin_pActionData );
    uint32_t lin_unActionDataSize = params->unActionDataSize ? sizeof(lin_pActionData) : 0;
    params->_ret = ((IVRInput*)params->linux_side)->GetAnalogActionData((vr::VRActionHandle_t)params->action, params->pActionData ? &lin_pActionData : nullptr, lin_unActionDataSize, (vr::VRInputValueHandle_t)params->ulRestrictToDevice);
    if (params->pActionData)
        struct_InputAnalogActionData_t_1267_lin_to_win( &lin_pActionData, params->pActionData, params->unActionDataSize );
}

void cppIVRInput_IVRInput_010_GetPoseActionDataRelativeToNow( struct cppIVRInput_IVRInput_010_GetPoseActionDataRelativeToNow_params *params )
{
    InputPoseActionData_t lin_pActionData;
    if (params->pActionData)
        struct_InputPoseActionData_t_1267_win_to_lin( params->pActionData, &lin_pActionData );
    uint32_t lin_unActionDataSize = params->unActionDataSize ? sizeof(lin_pActionData) : 0;
    params->_ret = ((IVRInput*)params->linux_side)->GetPoseActionDataRelativeToNow((vr::VRActionHandle_t)params->action, (vr::ETrackingUniverseOrigin)params->eOrigin, (float)params->fPredictedSecondsFromNow, params->pActionData ? &lin_pActionData : nullptr, lin_unActionDataSize, (vr::VRInputValueHandle_t)params->ulRestrictToDevice);
    if (params->pActionData)
        struct_InputPoseActionData_t_1267_lin_to_win( &lin_pActionData, params->pActionData, params->unActionDataSize );
}

void cppIVRInput_IVRInput_010_GetPoseActionDataForNextFrame( struct cppIVRInput_IVRInput_010_GetPoseActionDataForNextFrame_params *params )
{
    InputPoseActionData_t lin_pActionData;
    if (params->pActionData)
        struct_InputPoseActionData_t_1267_win_to_lin( params->pActionData, &lin_pActionData );
    uint32_t lin_unActionDataSize = params->unActionDataSize ? sizeof(lin_pActionData) : 0;
    params->_ret = ((IVRInput*)params->linux_side)->GetPoseActionDataForNextFrame((vr::VRActionHandle_t)params->action, (vr::ETrackingUniverseOrigin)params->eOrigin, params->pActionData ? &lin_pActionData : nullptr, lin_unActionDataSize, (vr::VRInputValueHandle_t)params->ulRestrictToDevice);
    if (params->pActionData)
        struct_InputPoseActionData_t_1267_lin_to_win( &lin_pActionData, params->pActionData, params->unActionDataSize );
}

void cppIVRInput_IVRInput_010_GetSkeletalActionData( struct cppIVRInput_IVRInput_010_GetSkeletalActionData_params *params )
{
    InputSkeletalActionData_t lin_pActionData;
    if (params->pActionData)
        struct_InputSkeletalActionData_t_1267_win_to_lin( params->pActionData, &lin_pActionData );
    uint32_t lin_unActionDataSize = params->unActionDataSize ? sizeof(lin_pActionData) : 0;
    params->_ret = ((IVRInput*)params->linux_side)->GetSkeletalActionData((vr::VRActionHandle_t)params->action, params->pActionData ? &lin_pActionData : nullptr, lin_unActionDataSize);
    if (params->pActionData)
        struct_InputSkeletalActionData_t_1267_lin_to_win( &lin_pActionData, params->pActionData, params->unActionDataSize );
}

void cppIVRInput_IVRInput_010_GetDominantHand( struct cppIVRInput_IVRInput_010_GetDominantHand_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->GetDominantHand((vr::ETrackedControllerRole *)params->peDominantHand);
}

void cppIVRInput_IVRInput_010_SetDominantHand( struct cppIVRInput_IVRInput_010_SetDominantHand_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->SetDominantHand((vr::ETrackedControllerRole)params->eDominantHand);
}

void cppIVRInput_IVRInput_010_GetBoneCount( struct cppIVRInput_IVRInput_010_GetBoneCount_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->GetBoneCount((vr::VRActionHandle_t)params->action, (uint32_t *)params->pBoneCount);
}

void cppIVRInput_IVRInput_010_GetBoneHierarchy( struct cppIVRInput_IVRInput_010_GetBoneHierarchy_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->GetBoneHierarchy((vr::VRActionHandle_t)params->action, (vr::BoneIndex_t *)params->pParentIndices, (uint32_t)params->unIndexArayCount);
}

void cppIVRInput_IVRInput_010_GetBoneName( struct cppIVRInput_IVRInput_010_GetBoneName_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->GetBoneName((vr::VRActionHandle_t)params->action, (vr::BoneIndex_t)params->nBoneIndex, (char *)params->pchBoneName, (uint32_t)params->unNameBufferSize);
}

void cppIVRInput_IVRInput_010_GetSkeletalReferenceTransforms( struct cppIVRInput_IVRInput_010_GetSkeletalReferenceTransforms_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->GetSkeletalReferenceTransforms((vr::VRActionHandle_t)params->action, (vr::EVRSkeletalTransformSpace)params->eTransformSpace, (vr::EVRSkeletalReferencePose)params->eReferencePose, (vr::VRBoneTransform_t *)params->pTransformArray, (uint32_t)params->unTransformArrayCount);
}

void cppIVRInput_IVRInput_010_GetSkeletalTrackingLevel( struct cppIVRInput_IVRInput_010_GetSkeletalTrackingLevel_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->GetSkeletalTrackingLevel((vr::VRActionHandle_t)params->action, (vr::EVRSkeletalTrackingLevel *)params->pSkeletalTrackingLevel);
}

void cppIVRInput_IVRInput_010_GetSkeletalBoneData( struct cppIVRInput_IVRInput_010_GetSkeletalBoneData_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->GetSkeletalBoneData((vr::VRActionHandle_t)params->action, (vr::EVRSkeletalTransformSpace)params->eTransformSpace, (vr::EVRSkeletalMotionRange)params->eMotionRange, (vr::VRBoneTransform_t *)params->pTransformArray, (uint32_t)params->unTransformArrayCount);
}

void cppIVRInput_IVRInput_010_GetSkeletalSummaryData( struct cppIVRInput_IVRInput_010_GetSkeletalSummaryData_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->GetSkeletalSummaryData((vr::VRActionHandle_t)params->action, (vr::EVRSummaryType)params->eSummaryType, (vr::VRSkeletalSummaryData_t *)params->pSkeletalSummaryData);
}

void cppIVRInput_IVRInput_010_GetSkeletalBoneDataCompressed( struct cppIVRInput_IVRInput_010_GetSkeletalBoneDataCompressed_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->GetSkeletalBoneDataCompressed((vr::VRActionHandle_t)params->action, (vr::EVRSkeletalMotionRange)params->eMotionRange, (void *)params->pvCompressedData, (uint32_t)params->unCompressedSize, (uint32_t *)params->punRequiredCompressedSize);
}

void cppIVRInput_IVRInput_010_DecompressSkeletalBoneData( struct cppIVRInput_IVRInput_010_DecompressSkeletalBoneData_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->DecompressSkeletalBoneData((const void *)params->pvCompressedBuffer, (uint32_t)params->unCompressedBufferSize, (vr::EVRSkeletalTransformSpace)params->eTransformSpace, (vr::VRBoneTransform_t *)params->pTransformArray, (uint32_t)params->unTransformArrayCount);
}

void cppIVRInput_IVRInput_010_TriggerHapticVibrationAction( struct cppIVRInput_IVRInput_010_TriggerHapticVibrationAction_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->TriggerHapticVibrationAction((vr::VRActionHandle_t)params->action, (float)params->fStartSecondsFromNow, (float)params->fDurationSeconds, (float)params->fFrequency, (float)params->fAmplitude, (vr::VRInputValueHandle_t)params->ulRestrictToDevice);
}

void cppIVRInput_IVRInput_010_GetActionOrigins( struct cppIVRInput_IVRInput_010_GetActionOrigins_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->GetActionOrigins((vr::VRActionSetHandle_t)params->actionSetHandle, (vr::VRActionHandle_t)params->digitalActionHandle, (vr::VRInputValueHandle_t *)params->originsOut, (uint32_t)params->originOutCount);
}

void cppIVRInput_IVRInput_010_GetOriginLocalizedName( struct cppIVRInput_IVRInput_010_GetOriginLocalizedName_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->GetOriginLocalizedName((vr::VRInputValueHandle_t)params->origin, (char *)params->pchNameArray, (uint32_t)params->unNameArraySize, (int32_t)params->unStringSectionsToInclude);
}

void cppIVRInput_IVRInput_010_GetOriginTrackedDeviceInfo( struct cppIVRInput_IVRInput_010_GetOriginTrackedDeviceInfo_params *params )
{
    uint32_t lin_unOriginInfoSize = std::min( params->unOriginInfoSize, (uint32_t)sizeof(vr::InputOriginInfo_t) );
    params->_ret = ((IVRInput*)params->linux_side)->GetOriginTrackedDeviceInfo((vr::VRInputValueHandle_t)params->origin, (vr::InputOriginInfo_t *)params->pOriginInfo, lin_unOriginInfoSize);
}

void cppIVRInput_IVRInput_010_GetActionBindingInfo( struct cppIVRInput_IVRInput_010_GetActionBindingInfo_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->GetActionBindingInfo((vr::VRActionHandle_t)params->action, (vr::InputBindingInfo_t *)params->pOriginInfo, (uint32_t)params->unBindingInfoSize, (uint32_t)params->unBindingInfoCount, (uint32_t *)params->punReturnedBindingInfoCount);
}

void cppIVRInput_IVRInput_010_ShowActionOrigins( struct cppIVRInput_IVRInput_010_ShowActionOrigins_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->ShowActionOrigins((vr::VRActionSetHandle_t)params->actionSetHandle, (vr::VRActionHandle_t)params->ulActionHandle);
}

void cppIVRInput_IVRInput_010_ShowBindingsForActionSet( struct cppIVRInput_IVRInput_010_ShowBindingsForActionSet_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->ShowBindingsForActionSet((vr::VRActiveActionSet_t *)params->pSets, (uint32_t)params->unSizeOfVRSelectedActionSet_t, (uint32_t)params->unSetCount, (vr::VRInputValueHandle_t)params->originToHighlight);
}

void cppIVRInput_IVRInput_010_GetComponentStateForBinding( struct cppIVRInput_IVRInput_010_GetComponentStateForBinding_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->GetComponentStateForBinding((const char *)params->pchRenderModelName, (const char *)params->pchComponentName, (const vr::InputBindingInfo_t *)params->pOriginInfo, (uint32_t)params->unBindingInfoSize, (uint32_t)params->unBindingInfoCount, (vr::RenderModel_ComponentState_t *)params->pComponentState);
}

void cppIVRInput_IVRInput_010_IsUsingLegacyInput( struct cppIVRInput_IVRInput_010_IsUsingLegacyInput_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->IsUsingLegacyInput();
}

void cppIVRInput_IVRInput_010_OpenBindingUI( struct cppIVRInput_IVRInput_010_OpenBindingUI_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->OpenBindingUI((const char *)params->pchAppKey, (vr::VRActionSetHandle_t)params->ulActionSetHandle, (vr::VRInputValueHandle_t)params->ulDeviceHandle, (bool)params->bShowOnDesktop);
}

void cppIVRInput_IVRInput_010_GetBindingVariant( struct cppIVRInput_IVRInput_010_GetBindingVariant_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->GetBindingVariant((vr::VRInputValueHandle_t)params->ulDevicePath, (char *)params->pchVariantArray, (uint32_t)params->unVariantArraySize);
}

#ifdef __cplusplus
}
#endif
