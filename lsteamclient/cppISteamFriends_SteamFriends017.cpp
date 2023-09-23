#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_158/steam_api.h"
#include "steamworks_sdk_158/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_158
#include "struct_converters.h"
#include "cppISteamFriends_SteamFriends017.h"
const char * cppISteamFriends_SteamFriends017_GetPersonaName(void *linux_side)
{
    const char *_ret;
    _ret = ((ISteamFriends*)linux_side)->GetPersonaName();
    return (_ret);
}

SteamAPICall_t cppISteamFriends_SteamFriends017_SetPersonaName(void *linux_side, const char *pchPersonaName)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamFriends*)linux_side)->SetPersonaName((const char *)pchPersonaName);
    return (_ret);
}

EPersonaState cppISteamFriends_SteamFriends017_GetPersonaState(void *linux_side)
{
    EPersonaState _ret;
    _ret = ((ISteamFriends*)linux_side)->GetPersonaState();
    return (_ret);
}

int cppISteamFriends_SteamFriends017_GetFriendCount(void *linux_side, int iFriendFlags)
{
    int _ret;
    _ret = ((ISteamFriends*)linux_side)->GetFriendCount((int)iFriendFlags);
    return (_ret);
}

CSteamID cppISteamFriends_SteamFriends017_GetFriendByIndex(void *linux_side, int iFriend, int iFriendFlags)
{
    CSteamID _ret;
    _ret = ((ISteamFriends*)linux_side)->GetFriendByIndex((int)iFriend, (int)iFriendFlags);
    return (_ret);
}

EFriendRelationship cppISteamFriends_SteamFriends017_GetFriendRelationship(void *linux_side, CSteamID steamIDFriend)
{
    EFriendRelationship _ret;
    _ret = ((ISteamFriends*)linux_side)->GetFriendRelationship((CSteamID)steamIDFriend);
    return (_ret);
}

EPersonaState cppISteamFriends_SteamFriends017_GetFriendPersonaState(void *linux_side, CSteamID steamIDFriend)
{
    EPersonaState _ret;
    _ret = ((ISteamFriends*)linux_side)->GetFriendPersonaState((CSteamID)steamIDFriend);
    return (_ret);
}

const char * cppISteamFriends_SteamFriends017_GetFriendPersonaName(void *linux_side, CSteamID steamIDFriend)
{
    const char *_ret;
    _ret = ((ISteamFriends*)linux_side)->GetFriendPersonaName((CSteamID)steamIDFriend);
    return (_ret);
}

bool cppISteamFriends_SteamFriends017_GetFriendGamePlayed(void *linux_side, CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo)
{
    bool _ret;
    _ret = ((ISteamFriends*)linux_side)->GetFriendGamePlayed((CSteamID)steamIDFriend, (FriendGameInfo_t *)pFriendGameInfo);
    return (_ret);
}

const char * cppISteamFriends_SteamFriends017_GetFriendPersonaNameHistory(void *linux_side, CSteamID steamIDFriend, int iPersonaName)
{
    const char *_ret;
    _ret = ((ISteamFriends*)linux_side)->GetFriendPersonaNameHistory((CSteamID)steamIDFriend, (int)iPersonaName);
    return (_ret);
}

int cppISteamFriends_SteamFriends017_GetFriendSteamLevel(void *linux_side, CSteamID steamIDFriend)
{
    int _ret;
    _ret = ((ISteamFriends*)linux_side)->GetFriendSteamLevel((CSteamID)steamIDFriend);
    return (_ret);
}

const char * cppISteamFriends_SteamFriends017_GetPlayerNickname(void *linux_side, CSteamID steamIDPlayer)
{
    const char *_ret;
    _ret = ((ISteamFriends*)linux_side)->GetPlayerNickname((CSteamID)steamIDPlayer);
    return (_ret);
}

int cppISteamFriends_SteamFriends017_GetFriendsGroupCount(void *linux_side)
{
    int _ret;
    _ret = ((ISteamFriends*)linux_side)->GetFriendsGroupCount();
    return (_ret);
}

FriendsGroupID_t cppISteamFriends_SteamFriends017_GetFriendsGroupIDByIndex(void *linux_side, int iFG)
{
    FriendsGroupID_t _ret;
    _ret = ((ISteamFriends*)linux_side)->GetFriendsGroupIDByIndex((int)iFG);
    return (_ret);
}

