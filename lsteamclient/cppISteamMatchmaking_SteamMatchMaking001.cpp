#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_099y/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_099y
#include "struct_converters.h"
#include "cppISteamMatchmaking_SteamMatchMaking001.h"
int cppISteamMatchmaking_SteamMatchMaking001_GetFavoriteGameCount(void *linux_side)
{
    return ((ISteamMatchmaking*)linux_side)->GetFavoriteGameCount();
}

bool cppISteamMatchmaking_SteamMatchMaking001_GetFavoriteGame(void *linux_side, int iGame, uint32 * pnAppID, uint32 * pnIP, uint16 * pnConnPort, uint32 * punFlags, uint32 * pRTime32LastPlayedOnServer)
{
    return ((ISteamMatchmaking*)linux_side)->GetFavoriteGame((int)iGame, (uint32 *)pnAppID, (uint32 *)pnIP, (uint16 *)pnConnPort, (uint32 *)punFlags, (uint32 *)pRTime32LastPlayedOnServer);
}

int cppISteamMatchmaking_SteamMatchMaking001_AddFavoriteGame(void *linux_side, uint32 nAppID, uint32 nIP, uint16 nConnPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)
{
    return ((ISteamMatchmaking*)linux_side)->AddFavoriteGame((uint32)nAppID, (uint32)nIP, (uint16)nConnPort, (uint32)unFlags, (uint32)rTime32LastPlayedOnServer);
}

bool cppISteamMatchmaking_SteamMatchMaking001_RemoveFavoriteGame(void *linux_side, uint32 nAppID, uint32 nIP, uint16 nConnPort, uint32 unFlags)
{
    return ((ISteamMatchmaking*)linux_side)->RemoveFavoriteGame((uint32)nAppID, (uint32)nIP, (uint16)nConnPort, (uint32)unFlags);
}

bool cppISteamMatchmaking_SteamMatchMaking001_GetFavoriteGame2(void *linux_side, int iGame, uint32 * pnAppID, uint32 * pnIP, uint16 * pnConnPort, uint16 * pnQueryPort, uint32 * punFlags, uint32 * pRTime32LastPlayedOnServer)
{
    return ((ISteamMatchmaking*)linux_side)->GetFavoriteGame2((int)iGame, (uint32 *)pnAppID, (uint32 *)pnIP, (uint16 *)pnConnPort, (uint16 *)pnQueryPort, (uint32 *)punFlags, (uint32 *)pRTime32LastPlayedOnServer);
}

int cppISteamMatchmaking_SteamMatchMaking001_AddFavoriteGame2(void *linux_side, uint32 nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)
{
    return ((ISteamMatchmaking*)linux_side)->AddFavoriteGame2((uint32)nAppID, (uint32)nIP, (uint16)nConnPort, (uint16)nQueryPort, (uint32)unFlags, (uint32)rTime32LastPlayedOnServer);
}

bool cppISteamMatchmaking_SteamMatchMaking001_RemoveFavoriteGame2(void *linux_side, uint32 nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)
{
    return ((ISteamMatchmaking*)linux_side)->RemoveFavoriteGame2((uint32)nAppID, (uint32)nIP, (uint16)nConnPort, (uint16)nQueryPort, (uint32)unFlags);
}

void cppISteamMatchmaking_SteamMatchMaking001_RequestLobbyList(void *linux_side, uint64 ulGameID, MatchMakingKeyValuePair_t * pFilters, uint32 nFilters)
{
    ((ISteamMatchmaking*)linux_side)->RequestLobbyList((uint64)ulGameID, (MatchMakingKeyValuePair_t *)pFilters, (uint32)nFilters);
}

CSteamID cppISteamMatchmaking_SteamMatchMaking001_GetLobbyByIndex(void *linux_side, int iLobby)
{
    return ((ISteamMatchmaking*)linux_side)->GetLobbyByIndex((int)iLobby);
}

void cppISteamMatchmaking_SteamMatchMaking001_CreateLobby(void *linux_side, uint64 ulGameID, bool bPrivate)
{
    ((ISteamMatchmaking*)linux_side)->CreateLobby((uint64)ulGameID, (bool)bPrivate);
}

