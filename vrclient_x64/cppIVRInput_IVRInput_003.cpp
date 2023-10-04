/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVRInput_IVRInput_003_SetActionManifestPath( void *args )
{
    struct IVRInput_IVRInput_003_SetActionManifestPath_params *params = (struct IVRInput_IVRInput_003_SetActionManifestPath_params *)args;
    struct u_IVRInput_IVRInput_003 *iface = (struct u_IVRInput_IVRInput_003 *)params->linux_side;
    char *u_pchActionManifestPath = vrclient_dos_to_unix_path( params->pchActionManifestPath );
    params->_ret = iface->SetActionManifestPath( u_pchActionManifestPath );
    vrclient_free_path( u_pchActionManifestPath );
    return 0;
}

NTSTATUS IVRInput_IVRInput_003_GetActionSetHandle( void *args )
{
    struct IVRInput_IVRInput_003_GetActionSetHandle_params *params = (struct IVRInput_IVRInput_003_GetActionSetHandle_params *)args;
    struct u_IVRInput_IVRInput_003 *iface = (struct u_IVRInput_IVRInput_003 *)params->linux_side;
    params->_ret = iface->GetActionSetHandle( params->pchActionSetName, params->pHandle );
    return 0;
}

NTSTATUS IVRInput_IVRInput_003_GetActionHandle( void *args )
{
    struct IVRInput_IVRInput_003_GetActionHandle_params *params = (struct IVRInput_IVRInput_003_GetActionHandle_params *)args;
    struct u_IVRInput_IVRInput_003 *iface = (struct u_IVRInput_IVRInput_003 *)params->linux_side;
    params->_ret = iface->GetActionHandle( params->pchActionName, params->pHandle );
    return 0;
}

NTSTATUS IVRInput_IVRInput_003_GetInputSourceHandle( void *args )
{
    struct IVRInput_IVRInput_003_GetInputSourceHandle_params *params = (struct IVRInput_IVRInput_003_GetInputSourceHandle_params *)args;
    struct u_IVRInput_IVRInput_003 *iface = (struct u_IVRInput_IVRInput_003 *)params->linux_side;
    params->_ret = iface->GetInputSourceHandle( params->pchInputSourcePath, params->pHandle );
    return 0;
}

NTSTATUS IVRInput_IVRInput_003_UpdateActionState( void *args )
{
    struct IVRInput_IVRInput_003_UpdateActionState_params *params = (struct IVRInput_IVRInput_003_UpdateActionState_params *)args;
    struct u_IVRInput_IVRInput_003 *iface = (struct u_IVRInput_IVRInput_003 *)params->linux_side;
    params->_ret = iface->UpdateActionState( params->pSets, params->unSizeOfVRSelectedActionSet_t, params->unSetCount );
    return 0;
}

NTSTATUS IVRInput_IVRInput_003_GetDigitalActionData( void *args )
{
    struct IVRInput_IVRInput_003_GetDigitalActionData_params *params = (struct IVRInput_IVRInput_003_GetDigitalActionData_params *)args;
    struct u_IVRInput_IVRInput_003 *iface = (struct u_IVRInput_IVRInput_003 *)params->linux_side;
    u_InputDigitalActionData_t u_pActionData;
    if (params->pActionData) u_pActionData = *params->pActionData;
    uint32_t u_unActionDataSize = params->unActionDataSize ? sizeof(u_pActionData) : 0;
    params->_ret = iface->GetDigitalActionData( params->action, params->pActionData ? &u_pActionData : nullptr, u_unActionDataSize );
    if (params->pActionData) *params->pActionData = u_pActionData;
    return 0;
}

NTSTATUS IVRInput_IVRInput_003_GetAnalogActionData( void *args )
{
    struct IVRInput_IVRInput_003_GetAnalogActionData_params *params = (struct IVRInput_IVRInput_003_GetAnalogActionData_params *)args;
    struct u_IVRInput_IVRInput_003 *iface = (struct u_IVRInput_IVRInput_003 *)params->linux_side;
    u_InputAnalogActionData_t u_pActionData;
    if (params->pActionData) u_pActionData = *params->pActionData;
    uint32_t u_unActionDataSize = params->unActionDataSize ? sizeof(u_pActionData) : 0;
    params->_ret = iface->GetAnalogActionData( params->action, params->pActionData ? &u_pActionData : nullptr, u_unActionDataSize );
    if (params->pActionData) *params->pActionData = u_pActionData;
    return 0;
}

NTSTATUS IVRInput_IVRInput_003_GetPoseActionData( void *args )
{
    struct IVRInput_IVRInput_003_GetPoseActionData_params *params = (struct IVRInput_IVRInput_003_GetPoseActionData_params *)args;
    struct u_IVRInput_IVRInput_003 *iface = (struct u_IVRInput_IVRInput_003 *)params->linux_side;
    u_InputPoseActionData_t u_pActionData;
    if (params->pActionData) u_pActionData = *params->pActionData;
    uint32_t u_unActionDataSize = params->unActionDataSize ? sizeof(u_pActionData) : 0;
    params->_ret = iface->GetPoseActionData( params->action, params->eOrigin, params->fPredictedSecondsFromNow, params->pActionData ? &u_pActionData : nullptr, u_unActionDataSize );
    if (params->pActionData) *params->pActionData = u_pActionData;
    return 0;
}

