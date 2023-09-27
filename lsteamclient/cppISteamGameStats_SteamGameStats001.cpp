#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_117/steam_api.h"
#include "steamworks_sdk_117/isteamgamestats.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_117
#include "struct_converters.h"
#include "cppISteamGameStats_SteamGameStats001.h"
void cppISteamGameStats_SteamGameStats001_GetNewSession( struct cppISteamGameStats_SteamGameStats001_GetNewSession_params *params )
{
    params->_ret = ((ISteamGameStats*)params->linux_side)->GetNewSession( (int8)params->nAccountType, (uint64)params->ulAccountID, (int32)params->nAppID, (RTime32)params->rtTimeStarted );
}

void cppISteamGameStats_SteamGameStats001_EndSession( struct cppISteamGameStats_SteamGameStats001_EndSession_params *params )
{
    params->_ret = ((ISteamGameStats*)params->linux_side)->EndSession( (uint64)params->ulSessionID, (RTime32)params->rtTimeEnded, (int)params->nReasonCode );
}

void cppISteamGameStats_SteamGameStats001_AddSessionAttributeInt( struct cppISteamGameStats_SteamGameStats001_AddSessionAttributeInt_params *params )
{
    params->_ret = ((ISteamGameStats*)params->linux_side)->AddSessionAttributeInt( (uint64)params->ulSessionID, (const char *)params->pstrName, (int32)params->nData );
}

void cppISteamGameStats_SteamGameStats001_AddSessionAttributeString( struct cppISteamGameStats_SteamGameStats001_AddSessionAttributeString_params *params )
{
    params->_ret = ((ISteamGameStats*)params->linux_side)->AddSessionAttributeString( (uint64)params->ulSessionID, (const char *)params->pstrName, (const char *)params->pstrData );
}

void cppISteamGameStats_SteamGameStats001_AddSessionAttributeFloat( struct cppISteamGameStats_SteamGameStats001_AddSessionAttributeFloat_params *params )
{
    params->_ret = ((ISteamGameStats*)params->linux_side)->AddSessionAttributeFloat( (uint64)params->ulSessionID, (const char *)params->pstrName, (float)params->fData );
}

void cppISteamGameStats_SteamGameStats001_AddNewRow( struct cppISteamGameStats_SteamGameStats001_AddNewRow_params *params )
{
    params->_ret = ((ISteamGameStats*)params->linux_side)->AddNewRow( (uint64 *)params->pulRowID, (uint64)params->ulSessionID, (const char *)params->pstrTableName );
}

void cppISteamGameStats_SteamGameStats001_CommitRow( struct cppISteamGameStats_SteamGameStats001_CommitRow_params *params )
{
    params->_ret = ((ISteamGameStats*)params->linux_side)->CommitRow( (uint64)params->ulRowID );
}

void cppISteamGameStats_SteamGameStats001_CommitOutstandingRows( struct cppISteamGameStats_SteamGameStats001_CommitOutstandingRows_params *params )
{
    params->_ret = ((ISteamGameStats*)params->linux_side)->CommitOutstandingRows( (uint64)params->ulSessionID );
}

void cppISteamGameStats_SteamGameStats001_AddRowAttributeInt( struct cppISteamGameStats_SteamGameStats001_AddRowAttributeInt_params *params )
{
    params->_ret = ((ISteamGameStats*)params->linux_side)->AddRowAttributeInt( (uint64)params->ulRowID, (const char *)params->pstrName, (int32)params->nData );
}

void cppISteamGameStats_SteamGameStats001_AddRowAtributeString( struct cppISteamGameStats_SteamGameStats001_AddRowAtributeString_params *params )
{
    params->_ret = ((ISteamGameStats*)params->linux_side)->AddRowAtributeString( (uint64)params->ulRowID, (const char *)params->pstrName, (const char *)params->pstrData );
}

void cppISteamGameStats_SteamGameStats001_AddRowAttributeFloat( struct cppISteamGameStats_SteamGameStats001_AddRowAttributeFloat_params *params )
{
    params->_ret = ((ISteamGameStats*)params->linux_side)->AddRowAttributeFloat( (uint64)params->ulRowID, (const char *)params->pstrName, (float)params->fData );
}

void cppISteamGameStats_SteamGameStats001_AddSessionAttributeInt64( struct cppISteamGameStats_SteamGameStats001_AddSessionAttributeInt64_params *params )
{
    params->_ret = ((ISteamGameStats*)params->linux_side)->AddSessionAttributeInt64( (uint64)params->ulSessionID, (const char *)params->pstrName, (int64)params->llData );
}

void cppISteamGameStats_SteamGameStats001_AddRowAttributeInt64( struct cppISteamGameStats_SteamGameStats001_AddRowAttributeInt64_params *params )
{
    params->_ret = ((ISteamGameStats*)params->linux_side)->AddRowAttributeInt64( (uint64)params->ulRowID, (const char *)params->pstrName, (int64)params->llData );
}

#ifdef __cplusplus
}
#endif