void cppISteamMatchmaking_SteamMatchMaking001_JoinLobby(void *linux_side, CSteamID steamIDLobby)
{
    ((ISteamMatchmaking*)linux_side)->JoinLobby((CSteamID)steamIDLobby);
}

void cppISteamMatchmaking_SteamMatchMaking001_LeaveLobby(void *linux_side, CSteamID steamIDLobby)
{
    ((ISteamMatchmaking*)linux_side)->LeaveLobby((CSteamID)steamIDLobby);
}

bool cppISteamMatchmaking_SteamMatchMaking001_InviteUserToLobby(void *linux_side, CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
    return ((ISteamMatchmaking*)linux_side)->InviteUserToLobby((CSteamID)steamIDLobby, (CSteamID)steamIDInvitee);
}

int cppISteamMatchmaking_SteamMatchMaking001_GetNumLobbyMembers(void *linux_side, CSteamID steamIDLobby)
{
    return ((ISteamMatchmaking*)linux_side)->GetNumLobbyMembers((CSteamID)steamIDLobby);
}

CSteamID cppISteamMatchmaking_SteamMatchMaking001_GetLobbyMemberByIndex(void *linux_side, CSteamID steamIDLobby, int iMember)
{
    return ((ISteamMatchmaking*)linux_side)->GetLobbyMemberByIndex((CSteamID)steamIDLobby, (int)iMember);
}

const char * cppISteamMatchmaking_SteamMatchMaking001_GetLobbyData(void *linux_side, CSteamID SteamIDLobby, const char * pchKey)
{
    return ((ISteamMatchmaking*)linux_side)->GetLobbyData((CSteamID)SteamIDLobby, (const char *)pchKey);
}

bool cppISteamMatchmaking_SteamMatchMaking001_SetLobbyData(void *linux_side, CSteamID steamIDLobby, const char * pchKey, const char * pchValue)
{
    return ((ISteamMatchmaking*)linux_side)->SetLobbyData((CSteamID)steamIDLobby, (const char *)pchKey, (const char *)pchValue);
}

const char * cppISteamMatchmaking_SteamMatchMaking001_GetLobbyMemberData(void *linux_side, CSteamID steamIDLobby, CSteamID steamIDUser, const char * pchKey)
{
    return ((ISteamMatchmaking*)linux_side)->GetLobbyMemberData((CSteamID)steamIDLobby, (CSteamID)steamIDUser, (const char *)pchKey);
}

bool cppISteamMatchmaking_SteamMatchMaking001_SetLobbyMemberData(void *linux_side, CSteamID steamIDLobby, const char * pchKey, const char * pchValue)
{
    return ((ISteamMatchmaking*)linux_side)->SetLobbyMemberData((CSteamID)steamIDLobby, (const char *)pchKey, (const char *)pchValue);
}

bool cppISteamMatchmaking_SteamMatchMaking001_SendLobbyChatMsg(void *linux_side, CSteamID steamIDLobby, const void * pvMsgBody, int cubMsgBody)
{
    return ((ISteamMatchmaking*)linux_side)->SendLobbyChatMsg((CSteamID)steamIDLobby, (const void *)pvMsgBody, (int)cubMsgBody);
}

int cppISteamMatchmaking_SteamMatchMaking001_GetLobbyChatEntry(void *linux_side, CSteamID steamIDLobby, int iChatID, CSteamID * pSteamIDUser, void * pvData, int cubData, EChatEntryType * peChatEntryType)
{
    return ((ISteamMatchmaking*)linux_side)->GetLobbyChatEntry((CSteamID)steamIDLobby, (int)iChatID, (CSteamID *)pSteamIDUser, (void *)pvData, (int)cubData, (EChatEntryType *)peChatEntryType);
}

bool cppISteamMatchmaking_SteamMatchMaking001_RequestLobbyData(void *linux_side, CSteamID steamIDLobby)
{
    return ((ISteamMatchmaking*)linux_side)->RequestLobbyData((CSteamID)steamIDLobby);
}

#ifdef __cplusplus
}
#endif
