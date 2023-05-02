#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_116x/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_116x
#include "struct_converters.h"
#include "cppISteamFriends_SteamFriends010.h"
const char * cppISteamFriends_SteamFriends010_GetPersonaName(void *linux_side)
{
    return ((ISteamFriends*)linux_side)->GetPersonaName();
}

void cppISteamFriends_SteamFriends010_SetPersonaName(void *linux_side, const char * pchPersonaName)
{
    ((ISteamFriends*)linux_side)->SetPersonaName((const char *)pchPersonaName);
}

EPersonaState cppISteamFriends_SteamFriends010_GetPersonaState(void *linux_side)
{
    return ((ISteamFriends*)linux_side)->GetPersonaState();
}

int cppISteamFriends_SteamFriends010_GetFriendCount(void *linux_side, int iFriendFlags)
{
    return ((ISteamFriends*)linux_side)->GetFriendCount((int)iFriendFlags);
}

CSteamID cppISteamFriends_SteamFriends010_GetFriendByIndex(void *linux_side, int iFriend, int iFriendFlags)
{
    return ((ISteamFriends*)linux_side)->GetFriendByIndex((int)iFriend, (int)iFriendFlags);
}

EFriendRelationship cppISteamFriends_SteamFriends010_GetFriendRelationship(void *linux_side, CSteamID steamIDFriend)
{
    return ((ISteamFriends*)linux_side)->GetFriendRelationship((CSteamID)steamIDFriend);
}

EPersonaState cppISteamFriends_SteamFriends010_GetFriendPersonaState(void *linux_side, CSteamID steamIDFriend)
{
    return ((ISteamFriends*)linux_side)->GetFriendPersonaState((CSteamID)steamIDFriend);
}

const char * cppISteamFriends_SteamFriends010_GetFriendPersonaName(void *linux_side, CSteamID steamIDFriend)
{
    return ((ISteamFriends*)linux_side)->GetFriendPersonaName((CSteamID)steamIDFriend);
}

bool cppISteamFriends_SteamFriends010_GetFriendGamePlayed(void *linux_side, CSteamID steamIDFriend, FriendGameInfo_t * pFriendGameInfo)
{
    return ((ISteamFriends*)linux_side)->GetFriendGamePlayed((CSteamID)steamIDFriend, (FriendGameInfo_t *)pFriendGameInfo);
}

const char * cppISteamFriends_SteamFriends010_GetFriendPersonaNameHistory(void *linux_side, CSteamID steamIDFriend, int iPersonaName)
{
    return ((ISteamFriends*)linux_side)->GetFriendPersonaNameHistory((CSteamID)steamIDFriend, (int)iPersonaName);
}

bool cppISteamFriends_SteamFriends010_HasFriend(void *linux_side, CSteamID steamIDFriend, int iFriendFlags)
{
    return ((ISteamFriends*)linux_side)->HasFriend((CSteamID)steamIDFriend, (int)iFriendFlags);
}

int cppISteamFriends_SteamFriends010_GetClanCount(void *linux_side)
{
    return ((ISteamFriends*)linux_side)->GetClanCount();
}

CSteamID cppISteamFriends_SteamFriends010_GetClanByIndex(void *linux_side, int iClan)
{
    return ((ISteamFriends*)linux_side)->GetClanByIndex((int)iClan);
}

const char * cppISteamFriends_SteamFriends010_GetClanName(void *linux_side, CSteamID steamIDClan)
{
    return ((ISteamFriends*)linux_side)->GetClanName((CSteamID)steamIDClan);
}

const char * cppISteamFriends_SteamFriends010_GetClanTag(void *linux_side, CSteamID steamIDClan)
{
    return ((ISteamFriends*)linux_side)->GetClanTag((CSteamID)steamIDClan);
}

bool cppISteamFriends_SteamFriends010_GetClanActivityCounts(void *linux_side, CSteamID steamIDClan, int * pnOnline, int * pnInGame, int * pnChatting)
{
    return ((ISteamFriends*)linux_side)->GetClanActivityCounts((CSteamID)steamIDClan, (int *)pnOnline, (int *)pnInGame, (int *)pnChatting);
}