const char * cppISteamFriends_SteamFriends017_GetFriendsGroupName(void *linux_side, FriendsGroupID_t friendsGroupID)
{
    const char *_ret;
    _ret = ((ISteamFriends*)linux_side)->GetFriendsGroupName((FriendsGroupID_t)friendsGroupID);
    return (_ret);
}

int cppISteamFriends_SteamFriends017_GetFriendsGroupMembersCount(void *linux_side, FriendsGroupID_t friendsGroupID)
{
    int _ret;
    _ret = ((ISteamFriends*)linux_side)->GetFriendsGroupMembersCount((FriendsGroupID_t)friendsGroupID);
    return (_ret);
}

void cppISteamFriends_SteamFriends017_GetFriendsGroupMembersList(void *linux_side, FriendsGroupID_t friendsGroupID, CSteamID *pOutSteamIDMembers, int nMembersCount)
{
    ((ISteamFriends*)linux_side)->GetFriendsGroupMembersList((FriendsGroupID_t)friendsGroupID, (CSteamID *)pOutSteamIDMembers, (int)nMembersCount);
}

bool cppISteamFriends_SteamFriends017_HasFriend(void *linux_side, CSteamID steamIDFriend, int iFriendFlags)
{
    bool _ret;
    _ret = ((ISteamFriends*)linux_side)->HasFriend((CSteamID)steamIDFriend, (int)iFriendFlags);
    return (_ret);
}

int cppISteamFriends_SteamFriends017_GetClanCount(void *linux_side)
{
    int _ret;
    _ret = ((ISteamFriends*)linux_side)->GetClanCount();
    return (_ret);
}

CSteamID cppISteamFriends_SteamFriends017_GetClanByIndex(void *linux_side, int iClan)
{
    CSteamID _ret;
    _ret = ((ISteamFriends*)linux_side)->GetClanByIndex((int)iClan);
    return (_ret);
}

const char * cppISteamFriends_SteamFriends017_GetClanName(void *linux_side, CSteamID steamIDClan)
{
    const char *_ret;
    _ret = ((ISteamFriends*)linux_side)->GetClanName((CSteamID)steamIDClan);
    return (_ret);
}

const char * cppISteamFriends_SteamFriends017_GetClanTag(void *linux_side, CSteamID steamIDClan)
{
    const char *_ret;
    _ret = ((ISteamFriends*)linux_side)->GetClanTag((CSteamID)steamIDClan);
    return (_ret);
}

bool cppISteamFriends_SteamFriends017_GetClanActivityCounts(void *linux_side, CSteamID steamIDClan, int *pnOnline, int *pnInGame, int *pnChatting)
{
    bool _ret;
    _ret = ((ISteamFriends*)linux_side)->GetClanActivityCounts((CSteamID)steamIDClan, (int *)pnOnline, (int *)pnInGame, (int *)pnChatting);
    return (_ret);
}

SteamAPICall_t cppISteamFriends_SteamFriends017_DownloadClanActivityCounts(void *linux_side, CSteamID *psteamIDClans, int cClansToRequest)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamFriends*)linux_side)->DownloadClanActivityCounts((CSteamID *)psteamIDClans, (int)cClansToRequest);
    return (_ret);
}

int cppISteamFriends_SteamFriends017_GetFriendCountFromSource(void *linux_side, CSteamID steamIDSource)
{
    int _ret;
    _ret = ((ISteamFriends*)linux_side)->GetFriendCountFromSource((CSteamID)steamIDSource);
    return (_ret);
}

CSteamID cppISteamFriends_SteamFriends017_GetFriendFromSourceByIndex(void *linux_side, CSteamID steamIDSource, int iFriend)
{
    CSteamID _ret;
    _ret = ((ISteamFriends*)linux_side)->GetFriendFromSourceByIndex((CSteamID)steamIDSource, (int)iFriend);
    return (_ret);
}

bool cppISteamFriends_SteamFriends017_IsUserInSource(void *linux_side, CSteamID steamIDUser, CSteamID steamIDSource)
{
    bool _ret;
    _ret = ((ISteamFriends*)linux_side)->IsUserInSource((CSteamID)steamIDUser, (CSteamID)steamIDSource);
    return (_ret);
}

