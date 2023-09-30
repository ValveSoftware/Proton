/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRInput_IVRInput_003.h"
void cppIVRInput_IVRInput_003_SetActionManifestPath( struct cppIVRInput_IVRInput_003_SetActionManifestPath_params *params )
{
    struct u_IVRInput_IVRInput_003 *iface = (struct u_IVRInput_IVRInput_003 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetActionManifestPath( params->pchActionManifestPath );
}

void cppIVRInput_IVRInput_003_GetActionSetHandle( struct cppIVRInput_IVRInput_003_GetActionSetHandle_params *params )
{
    struct u_IVRInput_IVRInput_003 *iface = (struct u_IVRInput_IVRInput_003 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetActionSetHandle( params->pchActionSetName, params->pHandle );
}

void cppIVRInput_IVRInput_003_GetActionHandle( struct cppIVRInput_IVRInput_003_GetActionHandle_params *params )
{
    struct u_IVRInput_IVRInput_003 *iface = (struct u_IVRInput_IVRInput_003 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetActionHandle( params->pchActionName, params->pHandle );
}

void cppIVRInput_IVRInput_003_GetInputSourceHandle( struct cppIVRInput_IVRInput_003_GetInputSourceHandle_params *params )
{
    struct u_IVRInput_IVRInput_003 *iface = (struct u_IVRInput_IVRInput_003 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetInputSourceHandle( params->pchInputSourcePath, params->pHandle );
}

void cppIVRInput_IVRInput_003_UpdateActionState( struct cppIVRInput_IVRInput_003_UpdateActionState_params *params )
{
    struct u_IVRInput_IVRInput_003 *iface = (struct u_IVRInput_IVRInput_003 *)params->linux_side;
    params->_ret = (uint32_t)iface->UpdateActionState( params->pSets, params->unSizeOfVRSelectedActionSet_t, params->unSetCount );
}

void cppIVRInput_IVRInput_003_GetDigitalActionData( struct cppIVRInput_IVRInput_003_GetDigitalActionData_params *params )
{
    struct u_IVRInput_IVRInput_003 *iface = (struct u_IVRInput_IVRInput_003 *)params->linux_side;
    u_InputDigitalActionData_t u_pActionData;
    if (params->pActionData) u_pActionData = *params->pActionData;
    uint32_t u_unActionDataSize = params->unActionDataSize ? sizeof(u_pActionData) : 0;
    params->_ret = (uint32_t)iface->GetDigitalActionData( params->action, params->pActionData ? &u_pActionData : nullptr, u_unActionDataSize );
    if (params->pActionData) *params->pActionData = u_pActionData;
}

void cppIVRInput_IVRInput_003_GetAnalogActionData( struct cppIVRInput_IVRInput_003_GetAnalogActionData_params *params )
{
    struct u_IVRInput_IVRInput_003 *iface = (struct u_IVRInput_IVRInput_003 *)params->linux_side;
    u_InputAnalogActionData_t u_pActionData;
    if (params->pActionData) u_pActionData = *params->pActionData;
    uint32_t u_unActionDataSize = params->unActionDataSize ? sizeof(u_pActionData) : 0;
    params->_ret = (uint32_t)iface->GetAnalogActionData( params->action, params->pActionData ? &u_pActionData : nullptr, u_unActionDataSize );
    if (params->pActionData) *params->pActionData = u_pActionData;
}

void cppIVRInput_IVRInput_003_GetPoseActionData( struct cppIVRInput_IVRInput_003_GetPoseActionData_params *params )
{
    struct u_IVRInput_IVRInput_003 *iface = (struct u_IVRInput_IVRInput_003 *)params->linux_side;
    u_InputPoseActionData_t u_pActionData;
    if (params->pActionData) u_pActionData = *params->pActionData;
    uint32_t u_unActionDataSize = params->unActionDataSize ? sizeof(u_pActionData) : 0;
    params->_ret = (uint32_t)iface->GetPoseActionData( params->action, params->eOrigin, params->fPredictedSecondsFromNow, params->pActionData ? &u_pActionData : nullptr, u_unActionDataSize );
    if (params->pActionData) *params->pActionData = u_pActionData;
}

void cppIVRInput_IVRInput_003_GetSkeletalActionData( struct cppIVRInput_IVRInput_003_GetSkeletalActionData_params *params )
{
    struct u_IVRInput_IVRInput_003 *iface = (struct u_IVRInput_IVRInput_003 *)params->linux_side;
    u_InputSkeletonActionData_t u_pActionData;
    if (params->pActionData) u_pActionData = *params->pActionData;
    params->_ret = (uint32_t)iface->GetSkeletalActionData( params->action, params->eBoneParent, params->fPredictedSecondsFromNow, params->pActionData ? &u_pActionData : nullptr, params->unActionDataSize, params->pTransformArray, params->unTransformArrayCount );
    if (params->pActionData) *params->pActionData = u_pActionData;
}

void cppIVRInput_IVRInput_003_GetSkeletalActionDataCompressed( struct cppIVRInput_IVRInput_003_GetSkeletalActionDataCompressed_params *params )
{
    struct u_IVRInput_IVRInput_003 *iface = (struct u_IVRInput_IVRInput_003 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetSkeletalActionDataCompressed( params->action, params->eBoneParent, params->fPredictedSecondsFromNow, params->pvCompressedData, params->unCompressedSize, params->punRequiredCompressedSize );
}

void cppIVRInput_IVRInput_003_UncompressSkeletalActionData( struct cppIVRInput_IVRInput_003_UncompressSkeletalActionData_params *params )
{
    struct u_IVRInput_IVRInput_003 *iface = (struct u_IVRInput_IVRInput_003 *)params->linux_side;
    params->_ret = (uint32_t)iface->UncompressSkeletalActionData( params->pvCompressedBuffer, params->unCompressedBufferSize, params->peBoneParent, params->pTransformArray, params->unTransformArrayCount );
}

void cppIVRInput_IVRInput_003_TriggerHapticVibrationAction( struct cppIVRInput_IVRInput_003_TriggerHapticVibrationAction_params *params )
{
    struct u_IVRInput_IVRInput_003 *iface = (struct u_IVRInput_IVRInput_003 *)params->linux_side;
    params->_ret = (uint32_t)iface->TriggerHapticVibrationAction( params->action, params->fStartSecondsFromNow, params->fDurationSeconds, params->fFrequency, params->fAmplitude );
}

void cppIVRInput_IVRInput_003_GetActionOrigins( struct cppIVRInput_IVRInput_003_GetActionOrigins_params *params )
{
    struct u_IVRInput_IVRInput_003 *iface = (struct u_IVRInput_IVRInput_003 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetActionOrigins( params->actionSetHandle, params->digitalActionHandle, params->originsOut, params->originOutCount );
}

void cppIVRInput_IVRInput_003_GetOriginLocalizedName( struct cppIVRInput_IVRInput_003_GetOriginLocalizedName_params *params )
{
    struct u_IVRInput_IVRInput_003 *iface = (struct u_IVRInput_IVRInput_003 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOriginLocalizedName( params->origin, params->pchNameArray, params->unNameArraySize );
}

void cppIVRInput_IVRInput_003_GetOriginTrackedDeviceInfo( struct cppIVRInput_IVRInput_003_GetOriginTrackedDeviceInfo_params *params )
{
    struct u_IVRInput_IVRInput_003 *iface = (struct u_IVRInput_IVRInput_003 *)params->linux_side;
    u_InputOriginInfo_t u_pOriginInfo;
    if (params->pOriginInfo) u_pOriginInfo = *params->pOriginInfo;
    uint32_t u_unOriginInfoSize = params->unOriginInfoSize ? sizeof(u_pOriginInfo) : 0;
    params->_ret = (uint32_t)iface->GetOriginTrackedDeviceInfo( params->origin, params->pOriginInfo ? &u_pOriginInfo : nullptr, u_unOriginInfoSize );
    if (params->pOriginInfo) *params->pOriginInfo = u_pOriginInfo;
}

void cppIVRInput_IVRInput_003_ShowActionOrigins( struct cppIVRInput_IVRInput_003_ShowActionOrigins_params *params )
{
    struct u_IVRInput_IVRInput_003 *iface = (struct u_IVRInput_IVRInput_003 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowActionOrigins( params->actionSetHandle, params->ulActionHandle );
}

void cppIVRInput_IVRInput_003_ShowBindingsForActionSet( struct cppIVRInput_IVRInput_003_ShowBindingsForActionSet_params *params )
{
    struct u_IVRInput_IVRInput_003 *iface = (struct u_IVRInput_IVRInput_003 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowBindingsForActionSet( params->pSets, params->unSizeOfVRSelectedActionSet_t, params->unSetCount, params->originToHighlight );
}

