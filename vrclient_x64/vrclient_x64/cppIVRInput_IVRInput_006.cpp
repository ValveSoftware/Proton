#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.4.18/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRInput_IVRInput_006.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVRInput_IVRInput_006_SetActionManifestPath( struct cppIVRInput_IVRInput_006_SetActionManifestPath_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->SetActionManifestPath((const char *)params->pchActionManifestPath);
}

void cppIVRInput_IVRInput_006_GetActionSetHandle( struct cppIVRInput_IVRInput_006_GetActionSetHandle_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->GetActionSetHandle((const char *)params->pchActionSetName, (vr::VRActionSetHandle_t *)params->pHandle);
}

void cppIVRInput_IVRInput_006_GetActionHandle( struct cppIVRInput_IVRInput_006_GetActionHandle_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->GetActionHandle((const char *)params->pchActionName, (vr::VRActionHandle_t *)params->pHandle);
}

void cppIVRInput_IVRInput_006_GetInputSourceHandle( struct cppIVRInput_IVRInput_006_GetInputSourceHandle_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->GetInputSourceHandle((const char *)params->pchInputSourcePath, (vr::VRInputValueHandle_t *)params->pHandle);
}

void cppIVRInput_IVRInput_006_UpdateActionState( struct cppIVRInput_IVRInput_006_UpdateActionState_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->UpdateActionState((vr::VRActiveActionSet_t *)params->pSets, (uint32_t)params->unSizeOfVRSelectedActionSet_t, (uint32_t)params->unSetCount);
}

void cppIVRInput_IVRInput_006_GetDigitalActionData( struct cppIVRInput_IVRInput_006_GetDigitalActionData_params *params )
{
    InputDigitalActionData_t lin_pActionData;
    if (params->pActionData)
        struct_InputDigitalActionData_t_1418_win_to_lin( params->pActionData, &lin_pActionData );
    uint32_t lin_unActionDataSize = params->unActionDataSize ? sizeof(lin_pActionData) : 0;
    params->_ret = ((IVRInput*)params->linux_side)->GetDigitalActionData((vr::VRActionHandle_t)params->action, params->pActionData ? &lin_pActionData : nullptr, lin_unActionDataSize, (vr::VRInputValueHandle_t)params->ulRestrictToDevice);
    if (params->pActionData)
        struct_InputDigitalActionData_t_1418_lin_to_win( &lin_pActionData, params->pActionData, params->unActionDataSize );
}

void cppIVRInput_IVRInput_006_GetAnalogActionData( struct cppIVRInput_IVRInput_006_GetAnalogActionData_params *params )
{
    InputAnalogActionData_t lin_pActionData;
    if (params->pActionData)
        struct_InputAnalogActionData_t_1418_win_to_lin( params->pActionData, &lin_pActionData );
    uint32_t lin_unActionDataSize = params->unActionDataSize ? sizeof(lin_pActionData) : 0;
    params->_ret = ((IVRInput*)params->linux_side)->GetAnalogActionData((vr::VRActionHandle_t)params->action, params->pActionData ? &lin_pActionData : nullptr, lin_unActionDataSize, (vr::VRInputValueHandle_t)params->ulRestrictToDevice);
    if (params->pActionData)
        struct_InputAnalogActionData_t_1418_lin_to_win( &lin_pActionData, params->pActionData, params->unActionDataSize );
}

void cppIVRInput_IVRInput_006_GetPoseActionDataRelativeToNow( struct cppIVRInput_IVRInput_006_GetPoseActionDataRelativeToNow_params *params )
{
    InputPoseActionData_t lin_pActionData;
    if (params->pActionData)
        struct_InputPoseActionData_t_1418_win_to_lin( params->pActionData, &lin_pActionData );
    uint32_t lin_unActionDataSize = params->unActionDataSize ? sizeof(lin_pActionData) : 0;
    params->_ret = ((IVRInput*)params->linux_side)->GetPoseActionDataRelativeToNow((vr::VRActionHandle_t)params->action, (vr::ETrackingUniverseOrigin)params->eOrigin, (float)params->fPredictedSecondsFromNow, params->pActionData ? &lin_pActionData : nullptr, lin_unActionDataSize, (vr::VRInputValueHandle_t)params->ulRestrictToDevice);
    if (params->pActionData)
        struct_InputPoseActionData_t_1418_lin_to_win( &lin_pActionData, params->pActionData, params->unActionDataSize );
}