void cppISteamFriends_SteamFriends017_SetInGameVoiceSpeaking(void *linux_side, CSteamID steamIDUser, bool bSpeaking)
{
    ((ISteamFriends*)linux_side)->SetInGameVoiceSpeaking((CSteamID)steamIDUser, (bool)bSpeaking);
}

void cppISteamFriends_SteamFriends017_ActivateGameOverlay(void *linux_side, const char *pchDialog)
{
    ((ISteamFriends*)linux_side)->ActivateGameOverlay((const char *)pchDialog);
}

void cppISteamFriends_SteamFriends017_ActivateGameOverlayToUser(void *linux_side, const char *pchDialog, CSteamID steamID)
{
    ((ISteamFriends*)linux_side)->ActivateGameOverlayToUser((const char *)pchDialog, (CSteamID)steamID);
}

void cppISteamFriends_SteamFriends017_ActivateGameOverlayToWebPage(void *linux_side, const char *pchURL, EActivateGameOverlayToWebPageMode eMode)
{
    ((ISteamFriends*)linux_side)->ActivateGameOverlayToWebPage((const char *)pchURL, (EActivateGameOverlayToWebPageMode)eMode);
}

void cppISteamFriends_SteamFriends017_ActivateGameOverlayToStore(void *linux_side, AppId_t nAppID, EOverlayToStoreFlag eFlag)
{
    ((ISteamFriends*)linux_side)->ActivateGameOverlayToStore((AppId_t)nAppID, (EOverlayToStoreFlag)eFlag);
}

void cppISteamFriends_SteamFriends017_SetPlayedWith(void *linux_side, CSteamID steamIDUserPlayedWith)
{
    ((ISteamFriends*)linux_side)->SetPlayedWith((CSteamID)steamIDUserPlayedWith);
}

void cppISteamFriends_SteamFriends017_ActivateGameOverlayInviteDialog(void *linux_side, CSteamID steamIDLobby)
{
    ((ISteamFriends*)linux_side)->ActivateGameOverlayInviteDialog((CSteamID)steamIDLobby);
}

int cppISteamFriends_SteamFriends017_GetSmallFriendAvatar(void *linux_side, CSteamID steamIDFriend)
{
    int _ret;
    _ret = ((ISteamFriends*)linux_side)->GetSmallFriendAvatar((CSteamID)steamIDFriend);
    return (_ret);
}

int cppISteamFriends_SteamFriends017_GetMediumFriendAvatar(void *linux_side, CSteamID steamIDFriend)
{
    int _ret;
    _ret = ((ISteamFriends*)linux_side)->GetMediumFriendAvatar((CSteamID)steamIDFriend);
    return (_ret);
}

int cppISteamFriends_SteamFriends017_GetLargeFriendAvatar(void *linux_side, CSteamID steamIDFriend)
{
    int _ret;
    _ret = ((ISteamFriends*)linux_side)->GetLargeFriendAvatar((CSteamID)steamIDFriend);
    return (_ret);
}

bool cppISteamFriends_SteamFriends017_RequestUserInformation(void *linux_side, CSteamID steamIDUser, bool bRequireNameOnly)
{
    bool _ret;
    _ret = ((ISteamFriends*)linux_side)->RequestUserInformation((CSteamID)steamIDUser, (bool)bRequireNameOnly);
    return (_ret);
}

SteamAPICall_t cppISteamFriends_SteamFriends017_RequestClanOfficerList(void *linux_side, CSteamID steamIDClan)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamFriends*)linux_side)->RequestClanOfficerList((CSteamID)steamIDClan);
    return (_ret);
}

CSteamID cppISteamFriends_SteamFriends017_GetClanOwner(void *linux_side, CSteamID steamIDClan)
{
    CSteamID _ret;
    _ret = ((ISteamFriends*)linux_side)->GetClanOwner((CSteamID)steamIDClan);
    return (_ret);
}

int cppISteamFriends_SteamFriends017_GetClanOfficerCount(void *linux_side, CSteamID steamIDClan)
{
    int _ret;
    _ret = ((ISteamFriends*)linux_side)->GetClanOfficerCount((CSteamID)steamIDClan);
    return (_ret);
}

