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

struct cppIVRInput_IVRInput_003
{
#ifdef __cplusplus
    virtual uint32_t SetActionManifestPath( const char * ) = 0;
    virtual uint32_t GetActionSetHandle( const char *, uint64_t * ) = 0;
    virtual uint32_t GetActionHandle( const char *, uint64_t * ) = 0;
    virtual uint32_t GetInputSourceHandle( const char *, uint64_t * ) = 0;
    virtual uint32_t UpdateActionState( VRActiveActionSet_t *, uint32_t, uint32_t ) = 0;
    virtual uint32_t GetDigitalActionData( uint64_t, InputDigitalActionData_t *, uint32_t ) = 0;
    virtual uint32_t GetAnalogActionData( uint64_t, InputAnalogActionData_t *, uint32_t ) = 0;
    virtual uint32_t GetPoseActionData( uint64_t, uint32_t, float, InputPoseActionData_t *, uint32_t ) = 0;
    virtual uint32_t GetSkeletalActionData( uint64_t, uint32_t, float, InputSkeletonActionData_t *, uint32_t, VRBoneTransform_t *, uint32_t ) = 0;
    virtual uint32_t GetSkeletalActionDataCompressed( uint64_t, uint32_t, float, void *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t UncompressSkeletalActionData( void *, uint32_t, uint32_t *, VRBoneTransform_t *, uint32_t ) = 0;
    virtual uint32_t TriggerHapticVibrationAction( uint64_t, float, float, float, float ) = 0;
    virtual uint32_t GetActionOrigins( uint64_t, uint64_t, uint64_t *, uint32_t ) = 0;
    virtual uint32_t GetOriginLocalizedName( uint64_t, char *, uint32_t ) = 0;
    virtual uint32_t GetOriginTrackedDeviceInfo( uint64_t, InputOriginInfo_t *, uint32_t ) = 0;
    virtual uint32_t ShowActionOrigins( uint64_t, uint64_t ) = 0;
    virtual uint32_t ShowBindingsForActionSet( VRActiveActionSet_t *, uint32_t, uint32_t, uint64_t ) = 0;
#endif /* __cplusplus */
};

void cppIVRInput_IVRInput_003_SetActionManifestPath( struct cppIVRInput_IVRInput_003_SetActionManifestPath_params *params )
{
    struct cppIVRInput_IVRInput_003 *iface = (struct cppIVRInput_IVRInput_003 *)params->linux_side;
    params->_ret = iface->SetActionManifestPath( params->pchActionManifestPath );
}

void cppIVRInput_IVRInput_003_GetActionSetHandle( struct cppIVRInput_IVRInput_003_GetActionSetHandle_params *params )
{
    struct cppIVRInput_IVRInput_003 *iface = (struct cppIVRInput_IVRInput_003 *)params->linux_side;
    params->_ret = iface->GetActionSetHandle( params->pchActionSetName, params->pHandle );
}

void cppIVRInput_IVRInput_003_GetActionHandle( struct cppIVRInput_IVRInput_003_GetActionHandle_params *params )
{
    struct cppIVRInput_IVRInput_003 *iface = (struct cppIVRInput_IVRInput_003 *)params->linux_side;
    params->_ret = iface->GetActionHandle( params->pchActionName, params->pHandle );
}

void cppIVRInput_IVRInput_003_GetInputSourceHandle( struct cppIVRInput_IVRInput_003_GetInputSourceHandle_params *params )
{
    struct cppIVRInput_IVRInput_003 *iface = (struct cppIVRInput_IVRInput_003 *)params->linux_side;
    params->_ret = iface->GetInputSourceHandle( params->pchInputSourcePath, params->pHandle );
}

void cppIVRInput_IVRInput_003_UpdateActionState( struct cppIVRInput_IVRInput_003_UpdateActionState_params *params )
{
    struct cppIVRInput_IVRInput_003 *iface = (struct cppIVRInput_IVRInput_003 *)params->linux_side;
    params->_ret = iface->UpdateActionState( params->pSets, params->unSizeOfVRSelectedActionSet_t, params->unSetCount );
}

void cppIVRInput_IVRInput_003_GetDigitalActionData( struct cppIVRInput_IVRInput_003_GetDigitalActionData_params *params )
{
    struct cppIVRInput_IVRInput_003 *iface = (struct cppIVRInput_IVRInput_003 *)params->linux_side;
    InputDigitalActionData_t lin_pActionData;
    if (params->pActionData)
        struct_InputDigitalActionData_t_1015_win_to_lin( params->pActionData, &lin_pActionData );
    uint32_t lin_unActionDataSize = params->unActionDataSize ? sizeof(lin_pActionData) : 0;
    params->_ret = iface->GetDigitalActionData( params->action, params->pActionData ? &lin_pActionData : nullptr, lin_unActionDataSize );
    if (params->pActionData)
        struct_InputDigitalActionData_t_1015_lin_to_win( &lin_pActionData, params->pActionData, params->unActionDataSize );
}

void cppIVRInput_IVRInput_003_GetAnalogActionData( struct cppIVRInput_IVRInput_003_GetAnalogActionData_params *params )
{
    struct cppIVRInput_IVRInput_003 *iface = (struct cppIVRInput_IVRInput_003 *)params->linux_side;
    InputAnalogActionData_t lin_pActionData;
    if (params->pActionData)
        struct_InputAnalogActionData_t_1015_win_to_lin( params->pActionData, &lin_pActionData );
    uint32_t lin_unActionDataSize = params->unActionDataSize ? sizeof(lin_pActionData) : 0;
    params->_ret = iface->GetAnalogActionData( params->action, params->pActionData ? &lin_pActionData : nullptr, lin_unActionDataSize );
    if (params->pActionData)
        struct_InputAnalogActionData_t_1015_lin_to_win( &lin_pActionData, params->pActionData, params->unActionDataSize );
}

void cppIVRInput_IVRInput_003_GetPoseActionData( struct cppIVRInput_IVRInput_003_GetPoseActionData_params *params )
{
    struct cppIVRInput_IVRInput_003 *iface = (struct cppIVRInput_IVRInput_003 *)params->linux_side;
    InputPoseActionData_t lin_pActionData;
    if (params->pActionData)
        struct_InputPoseActionData_t_1015_win_to_lin( params->pActionData, &lin_pActionData );
    uint32_t lin_unActionDataSize = params->unActionDataSize ? sizeof(lin_pActionData) : 0;
    params->_ret = iface->GetPoseActionData( params->action, params->eOrigin, params->fPredictedSecondsFromNow, params->pActionData ? &lin_pActionData : nullptr, lin_unActionDataSize );
    if (params->pActionData)
        struct_InputPoseActionData_t_1015_lin_to_win( &lin_pActionData, params->pActionData, params->unActionDataSize );
}

void cppIVRInput_IVRInput_003_GetSkeletalActionData( struct cppIVRInput_IVRInput_003_GetSkeletalActionData_params *params )
{
    struct cppIVRInput_IVRInput_003 *iface = (struct cppIVRInput_IVRInput_003 *)params->linux_side;
    InputSkeletonActionData_t lin_pActionData;
    if (params->pActionData)
        struct_InputSkeletonActionData_t_1015_win_to_lin( params->pActionData, &lin_pActionData );
    params->_ret = iface->GetSkeletalActionData( params->action, params->eBoneParent, params->fPredictedSecondsFromNow, params->pActionData ? &lin_pActionData : nullptr, params->unActionDataSize, params->pTransformArray, params->unTransformArrayCount );
    if (params->pActionData)
        struct_InputSkeletonActionData_t_1015_lin_to_win( &lin_pActionData, params->pActionData );
}

void cppIVRInput_IVRInput_003_GetSkeletalActionDataCompressed( struct cppIVRInput_IVRInput_003_GetSkeletalActionDataCompressed_params *params )
{
    struct cppIVRInput_IVRInput_003 *iface = (struct cppIVRInput_IVRInput_003 *)params->linux_side;
    params->_ret = iface->GetSkeletalActionDataCompressed( params->action, params->eBoneParent, params->fPredictedSecondsFromNow, params->pvCompressedData, params->unCompressedSize, params->punRequiredCompressedSize );
}

void cppIVRInput_IVRInput_003_UncompressSkeletalActionData( struct cppIVRInput_IVRInput_003_UncompressSkeletalActionData_params *params )
{
    struct cppIVRInput_IVRInput_003 *iface = (struct cppIVRInput_IVRInput_003 *)params->linux_side;
    params->_ret = iface->UncompressSkeletalActionData( params->pvCompressedBuffer, params->unCompressedBufferSize, params->peBoneParent, params->pTransformArray, params->unTransformArrayCount );
}

void cppIVRInput_IVRInput_003_TriggerHapticVibrationAction( struct cppIVRInput_IVRInput_003_TriggerHapticVibrationAction_params *params )
{
    struct cppIVRInput_IVRInput_003 *iface = (struct cppIVRInput_IVRInput_003 *)params->linux_side;
    params->_ret = iface->TriggerHapticVibrationAction( params->action, params->fStartSecondsFromNow, params->fDurationSeconds, params->fFrequency, params->fAmplitude );
}

void cppIVRInput_IVRInput_003_GetActionOrigins( struct cppIVRInput_IVRInput_003_GetActionOrigins_params *params )
{
    struct cppIVRInput_IVRInput_003 *iface = (struct cppIVRInput_IVRInput_003 *)params->linux_side;
    params->_ret = iface->GetActionOrigins( params->actionSetHandle, params->digitalActionHandle, params->originsOut, params->originOutCount );
}

void cppIVRInput_IVRInput_003_GetOriginLocalizedName( struct cppIVRInput_IVRInput_003_GetOriginLocalizedName_params *params )
{
    struct cppIVRInput_IVRInput_003 *iface = (struct cppIVRInput_IVRInput_003 *)params->linux_side;
    params->_ret = iface->GetOriginLocalizedName( params->origin, params->pchNameArray, params->unNameArraySize );
}

void cppIVRInput_IVRInput_003_GetOriginTrackedDeviceInfo( struct cppIVRInput_IVRInput_003_GetOriginTrackedDeviceInfo_params *params )
{
    struct cppIVRInput_IVRInput_003 *iface = (struct cppIVRInput_IVRInput_003 *)params->linux_side;
    uint32_t lin_unOriginInfoSize = std::min( params->unOriginInfoSize, (uint32_t)sizeof(vr::InputOriginInfo_t) );
    params->_ret = iface->GetOriginTrackedDeviceInfo( params->origin, params->pOriginInfo, lin_unOriginInfoSize );
}

void cppIVRInput_IVRInput_003_ShowActionOrigins( struct cppIVRInput_IVRInput_003_ShowActionOrigins_params *params )
{
    struct cppIVRInput_IVRInput_003 *iface = (struct cppIVRInput_IVRInput_003 *)params->linux_side;
    params->_ret = iface->ShowActionOrigins( params->actionSetHandle, params->ulActionHandle );
}

void cppIVRInput_IVRInput_003_ShowBindingsForActionSet( struct cppIVRInput_IVRInput_003_ShowBindingsForActionSet_params *params )
{
    struct cppIVRInput_IVRInput_003 *iface = (struct cppIVRInput_IVRInput_003 *)params->linux_side;
    params->_ret = iface->ShowBindingsForActionSet( params->pSets, params->unSizeOfVRSelectedActionSet_t, params->unSetCount, params->originToHighlight );
}

#ifdef __cplusplus
}
#endif