SteamAPICall_t cppISteamFriends_SteamFriends010_DownloadClanActivityCounts(void *linux_side, CSteamID * psteamIDClans, int cClansToRequest)
{
    return ((ISteamFriends*)linux_side)->DownloadClanActivityCounts((CSteamID *)psteamIDClans, (int)cClansToRequest);
}

int cppISteamFriends_SteamFriends010_GetFriendCountFromSource(void *linux_side, CSteamID steamIDSource)
{
    return ((ISteamFriends*)linux_side)->GetFriendCountFromSource((CSteamID)steamIDSource);
}

CSteamID cppISteamFriends_SteamFriends010_GetFriendFromSourceByIndex(void *linux_side, CSteamID steamIDSource, int iFriend)
{
    return ((ISteamFriends*)linux_side)->GetFriendFromSourceByIndex((CSteamID)steamIDSource, (int)iFriend);
}

bool cppISteamFriends_SteamFriends010_IsUserInSource(void *linux_side, CSteamID steamIDUser, CSteamID steamIDSource)
{
    return ((ISteamFriends*)linux_side)->IsUserInSource((CSteamID)steamIDUser, (CSteamID)steamIDSource);
}

void cppISteamFriends_SteamFriends010_SetInGameVoiceSpeaking(void *linux_side, CSteamID steamIDUser, bool bSpeaking)
{
    ((ISteamFriends*)linux_side)->SetInGameVoiceSpeaking((CSteamID)steamIDUser, (bool)bSpeaking);
}

void cppISteamFriends_SteamFriends010_ActivateGameOverlay(void *linux_side, const char * pchDialog)
{
    ((ISteamFriends*)linux_side)->ActivateGameOverlay((const char *)pchDialog);
}

void cppISteamFriends_SteamFriends010_ActivateGameOverlayToUser(void *linux_side, const char * pchDialog, CSteamID steamID)
{
    ((ISteamFriends*)linux_side)->ActivateGameOverlayToUser((const char *)pchDialog, (CSteamID)steamID);
}

void cppISteamFriends_SteamFriends010_ActivateGameOverlayToWebPage(void *linux_side, const char * pchURL)
{
    ((ISteamFriends*)linux_side)->ActivateGameOverlayToWebPage((const char *)pchURL);
}

void cppISteamFriends_SteamFriends010_ActivateGameOverlayToStore(void *linux_side, AppId_t nAppID)
{
    ((ISteamFriends*)linux_side)->ActivateGameOverlayToStore((AppId_t)nAppID);
}

void cppISteamFriends_SteamFriends010_SetPlayedWith(void *linux_side, CSteamID steamIDUserPlayedWith)
{
    ((ISteamFriends*)linux_side)->SetPlayedWith((CSteamID)steamIDUserPlayedWith);
}

void cppISteamFriends_SteamFriends010_ActivateGameOverlayInviteDialog(void *linux_side, CSteamID steamIDLobby)
{
    ((ISteamFriends*)linux_side)->ActivateGameOverlayInviteDialog((CSteamID)steamIDLobby);
}

int cppISteamFriends_SteamFriends010_GetSmallFriendAvatar(void *linux_side, CSteamID steamIDFriend)
{
    return ((ISteamFriends*)linux_side)->GetSmallFriendAvatar((CSteamID)steamIDFriend);
}

int cppISteamFriends_SteamFriends010_GetMediumFriendAvatar(void *linux_side, CSteamID steamIDFriend)
{
    return ((ISteamFriends*)linux_side)->GetMediumFriendAvatar((CSteamID)steamIDFriend);
}

int cppISteamFriends_SteamFriends010_GetLargeFriendAvatar(void *linux_side, CSteamID steamIDFriend)
{
    return ((ISteamFriends*)linux_side)->GetLargeFriendAvatar((CSteamID)steamIDFriend);
}

