#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_116/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_116
#include "struct_converters.h"
#include "cppISteamMatchmaking_SteamMatchMaking008.h"
int cppISteamMatchmaking_SteamMatchMaking008_GetFavoriteGameCount(void *linux_side)
{
    return ((ISteamMatchmaking*)linux_side)->GetFavoriteGameCount();
}

bool cppISteamMatchmaking_SteamMatchMaking008_GetFavoriteGame(void *linux_side, int iGame, AppId_t * pnAppID, uint32 * pnIP, uint16 * pnConnPort, uint16 * pnQueryPort, uint32 * punFlags, uint32 * pRTime32LastPlayedOnServer)
{
    return ((ISteamMatchmaking*)linux_side)->GetFavoriteGame((int)iGame, (AppId_t *)pnAppID, (uint32 *)pnIP, (uint16 *)pnConnPort, (uint16 *)pnQueryPort, (uint32 *)punFlags, (uint32 *)pRTime32LastPlayedOnServer);
}

int cppISteamMatchmaking_SteamMatchMaking008_AddFavoriteGame(void *linux_side, AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)
{
    return ((ISteamMatchmaking*)linux_side)->AddFavoriteGame((AppId_t)nAppID, (uint32)nIP, (uint16)nConnPort, (uint16)nQueryPort, (uint32)unFlags, (uint32)rTime32LastPlayedOnServer);
}

bool cppISteamMatchmaking_SteamMatchMaking008_RemoveFavoriteGame(void *linux_side, AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)
{
    return ((ISteamMatchmaking*)linux_side)->RemoveFavoriteGame((AppId_t)nAppID, (uint32)nIP, (uint16)nConnPort, (uint16)nQueryPort, (uint32)unFlags);
}

SteamAPICall_t cppISteamMatchmaking_SteamMatchMaking008_RequestLobbyList(void *linux_side)
{
    return ((ISteamMatchmaking*)linux_side)->RequestLobbyList();
}

void cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListStringFilter(void *linux_side, const char * pchKeyToMatch, const char * pchValueToMatch, ELobbyComparison eComparisonType)
{
    ((ISteamMatchmaking*)linux_side)->AddRequestLobbyListStringFilter((const char *)pchKeyToMatch, (const char *)pchValueToMatch, (ELobbyComparison)eComparisonType);
}

void cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListNumericalFilter(void *linux_side, const char * pchKeyToMatch, int nValueToMatch, ELobbyComparison eComparisonType)
{
    ((ISteamMatchmaking*)linux_side)->AddRequestLobbyListNumericalFilter((const char *)pchKeyToMatch, (int)nValueToMatch, (ELobbyComparison)eComparisonType);
}

void cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListNearValueFilter(void *linux_side, const char * pchKeyToMatch, int nValueToBeCloseTo)
{
    ((ISteamMatchmaking*)linux_side)->AddRequestLobbyListNearValueFilter((const char *)pchKeyToMatch, (int)nValueToBeCloseTo);
}

void cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListFilterSlotsAvailable(void *linux_side, int nSlotsAvailable)
{
    ((ISteamMatchmaking*)linux_side)->AddRequestLobbyListFilterSlotsAvailable((int)nSlotsAvailable);
}

void cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListDistanceFilter(void *linux_side, ELobbyDistanceFilter eLobbyDistanceFilter)
{
    ((ISteamMatchmaking*)linux_side)->AddRequestLobbyListDistanceFilter((ELobbyDistanceFilter)eLobbyDistanceFilter);
}

void cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListResultCountFilter(void *linux_side, int cMaxResults)
{
    ((ISteamMatchmaking*)linux_side)->AddRequestLobbyListResultCountFilter((int)cMaxResults);
}

CSteamID cppISteamMatchmaking_SteamMatchMaking008_GetLobbyByIndex(void *linux_side, int iLobby)
{
    return ((ISteamMatchmaking*)linux_side)->GetLobbyByIndex((int)iLobby);
}

