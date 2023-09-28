#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.26.7/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRIOBuffer_IVRIOBuffer_002.h"
#ifdef __cplusplus
extern "C" {
#endif

struct cppIVRIOBuffer_IVRIOBuffer_002
{
#ifdef __cplusplus
    virtual uint32_t Open( const char *, uint32_t, uint32_t, uint32_t, uint64_t * ) = 0;
    virtual uint32_t Close( uint64_t ) = 0;
    virtual uint32_t Read( uint64_t, void *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t Write( uint64_t, void *, uint32_t ) = 0;
    virtual uint64_t PropertyContainer( uint64_t ) = 0;
    virtual bool HasReaders( uint64_t ) = 0;
#endif /* __cplusplus */
};

void cppIVRIOBuffer_IVRIOBuffer_002_Open( struct cppIVRIOBuffer_IVRIOBuffer_002_Open_params *params )
{
    struct cppIVRIOBuffer_IVRIOBuffer_002 *iface = (struct cppIVRIOBuffer_IVRIOBuffer_002 *)params->linux_side;
    params->_ret = iface->Open( params->pchPath, params->mode, params->unElementSize, params->unElements, params->pulBuffer );
}

void cppIVRIOBuffer_IVRIOBuffer_002_Close( struct cppIVRIOBuffer_IVRIOBuffer_002_Close_params *params )
{
    struct cppIVRIOBuffer_IVRIOBuffer_002 *iface = (struct cppIVRIOBuffer_IVRIOBuffer_002 *)params->linux_side;
    params->_ret = iface->Close( params->ulBuffer );
}

void cppIVRIOBuffer_IVRIOBuffer_002_Read( struct cppIVRIOBuffer_IVRIOBuffer_002_Read_params *params )
{
    struct cppIVRIOBuffer_IVRIOBuffer_002 *iface = (struct cppIVRIOBuffer_IVRIOBuffer_002 *)params->linux_side;
    params->_ret = iface->Read( params->ulBuffer, params->pDst, params->unBytes, params->punRead );
}

void cppIVRIOBuffer_IVRIOBuffer_002_Write( struct cppIVRIOBuffer_IVRIOBuffer_002_Write_params *params )
{
    struct cppIVRIOBuffer_IVRIOBuffer_002 *iface = (struct cppIVRIOBuffer_IVRIOBuffer_002 *)params->linux_side;
    params->_ret = iface->Write( params->ulBuffer, params->pSrc, params->unBytes );
}

void cppIVRIOBuffer_IVRIOBuffer_002_PropertyContainer( struct cppIVRIOBuffer_IVRIOBuffer_002_PropertyContainer_params *params )
{
    struct cppIVRIOBuffer_IVRIOBuffer_002 *iface = (struct cppIVRIOBuffer_IVRIOBuffer_002 *)params->linux_side;
    params->_ret = iface->PropertyContainer( params->ulBuffer );
}

void cppIVRIOBuffer_IVRIOBuffer_002_HasReaders( struct cppIVRIOBuffer_IVRIOBuffer_002_HasReaders_params *params )
{
    struct cppIVRIOBuffer_IVRIOBuffer_002 *iface = (struct cppIVRIOBuffer_IVRIOBuffer_002 *)params->linux_side;
    params->_ret = iface->HasReaders( params->ulBuffer );
}

#ifdef __cplusplus
}
#endif
