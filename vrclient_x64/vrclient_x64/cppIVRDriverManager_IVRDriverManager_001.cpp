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
void cppIVRDriverManager_IVRDriverManager_001_GetDriverCount( struct cppIVRDriverManager_IVRDriverManager_001_GetDriverCount_params *params )
{
    params->_ret = ((IVRDriverManager*)params->linux_side)->GetDriverCount();
}

void cppIVRDriverManager_IVRDriverManager_001_GetDriverName( struct cppIVRDriverManager_IVRDriverManager_001_GetDriverName_params *params )
{
    params->_ret = ((IVRDriverManager*)params->linux_side)->GetDriverName((vr::DriverId_t)params->nDriver, (char *)params->pchValue, (uint32_t)params->unBufferSize);
}

void cppIVRDriverManager_IVRDriverManager_001_GetDriverHandle( struct cppIVRDriverManager_IVRDriverManager_001_GetDriverHandle_params *params )
{
    params->_ret = ((IVRDriverManager*)params->linux_side)->GetDriverHandle((const char *)params->pchDriverName);
}

void cppIVRDriverManager_IVRDriverManager_001_IsEnabled( struct cppIVRDriverManager_IVRDriverManager_001_IsEnabled_params *params )
{
    params->_ret = ((IVRDriverManager*)params->linux_side)->IsEnabled((vr::DriverId_t)params->nDriver);
}

#ifdef __cplusplus
}
#endif