NTSTATUS IVRInput_IVRInput_003_GetSkeletalActionData( void *args )
{
    struct IVRInput_IVRInput_003_GetSkeletalActionData_params *params = (struct IVRInput_IVRInput_003_GetSkeletalActionData_params *)args;
    struct u_IVRInput_IVRInput_003 *iface = (struct u_IVRInput_IVRInput_003 *)params->linux_side;
    u_InputSkeletonActionData_t u_pActionData;
    if (params->pActionData) u_pActionData = *params->pActionData;
    params->_ret = iface->GetSkeletalActionData( params->action, params->eBoneParent, params->fPredictedSecondsFromNow, params->pActionData ? &u_pActionData : nullptr, params->unActionDataSize, params->pTransformArray, params->unTransformArrayCount );
    if (params->pActionData) *params->pActionData = u_pActionData;
    return 0;
}

NTSTATUS IVRInput_IVRInput_003_GetSkeletalActionDataCompressed( void *args )
{
    struct IVRInput_IVRInput_003_GetSkeletalActionDataCompressed_params *params = (struct IVRInput_IVRInput_003_GetSkeletalActionDataCompressed_params *)args;
    struct u_IVRInput_IVRInput_003 *iface = (struct u_IVRInput_IVRInput_003 *)params->linux_side;
    params->_ret = iface->GetSkeletalActionDataCompressed( params->action, params->eBoneParent, params->fPredictedSecondsFromNow, params->pvCompressedData, params->unCompressedSize, params->punRequiredCompressedSize );
    return 0;
}

NTSTATUS IVRInput_IVRInput_003_UncompressSkeletalActionData( void *args )
{
    struct IVRInput_IVRInput_003_UncompressSkeletalActionData_params *params = (struct IVRInput_IVRInput_003_UncompressSkeletalActionData_params *)args;
    struct u_IVRInput_IVRInput_003 *iface = (struct u_IVRInput_IVRInput_003 *)params->linux_side;
    params->_ret = iface->UncompressSkeletalActionData( params->pvCompressedBuffer, params->unCompressedBufferSize, params->peBoneParent, params->pTransformArray, params->unTransformArrayCount );
    return 0;
}

NTSTATUS IVRInput_IVRInput_003_TriggerHapticVibrationAction( void *args )
{
    struct IVRInput_IVRInput_003_TriggerHapticVibrationAction_params *params = (struct IVRInput_IVRInput_003_TriggerHapticVibrationAction_params *)args;
    struct u_IVRInput_IVRInput_003 *iface = (struct u_IVRInput_IVRInput_003 *)params->linux_side;
    params->_ret = iface->TriggerHapticVibrationAction( params->action, params->fStartSecondsFromNow, params->fDurationSeconds, params->fFrequency, params->fAmplitude );
    return 0;
}

NTSTATUS IVRInput_IVRInput_003_GetActionOrigins( void *args )
{
    struct IVRInput_IVRInput_003_GetActionOrigins_params *params = (struct IVRInput_IVRInput_003_GetActionOrigins_params *)args;
    struct u_IVRInput_IVRInput_003 *iface = (struct u_IVRInput_IVRInput_003 *)params->linux_side;
    params->_ret = iface->GetActionOrigins( params->actionSetHandle, params->digitalActionHandle, params->originsOut, params->originOutCount );
    return 0;
}

NTSTATUS IVRInput_IVRInput_003_GetOriginLocalizedName( void *args )
{
    struct IVRInput_IVRInput_003_GetOriginLocalizedName_params *params = (struct IVRInput_IVRInput_003_GetOriginLocalizedName_params *)args;
    struct u_IVRInput_IVRInput_003 *iface = (struct u_IVRInput_IVRInput_003 *)params->linux_side;
    params->_ret = iface->GetOriginLocalizedName( params->origin, params->pchNameArray, params->unNameArraySize );
    return 0;
}

NTSTATUS IVRInput_IVRInput_003_GetOriginTrackedDeviceInfo( void *args )
{
    struct IVRInput_IVRInput_003_GetOriginTrackedDeviceInfo_params *params = (struct IVRInput_IVRInput_003_GetOriginTrackedDeviceInfo_params *)args;
    struct u_IVRInput_IVRInput_003 *iface = (struct u_IVRInput_IVRInput_003 *)params->linux_side;
    u_InputOriginInfo_t u_pOriginInfo;
    if (params->pOriginInfo) u_pOriginInfo = *params->pOriginInfo;
    uint32_t u_unOriginInfoSize = params->unOriginInfoSize ? sizeof(u_pOriginInfo) : 0;
    params->_ret = iface->GetOriginTrackedDeviceInfo( params->origin, params->pOriginInfo ? &u_pOriginInfo : nullptr, u_unOriginInfoSize );
    if (params->pOriginInfo) *params->pOriginInfo = u_pOriginInfo;
    return 0;
}

NTSTATUS IVRInput_IVRInput_003_ShowActionOrigins( void *args )
{
    struct IVRInput_IVRInput_003_ShowActionOrigins_params *params = (struct IVRInput_IVRInput_003_ShowActionOrigins_params *)args;
    struct u_IVRInput_IVRInput_003 *iface = (struct u_IVRInput_IVRInput_003 *)params->linux_side;
    params->_ret = iface->ShowActionOrigins( params->actionSetHandle, params->ulActionHandle );
    return 0;
}

NTSTATUS IVRInput_IVRInput_003_ShowBindingsForActionSet( void *args )
{
    struct IVRInput_IVRInput_003_ShowBindingsForActionSet_params *params = (struct IVRInput_IVRInput_003_ShowBindingsForActionSet_params *)args;
    struct u_IVRInput_IVRInput_003 *iface = (struct u_IVRInput_IVRInput_003 *)params->linux_side;
    params->_ret = iface->ShowBindingsForActionSet( params->pSets, params->unSizeOfVRSelectedActionSet_t, params->unSetCount, params->originToHighlight );
    return 0;
}