CSteamID cppISteamFriends_SteamFriends017_GetClanOfficerByIndex(void *linux_side, CSteamID steamIDClan, int iOfficer)
{
    CSteamID _ret;
    _ret = ((ISteamFriends*)linux_side)->GetClanOfficerByIndex((CSteamID)steamIDClan, (int)iOfficer);
    return (_ret);
}

uint32 cppISteamFriends_SteamFriends017_GetUserRestrictions(void *linux_side)
{
    uint32 _ret;
    _ret = ((ISteamFriends*)linux_side)->GetUserRestrictions();
    return (_ret);
}

bool cppISteamFriends_SteamFriends017_SetRichPresence(void *linux_side, const char *pchKey, const char *pchValue)
{
    bool _ret;
    _ret = ((ISteamFriends*)linux_side)->SetRichPresence((const char *)pchKey, (const char *)pchValue);
    return (_ret);
}

void cppISteamFriends_SteamFriends017_ClearRichPresence(void *linux_side)
{
    ((ISteamFriends*)linux_side)->ClearRichPresence();
}

const char * cppISteamFriends_SteamFriends017_GetFriendRichPresence(void *linux_side, CSteamID steamIDFriend, const char *pchKey)
{
    const char *_ret;
    _ret = ((ISteamFriends*)linux_side)->GetFriendRichPresence((CSteamID)steamIDFriend, (const char *)pchKey);
    return (_ret);
}

int cppISteamFriends_SteamFriends017_GetFriendRichPresenceKeyCount(void *linux_side, CSteamID steamIDFriend)
{
    int _ret;
    _ret = ((ISteamFriends*)linux_side)->GetFriendRichPresenceKeyCount((CSteamID)steamIDFriend);
    return (_ret);
}

const char * cppISteamFriends_SteamFriends017_GetFriendRichPresenceKeyByIndex(void *linux_side, CSteamID steamIDFriend, int iKey)
{
    const char *_ret;
    _ret = ((ISteamFriends*)linux_side)->GetFriendRichPresenceKeyByIndex((CSteamID)steamIDFriend, (int)iKey);
    return (_ret);
}

void cppISteamFriends_SteamFriends017_RequestFriendRichPresence(void *linux_side, CSteamID steamIDFriend)
{
    ((ISteamFriends*)linux_side)->RequestFriendRichPresence((CSteamID)steamIDFriend);
}

bool cppISteamFriends_SteamFriends017_InviteUserToGame(void *linux_side, CSteamID steamIDFriend, const char *pchConnectString)
{
    bool _ret;
    _ret = ((ISteamFriends*)linux_side)->InviteUserToGame((CSteamID)steamIDFriend, (const char *)pchConnectString);
    return (_ret);
}

int cppISteamFriends_SteamFriends017_GetCoplayFriendCount(void *linux_side)
{
    int _ret;
    _ret = ((ISteamFriends*)linux_side)->GetCoplayFriendCount();
    return (_ret);
}

CSteamID cppISteamFriends_SteamFriends017_GetCoplayFriend(void *linux_side, int iCoplayFriend)
{
    CSteamID _ret;
    _ret = ((ISteamFriends*)linux_side)->GetCoplayFriend((int)iCoplayFriend);
    return (_ret);
}

int cppISteamFriends_SteamFriends017_GetFriendCoplayTime(void *linux_side, CSteamID steamIDFriend)
{
    int _ret;
    _ret = ((ISteamFriends*)linux_side)->GetFriendCoplayTime((CSteamID)steamIDFriend);
    return (_ret);
}

AppId_t cppISteamFriends_SteamFriends017_GetFriendCoplayGame(void *linux_side, CSteamID steamIDFriend)
{
    AppId_t _ret;
    _ret = ((ISteamFriends*)linux_side)->GetFriendCoplayGame((CSteamID)steamIDFriend);
    return (_ret);
}

SteamAPICall_t cppISteamFriends_SteamFriends017_JoinClanChatRoom(void *linux_side, CSteamID steamIDClan)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamFriends*)linux_side)->JoinClanChatRoom((CSteamID)steamIDClan);
    return (_ret);
}

