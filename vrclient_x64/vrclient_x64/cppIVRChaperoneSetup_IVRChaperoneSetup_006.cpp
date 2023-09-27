#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.26.7/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRChaperoneSetup_IVRChaperoneSetup_006.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVRChaperoneSetup_IVRChaperoneSetup_006_CommitWorkingCopy( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_CommitWorkingCopy_params *params )
{
    params->_ret = ((IVRChaperoneSetup*)params->linux_side)->CommitWorkingCopy((vr::EChaperoneConfigFile)params->configFile);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_006_RevertWorkingCopy( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_RevertWorkingCopy_params *params )
{
    ((IVRChaperoneSetup*)params->linux_side)->RevertWorkingCopy();
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaSize( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaSize_params *params )
{
    params->_ret = ((IVRChaperoneSetup*)params->linux_side)->GetWorkingPlayAreaSize((float *)params->pSizeX, (float *)params->pSizeZ);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaRect( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaRect_params *params )
{
    params->_ret = ((IVRChaperoneSetup*)params->linux_side)->GetWorkingPlayAreaRect((vr::HmdQuad_t *)params->rect);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingCollisionBoundsInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingCollisionBoundsInfo_params *params )
{
    params->_ret = ((IVRChaperoneSetup*)params->linux_side)->GetWorkingCollisionBoundsInfo((vr::HmdQuad_t *)params->pQuadsBuffer, (uint32_t *)params->punQuadsCount);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveCollisionBoundsInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveCollisionBoundsInfo_params *params )
{
    params->_ret = ((IVRChaperoneSetup*)params->linux_side)->GetLiveCollisionBoundsInfo((vr::HmdQuad_t *)params->pQuadsBuffer, (uint32_t *)params->punQuadsCount);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingSeatedZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingSeatedZeroPoseToRawTrackingPose_params *params )
{
    params->_ret = ((IVRChaperoneSetup*)params->linux_side)->GetWorkingSeatedZeroPoseToRawTrackingPose((vr::HmdMatrix34_t *)params->pmatSeatedZeroPoseToRawTrackingPose);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingStandingZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingStandingZeroPoseToRawTrackingPose_params *params )
{
    params->_ret = ((IVRChaperoneSetup*)params->linux_side)->GetWorkingStandingZeroPoseToRawTrackingPose((vr::HmdMatrix34_t *)params->pmatStandingZeroPoseToRawTrackingPose);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPlayAreaSize( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPlayAreaSize_params *params )
{
    ((IVRChaperoneSetup*)params->linux_side)->SetWorkingPlayAreaSize((float)params->sizeX, (float)params->sizeZ);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingCollisionBoundsInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingCollisionBoundsInfo_params *params )
{
    ((IVRChaperoneSetup*)params->linux_side)->SetWorkingCollisionBoundsInfo((vr::HmdQuad_t *)params->pQuadsBuffer, (uint32_t)params->unQuadsCount);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPerimeter( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPerimeter_params *params )
{
    ((IVRChaperoneSetup*)params->linux_side)->SetWorkingPerimeter((vr::HmdVector2_t *)params->pPointBuffer, (uint32_t)params->unPointCount);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingSeatedZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingSeatedZeroPoseToRawTrackingPose_params *params )
{
    ((IVRChaperoneSetup*)params->linux_side)->SetWorkingSeatedZeroPoseToRawTrackingPose((const vr::HmdMatrix34_t *)params->pMatSeatedZeroPoseToRawTrackingPose);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingStandingZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingStandingZeroPoseToRawTrackingPose_params *params )
{
    ((IVRChaperoneSetup*)params->linux_side)->SetWorkingStandingZeroPoseToRawTrackingPose((const vr::HmdMatrix34_t *)params->pMatStandingZeroPoseToRawTrackingPose);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_006_ReloadFromDisk( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_ReloadFromDisk_params *params )
{
    ((IVRChaperoneSetup*)params->linux_side)->ReloadFromDisk((vr::EChaperoneConfigFile)params->configFile);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveSeatedZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveSeatedZeroPoseToRawTrackingPose_params *params )
{
    params->_ret = ((IVRChaperoneSetup*)params->linux_side)->GetLiveSeatedZeroPoseToRawTrackingPose((vr::HmdMatrix34_t *)params->pmatSeatedZeroPoseToRawTrackingPose);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_006_ExportLiveToBuffer( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_ExportLiveToBuffer_params *params )
{
    params->_ret = ((IVRChaperoneSetup*)params->linux_side)->ExportLiveToBuffer((char *)params->pBuffer, (uint32_t *)params->pnBufferLength);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_006_ImportFromBufferToWorking( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_ImportFromBufferToWorking_params *params )
{
    params->_ret = ((IVRChaperoneSetup*)params->linux_side)->ImportFromBufferToWorking((const char *)params->pBuffer, (uint32_t)params->nImportFlags);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_006_ShowWorkingSetPreview( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_ShowWorkingSetPreview_params *params )
{
    ((IVRChaperoneSetup*)params->linux_side)->ShowWorkingSetPreview();
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_006_HideWorkingSetPreview( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_HideWorkingSetPreview_params *params )
{
    ((IVRChaperoneSetup*)params->linux_side)->HideWorkingSetPreview();
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_006_RoomSetupStarting( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_RoomSetupStarting_params *params )
{
    ((IVRChaperoneSetup*)params->linux_side)->RoomSetupStarting();
}

#ifdef __cplusplus
}
#endif