void cppIVRInput_IVRInput_006_GetPoseActionDataForNextFrame( struct cppIVRInput_IVRInput_006_GetPoseActionDataForNextFrame_params *params )
{
    InputPoseActionData_t lin_pActionData;
    if (params->pActionData)
        struct_InputPoseActionData_t_1418_win_to_lin( params->pActionData, &lin_pActionData );
    uint32_t lin_unActionDataSize = params->unActionDataSize ? sizeof(lin_pActionData) : 0;
    params->_ret = ((IVRInput*)params->linux_side)->GetPoseActionDataForNextFrame((vr::VRActionHandle_t)params->action, (vr::ETrackingUniverseOrigin)params->eOrigin, params->pActionData ? &lin_pActionData : nullptr, lin_unActionDataSize, (vr::VRInputValueHandle_t)params->ulRestrictToDevice);
    if (params->pActionData)
        struct_InputPoseActionData_t_1418_lin_to_win( &lin_pActionData, params->pActionData, params->unActionDataSize );
}

void cppIVRInput_IVRInput_006_GetSkeletalActionData( struct cppIVRInput_IVRInput_006_GetSkeletalActionData_params *params )
{
    InputSkeletalActionData_t lin_pActionData;
    if (params->pActionData)
        struct_InputSkeletalActionData_t_1418_win_to_lin( params->pActionData, &lin_pActionData );
    uint32_t lin_unActionDataSize = params->unActionDataSize ? sizeof(lin_pActionData) : 0;
    params->_ret = ((IVRInput*)params->linux_side)->GetSkeletalActionData((vr::VRActionHandle_t)params->action, params->pActionData ? &lin_pActionData : nullptr, lin_unActionDataSize);
    if (params->pActionData)
        struct_InputSkeletalActionData_t_1418_lin_to_win( &lin_pActionData, params->pActionData, params->unActionDataSize );
}

void cppIVRInput_IVRInput_006_GetBoneCount( struct cppIVRInput_IVRInput_006_GetBoneCount_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->GetBoneCount((vr::VRActionHandle_t)params->action, (uint32_t *)params->pBoneCount);
}

void cppIVRInput_IVRInput_006_GetBoneHierarchy( struct cppIVRInput_IVRInput_006_GetBoneHierarchy_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->GetBoneHierarchy((vr::VRActionHandle_t)params->action, (vr::BoneIndex_t *)params->pParentIndices, (uint32_t)params->unIndexArayCount);
}

void cppIVRInput_IVRInput_006_GetBoneName( struct cppIVRInput_IVRInput_006_GetBoneName_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->GetBoneName((vr::VRActionHandle_t)params->action, (vr::BoneIndex_t)params->nBoneIndex, (char *)params->pchBoneName, (uint32_t)params->unNameBufferSize);
}

void cppIVRInput_IVRInput_006_GetSkeletalReferenceTransforms( struct cppIVRInput_IVRInput_006_GetSkeletalReferenceTransforms_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->GetSkeletalReferenceTransforms((vr::VRActionHandle_t)params->action, (vr::EVRSkeletalTransformSpace)params->eTransformSpace, (vr::EVRSkeletalReferencePose)params->eReferencePose, (vr::VRBoneTransform_t *)params->pTransformArray, (uint32_t)params->unTransformArrayCount);
}

void cppIVRInput_IVRInput_006_GetSkeletalTrackingLevel( struct cppIVRInput_IVRInput_006_GetSkeletalTrackingLevel_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->GetSkeletalTrackingLevel((vr::VRActionHandle_t)params->action, (vr::EVRSkeletalTrackingLevel *)params->pSkeletalTrackingLevel);
}

void cppIVRInput_IVRInput_006_GetSkeletalBoneData( struct cppIVRInput_IVRInput_006_GetSkeletalBoneData_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->GetSkeletalBoneData((vr::VRActionHandle_t)params->action, (vr::EVRSkeletalTransformSpace)params->eTransformSpace, (vr::EVRSkeletalMotionRange)params->eMotionRange, (vr::VRBoneTransform_t *)params->pTransformArray, (uint32_t)params->unTransformArrayCount);
}

