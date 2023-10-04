/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_004_CommitWorkingCopy( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_004_CommitWorkingCopy_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_004_CommitWorkingCopy_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *)params->linux_side;
    params->_ret = iface->CommitWorkingCopy( params->configFile );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_004_RevertWorkingCopy( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_004_RevertWorkingCopy_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_004_RevertWorkingCopy_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *)params->linux_side;
    iface->RevertWorkingCopy(  );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaSize( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaSize_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaSize_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *)params->linux_side;
    params->_ret = iface->GetWorkingPlayAreaSize( params->pSizeX, params->pSizeZ );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaRect( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaRect_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaRect_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *)params->linux_side;
    params->_ret = iface->GetWorkingPlayAreaRect( params->rect );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingCollisionBoundsInfo( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingCollisionBoundsInfo_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingCollisionBoundsInfo_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *)params->linux_side;
    params->_ret = iface->GetWorkingCollisionBoundsInfo( params->pQuadsBuffer, params->punQuadsCount );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveCollisionBoundsInfo( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveCollisionBoundsInfo_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveCollisionBoundsInfo_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *)params->linux_side;
    params->_ret = iface->GetLiveCollisionBoundsInfo( params->pQuadsBuffer, params->punQuadsCount );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingSeatedZeroPoseToRawTrackingPose( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingSeatedZeroPoseToRawTrackingPose_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingSeatedZeroPoseToRawTrackingPose_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *)params->linux_side;
    params->_ret = iface->GetWorkingSeatedZeroPoseToRawTrackingPose( params->pmatSeatedZeroPoseToRawTrackingPose );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingStandingZeroPoseToRawTrackingPose( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingStandingZeroPoseToRawTrackingPose_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingStandingZeroPoseToRawTrackingPose_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *)params->linux_side;
    params->_ret = iface->GetWorkingStandingZeroPoseToRawTrackingPose( params->pmatStandingZeroPoseToRawTrackingPose );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingPlayAreaSize( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingPlayAreaSize_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingPlayAreaSize_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *)params->linux_side;
    iface->SetWorkingPlayAreaSize( params->sizeX, params->sizeZ );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingCollisionBoundsInfo( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingCollisionBoundsInfo_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingCollisionBoundsInfo_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *)params->linux_side;
    iface->SetWorkingCollisionBoundsInfo( params->pQuadsBuffer, params->unQuadsCount );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingSeatedZeroPoseToRawTrackingPose( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingSeatedZeroPoseToRawTrackingPose_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingSeatedZeroPoseToRawTrackingPose_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *)params->linux_side;
    iface->SetWorkingSeatedZeroPoseToRawTrackingPose( params->pMatSeatedZeroPoseToRawTrackingPose );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingStandingZeroPoseToRawTrackingPose( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingStandingZeroPoseToRawTrackingPose_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingStandingZeroPoseToRawTrackingPose_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *)params->linux_side;
    iface->SetWorkingStandingZeroPoseToRawTrackingPose( params->pMatStandingZeroPoseToRawTrackingPose );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_004_ReloadFromDisk( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_004_ReloadFromDisk_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_004_ReloadFromDisk_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *)params->linux_side;
    iface->ReloadFromDisk( params->configFile );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveSeatedZeroPoseToRawTrackingPose( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveSeatedZeroPoseToRawTrackingPose_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveSeatedZeroPoseToRawTrackingPose_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *)params->linux_side;
    params->_ret = iface->GetLiveSeatedZeroPoseToRawTrackingPose( params->pmatSeatedZeroPoseToRawTrackingPose );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingWallTagInfo( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingWallTagInfo_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingWallTagInfo_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *)params->linux_side;
    iface->SetWorkingWallTagInfo( params->pTagsBuffer, params->unTagCount );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveWallTagInfo( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveWallTagInfo_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveWallTagInfo_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *)params->linux_side;
    params->_ret = iface->GetLiveWallTagInfo( params->pTagsBuffer, params->punTagCount );
    return 0;
}

