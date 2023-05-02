#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_131/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_131
#include "struct_converters.h"
#include "cppISteamFriends_SteamFriends014.h"
const char * cppISteamFriends_SteamFriends014_GetPersonaName(void *linux_side)
{
    return ((ISteamFriends*)linux_side)->GetPersonaName();
}

SteamAPICall_t cppISteamFriends_SteamFriends014_SetPersonaName(void *linux_side, const char * pchPersonaName)
{
    return ((ISteamFriends*)linux_side)->SetPersonaName((const char *)pchPersonaName);
}

EPersonaState cppISteamFriends_SteamFriends014_GetPersonaState(void *linux_side)
{
    return ((ISteamFriends*)linux_side)->GetPersonaState();
}

int cppISteamFriends_SteamFriends014_GetFriendCount(void *linux_side, int iFriendFlags)
{
    return ((ISteamFriends*)linux_side)->GetFriendCount((int)iFriendFlags);
}

CSteamID cppISteamFriends_SteamFriends014_GetFriendByIndex(void *linux_side, int iFriend, int iFriendFlags)
{
    return ((ISteamFriends*)linux_side)->GetFriendByIndex((int)iFriend, (int)iFriendFlags);
}

EFriendRelationship cppISteamFriends_SteamFriends014_GetFriendRelationship(void *linux_side, CSteamID steamIDFriend)
{
    return ((ISteamFriends*)linux_side)->GetFriendRelationship((CSteamID)steamIDFriend);
}

EPersonaState cppISteamFriends_SteamFriends014_GetFriendPersonaState(void *linux_side, CSteamID steamIDFriend)
{
    return ((ISteamFriends*)linux_side)->GetFriendPersonaState((CSteamID)steamIDFriend);
}

const char * cppISteamFriends_SteamFriends014_GetFriendPersonaName(void *linux_side, CSteamID steamIDFriend)
{
    return ((ISteamFriends*)linux_side)->GetFriendPersonaName((CSteamID)steamIDFriend);
}

bool cppISteamFriends_SteamFriends014_GetFriendGamePlayed(void *linux_side, CSteamID steamIDFriend, FriendGameInfo_t * pFriendGameInfo)
{
    return ((ISteamFriends*)linux_side)->GetFriendGamePlayed((CSteamID)steamIDFriend, (FriendGameInfo_t *)pFriendGameInfo);
}

const char * cppISteamFriends_SteamFriends014_GetFriendPersonaNameHistory(void *linux_side, CSteamID steamIDFriend, int iPersonaName)
{
    return ((ISteamFriends*)linux_side)->GetFriendPersonaNameHistory((CSteamID)steamIDFriend, (int)iPersonaName);
}

const char * cppISteamFriends_SteamFriends014_GetPlayerNickname(void *linux_side, CSteamID steamIDPlayer)
{
    return ((ISteamFriends*)linux_side)->GetPlayerNickname((CSteamID)steamIDPlayer);
}

bool cppISteamFriends_SteamFriends014_HasFriend(void *linux_side, CSteamID steamIDFriend, int iFriendFlags)
{
    return ((ISteamFriends*)linux_side)->HasFriend((CSteamID)steamIDFriend, (int)iFriendFlags);
}

int cppISteamFriends_SteamFriends014_GetClanCount(void *linux_side)
{
    return ((ISteamFriends*)linux_side)->GetClanCount();
}

CSteamID cppISteamFriends_SteamFriends014_GetClanByIndex(void *linux_side, int iClan)
{
    return ((ISteamFriends*)linux_side)->GetClanByIndex((int)iClan);
}

const char * cppISteamFriends_SteamFriends014_GetClanName(void *linux_side, CSteamID steamIDClan)
{
    return ((ISteamFriends*)linux_side)->GetClanName((CSteamID)steamIDClan);
}

const char * cppISteamFriends_SteamFriends014_GetClanTag(void *linux_side, CSteamID steamIDClan)
{
    return ((ISteamFriends*)linux_side)->GetClanTag((CSteamID)steamIDClan);
}

bool cppISteamFriends_SteamFriends014_GetClanActivityCounts(void *linux_side, CSteamID steamIDClan, int * pnOnline, int * pnInGame, int * pnChatting)
{
    return ((ISteamFriends*)linux_side)->GetClanActivityCounts((CSteamID)steamIDClan, (int *)pnOnline, (int *)pnInGame, (int *)pnChatting);
}

