/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_005_CommitWorkingCopy( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_005_CommitWorkingCopy_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_005_CommitWorkingCopy_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *)params->linux_side;
    params->_ret = iface->CommitWorkingCopy( params->configFile );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_005_RevertWorkingCopy( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_005_RevertWorkingCopy_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_005_RevertWorkingCopy_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *)params->linux_side;
    iface->RevertWorkingCopy(  );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaSize( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaSize_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaSize_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *)params->linux_side;
    params->_ret = iface->GetWorkingPlayAreaSize( params->pSizeX, params->pSizeZ );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaRect( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaRect_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaRect_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *)params->linux_side;
    params->_ret = iface->GetWorkingPlayAreaRect( params->rect );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingCollisionBoundsInfo( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingCollisionBoundsInfo_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingCollisionBoundsInfo_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *)params->linux_side;
    params->_ret = iface->GetWorkingCollisionBoundsInfo( params->pQuadsBuffer, params->punQuadsCount );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsInfo( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsInfo_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsInfo_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *)params->linux_side;
    params->_ret = iface->GetLiveCollisionBoundsInfo( params->pQuadsBuffer, params->punQuadsCount );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingSeatedZeroPoseToRawTrackingPose( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingSeatedZeroPoseToRawTrackingPose_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingSeatedZeroPoseToRawTrackingPose_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *)params->linux_side;
    params->_ret = iface->GetWorkingSeatedZeroPoseToRawTrackingPose( params->pmatSeatedZeroPoseToRawTrackingPose );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingStandingZeroPoseToRawTrackingPose( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingStandingZeroPoseToRawTrackingPose_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingStandingZeroPoseToRawTrackingPose_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *)params->linux_side;
    params->_ret = iface->GetWorkingStandingZeroPoseToRawTrackingPose( params->pmatStandingZeroPoseToRawTrackingPose );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPlayAreaSize( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPlayAreaSize_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPlayAreaSize_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *)params->linux_side;
    iface->SetWorkingPlayAreaSize( params->sizeX, params->sizeZ );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsInfo( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsInfo_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsInfo_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *)params->linux_side;
    iface->SetWorkingCollisionBoundsInfo( params->pQuadsBuffer, params->unQuadsCount );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingSeatedZeroPoseToRawTrackingPose( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingSeatedZeroPoseToRawTrackingPose_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingSeatedZeroPoseToRawTrackingPose_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *)params->linux_side;
    iface->SetWorkingSeatedZeroPoseToRawTrackingPose( params->pMatSeatedZeroPoseToRawTrackingPose );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingStandingZeroPoseToRawTrackingPose( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingStandingZeroPoseToRawTrackingPose_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingStandingZeroPoseToRawTrackingPose_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *)params->linux_side;
    iface->SetWorkingStandingZeroPoseToRawTrackingPose( params->pMatStandingZeroPoseToRawTrackingPose );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_005_ReloadFromDisk( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_005_ReloadFromDisk_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_005_ReloadFromDisk_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *)params->linux_side;
    iface->ReloadFromDisk( params->configFile );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveSeatedZeroPoseToRawTrackingPose( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveSeatedZeroPoseToRawTrackingPose_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveSeatedZeroPoseToRawTrackingPose_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *)params->linux_side;
    params->_ret = iface->GetLiveSeatedZeroPoseToRawTrackingPose( params->pmatSeatedZeroPoseToRawTrackingPose );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsTagsInfo( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsTagsInfo_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsTagsInfo_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *)params->linux_side;
    iface->SetWorkingCollisionBoundsTagsInfo( params->pTagsBuffer, params->unTagCount );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsTagsInfo( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsTagsInfo_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsTagsInfo_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *)params->linux_side;
    params->_ret = iface->GetLiveCollisionBoundsTagsInfo( params->pTagsBuffer, params->punTagCount );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPhysicalBoundsInfo( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPhysicalBoundsInfo_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPhysicalBoundsInfo_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *)params->linux_side;
    params->_ret = iface->SetWorkingPhysicalBoundsInfo( params->pQuadsBuffer, params->unQuadsCount );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_005_GetLivePhysicalBoundsInfo( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_005_GetLivePhysicalBoundsInfo_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_005_GetLivePhysicalBoundsInfo_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *)params->linux_side;
    params->_ret = iface->GetLivePhysicalBoundsInfo( params->pQuadsBuffer, params->punQuadsCount );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_005_ExportLiveToBuffer( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_005_ExportLiveToBuffer_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_005_ExportLiveToBuffer_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *)params->linux_side;
    params->_ret = iface->ExportLiveToBuffer( params->pBuffer, params->pnBufferLength );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_005_ImportFromBufferToWorking( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_005_ImportFromBufferToWorking_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_005_ImportFromBufferToWorking_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *)params->linux_side;
    params->_ret = iface->ImportFromBufferToWorking( params->pBuffer, params->nImportFlags );
    return 0;
}

