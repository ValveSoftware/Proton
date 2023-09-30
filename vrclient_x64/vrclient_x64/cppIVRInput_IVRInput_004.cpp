/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRInput_IVRInput_004.h"
void cppIVRInput_IVRInput_004_SetActionManifestPath( struct cppIVRInput_IVRInput_004_SetActionManifestPath_params *params )
{
    struct u_IVRInput_IVRInput_004 *iface = (struct u_IVRInput_IVRInput_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetActionManifestPath( params->pchActionManifestPath );
}

void cppIVRInput_IVRInput_004_GetActionSetHandle( struct cppIVRInput_IVRInput_004_GetActionSetHandle_params *params )
{
    struct u_IVRInput_IVRInput_004 *iface = (struct u_IVRInput_IVRInput_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetActionSetHandle( params->pchActionSetName, params->pHandle );
}

void cppIVRInput_IVRInput_004_GetActionHandle( struct cppIVRInput_IVRInput_004_GetActionHandle_params *params )
{
    struct u_IVRInput_IVRInput_004 *iface = (struct u_IVRInput_IVRInput_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetActionHandle( params->pchActionName, params->pHandle );
}

void cppIVRInput_IVRInput_004_GetInputSourceHandle( struct cppIVRInput_IVRInput_004_GetInputSourceHandle_params *params )
{
    struct u_IVRInput_IVRInput_004 *iface = (struct u_IVRInput_IVRInput_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetInputSourceHandle( params->pchInputSourcePath, params->pHandle );
}

void cppIVRInput_IVRInput_004_UpdateActionState( struct cppIVRInput_IVRInput_004_UpdateActionState_params *params )
{
    struct u_IVRInput_IVRInput_004 *iface = (struct u_IVRInput_IVRInput_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->UpdateActionState( params->pSets, params->unSizeOfVRSelectedActionSet_t, params->unSetCount );
}

void cppIVRInput_IVRInput_004_GetDigitalActionData( struct cppIVRInput_IVRInput_004_GetDigitalActionData_params *params )
{
    struct u_IVRInput_IVRInput_004 *iface = (struct u_IVRInput_IVRInput_004 *)params->linux_side;
    u_InputDigitalActionData_t u_pActionData;
    if (params->pActionData) u_pActionData = *params->pActionData;
    uint32_t u_unActionDataSize = params->unActionDataSize ? sizeof(u_pActionData) : 0;
    params->_ret = (uint32_t)iface->GetDigitalActionData( params->action, params->pActionData ? &u_pActionData : nullptr, u_unActionDataSize, params->ulRestrictToDevice );
    if (params->pActionData) *params->pActionData = u_pActionData;
}

void cppIVRInput_IVRInput_004_GetAnalogActionData( struct cppIVRInput_IVRInput_004_GetAnalogActionData_params *params )
{
    struct u_IVRInput_IVRInput_004 *iface = (struct u_IVRInput_IVRInput_004 *)params->linux_side;
    u_InputAnalogActionData_t u_pActionData;
    if (params->pActionData) u_pActionData = *params->pActionData;
    uint32_t u_unActionDataSize = params->unActionDataSize ? sizeof(u_pActionData) : 0;
    params->_ret = (uint32_t)iface->GetAnalogActionData( params->action, params->pActionData ? &u_pActionData : nullptr, u_unActionDataSize, params->ulRestrictToDevice );
    if (params->pActionData) *params->pActionData = u_pActionData;
}

void cppIVRInput_IVRInput_004_GetPoseActionData( struct cppIVRInput_IVRInput_004_GetPoseActionData_params *params )
{
    struct u_IVRInput_IVRInput_004 *iface = (struct u_IVRInput_IVRInput_004 *)params->linux_side;
    u_InputPoseActionData_t u_pActionData;
    if (params->pActionData) u_pActionData = *params->pActionData;
    uint32_t u_unActionDataSize = params->unActionDataSize ? sizeof(u_pActionData) : 0;
    params->_ret = (uint32_t)iface->GetPoseActionData( params->action, params->eOrigin, params->fPredictedSecondsFromNow, params->pActionData ? &u_pActionData : nullptr, u_unActionDataSize, params->ulRestrictToDevice );
    if (params->pActionData) *params->pActionData = u_pActionData;
}

void cppIVRInput_IVRInput_004_GetSkeletalActionData( struct cppIVRInput_IVRInput_004_GetSkeletalActionData_params *params )
{
    struct u_IVRInput_IVRInput_004 *iface = (struct u_IVRInput_IVRInput_004 *)params->linux_side;
    u_InputSkeletalActionData_t_1016 u_pActionData;
    if (params->pActionData) u_pActionData = *params->pActionData;
    uint32_t u_unActionDataSize = params->unActionDataSize ? sizeof(u_pActionData) : 0;
    params->_ret = (uint32_t)iface->GetSkeletalActionData( params->action, params->pActionData ? &u_pActionData : nullptr, u_unActionDataSize, params->ulRestrictToDevice );
    if (params->pActionData) *params->pActionData = u_pActionData;
}

void cppIVRInput_IVRInput_004_GetSkeletalBoneData( struct cppIVRInput_IVRInput_004_GetSkeletalBoneData_params *params )
{
    struct u_IVRInput_IVRInput_004 *iface = (struct u_IVRInput_IVRInput_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetSkeletalBoneData( params->action, params->eTransformSpace, params->eMotionRange, params->pTransformArray, params->unTransformArrayCount, params->ulRestrictToDevice );
}

void cppIVRInput_IVRInput_004_GetSkeletalBoneDataCompressed( struct cppIVRInput_IVRInput_004_GetSkeletalBoneDataCompressed_params *params )
{
    struct u_IVRInput_IVRInput_004 *iface = (struct u_IVRInput_IVRInput_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetSkeletalBoneDataCompressed( params->action, params->eTransformSpace, params->eMotionRange, params->pvCompressedData, params->unCompressedSize, params->punRequiredCompressedSize, params->ulRestrictToDevice );
}

void cppIVRInput_IVRInput_004_DecompressSkeletalBoneData( struct cppIVRInput_IVRInput_004_DecompressSkeletalBoneData_params *params )
{
    struct u_IVRInput_IVRInput_004 *iface = (struct u_IVRInput_IVRInput_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->DecompressSkeletalBoneData( params->pvCompressedBuffer, params->unCompressedBufferSize, params->peTransformSpace, params->pTransformArray, params->unTransformArrayCount );
}

void cppIVRInput_IVRInput_004_TriggerHapticVibrationAction( struct cppIVRInput_IVRInput_004_TriggerHapticVibrationAction_params *params )
{
    struct u_IVRInput_IVRInput_004 *iface = (struct u_IVRInput_IVRInput_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->TriggerHapticVibrationAction( params->action, params->fStartSecondsFromNow, params->fDurationSeconds, params->fFrequency, params->fAmplitude, params->ulRestrictToDevice );
}

void cppIVRInput_IVRInput_004_GetActionOrigins( struct cppIVRInput_IVRInput_004_GetActionOrigins_params *params )
{
    struct u_IVRInput_IVRInput_004 *iface = (struct u_IVRInput_IVRInput_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetActionOrigins( params->actionSetHandle, params->digitalActionHandle, params->originsOut, params->originOutCount );
}

void cppIVRInput_IVRInput_004_GetOriginLocalizedName( struct cppIVRInput_IVRInput_004_GetOriginLocalizedName_params *params )
{
    struct u_IVRInput_IVRInput_004 *iface = (struct u_IVRInput_IVRInput_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOriginLocalizedName( params->origin, params->pchNameArray, params->unNameArraySize );
}

void cppIVRInput_IVRInput_004_GetOriginTrackedDeviceInfo( struct cppIVRInput_IVRInput_004_GetOriginTrackedDeviceInfo_params *params )
{
    struct u_IVRInput_IVRInput_004 *iface = (struct u_IVRInput_IVRInput_004 *)params->linux_side;
    u_InputOriginInfo_t u_pOriginInfo;
    if (params->pOriginInfo) u_pOriginInfo = *params->pOriginInfo;
    uint32_t u_unOriginInfoSize = params->unOriginInfoSize ? sizeof(u_pOriginInfo) : 0;
    params->_ret = (uint32_t)iface->GetOriginTrackedDeviceInfo( params->origin, params->pOriginInfo ? &u_pOriginInfo : nullptr, u_unOriginInfoSize );
    if (params->pOriginInfo) *params->pOriginInfo = u_pOriginInfo;
}

void cppIVRInput_IVRInput_004_ShowActionOrigins( struct cppIVRInput_IVRInput_004_ShowActionOrigins_params *params )
{
    struct u_IVRInput_IVRInput_004 *iface = (struct u_IVRInput_IVRInput_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowActionOrigins( params->actionSetHandle, params->ulActionHandle );
}

void cppIVRInput_IVRInput_004_ShowBindingsForActionSet( struct cppIVRInput_IVRInput_004_ShowBindingsForActionSet_params *params )
{
    struct u_IVRInput_IVRInput_004 *iface = (struct u_IVRInput_IVRInput_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowBindingsForActionSet( params->pSets, params->unSizeOfVRSelectedActionSet_t, params->unSetCount, params->originToHighlight );
}

