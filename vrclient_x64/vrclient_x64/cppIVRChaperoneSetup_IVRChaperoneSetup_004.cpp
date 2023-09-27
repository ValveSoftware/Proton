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
void cppIVRChaperoneSetup_IVRChaperoneSetup_004_CommitWorkingCopy( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_CommitWorkingCopy_params *params )
{
    params->_ret = ((IVRChaperoneSetup*)params->linux_side)->CommitWorkingCopy((vr::EChaperoneConfigFile)params->configFile);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_004_RevertWorkingCopy( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_RevertWorkingCopy_params *params )
{
    ((IVRChaperoneSetup*)params->linux_side)->RevertWorkingCopy();
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaSize( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaSize_params *params )
{
    params->_ret = ((IVRChaperoneSetup*)params->linux_side)->GetWorkingPlayAreaSize((float *)params->pSizeX, (float *)params->pSizeZ);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaRect( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaRect_params *params )
{
    params->_ret = ((IVRChaperoneSetup*)params->linux_side)->GetWorkingPlayAreaRect((vr::HmdQuad_t *)params->rect);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingCollisionBoundsInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingCollisionBoundsInfo_params *params )
{
    params->_ret = ((IVRChaperoneSetup*)params->linux_side)->GetWorkingCollisionBoundsInfo((vr::HmdQuad_t *)params->pQuadsBuffer, (uint32_t *)params->punQuadsCount);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveCollisionBoundsInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveCollisionBoundsInfo_params *params )
{
    params->_ret = ((IVRChaperoneSetup*)params->linux_side)->GetLiveCollisionBoundsInfo((vr::HmdQuad_t *)params->pQuadsBuffer, (uint32_t *)params->punQuadsCount);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingSeatedZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingSeatedZeroPoseToRawTrackingPose_params *params )
{
    params->_ret = ((IVRChaperoneSetup*)params->linux_side)->GetWorkingSeatedZeroPoseToRawTrackingPose((vr::HmdMatrix34_t *)params->pmatSeatedZeroPoseToRawTrackingPose);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingStandingZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingStandingZeroPoseToRawTrackingPose_params *params )
{
    params->_ret = ((IVRChaperoneSetup*)params->linux_side)->GetWorkingStandingZeroPoseToRawTrackingPose((vr::HmdMatrix34_t *)params->pmatStandingZeroPoseToRawTrackingPose);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingPlayAreaSize( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingPlayAreaSize_params *params )
{
    ((IVRChaperoneSetup*)params->linux_side)->SetWorkingPlayAreaSize((float)params->sizeX, (float)params->sizeZ);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingCollisionBoundsInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingCollisionBoundsInfo_params *params )
{
    ((IVRChaperoneSetup*)params->linux_side)->SetWorkingCollisionBoundsInfo((vr::HmdQuad_t *)params->pQuadsBuffer, (uint32_t)params->unQuadsCount);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingSeatedZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingSeatedZeroPoseToRawTrackingPose_params *params )
{
    ((IVRChaperoneSetup*)params->linux_side)->SetWorkingSeatedZeroPoseToRawTrackingPose((const vr::HmdMatrix34_t *)params->pMatSeatedZeroPoseToRawTrackingPose);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingStandingZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingStandingZeroPoseToRawTrackingPose_params *params )
{
    ((IVRChaperoneSetup*)params->linux_side)->SetWorkingStandingZeroPoseToRawTrackingPose((const vr::HmdMatrix34_t *)params->pMatStandingZeroPoseToRawTrackingPose);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_004_ReloadFromDisk( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_ReloadFromDisk_params *params )
{
    ((IVRChaperoneSetup*)params->linux_side)->ReloadFromDisk((vr::EChaperoneConfigFile)params->configFile);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveSeatedZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveSeatedZeroPoseToRawTrackingPose_params *params )
{
    params->_ret = ((IVRChaperoneSetup*)params->linux_side)->GetLiveSeatedZeroPoseToRawTrackingPose((vr::HmdMatrix34_t *)params->pmatSeatedZeroPoseToRawTrackingPose);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingWallTagInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingWallTagInfo_params *params )
{
    ((IVRChaperoneSetup*)params->linux_side)->SetWorkingWallTagInfo((uint8_t *)params->pTagsBuffer, (uint32_t)params->unTagCount);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveWallTagInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveWallTagInfo_params *params )
{
    params->_ret = ((IVRChaperoneSetup*)params->linux_side)->GetLiveWallTagInfo((uint8_t *)params->pTagsBuffer, (uint32_t *)params->punTagCount);
}

#ifdef __cplusplus
}
#endif
