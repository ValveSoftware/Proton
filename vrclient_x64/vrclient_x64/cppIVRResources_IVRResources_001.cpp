#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.26.7/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRResources_IVRResources_001.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVRResources_IVRResources_001_LoadSharedResource( struct cppIVRResources_IVRResources_001_LoadSharedResource_params *params )
{
    params->_ret = ((IVRResources*)params->linux_side)->LoadSharedResource((const char *)params->pchResourceName, (char *)params->pchBuffer, (uint32_t)params->unBufferLen);
}

void cppIVRResources_IVRResources_001_GetResourceFullPath( struct cppIVRResources_IVRResources_001_GetResourceFullPath_params *params )
{
    params->_ret = ((IVRResources*)params->linux_side)->GetResourceFullPath((const char *)params->pchResourceName, (const char *)params->pchResourceTypeDirectory, (char *)params->pchPathBuffer, (uint32_t)params->unBufferLen);
}

#ifdef __cplusplus
}
#endif
