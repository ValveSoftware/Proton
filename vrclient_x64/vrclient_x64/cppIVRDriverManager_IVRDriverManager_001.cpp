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

struct cppIVRDriverManager_IVRDriverManager_001
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
    struct cppIVRDriverManager_IVRDriverManager_001 *iface = (struct cppIVRDriverManager_IVRDriverManager_001 *)params->linux_side;
    params->_ret = iface->GetDriverCount(  );
}

void cppIVRDriverManager_IVRDriverManager_001_GetDriverName( struct cppIVRDriverManager_IVRDriverManager_001_GetDriverName_params *params )
{
    struct cppIVRDriverManager_IVRDriverManager_001 *iface = (struct cppIVRDriverManager_IVRDriverManager_001 *)params->linux_side;
    params->_ret = iface->GetDriverName( params->nDriver, params->pchValue, params->unBufferSize );
}

void cppIVRDriverManager_IVRDriverManager_001_GetDriverHandle( struct cppIVRDriverManager_IVRDriverManager_001_GetDriverHandle_params *params )
{
    struct cppIVRDriverManager_IVRDriverManager_001 *iface = (struct cppIVRDriverManager_IVRDriverManager_001 *)params->linux_side;
    params->_ret = iface->GetDriverHandle( params->pchDriverName );
}

void cppIVRDriverManager_IVRDriverManager_001_IsEnabled( struct cppIVRDriverManager_IVRDriverManager_001_IsEnabled_params *params )
{
    struct cppIVRDriverManager_IVRDriverManager_001 *iface = (struct cppIVRDriverManager_IVRDriverManager_001 *)params->linux_side;
    params->_ret = iface->IsEnabled( params->nDriver );
}

#ifdef __cplusplus
}
#endif
