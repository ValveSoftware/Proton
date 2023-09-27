#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.0.15/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRInput_IVRInput_003.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVRInput_IVRInput_003_SetActionManifestPath( struct cppIVRInput_IVRInput_003_SetActionManifestPath_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->SetActionManifestPath((const char *)params->pchActionManifestPath);
}

void cppIVRInput_IVRInput_003_GetActionSetHandle( struct cppIVRInput_IVRInput_003_GetActionSetHandle_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->GetActionSetHandle((const char *)params->pchActionSetName, (vr::VRActionSetHandle_t *)params->pHandle);
}

void cppIVRInput_IVRInput_003_GetActionHandle( struct cppIVRInput_IVRInput_003_GetActionHandle_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->GetActionHandle((const char *)params->pchActionName, (vr::VRActionHandle_t *)params->pHandle);
}

void cppIVRInput_IVRInput_003_GetInputSourceHandle( struct cppIVRInput_IVRInput_003_GetInputSourceHandle_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->GetInputSourceHandle((const char *)params->pchInputSourcePath, (vr::VRInputValueHandle_t *)params->pHandle);
}

void cppIVRInput_IVRInput_003_UpdateActionState( struct cppIVRInput_IVRInput_003_UpdateActionState_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->UpdateActionState((vr::VRActiveActionSet_t *)params->pSets, (uint32_t)params->unSizeOfVRSelectedActionSet_t, (uint32_t)params->unSetCount);
}

void cppIVRInput_IVRInput_003_GetDigitalActionData( struct cppIVRInput_IVRInput_003_GetDigitalActionData_params *params )
{
    InputDigitalActionData_t lin_pActionData;
    if (params->pActionData)
        struct_InputDigitalActionData_t_1015_win_to_lin( params->pActionData, &lin_pActionData );
    uint32_t lin_unActionDataSize = params->unActionDataSize ? sizeof(lin_pActionData) : 0;
    params->_ret = ((IVRInput*)params->linux_side)->GetDigitalActionData((vr::VRActionHandle_t)params->action, params->pActionData ? &lin_pActionData : nullptr, lin_unActionDataSize);
    if (params->pActionData)
        struct_InputDigitalActionData_t_1015_lin_to_win( &lin_pActionData, params->pActionData, params->unActionDataSize );
}

void cppIVRInput_IVRInput_003_GetAnalogActionData( struct cppIVRInput_IVRInput_003_GetAnalogActionData_params *params )
{
    InputAnalogActionData_t lin_pActionData;
    if (params->pActionData)
        struct_InputAnalogActionData_t_1015_win_to_lin( params->pActionData, &lin_pActionData );
    uint32_t lin_unActionDataSize = params->unActionDataSize ? sizeof(lin_pActionData) : 0;
    params->_ret = ((IVRInput*)params->linux_side)->GetAnalogActionData((vr::VRActionHandle_t)params->action, params->pActionData ? &lin_pActionData : nullptr, lin_unActionDataSize);
    if (params->pActionData)
        struct_InputAnalogActionData_t_1015_lin_to_win( &lin_pActionData, params->pActionData, params->unActionDataSize );
}

void cppIVRInput_IVRInput_003_GetPoseActionData( struct cppIVRInput_IVRInput_003_GetPoseActionData_params *params )
{
    InputPoseActionData_t lin_pActionData;
    if (params->pActionData)
        struct_InputPoseActionData_t_1015_win_to_lin( params->pActionData, &lin_pActionData );
    uint32_t lin_unActionDataSize = params->unActionDataSize ? sizeof(lin_pActionData) : 0;
    params->_ret = ((IVRInput*)params->linux_side)->GetPoseActionData((vr::VRActionHandle_t)params->action, (vr::ETrackingUniverseOrigin)params->eOrigin, (float)params->fPredictedSecondsFromNow, params->pActionData ? &lin_pActionData : nullptr, lin_unActionDataSize);
    if (params->pActionData)
        struct_InputPoseActionData_t_1015_lin_to_win( &lin_pActionData, params->pActionData, params->unActionDataSize );
}

