/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRChaperoneSetup_IVRChaperoneSetup_004.h"
void cppIVRChaperoneSetup_IVRChaperoneSetup_004_CommitWorkingCopy( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_CommitWorkingCopy_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *)params->linux_side;
    params->_ret = (bool)iface->CommitWorkingCopy( params->configFile );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_004_RevertWorkingCopy( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_RevertWorkingCopy_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *)params->linux_side;
    iface->RevertWorkingCopy(  );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaSize( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaSize_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *)params->linux_side;
    params->_ret = (bool)iface->GetWorkingPlayAreaSize( params->pSizeX, params->pSizeZ );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaRect( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaRect_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *)params->linux_side;
    params->_ret = (bool)iface->GetWorkingPlayAreaRect( params->rect );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingCollisionBoundsInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingCollisionBoundsInfo_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *)params->linux_side;
    params->_ret = (bool)iface->GetWorkingCollisionBoundsInfo( params->pQuadsBuffer, params->punQuadsCount );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveCollisionBoundsInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveCollisionBoundsInfo_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *)params->linux_side;
    params->_ret = (bool)iface->GetLiveCollisionBoundsInfo( params->pQuadsBuffer, params->punQuadsCount );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingSeatedZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingSeatedZeroPoseToRawTrackingPose_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *)params->linux_side;
    params->_ret = (bool)iface->GetWorkingSeatedZeroPoseToRawTrackingPose( params->pmatSeatedZeroPoseToRawTrackingPose );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingStandingZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingStandingZeroPoseToRawTrackingPose_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *)params->linux_side;
    params->_ret = (bool)iface->GetWorkingStandingZeroPoseToRawTrackingPose( params->pmatStandingZeroPoseToRawTrackingPose );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingPlayAreaSize( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingPlayAreaSize_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *)params->linux_side;
    iface->SetWorkingPlayAreaSize( params->sizeX, params->sizeZ );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingCollisionBoundsInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingCollisionBoundsInfo_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *)params->linux_side;
    iface->SetWorkingCollisionBoundsInfo( params->pQuadsBuffer, params->unQuadsCount );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingSeatedZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingSeatedZeroPoseToRawTrackingPose_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *)params->linux_side;
    iface->SetWorkingSeatedZeroPoseToRawTrackingPose( params->pMatSeatedZeroPoseToRawTrackingPose );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingStandingZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingStandingZeroPoseToRawTrackingPose_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *)params->linux_side;
    iface->SetWorkingStandingZeroPoseToRawTrackingPose( params->pMatStandingZeroPoseToRawTrackingPose );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_004_ReloadFromDisk( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_ReloadFromDisk_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *)params->linux_side;
    iface->ReloadFromDisk( params->configFile );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveSeatedZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveSeatedZeroPoseToRawTrackingPose_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *)params->linux_side;
    params->_ret = (bool)iface->GetLiveSeatedZeroPoseToRawTrackingPose( params->pmatSeatedZeroPoseToRawTrackingPose );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingWallTagInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingWallTagInfo_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *)params->linux_side;
    iface->SetWorkingWallTagInfo( params->pTagsBuffer, params->unTagCount );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveWallTagInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveWallTagInfo_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_004 *)params->linux_side;
    params->_ret = (bool)iface->GetLiveWallTagInfo( params->pTagsBuffer, params->punTagCount );
}

