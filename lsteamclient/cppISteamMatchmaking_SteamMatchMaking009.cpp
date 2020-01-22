#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#include "steamworks_sdk_147/steam_api.h"
#include "steamworks_sdk_147/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_147
#include "struct_converters.h"
#include "cppISteamMatchmaking_SteamMatchMaking009.h"
int cppISteamMatchmaking_SteamMatchMaking009_GetFavoriteGameCount(void *linux_side)
{
    return ((ISteamMatchmaking*)linux_side)->GetFavoriteGameCount();
}

bool cppISteamMatchmaking_SteamMatchMaking009_GetFavoriteGame(void *linux_side, int iGame, AppId_t * pnAppID, uint32 * pnIP, uint16 * pnConnPort, uint16 * pnQueryPort, uint32 * punFlags, uint32 * pRTime32LastPlayedOnServer)
{
    return ((ISteamMatchmaking*)linux_side)->GetFavoriteGame((int)iGame, (AppId_t *)pnAppID, (uint32 *)pnIP, (uint16 *)pnConnPort, (uint16 *)pnQueryPort, (uint32 *)punFlags, (uint32 *)pRTime32LastPlayedOnServer);
}

int cppISteamMatchmaking_SteamMatchMaking009_AddFavoriteGame(void *linux_side, AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)
{
    return ((ISteamMatchmaking*)linux_side)->AddFavoriteGame((AppId_t)nAppID, (uint32)nIP, (uint16)nConnPort, (uint16)nQueryPort, (uint32)unFlags, (uint32)rTime32LastPlayedOnServer);
}

bool cppISteamMatchmaking_SteamMatchMaking009_RemoveFavoriteGame(void *linux_side, AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)
{
    return ((ISteamMatchmaking*)linux_side)->RemoveFavoriteGame((AppId_t)nAppID, (uint32)nIP, (uint16)nConnPort, (uint16)nQueryPort, (uint32)unFlags);
}

SteamAPICall_t cppISteamMatchmaking_SteamMatchMaking009_RequestLobbyList(void *linux_side)
{
    return ((ISteamMatchmaking*)linux_side)->RequestLobbyList();
}

void cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListStringFilter(void *linux_side, const char * pchKeyToMatch, const char * pchValueToMatch, ELobbyComparison eComparisonType)
{
    ((ISteamMatchmaking*)linux_side)->AddRequestLobbyListStringFilter((const char *)pchKeyToMatch, (const char *)pchValueToMatch, (ELobbyComparison)eComparisonType);
}

void cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListNumericalFilter(void *linux_side, const char * pchKeyToMatch, int nValueToMatch, ELobbyComparison eComparisonType)
{
    ((ISteamMatchmaking*)linux_side)->AddRequestLobbyListNumericalFilter((const char *)pchKeyToMatch, (int)nValueToMatch, (ELobbyComparison)eComparisonType);
}

void cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListNearValueFilter(void *linux_side, const char * pchKeyToMatch, int nValueToBeCloseTo)
{
    ((ISteamMatchmaking*)linux_side)->AddRequestLobbyListNearValueFilter((const char *)pchKeyToMatch, (int)nValueToBeCloseTo);
}

void cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListFilterSlotsAvailable(void *linux_side, int nSlotsAvailable)
{
    ((ISteamMatchmaking*)linux_side)->AddRequestLobbyListFilterSlotsAvailable((int)nSlotsAvailable);
}

void cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListDistanceFilter(void *linux_side, ELobbyDistanceFilter eLobbyDistanceFilter)
{
    ((ISteamMatchmaking*)linux_side)->AddRequestLobbyListDistanceFilter((ELobbyDistanceFilter)eLobbyDistanceFilter);
}

void cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListResultCountFilter(void *linux_side, int cMaxResults)
{
    ((ISteamMatchmaking*)linux_side)->AddRequestLobbyListResultCountFilter((int)cMaxResults);
}

void cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListCompatibleMembersFilter(void *linux_side, CSteamID steamIDLobby)
{
    ((ISteamMatchmaking*)linux_side)->AddRequestLobbyListCompatibleMembersFilter((CSteamID)steamIDLobby);
}