bool cppISteamFriends_SteamFriends010_RequestUserInformation(void *linux_side, CSteamID steamIDUser, bool bRequireNameOnly)
{
    return ((ISteamFriends*)linux_side)->RequestUserInformation((CSteamID)steamIDUser, (bool)bRequireNameOnly);
}

SteamAPICall_t cppISteamFriends_SteamFriends010_RequestClanOfficerList(void *linux_side, CSteamID steamIDClan)
{
    return ((ISteamFriends*)linux_side)->RequestClanOfficerList((CSteamID)steamIDClan);
}

CSteamID cppISteamFriends_SteamFriends010_GetClanOwner(void *linux_side, CSteamID steamIDClan)
{
    return ((ISteamFriends*)linux_side)->GetClanOwner((CSteamID)steamIDClan);
}

int cppISteamFriends_SteamFriends010_GetClanOfficerCount(void *linux_side, CSteamID steamIDClan)
{
    return ((ISteamFriends*)linux_side)->GetClanOfficerCount((CSteamID)steamIDClan);
}

CSteamID cppISteamFriends_SteamFriends010_GetClanOfficerByIndex(void *linux_side, CSteamID steamIDClan, int iOfficer)
{
    return ((ISteamFriends*)linux_side)->GetClanOfficerByIndex((CSteamID)steamIDClan, (int)iOfficer);
}

uint32 cppISteamFriends_SteamFriends010_GetUserRestrictions(void *linux_side)
{
    return ((ISteamFriends*)linux_side)->GetUserRestrictions();
}

bool cppISteamFriends_SteamFriends010_SetRichPresence(void *linux_side, const char * pchKey, const char * pchValue)
{
    return ((ISteamFriends*)linux_side)->SetRichPresence((const char *)pchKey, (const char *)pchValue);
}

void cppISteamFriends_SteamFriends010_ClearRichPresence(void *linux_side)
{
    ((ISteamFriends*)linux_side)->ClearRichPresence();
}

const char * cppISteamFriends_SteamFriends010_GetFriendRichPresence(void *linux_side, CSteamID steamIDFriend, const char * pchKey)
{
    return ((ISteamFriends*)linux_side)->GetFriendRichPresence((CSteamID)steamIDFriend, (const char *)pchKey);
}

int cppISteamFriends_SteamFriends010_GetFriendRichPresenceKeyCount(void *linux_side, CSteamID steamIDFriend)
{
    return ((ISteamFriends*)linux_side)->GetFriendRichPresenceKeyCount((CSteamID)steamIDFriend);
}

const char * cppISteamFriends_SteamFriends010_GetFriendRichPresenceKeyByIndex(void *linux_side, CSteamID steamIDFriend, int iKey)
{
    return ((ISteamFriends*)linux_side)->GetFriendRichPresenceKeyByIndex((CSteamID)steamIDFriend, (int)iKey);
}

bool cppISteamFriends_SteamFriends010_InviteUserToGame(void *linux_side, CSteamID steamIDFriend, const char * pchConnectString)
{
    return ((ISteamFriends*)linux_side)->InviteUserToGame((CSteamID)steamIDFriend, (const char *)pchConnectString);
}

int cppISteamFriends_SteamFriends010_GetCoplayFriendCount(void *linux_side)
{
    return ((ISteamFriends*)linux_side)->GetCoplayFriendCount();
}

CSteamID cppISteamFriends_SteamFriends010_GetCoplayFriend(void *linux_side, int iCoplayFriend)
{
    return ((ISteamFriends*)linux_side)->GetCoplayFriend((int)iCoplayFriend);
}

int cppISteamFriends_SteamFriends010_GetFriendCoplayTime(void *linux_side, CSteamID steamIDFriend)
{
    return ((ISteamFriends*)linux_side)->GetFriendCoplayTime((CSteamID)steamIDFriend);
}

AppId_t cppISteamFriends_SteamFriends010_GetFriendCoplayGame(void *linux_side, CSteamID steamIDFriend)
{
    return ((ISteamFriends*)linux_side)->GetFriendCoplayGame((CSteamID)steamIDFriend);
}

