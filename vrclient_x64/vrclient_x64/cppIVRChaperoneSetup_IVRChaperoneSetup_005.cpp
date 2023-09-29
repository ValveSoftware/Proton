/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRChaperoneSetup_IVRChaperoneSetup_005.h"
struct u_IVRChaperoneSetup_IVRChaperoneSetup_005
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
    virtual void SetWorkingSeatedZeroPoseToRawTrackingPose( const HmdMatrix34_t * ) = 0;
    virtual void SetWorkingStandingZeroPoseToRawTrackingPose( const HmdMatrix34_t * ) = 0;
    virtual void ReloadFromDisk( uint32_t ) = 0;
    virtual bool GetLiveSeatedZeroPoseToRawTrackingPose( HmdMatrix34_t * ) = 0;
    virtual void SetWorkingCollisionBoundsTagsInfo( uint8_t *, uint32_t ) = 0;
    virtual bool GetLiveCollisionBoundsTagsInfo( uint8_t *, uint32_t * ) = 0;
    virtual bool SetWorkingPhysicalBoundsInfo( HmdQuad_t *, uint32_t ) = 0;
    virtual bool GetLivePhysicalBoundsInfo( HmdQuad_t *, uint32_t * ) = 0;
    virtual bool ExportLiveToBuffer( char *, uint32_t * ) = 0;
    virtual bool ImportFromBufferToWorking( const char *, uint32_t ) = 0;
#endif /* __cplusplus */
};

void cppIVRChaperoneSetup_IVRChaperoneSetup_005_CommitWorkingCopy( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_CommitWorkingCopy_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *)params->linux_side;
    params->_ret = (bool)iface->CommitWorkingCopy( params->configFile );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_005_RevertWorkingCopy( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_RevertWorkingCopy_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *)params->linux_side;
    iface->RevertWorkingCopy(  );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaSize( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaSize_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *)params->linux_side;
    params->_ret = (bool)iface->GetWorkingPlayAreaSize( params->pSizeX, params->pSizeZ );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaRect( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaRect_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *)params->linux_side;
    params->_ret = (bool)iface->GetWorkingPlayAreaRect( params->rect );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingCollisionBoundsInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingCollisionBoundsInfo_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *)params->linux_side;
    params->_ret = (bool)iface->GetWorkingCollisionBoundsInfo( params->pQuadsBuffer, params->punQuadsCount );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsInfo_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *)params->linux_side;
    params->_ret = (bool)iface->GetLiveCollisionBoundsInfo( params->pQuadsBuffer, params->punQuadsCount );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingSeatedZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingSeatedZeroPoseToRawTrackingPose_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *)params->linux_side;
    params->_ret = (bool)iface->GetWorkingSeatedZeroPoseToRawTrackingPose( params->pmatSeatedZeroPoseToRawTrackingPose );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingStandingZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingStandingZeroPoseToRawTrackingPose_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *)params->linux_side;
    params->_ret = (bool)iface->GetWorkingStandingZeroPoseToRawTrackingPose( params->pmatStandingZeroPoseToRawTrackingPose );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPlayAreaSize( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPlayAreaSize_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *)params->linux_side;
    iface->SetWorkingPlayAreaSize( params->sizeX, params->sizeZ );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsInfo_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *)params->linux_side;
    iface->SetWorkingCollisionBoundsInfo( params->pQuadsBuffer, params->unQuadsCount );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingSeatedZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingSeatedZeroPoseToRawTrackingPose_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *)params->linux_side;
    iface->SetWorkingSeatedZeroPoseToRawTrackingPose( params->pMatSeatedZeroPoseToRawTrackingPose );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingStandingZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingStandingZeroPoseToRawTrackingPose_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *)params->linux_side;
    iface->SetWorkingStandingZeroPoseToRawTrackingPose( params->pMatStandingZeroPoseToRawTrackingPose );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_005_ReloadFromDisk( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_ReloadFromDisk_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *)params->linux_side;
    iface->ReloadFromDisk( params->configFile );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveSeatedZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveSeatedZeroPoseToRawTrackingPose_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *)params->linux_side;
    params->_ret = (bool)iface->GetLiveSeatedZeroPoseToRawTrackingPose( params->pmatSeatedZeroPoseToRawTrackingPose );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsTagsInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsTagsInfo_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *)params->linux_side;
    iface->SetWorkingCollisionBoundsTagsInfo( params->pTagsBuffer, params->unTagCount );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsTagsInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsTagsInfo_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *)params->linux_side;
    params->_ret = (bool)iface->GetLiveCollisionBoundsTagsInfo( params->pTagsBuffer, params->punTagCount );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPhysicalBoundsInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPhysicalBoundsInfo_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *)params->linux_side;
    params->_ret = (bool)iface->SetWorkingPhysicalBoundsInfo( params->pQuadsBuffer, params->unQuadsCount );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetLivePhysicalBoundsInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetLivePhysicalBoundsInfo_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *)params->linux_side;
    params->_ret = (bool)iface->GetLivePhysicalBoundsInfo( params->pQuadsBuffer, params->punQuadsCount );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_005_ExportLiveToBuffer( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_ExportLiveToBuffer_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *)params->linux_side;
    params->_ret = (bool)iface->ExportLiveToBuffer( params->pBuffer, params->pnBufferLength );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_005_ImportFromBufferToWorking( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_ImportFromBufferToWorking_params *params )
{
    struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *iface = (struct u_IVRChaperoneSetup_IVRChaperoneSetup_005 *)params->linux_side;
    params->_ret = (bool)iface->ImportFromBufferToWorking( params->pBuffer, params->nImportFlags );
}

