/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRInput_IVRInput_005.h"
struct u_IVRInput_IVRInput_005
{
#ifdef __cplusplus
    virtual uint32_t SetActionManifestPath( const char * ) = 0;
    virtual uint32_t GetActionSetHandle( const char *, uint64_t * ) = 0;
    virtual uint32_t GetActionHandle( const char *, uint64_t * ) = 0;
    virtual uint32_t GetInputSourceHandle( const char *, uint64_t * ) = 0;
    virtual uint32_t UpdateActionState( VRActiveActionSet_t_1016 *, uint32_t, uint32_t ) = 0;
    virtual uint32_t GetDigitalActionData( uint64_t, u_InputDigitalActionData_t *, uint32_t, uint64_t ) = 0;
    virtual uint32_t GetAnalogActionData( uint64_t, u_InputAnalogActionData_t *, uint32_t, uint64_t ) = 0;
    virtual uint32_t GetPoseActionData( uint64_t, uint32_t, float, u_InputPoseActionData_t *, uint32_t, uint64_t ) = 0;
    virtual uint32_t GetSkeletalActionData( uint64_t, u_InputSkeletalActionData_t_113b *, uint32_t ) = 0;
    virtual uint32_t GetBoneCount( uint64_t, uint32_t * ) = 0;
    virtual uint32_t GetBoneHierarchy( uint64_t, int32_t *, uint32_t ) = 0;
    virtual uint32_t GetBoneName( uint64_t, int32_t, char *, uint32_t ) = 0;
    virtual uint32_t GetSkeletalReferenceTransforms( uint64_t, uint32_t, uint32_t, VRBoneTransform_t *, uint32_t ) = 0;
    virtual uint32_t GetSkeletalTrackingLevel( uint64_t, uint32_t * ) = 0;
    virtual uint32_t GetSkeletalBoneData( uint64_t, uint32_t, uint32_t, VRBoneTransform_t *, uint32_t ) = 0;
    virtual uint32_t GetSkeletalSummaryData( uint64_t, VRSkeletalSummaryData_t * ) = 0;
    virtual uint32_t GetSkeletalBoneDataCompressed( uint64_t, uint32_t, void *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t DecompressSkeletalBoneData( const void *, uint32_t, uint32_t, VRBoneTransform_t *, uint32_t ) = 0;
    virtual uint32_t TriggerHapticVibrationAction( uint64_t, float, float, float, float, uint64_t ) = 0;
    virtual uint32_t GetActionOrigins( uint64_t, uint64_t, uint64_t *, uint32_t ) = 0;
    virtual uint32_t GetOriginLocalizedName( uint64_t, char *, uint32_t, int32_t ) = 0;
    virtual uint32_t GetOriginTrackedDeviceInfo( uint64_t, u_InputOriginInfo_t *, uint32_t ) = 0;
    virtual uint32_t ShowActionOrigins( uint64_t, uint64_t ) = 0;
    virtual uint32_t ShowBindingsForActionSet( VRActiveActionSet_t_1016 *, uint32_t, uint32_t, uint64_t ) = 0;
    virtual bool IsUsingLegacyInput(  ) = 0;
#endif /* __cplusplus */
};

void cppIVRInput_IVRInput_005_SetActionManifestPath( struct cppIVRInput_IVRInput_005_SetActionManifestPath_params *params )
{
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetActionManifestPath( params->pchActionManifestPath );
}

void cppIVRInput_IVRInput_005_GetActionSetHandle( struct cppIVRInput_IVRInput_005_GetActionSetHandle_params *params )
{
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetActionSetHandle( params->pchActionSetName, params->pHandle );
}

void cppIVRInput_IVRInput_005_GetActionHandle( struct cppIVRInput_IVRInput_005_GetActionHandle_params *params )
{
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetActionHandle( params->pchActionName, params->pHandle );
}

void cppIVRInput_IVRInput_005_GetInputSourceHandle( struct cppIVRInput_IVRInput_005_GetInputSourceHandle_params *params )
{
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetInputSourceHandle( params->pchInputSourcePath, params->pHandle );
}

void cppIVRInput_IVRInput_005_UpdateActionState( struct cppIVRInput_IVRInput_005_UpdateActionState_params *params )
{
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->UpdateActionState( params->pSets, params->unSizeOfVRSelectedActionSet_t, params->unSetCount );
}

void cppIVRInput_IVRInput_005_GetDigitalActionData( struct cppIVRInput_IVRInput_005_GetDigitalActionData_params *params )
{
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    u_InputDigitalActionData_t u_pActionData;
    if (params->pActionData) u_pActionData = *params->pActionData;
    uint32_t u_unActionDataSize = params->unActionDataSize ? sizeof(u_pActionData) : 0;
    params->_ret = (uint32_t)iface->GetDigitalActionData( params->action, params->pActionData ? &u_pActionData : nullptr, u_unActionDataSize, params->ulRestrictToDevice );
    if (params->pActionData) *params->pActionData = u_pActionData;
}

void cppIVRInput_IVRInput_005_GetAnalogActionData( struct cppIVRInput_IVRInput_005_GetAnalogActionData_params *params )
{
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    u_InputAnalogActionData_t u_pActionData;
    if (params->pActionData) u_pActionData = *params->pActionData;
    uint32_t u_unActionDataSize = params->unActionDataSize ? sizeof(u_pActionData) : 0;
    params->_ret = (uint32_t)iface->GetAnalogActionData( params->action, params->pActionData ? &u_pActionData : nullptr, u_unActionDataSize, params->ulRestrictToDevice );
    if (params->pActionData) *params->pActionData = u_pActionData;
}

void cppIVRInput_IVRInput_005_GetPoseActionData( struct cppIVRInput_IVRInput_005_GetPoseActionData_params *params )
{
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    u_InputPoseActionData_t u_pActionData;
    if (params->pActionData) u_pActionData = *params->pActionData;
    uint32_t u_unActionDataSize = params->unActionDataSize ? sizeof(u_pActionData) : 0;
    params->_ret = (uint32_t)iface->GetPoseActionData( params->action, params->eOrigin, params->fPredictedSecondsFromNow, params->pActionData ? &u_pActionData : nullptr, u_unActionDataSize, params->ulRestrictToDevice );
    if (params->pActionData) *params->pActionData = u_pActionData;
}

void cppIVRInput_IVRInput_005_GetSkeletalActionData( struct cppIVRInput_IVRInput_005_GetSkeletalActionData_params *params )
{
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    u_InputSkeletalActionData_t_113b u_pActionData;
    if (params->pActionData) u_pActionData = *params->pActionData;
    uint32_t u_unActionDataSize = params->unActionDataSize ? sizeof(u_pActionData) : 0;
    params->_ret = (uint32_t)iface->GetSkeletalActionData( params->action, params->pActionData ? &u_pActionData : nullptr, u_unActionDataSize );
    if (params->pActionData) *params->pActionData = u_pActionData;
}

void cppIVRInput_IVRInput_005_GetBoneCount( struct cppIVRInput_IVRInput_005_GetBoneCount_params *params )
{
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetBoneCount( params->action, params->pBoneCount );
}

void cppIVRInput_IVRInput_005_GetBoneHierarchy( struct cppIVRInput_IVRInput_005_GetBoneHierarchy_params *params )
{
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetBoneHierarchy( params->action, params->pParentIndices, params->unIndexArayCount );
}

void cppIVRInput_IVRInput_005_GetBoneName( struct cppIVRInput_IVRInput_005_GetBoneName_params *params )
{
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetBoneName( params->action, params->nBoneIndex, params->pchBoneName, params->unNameBufferSize );
}

void cppIVRInput_IVRInput_005_GetSkeletalReferenceTransforms( struct cppIVRInput_IVRInput_005_GetSkeletalReferenceTransforms_params *params )
{
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetSkeletalReferenceTransforms( params->action, params->eTransformSpace, params->eReferencePose, params->pTransformArray, params->unTransformArrayCount );
}

void cppIVRInput_IVRInput_005_GetSkeletalTrackingLevel( struct cppIVRInput_IVRInput_005_GetSkeletalTrackingLevel_params *params )
{
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetSkeletalTrackingLevel( params->action, params->pSkeletalTrackingLevel );
}

void cppIVRInput_IVRInput_005_GetSkeletalBoneData( struct cppIVRInput_IVRInput_005_GetSkeletalBoneData_params *params )
{
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetSkeletalBoneData( params->action, params->eTransformSpace, params->eMotionRange, params->pTransformArray, params->unTransformArrayCount );
}

void cppIVRInput_IVRInput_005_GetSkeletalSummaryData( struct cppIVRInput_IVRInput_005_GetSkeletalSummaryData_params *params )
{
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetSkeletalSummaryData( params->action, params->pSkeletalSummaryData );
}

void cppIVRInput_IVRInput_005_GetSkeletalBoneDataCompressed( struct cppIVRInput_IVRInput_005_GetSkeletalBoneDataCompressed_params *params )
{
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetSkeletalBoneDataCompressed( params->action, params->eMotionRange, params->pvCompressedData, params->unCompressedSize, params->punRequiredCompressedSize );
}

void cppIVRInput_IVRInput_005_DecompressSkeletalBoneData( struct cppIVRInput_IVRInput_005_DecompressSkeletalBoneData_params *params )
{
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->DecompressSkeletalBoneData( params->pvCompressedBuffer, params->unCompressedBufferSize, params->eTransformSpace, params->pTransformArray, params->unTransformArrayCount );
}

void cppIVRInput_IVRInput_005_TriggerHapticVibrationAction( struct cppIVRInput_IVRInput_005_TriggerHapticVibrationAction_params *params )
{
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->TriggerHapticVibrationAction( params->action, params->fStartSecondsFromNow, params->fDurationSeconds, params->fFrequency, params->fAmplitude, params->ulRestrictToDevice );
}

void cppIVRInput_IVRInput_005_GetActionOrigins( struct cppIVRInput_IVRInput_005_GetActionOrigins_params *params )
{
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetActionOrigins( params->actionSetHandle, params->digitalActionHandle, params->originsOut, params->originOutCount );
}

void cppIVRInput_IVRInput_005_GetOriginLocalizedName( struct cppIVRInput_IVRInput_005_GetOriginLocalizedName_params *params )
{
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOriginLocalizedName( params->origin, params->pchNameArray, params->unNameArraySize, params->unStringSectionsToInclude );
}

void cppIVRInput_IVRInput_005_GetOriginTrackedDeviceInfo( struct cppIVRInput_IVRInput_005_GetOriginTrackedDeviceInfo_params *params )
{
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    u_InputOriginInfo_t u_pOriginInfo;
    if (params->pOriginInfo) u_pOriginInfo = *params->pOriginInfo;
    uint32_t u_unOriginInfoSize = params->unOriginInfoSize ? sizeof(u_pOriginInfo) : 0;
    params->_ret = (uint32_t)iface->GetOriginTrackedDeviceInfo( params->origin, params->pOriginInfo ? &u_pOriginInfo : nullptr, u_unOriginInfoSize );
    if (params->pOriginInfo) *params->pOriginInfo = u_pOriginInfo;
}

void cppIVRInput_IVRInput_005_ShowActionOrigins( struct cppIVRInput_IVRInput_005_ShowActionOrigins_params *params )
{
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowActionOrigins( params->actionSetHandle, params->ulActionHandle );
}

void cppIVRInput_IVRInput_005_ShowBindingsForActionSet( struct cppIVRInput_IVRInput_005_ShowBindingsForActionSet_params *params )
{
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowBindingsForActionSet( params->pSets, params->unSizeOfVRSelectedActionSet_t, params->unSetCount, params->originToHighlight );
}

void cppIVRInput_IVRInput_005_IsUsingLegacyInput( struct cppIVRInput_IVRInput_005_IsUsingLegacyInput_params *params )
{
    struct u_IVRInput_IVRInput_005 *iface = (struct u_IVRInput_IVRInput_005 *)params->linux_side;
    params->_ret = (bool)iface->IsUsingLegacyInput(  );
}

