#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_102x/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_102x
#include "struct_converters.h"
#include "cppISteamMatchmaking_SteamMatchMaking005.h"
int cppISteamMatchmaking_SteamMatchMaking005_GetFavoriteGameCount(void *linux_side)
{
    return ((ISteamMatchmaking*)linux_side)->GetFavoriteGameCount();
}

bool cppISteamMatchmaking_SteamMatchMaking005_GetFavoriteGame(void *linux_side, int iGame, AppId_t * pnAppID, uint32 * pnIP, uint16 * pnConnPort, uint16 * pnQueryPort, uint32 * punFlags, uint32 * pRTime32LastPlayedOnServer)
{
    return ((ISteamMatchmaking*)linux_side)->GetFavoriteGame((int)iGame, (AppId_t *)pnAppID, (uint32 *)pnIP, (uint16 *)pnConnPort, (uint16 *)pnQueryPort, (uint32 *)punFlags, (uint32 *)pRTime32LastPlayedOnServer);
}

int cppISteamMatchmaking_SteamMatchMaking005_AddFavoriteGame(void *linux_side, AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)
{
    return ((ISteamMatchmaking*)linux_side)->AddFavoriteGame((AppId_t)nAppID, (uint32)nIP, (uint16)nConnPort, (uint16)nQueryPort, (uint32)unFlags, (uint32)rTime32LastPlayedOnServer);
}

bool cppISteamMatchmaking_SteamMatchMaking005_RemoveFavoriteGame(void *linux_side, AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)
{
    return ((ISteamMatchmaking*)linux_side)->RemoveFavoriteGame((AppId_t)nAppID, (uint32)nIP, (uint16)nConnPort, (uint16)nQueryPort, (uint32)unFlags);
}

void cppISteamMatchmaking_SteamMatchMaking005_RequestLobbyList(void *linux_side)
{
    ((ISteamMatchmaking*)linux_side)->RequestLobbyList();
}

void cppISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListFilter(void *linux_side, const char * pchKeyToMatch, const char * pchValueToMatch)
{
    ((ISteamMatchmaking*)linux_side)->AddRequestLobbyListFilter((const char *)pchKeyToMatch, (const char *)pchValueToMatch);
}

void cppISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListNumericalFilter(void *linux_side, const char * pchKeyToMatch, int nValueToMatch, int nComparisonType)
{
    ((ISteamMatchmaking*)linux_side)->AddRequestLobbyListNumericalFilter((const char *)pchKeyToMatch, (int)nValueToMatch, (int)nComparisonType);
}

void cppISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListSlotsAvailableFilter(void *linux_side)
{
    ((ISteamMatchmaking*)linux_side)->AddRequestLobbyListSlotsAvailableFilter();
}

void cppISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListNearValueFilter(void *linux_side, const char * pchKeyToMatch, int nValueToBeCloseTo)
{
    ((ISteamMatchmaking*)linux_side)->AddRequestLobbyListNearValueFilter((const char *)pchKeyToMatch, (int)nValueToBeCloseTo);
}

CSteamID cppISteamMatchmaking_SteamMatchMaking005_GetLobbyByIndex(void *linux_side, int iLobby)
{
    return ((ISteamMatchmaking*)linux_side)->GetLobbyByIndex((int)iLobby);
}

void cppISteamMatchmaking_SteamMatchMaking005_CreateLobby(void *linux_side, ELobbyType eLobbyType)
{
    ((ISteamMatchmaking*)linux_side)->CreateLobby((ELobbyType)eLobbyType);
}

void cppISteamMatchmaking_SteamMatchMaking005_JoinLobby(void *linux_side, CSteamID steamIDLobby)
{
    ((ISteamMatchmaking*)linux_side)->JoinLobby((CSteamID)steamIDLobby);
}

void cppISteamMatchmaking_SteamMatchMaking005_LeaveLobby(void *linux_side, CSteamID steamIDLobby)
{
    ((ISteamMatchmaking*)linux_side)->LeaveLobby((CSteamID)steamIDLobby);
}

bool cppISteamMatchmaking_SteamMatchMaking005_InviteUserToLobby(void *linux_side, CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
    return ((ISteamMatchmaking*)linux_side)->InviteUserToLobby((CSteamID)steamIDLobby, (CSteamID)steamIDInvitee);
}

int cppISteamMatchmaking_SteamMatchMaking005_GetNumLobbyMembers(void *linux_side, CSteamID steamIDLobby)
{
    return ((ISteamMatchmaking*)linux_side)->GetNumLobbyMembers((CSteamID)steamIDLobby);
}

CSteamID cppISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberByIndex(void *linux_side, CSteamID steamIDLobby, int iMember)
{
    return ((ISteamMatchmaking*)linux_side)->GetLobbyMemberByIndex((CSteamID)steamIDLobby, (int)iMember);
}

