#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.0.17/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRChaperoneSetup_IVRChaperoneSetup_005.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVRChaperoneSetup_IVRChaperoneSetup_005_CommitWorkingCopy( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_CommitWorkingCopy_params *params )
{
    params->_ret = ((IVRChaperoneSetup*)params->linux_side)->CommitWorkingCopy((vr::EChaperoneConfigFile)params->configFile);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_005_RevertWorkingCopy( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_RevertWorkingCopy_params *params )
{
    ((IVRChaperoneSetup*)params->linux_side)->RevertWorkingCopy();
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaSize( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaSize_params *params )
{
    params->_ret = ((IVRChaperoneSetup*)params->linux_side)->GetWorkingPlayAreaSize((float *)params->pSizeX, (float *)params->pSizeZ);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaRect( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaRect_params *params )
{
    params->_ret = ((IVRChaperoneSetup*)params->linux_side)->GetWorkingPlayAreaRect((vr::HmdQuad_t *)params->rect);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingCollisionBoundsInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingCollisionBoundsInfo_params *params )
{
    params->_ret = ((IVRChaperoneSetup*)params->linux_side)->GetWorkingCollisionBoundsInfo((vr::HmdQuad_t *)params->pQuadsBuffer, (uint32_t *)params->punQuadsCount);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsInfo_params *params )
{
    params->_ret = ((IVRChaperoneSetup*)params->linux_side)->GetLiveCollisionBoundsInfo((vr::HmdQuad_t *)params->pQuadsBuffer, (uint32_t *)params->punQuadsCount);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingSeatedZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingSeatedZeroPoseToRawTrackingPose_params *params )
{
    params->_ret = ((IVRChaperoneSetup*)params->linux_side)->GetWorkingSeatedZeroPoseToRawTrackingPose((vr::HmdMatrix34_t *)params->pmatSeatedZeroPoseToRawTrackingPose);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingStandingZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingStandingZeroPoseToRawTrackingPose_params *params )
{
    params->_ret = ((IVRChaperoneSetup*)params->linux_side)->GetWorkingStandingZeroPoseToRawTrackingPose((vr::HmdMatrix34_t *)params->pmatStandingZeroPoseToRawTrackingPose);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPlayAreaSize( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPlayAreaSize_params *params )
{
    ((IVRChaperoneSetup*)params->linux_side)->SetWorkingPlayAreaSize((float)params->sizeX, (float)params->sizeZ);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsInfo_params *params )
{
    ((IVRChaperoneSetup*)params->linux_side)->SetWorkingCollisionBoundsInfo((vr::HmdQuad_t *)params->pQuadsBuffer, (uint32_t)params->unQuadsCount);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingSeatedZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingSeatedZeroPoseToRawTrackingPose_params *params )
{
    ((IVRChaperoneSetup*)params->linux_side)->SetWorkingSeatedZeroPoseToRawTrackingPose((const vr::HmdMatrix34_t *)params->pMatSeatedZeroPoseToRawTrackingPose);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingStandingZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingStandingZeroPoseToRawTrackingPose_params *params )
{
    ((IVRChaperoneSetup*)params->linux_side)->SetWorkingStandingZeroPoseToRawTrackingPose((const vr::HmdMatrix34_t *)params->pMatStandingZeroPoseToRawTrackingPose);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_005_ReloadFromDisk( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_ReloadFromDisk_params *params )
{
    ((IVRChaperoneSetup*)params->linux_side)->ReloadFromDisk((vr::EChaperoneConfigFile)params->configFile);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveSeatedZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveSeatedZeroPoseToRawTrackingPose_params *params )
{
    params->_ret = ((IVRChaperoneSetup*)params->linux_side)->GetLiveSeatedZeroPoseToRawTrackingPose((vr::HmdMatrix34_t *)params->pmatSeatedZeroPoseToRawTrackingPose);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsTagsInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsTagsInfo_params *params )
{
    ((IVRChaperoneSetup*)params->linux_side)->SetWorkingCollisionBoundsTagsInfo((uint8_t *)params->pTagsBuffer, (uint32_t)params->unTagCount);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsTagsInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsTagsInfo_params *params )
{
    params->_ret = ((IVRChaperoneSetup*)params->linux_side)->GetLiveCollisionBoundsTagsInfo((uint8_t *)params->pTagsBuffer, (uint32_t *)params->punTagCount);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPhysicalBoundsInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPhysicalBoundsInfo_params *params )
{
    params->_ret = ((IVRChaperoneSetup*)params->linux_side)->SetWorkingPhysicalBoundsInfo((vr::HmdQuad_t *)params->pQuadsBuffer, (uint32_t)params->unQuadsCount);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetLivePhysicalBoundsInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetLivePhysicalBoundsInfo_params *params )
{
    params->_ret = ((IVRChaperoneSetup*)params->linux_side)->GetLivePhysicalBoundsInfo((vr::HmdQuad_t *)params->pQuadsBuffer, (uint32_t *)params->punQuadsCount);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_005_ExportLiveToBuffer( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_ExportLiveToBuffer_params *params )
{
    params->_ret = ((IVRChaperoneSetup*)params->linux_side)->ExportLiveToBuffer((char *)params->pBuffer, (uint32_t *)params->pnBufferLength);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_005_ImportFromBufferToWorking( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_ImportFromBufferToWorking_params *params )
{
    params->_ret = ((IVRChaperoneSetup*)params->linux_side)->ImportFromBufferToWorking((const char *)params->pBuffer, (uint32_t)params->nImportFlags);
}

#ifdef __cplusplus
}
#endif