SteamAPICall_t cppISteamFriends_SteamFriends010_JoinClanChatRoom(void *linux_side, CSteamID steamIDClan)
{
    return ((ISteamFriends*)linux_side)->JoinClanChatRoom((CSteamID)steamIDClan);
}

bool cppISteamFriends_SteamFriends010_LeaveClanChatRoom(void *linux_side, CSteamID steamIDClan)
{
    return ((ISteamFriends*)linux_side)->LeaveClanChatRoom((CSteamID)steamIDClan);
}

int cppISteamFriends_SteamFriends010_GetClanChatMemberCount(void *linux_side, CSteamID steamIDClan)
{
    return ((ISteamFriends*)linux_side)->GetClanChatMemberCount((CSteamID)steamIDClan);
}

CSteamID cppISteamFriends_SteamFriends010_GetChatMemberByIndex(void *linux_side, CSteamID steamIDClan, int iUser)
{
    return ((ISteamFriends*)linux_side)->GetChatMemberByIndex((CSteamID)steamIDClan, (int)iUser);
}

bool cppISteamFriends_SteamFriends010_SendClanChatMessage(void *linux_side, CSteamID steamIDClanChat, const char * pchText)
{
    return ((ISteamFriends*)linux_side)->SendClanChatMessage((CSteamID)steamIDClanChat, (const char *)pchText);
}

int cppISteamFriends_SteamFriends010_GetClanChatMessage(void *linux_side, CSteamID steamIDClanChat, int iMessage, void * prgchText, int cchTextMax, EChatEntryType * _a, CSteamID * _b)
{
    return ((ISteamFriends*)linux_side)->GetClanChatMessage((CSteamID)steamIDClanChat, (int)iMessage, (void *)prgchText, (int)cchTextMax, (EChatEntryType *)_a, (CSteamID *)_b);
}

bool cppISteamFriends_SteamFriends010_IsClanChatAdmin(void *linux_side, CSteamID steamIDClanChat, CSteamID steamIDUser)
{
    return ((ISteamFriends*)linux_side)->IsClanChatAdmin((CSteamID)steamIDClanChat, (CSteamID)steamIDUser);
}

bool cppISteamFriends_SteamFriends010_IsClanChatWindowOpenInSteam(void *linux_side, CSteamID steamIDClanChat)
{
    return ((ISteamFriends*)linux_side)->IsClanChatWindowOpenInSteam((CSteamID)steamIDClanChat);
}

bool cppISteamFriends_SteamFriends010_OpenClanChatWindowInSteam(void *linux_side, CSteamID steamIDClanChat)
{
    return ((ISteamFriends*)linux_side)->OpenClanChatWindowInSteam((CSteamID)steamIDClanChat);
}

bool cppISteamFriends_SteamFriends010_CloseClanChatWindowInSteam(void *linux_side, CSteamID steamIDClanChat)
{
    return ((ISteamFriends*)linux_side)->CloseClanChatWindowInSteam((CSteamID)steamIDClanChat);
}

bool cppISteamFriends_SteamFriends010_SetListenForFriendsMessages(void *linux_side, bool bInterceptEnabled)
{
    return ((ISteamFriends*)linux_side)->SetListenForFriendsMessages((bool)bInterceptEnabled);
}

bool cppISteamFriends_SteamFriends010_ReplyToFriendMessage(void *linux_side, CSteamID steamIDFriend, const char * pchMsgToSend)
{
    return ((ISteamFriends*)linux_side)->ReplyToFriendMessage((CSteamID)steamIDFriend, (const char *)pchMsgToSend);
}

int cppISteamFriends_SteamFriends010_GetFriendMessage(void *linux_side, CSteamID steamIDFriend, int iMessageID, void * pvData, int cubData, EChatEntryType * peChatEntryType)
{
    return ((ISteamFriends*)linux_side)->GetFriendMessage((CSteamID)steamIDFriend, (int)iMessageID, (void *)pvData, (int)cubData, (EChatEntryType *)peChatEntryType);
}

#ifdef __cplusplus
}
#endif
