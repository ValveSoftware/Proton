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
void cppIVRMailbox_IVRMailbox_001_undoc1( struct cppIVRMailbox_IVRMailbox_001_undoc1_params *params )
{
    params->_ret = ((IVRMailbox*)params->linux_side)->undoc1((const char *)params->a, (vr::vrmb_typea *)params->b);
}

void cppIVRMailbox_IVRMailbox_001_undoc2( struct cppIVRMailbox_IVRMailbox_001_undoc2_params *params )
{
    params->_ret = ((IVRMailbox*)params->linux_side)->undoc2((vr::vrmb_typea)params->a);
}

void cppIVRMailbox_IVRMailbox_001_undoc3( struct cppIVRMailbox_IVRMailbox_001_undoc3_params *params )
{
    params->_ret = ((IVRMailbox*)params->linux_side)->undoc3((vr::vrmb_typea)params->a, (const char *)params->b, (const char *)params->c);
}

void cppIVRMailbox_IVRMailbox_001_undoc4( struct cppIVRMailbox_IVRMailbox_001_undoc4_params *params )
{
    params->_ret = ((IVRMailbox*)params->linux_side)->undoc4((vr::vrmb_typea)params->a, (char *)params->b, (uint32_t)params->c, (uint32_t *)params->d);
}

#ifdef __cplusplus
}
#endif
