/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVRInput_IVRInput_005_SetActionManifestPath( void *args )
{
    struct IVRInput_IVRInput_005_SetActionManifestPath_params *params = (struct IVRInput_IVRInput_005_SetActionManifestPath_params *)args;
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    char *u_pchActionManifestPath = vrclient_dos_to_unix_path( params->pchActionManifestPath );
    params->_ret = iface->SetActionManifestPath( u_pchActionManifestPath );
    vrclient_free_path( u_pchActionManifestPath );
    return 0;
}

NTSTATUS IVRInput_IVRInput_005_GetActionSetHandle( void *args )
{
    struct IVRInput_IVRInput_005_GetActionSetHandle_params *params = (struct IVRInput_IVRInput_005_GetActionSetHandle_params *)args;
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    params->_ret = iface->GetActionSetHandle( params->pchActionSetName, params->pHandle );
    return 0;
}

NTSTATUS IVRInput_IVRInput_005_GetActionHandle( void *args )
{
    struct IVRInput_IVRInput_005_GetActionHandle_params *params = (struct IVRInput_IVRInput_005_GetActionHandle_params *)args;
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    params->_ret = iface->GetActionHandle( params->pchActionName, params->pHandle );
    return 0;
}

NTSTATUS IVRInput_IVRInput_005_GetInputSourceHandle( void *args )
{
    struct IVRInput_IVRInput_005_GetInputSourceHandle_params *params = (struct IVRInput_IVRInput_005_GetInputSourceHandle_params *)args;
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    params->_ret = iface->GetInputSourceHandle( params->pchInputSourcePath, params->pHandle );
    return 0;
}

NTSTATUS IVRInput_IVRInput_005_UpdateActionState( void *args )
{
    struct IVRInput_IVRInput_005_UpdateActionState_params *params = (struct IVRInput_IVRInput_005_UpdateActionState_params *)args;
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    params->_ret = iface->UpdateActionState( params->pSets, params->unSizeOfVRSelectedActionSet_t, params->unSetCount );
    return 0;
}

NTSTATUS IVRInput_IVRInput_005_GetDigitalActionData( void *args )
{
    struct IVRInput_IVRInput_005_GetDigitalActionData_params *params = (struct IVRInput_IVRInput_005_GetDigitalActionData_params *)args;
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    u_InputDigitalActionData_t u_pActionData;
    if (params->pActionData) u_pActionData = *params->pActionData;
    uint32_t u_unActionDataSize = params->unActionDataSize ? sizeof(u_pActionData) : 0;
    params->_ret = iface->GetDigitalActionData( params->action, params->pActionData ? &u_pActionData : nullptr, u_unActionDataSize, params->ulRestrictToDevice );
    if (params->pActionData) *params->pActionData = u_pActionData;
    return 0;
}

NTSTATUS IVRInput_IVRInput_005_GetAnalogActionData( void *args )
{
    struct IVRInput_IVRInput_005_GetAnalogActionData_params *params = (struct IVRInput_IVRInput_005_GetAnalogActionData_params *)args;
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    u_InputAnalogActionData_t u_pActionData;
    if (params->pActionData) u_pActionData = *params->pActionData;
    uint32_t u_unActionDataSize = params->unActionDataSize ? sizeof(u_pActionData) : 0;
    params->_ret = iface->GetAnalogActionData( params->action, params->pActionData ? &u_pActionData : nullptr, u_unActionDataSize, params->ulRestrictToDevice );
    if (params->pActionData) *params->pActionData = u_pActionData;
    return 0;
}

NTSTATUS IVRInput_IVRInput_005_GetPoseActionData( void *args )
{
    struct IVRInput_IVRInput_005_GetPoseActionData_params *params = (struct IVRInput_IVRInput_005_GetPoseActionData_params *)args;
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    u_InputPoseActionData_t u_pActionData;
    if (params->pActionData) u_pActionData = *params->pActionData;
    uint32_t u_unActionDataSize = params->unActionDataSize ? sizeof(u_pActionData) : 0;
    params->_ret = iface->GetPoseActionData( params->action, params->eOrigin, params->fPredictedSecondsFromNow, params->pActionData ? &u_pActionData : nullptr, u_unActionDataSize, params->ulRestrictToDevice );
    if (params->pActionData) *params->pActionData = u_pActionData;
    return 0;
}

