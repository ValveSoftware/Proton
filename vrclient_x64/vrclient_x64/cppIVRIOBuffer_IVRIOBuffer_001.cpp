/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRIOBuffer_IVRIOBuffer_001.h"
void cppIVRIOBuffer_IVRIOBuffer_001_Open( struct cppIVRIOBuffer_IVRIOBuffer_001_Open_params *params )
{
    struct u_IVRIOBuffer_IVRIOBuffer_001 *iface = (struct u_IVRIOBuffer_IVRIOBuffer_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->Open( params->pchPath, params->mode, params->unElementSize, params->unElements, params->pulBuffer );
}

void cppIVRIOBuffer_IVRIOBuffer_001_Close( struct cppIVRIOBuffer_IVRIOBuffer_001_Close_params *params )
{
    struct u_IVRIOBuffer_IVRIOBuffer_001 *iface = (struct u_IVRIOBuffer_IVRIOBuffer_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->Close( params->ulBuffer );
}

void cppIVRIOBuffer_IVRIOBuffer_001_Read( struct cppIVRIOBuffer_IVRIOBuffer_001_Read_params *params )
{
    struct u_IVRIOBuffer_IVRIOBuffer_001 *iface = (struct u_IVRIOBuffer_IVRIOBuffer_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->Read( params->ulBuffer, params->pDst, params->unBytes, params->punRead );
}

void cppIVRIOBuffer_IVRIOBuffer_001_Write( struct cppIVRIOBuffer_IVRIOBuffer_001_Write_params *params )
{
    struct u_IVRIOBuffer_IVRIOBuffer_001 *iface = (struct u_IVRIOBuffer_IVRIOBuffer_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->Write( params->ulBuffer, params->pSrc, params->unBytes );
}

void cppIVRIOBuffer_IVRIOBuffer_001_PropertyContainer( struct cppIVRIOBuffer_IVRIOBuffer_001_PropertyContainer_params *params )
{
    struct u_IVRIOBuffer_IVRIOBuffer_001 *iface = (struct u_IVRIOBuffer_IVRIOBuffer_001 *)params->linux_side;
    params->_ret = (uint64_t)iface->PropertyContainer( params->ulBuffer );
}