SteamAPICall_t cppISteamMatchmaking_SteamMatchMaking008_CreateLobby(void *linux_side, ELobbyType eLobbyType, int cMaxMembers)
{
    return ((ISteamMatchmaking*)linux_side)->CreateLobby((ELobbyType)eLobbyType, (int)cMaxMembers);
}

SteamAPICall_t cppISteamMatchmaking_SteamMatchMaking008_JoinLobby(void *linux_side, CSteamID steamIDLobby)
{
    return ((ISteamMatchmaking*)linux_side)->JoinLobby((CSteamID)steamIDLobby);
}

void cppISteamMatchmaking_SteamMatchMaking008_LeaveLobby(void *linux_side, CSteamID steamIDLobby)
{
    ((ISteamMatchmaking*)linux_side)->LeaveLobby((CSteamID)steamIDLobby);
}

bool cppISteamMatchmaking_SteamMatchMaking008_InviteUserToLobby(void *linux_side, CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
    return ((ISteamMatchmaking*)linux_side)->InviteUserToLobby((CSteamID)steamIDLobby, (CSteamID)steamIDInvitee);
}

int cppISteamMatchmaking_SteamMatchMaking008_GetNumLobbyMembers(void *linux_side, CSteamID steamIDLobby)
{
    return ((ISteamMatchmaking*)linux_side)->GetNumLobbyMembers((CSteamID)steamIDLobby);
}

CSteamID cppISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberByIndex(void *linux_side, CSteamID steamIDLobby, int iMember)
{
    return ((ISteamMatchmaking*)linux_side)->GetLobbyMemberByIndex((CSteamID)steamIDLobby, (int)iMember);
}

const char * cppISteamMatchmaking_SteamMatchMaking008_GetLobbyData(void *linux_side, CSteamID steamIDLobby, const char * pchKey)
{
    return ((ISteamMatchmaking*)linux_side)->GetLobbyData((CSteamID)steamIDLobby, (const char *)pchKey);
}

bool cppISteamMatchmaking_SteamMatchMaking008_SetLobbyData(void *linux_side, CSteamID steamIDLobby, const char * pchKey, const char * pchValue)
{
    return ((ISteamMatchmaking*)linux_side)->SetLobbyData((CSteamID)steamIDLobby, (const char *)pchKey, (const char *)pchValue);
}

int cppISteamMatchmaking_SteamMatchMaking008_GetLobbyDataCount(void *linux_side, CSteamID steamIDLobby)
{
    return ((ISteamMatchmaking*)linux_side)->GetLobbyDataCount((CSteamID)steamIDLobby);
}

bool cppISteamMatchmaking_SteamMatchMaking008_GetLobbyDataByIndex(void *linux_side, CSteamID steamIDLobby, int iLobbyData, char * pchKey, int cchKeyBufferSize, char * pchValue, int cchValueBufferSize)
{
    return ((ISteamMatchmaking*)linux_side)->GetLobbyDataByIndex((CSteamID)steamIDLobby, (int)iLobbyData, (char *)pchKey, (int)cchKeyBufferSize, (char *)pchValue, (int)cchValueBufferSize);
}

bool cppISteamMatchmaking_SteamMatchMaking008_DeleteLobbyData(void *linux_side, CSteamID steamIDLobby, const char * pchKey)
{
    return ((ISteamMatchmaking*)linux_side)->DeleteLobbyData((CSteamID)steamIDLobby, (const char *)pchKey);
}

const char * cppISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberData(void *linux_side, CSteamID steamIDLobby, CSteamID steamIDUser, const char * pchKey)
{
    return ((ISteamMatchmaking*)linux_side)->GetLobbyMemberData((CSteamID)steamIDLobby, (CSteamID)steamIDUser, (const char *)pchKey);
}

void cppISteamMatchmaking_SteamMatchMaking008_SetLobbyMemberData(void *linux_side, CSteamID steamIDLobby, const char * pchKey, const char * pchValue)
{
    ((ISteamMatchmaking*)linux_side)->SetLobbyMemberData((CSteamID)steamIDLobby, (const char *)pchKey, (const char *)pchValue);
}

