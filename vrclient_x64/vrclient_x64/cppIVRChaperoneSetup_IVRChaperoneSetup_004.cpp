#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v0.9.14/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRChaperoneSetup_IVRChaperoneSetup_004.h"
#ifdef __cplusplus
extern "C" {
#endif

struct cppIVRChaperoneSetup_IVRChaperoneSetup_004
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
    virtual void SetWorkingWallTagInfo( uint8_t *, uint32_t ) = 0;
    virtual bool GetLiveWallTagInfo( uint8_t *, uint32_t * ) = 0;
#endif /* __cplusplus */
};

void cppIVRChaperoneSetup_IVRChaperoneSetup_004_CommitWorkingCopy( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_CommitWorkingCopy_params *params )
{
    struct cppIVRChaperoneSetup_IVRChaperoneSetup_004 *iface = (struct cppIVRChaperoneSetup_IVRChaperoneSetup_004 *)params->linux_side;
    params->_ret = iface->CommitWorkingCopy( params->configFile );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_004_RevertWorkingCopy( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_RevertWorkingCopy_params *params )
{
    struct cppIVRChaperoneSetup_IVRChaperoneSetup_004 *iface = (struct cppIVRChaperoneSetup_IVRChaperoneSetup_004 *)params->linux_side;
    iface->RevertWorkingCopy(  );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaSize( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaSize_params *params )
{
    struct cppIVRChaperoneSetup_IVRChaperoneSetup_004 *iface = (struct cppIVRChaperoneSetup_IVRChaperoneSetup_004 *)params->linux_side;
    params->_ret = iface->GetWorkingPlayAreaSize( params->pSizeX, params->pSizeZ );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaRect( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaRect_params *params )
{
    struct cppIVRChaperoneSetup_IVRChaperoneSetup_004 *iface = (struct cppIVRChaperoneSetup_IVRChaperoneSetup_004 *)params->linux_side;
    params->_ret = iface->GetWorkingPlayAreaRect( params->rect );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingCollisionBoundsInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingCollisionBoundsInfo_params *params )
{
    struct cppIVRChaperoneSetup_IVRChaperoneSetup_004 *iface = (struct cppIVRChaperoneSetup_IVRChaperoneSetup_004 *)params->linux_side;
    params->_ret = iface->GetWorkingCollisionBoundsInfo( params->pQuadsBuffer, params->punQuadsCount );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveCollisionBoundsInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveCollisionBoundsInfo_params *params )
{
    struct cppIVRChaperoneSetup_IVRChaperoneSetup_004 *iface = (struct cppIVRChaperoneSetup_IVRChaperoneSetup_004 *)params->linux_side;
    params->_ret = iface->GetLiveCollisionBoundsInfo( params->pQuadsBuffer, params->punQuadsCount );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingSeatedZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingSeatedZeroPoseToRawTrackingPose_params *params )
{
    struct cppIVRChaperoneSetup_IVRChaperoneSetup_004 *iface = (struct cppIVRChaperoneSetup_IVRChaperoneSetup_004 *)params->linux_side;
    params->_ret = iface->GetWorkingSeatedZeroPoseToRawTrackingPose( params->pmatSeatedZeroPoseToRawTrackingPose );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingStandingZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingStandingZeroPoseToRawTrackingPose_params *params )
{
    struct cppIVRChaperoneSetup_IVRChaperoneSetup_004 *iface = (struct cppIVRChaperoneSetup_IVRChaperoneSetup_004 *)params->linux_side;
    params->_ret = iface->GetWorkingStandingZeroPoseToRawTrackingPose( params->pmatStandingZeroPoseToRawTrackingPose );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingPlayAreaSize( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingPlayAreaSize_params *params )
{
    struct cppIVRChaperoneSetup_IVRChaperoneSetup_004 *iface = (struct cppIVRChaperoneSetup_IVRChaperoneSetup_004 *)params->linux_side;
    iface->SetWorkingPlayAreaSize( params->sizeX, params->sizeZ );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingCollisionBoundsInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingCollisionBoundsInfo_params *params )
{
    struct cppIVRChaperoneSetup_IVRChaperoneSetup_004 *iface = (struct cppIVRChaperoneSetup_IVRChaperoneSetup_004 *)params->linux_side;
    iface->SetWorkingCollisionBoundsInfo( params->pQuadsBuffer, params->unQuadsCount );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingSeatedZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingSeatedZeroPoseToRawTrackingPose_params *params )
{
    struct cppIVRChaperoneSetup_IVRChaperoneSetup_004 *iface = (struct cppIVRChaperoneSetup_IVRChaperoneSetup_004 *)params->linux_side;
    iface->SetWorkingSeatedZeroPoseToRawTrackingPose( params->pMatSeatedZeroPoseToRawTrackingPose );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingStandingZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingStandingZeroPoseToRawTrackingPose_params *params )
{
    struct cppIVRChaperoneSetup_IVRChaperoneSetup_004 *iface = (struct cppIVRChaperoneSetup_IVRChaperoneSetup_004 *)params->linux_side;
    iface->SetWorkingStandingZeroPoseToRawTrackingPose( params->pMatStandingZeroPoseToRawTrackingPose );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_004_ReloadFromDisk( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_ReloadFromDisk_params *params )
{
    struct cppIVRChaperoneSetup_IVRChaperoneSetup_004 *iface = (struct cppIVRChaperoneSetup_IVRChaperoneSetup_004 *)params->linux_side;
    iface->ReloadFromDisk( params->configFile );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveSeatedZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveSeatedZeroPoseToRawTrackingPose_params *params )
{
    struct cppIVRChaperoneSetup_IVRChaperoneSetup_004 *iface = (struct cppIVRChaperoneSetup_IVRChaperoneSetup_004 *)params->linux_side;
    params->_ret = iface->GetLiveSeatedZeroPoseToRawTrackingPose( params->pmatSeatedZeroPoseToRawTrackingPose );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingWallTagInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingWallTagInfo_params *params )
{
    struct cppIVRChaperoneSetup_IVRChaperoneSetup_004 *iface = (struct cppIVRChaperoneSetup_IVRChaperoneSetup_004 *)params->linux_side;
    iface->SetWorkingWallTagInfo( params->pTagsBuffer, params->unTagCount );
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveWallTagInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveWallTagInfo_params *params )
{
    struct cppIVRChaperoneSetup_IVRChaperoneSetup_004 *iface = (struct cppIVRChaperoneSetup_IVRChaperoneSetup_004 *)params->linux_side;
    params->_ret = iface->GetLiveWallTagInfo( params->pTagsBuffer, params->punTagCount );
}

#ifdef __cplusplus
}
#endif
