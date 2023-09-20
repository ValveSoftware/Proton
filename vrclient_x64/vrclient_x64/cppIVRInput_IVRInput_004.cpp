#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.0.17/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRInput_IVRInput_004.h"
#ifdef __cplusplus
extern "C" {
#endif

struct cppIVRInput_IVRInput_004
{
#ifdef __cplusplus
    virtual uint32_t SetActionManifestPath( const char * ) = 0;
    virtual uint32_t GetActionSetHandle( const char *, uint64_t * ) = 0;
    virtual uint32_t GetActionHandle( const char *, uint64_t * ) = 0;
    virtual uint32_t GetInputSourceHandle( const char *, uint64_t * ) = 0;
    virtual uint32_t UpdateActionState( VRActiveActionSet_t *, uint32_t, uint32_t ) = 0;
    virtual uint32_t GetDigitalActionData( uint64_t, InputDigitalActionData_t *, uint32_t, uint64_t ) = 0;
    virtual uint32_t GetAnalogActionData( uint64_t, InputAnalogActionData_t *, uint32_t, uint64_t ) = 0;
    virtual uint32_t GetPoseActionData( uint64_t, uint32_t, float, InputPoseActionData_t *, uint32_t, uint64_t ) = 0;
    virtual uint32_t GetSkeletalActionData( uint64_t, InputSkeletalActionData_t *, uint32_t, uint64_t ) = 0;
    virtual uint32_t GetSkeletalBoneData( uint64_t, uint32_t, uint32_t, VRBoneTransform_t *, uint32_t, uint64_t ) = 0;
    virtual uint32_t GetSkeletalBoneDataCompressed( uint64_t, uint32_t, uint32_t, void *, uint32_t, uint32_t *, uint64_t ) = 0;
    virtual uint32_t DecompressSkeletalBoneData( void *, uint32_t, uint32_t *, VRBoneTransform_t *, uint32_t ) = 0;
    virtual uint32_t TriggerHapticVibrationAction( uint64_t, float, float, float, float, uint64_t ) = 0;
    virtual uint32_t GetActionOrigins( uint64_t, uint64_t, uint64_t *, uint32_t ) = 0;
    virtual uint32_t GetOriginLocalizedName( uint64_t, char *, uint32_t ) = 0;
    virtual uint32_t GetOriginTrackedDeviceInfo( uint64_t, InputOriginInfo_t *, uint32_t ) = 0;
    virtual uint32_t ShowActionOrigins( uint64_t, uint64_t ) = 0;
    virtual uint32_t ShowBindingsForActionSet( VRActiveActionSet_t *, uint32_t, uint32_t, uint64_t ) = 0;
#endif /* __cplusplus */
};

void cppIVRInput_IVRInput_004_SetActionManifestPath( struct cppIVRInput_IVRInput_004_SetActionManifestPath_params *params )
{
    struct cppIVRInput_IVRInput_004 *iface = (struct cppIVRInput_IVRInput_004 *)params->linux_side;
    params->_ret = iface->SetActionManifestPath( params->pchActionManifestPath );
}

void cppIVRInput_IVRInput_004_GetActionSetHandle( struct cppIVRInput_IVRInput_004_GetActionSetHandle_params *params )
{
    struct cppIVRInput_IVRInput_004 *iface = (struct cppIVRInput_IVRInput_004 *)params->linux_side;
    params->_ret = iface->GetActionSetHandle( params->pchActionSetName, params->pHandle );
}

void cppIVRInput_IVRInput_004_GetActionHandle( struct cppIVRInput_IVRInput_004_GetActionHandle_params *params )
{
    struct cppIVRInput_IVRInput_004 *iface = (struct cppIVRInput_IVRInput_004 *)params->linux_side;
    params->_ret = iface->GetActionHandle( params->pchActionName, params->pHandle );
}

void cppIVRInput_IVRInput_004_GetInputSourceHandle( struct cppIVRInput_IVRInput_004_GetInputSourceHandle_params *params )
{
    struct cppIVRInput_IVRInput_004 *iface = (struct cppIVRInput_IVRInput_004 *)params->linux_side;
    params->_ret = iface->GetInputSourceHandle( params->pchInputSourcePath, params->pHandle );
}

void cppIVRInput_IVRInput_004_UpdateActionState( struct cppIVRInput_IVRInput_004_UpdateActionState_params *params )
{
    struct cppIVRInput_IVRInput_004 *iface = (struct cppIVRInput_IVRInput_004 *)params->linux_side;
    params->_ret = iface->UpdateActionState( params->pSets, params->unSizeOfVRSelectedActionSet_t, params->unSetCount );
}

void cppIVRInput_IVRInput_004_GetDigitalActionData( struct cppIVRInput_IVRInput_004_GetDigitalActionData_params *params )
{
    struct cppIVRInput_IVRInput_004 *iface = (struct cppIVRInput_IVRInput_004 *)params->linux_side;
    InputDigitalActionData_t lin_pActionData;
    if (params->pActionData)
        struct_InputDigitalActionData_t_1017_win_to_lin( params->pActionData, &lin_pActionData );
    uint32_t lin_unActionDataSize = params->unActionDataSize ? sizeof(lin_pActionData) : 0;
    params->_ret = iface->GetDigitalActionData( params->action, params->pActionData ? &lin_pActionData : nullptr, lin_unActionDataSize, params->ulRestrictToDevice );
    if (params->pActionData)
        struct_InputDigitalActionData_t_1017_lin_to_win( &lin_pActionData, params->pActionData, params->unActionDataSize );
}

void cppIVRInput_IVRInput_004_GetAnalogActionData( struct cppIVRInput_IVRInput_004_GetAnalogActionData_params *params )
{
    struct cppIVRInput_IVRInput_004 *iface = (struct cppIVRInput_IVRInput_004 *)params->linux_side;
    InputAnalogActionData_t lin_pActionData;
    if (params->pActionData)
        struct_InputAnalogActionData_t_1017_win_to_lin( params->pActionData, &lin_pActionData );
    uint32_t lin_unActionDataSize = params->unActionDataSize ? sizeof(lin_pActionData) : 0;
    params->_ret = iface->GetAnalogActionData( params->action, params->pActionData ? &lin_pActionData : nullptr, lin_unActionDataSize, params->ulRestrictToDevice );
    if (params->pActionData)
        struct_InputAnalogActionData_t_1017_lin_to_win( &lin_pActionData, params->pActionData, params->unActionDataSize );
}

void cppIVRInput_IVRInput_004_GetPoseActionData( struct cppIVRInput_IVRInput_004_GetPoseActionData_params *params )
{
    struct cppIVRInput_IVRInput_004 *iface = (struct cppIVRInput_IVRInput_004 *)params->linux_side;
    InputPoseActionData_t lin_pActionData;
    if (params->pActionData)
        struct_InputPoseActionData_t_1017_win_to_lin( params->pActionData, &lin_pActionData );
    uint32_t lin_unActionDataSize = params->unActionDataSize ? sizeof(lin_pActionData) : 0;
    params->_ret = iface->GetPoseActionData( params->action, params->eOrigin, params->fPredictedSecondsFromNow, params->pActionData ? &lin_pActionData : nullptr, lin_unActionDataSize, params->ulRestrictToDevice );
    if (params->pActionData)
        struct_InputPoseActionData_t_1017_lin_to_win( &lin_pActionData, params->pActionData, params->unActionDataSize );
}

void cppIVRInput_IVRInput_004_GetSkeletalActionData( struct cppIVRInput_IVRInput_004_GetSkeletalActionData_params *params )
{
    struct cppIVRInput_IVRInput_004 *iface = (struct cppIVRInput_IVRInput_004 *)params->linux_side;
    InputSkeletalActionData_t lin_pActionData;
    if (params->pActionData)
        struct_InputSkeletalActionData_t_1017_win_to_lin( params->pActionData, &lin_pActionData );
    uint32_t lin_unActionDataSize = params->unActionDataSize ? sizeof(lin_pActionData) : 0;
    params->_ret = iface->GetSkeletalActionData( params->action, params->pActionData ? &lin_pActionData : nullptr, lin_unActionDataSize, params->ulRestrictToDevice );
    if (params->pActionData)
        struct_InputSkeletalActionData_t_1017_lin_to_win( &lin_pActionData, params->pActionData, params->unActionDataSize );
}

void cppIVRInput_IVRInput_004_GetSkeletalBoneData( struct cppIVRInput_IVRInput_004_GetSkeletalBoneData_params *params )
{
    struct cppIVRInput_IVRInput_004 *iface = (struct cppIVRInput_IVRInput_004 *)params->linux_side;
    params->_ret = iface->GetSkeletalBoneData( params->action, params->eTransformSpace, params->eMotionRange, params->pTransformArray, params->unTransformArrayCount, params->ulRestrictToDevice );
}

void cppIVRInput_IVRInput_004_GetSkeletalBoneDataCompressed( struct cppIVRInput_IVRInput_004_GetSkeletalBoneDataCompressed_params *params )
{
    struct cppIVRInput_IVRInput_004 *iface = (struct cppIVRInput_IVRInput_004 *)params->linux_side;
    params->_ret = iface->GetSkeletalBoneDataCompressed( params->action, params->eTransformSpace, params->eMotionRange, params->pvCompressedData, params->unCompressedSize, params->punRequiredCompressedSize, params->ulRestrictToDevice );
}

void cppIVRInput_IVRInput_004_DecompressSkeletalBoneData( struct cppIVRInput_IVRInput_004_DecompressSkeletalBoneData_params *params )
{
    struct cppIVRInput_IVRInput_004 *iface = (struct cppIVRInput_IVRInput_004 *)params->linux_side;
    params->_ret = iface->DecompressSkeletalBoneData( params->pvCompressedBuffer, params->unCompressedBufferSize, params->peTransformSpace, params->pTransformArray, params->unTransformArrayCount );
}

void cppIVRInput_IVRInput_004_TriggerHapticVibrationAction( struct cppIVRInput_IVRInput_004_TriggerHapticVibrationAction_params *params )
{
    struct cppIVRInput_IVRInput_004 *iface = (struct cppIVRInput_IVRInput_004 *)params->linux_side;
    params->_ret = iface->TriggerHapticVibrationAction( params->action, params->fStartSecondsFromNow, params->fDurationSeconds, params->fFrequency, params->fAmplitude, params->ulRestrictToDevice );
}

void cppIVRInput_IVRInput_004_GetActionOrigins( struct cppIVRInput_IVRInput_004_GetActionOrigins_params *params )
{
    struct cppIVRInput_IVRInput_004 *iface = (struct cppIVRInput_IVRInput_004 *)params->linux_side;
    params->_ret = iface->GetActionOrigins( params->actionSetHandle, params->digitalActionHandle, params->originsOut, params->originOutCount );
}

void cppIVRInput_IVRInput_004_GetOriginLocalizedName( struct cppIVRInput_IVRInput_004_GetOriginLocalizedName_params *params )
{
    struct cppIVRInput_IVRInput_004 *iface = (struct cppIVRInput_IVRInput_004 *)params->linux_side;
    params->_ret = iface->GetOriginLocalizedName( params->origin, params->pchNameArray, params->unNameArraySize );
}

void cppIVRInput_IVRInput_004_GetOriginTrackedDeviceInfo( struct cppIVRInput_IVRInput_004_GetOriginTrackedDeviceInfo_params *params )
{
    struct cppIVRInput_IVRInput_004 *iface = (struct cppIVRInput_IVRInput_004 *)params->linux_side;
    InputOriginInfo_t lin_pOriginInfo;
    if (params->pOriginInfo)
        struct_InputOriginInfo_t_1017_win_to_lin( params->pOriginInfo, &lin_pOriginInfo );
    uint32_t lin_unOriginInfoSize = params->unOriginInfoSize ? sizeof(lin_pOriginInfo) : 0;
    params->_ret = iface->GetOriginTrackedDeviceInfo( params->origin, params->pOriginInfo ? &lin_pOriginInfo : nullptr, lin_unOriginInfoSize );
    if (params->pOriginInfo)
        struct_InputOriginInfo_t_1017_lin_to_win( &lin_pOriginInfo, params->pOriginInfo, params->unOriginInfoSize );
}

void cppIVRInput_IVRInput_004_ShowActionOrigins( struct cppIVRInput_IVRInput_004_ShowActionOrigins_params *params )
{
    struct cppIVRInput_IVRInput_004 *iface = (struct cppIVRInput_IVRInput_004 *)params->linux_side;
    params->_ret = iface->ShowActionOrigins( params->actionSetHandle, params->ulActionHandle );
}

void cppIVRInput_IVRInput_004_ShowBindingsForActionSet( struct cppIVRInput_IVRInput_004_ShowBindingsForActionSet_params *params )
{
    struct cppIVRInput_IVRInput_004 *iface = (struct cppIVRInput_IVRInput_004 *)params->linux_side;
    params->_ret = iface->ShowBindingsForActionSet( params->pSets, params->unSizeOfVRSelectedActionSet_t, params->unSetCount, params->originToHighlight );
}

#ifdef __cplusplus
}
#endif
