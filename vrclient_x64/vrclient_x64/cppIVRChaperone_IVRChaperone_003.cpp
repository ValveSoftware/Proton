#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.12.5/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRChaperone_IVRChaperone_003.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVRChaperone_IVRChaperone_003_GetCalibrationState( struct cppIVRChaperone_IVRChaperone_003_GetCalibrationState_params *params )
{
    params->_ret = ((IVRChaperone*)params->linux_side)->GetCalibrationState();
}

void cppIVRChaperone_IVRChaperone_003_GetPlayAreaSize( struct cppIVRChaperone_IVRChaperone_003_GetPlayAreaSize_params *params )
{
    params->_ret = ((IVRChaperone*)params->linux_side)->GetPlayAreaSize((float *)params->pSizeX, (float *)params->pSizeZ);
}

void cppIVRChaperone_IVRChaperone_003_GetPlayAreaRect( struct cppIVRChaperone_IVRChaperone_003_GetPlayAreaRect_params *params )
{
    params->_ret = ((IVRChaperone*)params->linux_side)->GetPlayAreaRect((vr::HmdQuad_t *)params->rect);
}

void cppIVRChaperone_IVRChaperone_003_ReloadInfo( struct cppIVRChaperone_IVRChaperone_003_ReloadInfo_params *params )
{
    ((IVRChaperone*)params->linux_side)->ReloadInfo();
}

void cppIVRChaperone_IVRChaperone_003_SetSceneColor( struct cppIVRChaperone_IVRChaperone_003_SetSceneColor_params *params )
{
    ((IVRChaperone*)params->linux_side)->SetSceneColor((vr::HmdColor_t)params->color);
}

void cppIVRChaperone_IVRChaperone_003_GetBoundsColor( struct cppIVRChaperone_IVRChaperone_003_GetBoundsColor_params *params )
{
    ((IVRChaperone*)params->linux_side)->GetBoundsColor((vr::HmdColor_t *)params->pOutputColorArray, (int)params->nNumOutputColors, (float)params->flCollisionBoundsFadeDistance, (vr::HmdColor_t *)params->pOutputCameraColor);
}

void cppIVRChaperone_IVRChaperone_003_AreBoundsVisible( struct cppIVRChaperone_IVRChaperone_003_AreBoundsVisible_params *params )
{
    params->_ret = ((IVRChaperone*)params->linux_side)->AreBoundsVisible();
}

void cppIVRChaperone_IVRChaperone_003_ForceBoundsVisible( struct cppIVRChaperone_IVRChaperone_003_ForceBoundsVisible_params *params )
{
    ((IVRChaperone*)params->linux_side)->ForceBoundsVisible((bool)params->bForce);
}

#ifdef __cplusplus
}
#endif