bool cppISteamMatchmaking_SteamMatchMaking008_SendLobbyChatMsg(void *linux_side, CSteamID steamIDLobby, const void * pvMsgBody, int cubMsgBody)
{
    return ((ISteamMatchmaking*)linux_side)->SendLobbyChatMsg((CSteamID)steamIDLobby, (const void *)pvMsgBody, (int)cubMsgBody);
}

int cppISteamMatchmaking_SteamMatchMaking008_GetLobbyChatEntry(void *linux_side, CSteamID steamIDLobby, int iChatID, CSteamID * pSteamIDUser, void * pvData, int cubData, EChatEntryType * peChatEntryType)
{
    return ((ISteamMatchmaking*)linux_side)->GetLobbyChatEntry((CSteamID)steamIDLobby, (int)iChatID, (CSteamID *)pSteamIDUser, (void *)pvData, (int)cubData, (EChatEntryType *)peChatEntryType);
}

bool cppISteamMatchmaking_SteamMatchMaking008_RequestLobbyData(void *linux_side, CSteamID steamIDLobby)
{
    return ((ISteamMatchmaking*)linux_side)->RequestLobbyData((CSteamID)steamIDLobby);
}

void cppISteamMatchmaking_SteamMatchMaking008_SetLobbyGameServer(void *linux_side, CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer)
{
    ((ISteamMatchmaking*)linux_side)->SetLobbyGameServer((CSteamID)steamIDLobby, (uint32)unGameServerIP, (uint16)unGameServerPort, (CSteamID)steamIDGameServer);
}

bool cppISteamMatchmaking_SteamMatchMaking008_GetLobbyGameServer(void *linux_side, CSteamID steamIDLobby, uint32 * punGameServerIP, uint16 * punGameServerPort, CSteamID * psteamIDGameServer)
{
    return ((ISteamMatchmaking*)linux_side)->GetLobbyGameServer((CSteamID)steamIDLobby, (uint32 *)punGameServerIP, (uint16 *)punGameServerPort, (CSteamID *)psteamIDGameServer);
}

bool cppISteamMatchmaking_SteamMatchMaking008_SetLobbyMemberLimit(void *linux_side, CSteamID steamIDLobby, int cMaxMembers)
{
    return ((ISteamMatchmaking*)linux_side)->SetLobbyMemberLimit((CSteamID)steamIDLobby, (int)cMaxMembers);
}

int cppISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberLimit(void *linux_side, CSteamID steamIDLobby)
{
    return ((ISteamMatchmaking*)linux_side)->GetLobbyMemberLimit((CSteamID)steamIDLobby);
}

bool cppISteamMatchmaking_SteamMatchMaking008_SetLobbyType(void *linux_side, CSteamID steamIDLobby, ELobbyType eLobbyType)
{
    return ((ISteamMatchmaking*)linux_side)->SetLobbyType((CSteamID)steamIDLobby, (ELobbyType)eLobbyType);
}

bool cppISteamMatchmaking_SteamMatchMaking008_SetLobbyJoinable(void *linux_side, CSteamID steamIDLobby, bool bLobbyJoinable)
{
    return ((ISteamMatchmaking*)linux_side)->SetLobbyJoinable((CSteamID)steamIDLobby, (bool)bLobbyJoinable);
}

CSteamID cppISteamMatchmaking_SteamMatchMaking008_GetLobbyOwner(void *linux_side, CSteamID steamIDLobby)
{
    return ((ISteamMatchmaking*)linux_side)->GetLobbyOwner((CSteamID)steamIDLobby);
}

bool cppISteamMatchmaking_SteamMatchMaking008_SetLobbyOwner(void *linux_side, CSteamID steamIDLobby, CSteamID steamIDNewOwner)
{
    return ((ISteamMatchmaking*)linux_side)->SetLobbyOwner((CSteamID)steamIDLobby, (CSteamID)steamIDNewOwner);
}

#ifdef __cplusplus
}
#endif
