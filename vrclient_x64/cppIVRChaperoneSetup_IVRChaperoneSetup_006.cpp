/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_006_CommitWorkingCopy( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_006_CommitWorkingCopy_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_006_CommitWorkingCopy_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *)params->linux_side;
    params->_ret = iface->CommitWorkingCopy( params->configFile );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_006_RevertWorkingCopy( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_006_RevertWorkingCopy_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_006_RevertWorkingCopy_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *)params->linux_side;
    iface->RevertWorkingCopy(  );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaSize( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaSize_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaSize_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *)params->linux_side;
    params->_ret = iface->GetWorkingPlayAreaSize( params->pSizeX, params->pSizeZ );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaRect( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaRect_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaRect_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *)params->linux_side;
    params->_ret = iface->GetWorkingPlayAreaRect( params->rect );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingCollisionBoundsInfo( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingCollisionBoundsInfo_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingCollisionBoundsInfo_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *)params->linux_side;
    params->_ret = iface->GetWorkingCollisionBoundsInfo( params->pQuadsBuffer, params->punQuadsCount );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveCollisionBoundsInfo( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveCollisionBoundsInfo_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveCollisionBoundsInfo_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *)params->linux_side;
    params->_ret = iface->GetLiveCollisionBoundsInfo( params->pQuadsBuffer, params->punQuadsCount );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingSeatedZeroPoseToRawTrackingPose( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingSeatedZeroPoseToRawTrackingPose_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingSeatedZeroPoseToRawTrackingPose_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *)params->linux_side;
    params->_ret = iface->GetWorkingSeatedZeroPoseToRawTrackingPose( params->pmatSeatedZeroPoseToRawTrackingPose );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingStandingZeroPoseToRawTrackingPose( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingStandingZeroPoseToRawTrackingPose_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingStandingZeroPoseToRawTrackingPose_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *)params->linux_side;
    params->_ret = iface->GetWorkingStandingZeroPoseToRawTrackingPose( params->pmatStandingZeroPoseToRawTrackingPose );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPlayAreaSize( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPlayAreaSize_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPlayAreaSize_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *)params->linux_side;
    iface->SetWorkingPlayAreaSize( params->sizeX, params->sizeZ );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingCollisionBoundsInfo( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingCollisionBoundsInfo_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingCollisionBoundsInfo_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *)params->linux_side;
    iface->SetWorkingCollisionBoundsInfo( params->pQuadsBuffer, params->unQuadsCount );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPerimeter( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPerimeter_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPerimeter_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *)params->linux_side;
    iface->SetWorkingPerimeter( params->pPointBuffer, params->unPointCount );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingSeatedZeroPoseToRawTrackingPose( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingSeatedZeroPoseToRawTrackingPose_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingSeatedZeroPoseToRawTrackingPose_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *)params->linux_side;
    iface->SetWorkingSeatedZeroPoseToRawTrackingPose( params->pMatSeatedZeroPoseToRawTrackingPose );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingStandingZeroPoseToRawTrackingPose( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingStandingZeroPoseToRawTrackingPose_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingStandingZeroPoseToRawTrackingPose_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *)params->linux_side;
    iface->SetWorkingStandingZeroPoseToRawTrackingPose( params->pMatStandingZeroPoseToRawTrackingPose );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_006_ReloadFromDisk( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_006_ReloadFromDisk_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_006_ReloadFromDisk_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *)params->linux_side;
    iface->ReloadFromDisk( params->configFile );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveSeatedZeroPoseToRawTrackingPose( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveSeatedZeroPoseToRawTrackingPose_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveSeatedZeroPoseToRawTrackingPose_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *)params->linux_side;
    params->_ret = iface->GetLiveSeatedZeroPoseToRawTrackingPose( params->pmatSeatedZeroPoseToRawTrackingPose );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_006_ExportLiveToBuffer( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_006_ExportLiveToBuffer_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_006_ExportLiveToBuffer_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *)params->linux_side;
    params->_ret = iface->ExportLiveToBuffer( params->pBuffer, params->pnBufferLength );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_006_ImportFromBufferToWorking( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_006_ImportFromBufferToWorking_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_006_ImportFromBufferToWorking_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *)params->linux_side;
    params->_ret = iface->ImportFromBufferToWorking( params->pBuffer, params->nImportFlags );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_006_ShowWorkingSetPreview( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_006_ShowWorkingSetPreview_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_006_ShowWorkingSetPreview_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *)params->linux_side;
    iface->ShowWorkingSetPreview(  );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_006_HideWorkingSetPreview( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_006_HideWorkingSetPreview_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_006_HideWorkingSetPreview_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *)params->linux_side;
    iface->HideWorkingSetPreview(  );
    return 0;
}

NTSTATUS IVRChaperoneSetup_IVRChaperoneSetup_006_RoomSetupStarting( void *args )
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_006_RoomSetupStarting_params *params = (struct IVRChaperoneSetup_IVRChaperoneSetup_006_RoomSetupStarting_params *)args;
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *)params->linux_side;
    iface->RoomSetupStarting(  );
    return 0;
}

