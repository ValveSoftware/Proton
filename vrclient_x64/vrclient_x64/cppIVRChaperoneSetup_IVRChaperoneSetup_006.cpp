#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.1.3b/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRChaperoneSetup_IVRChaperoneSetup_006.h"
#ifdef __cplusplus
extern "C" {
#endif
bool cppIVRChaperoneSetup_IVRChaperoneSetup_006_CommitWorkingCopy(void *linux_side, EChaperoneConfigFile configFile)
{
    return ((IVRChaperoneSetup*)linux_side)->CommitWorkingCopy((vr::EChaperoneConfigFile)configFile);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_006_RevertWorkingCopy(void *linux_side)
{
    ((IVRChaperoneSetup*)linux_side)->RevertWorkingCopy();
}

bool cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaSize(void *linux_side, float * pSizeX, float * pSizeZ)
{
    return ((IVRChaperoneSetup*)linux_side)->GetWorkingPlayAreaSize((float *)pSizeX, (float *)pSizeZ);
}

bool cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaRect(void *linux_side, HmdQuad_t * rect)
{
    return ((IVRChaperoneSetup*)linux_side)->GetWorkingPlayAreaRect((vr::HmdQuad_t *)rect);
}

bool cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingCollisionBoundsInfo(void *linux_side, HmdQuad_t * pQuadsBuffer, uint32_t * punQuadsCount)
{
    return ((IVRChaperoneSetup*)linux_side)->GetWorkingCollisionBoundsInfo((vr::HmdQuad_t *)pQuadsBuffer, (uint32_t *)punQuadsCount);
}

bool cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveCollisionBoundsInfo(void *linux_side, HmdQuad_t * pQuadsBuffer, uint32_t * punQuadsCount)
{
    return ((IVRChaperoneSetup*)linux_side)->GetLiveCollisionBoundsInfo((vr::HmdQuad_t *)pQuadsBuffer, (uint32_t *)punQuadsCount);
}

bool cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingSeatedZeroPoseToRawTrackingPose(void *linux_side, HmdMatrix34_t * pmatSeatedZeroPoseToRawTrackingPose)
{
    return ((IVRChaperoneSetup*)linux_side)->GetWorkingSeatedZeroPoseToRawTrackingPose((vr::HmdMatrix34_t *)pmatSeatedZeroPoseToRawTrackingPose);
}

bool cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingStandingZeroPoseToRawTrackingPose(void *linux_side, HmdMatrix34_t * pmatStandingZeroPoseToRawTrackingPose)
{
    return ((IVRChaperoneSetup*)linux_side)->GetWorkingStandingZeroPoseToRawTrackingPose((vr::HmdMatrix34_t *)pmatStandingZeroPoseToRawTrackingPose);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPlayAreaSize(void *linux_side, float sizeX, float sizeZ)
{
    ((IVRChaperoneSetup*)linux_side)->SetWorkingPlayAreaSize((float)sizeX, (float)sizeZ);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingCollisionBoundsInfo(void *linux_side, HmdQuad_t * pQuadsBuffer, uint32_t unQuadsCount)
{
    ((IVRChaperoneSetup*)linux_side)->SetWorkingCollisionBoundsInfo((vr::HmdQuad_t *)pQuadsBuffer, (uint32_t)unQuadsCount);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPerimeter(void *linux_side, HmdVector2_t * pPointBuffer, uint32_t unPointCount)
{
    ((IVRChaperoneSetup*)linux_side)->SetWorkingPerimeter((vr::HmdVector2_t *)pPointBuffer, (uint32_t)unPointCount);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingSeatedZeroPoseToRawTrackingPose(void *linux_side, HmdMatrix34_t * pMatSeatedZeroPoseToRawTrackingPose)
{
    ((IVRChaperoneSetup*)linux_side)->SetWorkingSeatedZeroPoseToRawTrackingPose((const vr::HmdMatrix34_t *)pMatSeatedZeroPoseToRawTrackingPose);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingStandingZeroPoseToRawTrackingPose(void *linux_side, HmdMatrix34_t * pMatStandingZeroPoseToRawTrackingPose)
{
    ((IVRChaperoneSetup*)linux_side)->SetWorkingStandingZeroPoseToRawTrackingPose((const vr::HmdMatrix34_t *)pMatStandingZeroPoseToRawTrackingPose);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_006_ReloadFromDisk(void *linux_side, EChaperoneConfigFile configFile)
{
    ((IVRChaperoneSetup*)linux_side)->ReloadFromDisk((vr::EChaperoneConfigFile)configFile);
}

bool cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveSeatedZeroPoseToRawTrackingPose(void *linux_side, HmdMatrix34_t * pmatSeatedZeroPoseToRawTrackingPose)
{
    return ((IVRChaperoneSetup*)linux_side)->GetLiveSeatedZeroPoseToRawTrackingPose((vr::HmdMatrix34_t *)pmatSeatedZeroPoseToRawTrackingPose);
}

bool cppIVRChaperoneSetup_IVRChaperoneSetup_006_ExportLiveToBuffer(void *linux_side, char * pBuffer, uint32_t * pnBufferLength)
{
    return ((IVRChaperoneSetup*)linux_side)->ExportLiveToBuffer((char *)pBuffer, (uint32_t *)pnBufferLength);
}

bool cppIVRChaperoneSetup_IVRChaperoneSetup_006_ImportFromBufferToWorking(void *linux_side, const char * pBuffer, uint32_t nImportFlags)
{
    return ((IVRChaperoneSetup*)linux_side)->ImportFromBufferToWorking((const char *)pBuffer, (uint32_t)nImportFlags);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_006_ShowWorkingSetPreview(void *linux_side)
{
    ((IVRChaperoneSetup*)linux_side)->ShowWorkingSetPreview();
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_006_HideWorkingSetPreview(void *linux_side)
{
    ((IVRChaperoneSetup*)linux_side)->HideWorkingSetPreview();
}

#ifdef __cplusplus
}
#endif
