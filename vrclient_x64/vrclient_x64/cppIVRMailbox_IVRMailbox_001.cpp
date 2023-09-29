/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRMailbox_IVRMailbox_001.h"
struct u_IVRMailbox_IVRMailbox_001
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
    struct u_IVRMailbox_IVRMailbox_001 *iface = (struct u_IVRMailbox_IVRMailbox_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->undoc1( params->a, params->b );
}

void cppIVRMailbox_IVRMailbox_001_undoc2( struct cppIVRMailbox_IVRMailbox_001_undoc2_params *params )
{
    struct u_IVRMailbox_IVRMailbox_001 *iface = (struct u_IVRMailbox_IVRMailbox_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->undoc2( params->a );
}

void cppIVRMailbox_IVRMailbox_001_undoc3( struct cppIVRMailbox_IVRMailbox_001_undoc3_params *params )
{
    struct u_IVRMailbox_IVRMailbox_001 *iface = (struct u_IVRMailbox_IVRMailbox_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->undoc3( params->a, params->b, params->c );
}

void cppIVRMailbox_IVRMailbox_001_undoc4( struct cppIVRMailbox_IVRMailbox_001_undoc4_params *params )
{
    struct u_IVRMailbox_IVRMailbox_001 *iface = (struct u_IVRMailbox_IVRMailbox_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->undoc4( params->a, params->b, params->c, params->d );
}