SteamAPICall_t cppISteamFriends_SteamFriends014_DownloadClanActivityCounts(void *linux_side, CSteamID * psteamIDClans, int cClansToRequest)
{
    return ((ISteamFriends*)linux_side)->DownloadClanActivityCounts((CSteamID *)psteamIDClans, (int)cClansToRequest);
}

int cppISteamFriends_SteamFriends014_GetFriendCountFromSource(void *linux_side, CSteamID steamIDSource)
{
    return ((ISteamFriends*)linux_side)->GetFriendCountFromSource((CSteamID)steamIDSource);
}

CSteamID cppISteamFriends_SteamFriends014_GetFriendFromSourceByIndex(void *linux_side, CSteamID steamIDSource, int iFriend)
{
    return ((ISteamFriends*)linux_side)->GetFriendFromSourceByIndex((CSteamID)steamIDSource, (int)iFriend);
}

bool cppISteamFriends_SteamFriends014_IsUserInSource(void *linux_side, CSteamID steamIDUser, CSteamID steamIDSource)
{
    return ((ISteamFriends*)linux_side)->IsUserInSource((CSteamID)steamIDUser, (CSteamID)steamIDSource);
}

void cppISteamFriends_SteamFriends014_SetInGameVoiceSpeaking(void *linux_side, CSteamID steamIDUser, bool bSpeaking)
{
    ((ISteamFriends*)linux_side)->SetInGameVoiceSpeaking((CSteamID)steamIDUser, (bool)bSpeaking);
}

void cppISteamFriends_SteamFriends014_ActivateGameOverlay(void *linux_side, const char * pchDialog)
{
    ((ISteamFriends*)linux_side)->ActivateGameOverlay((const char *)pchDialog);
}

void cppISteamFriends_SteamFriends014_ActivateGameOverlayToUser(void *linux_side, const char * pchDialog, CSteamID steamID)
{
    ((ISteamFriends*)linux_side)->ActivateGameOverlayToUser((const char *)pchDialog, (CSteamID)steamID);
}

void cppISteamFriends_SteamFriends014_ActivateGameOverlayToWebPage(void *linux_side, const char * pchURL)
{
    ((ISteamFriends*)linux_side)->ActivateGameOverlayToWebPage((const char *)pchURL);
}

void cppISteamFriends_SteamFriends014_ActivateGameOverlayToStore(void *linux_side, AppId_t nAppID, EOverlayToStoreFlag eFlag)
{
    ((ISteamFriends*)linux_side)->ActivateGameOverlayToStore((AppId_t)nAppID, (EOverlayToStoreFlag)eFlag);
}

void cppISteamFriends_SteamFriends014_SetPlayedWith(void *linux_side, CSteamID steamIDUserPlayedWith)
{
    ((ISteamFriends*)linux_side)->SetPlayedWith((CSteamID)steamIDUserPlayedWith);
}

void cppISteamFriends_SteamFriends014_ActivateGameOverlayInviteDialog(void *linux_side, CSteamID steamIDLobby)
{
    ((ISteamFriends*)linux_side)->ActivateGameOverlayInviteDialog((CSteamID)steamIDLobby);
}

int cppISteamFriends_SteamFriends014_GetSmallFriendAvatar(void *linux_side, CSteamID steamIDFriend)
{
    return ((ISteamFriends*)linux_side)->GetSmallFriendAvatar((CSteamID)steamIDFriend);
}

int cppISteamFriends_SteamFriends014_GetMediumFriendAvatar(void *linux_side, CSteamID steamIDFriend)
{
    return ((ISteamFriends*)linux_side)->GetMediumFriendAvatar((CSteamID)steamIDFriend);
}

int cppISteamFriends_SteamFriends014_GetLargeFriendAvatar(void *linux_side, CSteamID steamIDFriend)
{
    return ((ISteamFriends*)linux_side)->GetLargeFriendAvatar((CSteamID)steamIDFriend);
}

bool cppISteamFriends_SteamFriends014_RequestUserInformation(void *linux_side, CSteamID steamIDUser, bool bRequireNameOnly)
{
    return ((ISteamFriends*)linux_side)->RequestUserInformation((CSteamID)steamIDUser, (bool)bRequireNameOnly);
}

