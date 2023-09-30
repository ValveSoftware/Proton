/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRInput_IVRInput_007.h"
void cppIVRInput_IVRInput_007_SetActionManifestPath( struct cppIVRInput_IVRInput_007_SetActionManifestPath_params *params )
{
    struct u_IVRInput_IVRInput_007 *iface = (struct u_IVRInput_IVRInput_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetActionManifestPath( params->pchActionManifestPath );
}

void cppIVRInput_IVRInput_007_GetActionSetHandle( struct cppIVRInput_IVRInput_007_GetActionSetHandle_params *params )
{
    struct u_IVRInput_IVRInput_007 *iface = (struct u_IVRInput_IVRInput_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetActionSetHandle( params->pchActionSetName, params->pHandle );
}

void cppIVRInput_IVRInput_007_GetActionHandle( struct cppIVRInput_IVRInput_007_GetActionHandle_params *params )
{
    struct u_IVRInput_IVRInput_007 *iface = (struct u_IVRInput_IVRInput_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetActionHandle( params->pchActionName, params->pHandle );
}

void cppIVRInput_IVRInput_007_GetInputSourceHandle( struct cppIVRInput_IVRInput_007_GetInputSourceHandle_params *params )
{
    struct u_IVRInput_IVRInput_007 *iface = (struct u_IVRInput_IVRInput_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetInputSourceHandle( params->pchInputSourcePath, params->pHandle );
}

void cppIVRInput_IVRInput_007_UpdateActionState( struct cppIVRInput_IVRInput_007_UpdateActionState_params *params )
{
    struct u_IVRInput_IVRInput_007 *iface = (struct u_IVRInput_IVRInput_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->UpdateActionState( params->pSets, params->unSizeOfVRSelectedActionSet_t, params->unSetCount );
}

void cppIVRInput_IVRInput_007_GetDigitalActionData( struct cppIVRInput_IVRInput_007_GetDigitalActionData_params *params )
{
    struct u_IVRInput_IVRInput_007 *iface = (struct u_IVRInput_IVRInput_007 *)params->linux_side;
    u_InputDigitalActionData_t u_pActionData;
    if (params->pActionData) u_pActionData = *params->pActionData;
    uint32_t u_unActionDataSize = params->unActionDataSize ? sizeof(u_pActionData) : 0;
    params->_ret = (uint32_t)iface->GetDigitalActionData( params->action, params->pActionData ? &u_pActionData : nullptr, u_unActionDataSize, params->ulRestrictToDevice );
    if (params->pActionData) *params->pActionData = u_pActionData;
}

void cppIVRInput_IVRInput_007_GetAnalogActionData( struct cppIVRInput_IVRInput_007_GetAnalogActionData_params *params )
{
    struct u_IVRInput_IVRInput_007 *iface = (struct u_IVRInput_IVRInput_007 *)params->linux_side;
    u_InputAnalogActionData_t u_pActionData;
    if (params->pActionData) u_pActionData = *params->pActionData;
    uint32_t u_unActionDataSize = params->unActionDataSize ? sizeof(u_pActionData) : 0;
    params->_ret = (uint32_t)iface->GetAnalogActionData( params->action, params->pActionData ? &u_pActionData : nullptr, u_unActionDataSize, params->ulRestrictToDevice );
    if (params->pActionData) *params->pActionData = u_pActionData;
}

void cppIVRInput_IVRInput_007_GetPoseActionDataRelativeToNow( struct cppIVRInput_IVRInput_007_GetPoseActionDataRelativeToNow_params *params )
{
    struct u_IVRInput_IVRInput_007 *iface = (struct u_IVRInput_IVRInput_007 *)params->linux_side;
    u_InputPoseActionData_t u_pActionData;
    if (params->pActionData) u_pActionData = *params->pActionData;
    uint32_t u_unActionDataSize = params->unActionDataSize ? sizeof(u_pActionData) : 0;
    params->_ret = (uint32_t)iface->GetPoseActionDataRelativeToNow( params->action, params->eOrigin, params->fPredictedSecondsFromNow, params->pActionData ? &u_pActionData : nullptr, u_unActionDataSize, params->ulRestrictToDevice );
    if (params->pActionData) *params->pActionData = u_pActionData;
}

void cppIVRInput_IVRInput_007_GetPoseActionDataForNextFrame( struct cppIVRInput_IVRInput_007_GetPoseActionDataForNextFrame_params *params )
{
    struct u_IVRInput_IVRInput_007 *iface = (struct u_IVRInput_IVRInput_007 *)params->linux_side;
    u_InputPoseActionData_t u_pActionData;
    if (params->pActionData) u_pActionData = *params->pActionData;
    uint32_t u_unActionDataSize = params->unActionDataSize ? sizeof(u_pActionData) : 0;
    params->_ret = (uint32_t)iface->GetPoseActionDataForNextFrame( params->action, params->eOrigin, params->pActionData ? &u_pActionData : nullptr, u_unActionDataSize, params->ulRestrictToDevice );
    if (params->pActionData) *params->pActionData = u_pActionData;
}

void cppIVRInput_IVRInput_007_GetSkeletalActionData( struct cppIVRInput_IVRInput_007_GetSkeletalActionData_params *params )
{
    struct u_IVRInput_IVRInput_007 *iface = (struct u_IVRInput_IVRInput_007 *)params->linux_side;
    u_InputSkeletalActionData_t_113b u_pActionData;
    if (params->pActionData) u_pActionData = *params->pActionData;
    uint32_t u_unActionDataSize = params->unActionDataSize ? sizeof(u_pActionData) : 0;
    params->_ret = (uint32_t)iface->GetSkeletalActionData( params->action, params->pActionData ? &u_pActionData : nullptr, u_unActionDataSize );
    if (params->pActionData) *params->pActionData = u_pActionData;
}

void cppIVRInput_IVRInput_007_GetBoneCount( struct cppIVRInput_IVRInput_007_GetBoneCount_params *params )
{
    struct u_IVRInput_IVRInput_007 *iface = (struct u_IVRInput_IVRInput_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetBoneCount( params->action, params->pBoneCount );
}

void cppIVRInput_IVRInput_007_GetBoneHierarchy( struct cppIVRInput_IVRInput_007_GetBoneHierarchy_params *params )
{
    struct u_IVRInput_IVRInput_007 *iface = (struct u_IVRInput_IVRInput_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetBoneHierarchy( params->action, params->pParentIndices, params->unIndexArayCount );
}

void cppIVRInput_IVRInput_007_GetBoneName( struct cppIVRInput_IVRInput_007_GetBoneName_params *params )
{
    struct u_IVRInput_IVRInput_007 *iface = (struct u_IVRInput_IVRInput_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetBoneName( params->action, params->nBoneIndex, params->pchBoneName, params->unNameBufferSize );
}

void cppIVRInput_IVRInput_007_GetSkeletalReferenceTransforms( struct cppIVRInput_IVRInput_007_GetSkeletalReferenceTransforms_params *params )
{
    struct u_IVRInput_IVRInput_007 *iface = (struct u_IVRInput_IVRInput_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetSkeletalReferenceTransforms( params->action, params->eTransformSpace, params->eReferencePose, params->pTransformArray, params->unTransformArrayCount );
}

void cppIVRInput_IVRInput_007_GetSkeletalTrackingLevel( struct cppIVRInput_IVRInput_007_GetSkeletalTrackingLevel_params *params )
{
    struct u_IVRInput_IVRInput_007 *iface = (struct u_IVRInput_IVRInput_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetSkeletalTrackingLevel( params->action, params->pSkeletalTrackingLevel );
}

void cppIVRInput_IVRInput_007_GetSkeletalBoneData( struct cppIVRInput_IVRInput_007_GetSkeletalBoneData_params *params )
{
    struct u_IVRInput_IVRInput_007 *iface = (struct u_IVRInput_IVRInput_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetSkeletalBoneData( params->action, params->eTransformSpace, params->eMotionRange, params->pTransformArray, params->unTransformArrayCount );
}

void cppIVRInput_IVRInput_007_GetSkeletalSummaryData( struct cppIVRInput_IVRInput_007_GetSkeletalSummaryData_params *params )
{
    struct u_IVRInput_IVRInput_007 *iface = (struct u_IVRInput_IVRInput_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetSkeletalSummaryData( params->action, params->eSummaryType, params->pSkeletalSummaryData );
}

void cppIVRInput_IVRInput_007_GetSkeletalBoneDataCompressed( struct cppIVRInput_IVRInput_007_GetSkeletalBoneDataCompressed_params *params )
{
    struct u_IVRInput_IVRInput_007 *iface = (struct u_IVRInput_IVRInput_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetSkeletalBoneDataCompressed( params->action, params->eMotionRange, params->pvCompressedData, params->unCompressedSize, params->punRequiredCompressedSize );
}

void cppIVRInput_IVRInput_007_DecompressSkeletalBoneData( struct cppIVRInput_IVRInput_007_DecompressSkeletalBoneData_params *params )
{
    struct u_IVRInput_IVRInput_007 *iface = (struct u_IVRInput_IVRInput_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->DecompressSkeletalBoneData( params->pvCompressedBuffer, params->unCompressedBufferSize, params->eTransformSpace, params->pTransformArray, params->unTransformArrayCount );
}

void cppIVRInput_IVRInput_007_TriggerHapticVibrationAction( struct cppIVRInput_IVRInput_007_TriggerHapticVibrationAction_params *params )
{
    struct u_IVRInput_IVRInput_007 *iface = (struct u_IVRInput_IVRInput_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->TriggerHapticVibrationAction( params->action, params->fStartSecondsFromNow, params->fDurationSeconds, params->fFrequency, params->fAmplitude, params->ulRestrictToDevice );
}

void cppIVRInput_IVRInput_007_GetActionOrigins( struct cppIVRInput_IVRInput_007_GetActionOrigins_params *params )
{
    struct u_IVRInput_IVRInput_007 *iface = (struct u_IVRInput_IVRInput_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetActionOrigins( params->actionSetHandle, params->digitalActionHandle, params->originsOut, params->originOutCount );
}

void cppIVRInput_IVRInput_007_GetOriginLocalizedName( struct cppIVRInput_IVRInput_007_GetOriginLocalizedName_params *params )
{
    struct u_IVRInput_IVRInput_007 *iface = (struct u_IVRInput_IVRInput_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOriginLocalizedName( params->origin, params->pchNameArray, params->unNameArraySize, params->unStringSectionsToInclude );
}

void cppIVRInput_IVRInput_007_GetOriginTrackedDeviceInfo( struct cppIVRInput_IVRInput_007_GetOriginTrackedDeviceInfo_params *params )
{
    struct u_IVRInput_IVRInput_007 *iface = (struct u_IVRInput_IVRInput_007 *)params->linux_side;
    u_InputOriginInfo_t u_pOriginInfo;
    if (params->pOriginInfo) u_pOriginInfo = *params->pOriginInfo;
    uint32_t u_unOriginInfoSize = params->unOriginInfoSize ? sizeof(u_pOriginInfo) : 0;
    params->_ret = (uint32_t)iface->GetOriginTrackedDeviceInfo( params->origin, params->pOriginInfo ? &u_pOriginInfo : nullptr, u_unOriginInfoSize );
    if (params->pOriginInfo) *params->pOriginInfo = u_pOriginInfo;
}

void cppIVRInput_IVRInput_007_GetActionBindingInfo( struct cppIVRInput_IVRInput_007_GetActionBindingInfo_params *params )
{
    struct u_IVRInput_IVRInput_007 *iface = (struct u_IVRInput_IVRInput_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetActionBindingInfo( params->action, params->pOriginInfo, params->unBindingInfoSize, params->unBindingInfoCount, params->punReturnedBindingInfoCount );
}

void cppIVRInput_IVRInput_007_ShowActionOrigins( struct cppIVRInput_IVRInput_007_ShowActionOrigins_params *params )
{
    struct u_IVRInput_IVRInput_007 *iface = (struct u_IVRInput_IVRInput_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowActionOrigins( params->actionSetHandle, params->ulActionHandle );
}

void cppIVRInput_IVRInput_007_ShowBindingsForActionSet( struct cppIVRInput_IVRInput_007_ShowBindingsForActionSet_params *params )
{
    struct u_IVRInput_IVRInput_007 *iface = (struct u_IVRInput_IVRInput_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowBindingsForActionSet( params->pSets, params->unSizeOfVRSelectedActionSet_t, params->unSetCount, params->originToHighlight );
}

void cppIVRInput_IVRInput_007_IsUsingLegacyInput( struct cppIVRInput_IVRInput_007_IsUsingLegacyInput_params *params )
{
    struct u_IVRInput_IVRInput_007 *iface = (struct u_IVRInput_IVRInput_007 *)params->linux_side;
    params->_ret = (bool)iface->IsUsingLegacyInput(  );
}

void cppIVRInput_IVRInput_007_OpenBindingUI( struct cppIVRInput_IVRInput_007_OpenBindingUI_params *params )
{
    struct u_IVRInput_IVRInput_007 *iface = (struct u_IVRInput_IVRInput_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->OpenBindingUI( params->pchAppKey, params->ulActionSetHandle, params->ulDeviceHandle, params->bShowOnDesktop );
}

