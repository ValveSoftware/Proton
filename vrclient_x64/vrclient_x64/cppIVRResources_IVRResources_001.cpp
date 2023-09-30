/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRResources_IVRResources_001.h"
void cppIVRResources_IVRResources_001_LoadSharedResource( struct cppIVRResources_IVRResources_001_LoadSharedResource_params *params )
{
    struct u_IVRResources_IVRResources_001 *iface = (struct u_IVRResources_IVRResources_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->LoadSharedResource( params->pchResourceName, params->pchBuffer, params->unBufferLen );
}

void cppIVRResources_IVRResources_001_GetResourceFullPath( struct cppIVRResources_IVRResources_001_GetResourceFullPath_params *params )
{
    struct u_IVRResources_IVRResources_001 *iface = (struct u_IVRResources_IVRResources_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetResourceFullPath( params->pchResourceName, params->pchResourceTypeDirectory, params->pchPathBuffer, params->unBufferLen );
}

