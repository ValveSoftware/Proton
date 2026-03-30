/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS IVRInput_IVRInput_011_SetActionManifestPath( void *args )
{
    struct IVRInput_IVRInput_011_SetActionManifestPath_params *params = (struct IVRInput_IVRInput_011_SetActionManifestPath_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    char *u_pchActionManifestPath = vrclient_dos_to_unix_path( params->pchActionManifestPath );
    params->_ret = iface->SetActionManifestPath( u_pchActionManifestPath );
    vrclient_free_path( u_pchActionManifestPath );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRInput_IVRInput_011_SetActionManifestPath( void *args )
{
    struct wow64_IVRInput_IVRInput_011_SetActionManifestPath_params *params = (struct wow64_IVRInput_IVRInput_011_SetActionManifestPath_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    char *u_pchActionManifestPath = vrclient_dos_to_unix_path( params->pchActionManifestPath );
    params->_ret = iface->SetActionManifestPath( u_pchActionManifestPath );
    vrclient_free_path( u_pchActionManifestPath );
    return 0;
}
#endif

NTSTATUS IVRInput_IVRInput_011_GetActionSetHandle( void *args )
{
    struct IVRInput_IVRInput_011_GetActionSetHandle_params *params = (struct IVRInput_IVRInput_011_GetActionSetHandle_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->GetActionSetHandle( params->pchActionSetName, params->pHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRInput_IVRInput_011_GetActionSetHandle( void *args )
{
    struct wow64_IVRInput_IVRInput_011_GetActionSetHandle_params *params = (struct wow64_IVRInput_IVRInput_011_GetActionSetHandle_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->GetActionSetHandle( params->pchActionSetName, params->pHandle );
    return 0;
}
#endif

NTSTATUS IVRInput_IVRInput_011_GetActionHandle( void *args )
{
    struct IVRInput_IVRInput_011_GetActionHandle_params *params = (struct IVRInput_IVRInput_011_GetActionHandle_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->GetActionHandle( params->pchActionName, params->pHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRInput_IVRInput_011_GetActionHandle( void *args )
{
    struct wow64_IVRInput_IVRInput_011_GetActionHandle_params *params = (struct wow64_IVRInput_IVRInput_011_GetActionHandle_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->GetActionHandle( params->pchActionName, params->pHandle );
    return 0;
}
#endif

NTSTATUS IVRInput_IVRInput_011_GetInputSourceHandle( void *args )
{
    struct IVRInput_IVRInput_011_GetInputSourceHandle_params *params = (struct IVRInput_IVRInput_011_GetInputSourceHandle_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->GetInputSourceHandle( params->pchInputSourcePath, params->pHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRInput_IVRInput_011_GetInputSourceHandle( void *args )
{
    struct wow64_IVRInput_IVRInput_011_GetInputSourceHandle_params *params = (struct wow64_IVRInput_IVRInput_011_GetInputSourceHandle_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->GetInputSourceHandle( params->pchInputSourcePath, params->pHandle );
    return 0;
}
#endif

NTSTATUS IVRInput_IVRInput_011_UpdateActionState( void *args )
{
    struct IVRInput_IVRInput_011_UpdateActionState_params *params = (struct IVRInput_IVRInput_011_UpdateActionState_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->UpdateActionState( params->pSets, params->unSizeOfVRSelectedActionSet_t, params->unSetCount );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRInput_IVRInput_011_UpdateActionState( void *args )
{
    struct wow64_IVRInput_IVRInput_011_UpdateActionState_params *params = (struct wow64_IVRInput_IVRInput_011_UpdateActionState_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->UpdateActionState( params->pSets, params->unSizeOfVRSelectedActionSet_t, params->unSetCount );
    return 0;
}
#endif

NTSTATUS IVRInput_IVRInput_011_GetDigitalActionData( void *args )
{
    struct IVRInput_IVRInput_011_GetDigitalActionData_params *params = (struct IVRInput_IVRInput_011_GetDigitalActionData_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    u_InputDigitalActionData_t u_pActionData;
    if (params->pActionData) u_pActionData = *params->pActionData;
    uint32_t u_unActionDataSize = params->unActionDataSize ? sizeof(u_pActionData) : 0;
    params->_ret = iface->GetDigitalActionData( params->action, params->pActionData ? &u_pActionData : nullptr, u_unActionDataSize, params->ulRestrictToDevice );
    if (params->pActionData) *params->pActionData = u_pActionData;
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRInput_IVRInput_011_GetDigitalActionData( void *args )
{
    struct wow64_IVRInput_IVRInput_011_GetDigitalActionData_params *params = (struct wow64_IVRInput_IVRInput_011_GetDigitalActionData_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    u_InputDigitalActionData_t u_pActionData;
    if (params->pActionData) u_pActionData = *params->pActionData;
    uint32_t u_unActionDataSize = params->unActionDataSize ? sizeof(u_pActionData) : 0;
    params->_ret = iface->GetDigitalActionData( params->action, params->pActionData ? &u_pActionData : nullptr, u_unActionDataSize, params->ulRestrictToDevice );
    if (params->pActionData) *params->pActionData = u_pActionData;
    return 0;
}
#endif

NTSTATUS IVRInput_IVRInput_011_GetAnalogActionData( void *args )
{
    struct IVRInput_IVRInput_011_GetAnalogActionData_params *params = (struct IVRInput_IVRInput_011_GetAnalogActionData_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    u_InputAnalogActionData_t u_pActionData;
    if (params->pActionData) u_pActionData = *params->pActionData;
    uint32_t u_unActionDataSize = params->unActionDataSize ? sizeof(u_pActionData) : 0;
    params->_ret = iface->GetAnalogActionData( params->action, params->pActionData ? &u_pActionData : nullptr, u_unActionDataSize, params->ulRestrictToDevice );
    if (params->pActionData) *params->pActionData = u_pActionData;
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRInput_IVRInput_011_GetAnalogActionData( void *args )
{
    struct wow64_IVRInput_IVRInput_011_GetAnalogActionData_params *params = (struct wow64_IVRInput_IVRInput_011_GetAnalogActionData_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    u_InputAnalogActionData_t u_pActionData;
    if (params->pActionData) u_pActionData = *params->pActionData;
    uint32_t u_unActionDataSize = params->unActionDataSize ? sizeof(u_pActionData) : 0;
    params->_ret = iface->GetAnalogActionData( params->action, params->pActionData ? &u_pActionData : nullptr, u_unActionDataSize, params->ulRestrictToDevice );
    if (params->pActionData) *params->pActionData = u_pActionData;
    return 0;
}
#endif

NTSTATUS IVRInput_IVRInput_011_GetPoseActionDataRelativeToNow( void *args )
{
    struct IVRInput_IVRInput_011_GetPoseActionDataRelativeToNow_params *params = (struct IVRInput_IVRInput_011_GetPoseActionDataRelativeToNow_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    u_InputPoseActionData_t u_pActionData;
    if (params->pActionData) u_pActionData = *params->pActionData;
    uint32_t u_unActionDataSize = params->unActionDataSize ? sizeof(u_pActionData) : 0;
    params->_ret = iface->GetPoseActionDataRelativeToNow( params->action, params->eOrigin, params->fPredictedSecondsFromNow, params->pActionData ? &u_pActionData : nullptr, u_unActionDataSize, params->ulRestrictToDevice );
    if (params->pActionData) *params->pActionData = u_pActionData;
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRInput_IVRInput_011_GetPoseActionDataRelativeToNow( void *args )
{
    struct wow64_IVRInput_IVRInput_011_GetPoseActionDataRelativeToNow_params *params = (struct wow64_IVRInput_IVRInput_011_GetPoseActionDataRelativeToNow_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    u_InputPoseActionData_t u_pActionData;
    if (params->pActionData) u_pActionData = *params->pActionData;
    uint32_t u_unActionDataSize = params->unActionDataSize ? sizeof(u_pActionData) : 0;
    params->_ret = iface->GetPoseActionDataRelativeToNow( params->action, params->eOrigin, params->fPredictedSecondsFromNow, params->pActionData ? &u_pActionData : nullptr, u_unActionDataSize, params->ulRestrictToDevice );
    if (params->pActionData) *params->pActionData = u_pActionData;
    return 0;
}
#endif

NTSTATUS IVRInput_IVRInput_011_GetPoseActionDataForNextFrame( void *args )
{
    struct IVRInput_IVRInput_011_GetPoseActionDataForNextFrame_params *params = (struct IVRInput_IVRInput_011_GetPoseActionDataForNextFrame_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    u_InputPoseActionData_t u_pActionData;
    if (params->pActionData) u_pActionData = *params->pActionData;
    uint32_t u_unActionDataSize = params->unActionDataSize ? sizeof(u_pActionData) : 0;
    params->_ret = iface->GetPoseActionDataForNextFrame( params->action, params->eOrigin, params->pActionData ? &u_pActionData : nullptr, u_unActionDataSize, params->ulRestrictToDevice );
    if (params->pActionData) *params->pActionData = u_pActionData;
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRInput_IVRInput_011_GetPoseActionDataForNextFrame( void *args )
{
    struct wow64_IVRInput_IVRInput_011_GetPoseActionDataForNextFrame_params *params = (struct wow64_IVRInput_IVRInput_011_GetPoseActionDataForNextFrame_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    u_InputPoseActionData_t u_pActionData;
    if (params->pActionData) u_pActionData = *params->pActionData;
    uint32_t u_unActionDataSize = params->unActionDataSize ? sizeof(u_pActionData) : 0;
    params->_ret = iface->GetPoseActionDataForNextFrame( params->action, params->eOrigin, params->pActionData ? &u_pActionData : nullptr, u_unActionDataSize, params->ulRestrictToDevice );
    if (params->pActionData) *params->pActionData = u_pActionData;
    return 0;
}
#endif

NTSTATUS IVRInput_IVRInput_011_GetSkeletalActionData( void *args )
{
    struct IVRInput_IVRInput_011_GetSkeletalActionData_params *params = (struct IVRInput_IVRInput_011_GetSkeletalActionData_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    u_InputSkeletalActionData_t_113b u_pActionData;
    if (params->pActionData) u_pActionData = *params->pActionData;
    uint32_t u_unActionDataSize = params->unActionDataSize ? sizeof(u_pActionData) : 0;
    params->_ret = iface->GetSkeletalActionData( params->action, params->pActionData ? &u_pActionData : nullptr, u_unActionDataSize );
    if (params->pActionData) *params->pActionData = u_pActionData;
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRInput_IVRInput_011_GetSkeletalActionData( void *args )
{
    struct wow64_IVRInput_IVRInput_011_GetSkeletalActionData_params *params = (struct wow64_IVRInput_IVRInput_011_GetSkeletalActionData_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    u_InputSkeletalActionData_t_113b u_pActionData;
    if (params->pActionData) u_pActionData = *params->pActionData;
    uint32_t u_unActionDataSize = params->unActionDataSize ? sizeof(u_pActionData) : 0;
    params->_ret = iface->GetSkeletalActionData( params->action, params->pActionData ? &u_pActionData : nullptr, u_unActionDataSize );
    if (params->pActionData) *params->pActionData = u_pActionData;
    return 0;
}
#endif

NTSTATUS IVRInput_IVRInput_011_GetDominantHand( void *args )
{
    struct IVRInput_IVRInput_011_GetDominantHand_params *params = (struct IVRInput_IVRInput_011_GetDominantHand_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->GetDominantHand( params->peDominantHand );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRInput_IVRInput_011_GetDominantHand( void *args )
{
    struct wow64_IVRInput_IVRInput_011_GetDominantHand_params *params = (struct wow64_IVRInput_IVRInput_011_GetDominantHand_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->GetDominantHand( params->peDominantHand );
    return 0;
}
#endif

NTSTATUS IVRInput_IVRInput_011_SetDominantHand( void *args )
{
    struct IVRInput_IVRInput_011_SetDominantHand_params *params = (struct IVRInput_IVRInput_011_SetDominantHand_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->SetDominantHand( params->eDominantHand );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRInput_IVRInput_011_SetDominantHand( void *args )
{
    struct wow64_IVRInput_IVRInput_011_SetDominantHand_params *params = (struct wow64_IVRInput_IVRInput_011_SetDominantHand_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->SetDominantHand( params->eDominantHand );
    return 0;
}
#endif

NTSTATUS IVRInput_IVRInput_011_GetEyeTrackingDataRelativeToNow( void *args )
{
    struct IVRInput_IVRInput_011_GetEyeTrackingDataRelativeToNow_params *params = (struct IVRInput_IVRInput_011_GetEyeTrackingDataRelativeToNow_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->GetEyeTrackingDataRelativeToNow( params->action, params->eOrigin, params->fPredictedSecondsFromNow, params->pEyeTrackingData, params->ulEyeTrackingDataSize );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRInput_IVRInput_011_GetEyeTrackingDataRelativeToNow( void *args )
{
    struct wow64_IVRInput_IVRInput_011_GetEyeTrackingDataRelativeToNow_params *params = (struct wow64_IVRInput_IVRInput_011_GetEyeTrackingDataRelativeToNow_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->GetEyeTrackingDataRelativeToNow( params->action, params->eOrigin, params->fPredictedSecondsFromNow, params->pEyeTrackingData, params->ulEyeTrackingDataSize );
    return 0;
}
#endif

NTSTATUS IVRInput_IVRInput_011_GetEyeTrackingDataForNextFrame( void *args )
{
    struct IVRInput_IVRInput_011_GetEyeTrackingDataForNextFrame_params *params = (struct IVRInput_IVRInput_011_GetEyeTrackingDataForNextFrame_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->GetEyeTrackingDataForNextFrame( params->action, params->eOrigin, params->pEyeTrackingData, params->ulEyeTrackingDataSize );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRInput_IVRInput_011_GetEyeTrackingDataForNextFrame( void *args )
{
    struct wow64_IVRInput_IVRInput_011_GetEyeTrackingDataForNextFrame_params *params = (struct wow64_IVRInput_IVRInput_011_GetEyeTrackingDataForNextFrame_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->GetEyeTrackingDataForNextFrame( params->action, params->eOrigin, params->pEyeTrackingData, params->ulEyeTrackingDataSize );
    return 0;
}
#endif

NTSTATUS IVRInput_IVRInput_011_GetBoneCount( void *args )
{
    struct IVRInput_IVRInput_011_GetBoneCount_params *params = (struct IVRInput_IVRInput_011_GetBoneCount_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->GetBoneCount( params->action, params->pBoneCount );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRInput_IVRInput_011_GetBoneCount( void *args )
{
    struct wow64_IVRInput_IVRInput_011_GetBoneCount_params *params = (struct wow64_IVRInput_IVRInput_011_GetBoneCount_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->GetBoneCount( params->action, params->pBoneCount );
    return 0;
}
#endif

NTSTATUS IVRInput_IVRInput_011_GetBoneHierarchy( void *args )
{
    struct IVRInput_IVRInput_011_GetBoneHierarchy_params *params = (struct IVRInput_IVRInput_011_GetBoneHierarchy_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->GetBoneHierarchy( params->action, params->pParentIndices, params->unIndexArayCount );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRInput_IVRInput_011_GetBoneHierarchy( void *args )
{
    struct wow64_IVRInput_IVRInput_011_GetBoneHierarchy_params *params = (struct wow64_IVRInput_IVRInput_011_GetBoneHierarchy_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->GetBoneHierarchy( params->action, params->pParentIndices, params->unIndexArayCount );
    return 0;
}
#endif

NTSTATUS IVRInput_IVRInput_011_GetBoneName( void *args )
{
    struct IVRInput_IVRInput_011_GetBoneName_params *params = (struct IVRInput_IVRInput_011_GetBoneName_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->GetBoneName( params->action, params->nBoneIndex, params->pchBoneName, params->unNameBufferSize );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRInput_IVRInput_011_GetBoneName( void *args )
{
    struct wow64_IVRInput_IVRInput_011_GetBoneName_params *params = (struct wow64_IVRInput_IVRInput_011_GetBoneName_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->GetBoneName( params->action, params->nBoneIndex, params->pchBoneName, params->unNameBufferSize );
    return 0;
}
#endif

NTSTATUS IVRInput_IVRInput_011_GetSkeletalReferenceTransforms( void *args )
{
    struct IVRInput_IVRInput_011_GetSkeletalReferenceTransforms_params *params = (struct IVRInput_IVRInput_011_GetSkeletalReferenceTransforms_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->GetSkeletalReferenceTransforms( params->action, params->eTransformSpace, params->eReferencePose, params->pTransformArray, params->unTransformArrayCount );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRInput_IVRInput_011_GetSkeletalReferenceTransforms( void *args )
{
    struct wow64_IVRInput_IVRInput_011_GetSkeletalReferenceTransforms_params *params = (struct wow64_IVRInput_IVRInput_011_GetSkeletalReferenceTransforms_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->GetSkeletalReferenceTransforms( params->action, params->eTransformSpace, params->eReferencePose, params->pTransformArray, params->unTransformArrayCount );
    return 0;
}
#endif

NTSTATUS IVRInput_IVRInput_011_GetSkeletalTrackingLevel( void *args )
{
    struct IVRInput_IVRInput_011_GetSkeletalTrackingLevel_params *params = (struct IVRInput_IVRInput_011_GetSkeletalTrackingLevel_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->GetSkeletalTrackingLevel( params->action, params->pSkeletalTrackingLevel );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRInput_IVRInput_011_GetSkeletalTrackingLevel( void *args )
{
    struct wow64_IVRInput_IVRInput_011_GetSkeletalTrackingLevel_params *params = (struct wow64_IVRInput_IVRInput_011_GetSkeletalTrackingLevel_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->GetSkeletalTrackingLevel( params->action, params->pSkeletalTrackingLevel );
    return 0;
}
#endif

NTSTATUS IVRInput_IVRInput_011_GetSkeletalBoneData( void *args )
{
    struct IVRInput_IVRInput_011_GetSkeletalBoneData_params *params = (struct IVRInput_IVRInput_011_GetSkeletalBoneData_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->GetSkeletalBoneData( params->action, params->eTransformSpace, params->eMotionRange, params->pTransformArray, params->unTransformArrayCount );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRInput_IVRInput_011_GetSkeletalBoneData( void *args )
{
    struct wow64_IVRInput_IVRInput_011_GetSkeletalBoneData_params *params = (struct wow64_IVRInput_IVRInput_011_GetSkeletalBoneData_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->GetSkeletalBoneData( params->action, params->eTransformSpace, params->eMotionRange, params->pTransformArray, params->unTransformArrayCount );
    return 0;
}
#endif

NTSTATUS IVRInput_IVRInput_011_GetSkeletalSummaryData( void *args )
{
    struct IVRInput_IVRInput_011_GetSkeletalSummaryData_params *params = (struct IVRInput_IVRInput_011_GetSkeletalSummaryData_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->GetSkeletalSummaryData( params->action, params->eSummaryType, params->pSkeletalSummaryData );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRInput_IVRInput_011_GetSkeletalSummaryData( void *args )
{
    struct wow64_IVRInput_IVRInput_011_GetSkeletalSummaryData_params *params = (struct wow64_IVRInput_IVRInput_011_GetSkeletalSummaryData_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->GetSkeletalSummaryData( params->action, params->eSummaryType, params->pSkeletalSummaryData );
    return 0;
}
#endif

NTSTATUS IVRInput_IVRInput_011_GetSkeletalBoneDataCompressed( void *args )
{
    struct IVRInput_IVRInput_011_GetSkeletalBoneDataCompressed_params *params = (struct IVRInput_IVRInput_011_GetSkeletalBoneDataCompressed_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->GetSkeletalBoneDataCompressed( params->action, params->eMotionRange, params->pvCompressedData, params->unCompressedSize, params->punRequiredCompressedSize );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRInput_IVRInput_011_GetSkeletalBoneDataCompressed( void *args )
{
    struct wow64_IVRInput_IVRInput_011_GetSkeletalBoneDataCompressed_params *params = (struct wow64_IVRInput_IVRInput_011_GetSkeletalBoneDataCompressed_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->GetSkeletalBoneDataCompressed( params->action, params->eMotionRange, params->pvCompressedData, params->unCompressedSize, params->punRequiredCompressedSize );
    return 0;
}
#endif

NTSTATUS IVRInput_IVRInput_011_DecompressSkeletalBoneData( void *args )
{
    struct IVRInput_IVRInput_011_DecompressSkeletalBoneData_params *params = (struct IVRInput_IVRInput_011_DecompressSkeletalBoneData_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->DecompressSkeletalBoneData( params->pvCompressedBuffer, params->unCompressedBufferSize, params->eTransformSpace, params->pTransformArray, params->unTransformArrayCount );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRInput_IVRInput_011_DecompressSkeletalBoneData( void *args )
{
    struct wow64_IVRInput_IVRInput_011_DecompressSkeletalBoneData_params *params = (struct wow64_IVRInput_IVRInput_011_DecompressSkeletalBoneData_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->DecompressSkeletalBoneData( params->pvCompressedBuffer, params->unCompressedBufferSize, params->eTransformSpace, params->pTransformArray, params->unTransformArrayCount );
    return 0;
}
#endif

NTSTATUS IVRInput_IVRInput_011_TriggerHapticVibrationAction( void *args )
{
    struct IVRInput_IVRInput_011_TriggerHapticVibrationAction_params *params = (struct IVRInput_IVRInput_011_TriggerHapticVibrationAction_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->TriggerHapticVibrationAction( params->action, params->fStartSecondsFromNow, params->fDurationSeconds, params->fFrequency, params->fAmplitude, params->ulRestrictToDevice );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRInput_IVRInput_011_TriggerHapticVibrationAction( void *args )
{
    struct wow64_IVRInput_IVRInput_011_TriggerHapticVibrationAction_params *params = (struct wow64_IVRInput_IVRInput_011_TriggerHapticVibrationAction_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->TriggerHapticVibrationAction( params->action, params->fStartSecondsFromNow, params->fDurationSeconds, params->fFrequency, params->fAmplitude, params->ulRestrictToDevice );
    return 0;
}
#endif

NTSTATUS IVRInput_IVRInput_011_GetActionOrigins( void *args )
{
    struct IVRInput_IVRInput_011_GetActionOrigins_params *params = (struct IVRInput_IVRInput_011_GetActionOrigins_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->GetActionOrigins( params->actionSetHandle, params->digitalActionHandle, params->originsOut, params->originOutCount );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRInput_IVRInput_011_GetActionOrigins( void *args )
{
    struct wow64_IVRInput_IVRInput_011_GetActionOrigins_params *params = (struct wow64_IVRInput_IVRInput_011_GetActionOrigins_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->GetActionOrigins( params->actionSetHandle, params->digitalActionHandle, params->originsOut, params->originOutCount );
    return 0;
}
#endif

NTSTATUS IVRInput_IVRInput_011_GetOriginLocalizedName( void *args )
{
    struct IVRInput_IVRInput_011_GetOriginLocalizedName_params *params = (struct IVRInput_IVRInput_011_GetOriginLocalizedName_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->GetOriginLocalizedName( params->origin, params->pchNameArray, params->unNameArraySize, params->unStringSectionsToInclude );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRInput_IVRInput_011_GetOriginLocalizedName( void *args )
{
    struct wow64_IVRInput_IVRInput_011_GetOriginLocalizedName_params *params = (struct wow64_IVRInput_IVRInput_011_GetOriginLocalizedName_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->GetOriginLocalizedName( params->origin, params->pchNameArray, params->unNameArraySize, params->unStringSectionsToInclude );
    return 0;
}
#endif

NTSTATUS IVRInput_IVRInput_011_GetOriginTrackedDeviceInfo( void *args )
{
    struct IVRInput_IVRInput_011_GetOriginTrackedDeviceInfo_params *params = (struct IVRInput_IVRInput_011_GetOriginTrackedDeviceInfo_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    u_InputOriginInfo_t u_pOriginInfo;
    if (params->pOriginInfo) u_pOriginInfo = *params->pOriginInfo;
    uint32_t u_unOriginInfoSize = params->unOriginInfoSize ? sizeof(u_pOriginInfo) : 0;
    params->_ret = iface->GetOriginTrackedDeviceInfo( params->origin, params->pOriginInfo ? &u_pOriginInfo : nullptr, u_unOriginInfoSize );
    if (params->pOriginInfo) *params->pOriginInfo = u_pOriginInfo;
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRInput_IVRInput_011_GetOriginTrackedDeviceInfo( void *args )
{
    struct wow64_IVRInput_IVRInput_011_GetOriginTrackedDeviceInfo_params *params = (struct wow64_IVRInput_IVRInput_011_GetOriginTrackedDeviceInfo_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    u_InputOriginInfo_t u_pOriginInfo;
    if (params->pOriginInfo) u_pOriginInfo = *params->pOriginInfo;
    uint32_t u_unOriginInfoSize = params->unOriginInfoSize ? sizeof(u_pOriginInfo) : 0;
    params->_ret = iface->GetOriginTrackedDeviceInfo( params->origin, params->pOriginInfo ? &u_pOriginInfo : nullptr, u_unOriginInfoSize );
    if (params->pOriginInfo) *params->pOriginInfo = u_pOriginInfo;
    return 0;
}
#endif

NTSTATUS IVRInput_IVRInput_011_GetActionBindingInfo( void *args )
{
    struct IVRInput_IVRInput_011_GetActionBindingInfo_params *params = (struct IVRInput_IVRInput_011_GetActionBindingInfo_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->GetActionBindingInfo( params->action, params->pOriginInfo, params->unBindingInfoSize, params->unBindingInfoCount, params->punReturnedBindingInfoCount );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRInput_IVRInput_011_GetActionBindingInfo( void *args )
{
    struct wow64_IVRInput_IVRInput_011_GetActionBindingInfo_params *params = (struct wow64_IVRInput_IVRInput_011_GetActionBindingInfo_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->GetActionBindingInfo( params->action, params->pOriginInfo, params->unBindingInfoSize, params->unBindingInfoCount, params->punReturnedBindingInfoCount );
    return 0;
}
#endif

NTSTATUS IVRInput_IVRInput_011_ShowActionOrigins( void *args )
{
    struct IVRInput_IVRInput_011_ShowActionOrigins_params *params = (struct IVRInput_IVRInput_011_ShowActionOrigins_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->ShowActionOrigins( params->actionSetHandle, params->ulActionHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRInput_IVRInput_011_ShowActionOrigins( void *args )
{
    struct wow64_IVRInput_IVRInput_011_ShowActionOrigins_params *params = (struct wow64_IVRInput_IVRInput_011_ShowActionOrigins_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->ShowActionOrigins( params->actionSetHandle, params->ulActionHandle );
    return 0;
}
#endif

NTSTATUS IVRInput_IVRInput_011_ShowBindingsForActionSet( void *args )
{
    struct IVRInput_IVRInput_011_ShowBindingsForActionSet_params *params = (struct IVRInput_IVRInput_011_ShowBindingsForActionSet_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->ShowBindingsForActionSet( params->pSets, params->unSizeOfVRSelectedActionSet_t, params->unSetCount, params->originToHighlight );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRInput_IVRInput_011_ShowBindingsForActionSet( void *args )
{
    struct wow64_IVRInput_IVRInput_011_ShowBindingsForActionSet_params *params = (struct wow64_IVRInput_IVRInput_011_ShowBindingsForActionSet_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->ShowBindingsForActionSet( params->pSets, params->unSizeOfVRSelectedActionSet_t, params->unSetCount, params->originToHighlight );
    return 0;
}
#endif

NTSTATUS IVRInput_IVRInput_011_GetComponentStateForBinding( void *args )
{
    struct IVRInput_IVRInput_011_GetComponentStateForBinding_params *params = (struct IVRInput_IVRInput_011_GetComponentStateForBinding_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->GetComponentStateForBinding( params->pchRenderModelName, params->pchComponentName, params->pOriginInfo, params->unBindingInfoSize, params->unBindingInfoCount, params->pComponentState );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRInput_IVRInput_011_GetComponentStateForBinding( void *args )
{
    struct wow64_IVRInput_IVRInput_011_GetComponentStateForBinding_params *params = (struct wow64_IVRInput_IVRInput_011_GetComponentStateForBinding_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->GetComponentStateForBinding( params->pchRenderModelName, params->pchComponentName, params->pOriginInfo, params->unBindingInfoSize, params->unBindingInfoCount, params->pComponentState );
    return 0;
}
#endif

NTSTATUS IVRInput_IVRInput_011_IsUsingLegacyInput( void *args )
{
    struct IVRInput_IVRInput_011_IsUsingLegacyInput_params *params = (struct IVRInput_IVRInput_011_IsUsingLegacyInput_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->IsUsingLegacyInput(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRInput_IVRInput_011_IsUsingLegacyInput( void *args )
{
    struct wow64_IVRInput_IVRInput_011_IsUsingLegacyInput_params *params = (struct wow64_IVRInput_IVRInput_011_IsUsingLegacyInput_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->IsUsingLegacyInput(  );
    return 0;
}
#endif

NTSTATUS IVRInput_IVRInput_011_OpenBindingUI( void *args )
{
    struct IVRInput_IVRInput_011_OpenBindingUI_params *params = (struct IVRInput_IVRInput_011_OpenBindingUI_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->OpenBindingUI( params->pchAppKey, params->ulActionSetHandle, params->ulDeviceHandle, params->bShowOnDesktop );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRInput_IVRInput_011_OpenBindingUI( void *args )
{
    struct wow64_IVRInput_IVRInput_011_OpenBindingUI_params *params = (struct wow64_IVRInput_IVRInput_011_OpenBindingUI_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->OpenBindingUI( params->pchAppKey, params->ulActionSetHandle, params->ulDeviceHandle, params->bShowOnDesktop );
    return 0;
}
#endif

NTSTATUS IVRInput_IVRInput_011_GetBindingVariant( void *args )
{
    struct IVRInput_IVRInput_011_GetBindingVariant_params *params = (struct IVRInput_IVRInput_011_GetBindingVariant_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->GetBindingVariant( params->ulDevicePath, params->pchVariantArray, params->unVariantArraySize );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRInput_IVRInput_011_GetBindingVariant( void *args )
{
    struct wow64_IVRInput_IVRInput_011_GetBindingVariant_params *params = (struct wow64_IVRInput_IVRInput_011_GetBindingVariant_params *)args;
    struct u_IVRInput_IVRInput_011 *iface = (struct u_IVRInput_IVRInput_011 *)params->u_iface;
    params->_ret = iface->GetBindingVariant( params->ulDevicePath, params->pchVariantArray, params->unVariantArraySize );
    return 0;
}
#endif

