#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.1.3b/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRExtendedDisplay_IVRExtendedDisplay_001.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVRExtendedDisplay_IVRExtendedDisplay_001_GetWindowBounds(void *linux_side, int32_t * pnX, int32_t * pnY, uint32_t * pnWidth, uint32_t * pnHeight)
{
    ((IVRExtendedDisplay*)linux_side)->GetWindowBounds((int32_t *)pnX, (int32_t *)pnY, (uint32_t *)pnWidth, (uint32_t *)pnHeight);
}

void cppIVRExtendedDisplay_IVRExtendedDisplay_001_GetEyeOutputViewport(void *linux_side, EVREye eEye, uint32_t * pnX, uint32_t * pnY, uint32_t * pnWidth, uint32_t * pnHeight)
{
    ((IVRExtendedDisplay*)linux_side)->GetEyeOutputViewport((vr::EVREye)eEye, (uint32_t *)pnX, (uint32_t *)pnY, (uint32_t *)pnWidth, (uint32_t *)pnHeight);
}

void cppIVRExtendedDisplay_IVRExtendedDisplay_001_GetDXGIOutputInfo(void *linux_side, int32_t * pnAdapterIndex, int32_t * pnAdapterOutputIndex)
{
    ((IVRExtendedDisplay*)linux_side)->GetDXGIOutputInfo((int32_t *)pnAdapterIndex, (int32_t *)pnAdapterOutputIndex);
}

#ifdef __cplusplus
}
#endif
