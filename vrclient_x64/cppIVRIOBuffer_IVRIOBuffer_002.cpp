/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVRIOBuffer_IVRIOBuffer_002_Open( void *args )
{
    struct IVRIOBuffer_IVRIOBuffer_002_Open_params *params = (struct IVRIOBuffer_IVRIOBuffer_002_Open_params *)args;
    struct u_IVRIOBuffer_IVRIOBuffer_002 *iface = (struct u_IVRIOBuffer_IVRIOBuffer_002 *)params->linux_side;
    params->_ret = iface->Open( params->pchPath, params->mode, params->unElementSize, params->unElements, params->pulBuffer );
    return 0;
}

NTSTATUS IVRIOBuffer_IVRIOBuffer_002_Close( void *args )
{
    struct IVRIOBuffer_IVRIOBuffer_002_Close_params *params = (struct IVRIOBuffer_IVRIOBuffer_002_Close_params *)args;
    struct u_IVRIOBuffer_IVRIOBuffer_002 *iface = (struct u_IVRIOBuffer_IVRIOBuffer_002 *)params->linux_side;
    params->_ret = iface->Close( params->ulBuffer );
    return 0;
}

NTSTATUS IVRIOBuffer_IVRIOBuffer_002_Read( void *args )
{
    struct IVRIOBuffer_IVRIOBuffer_002_Read_params *params = (struct IVRIOBuffer_IVRIOBuffer_002_Read_params *)args;
    struct u_IVRIOBuffer_IVRIOBuffer_002 *iface = (struct u_IVRIOBuffer_IVRIOBuffer_002 *)params->linux_side;
    params->_ret = iface->Read( params->ulBuffer, params->pDst, params->unBytes, params->punRead );
    return 0;
}

NTSTATUS IVRIOBuffer_IVRIOBuffer_002_Write( void *args )
{
    struct IVRIOBuffer_IVRIOBuffer_002_Write_params *params = (struct IVRIOBuffer_IVRIOBuffer_002_Write_params *)args;
    struct u_IVRIOBuffer_IVRIOBuffer_002 *iface = (struct u_IVRIOBuffer_IVRIOBuffer_002 *)params->linux_side;
    params->_ret = iface->Write( params->ulBuffer, params->pSrc, params->unBytes );
    return 0;
}

NTSTATUS IVRIOBuffer_IVRIOBuffer_002_PropertyContainer( void *args )
{
    struct IVRIOBuffer_IVRIOBuffer_002_PropertyContainer_params *params = (struct IVRIOBuffer_IVRIOBuffer_002_PropertyContainer_params *)args;
    struct u_IVRIOBuffer_IVRIOBuffer_002 *iface = (struct u_IVRIOBuffer_IVRIOBuffer_002 *)params->linux_side;
    params->_ret = iface->PropertyContainer( params->ulBuffer );
    return 0;
}

NTSTATUS IVRIOBuffer_IVRIOBuffer_002_HasReaders( void *args )
{
    struct IVRIOBuffer_IVRIOBuffer_002_HasReaders_params *params = (struct IVRIOBuffer_IVRIOBuffer_002_HasReaders_params *)args;
    struct u_IVRIOBuffer_IVRIOBuffer_002 *iface = (struct u_IVRIOBuffer_IVRIOBuffer_002 *)params->linux_side;
    params->_ret = iface->HasReaders( params->ulBuffer );
    return 0;
}

