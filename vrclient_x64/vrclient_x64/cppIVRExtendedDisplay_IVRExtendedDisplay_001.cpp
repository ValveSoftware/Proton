#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.26.7/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRExtendedDisplay_IVRExtendedDisplay_001.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVRExtendedDisplay_IVRExtendedDisplay_001_GetWindowBounds( struct cppIVRExtendedDisplay_IVRExtendedDisplay_001_GetWindowBounds_params *params )
{
    ((IVRExtendedDisplay*)params->linux_side)->GetWindowBounds((int32_t *)params->pnX, (int32_t *)params->pnY, (uint32_t *)params->pnWidth, (uint32_t *)params->pnHeight);
}

void cppIVRExtendedDisplay_IVRExtendedDisplay_001_GetEyeOutputViewport( struct cppIVRExtendedDisplay_IVRExtendedDisplay_001_GetEyeOutputViewport_params *params )
{
    ((IVRExtendedDisplay*)params->linux_side)->GetEyeOutputViewport((vr::EVREye)params->eEye, (uint32_t *)params->pnX, (uint32_t *)params->pnY, (uint32_t *)params->pnWidth, (uint32_t *)params->pnHeight);
}

void cppIVRExtendedDisplay_IVRExtendedDisplay_001_GetDXGIOutputInfo( struct cppIVRExtendedDisplay_IVRExtendedDisplay_001_GetDXGIOutputInfo_params *params )
{
    ((IVRExtendedDisplay*)params->linux_side)->GetDXGIOutputInfo((int32_t *)params->pnAdapterIndex, (int32_t *)params->pnAdapterOutputIndex);
}

#ifdef __cplusplus
}
#endif
