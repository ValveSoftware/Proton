/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamGameStats_SteamGameStats001_GetNewSession( void *args )
{
    struct ISteamGameStats_SteamGameStats001_GetNewSession_params *params = (struct ISteamGameStats_SteamGameStats001_GetNewSession_params *)args;
    struct u_ISteamGameStats_SteamGameStats001 *iface = (struct u_ISteamGameStats_SteamGameStats001 *)params->linux_side;
    params->_ret = iface->GetNewSession( params->nAccountType, params->ulAccountID, params->nAppID, params->rtTimeStarted );
    return 0;
}

NTSTATUS ISteamGameStats_SteamGameStats001_EndSession( void *args )
{
    struct ISteamGameStats_SteamGameStats001_EndSession_params *params = (struct ISteamGameStats_SteamGameStats001_EndSession_params *)args;
    struct u_ISteamGameStats_SteamGameStats001 *iface = (struct u_ISteamGameStats_SteamGameStats001 *)params->linux_side;
    params->_ret = iface->EndSession( params->ulSessionID, params->rtTimeEnded, params->nReasonCode );
    return 0;
}

NTSTATUS ISteamGameStats_SteamGameStats001_AddSessionAttributeInt( void *args )
{
    struct ISteamGameStats_SteamGameStats001_AddSessionAttributeInt_params *params = (struct ISteamGameStats_SteamGameStats001_AddSessionAttributeInt_params *)args;
    struct u_ISteamGameStats_SteamGameStats001 *iface = (struct u_ISteamGameStats_SteamGameStats001 *)params->linux_side;
    params->_ret = iface->AddSessionAttributeInt( params->ulSessionID, params->pstrName, params->nData );
    return 0;
}

NTSTATUS ISteamGameStats_SteamGameStats001_AddSessionAttributeString( void *args )
{
    struct ISteamGameStats_SteamGameStats001_AddSessionAttributeString_params *params = (struct ISteamGameStats_SteamGameStats001_AddSessionAttributeString_params *)args;
    struct u_ISteamGameStats_SteamGameStats001 *iface = (struct u_ISteamGameStats_SteamGameStats001 *)params->linux_side;
    params->_ret = iface->AddSessionAttributeString( params->ulSessionID, params->pstrName, params->pstrData );
    return 0;
}

NTSTATUS ISteamGameStats_SteamGameStats001_AddSessionAttributeFloat( void *args )
{
    struct ISteamGameStats_SteamGameStats001_AddSessionAttributeFloat_params *params = (struct ISteamGameStats_SteamGameStats001_AddSessionAttributeFloat_params *)args;
    struct u_ISteamGameStats_SteamGameStats001 *iface = (struct u_ISteamGameStats_SteamGameStats001 *)params->linux_side;
    params->_ret = iface->AddSessionAttributeFloat( params->ulSessionID, params->pstrName, params->fData );
    return 0;
}

NTSTATUS ISteamGameStats_SteamGameStats001_AddNewRow( void *args )
{
    struct ISteamGameStats_SteamGameStats001_AddNewRow_params *params = (struct ISteamGameStats_SteamGameStats001_AddNewRow_params *)args;
    struct u_ISteamGameStats_SteamGameStats001 *iface = (struct u_ISteamGameStats_SteamGameStats001 *)params->linux_side;
    params->_ret = iface->AddNewRow( params->pulRowID, params->ulSessionID, params->pstrTableName );
    return 0;
}

NTSTATUS ISteamGameStats_SteamGameStats001_CommitRow( void *args )
{
    struct ISteamGameStats_SteamGameStats001_CommitRow_params *params = (struct ISteamGameStats_SteamGameStats001_CommitRow_params *)args;
    struct u_ISteamGameStats_SteamGameStats001 *iface = (struct u_ISteamGameStats_SteamGameStats001 *)params->linux_side;
    params->_ret = iface->CommitRow( params->ulRowID );
    return 0;
}

NTSTATUS ISteamGameStats_SteamGameStats001_CommitOutstandingRows( void *args )
{
    struct ISteamGameStats_SteamGameStats001_CommitOutstandingRows_params *params = (struct ISteamGameStats_SteamGameStats001_CommitOutstandingRows_params *)args;
    struct u_ISteamGameStats_SteamGameStats001 *iface = (struct u_ISteamGameStats_SteamGameStats001 *)params->linux_side;
    params->_ret = iface->CommitOutstandingRows( params->ulSessionID );
    return 0;
}

NTSTATUS ISteamGameStats_SteamGameStats001_AddRowAttributeInt( void *args )
{
    struct ISteamGameStats_SteamGameStats001_AddRowAttributeInt_params *params = (struct ISteamGameStats_SteamGameStats001_AddRowAttributeInt_params *)args;
    struct u_ISteamGameStats_SteamGameStats001 *iface = (struct u_ISteamGameStats_SteamGameStats001 *)params->linux_side;
    params->_ret = iface->AddRowAttributeInt( params->ulRowID, params->pstrName, params->nData );
    return 0;
}

NTSTATUS ISteamGameStats_SteamGameStats001_AddRowAtributeString( void *args )
{
    struct ISteamGameStats_SteamGameStats001_AddRowAtributeString_params *params = (struct ISteamGameStats_SteamGameStats001_AddRowAtributeString_params *)args;
    struct u_ISteamGameStats_SteamGameStats001 *iface = (struct u_ISteamGameStats_SteamGameStats001 *)params->linux_side;
    params->_ret = iface->AddRowAtributeString( params->ulRowID, params->pstrName, params->pstrData );
    return 0;
}

NTSTATUS ISteamGameStats_SteamGameStats001_AddRowAttributeFloat( void *args )
{
    struct ISteamGameStats_SteamGameStats001_AddRowAttributeFloat_params *params = (struct ISteamGameStats_SteamGameStats001_AddRowAttributeFloat_params *)args;
    struct u_ISteamGameStats_SteamGameStats001 *iface = (struct u_ISteamGameStats_SteamGameStats001 *)params->linux_side;
    params->_ret = iface->AddRowAttributeFloat( params->ulRowID, params->pstrName, params->fData );
    return 0;
}

NTSTATUS ISteamGameStats_SteamGameStats001_AddSessionAttributeInt64( void *args )
{
    struct ISteamGameStats_SteamGameStats001_AddSessionAttributeInt64_params *params = (struct ISteamGameStats_SteamGameStats001_AddSessionAttributeInt64_params *)args;
    struct u_ISteamGameStats_SteamGameStats001 *iface = (struct u_ISteamGameStats_SteamGameStats001 *)params->linux_side;
    params->_ret = iface->AddSessionAttributeInt64( params->ulSessionID, params->pstrName, params->llData );
    return 0;
}

NTSTATUS ISteamGameStats_SteamGameStats001_AddRowAttributeInt64( void *args )
{
    struct ISteamGameStats_SteamGameStats001_AddRowAttributeInt64_params *params = (struct ISteamGameStats_SteamGameStats001_AddRowAttributeInt64_params *)args;
    struct u_ISteamGameStats_SteamGameStats001 *iface = (struct u_ISteamGameStats_SteamGameStats001 *)params->linux_side;
    params->_ret = iface->AddRowAttributeInt64( params->ulRowID, params->pstrName, params->llData );
    return 0;
}

