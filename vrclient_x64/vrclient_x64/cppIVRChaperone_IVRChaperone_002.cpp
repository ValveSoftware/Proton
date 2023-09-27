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
void cppIVRChaperone_IVRChaperone_002_GetCalibrationState( struct cppIVRChaperone_IVRChaperone_002_GetCalibrationState_params *params )
{
    params->_ret = ((IVRChaperone*)params->linux_side)->GetCalibrationState();
}

void cppIVRChaperone_IVRChaperone_002_GetSoftBoundsInfo( struct cppIVRChaperone_IVRChaperone_002_GetSoftBoundsInfo_params *params )
{
    params->_ret = ((IVRChaperone*)params->linux_side)->GetSoftBoundsInfo((vr::ChaperoneSoftBoundsInfo_t *)params->pInfo);
}

void cppIVRChaperone_IVRChaperone_002_GetHardBoundsInfo( struct cppIVRChaperone_IVRChaperone_002_GetHardBoundsInfo_params *params )
{
    params->_ret = ((IVRChaperone*)params->linux_side)->GetHardBoundsInfo((vr::HmdQuad_t *)params->pQuadsBuffer, (uint32_t *)params->punQuadsCount);
}

void cppIVRChaperone_IVRChaperone_002_GetSeatedBoundsInfo( struct cppIVRChaperone_IVRChaperone_002_GetSeatedBoundsInfo_params *params )
{
    params->_ret = ((IVRChaperone*)params->linux_side)->GetSeatedBoundsInfo((vr::ChaperoneSeatedBoundsInfo_t *)params->pInfo);
}

void cppIVRChaperone_IVRChaperone_002_ReloadInfo( struct cppIVRChaperone_IVRChaperone_002_ReloadInfo_params *params )
{
    ((IVRChaperone*)params->linux_side)->ReloadInfo();
}

void cppIVRChaperone_IVRChaperone_002_SetSceneColor( struct cppIVRChaperone_IVRChaperone_002_SetSceneColor_params *params )
{
    ((IVRChaperone*)params->linux_side)->SetSceneColor((vr::HmdColor_t)params->color);
}

void cppIVRChaperone_IVRChaperone_002_GetBoundsColor( struct cppIVRChaperone_IVRChaperone_002_GetBoundsColor_params *params )
{
    ((IVRChaperone*)params->linux_side)->GetBoundsColor((vr::HmdColor_t *)params->pOutputColorArray, (int)params->nNumOutputColors);
}

void cppIVRChaperone_IVRChaperone_002_AreBoundsVisible( struct cppIVRChaperone_IVRChaperone_002_AreBoundsVisible_params *params )
{
    params->_ret = ((IVRChaperone*)params->linux_side)->AreBoundsVisible();
}

void cppIVRChaperone_IVRChaperone_002_ForceBoundsVisible( struct cppIVRChaperone_IVRChaperone_002_ForceBoundsVisible_params *params )
{
    ((IVRChaperone*)params->linux_side)->ForceBoundsVisible((bool)params->bForce);
}

#ifdef __cplusplus
}
#endif