CSteamID cppISteamMatchmaking_SteamMatchMaking009_GetLobbyByIndex(void *linux_side, int iLobby)
{
    return ((ISteamMatchmaking*)linux_side)->GetLobbyByIndex((int)iLobby);
}

SteamAPICall_t cppISteamMatchmaking_SteamMatchMaking009_CreateLobby(void *linux_side, ELobbyType eLobbyType, int cMaxMembers)
{
    return ((ISteamMatchmaking*)linux_side)->CreateLobby((ELobbyType)eLobbyType, (int)cMaxMembers);
}

SteamAPICall_t cppISteamMatchmaking_SteamMatchMaking009_JoinLobby(void *linux_side, CSteamID steamIDLobby)
{
    return ((ISteamMatchmaking*)linux_side)->JoinLobby((CSteamID)steamIDLobby);
}

void cppISteamMatchmaking_SteamMatchMaking009_LeaveLobby(void *linux_side, CSteamID steamIDLobby)
{
    ((ISteamMatchmaking*)linux_side)->LeaveLobby((CSteamID)steamIDLobby);
}

bool cppISteamMatchmaking_SteamMatchMaking009_InviteUserToLobby(void *linux_side, CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
    return ((ISteamMatchmaking*)linux_side)->InviteUserToLobby((CSteamID)steamIDLobby, (CSteamID)steamIDInvitee);
}

int cppISteamMatchmaking_SteamMatchMaking009_GetNumLobbyMembers(void *linux_side, CSteamID steamIDLobby)
{
    return ((ISteamMatchmaking*)linux_side)->GetNumLobbyMembers((CSteamID)steamIDLobby);
}

CSteamID cppISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberByIndex(void *linux_side, CSteamID steamIDLobby, int iMember)
{
    return ((ISteamMatchmaking*)linux_side)->GetLobbyMemberByIndex((CSteamID)steamIDLobby, (int)iMember);
}

const char * cppISteamMatchmaking_SteamMatchMaking009_GetLobbyData(void *linux_side, CSteamID steamIDLobby, const char * pchKey)
{
    return ((ISteamMatchmaking*)linux_side)->GetLobbyData((CSteamID)steamIDLobby, (const char *)pchKey);
}

bool cppISteamMatchmaking_SteamMatchMaking009_SetLobbyData(void *linux_side, CSteamID steamIDLobby, const char * pchKey, const char * pchValue)
{
    return ((ISteamMatchmaking*)linux_side)->SetLobbyData((CSteamID)steamIDLobby, (const char *)pchKey, (const char *)pchValue);
}

int cppISteamMatchmaking_SteamMatchMaking009_GetLobbyDataCount(void *linux_side, CSteamID steamIDLobby)
{
    return ((ISteamMatchmaking*)linux_side)->GetLobbyDataCount((CSteamID)steamIDLobby);
}

bool cppISteamMatchmaking_SteamMatchMaking009_GetLobbyDataByIndex(void *linux_side, CSteamID steamIDLobby, int iLobbyData, char * pchKey, int cchKeyBufferSize, char * pchValue, int cchValueBufferSize)
{
    return ((ISteamMatchmaking*)linux_side)->GetLobbyDataByIndex((CSteamID)steamIDLobby, (int)iLobbyData, (char *)pchKey, (int)cchKeyBufferSize, (char *)pchValue, (int)cchValueBufferSize);
}

bool cppISteamMatchmaking_SteamMatchMaking009_DeleteLobbyData(void *linux_side, CSteamID steamIDLobby, const char * pchKey)
{
    return ((ISteamMatchmaking*)linux_side)->DeleteLobbyData((CSteamID)steamIDLobby, (const char *)pchKey);
}

const char * cppISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberData(void *linux_side, CSteamID steamIDLobby, CSteamID steamIDUser, const char * pchKey)
{
    return ((ISteamMatchmaking*)linux_side)->GetLobbyMemberData((CSteamID)steamIDLobby, (CSteamID)steamIDUser, (const char *)pchKey);
}

void cppISteamMatchmaking_SteamMatchMaking009_SetLobbyMemberData(void *linux_side, CSteamID steamIDLobby, const char * pchKey, const char * pchValue)
{
    ((ISteamMatchmaking*)linux_side)->SetLobbyMemberData((CSteamID)steamIDLobby, (const char *)pchKey, (const char *)pchValue);
}