const char * cppISteamMatchmaking_SteamMatchMaking005_GetLobbyData(void *linux_side, CSteamID steamIDLobby, const char * pchKey)
{
    return ((ISteamMatchmaking*)linux_side)->GetLobbyData((CSteamID)steamIDLobby, (const char *)pchKey);
}

bool cppISteamMatchmaking_SteamMatchMaking005_SetLobbyData(void *linux_side, CSteamID steamIDLobby, const char * pchKey, const char * pchValue)
{
    return ((ISteamMatchmaking*)linux_side)->SetLobbyData((CSteamID)steamIDLobby, (const char *)pchKey, (const char *)pchValue);
}

const char * cppISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberData(void *linux_side, CSteamID steamIDLobby, CSteamID steamIDUser, const char * pchKey)
{
    return ((ISteamMatchmaking*)linux_side)->GetLobbyMemberData((CSteamID)steamIDLobby, (CSteamID)steamIDUser, (const char *)pchKey);
}

void cppISteamMatchmaking_SteamMatchMaking005_SetLobbyMemberData(void *linux_side, CSteamID steamIDLobby, const char * pchKey, const char * pchValue)
{
    ((ISteamMatchmaking*)linux_side)->SetLobbyMemberData((CSteamID)steamIDLobby, (const char *)pchKey, (const char *)pchValue);
}

bool cppISteamMatchmaking_SteamMatchMaking005_SendLobbyChatMsg(void *linux_side, CSteamID steamIDLobby, const void * pvMsgBody, int cubMsgBody)
{
    return ((ISteamMatchmaking*)linux_side)->SendLobbyChatMsg((CSteamID)steamIDLobby, (const void *)pvMsgBody, (int)cubMsgBody);
}

int cppISteamMatchmaking_SteamMatchMaking005_GetLobbyChatEntry(void *linux_side, CSteamID steamIDLobby, int iChatID, CSteamID * pSteamIDUser, void * pvData, int cubData, EChatEntryType * peChatEntryType)
{
    return ((ISteamMatchmaking*)linux_side)->GetLobbyChatEntry((CSteamID)steamIDLobby, (int)iChatID, (CSteamID *)pSteamIDUser, (void *)pvData, (int)cubData, (EChatEntryType *)peChatEntryType);
}

bool cppISteamMatchmaking_SteamMatchMaking005_RequestLobbyData(void *linux_side, CSteamID steamIDLobby)
{
    return ((ISteamMatchmaking*)linux_side)->RequestLobbyData((CSteamID)steamIDLobby);
}

void cppISteamMatchmaking_SteamMatchMaking005_SetLobbyGameServer(void *linux_side, CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer)
{
    ((ISteamMatchmaking*)linux_side)->SetLobbyGameServer((CSteamID)steamIDLobby, (uint32)unGameServerIP, (uint16)unGameServerPort, (CSteamID)steamIDGameServer);
}

bool cppISteamMatchmaking_SteamMatchMaking005_GetLobbyGameServer(void *linux_side, CSteamID steamIDLobby, uint32 * punGameServerIP, uint16 * punGameServerPort, CSteamID * psteamIDGameServer)
{
    return ((ISteamMatchmaking*)linux_side)->GetLobbyGameServer((CSteamID)steamIDLobby, (uint32 *)punGameServerIP, (uint16 *)punGameServerPort, (CSteamID *)psteamIDGameServer);
}

bool cppISteamMatchmaking_SteamMatchMaking005_SetLobbyMemberLimit(void *linux_side, CSteamID steamIDLobby, int cMaxMembers)
{
    return ((ISteamMatchmaking*)linux_side)->SetLobbyMemberLimit((CSteamID)steamIDLobby, (int)cMaxMembers);
}

int cppISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberLimit(void *linux_side, CSteamID steamIDLobby)
{
    return ((ISteamMatchmaking*)linux_side)->GetLobbyMemberLimit((CSteamID)steamIDLobby);
}

bool cppISteamMatchmaking_SteamMatchMaking005_RequestFriendsLobbies(void *linux_side)
{
    return ((ISteamMatchmaking*)linux_side)->RequestFriendsLobbies();
}

bool cppISteamMatchmaking_SteamMatchMaking005_SetLobbyType(void *linux_side, CSteamID steamIDLobby, ELobbyType eLobbyType)
{
    return ((ISteamMatchmaking*)linux_side)->SetLobbyType((CSteamID)steamIDLobby, (ELobbyType)eLobbyType);
}

CSteamID cppISteamMatchmaking_SteamMatchMaking005_GetLobbyOwner(void *linux_side, CSteamID steamIDLobby)
{
    return ((ISteamMatchmaking*)linux_side)->GetLobbyOwner((CSteamID)steamIDLobby);
}

float cppISteamMatchmaking_SteamMatchMaking005_GetLobbyDistance(void *linux_side, CSteamID steamIDLobby)
{
    return ((ISteamMatchmaking*)linux_side)->GetLobbyDistance((CSteamID)steamIDLobby);
}

#ifdef __cplusplus
}
#endif