bool cppISteamFriends_SteamFriends017_LeaveClanChatRoom(void *linux_side, CSteamID steamIDClan)
{
    bool _ret;
    _ret = ((ISteamFriends*)linux_side)->LeaveClanChatRoom((CSteamID)steamIDClan);
    return (_ret);
}

int cppISteamFriends_SteamFriends017_GetClanChatMemberCount(void *linux_side, CSteamID steamIDClan)
{
    int _ret;
    _ret = ((ISteamFriends*)linux_side)->GetClanChatMemberCount((CSteamID)steamIDClan);
    return (_ret);
}

CSteamID cppISteamFriends_SteamFriends017_GetChatMemberByIndex(void *linux_side, CSteamID steamIDClan, int iUser)
{
    CSteamID _ret;
    _ret = ((ISteamFriends*)linux_side)->GetChatMemberByIndex((CSteamID)steamIDClan, (int)iUser);
    return (_ret);
}

bool cppISteamFriends_SteamFriends017_SendClanChatMessage(void *linux_side, CSteamID steamIDClanChat, const char *pchText)
{
    bool _ret;
    _ret = ((ISteamFriends*)linux_side)->SendClanChatMessage((CSteamID)steamIDClanChat, (const char *)pchText);
    return (_ret);
}

int cppISteamFriends_SteamFriends017_GetClanChatMessage(void *linux_side, CSteamID steamIDClanChat, int iMessage, void *prgchText, int cchTextMax, EChatEntryType *peChatEntryType, CSteamID *psteamidChatter)
{
    int _ret;
    _ret = ((ISteamFriends*)linux_side)->GetClanChatMessage((CSteamID)steamIDClanChat, (int)iMessage, (void *)prgchText, (int)cchTextMax, (EChatEntryType *)peChatEntryType, (CSteamID *)psteamidChatter);
    return (_ret);
}

bool cppISteamFriends_SteamFriends017_IsClanChatAdmin(void *linux_side, CSteamID steamIDClanChat, CSteamID steamIDUser)
{
    bool _ret;
    _ret = ((ISteamFriends*)linux_side)->IsClanChatAdmin((CSteamID)steamIDClanChat, (CSteamID)steamIDUser);
    return (_ret);
}

bool cppISteamFriends_SteamFriends017_IsClanChatWindowOpenInSteam(void *linux_side, CSteamID steamIDClanChat)
{
    bool _ret;
    _ret = ((ISteamFriends*)linux_side)->IsClanChatWindowOpenInSteam((CSteamID)steamIDClanChat);
    return (_ret);
}

bool cppISteamFriends_SteamFriends017_OpenClanChatWindowInSteam(void *linux_side, CSteamID steamIDClanChat)
{
    bool _ret;
    _ret = ((ISteamFriends*)linux_side)->OpenClanChatWindowInSteam((CSteamID)steamIDClanChat);
    return (_ret);
}

bool cppISteamFriends_SteamFriends017_CloseClanChatWindowInSteam(void *linux_side, CSteamID steamIDClanChat)
{
    bool _ret;
    _ret = ((ISteamFriends*)linux_side)->CloseClanChatWindowInSteam((CSteamID)steamIDClanChat);
    return (_ret);
}

bool cppISteamFriends_SteamFriends017_SetListenForFriendsMessages(void *linux_side, bool bInterceptEnabled)
{
    bool _ret;
    _ret = ((ISteamFriends*)linux_side)->SetListenForFriendsMessages((bool)bInterceptEnabled);
    return (_ret);
}

bool cppISteamFriends_SteamFriends017_ReplyToFriendMessage(void *linux_side, CSteamID steamIDFriend, const char *pchMsgToSend)
{
    bool _ret;
    _ret = ((ISteamFriends*)linux_side)->ReplyToFriendMessage((CSteamID)steamIDFriend, (const char *)pchMsgToSend);
    return (_ret);
}

int cppISteamFriends_SteamFriends017_GetFriendMessage(void *linux_side, CSteamID steamIDFriend, int iMessageID, void *pvData, int cubData, EChatEntryType *peChatEntryType)
{
    int _ret;
    _ret = ((ISteamFriends*)linux_side)->GetFriendMessage((CSteamID)steamIDFriend, (int)iMessageID, (void *)pvData, (int)cubData, (EChatEntryType *)peChatEntryType);
    return (_ret);
}