bool cppISteamMatchmaking_SteamMatchMaking009_SendLobbyChatMsg(void *linux_side, CSteamID steamIDLobby, const void * pvMsgBody, int cubMsgBody)
{
    return ((ISteamMatchmaking*)linux_side)->SendLobbyChatMsg((CSteamID)steamIDLobby, (const void *)pvMsgBody, (int)cubMsgBody);
}

int cppISteamMatchmaking_SteamMatchMaking009_GetLobbyChatEntry(void *linux_side, CSteamID steamIDLobby, int iChatID, CSteamID * pSteamIDUser, void * pvData, int cubData, EChatEntryType * peChatEntryType)
{
    return ((ISteamMatchmaking*)linux_side)->GetLobbyChatEntry((CSteamID)steamIDLobby, (int)iChatID, (CSteamID *)pSteamIDUser, (void *)pvData, (int)cubData, (EChatEntryType *)peChatEntryType);
}

bool cppISteamMatchmaking_SteamMatchMaking009_RequestLobbyData(void *linux_side, CSteamID steamIDLobby)
{
    return ((ISteamMatchmaking*)linux_side)->RequestLobbyData((CSteamID)steamIDLobby);
}

void cppISteamMatchmaking_SteamMatchMaking009_SetLobbyGameServer(void *linux_side, CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer)
{
    ((ISteamMatchmaking*)linux_side)->SetLobbyGameServer((CSteamID)steamIDLobby, (uint32)unGameServerIP, (uint16)unGameServerPort, (CSteamID)steamIDGameServer);
}

bool cppISteamMatchmaking_SteamMatchMaking009_GetLobbyGameServer(void *linux_side, CSteamID steamIDLobby, uint32 * punGameServerIP, uint16 * punGameServerPort, CSteamID * psteamIDGameServer)
{
    return ((ISteamMatchmaking*)linux_side)->GetLobbyGameServer((CSteamID)steamIDLobby, (uint32 *)punGameServerIP, (uint16 *)punGameServerPort, (CSteamID *)psteamIDGameServer);
}

bool cppISteamMatchmaking_SteamMatchMaking009_SetLobbyMemberLimit(void *linux_side, CSteamID steamIDLobby, int cMaxMembers)
{
    return ((ISteamMatchmaking*)linux_side)->SetLobbyMemberLimit((CSteamID)steamIDLobby, (int)cMaxMembers);
}

int cppISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberLimit(void *linux_side, CSteamID steamIDLobby)
{
    return ((ISteamMatchmaking*)linux_side)->GetLobbyMemberLimit((CSteamID)steamIDLobby);
}

bool cppISteamMatchmaking_SteamMatchMaking009_SetLobbyType(void *linux_side, CSteamID steamIDLobby, ELobbyType eLobbyType)
{
    return ((ISteamMatchmaking*)linux_side)->SetLobbyType((CSteamID)steamIDLobby, (ELobbyType)eLobbyType);
}

bool cppISteamMatchmaking_SteamMatchMaking009_SetLobbyJoinable(void *linux_side, CSteamID steamIDLobby, bool bLobbyJoinable)
{
    return ((ISteamMatchmaking*)linux_side)->SetLobbyJoinable((CSteamID)steamIDLobby, (bool)bLobbyJoinable);
}

CSteamID cppISteamMatchmaking_SteamMatchMaking009_GetLobbyOwner(void *linux_side, CSteamID steamIDLobby)
{
    return ((ISteamMatchmaking*)linux_side)->GetLobbyOwner((CSteamID)steamIDLobby);
}

bool cppISteamMatchmaking_SteamMatchMaking009_SetLobbyOwner(void *linux_side, CSteamID steamIDLobby, CSteamID steamIDNewOwner)
{
    return ((ISteamMatchmaking*)linux_side)->SetLobbyOwner((CSteamID)steamIDLobby, (CSteamID)steamIDNewOwner);
}

bool cppISteamMatchmaking_SteamMatchMaking009_SetLinkedLobby(void *linux_side, CSteamID steamIDLobby, CSteamID steamIDLobbyDependent)
{
    return ((ISteamMatchmaking*)linux_side)->SetLinkedLobby((CSteamID)steamIDLobby, (CSteamID)steamIDLobbyDependent);
}

#ifdef __cplusplus
}
#endif
