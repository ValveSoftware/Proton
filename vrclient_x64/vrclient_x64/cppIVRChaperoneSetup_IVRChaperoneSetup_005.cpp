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
bool cppIVRChaperoneSetup_IVRChaperoneSetup_005_CommitWorkingCopy(void *linux_side, EChaperoneConfigFile configFile)
{
    bool _ret;
    _ret = ((IVRChaperoneSetup*)linux_side)->CommitWorkingCopy((vr::EChaperoneConfigFile)configFile);
    return _ret;
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_005_RevertWorkingCopy(void *linux_side)
{
    ((IVRChaperoneSetup*)linux_side)->RevertWorkingCopy();
}

bool cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaSize(void *linux_side, float *pSizeX, float *pSizeZ)
{
    bool _ret;
    _ret = ((IVRChaperoneSetup*)linux_side)->GetWorkingPlayAreaSize((float *)pSizeX, (float *)pSizeZ);
    return _ret;
}

bool cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaRect(void *linux_side, HmdQuad_t *rect)
{
    bool _ret;
    _ret = ((IVRChaperoneSetup*)linux_side)->GetWorkingPlayAreaRect((vr::HmdQuad_t *)rect);
    return _ret;
}

bool cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingCollisionBoundsInfo(void *linux_side, HmdQuad_t *pQuadsBuffer, uint32_t *punQuadsCount)
{
    bool _ret;
    _ret = ((IVRChaperoneSetup*)linux_side)->GetWorkingCollisionBoundsInfo((vr::HmdQuad_t *)pQuadsBuffer, (uint32_t *)punQuadsCount);
    return _ret;
}

bool cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsInfo(void *linux_side, HmdQuad_t *pQuadsBuffer, uint32_t *punQuadsCount)
{
    bool _ret;
    _ret = ((IVRChaperoneSetup*)linux_side)->GetLiveCollisionBoundsInfo((vr::HmdQuad_t *)pQuadsBuffer, (uint32_t *)punQuadsCount);
    return _ret;
}

bool cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingSeatedZeroPoseToRawTrackingPose(void *linux_side, HmdMatrix34_t *pmatSeatedZeroPoseToRawTrackingPose)
{
    bool _ret;
    _ret = ((IVRChaperoneSetup*)linux_side)->GetWorkingSeatedZeroPoseToRawTrackingPose((vr::HmdMatrix34_t *)pmatSeatedZeroPoseToRawTrackingPose);
    return _ret;
}

bool cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingStandingZeroPoseToRawTrackingPose(void *linux_side, HmdMatrix34_t *pmatStandingZeroPoseToRawTrackingPose)
{
    bool _ret;
    _ret = ((IVRChaperoneSetup*)linux_side)->GetWorkingStandingZeroPoseToRawTrackingPose((vr::HmdMatrix34_t *)pmatStandingZeroPoseToRawTrackingPose);
    return _ret;
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPlayAreaSize(void *linux_side, float sizeX, float sizeZ)
{
    ((IVRChaperoneSetup*)linux_side)->SetWorkingPlayAreaSize((float)sizeX, (float)sizeZ);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsInfo(void *linux_side, HmdQuad_t *pQuadsBuffer, uint32_t unQuadsCount)
{
    ((IVRChaperoneSetup*)linux_side)->SetWorkingCollisionBoundsInfo((vr::HmdQuad_t *)pQuadsBuffer, (uint32_t)unQuadsCount);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingSeatedZeroPoseToRawTrackingPose(void *linux_side, HmdMatrix34_t *pMatSeatedZeroPoseToRawTrackingPose)
{
    ((IVRChaperoneSetup*)linux_side)->SetWorkingSeatedZeroPoseToRawTrackingPose((const vr::HmdMatrix34_t *)pMatSeatedZeroPoseToRawTrackingPose);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingStandingZeroPoseToRawTrackingPose(void *linux_side, HmdMatrix34_t *pMatStandingZeroPoseToRawTrackingPose)
{
    ((IVRChaperoneSetup*)linux_side)->SetWorkingStandingZeroPoseToRawTrackingPose((const vr::HmdMatrix34_t *)pMatStandingZeroPoseToRawTrackingPose);
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_005_ReloadFromDisk(void *linux_side, EChaperoneConfigFile configFile)
{
    ((IVRChaperoneSetup*)linux_side)->ReloadFromDisk((vr::EChaperoneConfigFile)configFile);
}

bool cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveSeatedZeroPoseToRawTrackingPose(void *linux_side, HmdMatrix34_t *pmatSeatedZeroPoseToRawTrackingPose)
{
    bool _ret;
    _ret = ((IVRChaperoneSetup*)linux_side)->GetLiveSeatedZeroPoseToRawTrackingPose((vr::HmdMatrix34_t *)pmatSeatedZeroPoseToRawTrackingPose);
    return _ret;
}

void cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsTagsInfo(void *linux_side, uint8_t *pTagsBuffer, uint32_t unTagCount)
{
    ((IVRChaperoneSetup*)linux_side)->SetWorkingCollisionBoundsTagsInfo((uint8_t *)pTagsBuffer, (uint32_t)unTagCount);
}

bool cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsTagsInfo(void *linux_side, uint8_t *pTagsBuffer, uint32_t *punTagCount)
{
    bool _ret;
    _ret = ((IVRChaperoneSetup*)linux_side)->GetLiveCollisionBoundsTagsInfo((uint8_t *)pTagsBuffer, (uint32_t *)punTagCount);
    return _ret;
}

bool cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPhysicalBoundsInfo(void *linux_side, HmdQuad_t *pQuadsBuffer, uint32_t unQuadsCount)
{
    bool _ret;
    _ret = ((IVRChaperoneSetup*)linux_side)->SetWorkingPhysicalBoundsInfo((vr::HmdQuad_t *)pQuadsBuffer, (uint32_t)unQuadsCount);
    return _ret;
}

bool cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetLivePhysicalBoundsInfo(void *linux_side, HmdQuad_t *pQuadsBuffer, uint32_t *punQuadsCount)
{
    bool _ret;
    _ret = ((IVRChaperoneSetup*)linux_side)->GetLivePhysicalBoundsInfo((vr::HmdQuad_t *)pQuadsBuffer, (uint32_t *)punQuadsCount);
    return _ret;
}

bool cppIVRChaperoneSetup_IVRChaperoneSetup_005_ExportLiveToBuffer(void *linux_side, char *pBuffer, uint32_t *pnBufferLength)
{
    bool _ret;
    _ret = ((IVRChaperoneSetup*)linux_side)->ExportLiveToBuffer((char *)pBuffer, (uint32_t *)pnBufferLength);
    return _ret;
}

bool cppIVRChaperoneSetup_IVRChaperoneSetup_005_ImportFromBufferToWorking(void *linux_side, const char *pBuffer, uint32_t nImportFlags)
{
    bool _ret;
    _ret = ((IVRChaperoneSetup*)linux_side)->ImportFromBufferToWorking((const char *)pBuffer, (uint32_t)nImportFlags);
    return _ret;
}

#ifdef __cplusplus
}
#endif
