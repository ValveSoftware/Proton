/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRChaperoneSetup_IVRChaperoneSetup_006.h"
struct u_IVRChaperoneSetup_IVRChaperoneSetup_006
{
#ifdef __cplusplus
    virtual bool CommitWorkingCopy( uint32_t ) = 0;
    virtual void RevertWorkingCopy(  ) = 0;
    virtual bool GetWorkingPlayAreaSize( float *, float * ) = 0;
    virtual bool GetWorkingPlayAreaRect( HmdQuad_t * ) = 0;
    virtual bool GetWorkingCollisionBoundsInfo( HmdQuad_t *, uint32_t * ) = 0;
    virtual bool GetLiveCollisionBoundsInfo( HmdQuad_t *, uint32_t * ) = 0;
    virtual bool GetWorkingSeatedZeroPoseToRawTrackingPose( HmdMatrix34_t * ) = 0;
    virtual bool GetWorkingStandingZeroPoseToRawTrackingPose( HmdMatrix34_t * ) = 0;
    virtual void SetWorkingPlayAreaSize( float, float ) = 0;
    virtual void SetWorkingCollisionBoundsInfo( HmdQuad_t *, uint32_t ) = 0;
    virtual void SetWorkingPerimeter( HmdVector2_t *, uint32_t ) = 0;
    virtual void SetWorkingSeatedZeroPoseToRawTrackingPose( const HmdMatrix34_t * ) = 0;
    virtual void SetWorkingStandingZeroPoseToRawTrackingPose( const HmdMatrix34_t * ) = 0;
    virtual void ReloadFromDisk( uint32_t ) = 0;
    virtual bool GetLiveSeatedZeroPoseToRawTrackingPose( HmdMatrix34_t * ) = 0;
    virtual bool ExportLiveToBuffer( char *, uint32_t * ) = 0;
    virtual bool ImportFromBufferToWorking( const char *, uint32_t ) = 0;
    virtual void ShowWorkingSetPreview(  ) = 0;
    virtual void HideWorkingSetPreview(  ) = 0;
    virtual void RoomSetupStarting(  ) = 0;
#endif /* __cplusplus */
};

void cppIVRChaperoneSetup_IVRChaperoneSetup_006_CommitWorkingCopy( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_CommitWorkingCopy_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *)params->linux_side;
    params->_ret = (bool)iface->CommitWorkingCopy( params->configFile );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_006_RevertWorkingCopy( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_RevertWorkingCopy_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *)params->linux_side;
    iface->RevertWorkingCopy(  );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaSize( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaSize_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *)params->linux_side;
    params->_ret = (bool)iface->GetWorkingPlayAreaSize( params->pSizeX, params->pSizeZ );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaRect( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaRect_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *)params->linux_side;
    params->_ret = (bool)iface->GetWorkingPlayAreaRect( params->rect );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingCollisionBoundsInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingCollisionBoundsInfo_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *)params->linux_side;
    params->_ret = (bool)iface->GetWorkingCollisionBoundsInfo( params->pQuadsBuffer, params->punQuadsCount );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveCollisionBoundsInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveCollisionBoundsInfo_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *)params->linux_side;
    params->_ret = (bool)iface->GetLiveCollisionBoundsInfo( params->pQuadsBuffer, params->punQuadsCount );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingSeatedZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingSeatedZeroPoseToRawTrackingPose_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *)params->linux_side;
    params->_ret = (bool)iface->GetWorkingSeatedZeroPoseToRawTrackingPose( params->pmatSeatedZeroPoseToRawTrackingPose );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingStandingZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingStandingZeroPoseToRawTrackingPose_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *)params->linux_side;
    params->_ret = (bool)iface->GetWorkingStandingZeroPoseToRawTrackingPose( params->pmatStandingZeroPoseToRawTrackingPose );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPlayAreaSize( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPlayAreaSize_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *)params->linux_side;
    iface->SetWorkingPlayAreaSize( params->sizeX, params->sizeZ );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingCollisionBoundsInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingCollisionBoundsInfo_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *)params->linux_side;
    iface->SetWorkingCollisionBoundsInfo( params->pQuadsBuffer, params->unQuadsCount );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPerimeter( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPerimeter_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *)params->linux_side;
    iface->SetWorkingPerimeter( params->pPointBuffer, params->unPointCount );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingSeatedZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingSeatedZeroPoseToRawTrackingPose_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *)params->linux_side;
    iface->SetWorkingSeatedZeroPoseToRawTrackingPose( params->pMatSeatedZeroPoseToRawTrackingPose );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingStandingZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingStandingZeroPoseToRawTrackingPose_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *)params->linux_side;
    iface->SetWorkingStandingZeroPoseToRawTrackingPose( params->pMatStandingZeroPoseToRawTrackingPose );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_006_ReloadFromDisk( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_ReloadFromDisk_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *)params->linux_side;
    iface->ReloadFromDisk( params->configFile );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveSeatedZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveSeatedZeroPoseToRawTrackingPose_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *)params->linux_side;
    params->_ret = (bool)iface->GetLiveSeatedZeroPoseToRawTrackingPose( params->pmatSeatedZeroPoseToRawTrackingPose );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_006_ExportLiveToBuffer( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_ExportLiveToBuffer_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *)params->linux_side;
    params->_ret = (bool)iface->ExportLiveToBuffer( params->pBuffer, params->pnBufferLength );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_006_ImportFromBufferToWorking( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_ImportFromBufferToWorking_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *)params->linux_side;
    params->_ret = (bool)iface->ImportFromBufferToWorking( params->pBuffer, params->nImportFlags );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_006_ShowWorkingSetPreview( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_ShowWorkingSetPreview_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *)params->linux_side;
    iface->ShowWorkingSetPreview(  );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_006_HideWorkingSetPreview( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_HideWorkingSetPreview_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *)params->linux_side;
    iface->HideWorkingSetPreview(  );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_006_RoomSetupStarting( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_RoomSetupStarting_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_006 *)params->linux_side;
    iface->RoomSetupStarting(  );
}

