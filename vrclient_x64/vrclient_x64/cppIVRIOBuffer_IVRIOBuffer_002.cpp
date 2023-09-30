/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRIOBuffer_IVRIOBuffer_002.h"
void cppIVRIOBuffer_IVRIOBuffer_002_Open( struct cppIVRIOBuffer_IVRIOBuffer_002_Open_params *params )
{
    struct u_IVRIOBuffer_IVRIOBuffer_002 *iface = (struct u_IVRIOBuffer_IVRIOBuffer_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->Open( params->pchPath, params->mode, params->unElementSize, params->unElements, params->pulBuffer );
}

void cppIVRIOBuffer_IVRIOBuffer_002_Close( struct cppIVRIOBuffer_IVRIOBuffer_002_Close_params *params )
{
    struct u_IVRIOBuffer_IVRIOBuffer_002 *iface = (struct u_IVRIOBuffer_IVRIOBuffer_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->Close( params->ulBuffer );
}

void cppIVRIOBuffer_IVRIOBuffer_002_Read( struct cppIVRIOBuffer_IVRIOBuffer_002_Read_params *params )
{
    struct u_IVRIOBuffer_IVRIOBuffer_002 *iface = (struct u_IVRIOBuffer_IVRIOBuffer_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->Read( params->ulBuffer, params->pDst, params->unBytes, params->punRead );
}

void cppIVRIOBuffer_IVRIOBuffer_002_Write( struct cppIVRIOBuffer_IVRIOBuffer_002_Write_params *params )
{
    struct u_IVRIOBuffer_IVRIOBuffer_002 *iface = (struct u_IVRIOBuffer_IVRIOBuffer_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->Write( params->ulBuffer, params->pSrc, params->unBytes );
}

void cppIVRIOBuffer_IVRIOBuffer_002_PropertyContainer( struct cppIVRIOBuffer_IVRIOBuffer_002_PropertyContainer_params *params )
{
    struct u_IVRIOBuffer_IVRIOBuffer_002 *iface = (struct u_IVRIOBuffer_IVRIOBuffer_002 *)params->linux_side;
    params->_ret = (uint64_t)iface->PropertyContainer( params->ulBuffer );
}

void cppIVRIOBuffer_IVRIOBuffer_002_HasReaders( struct cppIVRIOBuffer_IVRIOBuffer_002_HasReaders_params *params )
{
    struct u_IVRIOBuffer_IVRIOBuffer_002 *iface = (struct u_IVRIOBuffer_IVRIOBuffer_002 *)params->linux_side;
    params->_ret = (bool)iface->HasReaders( params->ulBuffer );
}

