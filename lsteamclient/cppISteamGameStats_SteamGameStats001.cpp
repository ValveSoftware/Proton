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
SteamAPICall_t cppISteamGameStats_SteamGameStats001_GetNewSession(void *linux_side, int8 nAccountType, uint64 ulAccountID, int32 nAppID, RTime32 rtTimeStarted)
{
    return ((ISteamGameStats*)linux_side)->GetNewSession((int8)nAccountType, (uint64)ulAccountID, (int32)nAppID, (RTime32)rtTimeStarted);
}

SteamAPICall_t cppISteamGameStats_SteamGameStats001_EndSession(void *linux_side, uint64 ulSessionID, RTime32 rtTimeEnded, int nReasonCode)
{
    return ((ISteamGameStats*)linux_side)->EndSession((uint64)ulSessionID, (RTime32)rtTimeEnded, (int)nReasonCode);
}

EResult cppISteamGameStats_SteamGameStats001_AddSessionAttributeInt(void *linux_side, uint64 ulSessionID, const char * pstrName, int32 nData)
{
    return ((ISteamGameStats*)linux_side)->AddSessionAttributeInt((uint64)ulSessionID, (const char *)pstrName, (int32)nData);
}

EResult cppISteamGameStats_SteamGameStats001_AddSessionAttributeString(void *linux_side, uint64 ulSessionID, const char * pstrName, const char * pstrData)
{
    return ((ISteamGameStats*)linux_side)->AddSessionAttributeString((uint64)ulSessionID, (const char *)pstrName, (const char *)pstrData);
}

EResult cppISteamGameStats_SteamGameStats001_AddSessionAttributeFloat(void *linux_side, uint64 ulSessionID, const char * pstrName, float fData)
{
    return ((ISteamGameStats*)linux_side)->AddSessionAttributeFloat((uint64)ulSessionID, (const char *)pstrName, (float)fData);
}

EResult cppISteamGameStats_SteamGameStats001_AddNewRow(void *linux_side, uint64 * pulRowID, uint64 ulSessionID, const char * pstrTableName)
{
    return ((ISteamGameStats*)linux_side)->AddNewRow((uint64 *)pulRowID, (uint64)ulSessionID, (const char *)pstrTableName);
}

EResult cppISteamGameStats_SteamGameStats001_CommitRow(void *linux_side, uint64 ulRowID)
{
    return ((ISteamGameStats*)linux_side)->CommitRow((uint64)ulRowID);
}

EResult cppISteamGameStats_SteamGameStats001_CommitOutstandingRows(void *linux_side, uint64 ulSessionID)
{
    return ((ISteamGameStats*)linux_side)->CommitOutstandingRows((uint64)ulSessionID);
}

EResult cppISteamGameStats_SteamGameStats001_AddRowAttributeInt(void *linux_side, uint64 ulRowID, const char * pstrName, int32 nData)
{
    return ((ISteamGameStats*)linux_side)->AddRowAttributeInt((uint64)ulRowID, (const char *)pstrName, (int32)nData);
}

EResult cppISteamGameStats_SteamGameStats001_AddRowAtributeString(void *linux_side, uint64 ulRowID, const char * pstrName, const char * pstrData)
{
    return ((ISteamGameStats*)linux_side)->AddRowAtributeString((uint64)ulRowID, (const char *)pstrName, (const char *)pstrData);
}

EResult cppISteamGameStats_SteamGameStats001_AddRowAttributeFloat(void *linux_side, uint64 ulRowID, const char * pstrName, float fData)
{
    return ((ISteamGameStats*)linux_side)->AddRowAttributeFloat((uint64)ulRowID, (const char *)pstrName, (float)fData);
}

EResult cppISteamGameStats_SteamGameStats001_AddSessionAttributeInt64(void *linux_side, uint64 ulSessionID, const char * pstrName, int64 llData)
{
    return ((ISteamGameStats*)linux_side)->AddSessionAttributeInt64((uint64)ulSessionID, (const char *)pstrName, (int64)llData);
}

EResult cppISteamGameStats_SteamGameStats001_AddRowAttributeInt64(void *linux_side, uint64 ulRowID, const char * pstrName, int64 llData)
{
    return ((ISteamGameStats*)linux_side)->AddRowAttributeInt64((uint64)ulRowID, (const char *)pstrName, (int64)llData);
}

#ifdef __cplusplus
}
#endif