SteamAPICall_t cppISteamFriends_SteamFriends014_RequestClanOfficerList(void *linux_side, CSteamID steamIDClan)
{
    return ((ISteamFriends*)linux_side)->RequestClanOfficerList((CSteamID)steamIDClan);
}

CSteamID cppISteamFriends_SteamFriends014_GetClanOwner(void *linux_side, CSteamID steamIDClan)
{
    return ((ISteamFriends*)linux_side)->GetClanOwner((CSteamID)steamIDClan);
}

int cppISteamFriends_SteamFriends014_GetClanOfficerCount(void *linux_side, CSteamID steamIDClan)
{
    return ((ISteamFriends*)linux_side)->GetClanOfficerCount((CSteamID)steamIDClan);
}

CSteamID cppISteamFriends_SteamFriends014_GetClanOfficerByIndex(void *linux_side, CSteamID steamIDClan, int iOfficer)
{
    return ((ISteamFriends*)linux_side)->GetClanOfficerByIndex((CSteamID)steamIDClan, (int)iOfficer);
}

uint32 cppISteamFriends_SteamFriends014_GetUserRestrictions(void *linux_side)
{
    return ((ISteamFriends*)linux_side)->GetUserRestrictions();
}

bool cppISteamFriends_SteamFriends014_SetRichPresence(void *linux_side, const char * pchKey, const char * pchValue)
{
    return ((ISteamFriends*)linux_side)->SetRichPresence((const char *)pchKey, (const char *)pchValue);
}

void cppISteamFriends_SteamFriends014_ClearRichPresence(void *linux_side)
{
    ((ISteamFriends*)linux_side)->ClearRichPresence();
}

const char * cppISteamFriends_SteamFriends014_GetFriendRichPresence(void *linux_side, CSteamID steamIDFriend, const char * pchKey)
{
    return ((ISteamFriends*)linux_side)->GetFriendRichPresence((CSteamID)steamIDFriend, (const char *)pchKey);
}

int cppISteamFriends_SteamFriends014_GetFriendRichPresenceKeyCount(void *linux_side, CSteamID steamIDFriend)
{
    return ((ISteamFriends*)linux_side)->GetFriendRichPresenceKeyCount((CSteamID)steamIDFriend);
}

const char * cppISteamFriends_SteamFriends014_GetFriendRichPresenceKeyByIndex(void *linux_side, CSteamID steamIDFriend, int iKey)
{
    return ((ISteamFriends*)linux_side)->GetFriendRichPresenceKeyByIndex((CSteamID)steamIDFriend, (int)iKey);
}

void cppISteamFriends_SteamFriends014_RequestFriendRichPresence(void *linux_side, CSteamID steamIDFriend)
{
    ((ISteamFriends*)linux_side)->RequestFriendRichPresence((CSteamID)steamIDFriend);
}

bool cppISteamFriends_SteamFriends014_InviteUserToGame(void *linux_side, CSteamID steamIDFriend, const char * pchConnectString)
{
    return ((ISteamFriends*)linux_side)->InviteUserToGame((CSteamID)steamIDFriend, (const char *)pchConnectString);
}

int cppISteamFriends_SteamFriends014_GetCoplayFriendCount(void *linux_side)
{
    return ((ISteamFriends*)linux_side)->GetCoplayFriendCount();
}

CSteamID cppISteamFriends_SteamFriends014_GetCoplayFriend(void *linux_side, int iCoplayFriend)
{
    return ((ISteamFriends*)linux_side)->GetCoplayFriend((int)iCoplayFriend);
}

int cppISteamFriends_SteamFriends014_GetFriendCoplayTime(void *linux_side, CSteamID steamIDFriend)
{
    return ((ISteamFriends*)linux_side)->GetFriendCoplayTime((CSteamID)steamIDFriend);
}

AppId_t cppISteamFriends_SteamFriends014_GetFriendCoplayGame(void *linux_side, CSteamID steamIDFriend)
{
    return ((ISteamFriends*)linux_side)->GetFriendCoplayGame((CSteamID)steamIDFriend);
}

SteamAPICall_t cppISteamFriends_SteamFriends014_JoinClanChatRoom(void *linux_side, CSteamID steamIDClan)
{
    return ((ISteamFriends*)linux_side)->JoinClanChatRoom((CSteamID)steamIDClan);
}

bool cppISteamFriends_SteamFriends014_LeaveClanChatRoom(void *linux_side, CSteamID steamIDClan)
{
    return ((ISteamFriends*)linux_side)->LeaveClanChatRoom((CSteamID)steamIDClan);
}

