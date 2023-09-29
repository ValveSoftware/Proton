/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct cppIVRResources_IVRResources_001_LoadSharedResource_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchResourceName;
    char *pchBuffer;
    uint32_t unBufferLen;
};
extern void cppIVRResources_IVRResources_001_LoadSharedResource( struct cppIVRResources_IVRResources_001_LoadSharedResource_params *params );

struct cppIVRResources_IVRResources_001_GetResourceFullPath_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchResourceName;
    const char *pchResourceTypeDirectory;
    char *pchPathBuffer;
    uint32_t unBufferLen;
};
extern void cppIVRResources_IVRResources_001_GetResourceFullPath( struct cppIVRResources_IVRResources_001_GetResourceFullPath_params *params );

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
