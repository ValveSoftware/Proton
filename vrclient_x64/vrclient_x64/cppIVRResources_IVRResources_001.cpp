#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.1.3b/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRResources_IVRResources_001.h"
#ifdef __cplusplus
extern "C" {
#endif
uint32_t cppIVRResources_IVRResources_001_LoadSharedResource(void *linux_side, const char * pchResourceName, char * pchBuffer, uint32_t unBufferLen)
{
    return ((IVRResources*)linux_side)->LoadSharedResource((const char *)pchResourceName, (char *)pchBuffer, (uint32_t)unBufferLen);
}

uint32_t cppIVRResources_IVRResources_001_GetResourceFullPath(void *linux_side, const char * pchResourceName, const char * pchResourceTypeDirectory, char * pchPathBuffer, uint32_t unBufferLen)
{
    return ((IVRResources*)linux_side)->GetResourceFullPath((const char *)pchResourceName, (const char *)pchResourceTypeDirectory, (char *)pchPathBuffer, (uint32_t)unBufferLen);
}

#ifdef __cplusplus
}
#endif