NTSTATUS IVRInput_IVRInput_005_GetSkeletalActionData( void *args )
{
    struct IVRInput_IVRInput_005_GetSkeletalActionData_params *params = (struct IVRInput_IVRInput_005_GetSkeletalActionData_params *)args;
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    u_InputSkeletalActionData_t_113b u_pActionData;
    if (params->pActionData) u_pActionData = *params->pActionData;
    uint32_t u_unActionDataSize = params->unActionDataSize ? sizeof(u_pActionData) : 0;
    params->_ret = iface->GetSkeletalActionData( params->action, params->pActionData ? &u_pActionData : nullptr, u_unActionDataSize );
    if (params->pActionData) *params->pActionData = u_pActionData;
    return 0;
}

NTSTATUS IVRInput_IVRInput_005_GetBoneCount( void *args )
{
    struct IVRInput_IVRInput_005_GetBoneCount_params *params = (struct IVRInput_IVRInput_005_GetBoneCount_params *)args;
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    params->_ret = iface->GetBoneCount( params->action, params->pBoneCount );
    return 0;
}

NTSTATUS IVRInput_IVRInput_005_GetBoneHierarchy( void *args )
{
    struct IVRInput_IVRInput_005_GetBoneHierarchy_params *params = (struct IVRInput_IVRInput_005_GetBoneHierarchy_params *)args;
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    params->_ret = iface->GetBoneHierarchy( params->action, params->pParentIndices, params->unIndexArayCount );
    return 0;
}

NTSTATUS IVRInput_IVRInput_005_GetBoneName( void *args )
{
    struct IVRInput_IVRInput_005_GetBoneName_params *params = (struct IVRInput_IVRInput_005_GetBoneName_params *)args;
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    params->_ret = iface->GetBoneName( params->action, params->nBoneIndex, params->pchBoneName, params->unNameBufferSize );
    return 0;
}

NTSTATUS IVRInput_IVRInput_005_GetSkeletalReferenceTransforms( void *args )
{
    struct IVRInput_IVRInput_005_GetSkeletalReferenceTransforms_params *params = (struct IVRInput_IVRInput_005_GetSkeletalReferenceTransforms_params *)args;
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    params->_ret = iface->GetSkeletalReferenceTransforms( params->action, params->eTransformSpace, params->eReferencePose, params->pTransformArray, params->unTransformArrayCount );
    return 0;
}

NTSTATUS IVRInput_IVRInput_005_GetSkeletalTrackingLevel( void *args )
{
    struct IVRInput_IVRInput_005_GetSkeletalTrackingLevel_params *params = (struct IVRInput_IVRInput_005_GetSkeletalTrackingLevel_params *)args;
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    params->_ret = iface->GetSkeletalTrackingLevel( params->action, params->pSkeletalTrackingLevel );
    return 0;
}

NTSTATUS IVRInput_IVRInput_005_GetSkeletalBoneData( void *args )
{
    struct IVRInput_IVRInput_005_GetSkeletalBoneData_params *params = (struct IVRInput_IVRInput_005_GetSkeletalBoneData_params *)args;
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    params->_ret = iface->GetSkeletalBoneData( params->action, params->eTransformSpace, params->eMotionRange, params->pTransformArray, params->unTransformArrayCount );
    return 0;
}

NTSTATUS IVRInput_IVRInput_005_GetSkeletalSummaryData( void *args )
{
    struct IVRInput_IVRInput_005_GetSkeletalSummaryData_params *params = (struct IVRInput_IVRInput_005_GetSkeletalSummaryData_params *)args;
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    params->_ret = iface->GetSkeletalSummaryData( params->action, params->pSkeletalSummaryData );
    return 0;
}

NTSTATUS IVRInput_IVRInput_005_GetSkeletalBoneDataCompressed( void *args )
{
    struct IVRInput_IVRInput_005_GetSkeletalBoneDataCompressed_params *params = (struct IVRInput_IVRInput_005_GetSkeletalBoneDataCompressed_params *)args;
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    params->_ret = iface->GetSkeletalBoneDataCompressed( params->action, params->eMotionRange, params->pvCompressedData, params->unCompressedSize, params->punRequiredCompressedSize );
    return 0;
}

