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

struct cppIVRResources_IVRResources_001
{
#ifdef __cplusplus
    virtual uint32_t LoadSharedResource( const char *, char *, uint32_t ) = 0;
    virtual uint32_t GetResourceFullPath( const char *, const char *, char *, uint32_t ) = 0;
#endif /* __cplusplus */
};

void cppIVRResources_IVRResources_001_LoadSharedResource( struct cppIVRResources_IVRResources_001_LoadSharedResource_params *params )
{
    struct cppIVRResources_IVRResources_001 *iface = (struct cppIVRResources_IVRResources_001 *)params->linux_side;
    params->_ret = iface->LoadSharedResource( params->pchResourceName, params->pchBuffer, params->unBufferLen );
}

void cppIVRResources_IVRResources_001_GetResourceFullPath( struct cppIVRResources_IVRResources_001_GetResourceFullPath_params *params )
{
    struct cppIVRResources_IVRResources_001 *iface = (struct cppIVRResources_IVRResources_001 *)params->linux_side;
    params->_ret = iface->GetResourceFullPath( params->pchResourceName, params->pchResourceTypeDirectory, params->pchPathBuffer, params->unBufferLen );
}

#ifdef __cplusplus
}
#endif