int cppISteamFriends_SteamFriends014_GetClanChatMemberCount(void *linux_side, CSteamID steamIDClan)
{
    return ((ISteamFriends*)linux_side)->GetClanChatMemberCount((CSteamID)steamIDClan);
}

CSteamID cppISteamFriends_SteamFriends014_GetChatMemberByIndex(void *linux_side, CSteamID steamIDClan, int iUser)
{
    return ((ISteamFriends*)linux_side)->GetChatMemberByIndex((CSteamID)steamIDClan, (int)iUser);
}

bool cppISteamFriends_SteamFriends014_SendClanChatMessage(void *linux_side, CSteamID steamIDClanChat, const char * pchText)
{
    return ((ISteamFriends*)linux_side)->SendClanChatMessage((CSteamID)steamIDClanChat, (const char *)pchText);
}

int cppISteamFriends_SteamFriends014_GetClanChatMessage(void *linux_side, CSteamID steamIDClanChat, int iMessage, void * prgchText, int cchTextMax, EChatEntryType * peChatEntryType, CSteamID * psteamidChatter)
{
    return ((ISteamFriends*)linux_side)->GetClanChatMessage((CSteamID)steamIDClanChat, (int)iMessage, (void *)prgchText, (int)cchTextMax, (EChatEntryType *)peChatEntryType, (CSteamID *)psteamidChatter);
}

bool cppISteamFriends_SteamFriends014_IsClanChatAdmin(void *linux_side, CSteamID steamIDClanChat, CSteamID steamIDUser)
{
    return ((ISteamFriends*)linux_side)->IsClanChatAdmin((CSteamID)steamIDClanChat, (CSteamID)steamIDUser);
}

bool cppISteamFriends_SteamFriends014_IsClanChatWindowOpenInSteam(void *linux_side, CSteamID steamIDClanChat)
{
    return ((ISteamFriends*)linux_side)->IsClanChatWindowOpenInSteam((CSteamID)steamIDClanChat);
}

bool cppISteamFriends_SteamFriends014_OpenClanChatWindowInSteam(void *linux_side, CSteamID steamIDClanChat)
{
    return ((ISteamFriends*)linux_side)->OpenClanChatWindowInSteam((CSteamID)steamIDClanChat);
}

bool cppISteamFriends_SteamFriends014_CloseClanChatWindowInSteam(void *linux_side, CSteamID steamIDClanChat)
{
    return ((ISteamFriends*)linux_side)->CloseClanChatWindowInSteam((CSteamID)steamIDClanChat);
}

bool cppISteamFriends_SteamFriends014_SetListenForFriendsMessages(void *linux_side, bool bInterceptEnabled)
{
    return ((ISteamFriends*)linux_side)->SetListenForFriendsMessages((bool)bInterceptEnabled);
}

bool cppISteamFriends_SteamFriends014_ReplyToFriendMessage(void *linux_side, CSteamID steamIDFriend, const char * pchMsgToSend)
{
    return ((ISteamFriends*)linux_side)->ReplyToFriendMessage((CSteamID)steamIDFriend, (const char *)pchMsgToSend);
}

int cppISteamFriends_SteamFriends014_GetFriendMessage(void *linux_side, CSteamID steamIDFriend, int iMessageID, void * pvData, int cubData, EChatEntryType * peChatEntryType)
{
    return ((ISteamFriends*)linux_side)->GetFriendMessage((CSteamID)steamIDFriend, (int)iMessageID, (void *)pvData, (int)cubData, (EChatEntryType *)peChatEntryType);
}

SteamAPICall_t cppISteamFriends_SteamFriends014_GetFollowerCount(void *linux_side, CSteamID steamID)
{
    return ((ISteamFriends*)linux_side)->GetFollowerCount((CSteamID)steamID);
}

SteamAPICall_t cppISteamFriends_SteamFriends014_IsFollowing(void *linux_side, CSteamID steamID)
{
    return ((ISteamFriends*)linux_side)->IsFollowing((CSteamID)steamID);
}

SteamAPICall_t cppISteamFriends_SteamFriends014_EnumerateFollowingList(void *linux_side, uint32 unStartIndex)
{
    return ((ISteamFriends*)linux_side)->EnumerateFollowingList((uint32)unStartIndex);
}

#ifdef __cplusplus
}
#endif