SteamAPICall_t cppISteamFriends_SteamFriends017_GetFollowerCount(void *linux_side, CSteamID steamID)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamFriends*)linux_side)->GetFollowerCount((CSteamID)steamID);
    return (_ret);
}

SteamAPICall_t cppISteamFriends_SteamFriends017_IsFollowing(void *linux_side, CSteamID steamID)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamFriends*)linux_side)->IsFollowing((CSteamID)steamID);
    return (_ret);
}

SteamAPICall_t cppISteamFriends_SteamFriends017_EnumerateFollowingList(void *linux_side, uint32 unStartIndex)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamFriends*)linux_side)->EnumerateFollowingList((uint32)unStartIndex);
    return (_ret);
}

bool cppISteamFriends_SteamFriends017_IsClanPublic(void *linux_side, CSteamID steamIDClan)
{
    bool _ret;
    _ret = ((ISteamFriends*)linux_side)->IsClanPublic((CSteamID)steamIDClan);
    return (_ret);
}

bool cppISteamFriends_SteamFriends017_IsClanOfficialGameGroup(void *linux_side, CSteamID steamIDClan)
{
    bool _ret;
    _ret = ((ISteamFriends*)linux_side)->IsClanOfficialGameGroup((CSteamID)steamIDClan);
    return (_ret);
}

int cppISteamFriends_SteamFriends017_GetNumChatsWithUnreadPriorityMessages(void *linux_side)
{
    int _ret;
    _ret = ((ISteamFriends*)linux_side)->GetNumChatsWithUnreadPriorityMessages();
    return (_ret);
}

void cppISteamFriends_SteamFriends017_ActivateGameOverlayRemotePlayTogetherInviteDialog(void *linux_side, CSteamID steamIDLobby)
{
    ((ISteamFriends*)linux_side)->ActivateGameOverlayRemotePlayTogetherInviteDialog((CSteamID)steamIDLobby);
}

bool cppISteamFriends_SteamFriends017_RegisterProtocolInOverlayBrowser(void *linux_side, const char *pchProtocol)
{
    bool _ret;
    _ret = ((ISteamFriends*)linux_side)->RegisterProtocolInOverlayBrowser((const char *)pchProtocol);
    return (_ret);
}

void cppISteamFriends_SteamFriends017_ActivateGameOverlayInviteDialogConnectString(void *linux_side, const char *pchConnectString)
{
    ((ISteamFriends*)linux_side)->ActivateGameOverlayInviteDialogConnectString((const char *)pchConnectString);
}

SteamAPICall_t cppISteamFriends_SteamFriends017_RequestEquippedProfileItems(void *linux_side, CSteamID steamID)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamFriends*)linux_side)->RequestEquippedProfileItems((CSteamID)steamID);
    return (_ret);
}

bool cppISteamFriends_SteamFriends017_BHasEquippedProfileItem(void *linux_side, CSteamID steamID, ECommunityProfileItemType itemType)
{
    bool _ret;
    _ret = ((ISteamFriends*)linux_side)->BHasEquippedProfileItem((CSteamID)steamID, (ECommunityProfileItemType)itemType);
    return (_ret);
}

const char * cppISteamFriends_SteamFriends017_GetProfileItemPropertyString(void *linux_side, CSteamID steamID, ECommunityProfileItemType itemType, ECommunityProfileItemProperty prop)
{
    const char *_ret;
    _ret = ((ISteamFriends*)linux_side)->GetProfileItemPropertyString((CSteamID)steamID, (ECommunityProfileItemType)itemType, (ECommunityProfileItemProperty)prop);
    return (_ret);
}

uint32 cppISteamFriends_SteamFriends017_GetProfileItemPropertyUint(void *linux_side, CSteamID steamID, ECommunityProfileItemType itemType, ECommunityProfileItemProperty prop)
{
    uint32 _ret;
    _ret = ((ISteamFriends*)linux_side)->GetProfileItemPropertyUint((CSteamID)steamID, (ECommunityProfileItemType)itemType, (ECommunityProfileItemProperty)prop);
    return (_ret);
}

#ifdef __cplusplus
}
#endif
