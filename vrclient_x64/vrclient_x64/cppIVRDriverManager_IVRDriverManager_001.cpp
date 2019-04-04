#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.1.3b/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRDriverManager_IVRDriverManager_001.h"
#ifdef __cplusplus
extern "C" {
#endif
uint32_t cppIVRDriverManager_IVRDriverManager_001_GetDriverCount(void *linux_side)
{
    return ((IVRDriverManager*)linux_side)->GetDriverCount();
}

uint32_t cppIVRDriverManager_IVRDriverManager_001_GetDriverName(void *linux_side, DriverId_t nDriver, char * pchValue, uint32_t unBufferSize)
{
    return ((IVRDriverManager*)linux_side)->GetDriverName((vr::DriverId_t)nDriver, (char *)pchValue, (uint32_t)unBufferSize);
}

vr::DriverHandle_t cppIVRDriverManager_IVRDriverManager_001_GetDriverHandle(void *linux_side, const char * pchDriverName)
{
    return ((IVRDriverManager*)linux_side)->GetDriverHandle((const char *)pchDriverName);
}

#ifdef __cplusplus
}
#endif
