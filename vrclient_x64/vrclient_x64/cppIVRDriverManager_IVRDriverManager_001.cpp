#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.26.7/ivrclientcore.h"
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
    uint32_t _ret;
    _ret = ((IVRDriverManager*)linux_side)->GetDriverCount();
    return _ret;
}

uint32_t cppIVRDriverManager_IVRDriverManager_001_GetDriverName(void *linux_side, DriverId_t nDriver, char *pchValue, uint32_t unBufferSize)
{
    uint32_t _ret;
    _ret = ((IVRDriverManager*)linux_side)->GetDriverName((vr::DriverId_t)nDriver, (char *)pchValue, (uint32_t)unBufferSize);
    return _ret;
}

vr::DriverHandle_t cppIVRDriverManager_IVRDriverManager_001_GetDriverHandle(void *linux_side, const char *pchDriverName)
{
    vr::DriverHandle_t _ret;
    _ret = ((IVRDriverManager*)linux_side)->GetDriverHandle((const char *)pchDriverName);
    return _ret;
}

bool cppIVRDriverManager_IVRDriverManager_001_IsEnabled(void *linux_side, DriverId_t nDriver)
{
    bool _ret;
    _ret = ((IVRDriverManager*)linux_side)->IsEnabled((vr::DriverId_t)nDriver);
    return _ret;
}

#ifdef __cplusplus
}
#endif
