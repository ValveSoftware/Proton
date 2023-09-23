#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v0.9.10/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRChaperone_IVRChaperone_002.h"
#ifdef __cplusplus
extern "C" {
#endif
vr::ChaperoneCalibrationState cppIVRChaperone_IVRChaperone_002_GetCalibrationState(void *linux_side)
{
    vr::ChaperoneCalibrationState _ret;
    _ret = ((IVRChaperone*)linux_side)->GetCalibrationState();
    return _ret;
}

bool cppIVRChaperone_IVRChaperone_002_GetSoftBoundsInfo(void *linux_side, ChaperoneSoftBoundsInfo_t *pInfo)
{
    bool _ret;
    _ret = ((IVRChaperone*)linux_side)->GetSoftBoundsInfo((vr::ChaperoneSoftBoundsInfo_t *)pInfo);
    return _ret;
}

bool cppIVRChaperone_IVRChaperone_002_GetHardBoundsInfo(void *linux_side, HmdQuad_t *pQuadsBuffer, uint32_t *punQuadsCount)
{
    bool _ret;
    _ret = ((IVRChaperone*)linux_side)->GetHardBoundsInfo((vr::HmdQuad_t *)pQuadsBuffer, (uint32_t *)punQuadsCount);
    return _ret;
}

bool cppIVRChaperone_IVRChaperone_002_GetSeatedBoundsInfo(void *linux_side, ChaperoneSeatedBoundsInfo_t *pInfo)
{
    bool _ret;
    _ret = ((IVRChaperone*)linux_side)->GetSeatedBoundsInfo((vr::ChaperoneSeatedBoundsInfo_t *)pInfo);
    return _ret;
}

void cppIVRChaperone_IVRChaperone_002_ReloadInfo(void *linux_side)
{
    ((IVRChaperone*)linux_side)->ReloadInfo();
}

void cppIVRChaperone_IVRChaperone_002_SetSceneColor(void *linux_side, HmdColor_t color)
{
    ((IVRChaperone*)linux_side)->SetSceneColor((vr::HmdColor_t)color);
}

void cppIVRChaperone_IVRChaperone_002_GetBoundsColor(void *linux_side, HmdColor_t *pOutputColorArray, int nNumOutputColors)
{
    ((IVRChaperone*)linux_side)->GetBoundsColor((vr::HmdColor_t *)pOutputColorArray, (int)nNumOutputColors);
}

bool cppIVRChaperone_IVRChaperone_002_AreBoundsVisible(void *linux_side)
{
    bool _ret;
    _ret = ((IVRChaperone*)linux_side)->AreBoundsVisible();
    return _ret;
}

void cppIVRChaperone_IVRChaperone_002_ForceBoundsVisible(void *linux_side, bool bForce)
{
    ((IVRChaperone*)linux_side)->ForceBoundsVisible((bool)bForce);
}

#ifdef __cplusplus
}
#endif
