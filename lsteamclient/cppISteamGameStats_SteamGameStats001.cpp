/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamGameStats_SteamGameStats001.h"

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

