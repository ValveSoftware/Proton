#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.26.7/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRHeadsetView_IVRHeadsetView_001.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewSize( struct cppIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewSize_params *params )
{
    ((IVRHeadsetView*)params->linux_side)->SetHeadsetViewSize((uint32_t)params->nWidth, (uint32_t)params->nHeight);
}

void cppIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewSize( struct cppIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewSize_params *params )
{
    ((IVRHeadsetView*)params->linux_side)->GetHeadsetViewSize((uint32_t *)params->pnWidth, (uint32_t *)params->pnHeight);
}

void cppIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewMode( struct cppIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewMode_params *params )
{
    ((IVRHeadsetView*)params->linux_side)->SetHeadsetViewMode((vr::HeadsetViewMode_t)params->eHeadsetViewMode);
}

void cppIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewMode( struct cppIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewMode_params *params )
{
    params->_ret = ((IVRHeadsetView*)params->linux_side)->GetHeadsetViewMode();
}

void cppIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewCropped( struct cppIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewCropped_params *params )
{
    ((IVRHeadsetView*)params->linux_side)->SetHeadsetViewCropped((bool)params->bCropped);
}

void cppIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewCropped( struct cppIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewCropped_params *params )
{
    params->_ret = ((IVRHeadsetView*)params->linux_side)->GetHeadsetViewCropped();
}

void cppIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewAspectRatio( struct cppIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewAspectRatio_params *params )
{
    params->_ret = ((IVRHeadsetView*)params->linux_side)->GetHeadsetViewAspectRatio();
}

void cppIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewBlendRange( struct cppIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewBlendRange_params *params )
{
    ((IVRHeadsetView*)params->linux_side)->SetHeadsetViewBlendRange((float)params->flStartPct, (float)params->flEndPct);
}

void cppIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewBlendRange( struct cppIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewBlendRange_params *params )
{
    ((IVRHeadsetView*)params->linux_side)->GetHeadsetViewBlendRange((float *)params->pStartPct, (float *)params->pEndPct);
}

#ifdef __cplusplus
}
#endif
