/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRInput_IVRInput_010.h"
void cppIVRInput_IVRInput_010_SetActionManifestPath( struct cppIVRInput_IVRInput_010_SetActionManifestPath_params *params )
{
    struct u_IVRInput_IVRInput_010 *iface = (struct u_IVRInput_IVRInput_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetActionManifestPath( params->pchActionManifestPath );
}

void cppIVRInput_IVRInput_010_GetActionSetHandle( struct cppIVRInput_IVRInput_010_GetActionSetHandle_params *params )
{
    struct u_IVRInput_IVRInput_010 *iface = (struct u_IVRInput_IVRInput_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetActionSetHandle( params->pchActionSetName, params->pHandle );
}

void cppIVRInput_IVRInput_010_GetActionHandle( struct cppIVRInput_IVRInput_010_GetActionHandle_params *params )
{
    struct u_IVRInput_IVRInput_010 *iface = (struct u_IVRInput_IVRInput_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetActionHandle( params->pchActionName, params->pHandle );
}

void cppIVRInput_IVRInput_010_GetInputSourceHandle( struct cppIVRInput_IVRInput_010_GetInputSourceHandle_params *params )
{
    struct u_IVRInput_IVRInput_010 *iface = (struct u_IVRInput_IVRInput_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetInputSourceHandle( params->pchInputSourcePath, params->pHandle );
}

void cppIVRInput_IVRInput_010_UpdateActionState( struct cppIVRInput_IVRInput_010_UpdateActionState_params *params )
{
    struct u_IVRInput_IVRInput_010 *iface = (struct u_IVRInput_IVRInput_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->UpdateActionState( params->pSets, params->unSizeOfVRSelectedActionSet_t, params->unSetCount );
}

void cppIVRInput_IVRInput_010_GetDigitalActionData( struct cppIVRInput_IVRInput_010_GetDigitalActionData_params *params )
{
    struct u_IVRInput_IVRInput_010 *iface = (struct u_IVRInput_IVRInput_010 *)params->linux_side;
    u_InputDigitalActionData_t u_pActionData;
    if (params->pActionData) u_pActionData = *params->pActionData;
    uint32_t u_unActionDataSize = params->unActionDataSize ? sizeof(u_pActionData) : 0;
    params->_ret = (uint32_t)iface->GetDigitalActionData( params->action, params->pActionData ? &u_pActionData : nullptr, u_unActionDataSize, params->ulRestrictToDevice );
    if (params->pActionData) *params->pActionData = u_pActionData;
}

void cppIVRInput_IVRInput_010_GetAnalogActionData( struct cppIVRInput_IVRInput_010_GetAnalogActionData_params *params )
{
    struct u_IVRInput_IVRInput_010 *iface = (struct u_IVRInput_IVRInput_010 *)params->linux_side;
    u_InputAnalogActionData_t u_pActionData;
    if (params->pActionData) u_pActionData = *params->pActionData;
    uint32_t u_unActionDataSize = params->unActionDataSize ? sizeof(u_pActionData) : 0;
    params->_ret = (uint32_t)iface->GetAnalogActionData( params->action, params->pActionData ? &u_pActionData : nullptr, u_unActionDataSize, params->ulRestrictToDevice );
    if (params->pActionData) *params->pActionData = u_pActionData;
}

void cppIVRInput_IVRInput_010_GetPoseActionDataRelativeToNow( struct cppIVRInput_IVRInput_010_GetPoseActionDataRelativeToNow_params *params )
{
    struct u_IVRInput_IVRInput_010 *iface = (struct u_IVRInput_IVRInput_010 *)params->linux_side;
    u_InputPoseActionData_t u_pActionData;
    if (params->pActionData) u_pActionData = *params->pActionData;
    uint32_t u_unActionDataSize = params->unActionDataSize ? sizeof(u_pActionData) : 0;
    params->_ret = (uint32_t)iface->GetPoseActionDataRelativeToNow( params->action, params->eOrigin, params->fPredictedSecondsFromNow, params->pActionData ? &u_pActionData : nullptr, u_unActionDataSize, params->ulRestrictToDevice );
    if (params->pActionData) *params->pActionData = u_pActionData;
}

void cppIVRInput_IVRInput_010_GetPoseActionDataForNextFrame( struct cppIVRInput_IVRInput_010_GetPoseActionDataForNextFrame_params *params )
{
    struct u_IVRInput_IVRInput_010 *iface = (struct u_IVRInput_IVRInput_010 *)params->linux_side;
    u_InputPoseActionData_t u_pActionData;
    if (params->pActionData) u_pActionData = *params->pActionData;
    uint32_t u_unActionDataSize = params->unActionDataSize ? sizeof(u_pActionData) : 0;
    params->_ret = (uint32_t)iface->GetPoseActionDataForNextFrame( params->action, params->eOrigin, params->pActionData ? &u_pActionData : nullptr, u_unActionDataSize, params->ulRestrictToDevice );
    if (params->pActionData) *params->pActionData = u_pActionData;
}

void cppIVRInput_IVRInput_010_GetSkeletalActionData( struct cppIVRInput_IVRInput_010_GetSkeletalActionData_params *params )
{
    struct u_IVRInput_IVRInput_010 *iface = (struct u_IVRInput_IVRInput_010 *)params->linux_side;
    u_InputSkeletalActionData_t_113b u_pActionData;
    if (params->pActionData) u_pActionData = *params->pActionData;
    uint32_t u_unActionDataSize = params->unActionDataSize ? sizeof(u_pActionData) : 0;
    params->_ret = (uint32_t)iface->GetSkeletalActionData( params->action, params->pActionData ? &u_pActionData : nullptr, u_unActionDataSize );
    if (params->pActionData) *params->pActionData = u_pActionData;
}

void cppIVRInput_IVRInput_010_GetDominantHand( struct cppIVRInput_IVRInput_010_GetDominantHand_params *params )
{
    struct u_IVRInput_IVRInput_010 *iface = (struct u_IVRInput_IVRInput_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetDominantHand( params->peDominantHand );
}

void cppIVRInput_IVRInput_010_SetDominantHand( struct cppIVRInput_IVRInput_010_SetDominantHand_params *params )
{
    struct u_IVRInput_IVRInput_010 *iface = (struct u_IVRInput_IVRInput_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetDominantHand( params->eDominantHand );
}

void cppIVRInput_IVRInput_010_GetBoneCount( struct cppIVRInput_IVRInput_010_GetBoneCount_params *params )
{
    struct u_IVRInput_IVRInput_010 *iface = (struct u_IVRInput_IVRInput_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetBoneCount( params->action, params->pBoneCount );
}

void cppIVRInput_IVRInput_010_GetBoneHierarchy( struct cppIVRInput_IVRInput_010_GetBoneHierarchy_params *params )
{
    struct u_IVRInput_IVRInput_010 *iface = (struct u_IVRInput_IVRInput_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetBoneHierarchy( params->action, params->pParentIndices, params->unIndexArayCount );
}

void cppIVRInput_IVRInput_010_GetBoneName( struct cppIVRInput_IVRInput_010_GetBoneName_params *params )
{
    struct u_IVRInput_IVRInput_010 *iface = (struct u_IVRInput_IVRInput_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetBoneName( params->action, params->nBoneIndex, params->pchBoneName, params->unNameBufferSize );
}

void cppIVRInput_IVRInput_010_GetSkeletalReferenceTransforms( struct cppIVRInput_IVRInput_010_GetSkeletalReferenceTransforms_params *params )
{
    struct u_IVRInput_IVRInput_010 *iface = (struct u_IVRInput_IVRInput_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetSkeletalReferenceTransforms( params->action, params->eTransformSpace, params->eReferencePose, params->pTransformArray, params->unTransformArrayCount );
}

void cppIVRInput_IVRInput_010_GetSkeletalTrackingLevel( struct cppIVRInput_IVRInput_010_GetSkeletalTrackingLevel_params *params )
{
    struct u_IVRInput_IVRInput_010 *iface = (struct u_IVRInput_IVRInput_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetSkeletalTrackingLevel( params->action, params->pSkeletalTrackingLevel );
}

void cppIVRInput_IVRInput_010_GetSkeletalBoneData( struct cppIVRInput_IVRInput_010_GetSkeletalBoneData_params *params )
{
    struct u_IVRInput_IVRInput_010 *iface = (struct u_IVRInput_IVRInput_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetSkeletalBoneData( params->action, params->eTransformSpace, params->eMotionRange, params->pTransformArray, params->unTransformArrayCount );
}

void cppIVRInput_IVRInput_010_GetSkeletalSummaryData( struct cppIVRInput_IVRInput_010_GetSkeletalSummaryData_params *params )
{
    struct u_IVRInput_IVRInput_010 *iface = (struct u_IVRInput_IVRInput_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetSkeletalSummaryData( params->action, params->eSummaryType, params->pSkeletalSummaryData );
}

void cppIVRInput_IVRInput_010_GetSkeletalBoneDataCompressed( struct cppIVRInput_IVRInput_010_GetSkeletalBoneDataCompressed_params *params )
{
    struct u_IVRInput_IVRInput_010 *iface = (struct u_IVRInput_IVRInput_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetSkeletalBoneDataCompressed( params->action, params->eMotionRange, params->pvCompressedData, params->unCompressedSize, params->punRequiredCompressedSize );
}

void cppIVRInput_IVRInput_010_DecompressSkeletalBoneData( struct cppIVRInput_IVRInput_010_DecompressSkeletalBoneData_params *params )
{
    struct u_IVRInput_IVRInput_010 *iface = (struct u_IVRInput_IVRInput_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->DecompressSkeletalBoneData( params->pvCompressedBuffer, params->unCompressedBufferSize, params->eTransformSpace, params->pTransformArray, params->unTransformArrayCount );
}

void cppIVRInput_IVRInput_010_TriggerHapticVibrationAction( struct cppIVRInput_IVRInput_010_TriggerHapticVibrationAction_params *params )
{
    struct u_IVRInput_IVRInput_010 *iface = (struct u_IVRInput_IVRInput_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->TriggerHapticVibrationAction( params->action, params->fStartSecondsFromNow, params->fDurationSeconds, params->fFrequency, params->fAmplitude, params->ulRestrictToDevice );
}

void cppIVRInput_IVRInput_010_GetActionOrigins( struct cppIVRInput_IVRInput_010_GetActionOrigins_params *params )
{
    struct u_IVRInput_IVRInput_010 *iface = (struct u_IVRInput_IVRInput_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetActionOrigins( params->actionSetHandle, params->digitalActionHandle, params->originsOut, params->originOutCount );
}

void cppIVRInput_IVRInput_010_GetOriginLocalizedName( struct cppIVRInput_IVRInput_010_GetOriginLocalizedName_params *params )
{
    struct u_IVRInput_IVRInput_010 *iface = (struct u_IVRInput_IVRInput_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOriginLocalizedName( params->origin, params->pchNameArray, params->unNameArraySize, params->unStringSectionsToInclude );
}

void cppIVRInput_IVRInput_010_GetOriginTrackedDeviceInfo( struct cppIVRInput_IVRInput_010_GetOriginTrackedDeviceInfo_params *params )
{
    struct u_IVRInput_IVRInput_010 *iface = (struct u_IVRInput_IVRInput_010 *)params->linux_side;
    u_InputOriginInfo_t u_pOriginInfo;
    if (params->pOriginInfo) u_pOriginInfo = *params->pOriginInfo;
    uint32_t u_unOriginInfoSize = params->unOriginInfoSize ? sizeof(u_pOriginInfo) : 0;
    params->_ret = (uint32_t)iface->GetOriginTrackedDeviceInfo( params->origin, params->pOriginInfo ? &u_pOriginInfo : nullptr, u_unOriginInfoSize );
    if (params->pOriginInfo) *params->pOriginInfo = u_pOriginInfo;
}

void cppIVRInput_IVRInput_010_GetActionBindingInfo( struct cppIVRInput_IVRInput_010_GetActionBindingInfo_params *params )
{
    struct u_IVRInput_IVRInput_010 *iface = (struct u_IVRInput_IVRInput_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetActionBindingInfo( params->action, params->pOriginInfo, params->unBindingInfoSize, params->unBindingInfoCount, params->punReturnedBindingInfoCount );
}

void cppIVRInput_IVRInput_010_ShowActionOrigins( struct cppIVRInput_IVRInput_010_ShowActionOrigins_params *params )
{
    struct u_IVRInput_IVRInput_010 *iface = (struct u_IVRInput_IVRInput_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowActionOrigins( params->actionSetHandle, params->ulActionHandle );
}

void cppIVRInput_IVRInput_010_ShowBindingsForActionSet( struct cppIVRInput_IVRInput_010_ShowBindingsForActionSet_params *params )
{
    struct u_IVRInput_IVRInput_010 *iface = (struct u_IVRInput_IVRInput_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowBindingsForActionSet( params->pSets, params->unSizeOfVRSelectedActionSet_t, params->unSetCount, params->originToHighlight );
}

void cppIVRInput_IVRInput_010_GetComponentStateForBinding( struct cppIVRInput_IVRInput_010_GetComponentStateForBinding_params *params )
{
    struct u_IVRInput_IVRInput_010 *iface = (struct u_IVRInput_IVRInput_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetComponentStateForBinding( params->pchRenderModelName, params->pchComponentName, params->pOriginInfo, params->unBindingInfoSize, params->unBindingInfoCount, params->pComponentState );
}

void cppIVRInput_IVRInput_010_IsUsingLegacyInput( struct cppIVRInput_IVRInput_010_IsUsingLegacyInput_params *params )
{
    struct u_IVRInput_IVRInput_010 *iface = (struct u_IVRInput_IVRInput_010 *)params->linux_side;
    params->_ret = (bool)iface->IsUsingLegacyInput(  );
}

void cppIVRInput_IVRInput_010_OpenBindingUI( struct cppIVRInput_IVRInput_010_OpenBindingUI_params *params )
{
    struct u_IVRInput_IVRInput_010 *iface = (struct u_IVRInput_IVRInput_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->OpenBindingUI( params->pchAppKey, params->ulActionSetHandle, params->ulDeviceHandle, params->bShowOnDesktop );
}

void cppIVRInput_IVRInput_010_GetBindingVariant( struct cppIVRInput_IVRInput_010_GetBindingVariant_params *params )
{
    struct u_IVRInput_IVRInput_010 *iface = (struct u_IVRInput_IVRInput_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetBindingVariant( params->ulDevicePath, params->pchVariantArray, params->unVariantArraySize );
}

