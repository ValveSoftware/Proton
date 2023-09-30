/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamGameStats_SteamGameStats001.h"

struct u_ISteamGameStats_SteamGameStats001
{
#ifdef __cplusplus
    virtual uint64_t GetNewSession( int8_t, uint64_t, int32_t, uint32_t ) = 0;
    virtual uint64_t EndSession( uint64_t, uint32_t, int32_t ) = 0;
    virtual uint32_t AddSessionAttributeInt( uint64_t, const char *, int32_t ) = 0;
    virtual uint32_t AddSessionAttributeString( uint64_t, const char *, const char * ) = 0;
    virtual uint32_t AddSessionAttributeFloat( uint64_t, const char *, float ) = 0;
    virtual uint32_t AddNewRow( uint64_t *, uint64_t, const char * ) = 0;
    virtual uint32_t CommitRow( uint64_t ) = 0;
    virtual uint32_t CommitOutstandingRows( uint64_t ) = 0;
    virtual uint32_t AddRowAttributeInt( uint64_t, const char *, int32_t ) = 0;
    virtual uint32_t AddRowAtributeString( uint64_t, const char *, const char * ) = 0;
    virtual uint32_t AddRowAttributeFloat( uint64_t, const char *, float ) = 0;
    virtual uint32_t AddSessionAttributeInt64( uint64_t, const char *, int64_t ) = 0;
    virtual uint32_t AddRowAttributeInt64( uint64_t, const char *, int64_t ) = 0;
#endif /* __cplusplus */
};

void cppISteamGameStats_SteamGameStats001_GetNewSession( struct cppISteamGameStats_SteamGameStats001_GetNewSession_params *params )
{
    struct u_ISteamGameStats_SteamGameStats001 *iface = (struct u_ISteamGameStats_SteamGameStats001 *)params->linux_side;
    params->_ret = iface->GetNewSession( params->nAccountType, params->ulAccountID, params->nAppID, params->rtTimeStarted );
}

void cppISteamGameStats_SteamGameStats001_EndSession( struct cppISteamGameStats_SteamGameStats001_EndSession_params *params )
{
    struct u_ISteamGameStats_SteamGameStats001 *iface = (struct u_ISteamGameStats_SteamGameStats001 *)params->linux_side;
    params->_ret = iface->EndSession( params->ulSessionID, params->rtTimeEnded, params->nReasonCode );
}

void cppISteamGameStats_SteamGameStats001_AddSessionAttributeInt( struct cppISteamGameStats_SteamGameStats001_AddSessionAttributeInt_params *params )
{
    struct u_ISteamGameStats_SteamGameStats001 *iface = (struct u_ISteamGameStats_SteamGameStats001 *)params->linux_side;
    params->_ret = iface->AddSessionAttributeInt( params->ulSessionID, params->pstrName, params->nData );
}

void cppISteamGameStats_SteamGameStats001_AddSessionAttributeString( struct cppISteamGameStats_SteamGameStats001_AddSessionAttributeString_params *params )
{
    struct u_ISteamGameStats_SteamGameStats001 *iface = (struct u_ISteamGameStats_SteamGameStats001 *)params->linux_side;
    params->_ret = iface->AddSessionAttributeString( params->ulSessionID, params->pstrName, params->pstrData );
}

void cppISteamGameStats_SteamGameStats001_AddSessionAttributeFloat( struct cppISteamGameStats_SteamGameStats001_AddSessionAttributeFloat_params *params )
{
    struct u_ISteamGameStats_SteamGameStats001 *iface = (struct u_ISteamGameStats_SteamGameStats001 *)params->linux_side;
    params->_ret = iface->AddSessionAttributeFloat( params->ulSessionID, params->pstrName, params->fData );
}

void cppISteamGameStats_SteamGameStats001_AddNewRow( struct cppISteamGameStats_SteamGameStats001_AddNewRow_params *params )
{
    struct u_ISteamGameStats_SteamGameStats001 *iface = (struct u_ISteamGameStats_SteamGameStats001 *)params->linux_side;
    params->_ret = iface->AddNewRow( params->pulRowID, params->ulSessionID, params->pstrTableName );
}

void cppISteamGameStats_SteamGameStats001_CommitRow( struct cppISteamGameStats_SteamGameStats001_CommitRow_params *params )
{
    struct u_ISteamGameStats_SteamGameStats001 *iface = (struct u_ISteamGameStats_SteamGameStats001 *)params->linux_side;
    params->_ret = iface->CommitRow( params->ulRowID );
}

void cppISteamGameStats_SteamGameStats001_CommitOutstandingRows( struct cppISteamGameStats_SteamGameStats001_CommitOutstandingRows_params *params )
{
    struct u_ISteamGameStats_SteamGameStats001 *iface = (struct u_ISteamGameStats_SteamGameStats001 *)params->linux_side;
    params->_ret = iface->CommitOutstandingRows( params->ulSessionID );
}

void cppISteamGameStats_SteamGameStats001_AddRowAttributeInt( struct cppISteamGameStats_SteamGameStats001_AddRowAttributeInt_params *params )
{
    struct u_ISteamGameStats_SteamGameStats001 *iface = (struct u_ISteamGameStats_SteamGameStats001 *)params->linux_side;
    params->_ret = iface->AddRowAttributeInt( params->ulRowID, params->pstrName, params->nData );
}

void cppISteamGameStats_SteamGameStats001_AddRowAtributeString( struct cppISteamGameStats_SteamGameStats001_AddRowAtributeString_params *params )
{
    struct u_ISteamGameStats_SteamGameStats001 *iface = (struct u_ISteamGameStats_SteamGameStats001 *)params->linux_side;
    params->_ret = iface->AddRowAtributeString( params->ulRowID, params->pstrName, params->pstrData );
}

void cppISteamGameStats_SteamGameStats001_AddRowAttributeFloat( struct cppISteamGameStats_SteamGameStats001_AddRowAttributeFloat_params *params )
{
    struct u_ISteamGameStats_SteamGameStats001 *iface = (struct u_ISteamGameStats_SteamGameStats001 *)params->linux_side;
    params->_ret = iface->AddRowAttributeFloat( params->ulRowID, params->pstrName, params->fData );
}

void cppISteamGameStats_SteamGameStats001_AddSessionAttributeInt64( struct cppISteamGameStats_SteamGameStats001_AddSessionAttributeInt64_params *params )
{
    struct u_ISteamGameStats_SteamGameStats001 *iface = (struct u_ISteamGameStats_SteamGameStats001 *)params->linux_side;
    params->_ret = iface->AddSessionAttributeInt64( params->ulSessionID, params->pstrName, params->llData );
}

void cppISteamGameStats_SteamGameStats001_AddRowAttributeInt64( struct cppISteamGameStats_SteamGameStats001_AddRowAttributeInt64_params *params )
{
    struct u_ISteamGameStats_SteamGameStats001 *iface = (struct u_ISteamGameStats_SteamGameStats001 *)params->linux_side;
    params->_ret = iface->AddRowAttributeInt64( params->ulRowID, params->pstrName, params->llData );
}

