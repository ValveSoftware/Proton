#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.10.30/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRMailbox_IVRMailbox_001.h"
#ifdef __cplusplus
extern "C" {
#endif

struct cppIVRMailbox_IVRMailbox_001
{
#ifdef __cplusplus
    virtual uint32_t undoc1( const char *, uint64_t * ) = 0;
    virtual uint32_t undoc2( uint64_t ) = 0;
    virtual uint32_t undoc3( uint64_t, const char *, const char * ) = 0;
    virtual uint32_t undoc4( uint64_t, char *, uint32_t, uint32_t * ) = 0;
#endif /* __cplusplus */
};

void cppIVRMailbox_IVRMailbox_001_undoc1( struct cppIVRMailbox_IVRMailbox_001_undoc1_params *params )
{
    struct cppIVRMailbox_IVRMailbox_001 *iface = (struct cppIVRMailbox_IVRMailbox_001 *)params->linux_side;
    params->_ret = iface->undoc1( params->a, params->b );
}

void cppIVRMailbox_IVRMailbox_001_undoc2( struct cppIVRMailbox_IVRMailbox_001_undoc2_params *params )
{
    struct cppIVRMailbox_IVRMailbox_001 *iface = (struct cppIVRMailbox_IVRMailbox_001 *)params->linux_side;
    params->_ret = iface->undoc2( params->a );
}

void cppIVRMailbox_IVRMailbox_001_undoc3( struct cppIVRMailbox_IVRMailbox_001_undoc3_params *params )
{
    struct cppIVRMailbox_IVRMailbox_001 *iface = (struct cppIVRMailbox_IVRMailbox_001 *)params->linux_side;
    params->_ret = iface->undoc3( params->a, params->b, params->c );
}

void cppIVRMailbox_IVRMailbox_001_undoc4( struct cppIVRMailbox_IVRMailbox_001_undoc4_params *params )
{
    struct cppIVRMailbox_IVRMailbox_001 *iface = (struct cppIVRMailbox_IVRMailbox_001 *)params->linux_side;
    params->_ret = iface->undoc4( params->a, params->b, params->c, params->d );
}

#ifdef __cplusplus
}
#endif
