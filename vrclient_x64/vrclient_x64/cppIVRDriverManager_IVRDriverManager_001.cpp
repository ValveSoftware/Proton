/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRDriverManager_IVRDriverManager_001.h"
struct u_IVRDriverManager_IVRDriverManager_001
{
#ifdef __cplusplus
    virtual uint32_t GetDriverCount(  ) = 0;
    virtual uint32_t GetDriverName( uint32_t, char *, uint32_t ) = 0;
    virtual uint64_t GetDriverHandle( const char * ) = 0;
    virtual bool IsEnabled( uint32_t ) = 0;
#endif /* __cplusplus */
};

void cppIVRDriverManager_IVRDriverManager_001_GetDriverCount( struct cppIVRDriverManager_IVRDriverManager_001_GetDriverCount_params *params )
{
    struct u_IVRDriverManager_IVRDriverManager_001 *iface = (struct u_IVRDriverManager_IVRDriverManager_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetDriverCount(  );
}

void cppIVRDriverManager_IVRDriverManager_001_GetDriverName( struct cppIVRDriverManager_IVRDriverManager_001_GetDriverName_params *params )
{
    struct u_IVRDriverManager_IVRDriverManager_001 *iface = (struct u_IVRDriverManager_IVRDriverManager_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetDriverName( params->nDriver, params->pchValue, params->unBufferSize );
}

void cppIVRDriverManager_IVRDriverManager_001_GetDriverHandle( struct cppIVRDriverManager_IVRDriverManager_001_GetDriverHandle_params *params )
{
    struct u_IVRDriverManager_IVRDriverManager_001 *iface = (struct u_IVRDriverManager_IVRDriverManager_001 *)params->linux_side;
    params->_ret = (uint64_t)iface->GetDriverHandle( params->pchDriverName );
}

void cppIVRDriverManager_IVRDriverManager_001_IsEnabled( struct cppIVRDriverManager_IVRDriverManager_001_IsEnabled_params *params )
{
    struct u_IVRDriverManager_IVRDriverManager_001 *iface = (struct u_IVRDriverManager_IVRDriverManager_001 *)params->linux_side;
    params->_ret = (bool)iface->IsEnabled( params->nDriver );
}