void cppIVRInput_IVRInput_003_GetSkeletalActionData( struct cppIVRInput_IVRInput_003_GetSkeletalActionData_params *params )
{
    InputSkeletonActionData_t lin_pActionData;
    if (params->pActionData)
        struct_InputSkeletonActionData_t_1015_win_to_lin( params->pActionData, &lin_pActionData );
    params->_ret = ((IVRInput*)params->linux_side)->GetSkeletalActionData((vr::VRActionHandle_t)params->action, (vr::EVRSkeletalTransformSpace)params->eBoneParent, (float)params->fPredictedSecondsFromNow, params->pActionData ? &lin_pActionData : nullptr, (uint32_t)params->unActionDataSize, (vr::VRBoneTransform_t *)params->pTransformArray, (uint32_t)params->unTransformArrayCount);
    if (params->pActionData)
        struct_InputSkeletonActionData_t_1015_lin_to_win( &lin_pActionData, params->pActionData );
}

void cppIVRInput_IVRInput_003_GetSkeletalActionDataCompressed( struct cppIVRInput_IVRInput_003_GetSkeletalActionDataCompressed_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->GetSkeletalActionDataCompressed((vr::VRActionHandle_t)params->action, (vr::EVRSkeletalTransformSpace)params->eBoneParent, (float)params->fPredictedSecondsFromNow, (void *)params->pvCompressedData, (uint32_t)params->unCompressedSize, (uint32_t *)params->punRequiredCompressedSize);
}

void cppIVRInput_IVRInput_003_UncompressSkeletalActionData( struct cppIVRInput_IVRInput_003_UncompressSkeletalActionData_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->UncompressSkeletalActionData((void *)params->pvCompressedBuffer, (uint32_t)params->unCompressedBufferSize, (vr::EVRSkeletalTransformSpace *)params->peBoneParent, (vr::VRBoneTransform_t *)params->pTransformArray, (uint32_t)params->unTransformArrayCount);
}

void cppIVRInput_IVRInput_003_TriggerHapticVibrationAction( struct cppIVRInput_IVRInput_003_TriggerHapticVibrationAction_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->TriggerHapticVibrationAction((vr::VRActionHandle_t)params->action, (float)params->fStartSecondsFromNow, (float)params->fDurationSeconds, (float)params->fFrequency, (float)params->fAmplitude);
}

void cppIVRInput_IVRInput_003_GetActionOrigins( struct cppIVRInput_IVRInput_003_GetActionOrigins_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->GetActionOrigins((vr::VRActionSetHandle_t)params->actionSetHandle, (vr::VRActionHandle_t)params->digitalActionHandle, (vr::VRInputValueHandle_t *)params->originsOut, (uint32_t)params->originOutCount);
}

void cppIVRInput_IVRInput_003_GetOriginLocalizedName( struct cppIVRInput_IVRInput_003_GetOriginLocalizedName_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->GetOriginLocalizedName((vr::VRInputValueHandle_t)params->origin, (char *)params->pchNameArray, (uint32_t)params->unNameArraySize);
}

void cppIVRInput_IVRInput_003_GetOriginTrackedDeviceInfo( struct cppIVRInput_IVRInput_003_GetOriginTrackedDeviceInfo_params *params )
{
    uint32_t lin_unOriginInfoSize = std::min( params->unOriginInfoSize, (uint32_t)sizeof(vr::InputOriginInfo_t) );
    params->_ret = ((IVRInput*)params->linux_side)->GetOriginTrackedDeviceInfo((vr::VRInputValueHandle_t)params->origin, (vr::InputOriginInfo_t *)params->pOriginInfo, lin_unOriginInfoSize);
}

void cppIVRInput_IVRInput_003_ShowActionOrigins( struct cppIVRInput_IVRInput_003_ShowActionOrigins_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->ShowActionOrigins((vr::VRActionSetHandle_t)params->actionSetHandle, (vr::VRActionHandle_t)params->ulActionHandle);
}

void cppIVRInput_IVRInput_003_ShowBindingsForActionSet( struct cppIVRInput_IVRInput_003_ShowBindingsForActionSet_params *params )
{
    params->_ret = ((IVRInput*)params->linux_side)->ShowBindingsForActionSet((vr::VRActiveActionSet_t *)params->pSets, (uint32_t)params->unSizeOfVRSelectedActionSet_t, (uint32_t)params->unSetCount, (vr::VRInputValueHandle_t)params->originToHighlight);
}

#ifdef __cplusplus
}
#endif
