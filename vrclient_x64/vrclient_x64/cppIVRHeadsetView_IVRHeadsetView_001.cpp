#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.23.7/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRHeadsetView_IVRHeadsetView_001.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewSize(void *linux_side, uint32_t nWidth, uint32_t nHeight)
{
    ((IVRHeadsetView*)linux_side)->SetHeadsetViewSize((uint32_t)nWidth, (uint32_t)nHeight);
}

void cppIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewSize(void *linux_side, uint32_t * pnWidth, uint32_t * pnHeight)
{
    ((IVRHeadsetView*)linux_side)->GetHeadsetViewSize((uint32_t *)pnWidth, (uint32_t *)pnHeight);
}

void cppIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewMode(void *linux_side, HeadsetViewMode_t eHeadsetViewMode)
{
    ((IVRHeadsetView*)linux_side)->SetHeadsetViewMode((vr::HeadsetViewMode_t)eHeadsetViewMode);
}

vr::HeadsetViewMode_t cppIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewMode(void *linux_side)
{
    return ((IVRHeadsetView*)linux_side)->GetHeadsetViewMode();
}

void cppIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewCropped(void *linux_side, bool bCropped)
{
    ((IVRHeadsetView*)linux_side)->SetHeadsetViewCropped((bool)bCropped);
}

bool cppIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewCropped(void *linux_side)
{
    return ((IVRHeadsetView*)linux_side)->GetHeadsetViewCropped();
}

float cppIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewAspectRatio(void *linux_side)
{
    return ((IVRHeadsetView*)linux_side)->GetHeadsetViewAspectRatio();
}

void cppIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewBlendRange(void *linux_side, float flStartPct, float flEndPct)
{
    ((IVRHeadsetView*)linux_side)->SetHeadsetViewBlendRange((float)flStartPct, (float)flEndPct);
}

void cppIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewBlendRange(void *linux_side, float * pStartPct, float * pEndPct)
{
    ((IVRHeadsetView*)linux_side)->GetHeadsetViewBlendRange((float *)pStartPct, (float *)pEndPct);
}

#ifdef __cplusplus
}
#endif