void cppIVRInput_IVRInput_006_GetSkeletalSummaryData( struct cppIVRInput_IVRInput_006_GetSkeletalSummaryData_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->GetSkeletalSummaryData((vr::VRActionHandle_t)params->action, (vr::EVRSummaryType)params->eSummaryType, (vr::VRSkeletalSummaryData_t *)params->pSkeletalSummaryData);
}

void cppIVRInput_IVRInput_006_GetSkeletalBoneDataCompressed( struct cppIVRInput_IVRInput_006_GetSkeletalBoneDataCompressed_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->GetSkeletalBoneDataCompressed((vr::VRActionHandle_t)params->action, (vr::EVRSkeletalMotionRange)params->eMotionRange, (void *)params->pvCompressedData, (uint32_t)params->unCompressedSize, (uint32_t *)params->punRequiredCompressedSize);
}

void cppIVRInput_IVRInput_006_DecompressSkeletalBoneData( struct cppIVRInput_IVRInput_006_DecompressSkeletalBoneData_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->DecompressSkeletalBoneData((const void *)params->pvCompressedBuffer, (uint32_t)params->unCompressedBufferSize, (vr::EVRSkeletalTransformSpace)params->eTransformSpace, (vr::VRBoneTransform_t *)params->pTransformArray, (uint32_t)params->unTransformArrayCount);
}

void cppIVRInput_IVRInput_006_TriggerHapticVibrationAction( struct cppIVRInput_IVRInput_006_TriggerHapticVibrationAction_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->TriggerHapticVibrationAction((vr::VRActionHandle_t)params->action, (float)params->fStartSecondsFromNow, (float)params->fDurationSeconds, (float)params->fFrequency, (float)params->fAmplitude, (vr::VRInputValueHandle_t)params->ulRestrictToDevice);
}

void cppIVRInput_IVRInput_006_GetActionOrigins( struct cppIVRInput_IVRInput_006_GetActionOrigins_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->GetActionOrigins((vr::VRActionSetHandle_t)params->actionSetHandle, (vr::VRActionHandle_t)params->digitalActionHandle, (vr::VRInputValueHandle_t *)params->originsOut, (uint32_t)params->originOutCount);
}

void cppIVRInput_IVRInput_006_GetOriginLocalizedName( struct cppIVRInput_IVRInput_006_GetOriginLocalizedName_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->GetOriginLocalizedName((vr::VRInputValueHandle_t)params->origin, (char *)params->pchNameArray, (uint32_t)params->unNameArraySize, (int32_t)params->unStringSectionsToInclude);
}

void cppIVRInput_IVRInput_006_GetOriginTrackedDeviceInfo( struct cppIVRInput_IVRInput_006_GetOriginTrackedDeviceInfo_params *params )
{
    uint32_t lin_unOriginInfoSize = std::min( params->unOriginInfoSize, (uint32_t)sizeof(vr::InputOriginInfo_t) );
    params->_ret = ((IVRInput*)params->linux_side)->GetOriginTrackedDeviceInfo((vr::VRInputValueHandle_t)params->origin, (vr::InputOriginInfo_t *)params->pOriginInfo, lin_unOriginInfoSize);
}

void cppIVRInput_IVRInput_006_ShowActionOrigins( struct cppIVRInput_IVRInput_006_ShowActionOrigins_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->ShowActionOrigins((vr::VRActionSetHandle_t)params->actionSetHandle, (vr::VRActionHandle_t)params->ulActionHandle);
}

void cppIVRInput_IVRInput_006_ShowBindingsForActionSet( struct cppIVRInput_IVRInput_006_ShowBindingsForActionSet_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->ShowBindingsForActionSet((vr::VRActiveActionSet_t *)params->pSets, (uint32_t)params->unSizeOfVRSelectedActionSet_t, (uint32_t)params->unSetCount, (vr::VRInputValueHandle_t)params->originToHighlight);
}

void cppIVRInput_IVRInput_006_IsUsingLegacyInput( struct cppIVRInput_IVRInput_006_IsUsingLegacyInput_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->IsUsingLegacyInput();
}

#ifdef __cplusplus
}
#endif