NTSTATUS IVRInput_IVRInput_005_DecompressSkeletalBoneData( void *args )
{
    struct IVRInput_IVRInput_005_DecompressSkeletalBoneData_params *params = (struct IVRInput_IVRInput_005_DecompressSkeletalBoneData_params *)args;
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    params->_ret = iface->DecompressSkeletalBoneData( params->pvCompressedBuffer, params->unCompressedBufferSize, params->eTransformSpace, params->pTransformArray, params->unTransformArrayCount );
    return 0;
}

NTSTATUS IVRInput_IVRInput_005_TriggerHapticVibrationAction( void *args )
{
    struct IVRInput_IVRInput_005_TriggerHapticVibrationAction_params *params = (struct IVRInput_IVRInput_005_TriggerHapticVibrationAction_params *)args;
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    params->_ret = iface->TriggerHapticVibrationAction( params->action, params->fStartSecondsFromNow, params->fDurationSeconds, params->fFrequency, params->fAmplitude, params->ulRestrictToDevice );
    return 0;
}

NTSTATUS IVRInput_IVRInput_005_GetActionOrigins( void *args )
{
    struct IVRInput_IVRInput_005_GetActionOrigins_params *params = (struct IVRInput_IVRInput_005_GetActionOrigins_params *)args;
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    params->_ret = iface->GetActionOrigins( params->actionSetHandle, params->digitalActionHandle, params->originsOut, params->originOutCount );
    return 0;
}

NTSTATUS IVRInput_IVRInput_005_GetOriginLocalizedName( void *args )
{
    struct IVRInput_IVRInput_005_GetOriginLocalizedName_params *params = (struct IVRInput_IVRInput_005_GetOriginLocalizedName_params *)args;
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    params->_ret = iface->GetOriginLocalizedName( params->origin, params->pchNameArray, params->unNameArraySize, params->unStringSectionsToInclude );
    return 0;
}

NTSTATUS IVRInput_IVRInput_005_GetOriginTrackedDeviceInfo( void *args )
{
    struct IVRInput_IVRInput_005_GetOriginTrackedDeviceInfo_params *params = (struct IVRInput_IVRInput_005_GetOriginTrackedDeviceInfo_params *)args;
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    u_InputOriginInfo_t u_pOriginInfo;
    if (params->pOriginInfo) u_pOriginInfo = *params->pOriginInfo;
    uint32_t u_unOriginInfoSize = params->unOriginInfoSize ? sizeof(u_pOriginInfo) : 0;
    params->_ret = iface->GetOriginTrackedDeviceInfo( params->origin, params->pOriginInfo ? &u_pOriginInfo : nullptr, u_unOriginInfoSize );
    if (params->pOriginInfo) *params->pOriginInfo = u_pOriginInfo;
    return 0;
}

NTSTATUS IVRInput_IVRInput_005_ShowActionOrigins( void *args )
{
    struct IVRInput_IVRInput_005_ShowActionOrigins_params *params = (struct IVRInput_IVRInput_005_ShowActionOrigins_params *)args;
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    params->_ret = iface->ShowActionOrigins( params->actionSetHandle, params->ulActionHandle );
    return 0;
}

NTSTATUS IVRInput_IVRInput_005_ShowBindingsForActionSet( void *args )
{
    struct IVRInput_IVRInput_005_ShowBindingsForActionSet_params *params = (struct IVRInput_IVRInput_005_ShowBindingsForActionSet_params *)args;
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    params->_ret = iface->ShowBindingsForActionSet( params->pSets, params->unSizeOfVRSelectedActionSet_t, params->unSetCount, params->originToHighlight );
    return 0;
}

NTSTATUS IVRInput_IVRInput_005_IsUsingLegacyInput( void *args )
{
    struct IVRInput_IVRInput_005_IsUsingLegacyInput_params *params = (struct IVRInput_IVRInput_005_IsUsingLegacyInput_params *)args;
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    params->_ret = iface->IsUsingLegacyInput(  );
    return 0;
}

