/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "cxx.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamFriends_SteamFriends017.h"

typedef struct __winISteamFriends_SteamFriends017 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamFriends_SteamFriends017;

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetPersonaName, 4)
const char * __thiscall winISteamFriends_SteamFriends017_GetPersonaName(winISteamFriends_SteamFriends017 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_GetPersonaName(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_SetPersonaName, 8)
SteamAPICall_t __thiscall winISteamFriends_SteamFriends017_SetPersonaName(winISteamFriends_SteamFriends017 *_this, const char * pchPersonaName)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_SetPersonaName(_this->linux_side, pchPersonaName);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetPersonaState, 4)
EPersonaState __thiscall winISteamFriends_SteamFriends017_GetPersonaState(winISteamFriends_SteamFriends017 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_GetPersonaState(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetFriendCount, 8)
int __thiscall winISteamFriends_SteamFriends017_GetFriendCount(winISteamFriends_SteamFriends017 *_this, int iFriendFlags)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_GetFriendCount(_this->linux_side, iFriendFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetFriendByIndex, 16)
CSteamID *__thiscall winISteamFriends_SteamFriends017_GetFriendByIndex(winISteamFriends_SteamFriends017 *_this, CSteamID *_r, int iFriend, int iFriendFlags)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends017_GetFriendByIndex(_this->linux_side, iFriend, iFriendFlags);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetFriendRelationship, 12)
EFriendRelationship __thiscall winISteamFriends_SteamFriends017_GetFriendRelationship(winISteamFriends_SteamFriends017 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_GetFriendRelationship(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetFriendPersonaState, 12)
EPersonaState __thiscall winISteamFriends_SteamFriends017_GetFriendPersonaState(winISteamFriends_SteamFriends017 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_GetFriendPersonaState(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetFriendPersonaName, 12)
const char * __thiscall winISteamFriends_SteamFriends017_GetFriendPersonaName(winISteamFriends_SteamFriends017 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_GetFriendPersonaName(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetFriendGamePlayed, 16)
bool __thiscall winISteamFriends_SteamFriends017_GetFriendGamePlayed(winISteamFriends_SteamFriends017 *_this, CSteamID steamIDFriend, FriendGameInfo_t * pFriendGameInfo)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_GetFriendGamePlayed(_this->linux_side, steamIDFriend, pFriendGameInfo);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetFriendPersonaNameHistory, 16)
const char * __thiscall winISteamFriends_SteamFriends017_GetFriendPersonaNameHistory(winISteamFriends_SteamFriends017 *_this, CSteamID steamIDFriend, int iPersonaName)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_GetFriendPersonaNameHistory(_this->linux_side, steamIDFriend, iPersonaName);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetFriendSteamLevel, 12)
int __thiscall winISteamFriends_SteamFriends017_GetFriendSteamLevel(winISteamFriends_SteamFriends017 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_GetFriendSteamLevel(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetPlayerNickname, 12)
const char * __thiscall winISteamFriends_SteamFriends017_GetPlayerNickname(winISteamFriends_SteamFriends017 *_this, CSteamID steamIDPlayer)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_GetPlayerNickname(_this->linux_side, steamIDPlayer);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetFriendsGroupCount, 4)
int __thiscall winISteamFriends_SteamFriends017_GetFriendsGroupCount(winISteamFriends_SteamFriends017 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_GetFriendsGroupCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetFriendsGroupIDByIndex, 8)
FriendsGroupID_t __thiscall winISteamFriends_SteamFriends017_GetFriendsGroupIDByIndex(winISteamFriends_SteamFriends017 *_this, int iFG)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_GetFriendsGroupIDByIndex(_this->linux_side, iFG);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetFriendsGroupName, 8)
const char * __thiscall winISteamFriends_SteamFriends017_GetFriendsGroupName(winISteamFriends_SteamFriends017 *_this, FriendsGroupID_t friendsGroupID)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_GetFriendsGroupName(_this->linux_side, friendsGroupID);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetFriendsGroupMembersCount, 8)
int __thiscall winISteamFriends_SteamFriends017_GetFriendsGroupMembersCount(winISteamFriends_SteamFriends017 *_this, FriendsGroupID_t friendsGroupID)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_GetFriendsGroupMembersCount(_this->linux_side, friendsGroupID);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetFriendsGroupMembersList, 16)
void __thiscall winISteamFriends_SteamFriends017_GetFriendsGroupMembersList(winISteamFriends_SteamFriends017 *_this, FriendsGroupID_t friendsGroupID, CSteamID * pOutSteamIDMembers, int nMembersCount)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends017_GetFriendsGroupMembersList(_this->linux_side, friendsGroupID, pOutSteamIDMembers, nMembersCount);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_HasFriend, 16)
bool __thiscall winISteamFriends_SteamFriends017_HasFriend(winISteamFriends_SteamFriends017 *_this, CSteamID steamIDFriend, int iFriendFlags)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_HasFriend(_this->linux_side, steamIDFriend, iFriendFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetClanCount, 4)
int __thiscall winISteamFriends_SteamFriends017_GetClanCount(winISteamFriends_SteamFriends017 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_GetClanCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetClanByIndex, 12)
CSteamID *__thiscall winISteamFriends_SteamFriends017_GetClanByIndex(winISteamFriends_SteamFriends017 *_this, CSteamID *_r, int iClan)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends017_GetClanByIndex(_this->linux_side, iClan);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetClanName, 12)
const char * __thiscall winISteamFriends_SteamFriends017_GetClanName(winISteamFriends_SteamFriends017 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_GetClanName(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetClanTag, 12)
const char * __thiscall winISteamFriends_SteamFriends017_GetClanTag(winISteamFriends_SteamFriends017 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_GetClanTag(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetClanActivityCounts, 24)
bool __thiscall winISteamFriends_SteamFriends017_GetClanActivityCounts(winISteamFriends_SteamFriends017 *_this, CSteamID steamIDClan, int * pnOnline, int * pnInGame, int * pnChatting)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_GetClanActivityCounts(_this->linux_side, steamIDClan, pnOnline, pnInGame, pnChatting);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_DownloadClanActivityCounts, 12)
SteamAPICall_t __thiscall winISteamFriends_SteamFriends017_DownloadClanActivityCounts(winISteamFriends_SteamFriends017 *_this, CSteamID * psteamIDClans, int cClansToRequest)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_DownloadClanActivityCounts(_this->linux_side, psteamIDClans, cClansToRequest);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetFriendCountFromSource, 12)
int __thiscall winISteamFriends_SteamFriends017_GetFriendCountFromSource(winISteamFriends_SteamFriends017 *_this, CSteamID steamIDSource)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_GetFriendCountFromSource(_this->linux_side, steamIDSource);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetFriendFromSourceByIndex, 20)
CSteamID *__thiscall winISteamFriends_SteamFriends017_GetFriendFromSourceByIndex(winISteamFriends_SteamFriends017 *_this, CSteamID *_r, CSteamID steamIDSource, int iFriend)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends017_GetFriendFromSourceByIndex(_this->linux_side, steamIDSource, iFriend);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_IsUserInSource, 20)
bool __thiscall winISteamFriends_SteamFriends017_IsUserInSource(winISteamFriends_SteamFriends017 *_this, CSteamID steamIDUser, CSteamID steamIDSource)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_IsUserInSource(_this->linux_side, steamIDUser, steamIDSource);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_SetInGameVoiceSpeaking, 16)
void __thiscall winISteamFriends_SteamFriends017_SetInGameVoiceSpeaking(winISteamFriends_SteamFriends017 *_this, CSteamID steamIDUser, bool bSpeaking)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends017_SetInGameVoiceSpeaking(_this->linux_side, steamIDUser, bSpeaking);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_ActivateGameOverlay, 8)
void __thiscall winISteamFriends_SteamFriends017_ActivateGameOverlay(winISteamFriends_SteamFriends017 *_this, const char * pchDialog)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends017_ActivateGameOverlay(_this->linux_side, pchDialog);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_ActivateGameOverlayToUser, 16)
void __thiscall winISteamFriends_SteamFriends017_ActivateGameOverlayToUser(winISteamFriends_SteamFriends017 *_this, const char * pchDialog, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends017_ActivateGameOverlayToUser(_this->linux_side, pchDialog, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_ActivateGameOverlayToWebPage, 12)
void __thiscall winISteamFriends_SteamFriends017_ActivateGameOverlayToWebPage(winISteamFriends_SteamFriends017 *_this, const char * pchURL, EActivateGameOverlayToWebPageMode eMode)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends017_ActivateGameOverlayToWebPage(_this->linux_side, pchURL, eMode);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_ActivateGameOverlayToStore, 12)
void __thiscall winISteamFriends_SteamFriends017_ActivateGameOverlayToStore(winISteamFriends_SteamFriends017 *_this, AppId_t nAppID, EOverlayToStoreFlag eFlag)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends017_ActivateGameOverlayToStore(_this->linux_side, nAppID, eFlag);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_SetPlayedWith, 12)
void __thiscall winISteamFriends_SteamFriends017_SetPlayedWith(winISteamFriends_SteamFriends017 *_this, CSteamID steamIDUserPlayedWith)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends017_SetPlayedWith(_this->linux_side, steamIDUserPlayedWith);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_ActivateGameOverlayInviteDialog, 12)
void __thiscall winISteamFriends_SteamFriends017_ActivateGameOverlayInviteDialog(winISteamFriends_SteamFriends017 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends017_ActivateGameOverlayInviteDialog(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetSmallFriendAvatar, 12)
int __thiscall winISteamFriends_SteamFriends017_GetSmallFriendAvatar(winISteamFriends_SteamFriends017 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_GetSmallFriendAvatar(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetMediumFriendAvatar, 12)
int __thiscall winISteamFriends_SteamFriends017_GetMediumFriendAvatar(winISteamFriends_SteamFriends017 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_GetMediumFriendAvatar(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetLargeFriendAvatar, 12)
int __thiscall winISteamFriends_SteamFriends017_GetLargeFriendAvatar(winISteamFriends_SteamFriends017 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_GetLargeFriendAvatar(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_RequestUserInformation, 16)
bool __thiscall winISteamFriends_SteamFriends017_RequestUserInformation(winISteamFriends_SteamFriends017 *_this, CSteamID steamIDUser, bool bRequireNameOnly)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_RequestUserInformation(_this->linux_side, steamIDUser, bRequireNameOnly);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_RequestClanOfficerList, 12)
SteamAPICall_t __thiscall winISteamFriends_SteamFriends017_RequestClanOfficerList(winISteamFriends_SteamFriends017 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_RequestClanOfficerList(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetClanOwner, 16)
CSteamID *__thiscall winISteamFriends_SteamFriends017_GetClanOwner(winISteamFriends_SteamFriends017 *_this, CSteamID *_r, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends017_GetClanOwner(_this->linux_side, steamIDClan);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetClanOfficerCount, 12)
int __thiscall winISteamFriends_SteamFriends017_GetClanOfficerCount(winISteamFriends_SteamFriends017 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_GetClanOfficerCount(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetClanOfficerByIndex, 20)
CSteamID *__thiscall winISteamFriends_SteamFriends017_GetClanOfficerByIndex(winISteamFriends_SteamFriends017 *_this, CSteamID *_r, CSteamID steamIDClan, int iOfficer)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends017_GetClanOfficerByIndex(_this->linux_side, steamIDClan, iOfficer);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetUserRestrictions, 4)
uint32 __thiscall winISteamFriends_SteamFriends017_GetUserRestrictions(winISteamFriends_SteamFriends017 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_GetUserRestrictions(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_SetRichPresence, 12)
bool __thiscall winISteamFriends_SteamFriends017_SetRichPresence(winISteamFriends_SteamFriends017 *_this, const char * pchKey, const char * pchValue)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_SetRichPresence(_this->linux_side, pchKey, pchValue);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_ClearRichPresence, 4)
void __thiscall winISteamFriends_SteamFriends017_ClearRichPresence(winISteamFriends_SteamFriends017 *_this)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends017_ClearRichPresence(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetFriendRichPresence, 16)
const char * __thiscall winISteamFriends_SteamFriends017_GetFriendRichPresence(winISteamFriends_SteamFriends017 *_this, CSteamID steamIDFriend, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_GetFriendRichPresence(_this->linux_side, steamIDFriend, pchKey);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetFriendRichPresenceKeyCount, 12)
int __thiscall winISteamFriends_SteamFriends017_GetFriendRichPresenceKeyCount(winISteamFriends_SteamFriends017 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_GetFriendRichPresenceKeyCount(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetFriendRichPresenceKeyByIndex, 16)
const char * __thiscall winISteamFriends_SteamFriends017_GetFriendRichPresenceKeyByIndex(winISteamFriends_SteamFriends017 *_this, CSteamID steamIDFriend, int iKey)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_GetFriendRichPresenceKeyByIndex(_this->linux_side, steamIDFriend, iKey);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_RequestFriendRichPresence, 12)
void __thiscall winISteamFriends_SteamFriends017_RequestFriendRichPresence(winISteamFriends_SteamFriends017 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends017_RequestFriendRichPresence(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_InviteUserToGame, 16)
bool __thiscall winISteamFriends_SteamFriends017_InviteUserToGame(winISteamFriends_SteamFriends017 *_this, CSteamID steamIDFriend, const char * pchConnectString)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_InviteUserToGame(_this->linux_side, steamIDFriend, pchConnectString);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetCoplayFriendCount, 4)
int __thiscall winISteamFriends_SteamFriends017_GetCoplayFriendCount(winISteamFriends_SteamFriends017 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_GetCoplayFriendCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetCoplayFriend, 12)
CSteamID *__thiscall winISteamFriends_SteamFriends017_GetCoplayFriend(winISteamFriends_SteamFriends017 *_this, CSteamID *_r, int iCoplayFriend)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends017_GetCoplayFriend(_this->linux_side, iCoplayFriend);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetFriendCoplayTime, 12)
int __thiscall winISteamFriends_SteamFriends017_GetFriendCoplayTime(winISteamFriends_SteamFriends017 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_GetFriendCoplayTime(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetFriendCoplayGame, 12)
AppId_t __thiscall winISteamFriends_SteamFriends017_GetFriendCoplayGame(winISteamFriends_SteamFriends017 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_GetFriendCoplayGame(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_JoinClanChatRoom, 12)
SteamAPICall_t __thiscall winISteamFriends_SteamFriends017_JoinClanChatRoom(winISteamFriends_SteamFriends017 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_JoinClanChatRoom(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_LeaveClanChatRoom, 12)
bool __thiscall winISteamFriends_SteamFriends017_LeaveClanChatRoom(winISteamFriends_SteamFriends017 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_LeaveClanChatRoom(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetClanChatMemberCount, 12)
int __thiscall winISteamFriends_SteamFriends017_GetClanChatMemberCount(winISteamFriends_SteamFriends017 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_GetClanChatMemberCount(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetChatMemberByIndex, 20)
CSteamID *__thiscall winISteamFriends_SteamFriends017_GetChatMemberByIndex(winISteamFriends_SteamFriends017 *_this, CSteamID *_r, CSteamID steamIDClan, int iUser)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends017_GetChatMemberByIndex(_this->linux_side, steamIDClan, iUser);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_SendClanChatMessage, 16)
bool __thiscall winISteamFriends_SteamFriends017_SendClanChatMessage(winISteamFriends_SteamFriends017 *_this, CSteamID steamIDClanChat, const char * pchText)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_SendClanChatMessage(_this->linux_side, steamIDClanChat, pchText);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetClanChatMessage, 32)
int __thiscall winISteamFriends_SteamFriends017_GetClanChatMessage(winISteamFriends_SteamFriends017 *_this, CSteamID steamIDClanChat, int iMessage, void * prgchText, int cchTextMax, EChatEntryType * peChatEntryType, CSteamID * psteamidChatter)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_GetClanChatMessage(_this->linux_side, steamIDClanChat, iMessage, prgchText, cchTextMax, peChatEntryType, psteamidChatter);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_IsClanChatAdmin, 20)
bool __thiscall winISteamFriends_SteamFriends017_IsClanChatAdmin(winISteamFriends_SteamFriends017 *_this, CSteamID steamIDClanChat, CSteamID steamIDUser)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_IsClanChatAdmin(_this->linux_side, steamIDClanChat, steamIDUser);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_IsClanChatWindowOpenInSteam, 12)
bool __thiscall winISteamFriends_SteamFriends017_IsClanChatWindowOpenInSteam(winISteamFriends_SteamFriends017 *_this, CSteamID steamIDClanChat)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_IsClanChatWindowOpenInSteam(_this->linux_side, steamIDClanChat);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_OpenClanChatWindowInSteam, 12)
bool __thiscall winISteamFriends_SteamFriends017_OpenClanChatWindowInSteam(winISteamFriends_SteamFriends017 *_this, CSteamID steamIDClanChat)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_OpenClanChatWindowInSteam(_this->linux_side, steamIDClanChat);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_CloseClanChatWindowInSteam, 12)
bool __thiscall winISteamFriends_SteamFriends017_CloseClanChatWindowInSteam(winISteamFriends_SteamFriends017 *_this, CSteamID steamIDClanChat)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_CloseClanChatWindowInSteam(_this->linux_side, steamIDClanChat);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_SetListenForFriendsMessages, 8)
bool __thiscall winISteamFriends_SteamFriends017_SetListenForFriendsMessages(winISteamFriends_SteamFriends017 *_this, bool bInterceptEnabled)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_SetListenForFriendsMessages(_this->linux_side, bInterceptEnabled);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_ReplyToFriendMessage, 16)
bool __thiscall winISteamFriends_SteamFriends017_ReplyToFriendMessage(winISteamFriends_SteamFriends017 *_this, CSteamID steamIDFriend, const char * pchMsgToSend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_ReplyToFriendMessage(_this->linux_side, steamIDFriend, pchMsgToSend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetFriendMessage, 28)
int __thiscall winISteamFriends_SteamFriends017_GetFriendMessage(winISteamFriends_SteamFriends017 *_this, CSteamID steamIDFriend, int iMessageID, void * pvData, int cubData, EChatEntryType * peChatEntryType)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_GetFriendMessage(_this->linux_side, steamIDFriend, iMessageID, pvData, cubData, peChatEntryType);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetFollowerCount, 12)
SteamAPICall_t __thiscall winISteamFriends_SteamFriends017_GetFollowerCount(winISteamFriends_SteamFriends017 *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_GetFollowerCount(_this->linux_side, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_IsFollowing, 12)
SteamAPICall_t __thiscall winISteamFriends_SteamFriends017_IsFollowing(winISteamFriends_SteamFriends017 *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_IsFollowing(_this->linux_side, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_EnumerateFollowingList, 8)
SteamAPICall_t __thiscall winISteamFriends_SteamFriends017_EnumerateFollowingList(winISteamFriends_SteamFriends017 *_this, uint32 unStartIndex)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_EnumerateFollowingList(_this->linux_side, unStartIndex);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_IsClanPublic, 12)
bool __thiscall winISteamFriends_SteamFriends017_IsClanPublic(winISteamFriends_SteamFriends017 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_IsClanPublic(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_IsClanOfficialGameGroup, 12)
bool __thiscall winISteamFriends_SteamFriends017_IsClanOfficialGameGroup(winISteamFriends_SteamFriends017 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_IsClanOfficialGameGroup(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetNumChatsWithUnreadPriorityMessages, 4)
int __thiscall winISteamFriends_SteamFriends017_GetNumChatsWithUnreadPriorityMessages(winISteamFriends_SteamFriends017 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_GetNumChatsWithUnreadPriorityMessages(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_ActivateGameOverlayRemotePlayTogetherInviteDialog, 12)
void __thiscall winISteamFriends_SteamFriends017_ActivateGameOverlayRemotePlayTogetherInviteDialog(winISteamFriends_SteamFriends017 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends017_ActivateGameOverlayRemotePlayTogetherInviteDialog(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_RegisterProtocolInOverlayBrowser, 8)
bool __thiscall winISteamFriends_SteamFriends017_RegisterProtocolInOverlayBrowser(winISteamFriends_SteamFriends017 *_this, const char * pchProtocol)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_RegisterProtocolInOverlayBrowser(_this->linux_side, pchProtocol);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_ActivateGameOverlayInviteDialogConnectString, 8)
void __thiscall winISteamFriends_SteamFriends017_ActivateGameOverlayInviteDialogConnectString(winISteamFriends_SteamFriends017 *_this, const char * pchConnectString)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends017_ActivateGameOverlayInviteDialogConnectString(_this->linux_side, pchConnectString);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_RequestEquippedProfileItems, 12)
SteamAPICall_t __thiscall winISteamFriends_SteamFriends017_RequestEquippedProfileItems(winISteamFriends_SteamFriends017 *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_RequestEquippedProfileItems(_this->linux_side, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_BHasEquippedProfileItem, 16)
bool __thiscall winISteamFriends_SteamFriends017_BHasEquippedProfileItem(winISteamFriends_SteamFriends017 *_this, CSteamID steamID, ECommunityProfileItemType itemType)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_BHasEquippedProfileItem(_this->linux_side, steamID, itemType);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetProfileItemPropertyString, 20)
const char * __thiscall winISteamFriends_SteamFriends017_GetProfileItemPropertyString(winISteamFriends_SteamFriends017 *_this, CSteamID steamID, ECommunityProfileItemType itemType, ECommunityProfileItemProperty prop)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_GetProfileItemPropertyString(_this->linux_side, steamID, itemType, prop);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetProfileItemPropertyUint, 20)
uint32 __thiscall winISteamFriends_SteamFriends017_GetProfileItemPropertyUint(winISteamFriends_SteamFriends017 *_this, CSteamID steamID, ECommunityProfileItemType itemType, ECommunityProfileItemProperty prop)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends017_GetProfileItemPropertyUint(_this->linux_side, steamID, itemType, prop);
}

extern vtable_ptr winISteamFriends_SteamFriends017_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamFriends_SteamFriends017,
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_SetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetFriendByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetFriendRelationship)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetFriendPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetFriendPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetFriendGamePlayed)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetFriendPersonaNameHistory)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetFriendSteamLevel)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetPlayerNickname)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetFriendsGroupCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetFriendsGroupIDByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetFriendsGroupName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetFriendsGroupMembersCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetFriendsGroupMembersList)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_HasFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetClanCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetClanByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetClanName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetClanTag)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetClanActivityCounts)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_DownloadClanActivityCounts)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetFriendCountFromSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetFriendFromSourceByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_IsUserInSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_SetInGameVoiceSpeaking)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_ActivateGameOverlay)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_ActivateGameOverlayToUser)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_ActivateGameOverlayToWebPage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_ActivateGameOverlayToStore)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_SetPlayedWith)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_ActivateGameOverlayInviteDialog)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetSmallFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetMediumFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetLargeFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_RequestUserInformation)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_RequestClanOfficerList)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetClanOwner)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetClanOfficerCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetClanOfficerByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetUserRestrictions)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_SetRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_ClearRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetFriendRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetFriendRichPresenceKeyCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetFriendRichPresenceKeyByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_RequestFriendRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_InviteUserToGame)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetCoplayFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetCoplayFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetFriendCoplayTime)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetFriendCoplayGame)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_JoinClanChatRoom)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_LeaveClanChatRoom)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetClanChatMemberCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetChatMemberByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_SendClanChatMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetClanChatMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_IsClanChatAdmin)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_IsClanChatWindowOpenInSteam)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_OpenClanChatWindowInSteam)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_CloseClanChatWindowInSteam)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_SetListenForFriendsMessages)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_ReplyToFriendMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetFriendMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetFollowerCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_IsFollowing)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_EnumerateFollowingList)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_IsClanPublic)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_IsClanOfficialGameGroup)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetNumChatsWithUnreadPriorityMessages)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_ActivateGameOverlayRemotePlayTogetherInviteDialog)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_RegisterProtocolInOverlayBrowser)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_ActivateGameOverlayInviteDialogConnectString)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_RequestEquippedProfileItems)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_BHasEquippedProfileItem)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetProfileItemPropertyString)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetProfileItemPropertyUint)
    );
#ifndef __GNUC__
}
#endif

winISteamFriends_SteamFriends017 *create_winISteamFriends_SteamFriends017(void *linux_side)
{
    winISteamFriends_SteamFriends017 *r = alloc_mem_for_iface(sizeof(winISteamFriends_SteamFriends017), "SteamFriends017");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamFriends_SteamFriends017_vtable, 80, "SteamFriends017");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamFriends_SteamFriends015.h"

typedef struct __winISteamFriends_SteamFriends015 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamFriends_SteamFriends015;

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetPersonaName, 4)
const char * __thiscall winISteamFriends_SteamFriends015_GetPersonaName(winISteamFriends_SteamFriends015 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_GetPersonaName(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_SetPersonaName, 8)
SteamAPICall_t __thiscall winISteamFriends_SteamFriends015_SetPersonaName(winISteamFriends_SteamFriends015 *_this, const char * pchPersonaName)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_SetPersonaName(_this->linux_side, pchPersonaName);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetPersonaState, 4)
EPersonaState __thiscall winISteamFriends_SteamFriends015_GetPersonaState(winISteamFriends_SteamFriends015 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_GetPersonaState(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetFriendCount, 8)
int __thiscall winISteamFriends_SteamFriends015_GetFriendCount(winISteamFriends_SteamFriends015 *_this, int iFriendFlags)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_GetFriendCount(_this->linux_side, iFriendFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetFriendByIndex, 16)
CSteamID *__thiscall winISteamFriends_SteamFriends015_GetFriendByIndex(winISteamFriends_SteamFriends015 *_this, CSteamID *_r, int iFriend, int iFriendFlags)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends015_GetFriendByIndex(_this->linux_side, iFriend, iFriendFlags);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetFriendRelationship, 12)
EFriendRelationship __thiscall winISteamFriends_SteamFriends015_GetFriendRelationship(winISteamFriends_SteamFriends015 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_GetFriendRelationship(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetFriendPersonaState, 12)
EPersonaState __thiscall winISteamFriends_SteamFriends015_GetFriendPersonaState(winISteamFriends_SteamFriends015 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_GetFriendPersonaState(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetFriendPersonaName, 12)
const char * __thiscall winISteamFriends_SteamFriends015_GetFriendPersonaName(winISteamFriends_SteamFriends015 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_GetFriendPersonaName(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetFriendGamePlayed, 16)
bool __thiscall winISteamFriends_SteamFriends015_GetFriendGamePlayed(winISteamFriends_SteamFriends015 *_this, CSteamID steamIDFriend, FriendGameInfo_t * pFriendGameInfo)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_GetFriendGamePlayed(_this->linux_side, steamIDFriend, pFriendGameInfo);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetFriendPersonaNameHistory, 16)
const char * __thiscall winISteamFriends_SteamFriends015_GetFriendPersonaNameHistory(winISteamFriends_SteamFriends015 *_this, CSteamID steamIDFriend, int iPersonaName)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_GetFriendPersonaNameHistory(_this->linux_side, steamIDFriend, iPersonaName);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetFriendSteamLevel, 12)
int __thiscall winISteamFriends_SteamFriends015_GetFriendSteamLevel(winISteamFriends_SteamFriends015 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_GetFriendSteamLevel(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetPlayerNickname, 12)
const char * __thiscall winISteamFriends_SteamFriends015_GetPlayerNickname(winISteamFriends_SteamFriends015 *_this, CSteamID steamIDPlayer)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_GetPlayerNickname(_this->linux_side, steamIDPlayer);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetFriendsGroupCount, 4)
int __thiscall winISteamFriends_SteamFriends015_GetFriendsGroupCount(winISteamFriends_SteamFriends015 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_GetFriendsGroupCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetFriendsGroupIDByIndex, 8)
FriendsGroupID_t __thiscall winISteamFriends_SteamFriends015_GetFriendsGroupIDByIndex(winISteamFriends_SteamFriends015 *_this, int iFG)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_GetFriendsGroupIDByIndex(_this->linux_side, iFG);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetFriendsGroupName, 8)
const char * __thiscall winISteamFriends_SteamFriends015_GetFriendsGroupName(winISteamFriends_SteamFriends015 *_this, FriendsGroupID_t friendsGroupID)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_GetFriendsGroupName(_this->linux_side, friendsGroupID);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetFriendsGroupMembersCount, 8)
int __thiscall winISteamFriends_SteamFriends015_GetFriendsGroupMembersCount(winISteamFriends_SteamFriends015 *_this, FriendsGroupID_t friendsGroupID)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_GetFriendsGroupMembersCount(_this->linux_side, friendsGroupID);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetFriendsGroupMembersList, 16)
void __thiscall winISteamFriends_SteamFriends015_GetFriendsGroupMembersList(winISteamFriends_SteamFriends015 *_this, FriendsGroupID_t friendsGroupID, CSteamID * pOutSteamIDMembers, int nMembersCount)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends015_GetFriendsGroupMembersList(_this->linux_side, friendsGroupID, pOutSteamIDMembers, nMembersCount);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_HasFriend, 16)
bool __thiscall winISteamFriends_SteamFriends015_HasFriend(winISteamFriends_SteamFriends015 *_this, CSteamID steamIDFriend, int iFriendFlags)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_HasFriend(_this->linux_side, steamIDFriend, iFriendFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetClanCount, 4)
int __thiscall winISteamFriends_SteamFriends015_GetClanCount(winISteamFriends_SteamFriends015 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_GetClanCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetClanByIndex, 12)
CSteamID *__thiscall winISteamFriends_SteamFriends015_GetClanByIndex(winISteamFriends_SteamFriends015 *_this, CSteamID *_r, int iClan)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends015_GetClanByIndex(_this->linux_side, iClan);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetClanName, 12)
const char * __thiscall winISteamFriends_SteamFriends015_GetClanName(winISteamFriends_SteamFriends015 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_GetClanName(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetClanTag, 12)
const char * __thiscall winISteamFriends_SteamFriends015_GetClanTag(winISteamFriends_SteamFriends015 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_GetClanTag(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetClanActivityCounts, 24)
bool __thiscall winISteamFriends_SteamFriends015_GetClanActivityCounts(winISteamFriends_SteamFriends015 *_this, CSteamID steamIDClan, int * pnOnline, int * pnInGame, int * pnChatting)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_GetClanActivityCounts(_this->linux_side, steamIDClan, pnOnline, pnInGame, pnChatting);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_DownloadClanActivityCounts, 12)
SteamAPICall_t __thiscall winISteamFriends_SteamFriends015_DownloadClanActivityCounts(winISteamFriends_SteamFriends015 *_this, CSteamID * psteamIDClans, int cClansToRequest)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_DownloadClanActivityCounts(_this->linux_side, psteamIDClans, cClansToRequest);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetFriendCountFromSource, 12)
int __thiscall winISteamFriends_SteamFriends015_GetFriendCountFromSource(winISteamFriends_SteamFriends015 *_this, CSteamID steamIDSource)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_GetFriendCountFromSource(_this->linux_side, steamIDSource);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetFriendFromSourceByIndex, 20)
CSteamID *__thiscall winISteamFriends_SteamFriends015_GetFriendFromSourceByIndex(winISteamFriends_SteamFriends015 *_this, CSteamID *_r, CSteamID steamIDSource, int iFriend)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends015_GetFriendFromSourceByIndex(_this->linux_side, steamIDSource, iFriend);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_IsUserInSource, 20)
bool __thiscall winISteamFriends_SteamFriends015_IsUserInSource(winISteamFriends_SteamFriends015 *_this, CSteamID steamIDUser, CSteamID steamIDSource)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_IsUserInSource(_this->linux_side, steamIDUser, steamIDSource);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_SetInGameVoiceSpeaking, 16)
void __thiscall winISteamFriends_SteamFriends015_SetInGameVoiceSpeaking(winISteamFriends_SteamFriends015 *_this, CSteamID steamIDUser, bool bSpeaking)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends015_SetInGameVoiceSpeaking(_this->linux_side, steamIDUser, bSpeaking);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_ActivateGameOverlay, 8)
void __thiscall winISteamFriends_SteamFriends015_ActivateGameOverlay(winISteamFriends_SteamFriends015 *_this, const char * pchDialog)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends015_ActivateGameOverlay(_this->linux_side, pchDialog);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_ActivateGameOverlayToUser, 16)
void __thiscall winISteamFriends_SteamFriends015_ActivateGameOverlayToUser(winISteamFriends_SteamFriends015 *_this, const char * pchDialog, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends015_ActivateGameOverlayToUser(_this->linux_side, pchDialog, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_ActivateGameOverlayToWebPage, 8)
void __thiscall winISteamFriends_SteamFriends015_ActivateGameOverlayToWebPage(winISteamFriends_SteamFriends015 *_this, const char * pchURL)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends015_ActivateGameOverlayToWebPage(_this->linux_side, pchURL);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_ActivateGameOverlayToStore, 12)
void __thiscall winISteamFriends_SteamFriends015_ActivateGameOverlayToStore(winISteamFriends_SteamFriends015 *_this, AppId_t nAppID, EOverlayToStoreFlag eFlag)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends015_ActivateGameOverlayToStore(_this->linux_side, nAppID, eFlag);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_SetPlayedWith, 12)
void __thiscall winISteamFriends_SteamFriends015_SetPlayedWith(winISteamFriends_SteamFriends015 *_this, CSteamID steamIDUserPlayedWith)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends015_SetPlayedWith(_this->linux_side, steamIDUserPlayedWith);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_ActivateGameOverlayInviteDialog, 12)
void __thiscall winISteamFriends_SteamFriends015_ActivateGameOverlayInviteDialog(winISteamFriends_SteamFriends015 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends015_ActivateGameOverlayInviteDialog(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetSmallFriendAvatar, 12)
int __thiscall winISteamFriends_SteamFriends015_GetSmallFriendAvatar(winISteamFriends_SteamFriends015 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_GetSmallFriendAvatar(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetMediumFriendAvatar, 12)
int __thiscall winISteamFriends_SteamFriends015_GetMediumFriendAvatar(winISteamFriends_SteamFriends015 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_GetMediumFriendAvatar(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetLargeFriendAvatar, 12)
int __thiscall winISteamFriends_SteamFriends015_GetLargeFriendAvatar(winISteamFriends_SteamFriends015 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_GetLargeFriendAvatar(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_RequestUserInformation, 16)
bool __thiscall winISteamFriends_SteamFriends015_RequestUserInformation(winISteamFriends_SteamFriends015 *_this, CSteamID steamIDUser, bool bRequireNameOnly)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_RequestUserInformation(_this->linux_side, steamIDUser, bRequireNameOnly);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_RequestClanOfficerList, 12)
SteamAPICall_t __thiscall winISteamFriends_SteamFriends015_RequestClanOfficerList(winISteamFriends_SteamFriends015 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_RequestClanOfficerList(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetClanOwner, 16)
CSteamID *__thiscall winISteamFriends_SteamFriends015_GetClanOwner(winISteamFriends_SteamFriends015 *_this, CSteamID *_r, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends015_GetClanOwner(_this->linux_side, steamIDClan);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetClanOfficerCount, 12)
int __thiscall winISteamFriends_SteamFriends015_GetClanOfficerCount(winISteamFriends_SteamFriends015 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_GetClanOfficerCount(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetClanOfficerByIndex, 20)
CSteamID *__thiscall winISteamFriends_SteamFriends015_GetClanOfficerByIndex(winISteamFriends_SteamFriends015 *_this, CSteamID *_r, CSteamID steamIDClan, int iOfficer)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends015_GetClanOfficerByIndex(_this->linux_side, steamIDClan, iOfficer);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetUserRestrictions, 4)
uint32 __thiscall winISteamFriends_SteamFriends015_GetUserRestrictions(winISteamFriends_SteamFriends015 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_GetUserRestrictions(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_SetRichPresence, 12)
bool __thiscall winISteamFriends_SteamFriends015_SetRichPresence(winISteamFriends_SteamFriends015 *_this, const char * pchKey, const char * pchValue)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_SetRichPresence(_this->linux_side, pchKey, pchValue);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_ClearRichPresence, 4)
void __thiscall winISteamFriends_SteamFriends015_ClearRichPresence(winISteamFriends_SteamFriends015 *_this)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends015_ClearRichPresence(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetFriendRichPresence, 16)
const char * __thiscall winISteamFriends_SteamFriends015_GetFriendRichPresence(winISteamFriends_SteamFriends015 *_this, CSteamID steamIDFriend, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_GetFriendRichPresence(_this->linux_side, steamIDFriend, pchKey);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetFriendRichPresenceKeyCount, 12)
int __thiscall winISteamFriends_SteamFriends015_GetFriendRichPresenceKeyCount(winISteamFriends_SteamFriends015 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_GetFriendRichPresenceKeyCount(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetFriendRichPresenceKeyByIndex, 16)
const char * __thiscall winISteamFriends_SteamFriends015_GetFriendRichPresenceKeyByIndex(winISteamFriends_SteamFriends015 *_this, CSteamID steamIDFriend, int iKey)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_GetFriendRichPresenceKeyByIndex(_this->linux_side, steamIDFriend, iKey);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_RequestFriendRichPresence, 12)
void __thiscall winISteamFriends_SteamFriends015_RequestFriendRichPresence(winISteamFriends_SteamFriends015 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends015_RequestFriendRichPresence(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_InviteUserToGame, 16)
bool __thiscall winISteamFriends_SteamFriends015_InviteUserToGame(winISteamFriends_SteamFriends015 *_this, CSteamID steamIDFriend, const char * pchConnectString)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_InviteUserToGame(_this->linux_side, steamIDFriend, pchConnectString);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetCoplayFriendCount, 4)
int __thiscall winISteamFriends_SteamFriends015_GetCoplayFriendCount(winISteamFriends_SteamFriends015 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_GetCoplayFriendCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetCoplayFriend, 12)
CSteamID *__thiscall winISteamFriends_SteamFriends015_GetCoplayFriend(winISteamFriends_SteamFriends015 *_this, CSteamID *_r, int iCoplayFriend)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends015_GetCoplayFriend(_this->linux_side, iCoplayFriend);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetFriendCoplayTime, 12)
int __thiscall winISteamFriends_SteamFriends015_GetFriendCoplayTime(winISteamFriends_SteamFriends015 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_GetFriendCoplayTime(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetFriendCoplayGame, 12)
AppId_t __thiscall winISteamFriends_SteamFriends015_GetFriendCoplayGame(winISteamFriends_SteamFriends015 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_GetFriendCoplayGame(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_JoinClanChatRoom, 12)
SteamAPICall_t __thiscall winISteamFriends_SteamFriends015_JoinClanChatRoom(winISteamFriends_SteamFriends015 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_JoinClanChatRoom(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_LeaveClanChatRoom, 12)
bool __thiscall winISteamFriends_SteamFriends015_LeaveClanChatRoom(winISteamFriends_SteamFriends015 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_LeaveClanChatRoom(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetClanChatMemberCount, 12)
int __thiscall winISteamFriends_SteamFriends015_GetClanChatMemberCount(winISteamFriends_SteamFriends015 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_GetClanChatMemberCount(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetChatMemberByIndex, 20)
CSteamID *__thiscall winISteamFriends_SteamFriends015_GetChatMemberByIndex(winISteamFriends_SteamFriends015 *_this, CSteamID *_r, CSteamID steamIDClan, int iUser)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends015_GetChatMemberByIndex(_this->linux_side, steamIDClan, iUser);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_SendClanChatMessage, 16)
bool __thiscall winISteamFriends_SteamFriends015_SendClanChatMessage(winISteamFriends_SteamFriends015 *_this, CSteamID steamIDClanChat, const char * pchText)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_SendClanChatMessage(_this->linux_side, steamIDClanChat, pchText);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetClanChatMessage, 32)
int __thiscall winISteamFriends_SteamFriends015_GetClanChatMessage(winISteamFriends_SteamFriends015 *_this, CSteamID steamIDClanChat, int iMessage, void * prgchText, int cchTextMax, EChatEntryType * peChatEntryType, CSteamID * psteamidChatter)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_GetClanChatMessage(_this->linux_side, steamIDClanChat, iMessage, prgchText, cchTextMax, peChatEntryType, psteamidChatter);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_IsClanChatAdmin, 20)
bool __thiscall winISteamFriends_SteamFriends015_IsClanChatAdmin(winISteamFriends_SteamFriends015 *_this, CSteamID steamIDClanChat, CSteamID steamIDUser)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_IsClanChatAdmin(_this->linux_side, steamIDClanChat, steamIDUser);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_IsClanChatWindowOpenInSteam, 12)
bool __thiscall winISteamFriends_SteamFriends015_IsClanChatWindowOpenInSteam(winISteamFriends_SteamFriends015 *_this, CSteamID steamIDClanChat)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_IsClanChatWindowOpenInSteam(_this->linux_side, steamIDClanChat);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_OpenClanChatWindowInSteam, 12)
bool __thiscall winISteamFriends_SteamFriends015_OpenClanChatWindowInSteam(winISteamFriends_SteamFriends015 *_this, CSteamID steamIDClanChat)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_OpenClanChatWindowInSteam(_this->linux_side, steamIDClanChat);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_CloseClanChatWindowInSteam, 12)
bool __thiscall winISteamFriends_SteamFriends015_CloseClanChatWindowInSteam(winISteamFriends_SteamFriends015 *_this, CSteamID steamIDClanChat)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_CloseClanChatWindowInSteam(_this->linux_side, steamIDClanChat);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_SetListenForFriendsMessages, 8)
bool __thiscall winISteamFriends_SteamFriends015_SetListenForFriendsMessages(winISteamFriends_SteamFriends015 *_this, bool bInterceptEnabled)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_SetListenForFriendsMessages(_this->linux_side, bInterceptEnabled);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_ReplyToFriendMessage, 16)
bool __thiscall winISteamFriends_SteamFriends015_ReplyToFriendMessage(winISteamFriends_SteamFriends015 *_this, CSteamID steamIDFriend, const char * pchMsgToSend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_ReplyToFriendMessage(_this->linux_side, steamIDFriend, pchMsgToSend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetFriendMessage, 28)
int __thiscall winISteamFriends_SteamFriends015_GetFriendMessage(winISteamFriends_SteamFriends015 *_this, CSteamID steamIDFriend, int iMessageID, void * pvData, int cubData, EChatEntryType * peChatEntryType)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_GetFriendMessage(_this->linux_side, steamIDFriend, iMessageID, pvData, cubData, peChatEntryType);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetFollowerCount, 12)
SteamAPICall_t __thiscall winISteamFriends_SteamFriends015_GetFollowerCount(winISteamFriends_SteamFriends015 *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_GetFollowerCount(_this->linux_side, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_IsFollowing, 12)
SteamAPICall_t __thiscall winISteamFriends_SteamFriends015_IsFollowing(winISteamFriends_SteamFriends015 *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_IsFollowing(_this->linux_side, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_EnumerateFollowingList, 8)
SteamAPICall_t __thiscall winISteamFriends_SteamFriends015_EnumerateFollowingList(winISteamFriends_SteamFriends015 *_this, uint32 unStartIndex)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_EnumerateFollowingList(_this->linux_side, unStartIndex);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_IsClanPublic, 12)
bool __thiscall winISteamFriends_SteamFriends015_IsClanPublic(winISteamFriends_SteamFriends015 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_IsClanPublic(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_IsClanOfficialGameGroup, 12)
bool __thiscall winISteamFriends_SteamFriends015_IsClanOfficialGameGroup(winISteamFriends_SteamFriends015 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends015_IsClanOfficialGameGroup(_this->linux_side, steamIDClan);
}

extern vtable_ptr winISteamFriends_SteamFriends015_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamFriends_SteamFriends015,
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_SetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetFriendByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetFriendRelationship)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetFriendPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetFriendPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetFriendGamePlayed)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetFriendPersonaNameHistory)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetFriendSteamLevel)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetPlayerNickname)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetFriendsGroupCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetFriendsGroupIDByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetFriendsGroupName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetFriendsGroupMembersCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetFriendsGroupMembersList)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_HasFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetClanCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetClanByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetClanName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetClanTag)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetClanActivityCounts)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_DownloadClanActivityCounts)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetFriendCountFromSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetFriendFromSourceByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_IsUserInSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_SetInGameVoiceSpeaking)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_ActivateGameOverlay)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_ActivateGameOverlayToUser)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_ActivateGameOverlayToWebPage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_ActivateGameOverlayToStore)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_SetPlayedWith)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_ActivateGameOverlayInviteDialog)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetSmallFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetMediumFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetLargeFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_RequestUserInformation)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_RequestClanOfficerList)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetClanOwner)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetClanOfficerCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetClanOfficerByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetUserRestrictions)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_SetRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_ClearRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetFriendRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetFriendRichPresenceKeyCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetFriendRichPresenceKeyByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_RequestFriendRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_InviteUserToGame)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetCoplayFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetCoplayFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetFriendCoplayTime)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetFriendCoplayGame)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_JoinClanChatRoom)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_LeaveClanChatRoom)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetClanChatMemberCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetChatMemberByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_SendClanChatMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetClanChatMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_IsClanChatAdmin)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_IsClanChatWindowOpenInSteam)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_OpenClanChatWindowInSteam)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_CloseClanChatWindowInSteam)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_SetListenForFriendsMessages)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_ReplyToFriendMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetFriendMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetFollowerCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_IsFollowing)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_EnumerateFollowingList)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_IsClanPublic)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_IsClanOfficialGameGroup)
    );
#ifndef __GNUC__
}
#endif

winISteamFriends_SteamFriends015 *create_winISteamFriends_SteamFriends015(void *linux_side)
{
    winISteamFriends_SteamFriends015 *r = alloc_mem_for_iface(sizeof(winISteamFriends_SteamFriends015), "SteamFriends015");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamFriends_SteamFriends015_vtable, 72, "SteamFriends015");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamFriends_SteamFriends014.h"

typedef struct __winISteamFriends_SteamFriends014 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamFriends_SteamFriends014;

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetPersonaName, 4)
const char * __thiscall winISteamFriends_SteamFriends014_GetPersonaName(winISteamFriends_SteamFriends014 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends014_GetPersonaName(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_SetPersonaName, 8)
SteamAPICall_t __thiscall winISteamFriends_SteamFriends014_SetPersonaName(winISteamFriends_SteamFriends014 *_this, const char * pchPersonaName)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends014_SetPersonaName(_this->linux_side, pchPersonaName);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetPersonaState, 4)
EPersonaState __thiscall winISteamFriends_SteamFriends014_GetPersonaState(winISteamFriends_SteamFriends014 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends014_GetPersonaState(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetFriendCount, 8)
int __thiscall winISteamFriends_SteamFriends014_GetFriendCount(winISteamFriends_SteamFriends014 *_this, int iFriendFlags)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends014_GetFriendCount(_this->linux_side, iFriendFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetFriendByIndex, 16)
CSteamID *__thiscall winISteamFriends_SteamFriends014_GetFriendByIndex(winISteamFriends_SteamFriends014 *_this, CSteamID *_r, int iFriend, int iFriendFlags)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends014_GetFriendByIndex(_this->linux_side, iFriend, iFriendFlags);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetFriendRelationship, 12)
EFriendRelationship __thiscall winISteamFriends_SteamFriends014_GetFriendRelationship(winISteamFriends_SteamFriends014 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends014_GetFriendRelationship(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetFriendPersonaState, 12)
EPersonaState __thiscall winISteamFriends_SteamFriends014_GetFriendPersonaState(winISteamFriends_SteamFriends014 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends014_GetFriendPersonaState(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetFriendPersonaName, 12)
const char * __thiscall winISteamFriends_SteamFriends014_GetFriendPersonaName(winISteamFriends_SteamFriends014 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends014_GetFriendPersonaName(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetFriendGamePlayed, 16)
bool __thiscall winISteamFriends_SteamFriends014_GetFriendGamePlayed(winISteamFriends_SteamFriends014 *_this, CSteamID steamIDFriend, FriendGameInfo_t * pFriendGameInfo)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends014_GetFriendGamePlayed(_this->linux_side, steamIDFriend, pFriendGameInfo);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetFriendPersonaNameHistory, 16)
const char * __thiscall winISteamFriends_SteamFriends014_GetFriendPersonaNameHistory(winISteamFriends_SteamFriends014 *_this, CSteamID steamIDFriend, int iPersonaName)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends014_GetFriendPersonaNameHistory(_this->linux_side, steamIDFriend, iPersonaName);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetPlayerNickname, 12)
const char * __thiscall winISteamFriends_SteamFriends014_GetPlayerNickname(winISteamFriends_SteamFriends014 *_this, CSteamID steamIDPlayer)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends014_GetPlayerNickname(_this->linux_side, steamIDPlayer);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_HasFriend, 16)
bool __thiscall winISteamFriends_SteamFriends014_HasFriend(winISteamFriends_SteamFriends014 *_this, CSteamID steamIDFriend, int iFriendFlags)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends014_HasFriend(_this->linux_side, steamIDFriend, iFriendFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetClanCount, 4)
int __thiscall winISteamFriends_SteamFriends014_GetClanCount(winISteamFriends_SteamFriends014 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends014_GetClanCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetClanByIndex, 12)
CSteamID *__thiscall winISteamFriends_SteamFriends014_GetClanByIndex(winISteamFriends_SteamFriends014 *_this, CSteamID *_r, int iClan)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends014_GetClanByIndex(_this->linux_side, iClan);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetClanName, 12)
const char * __thiscall winISteamFriends_SteamFriends014_GetClanName(winISteamFriends_SteamFriends014 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends014_GetClanName(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetClanTag, 12)
const char * __thiscall winISteamFriends_SteamFriends014_GetClanTag(winISteamFriends_SteamFriends014 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends014_GetClanTag(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetClanActivityCounts, 24)
bool __thiscall winISteamFriends_SteamFriends014_GetClanActivityCounts(winISteamFriends_SteamFriends014 *_this, CSteamID steamIDClan, int * pnOnline, int * pnInGame, int * pnChatting)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends014_GetClanActivityCounts(_this->linux_side, steamIDClan, pnOnline, pnInGame, pnChatting);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_DownloadClanActivityCounts, 12)
SteamAPICall_t __thiscall winISteamFriends_SteamFriends014_DownloadClanActivityCounts(winISteamFriends_SteamFriends014 *_this, CSteamID * psteamIDClans, int cClansToRequest)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends014_DownloadClanActivityCounts(_this->linux_side, psteamIDClans, cClansToRequest);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetFriendCountFromSource, 12)
int __thiscall winISteamFriends_SteamFriends014_GetFriendCountFromSource(winISteamFriends_SteamFriends014 *_this, CSteamID steamIDSource)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends014_GetFriendCountFromSource(_this->linux_side, steamIDSource);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetFriendFromSourceByIndex, 20)
CSteamID *__thiscall winISteamFriends_SteamFriends014_GetFriendFromSourceByIndex(winISteamFriends_SteamFriends014 *_this, CSteamID *_r, CSteamID steamIDSource, int iFriend)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends014_GetFriendFromSourceByIndex(_this->linux_side, steamIDSource, iFriend);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_IsUserInSource, 20)
bool __thiscall winISteamFriends_SteamFriends014_IsUserInSource(winISteamFriends_SteamFriends014 *_this, CSteamID steamIDUser, CSteamID steamIDSource)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends014_IsUserInSource(_this->linux_side, steamIDUser, steamIDSource);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_SetInGameVoiceSpeaking, 16)
void __thiscall winISteamFriends_SteamFriends014_SetInGameVoiceSpeaking(winISteamFriends_SteamFriends014 *_this, CSteamID steamIDUser, bool bSpeaking)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends014_SetInGameVoiceSpeaking(_this->linux_side, steamIDUser, bSpeaking);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_ActivateGameOverlay, 8)
void __thiscall winISteamFriends_SteamFriends014_ActivateGameOverlay(winISteamFriends_SteamFriends014 *_this, const char * pchDialog)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends014_ActivateGameOverlay(_this->linux_side, pchDialog);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_ActivateGameOverlayToUser, 16)
void __thiscall winISteamFriends_SteamFriends014_ActivateGameOverlayToUser(winISteamFriends_SteamFriends014 *_this, const char * pchDialog, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends014_ActivateGameOverlayToUser(_this->linux_side, pchDialog, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_ActivateGameOverlayToWebPage, 8)
void __thiscall winISteamFriends_SteamFriends014_ActivateGameOverlayToWebPage(winISteamFriends_SteamFriends014 *_this, const char * pchURL)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends014_ActivateGameOverlayToWebPage(_this->linux_side, pchURL);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_ActivateGameOverlayToStore, 12)
void __thiscall winISteamFriends_SteamFriends014_ActivateGameOverlayToStore(winISteamFriends_SteamFriends014 *_this, AppId_t nAppID, EOverlayToStoreFlag eFlag)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends014_ActivateGameOverlayToStore(_this->linux_side, nAppID, eFlag);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_SetPlayedWith, 12)
void __thiscall winISteamFriends_SteamFriends014_SetPlayedWith(winISteamFriends_SteamFriends014 *_this, CSteamID steamIDUserPlayedWith)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends014_SetPlayedWith(_this->linux_side, steamIDUserPlayedWith);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_ActivateGameOverlayInviteDialog, 12)
void __thiscall winISteamFriends_SteamFriends014_ActivateGameOverlayInviteDialog(winISteamFriends_SteamFriends014 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends014_ActivateGameOverlayInviteDialog(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetSmallFriendAvatar, 12)
int __thiscall winISteamFriends_SteamFriends014_GetSmallFriendAvatar(winISteamFriends_SteamFriends014 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends014_GetSmallFriendAvatar(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetMediumFriendAvatar, 12)
int __thiscall winISteamFriends_SteamFriends014_GetMediumFriendAvatar(winISteamFriends_SteamFriends014 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends014_GetMediumFriendAvatar(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetLargeFriendAvatar, 12)
int __thiscall winISteamFriends_SteamFriends014_GetLargeFriendAvatar(winISteamFriends_SteamFriends014 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends014_GetLargeFriendAvatar(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_RequestUserInformation, 16)
bool __thiscall winISteamFriends_SteamFriends014_RequestUserInformation(winISteamFriends_SteamFriends014 *_this, CSteamID steamIDUser, bool bRequireNameOnly)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends014_RequestUserInformation(_this->linux_side, steamIDUser, bRequireNameOnly);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_RequestClanOfficerList, 12)
SteamAPICall_t __thiscall winISteamFriends_SteamFriends014_RequestClanOfficerList(winISteamFriends_SteamFriends014 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends014_RequestClanOfficerList(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetClanOwner, 16)
CSteamID *__thiscall winISteamFriends_SteamFriends014_GetClanOwner(winISteamFriends_SteamFriends014 *_this, CSteamID *_r, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends014_GetClanOwner(_this->linux_side, steamIDClan);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetClanOfficerCount, 12)
int __thiscall winISteamFriends_SteamFriends014_GetClanOfficerCount(winISteamFriends_SteamFriends014 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends014_GetClanOfficerCount(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetClanOfficerByIndex, 20)
CSteamID *__thiscall winISteamFriends_SteamFriends014_GetClanOfficerByIndex(winISteamFriends_SteamFriends014 *_this, CSteamID *_r, CSteamID steamIDClan, int iOfficer)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends014_GetClanOfficerByIndex(_this->linux_side, steamIDClan, iOfficer);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetUserRestrictions, 4)
uint32 __thiscall winISteamFriends_SteamFriends014_GetUserRestrictions(winISteamFriends_SteamFriends014 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends014_GetUserRestrictions(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_SetRichPresence, 12)
bool __thiscall winISteamFriends_SteamFriends014_SetRichPresence(winISteamFriends_SteamFriends014 *_this, const char * pchKey, const char * pchValue)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends014_SetRichPresence(_this->linux_side, pchKey, pchValue);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_ClearRichPresence, 4)
void __thiscall winISteamFriends_SteamFriends014_ClearRichPresence(winISteamFriends_SteamFriends014 *_this)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends014_ClearRichPresence(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetFriendRichPresence, 16)
const char * __thiscall winISteamFriends_SteamFriends014_GetFriendRichPresence(winISteamFriends_SteamFriends014 *_this, CSteamID steamIDFriend, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends014_GetFriendRichPresence(_this->linux_side, steamIDFriend, pchKey);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetFriendRichPresenceKeyCount, 12)
int __thiscall winISteamFriends_SteamFriends014_GetFriendRichPresenceKeyCount(winISteamFriends_SteamFriends014 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends014_GetFriendRichPresenceKeyCount(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetFriendRichPresenceKeyByIndex, 16)
const char * __thiscall winISteamFriends_SteamFriends014_GetFriendRichPresenceKeyByIndex(winISteamFriends_SteamFriends014 *_this, CSteamID steamIDFriend, int iKey)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends014_GetFriendRichPresenceKeyByIndex(_this->linux_side, steamIDFriend, iKey);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_RequestFriendRichPresence, 12)
void __thiscall winISteamFriends_SteamFriends014_RequestFriendRichPresence(winISteamFriends_SteamFriends014 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends014_RequestFriendRichPresence(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_InviteUserToGame, 16)
bool __thiscall winISteamFriends_SteamFriends014_InviteUserToGame(winISteamFriends_SteamFriends014 *_this, CSteamID steamIDFriend, const char * pchConnectString)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends014_InviteUserToGame(_this->linux_side, steamIDFriend, pchConnectString);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetCoplayFriendCount, 4)
int __thiscall winISteamFriends_SteamFriends014_GetCoplayFriendCount(winISteamFriends_SteamFriends014 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends014_GetCoplayFriendCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetCoplayFriend, 12)
CSteamID *__thiscall winISteamFriends_SteamFriends014_GetCoplayFriend(winISteamFriends_SteamFriends014 *_this, CSteamID *_r, int iCoplayFriend)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends014_GetCoplayFriend(_this->linux_side, iCoplayFriend);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetFriendCoplayTime, 12)
int __thiscall winISteamFriends_SteamFriends014_GetFriendCoplayTime(winISteamFriends_SteamFriends014 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends014_GetFriendCoplayTime(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetFriendCoplayGame, 12)
AppId_t __thiscall winISteamFriends_SteamFriends014_GetFriendCoplayGame(winISteamFriends_SteamFriends014 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends014_GetFriendCoplayGame(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_JoinClanChatRoom, 12)
SteamAPICall_t __thiscall winISteamFriends_SteamFriends014_JoinClanChatRoom(winISteamFriends_SteamFriends014 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends014_JoinClanChatRoom(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_LeaveClanChatRoom, 12)
bool __thiscall winISteamFriends_SteamFriends014_LeaveClanChatRoom(winISteamFriends_SteamFriends014 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends014_LeaveClanChatRoom(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetClanChatMemberCount, 12)
int __thiscall winISteamFriends_SteamFriends014_GetClanChatMemberCount(winISteamFriends_SteamFriends014 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends014_GetClanChatMemberCount(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetChatMemberByIndex, 20)
CSteamID *__thiscall winISteamFriends_SteamFriends014_GetChatMemberByIndex(winISteamFriends_SteamFriends014 *_this, CSteamID *_r, CSteamID steamIDClan, int iUser)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends014_GetChatMemberByIndex(_this->linux_side, steamIDClan, iUser);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_SendClanChatMessage, 16)
bool __thiscall winISteamFriends_SteamFriends014_SendClanChatMessage(winISteamFriends_SteamFriends014 *_this, CSteamID steamIDClanChat, const char * pchText)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends014_SendClanChatMessage(_this->linux_side, steamIDClanChat, pchText);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetClanChatMessage, 32)
int __thiscall winISteamFriends_SteamFriends014_GetClanChatMessage(winISteamFriends_SteamFriends014 *_this, CSteamID steamIDClanChat, int iMessage, void * prgchText, int cchTextMax, EChatEntryType * peChatEntryType, CSteamID * psteamidChatter)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends014_GetClanChatMessage(_this->linux_side, steamIDClanChat, iMessage, prgchText, cchTextMax, peChatEntryType, psteamidChatter);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_IsClanChatAdmin, 20)
bool __thiscall winISteamFriends_SteamFriends014_IsClanChatAdmin(winISteamFriends_SteamFriends014 *_this, CSteamID steamIDClanChat, CSteamID steamIDUser)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends014_IsClanChatAdmin(_this->linux_side, steamIDClanChat, steamIDUser);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_IsClanChatWindowOpenInSteam, 12)
bool __thiscall winISteamFriends_SteamFriends014_IsClanChatWindowOpenInSteam(winISteamFriends_SteamFriends014 *_this, CSteamID steamIDClanChat)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends014_IsClanChatWindowOpenInSteam(_this->linux_side, steamIDClanChat);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_OpenClanChatWindowInSteam, 12)
bool __thiscall winISteamFriends_SteamFriends014_OpenClanChatWindowInSteam(winISteamFriends_SteamFriends014 *_this, CSteamID steamIDClanChat)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends014_OpenClanChatWindowInSteam(_this->linux_side, steamIDClanChat);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_CloseClanChatWindowInSteam, 12)
bool __thiscall winISteamFriends_SteamFriends014_CloseClanChatWindowInSteam(winISteamFriends_SteamFriends014 *_this, CSteamID steamIDClanChat)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends014_CloseClanChatWindowInSteam(_this->linux_side, steamIDClanChat);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_SetListenForFriendsMessages, 8)
bool __thiscall winISteamFriends_SteamFriends014_SetListenForFriendsMessages(winISteamFriends_SteamFriends014 *_this, bool bInterceptEnabled)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends014_SetListenForFriendsMessages(_this->linux_side, bInterceptEnabled);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_ReplyToFriendMessage, 16)
bool __thiscall winISteamFriends_SteamFriends014_ReplyToFriendMessage(winISteamFriends_SteamFriends014 *_this, CSteamID steamIDFriend, const char * pchMsgToSend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends014_ReplyToFriendMessage(_this->linux_side, steamIDFriend, pchMsgToSend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetFriendMessage, 28)
int __thiscall winISteamFriends_SteamFriends014_GetFriendMessage(winISteamFriends_SteamFriends014 *_this, CSteamID steamIDFriend, int iMessageID, void * pvData, int cubData, EChatEntryType * peChatEntryType)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends014_GetFriendMessage(_this->linux_side, steamIDFriend, iMessageID, pvData, cubData, peChatEntryType);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetFollowerCount, 12)
SteamAPICall_t __thiscall winISteamFriends_SteamFriends014_GetFollowerCount(winISteamFriends_SteamFriends014 *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends014_GetFollowerCount(_this->linux_side, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_IsFollowing, 12)
SteamAPICall_t __thiscall winISteamFriends_SteamFriends014_IsFollowing(winISteamFriends_SteamFriends014 *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends014_IsFollowing(_this->linux_side, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_EnumerateFollowingList, 8)
SteamAPICall_t __thiscall winISteamFriends_SteamFriends014_EnumerateFollowingList(winISteamFriends_SteamFriends014 *_this, uint32 unStartIndex)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends014_EnumerateFollowingList(_this->linux_side, unStartIndex);
}

extern vtable_ptr winISteamFriends_SteamFriends014_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamFriends_SteamFriends014,
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_SetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetFriendByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetFriendRelationship)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetFriendPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetFriendPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetFriendGamePlayed)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetFriendPersonaNameHistory)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetPlayerNickname)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_HasFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetClanCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetClanByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetClanName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetClanTag)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetClanActivityCounts)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_DownloadClanActivityCounts)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetFriendCountFromSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetFriendFromSourceByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_IsUserInSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_SetInGameVoiceSpeaking)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_ActivateGameOverlay)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_ActivateGameOverlayToUser)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_ActivateGameOverlayToWebPage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_ActivateGameOverlayToStore)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_SetPlayedWith)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_ActivateGameOverlayInviteDialog)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetSmallFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetMediumFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetLargeFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_RequestUserInformation)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_RequestClanOfficerList)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetClanOwner)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetClanOfficerCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetClanOfficerByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetUserRestrictions)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_SetRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_ClearRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetFriendRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetFriendRichPresenceKeyCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetFriendRichPresenceKeyByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_RequestFriendRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_InviteUserToGame)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetCoplayFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetCoplayFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetFriendCoplayTime)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetFriendCoplayGame)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_JoinClanChatRoom)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_LeaveClanChatRoom)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetClanChatMemberCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetChatMemberByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_SendClanChatMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetClanChatMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_IsClanChatAdmin)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_IsClanChatWindowOpenInSteam)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_OpenClanChatWindowInSteam)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_CloseClanChatWindowInSteam)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_SetListenForFriendsMessages)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_ReplyToFriendMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetFriendMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetFollowerCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_IsFollowing)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_EnumerateFollowingList)
    );
#ifndef __GNUC__
}
#endif

winISteamFriends_SteamFriends014 *create_winISteamFriends_SteamFriends014(void *linux_side)
{
    winISteamFriends_SteamFriends014 *r = alloc_mem_for_iface(sizeof(winISteamFriends_SteamFriends014), "SteamFriends014");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamFriends_SteamFriends014_vtable, 64, "SteamFriends014");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamFriends_SteamFriends013.h"

typedef struct __winISteamFriends_SteamFriends013 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamFriends_SteamFriends013;

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetPersonaName, 4)
const char * __thiscall winISteamFriends_SteamFriends013_GetPersonaName(winISteamFriends_SteamFriends013 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends013_GetPersonaName(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_SetPersonaName, 8)
SteamAPICall_t __thiscall winISteamFriends_SteamFriends013_SetPersonaName(winISteamFriends_SteamFriends013 *_this, const char * pchPersonaName)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends013_SetPersonaName(_this->linux_side, pchPersonaName);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetPersonaState, 4)
EPersonaState __thiscall winISteamFriends_SteamFriends013_GetPersonaState(winISteamFriends_SteamFriends013 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends013_GetPersonaState(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetFriendCount, 8)
int __thiscall winISteamFriends_SteamFriends013_GetFriendCount(winISteamFriends_SteamFriends013 *_this, int iFriendFlags)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends013_GetFriendCount(_this->linux_side, iFriendFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetFriendByIndex, 16)
CSteamID *__thiscall winISteamFriends_SteamFriends013_GetFriendByIndex(winISteamFriends_SteamFriends013 *_this, CSteamID *_r, int iFriend, int iFriendFlags)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends013_GetFriendByIndex(_this->linux_side, iFriend, iFriendFlags);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetFriendRelationship, 12)
EFriendRelationship __thiscall winISteamFriends_SteamFriends013_GetFriendRelationship(winISteamFriends_SteamFriends013 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends013_GetFriendRelationship(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetFriendPersonaState, 12)
EPersonaState __thiscall winISteamFriends_SteamFriends013_GetFriendPersonaState(winISteamFriends_SteamFriends013 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends013_GetFriendPersonaState(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetFriendPersonaName, 12)
const char * __thiscall winISteamFriends_SteamFriends013_GetFriendPersonaName(winISteamFriends_SteamFriends013 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends013_GetFriendPersonaName(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetFriendGamePlayed, 16)
bool __thiscall winISteamFriends_SteamFriends013_GetFriendGamePlayed(winISteamFriends_SteamFriends013 *_this, CSteamID steamIDFriend, FriendGameInfo_t * pFriendGameInfo)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends013_GetFriendGamePlayed(_this->linux_side, steamIDFriend, pFriendGameInfo);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetFriendPersonaNameHistory, 16)
const char * __thiscall winISteamFriends_SteamFriends013_GetFriendPersonaNameHistory(winISteamFriends_SteamFriends013 *_this, CSteamID steamIDFriend, int iPersonaName)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends013_GetFriendPersonaNameHistory(_this->linux_side, steamIDFriend, iPersonaName);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_HasFriend, 16)
bool __thiscall winISteamFriends_SteamFriends013_HasFriend(winISteamFriends_SteamFriends013 *_this, CSteamID steamIDFriend, int iFriendFlags)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends013_HasFriend(_this->linux_side, steamIDFriend, iFriendFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetClanCount, 4)
int __thiscall winISteamFriends_SteamFriends013_GetClanCount(winISteamFriends_SteamFriends013 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends013_GetClanCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetClanByIndex, 12)
CSteamID *__thiscall winISteamFriends_SteamFriends013_GetClanByIndex(winISteamFriends_SteamFriends013 *_this, CSteamID *_r, int iClan)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends013_GetClanByIndex(_this->linux_side, iClan);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetClanName, 12)
const char * __thiscall winISteamFriends_SteamFriends013_GetClanName(winISteamFriends_SteamFriends013 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends013_GetClanName(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetClanTag, 12)
const char * __thiscall winISteamFriends_SteamFriends013_GetClanTag(winISteamFriends_SteamFriends013 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends013_GetClanTag(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetClanActivityCounts, 24)
bool __thiscall winISteamFriends_SteamFriends013_GetClanActivityCounts(winISteamFriends_SteamFriends013 *_this, CSteamID steamIDClan, int * pnOnline, int * pnInGame, int * pnChatting)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends013_GetClanActivityCounts(_this->linux_side, steamIDClan, pnOnline, pnInGame, pnChatting);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_DownloadClanActivityCounts, 12)
SteamAPICall_t __thiscall winISteamFriends_SteamFriends013_DownloadClanActivityCounts(winISteamFriends_SteamFriends013 *_this, CSteamID * psteamIDClans, int cClansToRequest)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends013_DownloadClanActivityCounts(_this->linux_side, psteamIDClans, cClansToRequest);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetFriendCountFromSource, 12)
int __thiscall winISteamFriends_SteamFriends013_GetFriendCountFromSource(winISteamFriends_SteamFriends013 *_this, CSteamID steamIDSource)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends013_GetFriendCountFromSource(_this->linux_side, steamIDSource);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetFriendFromSourceByIndex, 20)
CSteamID *__thiscall winISteamFriends_SteamFriends013_GetFriendFromSourceByIndex(winISteamFriends_SteamFriends013 *_this, CSteamID *_r, CSteamID steamIDSource, int iFriend)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends013_GetFriendFromSourceByIndex(_this->linux_side, steamIDSource, iFriend);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_IsUserInSource, 20)
bool __thiscall winISteamFriends_SteamFriends013_IsUserInSource(winISteamFriends_SteamFriends013 *_this, CSteamID steamIDUser, CSteamID steamIDSource)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends013_IsUserInSource(_this->linux_side, steamIDUser, steamIDSource);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_SetInGameVoiceSpeaking, 16)
void __thiscall winISteamFriends_SteamFriends013_SetInGameVoiceSpeaking(winISteamFriends_SteamFriends013 *_this, CSteamID steamIDUser, bool bSpeaking)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends013_SetInGameVoiceSpeaking(_this->linux_side, steamIDUser, bSpeaking);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_ActivateGameOverlay, 8)
void __thiscall winISteamFriends_SteamFriends013_ActivateGameOverlay(winISteamFriends_SteamFriends013 *_this, const char * pchDialog)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends013_ActivateGameOverlay(_this->linux_side, pchDialog);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_ActivateGameOverlayToUser, 16)
void __thiscall winISteamFriends_SteamFriends013_ActivateGameOverlayToUser(winISteamFriends_SteamFriends013 *_this, const char * pchDialog, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends013_ActivateGameOverlayToUser(_this->linux_side, pchDialog, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_ActivateGameOverlayToWebPage, 8)
void __thiscall winISteamFriends_SteamFriends013_ActivateGameOverlayToWebPage(winISteamFriends_SteamFriends013 *_this, const char * pchURL)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends013_ActivateGameOverlayToWebPage(_this->linux_side, pchURL);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_ActivateGameOverlayToStore, 12)
void __thiscall winISteamFriends_SteamFriends013_ActivateGameOverlayToStore(winISteamFriends_SteamFriends013 *_this, AppId_t nAppID, EOverlayToStoreFlag eFlag)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends013_ActivateGameOverlayToStore(_this->linux_side, nAppID, eFlag);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_SetPlayedWith, 12)
void __thiscall winISteamFriends_SteamFriends013_SetPlayedWith(winISteamFriends_SteamFriends013 *_this, CSteamID steamIDUserPlayedWith)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends013_SetPlayedWith(_this->linux_side, steamIDUserPlayedWith);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_ActivateGameOverlayInviteDialog, 12)
void __thiscall winISteamFriends_SteamFriends013_ActivateGameOverlayInviteDialog(winISteamFriends_SteamFriends013 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends013_ActivateGameOverlayInviteDialog(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetSmallFriendAvatar, 12)
int __thiscall winISteamFriends_SteamFriends013_GetSmallFriendAvatar(winISteamFriends_SteamFriends013 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends013_GetSmallFriendAvatar(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetMediumFriendAvatar, 12)
int __thiscall winISteamFriends_SteamFriends013_GetMediumFriendAvatar(winISteamFriends_SteamFriends013 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends013_GetMediumFriendAvatar(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetLargeFriendAvatar, 12)
int __thiscall winISteamFriends_SteamFriends013_GetLargeFriendAvatar(winISteamFriends_SteamFriends013 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends013_GetLargeFriendAvatar(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_RequestUserInformation, 16)
bool __thiscall winISteamFriends_SteamFriends013_RequestUserInformation(winISteamFriends_SteamFriends013 *_this, CSteamID steamIDUser, bool bRequireNameOnly)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends013_RequestUserInformation(_this->linux_side, steamIDUser, bRequireNameOnly);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_RequestClanOfficerList, 12)
SteamAPICall_t __thiscall winISteamFriends_SteamFriends013_RequestClanOfficerList(winISteamFriends_SteamFriends013 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends013_RequestClanOfficerList(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetClanOwner, 16)
CSteamID *__thiscall winISteamFriends_SteamFriends013_GetClanOwner(winISteamFriends_SteamFriends013 *_this, CSteamID *_r, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends013_GetClanOwner(_this->linux_side, steamIDClan);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetClanOfficerCount, 12)
int __thiscall winISteamFriends_SteamFriends013_GetClanOfficerCount(winISteamFriends_SteamFriends013 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends013_GetClanOfficerCount(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetClanOfficerByIndex, 20)
CSteamID *__thiscall winISteamFriends_SteamFriends013_GetClanOfficerByIndex(winISteamFriends_SteamFriends013 *_this, CSteamID *_r, CSteamID steamIDClan, int iOfficer)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends013_GetClanOfficerByIndex(_this->linux_side, steamIDClan, iOfficer);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetUserRestrictions, 4)
uint32 __thiscall winISteamFriends_SteamFriends013_GetUserRestrictions(winISteamFriends_SteamFriends013 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends013_GetUserRestrictions(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_SetRichPresence, 12)
bool __thiscall winISteamFriends_SteamFriends013_SetRichPresence(winISteamFriends_SteamFriends013 *_this, const char * pchKey, const char * pchValue)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends013_SetRichPresence(_this->linux_side, pchKey, pchValue);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_ClearRichPresence, 4)
void __thiscall winISteamFriends_SteamFriends013_ClearRichPresence(winISteamFriends_SteamFriends013 *_this)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends013_ClearRichPresence(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetFriendRichPresence, 16)
const char * __thiscall winISteamFriends_SteamFriends013_GetFriendRichPresence(winISteamFriends_SteamFriends013 *_this, CSteamID steamIDFriend, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends013_GetFriendRichPresence(_this->linux_side, steamIDFriend, pchKey);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetFriendRichPresenceKeyCount, 12)
int __thiscall winISteamFriends_SteamFriends013_GetFriendRichPresenceKeyCount(winISteamFriends_SteamFriends013 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends013_GetFriendRichPresenceKeyCount(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetFriendRichPresenceKeyByIndex, 16)
const char * __thiscall winISteamFriends_SteamFriends013_GetFriendRichPresenceKeyByIndex(winISteamFriends_SteamFriends013 *_this, CSteamID steamIDFriend, int iKey)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends013_GetFriendRichPresenceKeyByIndex(_this->linux_side, steamIDFriend, iKey);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_RequestFriendRichPresence, 12)
void __thiscall winISteamFriends_SteamFriends013_RequestFriendRichPresence(winISteamFriends_SteamFriends013 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends013_RequestFriendRichPresence(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_InviteUserToGame, 16)
bool __thiscall winISteamFriends_SteamFriends013_InviteUserToGame(winISteamFriends_SteamFriends013 *_this, CSteamID steamIDFriend, const char * pchConnectString)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends013_InviteUserToGame(_this->linux_side, steamIDFriend, pchConnectString);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetCoplayFriendCount, 4)
int __thiscall winISteamFriends_SteamFriends013_GetCoplayFriendCount(winISteamFriends_SteamFriends013 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends013_GetCoplayFriendCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetCoplayFriend, 12)
CSteamID *__thiscall winISteamFriends_SteamFriends013_GetCoplayFriend(winISteamFriends_SteamFriends013 *_this, CSteamID *_r, int iCoplayFriend)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends013_GetCoplayFriend(_this->linux_side, iCoplayFriend);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetFriendCoplayTime, 12)
int __thiscall winISteamFriends_SteamFriends013_GetFriendCoplayTime(winISteamFriends_SteamFriends013 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends013_GetFriendCoplayTime(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetFriendCoplayGame, 12)
AppId_t __thiscall winISteamFriends_SteamFriends013_GetFriendCoplayGame(winISteamFriends_SteamFriends013 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends013_GetFriendCoplayGame(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_JoinClanChatRoom, 12)
SteamAPICall_t __thiscall winISteamFriends_SteamFriends013_JoinClanChatRoom(winISteamFriends_SteamFriends013 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends013_JoinClanChatRoom(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_LeaveClanChatRoom, 12)
bool __thiscall winISteamFriends_SteamFriends013_LeaveClanChatRoom(winISteamFriends_SteamFriends013 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends013_LeaveClanChatRoom(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetClanChatMemberCount, 12)
int __thiscall winISteamFriends_SteamFriends013_GetClanChatMemberCount(winISteamFriends_SteamFriends013 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends013_GetClanChatMemberCount(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetChatMemberByIndex, 20)
CSteamID *__thiscall winISteamFriends_SteamFriends013_GetChatMemberByIndex(winISteamFriends_SteamFriends013 *_this, CSteamID *_r, CSteamID steamIDClan, int iUser)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends013_GetChatMemberByIndex(_this->linux_side, steamIDClan, iUser);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_SendClanChatMessage, 16)
bool __thiscall winISteamFriends_SteamFriends013_SendClanChatMessage(winISteamFriends_SteamFriends013 *_this, CSteamID steamIDClanChat, const char * pchText)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends013_SendClanChatMessage(_this->linux_side, steamIDClanChat, pchText);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetClanChatMessage, 32)
int __thiscall winISteamFriends_SteamFriends013_GetClanChatMessage(winISteamFriends_SteamFriends013 *_this, CSteamID steamIDClanChat, int iMessage, void * prgchText, int cchTextMax, EChatEntryType * _a, CSteamID * _b)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends013_GetClanChatMessage(_this->linux_side, steamIDClanChat, iMessage, prgchText, cchTextMax, _a, _b);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_IsClanChatAdmin, 20)
bool __thiscall winISteamFriends_SteamFriends013_IsClanChatAdmin(winISteamFriends_SteamFriends013 *_this, CSteamID steamIDClanChat, CSteamID steamIDUser)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends013_IsClanChatAdmin(_this->linux_side, steamIDClanChat, steamIDUser);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_IsClanChatWindowOpenInSteam, 12)
bool __thiscall winISteamFriends_SteamFriends013_IsClanChatWindowOpenInSteam(winISteamFriends_SteamFriends013 *_this, CSteamID steamIDClanChat)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends013_IsClanChatWindowOpenInSteam(_this->linux_side, steamIDClanChat);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_OpenClanChatWindowInSteam, 12)
bool __thiscall winISteamFriends_SteamFriends013_OpenClanChatWindowInSteam(winISteamFriends_SteamFriends013 *_this, CSteamID steamIDClanChat)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends013_OpenClanChatWindowInSteam(_this->linux_side, steamIDClanChat);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_CloseClanChatWindowInSteam, 12)
bool __thiscall winISteamFriends_SteamFriends013_CloseClanChatWindowInSteam(winISteamFriends_SteamFriends013 *_this, CSteamID steamIDClanChat)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends013_CloseClanChatWindowInSteam(_this->linux_side, steamIDClanChat);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_SetListenForFriendsMessages, 8)
bool __thiscall winISteamFriends_SteamFriends013_SetListenForFriendsMessages(winISteamFriends_SteamFriends013 *_this, bool bInterceptEnabled)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends013_SetListenForFriendsMessages(_this->linux_side, bInterceptEnabled);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_ReplyToFriendMessage, 16)
bool __thiscall winISteamFriends_SteamFriends013_ReplyToFriendMessage(winISteamFriends_SteamFriends013 *_this, CSteamID steamIDFriend, const char * pchMsgToSend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends013_ReplyToFriendMessage(_this->linux_side, steamIDFriend, pchMsgToSend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetFriendMessage, 28)
int __thiscall winISteamFriends_SteamFriends013_GetFriendMessage(winISteamFriends_SteamFriends013 *_this, CSteamID steamIDFriend, int iMessageID, void * pvData, int cubData, EChatEntryType * peChatEntryType)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends013_GetFriendMessage(_this->linux_side, steamIDFriend, iMessageID, pvData, cubData, peChatEntryType);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetFollowerCount, 12)
SteamAPICall_t __thiscall winISteamFriends_SteamFriends013_GetFollowerCount(winISteamFriends_SteamFriends013 *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends013_GetFollowerCount(_this->linux_side, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_IsFollowing, 12)
SteamAPICall_t __thiscall winISteamFriends_SteamFriends013_IsFollowing(winISteamFriends_SteamFriends013 *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends013_IsFollowing(_this->linux_side, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_EnumerateFollowingList, 8)
SteamAPICall_t __thiscall winISteamFriends_SteamFriends013_EnumerateFollowingList(winISteamFriends_SteamFriends013 *_this, uint32 unStartIndex)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends013_EnumerateFollowingList(_this->linux_side, unStartIndex);
}

extern vtable_ptr winISteamFriends_SteamFriends013_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamFriends_SteamFriends013,
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_SetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetFriendByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetFriendRelationship)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetFriendPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetFriendPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetFriendGamePlayed)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetFriendPersonaNameHistory)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_HasFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetClanCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetClanByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetClanName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetClanTag)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetClanActivityCounts)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_DownloadClanActivityCounts)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetFriendCountFromSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetFriendFromSourceByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_IsUserInSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_SetInGameVoiceSpeaking)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_ActivateGameOverlay)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_ActivateGameOverlayToUser)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_ActivateGameOverlayToWebPage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_ActivateGameOverlayToStore)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_SetPlayedWith)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_ActivateGameOverlayInviteDialog)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetSmallFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetMediumFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetLargeFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_RequestUserInformation)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_RequestClanOfficerList)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetClanOwner)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetClanOfficerCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetClanOfficerByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetUserRestrictions)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_SetRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_ClearRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetFriendRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetFriendRichPresenceKeyCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetFriendRichPresenceKeyByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_RequestFriendRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_InviteUserToGame)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetCoplayFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetCoplayFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetFriendCoplayTime)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetFriendCoplayGame)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_JoinClanChatRoom)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_LeaveClanChatRoom)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetClanChatMemberCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetChatMemberByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_SendClanChatMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetClanChatMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_IsClanChatAdmin)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_IsClanChatWindowOpenInSteam)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_OpenClanChatWindowInSteam)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_CloseClanChatWindowInSteam)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_SetListenForFriendsMessages)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_ReplyToFriendMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetFriendMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetFollowerCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_IsFollowing)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_EnumerateFollowingList)
    );
#ifndef __GNUC__
}
#endif

winISteamFriends_SteamFriends013 *create_winISteamFriends_SteamFriends013(void *linux_side)
{
    winISteamFriends_SteamFriends013 *r = alloc_mem_for_iface(sizeof(winISteamFriends_SteamFriends013), "SteamFriends013");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamFriends_SteamFriends013_vtable, 63, "SteamFriends013");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamFriends_SteamFriends012.h"

typedef struct __winISteamFriends_SteamFriends012 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamFriends_SteamFriends012;

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetPersonaName, 4)
const char * __thiscall winISteamFriends_SteamFriends012_GetPersonaName(winISteamFriends_SteamFriends012 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends012_GetPersonaName(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_SetPersonaName, 8)
SteamAPICall_t __thiscall winISteamFriends_SteamFriends012_SetPersonaName(winISteamFriends_SteamFriends012 *_this, const char * pchPersonaName)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends012_SetPersonaName(_this->linux_side, pchPersonaName);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetPersonaState, 4)
EPersonaState __thiscall winISteamFriends_SteamFriends012_GetPersonaState(winISteamFriends_SteamFriends012 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends012_GetPersonaState(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetFriendCount, 8)
int __thiscall winISteamFriends_SteamFriends012_GetFriendCount(winISteamFriends_SteamFriends012 *_this, int iFriendFlags)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends012_GetFriendCount(_this->linux_side, iFriendFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetFriendByIndex, 16)
CSteamID *__thiscall winISteamFriends_SteamFriends012_GetFriendByIndex(winISteamFriends_SteamFriends012 *_this, CSteamID *_r, int iFriend, int iFriendFlags)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends012_GetFriendByIndex(_this->linux_side, iFriend, iFriendFlags);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetFriendRelationship, 12)
EFriendRelationship __thiscall winISteamFriends_SteamFriends012_GetFriendRelationship(winISteamFriends_SteamFriends012 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends012_GetFriendRelationship(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetFriendPersonaState, 12)
EPersonaState __thiscall winISteamFriends_SteamFriends012_GetFriendPersonaState(winISteamFriends_SteamFriends012 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends012_GetFriendPersonaState(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetFriendPersonaName, 12)
const char * __thiscall winISteamFriends_SteamFriends012_GetFriendPersonaName(winISteamFriends_SteamFriends012 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends012_GetFriendPersonaName(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetFriendGamePlayed, 16)
bool __thiscall winISteamFriends_SteamFriends012_GetFriendGamePlayed(winISteamFriends_SteamFriends012 *_this, CSteamID steamIDFriend, FriendGameInfo_t * pFriendGameInfo)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends012_GetFriendGamePlayed(_this->linux_side, steamIDFriend, pFriendGameInfo);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetFriendPersonaNameHistory, 16)
const char * __thiscall winISteamFriends_SteamFriends012_GetFriendPersonaNameHistory(winISteamFriends_SteamFriends012 *_this, CSteamID steamIDFriend, int iPersonaName)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends012_GetFriendPersonaNameHistory(_this->linux_side, steamIDFriend, iPersonaName);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_HasFriend, 16)
bool __thiscall winISteamFriends_SteamFriends012_HasFriend(winISteamFriends_SteamFriends012 *_this, CSteamID steamIDFriend, int iFriendFlags)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends012_HasFriend(_this->linux_side, steamIDFriend, iFriendFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetClanCount, 4)
int __thiscall winISteamFriends_SteamFriends012_GetClanCount(winISteamFriends_SteamFriends012 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends012_GetClanCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetClanByIndex, 12)
CSteamID *__thiscall winISteamFriends_SteamFriends012_GetClanByIndex(winISteamFriends_SteamFriends012 *_this, CSteamID *_r, int iClan)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends012_GetClanByIndex(_this->linux_side, iClan);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetClanName, 12)
const char * __thiscall winISteamFriends_SteamFriends012_GetClanName(winISteamFriends_SteamFriends012 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends012_GetClanName(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetClanTag, 12)
const char * __thiscall winISteamFriends_SteamFriends012_GetClanTag(winISteamFriends_SteamFriends012 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends012_GetClanTag(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetClanActivityCounts, 24)
bool __thiscall winISteamFriends_SteamFriends012_GetClanActivityCounts(winISteamFriends_SteamFriends012 *_this, CSteamID steamIDClan, int * pnOnline, int * pnInGame, int * pnChatting)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends012_GetClanActivityCounts(_this->linux_side, steamIDClan, pnOnline, pnInGame, pnChatting);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_DownloadClanActivityCounts, 12)
SteamAPICall_t __thiscall winISteamFriends_SteamFriends012_DownloadClanActivityCounts(winISteamFriends_SteamFriends012 *_this, CSteamID * psteamIDClans, int cClansToRequest)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends012_DownloadClanActivityCounts(_this->linux_side, psteamIDClans, cClansToRequest);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetFriendCountFromSource, 12)
int __thiscall winISteamFriends_SteamFriends012_GetFriendCountFromSource(winISteamFriends_SteamFriends012 *_this, CSteamID steamIDSource)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends012_GetFriendCountFromSource(_this->linux_side, steamIDSource);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetFriendFromSourceByIndex, 20)
CSteamID *__thiscall winISteamFriends_SteamFriends012_GetFriendFromSourceByIndex(winISteamFriends_SteamFriends012 *_this, CSteamID *_r, CSteamID steamIDSource, int iFriend)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends012_GetFriendFromSourceByIndex(_this->linux_side, steamIDSource, iFriend);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_IsUserInSource, 20)
bool __thiscall winISteamFriends_SteamFriends012_IsUserInSource(winISteamFriends_SteamFriends012 *_this, CSteamID steamIDUser, CSteamID steamIDSource)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends012_IsUserInSource(_this->linux_side, steamIDUser, steamIDSource);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_SetInGameVoiceSpeaking, 16)
void __thiscall winISteamFriends_SteamFriends012_SetInGameVoiceSpeaking(winISteamFriends_SteamFriends012 *_this, CSteamID steamIDUser, bool bSpeaking)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends012_SetInGameVoiceSpeaking(_this->linux_side, steamIDUser, bSpeaking);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_ActivateGameOverlay, 8)
void __thiscall winISteamFriends_SteamFriends012_ActivateGameOverlay(winISteamFriends_SteamFriends012 *_this, const char * pchDialog)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends012_ActivateGameOverlay(_this->linux_side, pchDialog);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_ActivateGameOverlayToUser, 16)
void __thiscall winISteamFriends_SteamFriends012_ActivateGameOverlayToUser(winISteamFriends_SteamFriends012 *_this, const char * pchDialog, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends012_ActivateGameOverlayToUser(_this->linux_side, pchDialog, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_ActivateGameOverlayToWebPage, 8)
void __thiscall winISteamFriends_SteamFriends012_ActivateGameOverlayToWebPage(winISteamFriends_SteamFriends012 *_this, const char * pchURL)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends012_ActivateGameOverlayToWebPage(_this->linux_side, pchURL);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_ActivateGameOverlayToStore, 8)
void __thiscall winISteamFriends_SteamFriends012_ActivateGameOverlayToStore(winISteamFriends_SteamFriends012 *_this, AppId_t nAppID)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends012_ActivateGameOverlayToStore(_this->linux_side, nAppID);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_SetPlayedWith, 12)
void __thiscall winISteamFriends_SteamFriends012_SetPlayedWith(winISteamFriends_SteamFriends012 *_this, CSteamID steamIDUserPlayedWith)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends012_SetPlayedWith(_this->linux_side, steamIDUserPlayedWith);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_ActivateGameOverlayInviteDialog, 12)
void __thiscall winISteamFriends_SteamFriends012_ActivateGameOverlayInviteDialog(winISteamFriends_SteamFriends012 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends012_ActivateGameOverlayInviteDialog(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetSmallFriendAvatar, 12)
int __thiscall winISteamFriends_SteamFriends012_GetSmallFriendAvatar(winISteamFriends_SteamFriends012 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends012_GetSmallFriendAvatar(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetMediumFriendAvatar, 12)
int __thiscall winISteamFriends_SteamFriends012_GetMediumFriendAvatar(winISteamFriends_SteamFriends012 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends012_GetMediumFriendAvatar(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetLargeFriendAvatar, 12)
int __thiscall winISteamFriends_SteamFriends012_GetLargeFriendAvatar(winISteamFriends_SteamFriends012 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends012_GetLargeFriendAvatar(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_RequestUserInformation, 16)
bool __thiscall winISteamFriends_SteamFriends012_RequestUserInformation(winISteamFriends_SteamFriends012 *_this, CSteamID steamIDUser, bool bRequireNameOnly)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends012_RequestUserInformation(_this->linux_side, steamIDUser, bRequireNameOnly);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_RequestClanOfficerList, 12)
SteamAPICall_t __thiscall winISteamFriends_SteamFriends012_RequestClanOfficerList(winISteamFriends_SteamFriends012 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends012_RequestClanOfficerList(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetClanOwner, 16)
CSteamID *__thiscall winISteamFriends_SteamFriends012_GetClanOwner(winISteamFriends_SteamFriends012 *_this, CSteamID *_r, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends012_GetClanOwner(_this->linux_side, steamIDClan);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetClanOfficerCount, 12)
int __thiscall winISteamFriends_SteamFriends012_GetClanOfficerCount(winISteamFriends_SteamFriends012 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends012_GetClanOfficerCount(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetClanOfficerByIndex, 20)
CSteamID *__thiscall winISteamFriends_SteamFriends012_GetClanOfficerByIndex(winISteamFriends_SteamFriends012 *_this, CSteamID *_r, CSteamID steamIDClan, int iOfficer)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends012_GetClanOfficerByIndex(_this->linux_side, steamIDClan, iOfficer);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetUserRestrictions, 4)
uint32 __thiscall winISteamFriends_SteamFriends012_GetUserRestrictions(winISteamFriends_SteamFriends012 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends012_GetUserRestrictions(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_SetRichPresence, 12)
bool __thiscall winISteamFriends_SteamFriends012_SetRichPresence(winISteamFriends_SteamFriends012 *_this, const char * pchKey, const char * pchValue)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends012_SetRichPresence(_this->linux_side, pchKey, pchValue);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_ClearRichPresence, 4)
void __thiscall winISteamFriends_SteamFriends012_ClearRichPresence(winISteamFriends_SteamFriends012 *_this)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends012_ClearRichPresence(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetFriendRichPresence, 16)
const char * __thiscall winISteamFriends_SteamFriends012_GetFriendRichPresence(winISteamFriends_SteamFriends012 *_this, CSteamID steamIDFriend, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends012_GetFriendRichPresence(_this->linux_side, steamIDFriend, pchKey);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetFriendRichPresenceKeyCount, 12)
int __thiscall winISteamFriends_SteamFriends012_GetFriendRichPresenceKeyCount(winISteamFriends_SteamFriends012 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends012_GetFriendRichPresenceKeyCount(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetFriendRichPresenceKeyByIndex, 16)
const char * __thiscall winISteamFriends_SteamFriends012_GetFriendRichPresenceKeyByIndex(winISteamFriends_SteamFriends012 *_this, CSteamID steamIDFriend, int iKey)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends012_GetFriendRichPresenceKeyByIndex(_this->linux_side, steamIDFriend, iKey);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_RequestFriendRichPresence, 12)
void __thiscall winISteamFriends_SteamFriends012_RequestFriendRichPresence(winISteamFriends_SteamFriends012 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends012_RequestFriendRichPresence(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_InviteUserToGame, 16)
bool __thiscall winISteamFriends_SteamFriends012_InviteUserToGame(winISteamFriends_SteamFriends012 *_this, CSteamID steamIDFriend, const char * pchConnectString)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends012_InviteUserToGame(_this->linux_side, steamIDFriend, pchConnectString);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetCoplayFriendCount, 4)
int __thiscall winISteamFriends_SteamFriends012_GetCoplayFriendCount(winISteamFriends_SteamFriends012 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends012_GetCoplayFriendCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetCoplayFriend, 12)
CSteamID *__thiscall winISteamFriends_SteamFriends012_GetCoplayFriend(winISteamFriends_SteamFriends012 *_this, CSteamID *_r, int iCoplayFriend)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends012_GetCoplayFriend(_this->linux_side, iCoplayFriend);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetFriendCoplayTime, 12)
int __thiscall winISteamFriends_SteamFriends012_GetFriendCoplayTime(winISteamFriends_SteamFriends012 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends012_GetFriendCoplayTime(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetFriendCoplayGame, 12)
AppId_t __thiscall winISteamFriends_SteamFriends012_GetFriendCoplayGame(winISteamFriends_SteamFriends012 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends012_GetFriendCoplayGame(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_JoinClanChatRoom, 12)
SteamAPICall_t __thiscall winISteamFriends_SteamFriends012_JoinClanChatRoom(winISteamFriends_SteamFriends012 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends012_JoinClanChatRoom(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_LeaveClanChatRoom, 12)
bool __thiscall winISteamFriends_SteamFriends012_LeaveClanChatRoom(winISteamFriends_SteamFriends012 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends012_LeaveClanChatRoom(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetClanChatMemberCount, 12)
int __thiscall winISteamFriends_SteamFriends012_GetClanChatMemberCount(winISteamFriends_SteamFriends012 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends012_GetClanChatMemberCount(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetChatMemberByIndex, 20)
CSteamID *__thiscall winISteamFriends_SteamFriends012_GetChatMemberByIndex(winISteamFriends_SteamFriends012 *_this, CSteamID *_r, CSteamID steamIDClan, int iUser)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends012_GetChatMemberByIndex(_this->linux_side, steamIDClan, iUser);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_SendClanChatMessage, 16)
bool __thiscall winISteamFriends_SteamFriends012_SendClanChatMessage(winISteamFriends_SteamFriends012 *_this, CSteamID steamIDClanChat, const char * pchText)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends012_SendClanChatMessage(_this->linux_side, steamIDClanChat, pchText);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetClanChatMessage, 32)
int __thiscall winISteamFriends_SteamFriends012_GetClanChatMessage(winISteamFriends_SteamFriends012 *_this, CSteamID steamIDClanChat, int iMessage, void * prgchText, int cchTextMax, EChatEntryType * _a, CSteamID * _b)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends012_GetClanChatMessage(_this->linux_side, steamIDClanChat, iMessage, prgchText, cchTextMax, _a, _b);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_IsClanChatAdmin, 20)
bool __thiscall winISteamFriends_SteamFriends012_IsClanChatAdmin(winISteamFriends_SteamFriends012 *_this, CSteamID steamIDClanChat, CSteamID steamIDUser)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends012_IsClanChatAdmin(_this->linux_side, steamIDClanChat, steamIDUser);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_IsClanChatWindowOpenInSteam, 12)
bool __thiscall winISteamFriends_SteamFriends012_IsClanChatWindowOpenInSteam(winISteamFriends_SteamFriends012 *_this, CSteamID steamIDClanChat)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends012_IsClanChatWindowOpenInSteam(_this->linux_side, steamIDClanChat);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_OpenClanChatWindowInSteam, 12)
bool __thiscall winISteamFriends_SteamFriends012_OpenClanChatWindowInSteam(winISteamFriends_SteamFriends012 *_this, CSteamID steamIDClanChat)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends012_OpenClanChatWindowInSteam(_this->linux_side, steamIDClanChat);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_CloseClanChatWindowInSteam, 12)
bool __thiscall winISteamFriends_SteamFriends012_CloseClanChatWindowInSteam(winISteamFriends_SteamFriends012 *_this, CSteamID steamIDClanChat)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends012_CloseClanChatWindowInSteam(_this->linux_side, steamIDClanChat);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_SetListenForFriendsMessages, 8)
bool __thiscall winISteamFriends_SteamFriends012_SetListenForFriendsMessages(winISteamFriends_SteamFriends012 *_this, bool bInterceptEnabled)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends012_SetListenForFriendsMessages(_this->linux_side, bInterceptEnabled);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_ReplyToFriendMessage, 16)
bool __thiscall winISteamFriends_SteamFriends012_ReplyToFriendMessage(winISteamFriends_SteamFriends012 *_this, CSteamID steamIDFriend, const char * pchMsgToSend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends012_ReplyToFriendMessage(_this->linux_side, steamIDFriend, pchMsgToSend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetFriendMessage, 28)
int __thiscall winISteamFriends_SteamFriends012_GetFriendMessage(winISteamFriends_SteamFriends012 *_this, CSteamID steamIDFriend, int iMessageID, void * pvData, int cubData, EChatEntryType * peChatEntryType)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends012_GetFriendMessage(_this->linux_side, steamIDFriend, iMessageID, pvData, cubData, peChatEntryType);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetFollowerCount, 12)
SteamAPICall_t __thiscall winISteamFriends_SteamFriends012_GetFollowerCount(winISteamFriends_SteamFriends012 *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends012_GetFollowerCount(_this->linux_side, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_IsFollowing, 12)
SteamAPICall_t __thiscall winISteamFriends_SteamFriends012_IsFollowing(winISteamFriends_SteamFriends012 *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends012_IsFollowing(_this->linux_side, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_EnumerateFollowingList, 8)
SteamAPICall_t __thiscall winISteamFriends_SteamFriends012_EnumerateFollowingList(winISteamFriends_SteamFriends012 *_this, uint32 unStartIndex)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends012_EnumerateFollowingList(_this->linux_side, unStartIndex);
}

extern vtable_ptr winISteamFriends_SteamFriends012_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamFriends_SteamFriends012,
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_SetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetFriendByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetFriendRelationship)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetFriendPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetFriendPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetFriendGamePlayed)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetFriendPersonaNameHistory)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_HasFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetClanCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetClanByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetClanName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetClanTag)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetClanActivityCounts)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_DownloadClanActivityCounts)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetFriendCountFromSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetFriendFromSourceByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_IsUserInSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_SetInGameVoiceSpeaking)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_ActivateGameOverlay)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_ActivateGameOverlayToUser)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_ActivateGameOverlayToWebPage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_ActivateGameOverlayToStore)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_SetPlayedWith)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_ActivateGameOverlayInviteDialog)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetSmallFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetMediumFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetLargeFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_RequestUserInformation)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_RequestClanOfficerList)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetClanOwner)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetClanOfficerCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetClanOfficerByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetUserRestrictions)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_SetRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_ClearRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetFriendRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetFriendRichPresenceKeyCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetFriendRichPresenceKeyByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_RequestFriendRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_InviteUserToGame)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetCoplayFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetCoplayFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetFriendCoplayTime)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetFriendCoplayGame)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_JoinClanChatRoom)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_LeaveClanChatRoom)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetClanChatMemberCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetChatMemberByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_SendClanChatMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetClanChatMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_IsClanChatAdmin)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_IsClanChatWindowOpenInSteam)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_OpenClanChatWindowInSteam)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_CloseClanChatWindowInSteam)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_SetListenForFriendsMessages)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_ReplyToFriendMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetFriendMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetFollowerCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_IsFollowing)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_EnumerateFollowingList)
    );
#ifndef __GNUC__
}
#endif

winISteamFriends_SteamFriends012 *create_winISteamFriends_SteamFriends012(void *linux_side)
{
    winISteamFriends_SteamFriends012 *r = alloc_mem_for_iface(sizeof(winISteamFriends_SteamFriends012), "SteamFriends012");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamFriends_SteamFriends012_vtable, 63, "SteamFriends012");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamFriends_SteamFriends011.h"

typedef struct __winISteamFriends_SteamFriends011 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamFriends_SteamFriends011;

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetPersonaName, 4)
const char * __thiscall winISteamFriends_SteamFriends011_GetPersonaName(winISteamFriends_SteamFriends011 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends011_GetPersonaName(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_SetPersonaName, 8)
void __thiscall winISteamFriends_SteamFriends011_SetPersonaName(winISteamFriends_SteamFriends011 *_this, const char * pchPersonaName)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends011_SetPersonaName(_this->linux_side, pchPersonaName);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetPersonaState, 4)
EPersonaState __thiscall winISteamFriends_SteamFriends011_GetPersonaState(winISteamFriends_SteamFriends011 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends011_GetPersonaState(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetFriendCount, 8)
int __thiscall winISteamFriends_SteamFriends011_GetFriendCount(winISteamFriends_SteamFriends011 *_this, int iFriendFlags)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends011_GetFriendCount(_this->linux_side, iFriendFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetFriendByIndex, 16)
CSteamID *__thiscall winISteamFriends_SteamFriends011_GetFriendByIndex(winISteamFriends_SteamFriends011 *_this, CSteamID *_r, int iFriend, int iFriendFlags)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends011_GetFriendByIndex(_this->linux_side, iFriend, iFriendFlags);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetFriendRelationship, 12)
EFriendRelationship __thiscall winISteamFriends_SteamFriends011_GetFriendRelationship(winISteamFriends_SteamFriends011 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends011_GetFriendRelationship(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetFriendPersonaState, 12)
EPersonaState __thiscall winISteamFriends_SteamFriends011_GetFriendPersonaState(winISteamFriends_SteamFriends011 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends011_GetFriendPersonaState(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetFriendPersonaName, 12)
const char * __thiscall winISteamFriends_SteamFriends011_GetFriendPersonaName(winISteamFriends_SteamFriends011 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends011_GetFriendPersonaName(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetFriendGamePlayed, 16)
bool __thiscall winISteamFriends_SteamFriends011_GetFriendGamePlayed(winISteamFriends_SteamFriends011 *_this, CSteamID steamIDFriend, FriendGameInfo_t * pFriendGameInfo)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends011_GetFriendGamePlayed(_this->linux_side, steamIDFriend, pFriendGameInfo);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetFriendPersonaNameHistory, 16)
const char * __thiscall winISteamFriends_SteamFriends011_GetFriendPersonaNameHistory(winISteamFriends_SteamFriends011 *_this, CSteamID steamIDFriend, int iPersonaName)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends011_GetFriendPersonaNameHistory(_this->linux_side, steamIDFriend, iPersonaName);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_HasFriend, 16)
bool __thiscall winISteamFriends_SteamFriends011_HasFriend(winISteamFriends_SteamFriends011 *_this, CSteamID steamIDFriend, int iFriendFlags)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends011_HasFriend(_this->linux_side, steamIDFriend, iFriendFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetClanCount, 4)
int __thiscall winISteamFriends_SteamFriends011_GetClanCount(winISteamFriends_SteamFriends011 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends011_GetClanCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetClanByIndex, 12)
CSteamID *__thiscall winISteamFriends_SteamFriends011_GetClanByIndex(winISteamFriends_SteamFriends011 *_this, CSteamID *_r, int iClan)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends011_GetClanByIndex(_this->linux_side, iClan);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetClanName, 12)
const char * __thiscall winISteamFriends_SteamFriends011_GetClanName(winISteamFriends_SteamFriends011 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends011_GetClanName(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetClanTag, 12)
const char * __thiscall winISteamFriends_SteamFriends011_GetClanTag(winISteamFriends_SteamFriends011 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends011_GetClanTag(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetClanActivityCounts, 24)
bool __thiscall winISteamFriends_SteamFriends011_GetClanActivityCounts(winISteamFriends_SteamFriends011 *_this, CSteamID steamIDClan, int * pnOnline, int * pnInGame, int * pnChatting)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends011_GetClanActivityCounts(_this->linux_side, steamIDClan, pnOnline, pnInGame, pnChatting);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_DownloadClanActivityCounts, 12)
SteamAPICall_t __thiscall winISteamFriends_SteamFriends011_DownloadClanActivityCounts(winISteamFriends_SteamFriends011 *_this, CSteamID * psteamIDClans, int cClansToRequest)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends011_DownloadClanActivityCounts(_this->linux_side, psteamIDClans, cClansToRequest);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetFriendCountFromSource, 12)
int __thiscall winISteamFriends_SteamFriends011_GetFriendCountFromSource(winISteamFriends_SteamFriends011 *_this, CSteamID steamIDSource)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends011_GetFriendCountFromSource(_this->linux_side, steamIDSource);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetFriendFromSourceByIndex, 20)
CSteamID *__thiscall winISteamFriends_SteamFriends011_GetFriendFromSourceByIndex(winISteamFriends_SteamFriends011 *_this, CSteamID *_r, CSteamID steamIDSource, int iFriend)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends011_GetFriendFromSourceByIndex(_this->linux_side, steamIDSource, iFriend);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_IsUserInSource, 20)
bool __thiscall winISteamFriends_SteamFriends011_IsUserInSource(winISteamFriends_SteamFriends011 *_this, CSteamID steamIDUser, CSteamID steamIDSource)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends011_IsUserInSource(_this->linux_side, steamIDUser, steamIDSource);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_SetInGameVoiceSpeaking, 16)
void __thiscall winISteamFriends_SteamFriends011_SetInGameVoiceSpeaking(winISteamFriends_SteamFriends011 *_this, CSteamID steamIDUser, bool bSpeaking)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends011_SetInGameVoiceSpeaking(_this->linux_side, steamIDUser, bSpeaking);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_ActivateGameOverlay, 8)
void __thiscall winISteamFriends_SteamFriends011_ActivateGameOverlay(winISteamFriends_SteamFriends011 *_this, const char * pchDialog)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends011_ActivateGameOverlay(_this->linux_side, pchDialog);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_ActivateGameOverlayToUser, 16)
void __thiscall winISteamFriends_SteamFriends011_ActivateGameOverlayToUser(winISteamFriends_SteamFriends011 *_this, const char * pchDialog, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends011_ActivateGameOverlayToUser(_this->linux_side, pchDialog, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_ActivateGameOverlayToWebPage, 8)
void __thiscall winISteamFriends_SteamFriends011_ActivateGameOverlayToWebPage(winISteamFriends_SteamFriends011 *_this, const char * pchURL)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends011_ActivateGameOverlayToWebPage(_this->linux_side, pchURL);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_ActivateGameOverlayToStore, 8)
void __thiscall winISteamFriends_SteamFriends011_ActivateGameOverlayToStore(winISteamFriends_SteamFriends011 *_this, AppId_t nAppID)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends011_ActivateGameOverlayToStore(_this->linux_side, nAppID);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_SetPlayedWith, 12)
void __thiscall winISteamFriends_SteamFriends011_SetPlayedWith(winISteamFriends_SteamFriends011 *_this, CSteamID steamIDUserPlayedWith)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends011_SetPlayedWith(_this->linux_side, steamIDUserPlayedWith);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_ActivateGameOverlayInviteDialog, 12)
void __thiscall winISteamFriends_SteamFriends011_ActivateGameOverlayInviteDialog(winISteamFriends_SteamFriends011 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends011_ActivateGameOverlayInviteDialog(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetSmallFriendAvatar, 12)
int __thiscall winISteamFriends_SteamFriends011_GetSmallFriendAvatar(winISteamFriends_SteamFriends011 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends011_GetSmallFriendAvatar(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetMediumFriendAvatar, 12)
int __thiscall winISteamFriends_SteamFriends011_GetMediumFriendAvatar(winISteamFriends_SteamFriends011 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends011_GetMediumFriendAvatar(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetLargeFriendAvatar, 12)
int __thiscall winISteamFriends_SteamFriends011_GetLargeFriendAvatar(winISteamFriends_SteamFriends011 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends011_GetLargeFriendAvatar(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_RequestUserInformation, 16)
bool __thiscall winISteamFriends_SteamFriends011_RequestUserInformation(winISteamFriends_SteamFriends011 *_this, CSteamID steamIDUser, bool bRequireNameOnly)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends011_RequestUserInformation(_this->linux_side, steamIDUser, bRequireNameOnly);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_RequestClanOfficerList, 12)
SteamAPICall_t __thiscall winISteamFriends_SteamFriends011_RequestClanOfficerList(winISteamFriends_SteamFriends011 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends011_RequestClanOfficerList(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetClanOwner, 16)
CSteamID *__thiscall winISteamFriends_SteamFriends011_GetClanOwner(winISteamFriends_SteamFriends011 *_this, CSteamID *_r, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends011_GetClanOwner(_this->linux_side, steamIDClan);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetClanOfficerCount, 12)
int __thiscall winISteamFriends_SteamFriends011_GetClanOfficerCount(winISteamFriends_SteamFriends011 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends011_GetClanOfficerCount(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetClanOfficerByIndex, 20)
CSteamID *__thiscall winISteamFriends_SteamFriends011_GetClanOfficerByIndex(winISteamFriends_SteamFriends011 *_this, CSteamID *_r, CSteamID steamIDClan, int iOfficer)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends011_GetClanOfficerByIndex(_this->linux_side, steamIDClan, iOfficer);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetUserRestrictions, 4)
uint32 __thiscall winISteamFriends_SteamFriends011_GetUserRestrictions(winISteamFriends_SteamFriends011 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends011_GetUserRestrictions(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_SetRichPresence, 12)
bool __thiscall winISteamFriends_SteamFriends011_SetRichPresence(winISteamFriends_SteamFriends011 *_this, const char * pchKey, const char * pchValue)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends011_SetRichPresence(_this->linux_side, pchKey, pchValue);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_ClearRichPresence, 4)
void __thiscall winISteamFriends_SteamFriends011_ClearRichPresence(winISteamFriends_SteamFriends011 *_this)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends011_ClearRichPresence(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetFriendRichPresence, 16)
const char * __thiscall winISteamFriends_SteamFriends011_GetFriendRichPresence(winISteamFriends_SteamFriends011 *_this, CSteamID steamIDFriend, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends011_GetFriendRichPresence(_this->linux_side, steamIDFriend, pchKey);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetFriendRichPresenceKeyCount, 12)
int __thiscall winISteamFriends_SteamFriends011_GetFriendRichPresenceKeyCount(winISteamFriends_SteamFriends011 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends011_GetFriendRichPresenceKeyCount(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetFriendRichPresenceKeyByIndex, 16)
const char * __thiscall winISteamFriends_SteamFriends011_GetFriendRichPresenceKeyByIndex(winISteamFriends_SteamFriends011 *_this, CSteamID steamIDFriend, int iKey)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends011_GetFriendRichPresenceKeyByIndex(_this->linux_side, steamIDFriend, iKey);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_RequestFriendRichPresence, 12)
void __thiscall winISteamFriends_SteamFriends011_RequestFriendRichPresence(winISteamFriends_SteamFriends011 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends011_RequestFriendRichPresence(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_InviteUserToGame, 16)
bool __thiscall winISteamFriends_SteamFriends011_InviteUserToGame(winISteamFriends_SteamFriends011 *_this, CSteamID steamIDFriend, const char * pchConnectString)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends011_InviteUserToGame(_this->linux_side, steamIDFriend, pchConnectString);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetCoplayFriendCount, 4)
int __thiscall winISteamFriends_SteamFriends011_GetCoplayFriendCount(winISteamFriends_SteamFriends011 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends011_GetCoplayFriendCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetCoplayFriend, 12)
CSteamID *__thiscall winISteamFriends_SteamFriends011_GetCoplayFriend(winISteamFriends_SteamFriends011 *_this, CSteamID *_r, int iCoplayFriend)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends011_GetCoplayFriend(_this->linux_side, iCoplayFriend);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetFriendCoplayTime, 12)
int __thiscall winISteamFriends_SteamFriends011_GetFriendCoplayTime(winISteamFriends_SteamFriends011 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends011_GetFriendCoplayTime(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetFriendCoplayGame, 12)
AppId_t __thiscall winISteamFriends_SteamFriends011_GetFriendCoplayGame(winISteamFriends_SteamFriends011 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends011_GetFriendCoplayGame(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_JoinClanChatRoom, 12)
SteamAPICall_t __thiscall winISteamFriends_SteamFriends011_JoinClanChatRoom(winISteamFriends_SteamFriends011 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends011_JoinClanChatRoom(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_LeaveClanChatRoom, 12)
bool __thiscall winISteamFriends_SteamFriends011_LeaveClanChatRoom(winISteamFriends_SteamFriends011 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends011_LeaveClanChatRoom(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetClanChatMemberCount, 12)
int __thiscall winISteamFriends_SteamFriends011_GetClanChatMemberCount(winISteamFriends_SteamFriends011 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends011_GetClanChatMemberCount(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetChatMemberByIndex, 20)
CSteamID *__thiscall winISteamFriends_SteamFriends011_GetChatMemberByIndex(winISteamFriends_SteamFriends011 *_this, CSteamID *_r, CSteamID steamIDClan, int iUser)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends011_GetChatMemberByIndex(_this->linux_side, steamIDClan, iUser);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_SendClanChatMessage, 16)
bool __thiscall winISteamFriends_SteamFriends011_SendClanChatMessage(winISteamFriends_SteamFriends011 *_this, CSteamID steamIDClanChat, const char * pchText)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends011_SendClanChatMessage(_this->linux_side, steamIDClanChat, pchText);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetClanChatMessage, 32)
int __thiscall winISteamFriends_SteamFriends011_GetClanChatMessage(winISteamFriends_SteamFriends011 *_this, CSteamID steamIDClanChat, int iMessage, void * prgchText, int cchTextMax, EChatEntryType * _a, CSteamID * _b)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends011_GetClanChatMessage(_this->linux_side, steamIDClanChat, iMessage, prgchText, cchTextMax, _a, _b);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_IsClanChatAdmin, 20)
bool __thiscall winISteamFriends_SteamFriends011_IsClanChatAdmin(winISteamFriends_SteamFriends011 *_this, CSteamID steamIDClanChat, CSteamID steamIDUser)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends011_IsClanChatAdmin(_this->linux_side, steamIDClanChat, steamIDUser);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_IsClanChatWindowOpenInSteam, 12)
bool __thiscall winISteamFriends_SteamFriends011_IsClanChatWindowOpenInSteam(winISteamFriends_SteamFriends011 *_this, CSteamID steamIDClanChat)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends011_IsClanChatWindowOpenInSteam(_this->linux_side, steamIDClanChat);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_OpenClanChatWindowInSteam, 12)
bool __thiscall winISteamFriends_SteamFriends011_OpenClanChatWindowInSteam(winISteamFriends_SteamFriends011 *_this, CSteamID steamIDClanChat)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends011_OpenClanChatWindowInSteam(_this->linux_side, steamIDClanChat);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_CloseClanChatWindowInSteam, 12)
bool __thiscall winISteamFriends_SteamFriends011_CloseClanChatWindowInSteam(winISteamFriends_SteamFriends011 *_this, CSteamID steamIDClanChat)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends011_CloseClanChatWindowInSteam(_this->linux_side, steamIDClanChat);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_SetListenForFriendsMessages, 8)
bool __thiscall winISteamFriends_SteamFriends011_SetListenForFriendsMessages(winISteamFriends_SteamFriends011 *_this, bool bInterceptEnabled)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends011_SetListenForFriendsMessages(_this->linux_side, bInterceptEnabled);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_ReplyToFriendMessage, 16)
bool __thiscall winISteamFriends_SteamFriends011_ReplyToFriendMessage(winISteamFriends_SteamFriends011 *_this, CSteamID steamIDFriend, const char * pchMsgToSend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends011_ReplyToFriendMessage(_this->linux_side, steamIDFriend, pchMsgToSend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetFriendMessage, 28)
int __thiscall winISteamFriends_SteamFriends011_GetFriendMessage(winISteamFriends_SteamFriends011 *_this, CSteamID steamIDFriend, int iMessageID, void * pvData, int cubData, EChatEntryType * peChatEntryType)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends011_GetFriendMessage(_this->linux_side, steamIDFriend, iMessageID, pvData, cubData, peChatEntryType);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetFollowerCount, 12)
SteamAPICall_t __thiscall winISteamFriends_SteamFriends011_GetFollowerCount(winISteamFriends_SteamFriends011 *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends011_GetFollowerCount(_this->linux_side, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_IsFollowing, 12)
SteamAPICall_t __thiscall winISteamFriends_SteamFriends011_IsFollowing(winISteamFriends_SteamFriends011 *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends011_IsFollowing(_this->linux_side, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_EnumerateFollowingList, 8)
SteamAPICall_t __thiscall winISteamFriends_SteamFriends011_EnumerateFollowingList(winISteamFriends_SteamFriends011 *_this, uint32 unStartIndex)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends011_EnumerateFollowingList(_this->linux_side, unStartIndex);
}

extern vtable_ptr winISteamFriends_SteamFriends011_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamFriends_SteamFriends011,
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_SetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetFriendByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetFriendRelationship)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetFriendPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetFriendPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetFriendGamePlayed)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetFriendPersonaNameHistory)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_HasFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetClanCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetClanByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetClanName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetClanTag)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetClanActivityCounts)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_DownloadClanActivityCounts)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetFriendCountFromSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetFriendFromSourceByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_IsUserInSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_SetInGameVoiceSpeaking)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_ActivateGameOverlay)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_ActivateGameOverlayToUser)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_ActivateGameOverlayToWebPage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_ActivateGameOverlayToStore)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_SetPlayedWith)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_ActivateGameOverlayInviteDialog)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetSmallFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetMediumFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetLargeFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_RequestUserInformation)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_RequestClanOfficerList)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetClanOwner)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetClanOfficerCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetClanOfficerByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetUserRestrictions)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_SetRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_ClearRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetFriendRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetFriendRichPresenceKeyCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetFriendRichPresenceKeyByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_RequestFriendRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_InviteUserToGame)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetCoplayFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetCoplayFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetFriendCoplayTime)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetFriendCoplayGame)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_JoinClanChatRoom)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_LeaveClanChatRoom)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetClanChatMemberCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetChatMemberByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_SendClanChatMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetClanChatMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_IsClanChatAdmin)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_IsClanChatWindowOpenInSteam)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_OpenClanChatWindowInSteam)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_CloseClanChatWindowInSteam)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_SetListenForFriendsMessages)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_ReplyToFriendMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetFriendMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetFollowerCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_IsFollowing)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_EnumerateFollowingList)
    );
#ifndef __GNUC__
}
#endif

winISteamFriends_SteamFriends011 *create_winISteamFriends_SteamFriends011(void *linux_side)
{
    winISteamFriends_SteamFriends011 *r = alloc_mem_for_iface(sizeof(winISteamFriends_SteamFriends011), "SteamFriends011");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamFriends_SteamFriends011_vtable, 63, "SteamFriends011");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamFriends_SteamFriends010.h"

typedef struct __winISteamFriends_SteamFriends010 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamFriends_SteamFriends010;

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetPersonaName, 4)
const char * __thiscall winISteamFriends_SteamFriends010_GetPersonaName(winISteamFriends_SteamFriends010 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends010_GetPersonaName(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_SetPersonaName, 8)
void __thiscall winISteamFriends_SteamFriends010_SetPersonaName(winISteamFriends_SteamFriends010 *_this, const char * pchPersonaName)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends010_SetPersonaName(_this->linux_side, pchPersonaName);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetPersonaState, 4)
EPersonaState __thiscall winISteamFriends_SteamFriends010_GetPersonaState(winISteamFriends_SteamFriends010 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends010_GetPersonaState(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetFriendCount, 8)
int __thiscall winISteamFriends_SteamFriends010_GetFriendCount(winISteamFriends_SteamFriends010 *_this, int iFriendFlags)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends010_GetFriendCount(_this->linux_side, iFriendFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetFriendByIndex, 16)
CSteamID *__thiscall winISteamFriends_SteamFriends010_GetFriendByIndex(winISteamFriends_SteamFriends010 *_this, CSteamID *_r, int iFriend, int iFriendFlags)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends010_GetFriendByIndex(_this->linux_side, iFriend, iFriendFlags);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetFriendRelationship, 12)
EFriendRelationship __thiscall winISteamFriends_SteamFriends010_GetFriendRelationship(winISteamFriends_SteamFriends010 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends010_GetFriendRelationship(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetFriendPersonaState, 12)
EPersonaState __thiscall winISteamFriends_SteamFriends010_GetFriendPersonaState(winISteamFriends_SteamFriends010 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends010_GetFriendPersonaState(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetFriendPersonaName, 12)
const char * __thiscall winISteamFriends_SteamFriends010_GetFriendPersonaName(winISteamFriends_SteamFriends010 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends010_GetFriendPersonaName(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetFriendGamePlayed, 16)
bool __thiscall winISteamFriends_SteamFriends010_GetFriendGamePlayed(winISteamFriends_SteamFriends010 *_this, CSteamID steamIDFriend, FriendGameInfo_t * pFriendGameInfo)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends010_GetFriendGamePlayed(_this->linux_side, steamIDFriend, pFriendGameInfo);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetFriendPersonaNameHistory, 16)
const char * __thiscall winISteamFriends_SteamFriends010_GetFriendPersonaNameHistory(winISteamFriends_SteamFriends010 *_this, CSteamID steamIDFriend, int iPersonaName)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends010_GetFriendPersonaNameHistory(_this->linux_side, steamIDFriend, iPersonaName);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_HasFriend, 16)
bool __thiscall winISteamFriends_SteamFriends010_HasFriend(winISteamFriends_SteamFriends010 *_this, CSteamID steamIDFriend, int iFriendFlags)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends010_HasFriend(_this->linux_side, steamIDFriend, iFriendFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetClanCount, 4)
int __thiscall winISteamFriends_SteamFriends010_GetClanCount(winISteamFriends_SteamFriends010 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends010_GetClanCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetClanByIndex, 12)
CSteamID *__thiscall winISteamFriends_SteamFriends010_GetClanByIndex(winISteamFriends_SteamFriends010 *_this, CSteamID *_r, int iClan)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends010_GetClanByIndex(_this->linux_side, iClan);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetClanName, 12)
const char * __thiscall winISteamFriends_SteamFriends010_GetClanName(winISteamFriends_SteamFriends010 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends010_GetClanName(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetClanTag, 12)
const char * __thiscall winISteamFriends_SteamFriends010_GetClanTag(winISteamFriends_SteamFriends010 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends010_GetClanTag(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetClanActivityCounts, 24)
bool __thiscall winISteamFriends_SteamFriends010_GetClanActivityCounts(winISteamFriends_SteamFriends010 *_this, CSteamID steamIDClan, int * pnOnline, int * pnInGame, int * pnChatting)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends010_GetClanActivityCounts(_this->linux_side, steamIDClan, pnOnline, pnInGame, pnChatting);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_DownloadClanActivityCounts, 12)
SteamAPICall_t __thiscall winISteamFriends_SteamFriends010_DownloadClanActivityCounts(winISteamFriends_SteamFriends010 *_this, CSteamID * psteamIDClans, int cClansToRequest)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends010_DownloadClanActivityCounts(_this->linux_side, psteamIDClans, cClansToRequest);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetFriendCountFromSource, 12)
int __thiscall winISteamFriends_SteamFriends010_GetFriendCountFromSource(winISteamFriends_SteamFriends010 *_this, CSteamID steamIDSource)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends010_GetFriendCountFromSource(_this->linux_side, steamIDSource);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetFriendFromSourceByIndex, 20)
CSteamID *__thiscall winISteamFriends_SteamFriends010_GetFriendFromSourceByIndex(winISteamFriends_SteamFriends010 *_this, CSteamID *_r, CSteamID steamIDSource, int iFriend)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends010_GetFriendFromSourceByIndex(_this->linux_side, steamIDSource, iFriend);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_IsUserInSource, 20)
bool __thiscall winISteamFriends_SteamFriends010_IsUserInSource(winISteamFriends_SteamFriends010 *_this, CSteamID steamIDUser, CSteamID steamIDSource)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends010_IsUserInSource(_this->linux_side, steamIDUser, steamIDSource);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_SetInGameVoiceSpeaking, 16)
void __thiscall winISteamFriends_SteamFriends010_SetInGameVoiceSpeaking(winISteamFriends_SteamFriends010 *_this, CSteamID steamIDUser, bool bSpeaking)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends010_SetInGameVoiceSpeaking(_this->linux_side, steamIDUser, bSpeaking);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_ActivateGameOverlay, 8)
void __thiscall winISteamFriends_SteamFriends010_ActivateGameOverlay(winISteamFriends_SteamFriends010 *_this, const char * pchDialog)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends010_ActivateGameOverlay(_this->linux_side, pchDialog);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_ActivateGameOverlayToUser, 16)
void __thiscall winISteamFriends_SteamFriends010_ActivateGameOverlayToUser(winISteamFriends_SteamFriends010 *_this, const char * pchDialog, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends010_ActivateGameOverlayToUser(_this->linux_side, pchDialog, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_ActivateGameOverlayToWebPage, 8)
void __thiscall winISteamFriends_SteamFriends010_ActivateGameOverlayToWebPage(winISteamFriends_SteamFriends010 *_this, const char * pchURL)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends010_ActivateGameOverlayToWebPage(_this->linux_side, pchURL);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_ActivateGameOverlayToStore, 8)
void __thiscall winISteamFriends_SteamFriends010_ActivateGameOverlayToStore(winISteamFriends_SteamFriends010 *_this, AppId_t nAppID)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends010_ActivateGameOverlayToStore(_this->linux_side, nAppID);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_SetPlayedWith, 12)
void __thiscall winISteamFriends_SteamFriends010_SetPlayedWith(winISteamFriends_SteamFriends010 *_this, CSteamID steamIDUserPlayedWith)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends010_SetPlayedWith(_this->linux_side, steamIDUserPlayedWith);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_ActivateGameOverlayInviteDialog, 12)
void __thiscall winISteamFriends_SteamFriends010_ActivateGameOverlayInviteDialog(winISteamFriends_SteamFriends010 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends010_ActivateGameOverlayInviteDialog(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetSmallFriendAvatar, 12)
int __thiscall winISteamFriends_SteamFriends010_GetSmallFriendAvatar(winISteamFriends_SteamFriends010 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends010_GetSmallFriendAvatar(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetMediumFriendAvatar, 12)
int __thiscall winISteamFriends_SteamFriends010_GetMediumFriendAvatar(winISteamFriends_SteamFriends010 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends010_GetMediumFriendAvatar(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetLargeFriendAvatar, 12)
int __thiscall winISteamFriends_SteamFriends010_GetLargeFriendAvatar(winISteamFriends_SteamFriends010 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends010_GetLargeFriendAvatar(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_RequestUserInformation, 16)
bool __thiscall winISteamFriends_SteamFriends010_RequestUserInformation(winISteamFriends_SteamFriends010 *_this, CSteamID steamIDUser, bool bRequireNameOnly)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends010_RequestUserInformation(_this->linux_side, steamIDUser, bRequireNameOnly);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_RequestClanOfficerList, 12)
SteamAPICall_t __thiscall winISteamFriends_SteamFriends010_RequestClanOfficerList(winISteamFriends_SteamFriends010 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends010_RequestClanOfficerList(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetClanOwner, 16)
CSteamID *__thiscall winISteamFriends_SteamFriends010_GetClanOwner(winISteamFriends_SteamFriends010 *_this, CSteamID *_r, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends010_GetClanOwner(_this->linux_side, steamIDClan);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetClanOfficerCount, 12)
int __thiscall winISteamFriends_SteamFriends010_GetClanOfficerCount(winISteamFriends_SteamFriends010 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends010_GetClanOfficerCount(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetClanOfficerByIndex, 20)
CSteamID *__thiscall winISteamFriends_SteamFriends010_GetClanOfficerByIndex(winISteamFriends_SteamFriends010 *_this, CSteamID *_r, CSteamID steamIDClan, int iOfficer)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends010_GetClanOfficerByIndex(_this->linux_side, steamIDClan, iOfficer);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetUserRestrictions, 4)
uint32 __thiscall winISteamFriends_SteamFriends010_GetUserRestrictions(winISteamFriends_SteamFriends010 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends010_GetUserRestrictions(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_SetRichPresence, 12)
bool __thiscall winISteamFriends_SteamFriends010_SetRichPresence(winISteamFriends_SteamFriends010 *_this, const char * pchKey, const char * pchValue)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends010_SetRichPresence(_this->linux_side, pchKey, pchValue);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_ClearRichPresence, 4)
void __thiscall winISteamFriends_SteamFriends010_ClearRichPresence(winISteamFriends_SteamFriends010 *_this)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends010_ClearRichPresence(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetFriendRichPresence, 16)
const char * __thiscall winISteamFriends_SteamFriends010_GetFriendRichPresence(winISteamFriends_SteamFriends010 *_this, CSteamID steamIDFriend, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends010_GetFriendRichPresence(_this->linux_side, steamIDFriend, pchKey);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetFriendRichPresenceKeyCount, 12)
int __thiscall winISteamFriends_SteamFriends010_GetFriendRichPresenceKeyCount(winISteamFriends_SteamFriends010 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends010_GetFriendRichPresenceKeyCount(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetFriendRichPresenceKeyByIndex, 16)
const char * __thiscall winISteamFriends_SteamFriends010_GetFriendRichPresenceKeyByIndex(winISteamFriends_SteamFriends010 *_this, CSteamID steamIDFriend, int iKey)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends010_GetFriendRichPresenceKeyByIndex(_this->linux_side, steamIDFriend, iKey);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_InviteUserToGame, 16)
bool __thiscall winISteamFriends_SteamFriends010_InviteUserToGame(winISteamFriends_SteamFriends010 *_this, CSteamID steamIDFriend, const char * pchConnectString)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends010_InviteUserToGame(_this->linux_side, steamIDFriend, pchConnectString);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetCoplayFriendCount, 4)
int __thiscall winISteamFriends_SteamFriends010_GetCoplayFriendCount(winISteamFriends_SteamFriends010 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends010_GetCoplayFriendCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetCoplayFriend, 12)
CSteamID *__thiscall winISteamFriends_SteamFriends010_GetCoplayFriend(winISteamFriends_SteamFriends010 *_this, CSteamID *_r, int iCoplayFriend)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends010_GetCoplayFriend(_this->linux_side, iCoplayFriend);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetFriendCoplayTime, 12)
int __thiscall winISteamFriends_SteamFriends010_GetFriendCoplayTime(winISteamFriends_SteamFriends010 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends010_GetFriendCoplayTime(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetFriendCoplayGame, 12)
AppId_t __thiscall winISteamFriends_SteamFriends010_GetFriendCoplayGame(winISteamFriends_SteamFriends010 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends010_GetFriendCoplayGame(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_JoinClanChatRoom, 12)
SteamAPICall_t __thiscall winISteamFriends_SteamFriends010_JoinClanChatRoom(winISteamFriends_SteamFriends010 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends010_JoinClanChatRoom(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_LeaveClanChatRoom, 12)
bool __thiscall winISteamFriends_SteamFriends010_LeaveClanChatRoom(winISteamFriends_SteamFriends010 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends010_LeaveClanChatRoom(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetClanChatMemberCount, 12)
int __thiscall winISteamFriends_SteamFriends010_GetClanChatMemberCount(winISteamFriends_SteamFriends010 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends010_GetClanChatMemberCount(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetChatMemberByIndex, 20)
CSteamID *__thiscall winISteamFriends_SteamFriends010_GetChatMemberByIndex(winISteamFriends_SteamFriends010 *_this, CSteamID *_r, CSteamID steamIDClan, int iUser)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends010_GetChatMemberByIndex(_this->linux_side, steamIDClan, iUser);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_SendClanChatMessage, 16)
bool __thiscall winISteamFriends_SteamFriends010_SendClanChatMessage(winISteamFriends_SteamFriends010 *_this, CSteamID steamIDClanChat, const char * pchText)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends010_SendClanChatMessage(_this->linux_side, steamIDClanChat, pchText);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetClanChatMessage, 32)
int __thiscall winISteamFriends_SteamFriends010_GetClanChatMessage(winISteamFriends_SteamFriends010 *_this, CSteamID steamIDClanChat, int iMessage, void * prgchText, int cchTextMax, EChatEntryType * _a, CSteamID * _b)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends010_GetClanChatMessage(_this->linux_side, steamIDClanChat, iMessage, prgchText, cchTextMax, _a, _b);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_IsClanChatAdmin, 20)
bool __thiscall winISteamFriends_SteamFriends010_IsClanChatAdmin(winISteamFriends_SteamFriends010 *_this, CSteamID steamIDClanChat, CSteamID steamIDUser)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends010_IsClanChatAdmin(_this->linux_side, steamIDClanChat, steamIDUser);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_IsClanChatWindowOpenInSteam, 12)
bool __thiscall winISteamFriends_SteamFriends010_IsClanChatWindowOpenInSteam(winISteamFriends_SteamFriends010 *_this, CSteamID steamIDClanChat)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends010_IsClanChatWindowOpenInSteam(_this->linux_side, steamIDClanChat);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_OpenClanChatWindowInSteam, 12)
bool __thiscall winISteamFriends_SteamFriends010_OpenClanChatWindowInSteam(winISteamFriends_SteamFriends010 *_this, CSteamID steamIDClanChat)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends010_OpenClanChatWindowInSteam(_this->linux_side, steamIDClanChat);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_CloseClanChatWindowInSteam, 12)
bool __thiscall winISteamFriends_SteamFriends010_CloseClanChatWindowInSteam(winISteamFriends_SteamFriends010 *_this, CSteamID steamIDClanChat)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends010_CloseClanChatWindowInSteam(_this->linux_side, steamIDClanChat);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_SetListenForFriendsMessages, 8)
bool __thiscall winISteamFriends_SteamFriends010_SetListenForFriendsMessages(winISteamFriends_SteamFriends010 *_this, bool bInterceptEnabled)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends010_SetListenForFriendsMessages(_this->linux_side, bInterceptEnabled);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_ReplyToFriendMessage, 16)
bool __thiscall winISteamFriends_SteamFriends010_ReplyToFriendMessage(winISteamFriends_SteamFriends010 *_this, CSteamID steamIDFriend, const char * pchMsgToSend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends010_ReplyToFriendMessage(_this->linux_side, steamIDFriend, pchMsgToSend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetFriendMessage, 28)
int __thiscall winISteamFriends_SteamFriends010_GetFriendMessage(winISteamFriends_SteamFriends010 *_this, CSteamID steamIDFriend, int iMessageID, void * pvData, int cubData, EChatEntryType * peChatEntryType)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends010_GetFriendMessage(_this->linux_side, steamIDFriend, iMessageID, pvData, cubData, peChatEntryType);
}

extern vtable_ptr winISteamFriends_SteamFriends010_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamFriends_SteamFriends010,
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_SetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetFriendByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetFriendRelationship)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetFriendPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetFriendPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetFriendGamePlayed)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetFriendPersonaNameHistory)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_HasFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetClanCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetClanByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetClanName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetClanTag)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetClanActivityCounts)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_DownloadClanActivityCounts)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetFriendCountFromSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetFriendFromSourceByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_IsUserInSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_SetInGameVoiceSpeaking)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_ActivateGameOverlay)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_ActivateGameOverlayToUser)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_ActivateGameOverlayToWebPage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_ActivateGameOverlayToStore)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_SetPlayedWith)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_ActivateGameOverlayInviteDialog)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetSmallFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetMediumFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetLargeFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_RequestUserInformation)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_RequestClanOfficerList)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetClanOwner)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetClanOfficerCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetClanOfficerByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetUserRestrictions)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_SetRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_ClearRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetFriendRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetFriendRichPresenceKeyCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetFriendRichPresenceKeyByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_InviteUserToGame)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetCoplayFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetCoplayFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetFriendCoplayTime)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetFriendCoplayGame)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_JoinClanChatRoom)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_LeaveClanChatRoom)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetClanChatMemberCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetChatMemberByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_SendClanChatMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetClanChatMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_IsClanChatAdmin)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_IsClanChatWindowOpenInSteam)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_OpenClanChatWindowInSteam)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_CloseClanChatWindowInSteam)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_SetListenForFriendsMessages)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_ReplyToFriendMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetFriendMessage)
    );
#ifndef __GNUC__
}
#endif

winISteamFriends_SteamFriends010 *create_winISteamFriends_SteamFriends010(void *linux_side)
{
    winISteamFriends_SteamFriends010 *r = alloc_mem_for_iface(sizeof(winISteamFriends_SteamFriends010), "SteamFriends010");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamFriends_SteamFriends010_vtable, 59, "SteamFriends010");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamFriends_SteamFriends009.h"

typedef struct __winISteamFriends_SteamFriends009 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamFriends_SteamFriends009;

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetPersonaName, 4)
const char * __thiscall winISteamFriends_SteamFriends009_GetPersonaName(winISteamFriends_SteamFriends009 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends009_GetPersonaName(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_SetPersonaName, 8)
void __thiscall winISteamFriends_SteamFriends009_SetPersonaName(winISteamFriends_SteamFriends009 *_this, const char * pchPersonaName)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends009_SetPersonaName(_this->linux_side, pchPersonaName);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetPersonaState, 4)
EPersonaState __thiscall winISteamFriends_SteamFriends009_GetPersonaState(winISteamFriends_SteamFriends009 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends009_GetPersonaState(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetFriendCount, 8)
int __thiscall winISteamFriends_SteamFriends009_GetFriendCount(winISteamFriends_SteamFriends009 *_this, int iFriendFlags)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends009_GetFriendCount(_this->linux_side, iFriendFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetFriendByIndex, 16)
CSteamID *__thiscall winISteamFriends_SteamFriends009_GetFriendByIndex(winISteamFriends_SteamFriends009 *_this, CSteamID *_r, int iFriend, int iFriendFlags)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends009_GetFriendByIndex(_this->linux_side, iFriend, iFriendFlags);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetFriendRelationship, 12)
EFriendRelationship __thiscall winISteamFriends_SteamFriends009_GetFriendRelationship(winISteamFriends_SteamFriends009 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends009_GetFriendRelationship(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetFriendPersonaState, 12)
EPersonaState __thiscall winISteamFriends_SteamFriends009_GetFriendPersonaState(winISteamFriends_SteamFriends009 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends009_GetFriendPersonaState(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetFriendPersonaName, 12)
const char * __thiscall winISteamFriends_SteamFriends009_GetFriendPersonaName(winISteamFriends_SteamFriends009 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends009_GetFriendPersonaName(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetFriendGamePlayed, 16)
bool __thiscall winISteamFriends_SteamFriends009_GetFriendGamePlayed(winISteamFriends_SteamFriends009 *_this, CSteamID steamIDFriend, FriendGameInfo_t * pFriendGameInfo)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends009_GetFriendGamePlayed(_this->linux_side, steamIDFriend, pFriendGameInfo);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetFriendPersonaNameHistory, 16)
const char * __thiscall winISteamFriends_SteamFriends009_GetFriendPersonaNameHistory(winISteamFriends_SteamFriends009 *_this, CSteamID steamIDFriend, int iPersonaName)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends009_GetFriendPersonaNameHistory(_this->linux_side, steamIDFriend, iPersonaName);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_HasFriend, 16)
bool __thiscall winISteamFriends_SteamFriends009_HasFriend(winISteamFriends_SteamFriends009 *_this, CSteamID steamIDFriend, int iFriendFlags)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends009_HasFriend(_this->linux_side, steamIDFriend, iFriendFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetClanCount, 4)
int __thiscall winISteamFriends_SteamFriends009_GetClanCount(winISteamFriends_SteamFriends009 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends009_GetClanCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetClanByIndex, 12)
CSteamID *__thiscall winISteamFriends_SteamFriends009_GetClanByIndex(winISteamFriends_SteamFriends009 *_this, CSteamID *_r, int iClan)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends009_GetClanByIndex(_this->linux_side, iClan);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetClanName, 12)
const char * __thiscall winISteamFriends_SteamFriends009_GetClanName(winISteamFriends_SteamFriends009 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends009_GetClanName(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetClanTag, 12)
const char * __thiscall winISteamFriends_SteamFriends009_GetClanTag(winISteamFriends_SteamFriends009 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends009_GetClanTag(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetFriendCountFromSource, 12)
int __thiscall winISteamFriends_SteamFriends009_GetFriendCountFromSource(winISteamFriends_SteamFriends009 *_this, CSteamID steamIDSource)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends009_GetFriendCountFromSource(_this->linux_side, steamIDSource);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetFriendFromSourceByIndex, 20)
CSteamID *__thiscall winISteamFriends_SteamFriends009_GetFriendFromSourceByIndex(winISteamFriends_SteamFriends009 *_this, CSteamID *_r, CSteamID steamIDSource, int iFriend)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends009_GetFriendFromSourceByIndex(_this->linux_side, steamIDSource, iFriend);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_IsUserInSource, 20)
bool __thiscall winISteamFriends_SteamFriends009_IsUserInSource(winISteamFriends_SteamFriends009 *_this, CSteamID steamIDUser, CSteamID steamIDSource)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends009_IsUserInSource(_this->linux_side, steamIDUser, steamIDSource);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_SetInGameVoiceSpeaking, 16)
void __thiscall winISteamFriends_SteamFriends009_SetInGameVoiceSpeaking(winISteamFriends_SteamFriends009 *_this, CSteamID steamIDUser, bool bSpeaking)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends009_SetInGameVoiceSpeaking(_this->linux_side, steamIDUser, bSpeaking);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_ActivateGameOverlay, 8)
void __thiscall winISteamFriends_SteamFriends009_ActivateGameOverlay(winISteamFriends_SteamFriends009 *_this, const char * pchDialog)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends009_ActivateGameOverlay(_this->linux_side, pchDialog);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_ActivateGameOverlayToUser, 16)
void __thiscall winISteamFriends_SteamFriends009_ActivateGameOverlayToUser(winISteamFriends_SteamFriends009 *_this, const char * pchDialog, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends009_ActivateGameOverlayToUser(_this->linux_side, pchDialog, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_ActivateGameOverlayToWebPage, 8)
void __thiscall winISteamFriends_SteamFriends009_ActivateGameOverlayToWebPage(winISteamFriends_SteamFriends009 *_this, const char * pchURL)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends009_ActivateGameOverlayToWebPage(_this->linux_side, pchURL);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_ActivateGameOverlayToStore, 8)
void __thiscall winISteamFriends_SteamFriends009_ActivateGameOverlayToStore(winISteamFriends_SteamFriends009 *_this, AppId_t nAppID)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends009_ActivateGameOverlayToStore(_this->linux_side, nAppID);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_SetPlayedWith, 12)
void __thiscall winISteamFriends_SteamFriends009_SetPlayedWith(winISteamFriends_SteamFriends009 *_this, CSteamID steamIDUserPlayedWith)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends009_SetPlayedWith(_this->linux_side, steamIDUserPlayedWith);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_ActivateGameOverlayInviteDialog, 12)
void __thiscall winISteamFriends_SteamFriends009_ActivateGameOverlayInviteDialog(winISteamFriends_SteamFriends009 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends009_ActivateGameOverlayInviteDialog(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetSmallFriendAvatar, 12)
int __thiscall winISteamFriends_SteamFriends009_GetSmallFriendAvatar(winISteamFriends_SteamFriends009 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends009_GetSmallFriendAvatar(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetMediumFriendAvatar, 12)
int __thiscall winISteamFriends_SteamFriends009_GetMediumFriendAvatar(winISteamFriends_SteamFriends009 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends009_GetMediumFriendAvatar(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetLargeFriendAvatar, 12)
int __thiscall winISteamFriends_SteamFriends009_GetLargeFriendAvatar(winISteamFriends_SteamFriends009 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends009_GetLargeFriendAvatar(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_RequestUserInformation, 16)
bool __thiscall winISteamFriends_SteamFriends009_RequestUserInformation(winISteamFriends_SteamFriends009 *_this, CSteamID steamIDUser, bool bRequireNameOnly)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends009_RequestUserInformation(_this->linux_side, steamIDUser, bRequireNameOnly);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_RequestClanOfficerList, 12)
SteamAPICall_t __thiscall winISteamFriends_SteamFriends009_RequestClanOfficerList(winISteamFriends_SteamFriends009 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends009_RequestClanOfficerList(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetClanOwner, 16)
CSteamID *__thiscall winISteamFriends_SteamFriends009_GetClanOwner(winISteamFriends_SteamFriends009 *_this, CSteamID *_r, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends009_GetClanOwner(_this->linux_side, steamIDClan);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetClanOfficerCount, 12)
int __thiscall winISteamFriends_SteamFriends009_GetClanOfficerCount(winISteamFriends_SteamFriends009 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends009_GetClanOfficerCount(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetClanOfficerByIndex, 20)
CSteamID *__thiscall winISteamFriends_SteamFriends009_GetClanOfficerByIndex(winISteamFriends_SteamFriends009 *_this, CSteamID *_r, CSteamID steamIDClan, int iOfficer)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends009_GetClanOfficerByIndex(_this->linux_side, steamIDClan, iOfficer);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetUserRestrictions, 4)
uint32 __thiscall winISteamFriends_SteamFriends009_GetUserRestrictions(winISteamFriends_SteamFriends009 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends009_GetUserRestrictions(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_SetRichPresence, 12)
bool __thiscall winISteamFriends_SteamFriends009_SetRichPresence(winISteamFriends_SteamFriends009 *_this, const char * pchKey, const char * pchValue)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends009_SetRichPresence(_this->linux_side, pchKey, pchValue);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_ClearRichPresence, 4)
void __thiscall winISteamFriends_SteamFriends009_ClearRichPresence(winISteamFriends_SteamFriends009 *_this)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends009_ClearRichPresence(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetFriendRichPresence, 16)
const char * __thiscall winISteamFriends_SteamFriends009_GetFriendRichPresence(winISteamFriends_SteamFriends009 *_this, CSteamID steamIDFriend, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends009_GetFriendRichPresence(_this->linux_side, steamIDFriend, pchKey);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetFriendRichPresenceKeyCount, 12)
int __thiscall winISteamFriends_SteamFriends009_GetFriendRichPresenceKeyCount(winISteamFriends_SteamFriends009 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends009_GetFriendRichPresenceKeyCount(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetFriendRichPresenceKeyByIndex, 16)
const char * __thiscall winISteamFriends_SteamFriends009_GetFriendRichPresenceKeyByIndex(winISteamFriends_SteamFriends009 *_this, CSteamID steamIDFriend, int iKey)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends009_GetFriendRichPresenceKeyByIndex(_this->linux_side, steamIDFriend, iKey);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_InviteUserToGame, 16)
bool __thiscall winISteamFriends_SteamFriends009_InviteUserToGame(winISteamFriends_SteamFriends009 *_this, CSteamID steamIDFriend, const char * pchConnectString)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends009_InviteUserToGame(_this->linux_side, steamIDFriend, pchConnectString);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetCoplayFriendCount, 4)
int __thiscall winISteamFriends_SteamFriends009_GetCoplayFriendCount(winISteamFriends_SteamFriends009 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends009_GetCoplayFriendCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetCoplayFriend, 12)
CSteamID *__thiscall winISteamFriends_SteamFriends009_GetCoplayFriend(winISteamFriends_SteamFriends009 *_this, CSteamID *_r, int iCoplayFriend)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends009_GetCoplayFriend(_this->linux_side, iCoplayFriend);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetFriendCoplayTime, 12)
int __thiscall winISteamFriends_SteamFriends009_GetFriendCoplayTime(winISteamFriends_SteamFriends009 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends009_GetFriendCoplayTime(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetFriendCoplayGame, 12)
AppId_t __thiscall winISteamFriends_SteamFriends009_GetFriendCoplayGame(winISteamFriends_SteamFriends009 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends009_GetFriendCoplayGame(_this->linux_side, steamIDFriend);
}

extern vtable_ptr winISteamFriends_SteamFriends009_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamFriends_SteamFriends009,
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_SetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetFriendByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetFriendRelationship)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetFriendPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetFriendPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetFriendGamePlayed)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetFriendPersonaNameHistory)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_HasFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetClanCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetClanByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetClanName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetClanTag)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetFriendCountFromSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetFriendFromSourceByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_IsUserInSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_SetInGameVoiceSpeaking)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_ActivateGameOverlay)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_ActivateGameOverlayToUser)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_ActivateGameOverlayToWebPage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_ActivateGameOverlayToStore)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_SetPlayedWith)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_ActivateGameOverlayInviteDialog)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetSmallFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetMediumFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetLargeFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_RequestUserInformation)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_RequestClanOfficerList)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetClanOwner)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetClanOfficerCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetClanOfficerByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetUserRestrictions)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_SetRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_ClearRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetFriendRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetFriendRichPresenceKeyCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetFriendRichPresenceKeyByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_InviteUserToGame)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetCoplayFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetCoplayFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetFriendCoplayTime)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetFriendCoplayGame)
    );
#ifndef __GNUC__
}
#endif

winISteamFriends_SteamFriends009 *create_winISteamFriends_SteamFriends009(void *linux_side)
{
    winISteamFriends_SteamFriends009 *r = alloc_mem_for_iface(sizeof(winISteamFriends_SteamFriends009), "SteamFriends009");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamFriends_SteamFriends009_vtable, 44, "SteamFriends009");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamFriends_SteamFriends008.h"

typedef struct __winISteamFriends_SteamFriends008 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamFriends_SteamFriends008;

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_GetPersonaName, 4)
const char * __thiscall winISteamFriends_SteamFriends008_GetPersonaName(winISteamFriends_SteamFriends008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends008_GetPersonaName(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_SetPersonaName, 8)
void __thiscall winISteamFriends_SteamFriends008_SetPersonaName(winISteamFriends_SteamFriends008 *_this, const char * pchPersonaName)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends008_SetPersonaName(_this->linux_side, pchPersonaName);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_GetPersonaState, 4)
EPersonaState __thiscall winISteamFriends_SteamFriends008_GetPersonaState(winISteamFriends_SteamFriends008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends008_GetPersonaState(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_GetFriendCount, 8)
int __thiscall winISteamFriends_SteamFriends008_GetFriendCount(winISteamFriends_SteamFriends008 *_this, int iFriendFlags)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends008_GetFriendCount(_this->linux_side, iFriendFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_GetFriendByIndex, 16)
CSteamID *__thiscall winISteamFriends_SteamFriends008_GetFriendByIndex(winISteamFriends_SteamFriends008 *_this, CSteamID *_r, int iFriend, int iFriendFlags)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends008_GetFriendByIndex(_this->linux_side, iFriend, iFriendFlags);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_GetFriendRelationship, 12)
EFriendRelationship __thiscall winISteamFriends_SteamFriends008_GetFriendRelationship(winISteamFriends_SteamFriends008 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends008_GetFriendRelationship(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_GetFriendPersonaState, 12)
EPersonaState __thiscall winISteamFriends_SteamFriends008_GetFriendPersonaState(winISteamFriends_SteamFriends008 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends008_GetFriendPersonaState(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_GetFriendPersonaName, 12)
const char * __thiscall winISteamFriends_SteamFriends008_GetFriendPersonaName(winISteamFriends_SteamFriends008 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends008_GetFriendPersonaName(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_GetFriendGamePlayed, 16)
bool __thiscall winISteamFriends_SteamFriends008_GetFriendGamePlayed(winISteamFriends_SteamFriends008 *_this, CSteamID steamIDFriend, FriendGameInfo_t * pFriendGameInfo)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends008_GetFriendGamePlayed(_this->linux_side, steamIDFriend, pFriendGameInfo);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_GetFriendPersonaNameHistory, 16)
const char * __thiscall winISteamFriends_SteamFriends008_GetFriendPersonaNameHistory(winISteamFriends_SteamFriends008 *_this, CSteamID steamIDFriend, int iPersonaName)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends008_GetFriendPersonaNameHistory(_this->linux_side, steamIDFriend, iPersonaName);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_HasFriend, 16)
bool __thiscall winISteamFriends_SteamFriends008_HasFriend(winISteamFriends_SteamFriends008 *_this, CSteamID steamIDFriend, int iFriendFlags)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends008_HasFriend(_this->linux_side, steamIDFriend, iFriendFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_GetClanCount, 4)
int __thiscall winISteamFriends_SteamFriends008_GetClanCount(winISteamFriends_SteamFriends008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends008_GetClanCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_GetClanByIndex, 12)
CSteamID *__thiscall winISteamFriends_SteamFriends008_GetClanByIndex(winISteamFriends_SteamFriends008 *_this, CSteamID *_r, int iClan)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends008_GetClanByIndex(_this->linux_side, iClan);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_GetClanName, 12)
const char * __thiscall winISteamFriends_SteamFriends008_GetClanName(winISteamFriends_SteamFriends008 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends008_GetClanName(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_GetClanTag, 12)
const char * __thiscall winISteamFriends_SteamFriends008_GetClanTag(winISteamFriends_SteamFriends008 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends008_GetClanTag(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_GetFriendCountFromSource, 12)
int __thiscall winISteamFriends_SteamFriends008_GetFriendCountFromSource(winISteamFriends_SteamFriends008 *_this, CSteamID steamIDSource)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends008_GetFriendCountFromSource(_this->linux_side, steamIDSource);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_GetFriendFromSourceByIndex, 20)
CSteamID *__thiscall winISteamFriends_SteamFriends008_GetFriendFromSourceByIndex(winISteamFriends_SteamFriends008 *_this, CSteamID *_r, CSteamID steamIDSource, int iFriend)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends008_GetFriendFromSourceByIndex(_this->linux_side, steamIDSource, iFriend);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_IsUserInSource, 20)
bool __thiscall winISteamFriends_SteamFriends008_IsUserInSource(winISteamFriends_SteamFriends008 *_this, CSteamID steamIDUser, CSteamID steamIDSource)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends008_IsUserInSource(_this->linux_side, steamIDUser, steamIDSource);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_SetInGameVoiceSpeaking, 16)
void __thiscall winISteamFriends_SteamFriends008_SetInGameVoiceSpeaking(winISteamFriends_SteamFriends008 *_this, CSteamID steamIDUser, bool bSpeaking)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends008_SetInGameVoiceSpeaking(_this->linux_side, steamIDUser, bSpeaking);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_ActivateGameOverlay, 8)
void __thiscall winISteamFriends_SteamFriends008_ActivateGameOverlay(winISteamFriends_SteamFriends008 *_this, const char * pchDialog)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends008_ActivateGameOverlay(_this->linux_side, pchDialog);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_ActivateGameOverlayToUser, 16)
void __thiscall winISteamFriends_SteamFriends008_ActivateGameOverlayToUser(winISteamFriends_SteamFriends008 *_this, const char * pchDialog, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends008_ActivateGameOverlayToUser(_this->linux_side, pchDialog, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_ActivateGameOverlayToWebPage, 8)
void __thiscall winISteamFriends_SteamFriends008_ActivateGameOverlayToWebPage(winISteamFriends_SteamFriends008 *_this, const char * pchURL)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends008_ActivateGameOverlayToWebPage(_this->linux_side, pchURL);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_ActivateGameOverlayToStore, 8)
void __thiscall winISteamFriends_SteamFriends008_ActivateGameOverlayToStore(winISteamFriends_SteamFriends008 *_this, AppId_t nAppID)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends008_ActivateGameOverlayToStore(_this->linux_side, nAppID);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_SetPlayedWith, 12)
void __thiscall winISteamFriends_SteamFriends008_SetPlayedWith(winISteamFriends_SteamFriends008 *_this, CSteamID steamIDUserPlayedWith)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends008_SetPlayedWith(_this->linux_side, steamIDUserPlayedWith);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_ActivateGameOverlayInviteDialog, 12)
void __thiscall winISteamFriends_SteamFriends008_ActivateGameOverlayInviteDialog(winISteamFriends_SteamFriends008 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends008_ActivateGameOverlayInviteDialog(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_GetSmallFriendAvatar, 12)
int __thiscall winISteamFriends_SteamFriends008_GetSmallFriendAvatar(winISteamFriends_SteamFriends008 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends008_GetSmallFriendAvatar(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_GetMediumFriendAvatar, 12)
int __thiscall winISteamFriends_SteamFriends008_GetMediumFriendAvatar(winISteamFriends_SteamFriends008 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends008_GetMediumFriendAvatar(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_GetLargeFriendAvatar, 12)
int __thiscall winISteamFriends_SteamFriends008_GetLargeFriendAvatar(winISteamFriends_SteamFriends008 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends008_GetLargeFriendAvatar(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_RequestUserInformation, 16)
bool __thiscall winISteamFriends_SteamFriends008_RequestUserInformation(winISteamFriends_SteamFriends008 *_this, CSteamID steamIDUser, bool bRequireNameOnly)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends008_RequestUserInformation(_this->linux_side, steamIDUser, bRequireNameOnly);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_RequestClanOfficerList, 12)
SteamAPICall_t __thiscall winISteamFriends_SteamFriends008_RequestClanOfficerList(winISteamFriends_SteamFriends008 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends008_RequestClanOfficerList(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_GetClanOwner, 16)
CSteamID *__thiscall winISteamFriends_SteamFriends008_GetClanOwner(winISteamFriends_SteamFriends008 *_this, CSteamID *_r, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends008_GetClanOwner(_this->linux_side, steamIDClan);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_GetClanOfficerCount, 12)
int __thiscall winISteamFriends_SteamFriends008_GetClanOfficerCount(winISteamFriends_SteamFriends008 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends008_GetClanOfficerCount(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_GetClanOfficerByIndex, 20)
CSteamID *__thiscall winISteamFriends_SteamFriends008_GetClanOfficerByIndex(winISteamFriends_SteamFriends008 *_this, CSteamID *_r, CSteamID steamIDClan, int iOfficer)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends008_GetClanOfficerByIndex(_this->linux_side, steamIDClan, iOfficer);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_GetUserRestrictions, 4)
uint32 __thiscall winISteamFriends_SteamFriends008_GetUserRestrictions(winISteamFriends_SteamFriends008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends008_GetUserRestrictions(_this->linux_side);
}

extern vtable_ptr winISteamFriends_SteamFriends008_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamFriends_SteamFriends008,
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_GetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_SetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_GetPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_GetFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_GetFriendByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_GetFriendRelationship)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_GetFriendPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_GetFriendPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_GetFriendGamePlayed)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_GetFriendPersonaNameHistory)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_HasFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_GetClanCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_GetClanByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_GetClanName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_GetClanTag)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_GetFriendCountFromSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_GetFriendFromSourceByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_IsUserInSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_SetInGameVoiceSpeaking)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_ActivateGameOverlay)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_ActivateGameOverlayToUser)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_ActivateGameOverlayToWebPage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_ActivateGameOverlayToStore)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_SetPlayedWith)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_ActivateGameOverlayInviteDialog)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_GetSmallFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_GetMediumFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_GetLargeFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_RequestUserInformation)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_RequestClanOfficerList)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_GetClanOwner)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_GetClanOfficerCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_GetClanOfficerByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_GetUserRestrictions)
    );
#ifndef __GNUC__
}
#endif

winISteamFriends_SteamFriends008 *create_winISteamFriends_SteamFriends008(void *linux_side)
{
    winISteamFriends_SteamFriends008 *r = alloc_mem_for_iface(sizeof(winISteamFriends_SteamFriends008), "SteamFriends008");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamFriends_SteamFriends008_vtable, 34, "SteamFriends008");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamFriends_SteamFriends007.h"

typedef struct __winISteamFriends_SteamFriends007 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamFriends_SteamFriends007;

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_GetPersonaName, 4)
const char * __thiscall winISteamFriends_SteamFriends007_GetPersonaName(winISteamFriends_SteamFriends007 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends007_GetPersonaName(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_SetPersonaName, 8)
void __thiscall winISteamFriends_SteamFriends007_SetPersonaName(winISteamFriends_SteamFriends007 *_this, const char * pchPersonaName)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends007_SetPersonaName(_this->linux_side, pchPersonaName);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_GetPersonaState, 4)
EPersonaState __thiscall winISteamFriends_SteamFriends007_GetPersonaState(winISteamFriends_SteamFriends007 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends007_GetPersonaState(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_GetFriendCount, 8)
int __thiscall winISteamFriends_SteamFriends007_GetFriendCount(winISteamFriends_SteamFriends007 *_this, int iFriendFlags)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends007_GetFriendCount(_this->linux_side, iFriendFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_GetFriendByIndex, 16)
CSteamID *__thiscall winISteamFriends_SteamFriends007_GetFriendByIndex(winISteamFriends_SteamFriends007 *_this, CSteamID *_r, int iFriend, int iFriendFlags)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends007_GetFriendByIndex(_this->linux_side, iFriend, iFriendFlags);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_GetFriendRelationship, 12)
EFriendRelationship __thiscall winISteamFriends_SteamFriends007_GetFriendRelationship(winISteamFriends_SteamFriends007 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends007_GetFriendRelationship(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_GetFriendPersonaState, 12)
EPersonaState __thiscall winISteamFriends_SteamFriends007_GetFriendPersonaState(winISteamFriends_SteamFriends007 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends007_GetFriendPersonaState(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_GetFriendPersonaName, 12)
const char * __thiscall winISteamFriends_SteamFriends007_GetFriendPersonaName(winISteamFriends_SteamFriends007 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends007_GetFriendPersonaName(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_GetFriendGamePlayed, 16)
bool __thiscall winISteamFriends_SteamFriends007_GetFriendGamePlayed(winISteamFriends_SteamFriends007 *_this, CSteamID steamIDFriend, FriendGameInfo_t * pFriendGameInfo)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends007_GetFriendGamePlayed(_this->linux_side, steamIDFriend, pFriendGameInfo);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_GetFriendPersonaNameHistory, 16)
const char * __thiscall winISteamFriends_SteamFriends007_GetFriendPersonaNameHistory(winISteamFriends_SteamFriends007 *_this, CSteamID steamIDFriend, int iPersonaName)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends007_GetFriendPersonaNameHistory(_this->linux_side, steamIDFriend, iPersonaName);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_HasFriend, 16)
bool __thiscall winISteamFriends_SteamFriends007_HasFriend(winISteamFriends_SteamFriends007 *_this, CSteamID steamIDFriend, int iFriendFlags)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends007_HasFriend(_this->linux_side, steamIDFriend, iFriendFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_GetClanCount, 4)
int __thiscall winISteamFriends_SteamFriends007_GetClanCount(winISteamFriends_SteamFriends007 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends007_GetClanCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_GetClanByIndex, 12)
CSteamID *__thiscall winISteamFriends_SteamFriends007_GetClanByIndex(winISteamFriends_SteamFriends007 *_this, CSteamID *_r, int iClan)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends007_GetClanByIndex(_this->linux_side, iClan);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_GetClanName, 12)
const char * __thiscall winISteamFriends_SteamFriends007_GetClanName(winISteamFriends_SteamFriends007 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends007_GetClanName(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_GetClanTag, 12)
const char * __thiscall winISteamFriends_SteamFriends007_GetClanTag(winISteamFriends_SteamFriends007 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends007_GetClanTag(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_GetFriendCountFromSource, 12)
int __thiscall winISteamFriends_SteamFriends007_GetFriendCountFromSource(winISteamFriends_SteamFriends007 *_this, CSteamID steamIDSource)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends007_GetFriendCountFromSource(_this->linux_side, steamIDSource);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_GetFriendFromSourceByIndex, 20)
CSteamID *__thiscall winISteamFriends_SteamFriends007_GetFriendFromSourceByIndex(winISteamFriends_SteamFriends007 *_this, CSteamID *_r, CSteamID steamIDSource, int iFriend)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends007_GetFriendFromSourceByIndex(_this->linux_side, steamIDSource, iFriend);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_IsUserInSource, 20)
bool __thiscall winISteamFriends_SteamFriends007_IsUserInSource(winISteamFriends_SteamFriends007 *_this, CSteamID steamIDUser, CSteamID steamIDSource)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends007_IsUserInSource(_this->linux_side, steamIDUser, steamIDSource);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_SetInGameVoiceSpeaking, 16)
void __thiscall winISteamFriends_SteamFriends007_SetInGameVoiceSpeaking(winISteamFriends_SteamFriends007 *_this, CSteamID steamIDUser, bool bSpeaking)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends007_SetInGameVoiceSpeaking(_this->linux_side, steamIDUser, bSpeaking);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_ActivateGameOverlay, 8)
void __thiscall winISteamFriends_SteamFriends007_ActivateGameOverlay(winISteamFriends_SteamFriends007 *_this, const char * pchDialog)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends007_ActivateGameOverlay(_this->linux_side, pchDialog);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_ActivateGameOverlayToUser, 16)
void __thiscall winISteamFriends_SteamFriends007_ActivateGameOverlayToUser(winISteamFriends_SteamFriends007 *_this, const char * pchDialog, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends007_ActivateGameOverlayToUser(_this->linux_side, pchDialog, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_ActivateGameOverlayToWebPage, 8)
void __thiscall winISteamFriends_SteamFriends007_ActivateGameOverlayToWebPage(winISteamFriends_SteamFriends007 *_this, const char * pchURL)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends007_ActivateGameOverlayToWebPage(_this->linux_side, pchURL);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_ActivateGameOverlayToStore, 8)
void __thiscall winISteamFriends_SteamFriends007_ActivateGameOverlayToStore(winISteamFriends_SteamFriends007 *_this, AppId_t nAppID)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends007_ActivateGameOverlayToStore(_this->linux_side, nAppID);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_SetPlayedWith, 12)
void __thiscall winISteamFriends_SteamFriends007_SetPlayedWith(winISteamFriends_SteamFriends007 *_this, CSteamID steamIDUserPlayedWith)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends007_SetPlayedWith(_this->linux_side, steamIDUserPlayedWith);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_ActivateGameOverlayInviteDialog, 12)
void __thiscall winISteamFriends_SteamFriends007_ActivateGameOverlayInviteDialog(winISteamFriends_SteamFriends007 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends007_ActivateGameOverlayInviteDialog(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_GetSmallFriendAvatar, 12)
int __thiscall winISteamFriends_SteamFriends007_GetSmallFriendAvatar(winISteamFriends_SteamFriends007 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends007_GetSmallFriendAvatar(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_GetMediumFriendAvatar, 12)
int __thiscall winISteamFriends_SteamFriends007_GetMediumFriendAvatar(winISteamFriends_SteamFriends007 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends007_GetMediumFriendAvatar(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_GetLargeFriendAvatar, 12)
int __thiscall winISteamFriends_SteamFriends007_GetLargeFriendAvatar(winISteamFriends_SteamFriends007 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends007_GetLargeFriendAvatar(_this->linux_side, steamIDFriend);
}

extern vtable_ptr winISteamFriends_SteamFriends007_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamFriends_SteamFriends007,
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_GetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_SetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_GetPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_GetFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_GetFriendByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_GetFriendRelationship)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_GetFriendPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_GetFriendPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_GetFriendGamePlayed)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_GetFriendPersonaNameHistory)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_HasFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_GetClanCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_GetClanByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_GetClanName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_GetClanTag)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_GetFriendCountFromSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_GetFriendFromSourceByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_IsUserInSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_SetInGameVoiceSpeaking)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_ActivateGameOverlay)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_ActivateGameOverlayToUser)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_ActivateGameOverlayToWebPage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_ActivateGameOverlayToStore)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_SetPlayedWith)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_ActivateGameOverlayInviteDialog)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_GetSmallFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_GetMediumFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_GetLargeFriendAvatar)
    );
#ifndef __GNUC__
}
#endif

winISteamFriends_SteamFriends007 *create_winISteamFriends_SteamFriends007(void *linux_side)
{
    winISteamFriends_SteamFriends007 *r = alloc_mem_for_iface(sizeof(winISteamFriends_SteamFriends007), "SteamFriends007");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamFriends_SteamFriends007_vtable, 28, "SteamFriends007");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamFriends_SteamFriends006.h"

typedef struct __winISteamFriends_SteamFriends006 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamFriends_SteamFriends006;

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_GetPersonaName, 4)
const char * __thiscall winISteamFriends_SteamFriends006_GetPersonaName(winISteamFriends_SteamFriends006 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends006_GetPersonaName(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_SetPersonaName, 8)
void __thiscall winISteamFriends_SteamFriends006_SetPersonaName(winISteamFriends_SteamFriends006 *_this, const char * pchPersonaName)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends006_SetPersonaName(_this->linux_side, pchPersonaName);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_GetPersonaState, 4)
EPersonaState __thiscall winISteamFriends_SteamFriends006_GetPersonaState(winISteamFriends_SteamFriends006 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends006_GetPersonaState(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_GetFriendCount, 8)
int __thiscall winISteamFriends_SteamFriends006_GetFriendCount(winISteamFriends_SteamFriends006 *_this, int iFriendFlags)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends006_GetFriendCount(_this->linux_side, iFriendFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_GetFriendByIndex, 16)
CSteamID *__thiscall winISteamFriends_SteamFriends006_GetFriendByIndex(winISteamFriends_SteamFriends006 *_this, CSteamID *_r, int iFriend, int iFriendFlags)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends006_GetFriendByIndex(_this->linux_side, iFriend, iFriendFlags);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_GetFriendRelationship, 12)
EFriendRelationship __thiscall winISteamFriends_SteamFriends006_GetFriendRelationship(winISteamFriends_SteamFriends006 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends006_GetFriendRelationship(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_GetFriendPersonaState, 12)
EPersonaState __thiscall winISteamFriends_SteamFriends006_GetFriendPersonaState(winISteamFriends_SteamFriends006 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends006_GetFriendPersonaState(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_GetFriendPersonaName, 12)
const char * __thiscall winISteamFriends_SteamFriends006_GetFriendPersonaName(winISteamFriends_SteamFriends006 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends006_GetFriendPersonaName(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_GetFriendAvatar, 16)
int __thiscall winISteamFriends_SteamFriends006_GetFriendAvatar(winISteamFriends_SteamFriends006 *_this, CSteamID steamIDFriend, int eAvatarSize)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends006_GetFriendAvatar(_this->linux_side, steamIDFriend, eAvatarSize);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_GetFriendGamePlayed, 16)
bool __thiscall winISteamFriends_SteamFriends006_GetFriendGamePlayed(winISteamFriends_SteamFriends006 *_this, CSteamID steamIDFriend, FriendGameInfo_t * pFriendGameInfo)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends006_GetFriendGamePlayed(_this->linux_side, steamIDFriend, pFriendGameInfo);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_GetFriendPersonaNameHistory, 16)
const char * __thiscall winISteamFriends_SteamFriends006_GetFriendPersonaNameHistory(winISteamFriends_SteamFriends006 *_this, CSteamID steamIDFriend, int iPersonaName)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends006_GetFriendPersonaNameHistory(_this->linux_side, steamIDFriend, iPersonaName);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_HasFriend, 16)
bool __thiscall winISteamFriends_SteamFriends006_HasFriend(winISteamFriends_SteamFriends006 *_this, CSteamID steamIDFriend, int iFriendFlags)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends006_HasFriend(_this->linux_side, steamIDFriend, iFriendFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_GetClanCount, 4)
int __thiscall winISteamFriends_SteamFriends006_GetClanCount(winISteamFriends_SteamFriends006 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends006_GetClanCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_GetClanByIndex, 12)
CSteamID *__thiscall winISteamFriends_SteamFriends006_GetClanByIndex(winISteamFriends_SteamFriends006 *_this, CSteamID *_r, int iClan)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends006_GetClanByIndex(_this->linux_side, iClan);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_GetClanName, 12)
const char * __thiscall winISteamFriends_SteamFriends006_GetClanName(winISteamFriends_SteamFriends006 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends006_GetClanName(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_GetClanTag, 12)
const char * __thiscall winISteamFriends_SteamFriends006_GetClanTag(winISteamFriends_SteamFriends006 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends006_GetClanTag(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_GetFriendCountFromSource, 12)
int __thiscall winISteamFriends_SteamFriends006_GetFriendCountFromSource(winISteamFriends_SteamFriends006 *_this, CSteamID steamIDSource)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends006_GetFriendCountFromSource(_this->linux_side, steamIDSource);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_GetFriendFromSourceByIndex, 20)
CSteamID *__thiscall winISteamFriends_SteamFriends006_GetFriendFromSourceByIndex(winISteamFriends_SteamFriends006 *_this, CSteamID *_r, CSteamID steamIDSource, int iFriend)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends006_GetFriendFromSourceByIndex(_this->linux_side, steamIDSource, iFriend);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_IsUserInSource, 20)
bool __thiscall winISteamFriends_SteamFriends006_IsUserInSource(winISteamFriends_SteamFriends006 *_this, CSteamID steamIDUser, CSteamID steamIDSource)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends006_IsUserInSource(_this->linux_side, steamIDUser, steamIDSource);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_SetInGameVoiceSpeaking, 16)
void __thiscall winISteamFriends_SteamFriends006_SetInGameVoiceSpeaking(winISteamFriends_SteamFriends006 *_this, CSteamID steamIDUser, bool bSpeaking)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends006_SetInGameVoiceSpeaking(_this->linux_side, steamIDUser, bSpeaking);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_ActivateGameOverlay, 8)
void __thiscall winISteamFriends_SteamFriends006_ActivateGameOverlay(winISteamFriends_SteamFriends006 *_this, const char * pchDialog)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends006_ActivateGameOverlay(_this->linux_side, pchDialog);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_ActivateGameOverlayToUser, 16)
void __thiscall winISteamFriends_SteamFriends006_ActivateGameOverlayToUser(winISteamFriends_SteamFriends006 *_this, const char * pchDialog, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends006_ActivateGameOverlayToUser(_this->linux_side, pchDialog, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_ActivateGameOverlayToWebPage, 8)
void __thiscall winISteamFriends_SteamFriends006_ActivateGameOverlayToWebPage(winISteamFriends_SteamFriends006 *_this, const char * pchURL)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends006_ActivateGameOverlayToWebPage(_this->linux_side, pchURL);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_ActivateGameOverlayToStore, 8)
void __thiscall winISteamFriends_SteamFriends006_ActivateGameOverlayToStore(winISteamFriends_SteamFriends006 *_this, AppId_t nAppID)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends006_ActivateGameOverlayToStore(_this->linux_side, nAppID);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_SetPlayedWith, 12)
void __thiscall winISteamFriends_SteamFriends006_SetPlayedWith(winISteamFriends_SteamFriends006 *_this, CSteamID steamIDUserPlayedWith)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends006_SetPlayedWith(_this->linux_side, steamIDUserPlayedWith);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_ActivateGameOverlayInviteDialog, 12)
void __thiscall winISteamFriends_SteamFriends006_ActivateGameOverlayInviteDialog(winISteamFriends_SteamFriends006 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends006_ActivateGameOverlayInviteDialog(_this->linux_side, steamIDLobby);
}

extern vtable_ptr winISteamFriends_SteamFriends006_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamFriends_SteamFriends006,
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_GetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_SetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_GetPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_GetFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_GetFriendByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_GetFriendRelationship)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_GetFriendPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_GetFriendPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_GetFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_GetFriendGamePlayed)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_GetFriendPersonaNameHistory)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_HasFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_GetClanCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_GetClanByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_GetClanName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_GetClanTag)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_GetFriendCountFromSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_GetFriendFromSourceByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_IsUserInSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_SetInGameVoiceSpeaking)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_ActivateGameOverlay)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_ActivateGameOverlayToUser)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_ActivateGameOverlayToWebPage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_ActivateGameOverlayToStore)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_SetPlayedWith)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_ActivateGameOverlayInviteDialog)
    );
#ifndef __GNUC__
}
#endif

winISteamFriends_SteamFriends006 *create_winISteamFriends_SteamFriends006(void *linux_side)
{
    winISteamFriends_SteamFriends006 *r = alloc_mem_for_iface(sizeof(winISteamFriends_SteamFriends006), "SteamFriends006");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamFriends_SteamFriends006_vtable, 26, "SteamFriends006");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamFriends_SteamFriends005.h"

typedef struct __winISteamFriends_SteamFriends005 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamFriends_SteamFriends005;

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends005_GetPersonaName, 4)
const char * __thiscall winISteamFriends_SteamFriends005_GetPersonaName(winISteamFriends_SteamFriends005 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends005_GetPersonaName(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends005_SetPersonaName, 8)
void __thiscall winISteamFriends_SteamFriends005_SetPersonaName(winISteamFriends_SteamFriends005 *_this, const char * pchPersonaName)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends005_SetPersonaName(_this->linux_side, pchPersonaName);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends005_GetPersonaState, 4)
EPersonaState __thiscall winISteamFriends_SteamFriends005_GetPersonaState(winISteamFriends_SteamFriends005 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends005_GetPersonaState(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends005_GetFriendCount, 8)
int __thiscall winISteamFriends_SteamFriends005_GetFriendCount(winISteamFriends_SteamFriends005 *_this, int iFriendFlags)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends005_GetFriendCount(_this->linux_side, iFriendFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends005_GetFriendByIndex, 16)
CSteamID *__thiscall winISteamFriends_SteamFriends005_GetFriendByIndex(winISteamFriends_SteamFriends005 *_this, CSteamID *_r, int iFriend, int iFriendFlags)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends005_GetFriendByIndex(_this->linux_side, iFriend, iFriendFlags);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends005_GetFriendRelationship, 12)
EFriendRelationship __thiscall winISteamFriends_SteamFriends005_GetFriendRelationship(winISteamFriends_SteamFriends005 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends005_GetFriendRelationship(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends005_GetFriendPersonaState, 12)
EPersonaState __thiscall winISteamFriends_SteamFriends005_GetFriendPersonaState(winISteamFriends_SteamFriends005 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends005_GetFriendPersonaState(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends005_GetFriendPersonaName, 12)
const char * __thiscall winISteamFriends_SteamFriends005_GetFriendPersonaName(winISteamFriends_SteamFriends005 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends005_GetFriendPersonaName(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends005_GetFriendAvatar, 16)
int __thiscall winISteamFriends_SteamFriends005_GetFriendAvatar(winISteamFriends_SteamFriends005 *_this, CSteamID steamIDFriend, int eAvatarSize)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends005_GetFriendAvatar(_this->linux_side, steamIDFriend, eAvatarSize);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends005_GetFriendGamePlayed, 16)
bool __thiscall winISteamFriends_SteamFriends005_GetFriendGamePlayed(winISteamFriends_SteamFriends005 *_this, CSteamID steamIDFriend, FriendGameInfo_t * pFriendGameInfo)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends005_GetFriendGamePlayed(_this->linux_side, steamIDFriend, pFriendGameInfo);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends005_GetFriendPersonaNameHistory, 16)
const char * __thiscall winISteamFriends_SteamFriends005_GetFriendPersonaNameHistory(winISteamFriends_SteamFriends005 *_this, CSteamID steamIDFriend, int iPersonaName)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends005_GetFriendPersonaNameHistory(_this->linux_side, steamIDFriend, iPersonaName);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends005_HasFriend, 16)
bool __thiscall winISteamFriends_SteamFriends005_HasFriend(winISteamFriends_SteamFriends005 *_this, CSteamID steamIDFriend, int iFriendFlags)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends005_HasFriend(_this->linux_side, steamIDFriend, iFriendFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends005_GetClanCount, 4)
int __thiscall winISteamFriends_SteamFriends005_GetClanCount(winISteamFriends_SteamFriends005 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends005_GetClanCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends005_GetClanByIndex, 12)
CSteamID *__thiscall winISteamFriends_SteamFriends005_GetClanByIndex(winISteamFriends_SteamFriends005 *_this, CSteamID *_r, int iClan)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends005_GetClanByIndex(_this->linux_side, iClan);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends005_GetClanName, 12)
const char * __thiscall winISteamFriends_SteamFriends005_GetClanName(winISteamFriends_SteamFriends005 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends005_GetClanName(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends005_GetFriendCountFromSource, 12)
int __thiscall winISteamFriends_SteamFriends005_GetFriendCountFromSource(winISteamFriends_SteamFriends005 *_this, CSteamID steamIDSource)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends005_GetFriendCountFromSource(_this->linux_side, steamIDSource);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends005_GetFriendFromSourceByIndex, 20)
CSteamID *__thiscall winISteamFriends_SteamFriends005_GetFriendFromSourceByIndex(winISteamFriends_SteamFriends005 *_this, CSteamID *_r, CSteamID steamIDSource, int iFriend)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends005_GetFriendFromSourceByIndex(_this->linux_side, steamIDSource, iFriend);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends005_IsUserInSource, 20)
bool __thiscall winISteamFriends_SteamFriends005_IsUserInSource(winISteamFriends_SteamFriends005 *_this, CSteamID steamIDUser, CSteamID steamIDSource)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends005_IsUserInSource(_this->linux_side, steamIDUser, steamIDSource);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends005_SetInGameVoiceSpeaking, 16)
void __thiscall winISteamFriends_SteamFriends005_SetInGameVoiceSpeaking(winISteamFriends_SteamFriends005 *_this, CSteamID steamIDUser, bool bSpeaking)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends005_SetInGameVoiceSpeaking(_this->linux_side, steamIDUser, bSpeaking);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends005_ActivateGameOverlay, 8)
void __thiscall winISteamFriends_SteamFriends005_ActivateGameOverlay(winISteamFriends_SteamFriends005 *_this, const char * pchDialog)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends005_ActivateGameOverlay(_this->linux_side, pchDialog);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends005_ActivateGameOverlayToUser, 16)
void __thiscall winISteamFriends_SteamFriends005_ActivateGameOverlayToUser(winISteamFriends_SteamFriends005 *_this, const char * pchDialog, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends005_ActivateGameOverlayToUser(_this->linux_side, pchDialog, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends005_ActivateGameOverlayToWebPage, 8)
void __thiscall winISteamFriends_SteamFriends005_ActivateGameOverlayToWebPage(winISteamFriends_SteamFriends005 *_this, const char * pchURL)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends005_ActivateGameOverlayToWebPage(_this->linux_side, pchURL);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends005_ActivateGameOverlayToStore, 8)
void __thiscall winISteamFriends_SteamFriends005_ActivateGameOverlayToStore(winISteamFriends_SteamFriends005 *_this, AppId_t nAppID)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends005_ActivateGameOverlayToStore(_this->linux_side, nAppID);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends005_SetPlayedWith, 12)
void __thiscall winISteamFriends_SteamFriends005_SetPlayedWith(winISteamFriends_SteamFriends005 *_this, CSteamID steamIDUserPlayedWith)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends005_SetPlayedWith(_this->linux_side, steamIDUserPlayedWith);
}

extern vtable_ptr winISteamFriends_SteamFriends005_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamFriends_SteamFriends005,
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends005_GetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends005_SetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends005_GetPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends005_GetFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends005_GetFriendByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends005_GetFriendRelationship)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends005_GetFriendPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends005_GetFriendPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends005_GetFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends005_GetFriendGamePlayed)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends005_GetFriendPersonaNameHistory)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends005_HasFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends005_GetClanCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends005_GetClanByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends005_GetClanName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends005_GetFriendCountFromSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends005_GetFriendFromSourceByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends005_IsUserInSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends005_SetInGameVoiceSpeaking)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends005_ActivateGameOverlay)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends005_ActivateGameOverlayToUser)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends005_ActivateGameOverlayToWebPage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends005_ActivateGameOverlayToStore)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends005_SetPlayedWith)
    );
#ifndef __GNUC__
}
#endif

winISteamFriends_SteamFriends005 *create_winISteamFriends_SteamFriends005(void *linux_side)
{
    winISteamFriends_SteamFriends005 *r = alloc_mem_for_iface(sizeof(winISteamFriends_SteamFriends005), "SteamFriends005");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamFriends_SteamFriends005_vtable, 24, "SteamFriends005");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamFriends_SteamFriends004.h"

typedef struct __winISteamFriends_SteamFriends004 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamFriends_SteamFriends004;

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends004_GetPersonaName, 4)
const char * __thiscall winISteamFriends_SteamFriends004_GetPersonaName(winISteamFriends_SteamFriends004 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends004_GetPersonaName(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends004_SetPersonaName, 8)
void __thiscall winISteamFriends_SteamFriends004_SetPersonaName(winISteamFriends_SteamFriends004 *_this, const char * pchPersonaName)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends004_SetPersonaName(_this->linux_side, pchPersonaName);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends004_GetPersonaState, 4)
EPersonaState __thiscall winISteamFriends_SteamFriends004_GetPersonaState(winISteamFriends_SteamFriends004 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends004_GetPersonaState(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends004_GetFriendCount, 8)
int __thiscall winISteamFriends_SteamFriends004_GetFriendCount(winISteamFriends_SteamFriends004 *_this, int iFriendFlags)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends004_GetFriendCount(_this->linux_side, iFriendFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends004_GetFriendByIndex, 16)
CSteamID *__thiscall winISteamFriends_SteamFriends004_GetFriendByIndex(winISteamFriends_SteamFriends004 *_this, CSteamID *_r, int iFriend, int iFriendFlags)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends004_GetFriendByIndex(_this->linux_side, iFriend, iFriendFlags);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends004_GetFriendRelationship, 12)
EFriendRelationship __thiscall winISteamFriends_SteamFriends004_GetFriendRelationship(winISteamFriends_SteamFriends004 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends004_GetFriendRelationship(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends004_GetFriendPersonaState, 12)
EPersonaState __thiscall winISteamFriends_SteamFriends004_GetFriendPersonaState(winISteamFriends_SteamFriends004 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends004_GetFriendPersonaState(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends004_GetFriendPersonaName, 12)
const char * __thiscall winISteamFriends_SteamFriends004_GetFriendPersonaName(winISteamFriends_SteamFriends004 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends004_GetFriendPersonaName(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends004_GetFriendAvatar, 16)
int __thiscall winISteamFriends_SteamFriends004_GetFriendAvatar(winISteamFriends_SteamFriends004 *_this, CSteamID steamIDFriend, int eAvatarSize)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends004_GetFriendAvatar(_this->linux_side, steamIDFriend, eAvatarSize);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends004_GetFriendGamePlayed, 28)
bool __thiscall winISteamFriends_SteamFriends004_GetFriendGamePlayed(winISteamFriends_SteamFriends004 *_this, CSteamID steamIDFriend, uint64 * pulGameID, uint32 * punGameIP, uint16 * pusGamePort, uint16 * pusQueryPort)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends004_GetFriendGamePlayed(_this->linux_side, steamIDFriend, pulGameID, punGameIP, pusGamePort, pusQueryPort);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends004_GetFriendPersonaNameHistory, 16)
const char * __thiscall winISteamFriends_SteamFriends004_GetFriendPersonaNameHistory(winISteamFriends_SteamFriends004 *_this, CSteamID steamIDFriend, int iPersonaName)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends004_GetFriendPersonaNameHistory(_this->linux_side, steamIDFriend, iPersonaName);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends004_HasFriend, 16)
bool __thiscall winISteamFriends_SteamFriends004_HasFriend(winISteamFriends_SteamFriends004 *_this, CSteamID steamIDFriend, int iFriendFlags)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends004_HasFriend(_this->linux_side, steamIDFriend, iFriendFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends004_GetClanCount, 4)
int __thiscall winISteamFriends_SteamFriends004_GetClanCount(winISteamFriends_SteamFriends004 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends004_GetClanCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends004_GetClanByIndex, 12)
CSteamID *__thiscall winISteamFriends_SteamFriends004_GetClanByIndex(winISteamFriends_SteamFriends004 *_this, CSteamID *_r, int iClan)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends004_GetClanByIndex(_this->linux_side, iClan);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends004_GetClanName, 12)
const char * __thiscall winISteamFriends_SteamFriends004_GetClanName(winISteamFriends_SteamFriends004 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends004_GetClanName(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends004_GetFriendCountFromSource, 12)
int __thiscall winISteamFriends_SteamFriends004_GetFriendCountFromSource(winISteamFriends_SteamFriends004 *_this, CSteamID steamIDSource)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends004_GetFriendCountFromSource(_this->linux_side, steamIDSource);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends004_GetFriendFromSourceByIndex, 20)
CSteamID *__thiscall winISteamFriends_SteamFriends004_GetFriendFromSourceByIndex(winISteamFriends_SteamFriends004 *_this, CSteamID *_r, CSteamID steamIDSource, int iFriend)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends004_GetFriendFromSourceByIndex(_this->linux_side, steamIDSource, iFriend);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends004_IsUserInSource, 20)
bool __thiscall winISteamFriends_SteamFriends004_IsUserInSource(winISteamFriends_SteamFriends004 *_this, CSteamID steamIDUser, CSteamID steamIDSource)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends004_IsUserInSource(_this->linux_side, steamIDUser, steamIDSource);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends004_SetInGameVoiceSpeaking, 16)
void __thiscall winISteamFriends_SteamFriends004_SetInGameVoiceSpeaking(winISteamFriends_SteamFriends004 *_this, CSteamID steamIDUser, bool bSpeaking)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends004_SetInGameVoiceSpeaking(_this->linux_side, steamIDUser, bSpeaking);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends004_ActivateGameOverlay, 8)
void __thiscall winISteamFriends_SteamFriends004_ActivateGameOverlay(winISteamFriends_SteamFriends004 *_this, const char * pchDialog)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends004_ActivateGameOverlay(_this->linux_side, pchDialog);
}

extern vtable_ptr winISteamFriends_SteamFriends004_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamFriends_SteamFriends004,
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends004_GetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends004_SetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends004_GetPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends004_GetFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends004_GetFriendByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends004_GetFriendRelationship)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends004_GetFriendPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends004_GetFriendPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends004_GetFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends004_GetFriendGamePlayed)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends004_GetFriendPersonaNameHistory)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends004_HasFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends004_GetClanCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends004_GetClanByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends004_GetClanName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends004_GetFriendCountFromSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends004_GetFriendFromSourceByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends004_IsUserInSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends004_SetInGameVoiceSpeaking)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends004_ActivateGameOverlay)
    );
#ifndef __GNUC__
}
#endif

winISteamFriends_SteamFriends004 *create_winISteamFriends_SteamFriends004(void *linux_side)
{
    winISteamFriends_SteamFriends004 *r = alloc_mem_for_iface(sizeof(winISteamFriends_SteamFriends004), "SteamFriends004");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamFriends_SteamFriends004_vtable, 20, "SteamFriends004");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamFriends_SteamFriends003.h"

typedef struct __winISteamFriends_SteamFriends003 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamFriends_SteamFriends003;

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends003_GetPersonaName, 4)
const char * __thiscall winISteamFriends_SteamFriends003_GetPersonaName(winISteamFriends_SteamFriends003 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends003_GetPersonaName(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends003_SetPersonaName, 8)
void __thiscall winISteamFriends_SteamFriends003_SetPersonaName(winISteamFriends_SteamFriends003 *_this, const char * pchPersonaName)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends003_SetPersonaName(_this->linux_side, pchPersonaName);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends003_GetPersonaState, 4)
EPersonaState __thiscall winISteamFriends_SteamFriends003_GetPersonaState(winISteamFriends_SteamFriends003 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends003_GetPersonaState(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends003_GetFriendCount, 8)
int __thiscall winISteamFriends_SteamFriends003_GetFriendCount(winISteamFriends_SteamFriends003 *_this, int iFriendFlags)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends003_GetFriendCount(_this->linux_side, iFriendFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends003_GetFriendByIndex, 16)
CSteamID *__thiscall winISteamFriends_SteamFriends003_GetFriendByIndex(winISteamFriends_SteamFriends003 *_this, CSteamID *_r, int iFriend, int iFriendFlags)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends003_GetFriendByIndex(_this->linux_side, iFriend, iFriendFlags);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends003_GetFriendRelationship, 12)
EFriendRelationship __thiscall winISteamFriends_SteamFriends003_GetFriendRelationship(winISteamFriends_SteamFriends003 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends003_GetFriendRelationship(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends003_GetFriendPersonaState, 12)
EPersonaState __thiscall winISteamFriends_SteamFriends003_GetFriendPersonaState(winISteamFriends_SteamFriends003 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends003_GetFriendPersonaState(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends003_GetFriendPersonaName, 12)
const char * __thiscall winISteamFriends_SteamFriends003_GetFriendPersonaName(winISteamFriends_SteamFriends003 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends003_GetFriendPersonaName(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends003_GetFriendAvatar, 12)
int __thiscall winISteamFriends_SteamFriends003_GetFriendAvatar(winISteamFriends_SteamFriends003 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends003_GetFriendAvatar(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends003_GetFriendGamePlayed, 28)
bool __thiscall winISteamFriends_SteamFriends003_GetFriendGamePlayed(winISteamFriends_SteamFriends003 *_this, CSteamID steamIDFriend, uint64 * pulGameID, uint32 * punGameIP, uint16 * pusGamePort, uint16 * pusQueryPort)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends003_GetFriendGamePlayed(_this->linux_side, steamIDFriend, pulGameID, punGameIP, pusGamePort, pusQueryPort);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends003_GetFriendPersonaNameHistory, 16)
const char * __thiscall winISteamFriends_SteamFriends003_GetFriendPersonaNameHistory(winISteamFriends_SteamFriends003 *_this, CSteamID steamIDFriend, int iPersonaName)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends003_GetFriendPersonaNameHistory(_this->linux_side, steamIDFriend, iPersonaName);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends003_HasFriend, 16)
bool __thiscall winISteamFriends_SteamFriends003_HasFriend(winISteamFriends_SteamFriends003 *_this, CSteamID steamIDFriend, int iFriendFlags)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends003_HasFriend(_this->linux_side, steamIDFriend, iFriendFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends003_GetClanCount, 4)
int __thiscall winISteamFriends_SteamFriends003_GetClanCount(winISteamFriends_SteamFriends003 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends003_GetClanCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends003_GetClanByIndex, 12)
CSteamID *__thiscall winISteamFriends_SteamFriends003_GetClanByIndex(winISteamFriends_SteamFriends003 *_this, CSteamID *_r, int iClan)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends003_GetClanByIndex(_this->linux_side, iClan);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends003_GetClanName, 12)
const char * __thiscall winISteamFriends_SteamFriends003_GetClanName(winISteamFriends_SteamFriends003 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends003_GetClanName(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends003_GetFriendCountFromSource, 12)
int __thiscall winISteamFriends_SteamFriends003_GetFriendCountFromSource(winISteamFriends_SteamFriends003 *_this, CSteamID steamIDSource)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends003_GetFriendCountFromSource(_this->linux_side, steamIDSource);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends003_GetFriendFromSourceByIndex, 20)
CSteamID *__thiscall winISteamFriends_SteamFriends003_GetFriendFromSourceByIndex(winISteamFriends_SteamFriends003 *_this, CSteamID *_r, CSteamID steamIDSource, int iFriend)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends003_GetFriendFromSourceByIndex(_this->linux_side, steamIDSource, iFriend);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends003_IsUserInSource, 20)
bool __thiscall winISteamFriends_SteamFriends003_IsUserInSource(winISteamFriends_SteamFriends003 *_this, CSteamID steamIDUser, CSteamID steamIDSource)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends003_IsUserInSource(_this->linux_side, steamIDUser, steamIDSource);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends003_SetInGameVoiceSpeaking, 16)
void __thiscall winISteamFriends_SteamFriends003_SetInGameVoiceSpeaking(winISteamFriends_SteamFriends003 *_this, CSteamID steamIDUser, bool bSpeaking)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends003_SetInGameVoiceSpeaking(_this->linux_side, steamIDUser, bSpeaking);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends003_ActivateGameOverlay, 8)
void __thiscall winISteamFriends_SteamFriends003_ActivateGameOverlay(winISteamFriends_SteamFriends003 *_this, const char * pchDialog)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends003_ActivateGameOverlay(_this->linux_side, pchDialog);
}

extern vtable_ptr winISteamFriends_SteamFriends003_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamFriends_SteamFriends003,
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends003_GetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends003_SetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends003_GetPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends003_GetFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends003_GetFriendByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends003_GetFriendRelationship)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends003_GetFriendPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends003_GetFriendPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends003_GetFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends003_GetFriendGamePlayed)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends003_GetFriendPersonaNameHistory)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends003_HasFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends003_GetClanCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends003_GetClanByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends003_GetClanName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends003_GetFriendCountFromSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends003_GetFriendFromSourceByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends003_IsUserInSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends003_SetInGameVoiceSpeaking)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends003_ActivateGameOverlay)
    );
#ifndef __GNUC__
}
#endif

winISteamFriends_SteamFriends003 *create_winISteamFriends_SteamFriends003(void *linux_side)
{
    winISteamFriends_SteamFriends003 *r = alloc_mem_for_iface(sizeof(winISteamFriends_SteamFriends003), "SteamFriends003");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamFriends_SteamFriends003_vtable, 20, "SteamFriends003");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamFriends_SteamFriends002.h"

typedef struct __winISteamFriends_SteamFriends002 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamFriends_SteamFriends002;

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_GetPersonaName, 4)
const char * __thiscall winISteamFriends_SteamFriends002_GetPersonaName(winISteamFriends_SteamFriends002 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends002_GetPersonaName(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_SetPersonaName, 8)
void __thiscall winISteamFriends_SteamFriends002_SetPersonaName(winISteamFriends_SteamFriends002 *_this, const char * pchPersonaName)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends002_SetPersonaName(_this->linux_side, pchPersonaName);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_GetPersonaState, 4)
EPersonaState __thiscall winISteamFriends_SteamFriends002_GetPersonaState(winISteamFriends_SteamFriends002 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends002_GetPersonaState(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_SetPersonaState, 8)
void __thiscall winISteamFriends_SteamFriends002_SetPersonaState(winISteamFriends_SteamFriends002 *_this, EPersonaState ePersonaState)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends002_SetPersonaState(_this->linux_side, ePersonaState);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_GetFriendCount, 8)
int __thiscall winISteamFriends_SteamFriends002_GetFriendCount(winISteamFriends_SteamFriends002 *_this, int iFriendFlags)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends002_GetFriendCount(_this->linux_side, iFriendFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_GetFriendByIndex, 16)
CSteamID *__thiscall winISteamFriends_SteamFriends002_GetFriendByIndex(winISteamFriends_SteamFriends002 *_this, CSteamID *_r, int iFriend, int iFriendFlags)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends002_GetFriendByIndex(_this->linux_side, iFriend, iFriendFlags);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_GetFriendRelationship, 12)
EFriendRelationship __thiscall winISteamFriends_SteamFriends002_GetFriendRelationship(winISteamFriends_SteamFriends002 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends002_GetFriendRelationship(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_GetFriendPersonaState, 12)
EPersonaState __thiscall winISteamFriends_SteamFriends002_GetFriendPersonaState(winISteamFriends_SteamFriends002 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends002_GetFriendPersonaState(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_GetFriendPersonaName, 12)
const char * __thiscall winISteamFriends_SteamFriends002_GetFriendPersonaName(winISteamFriends_SteamFriends002 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends002_GetFriendPersonaName(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_SetFriendRegValue, 20)
void __thiscall winISteamFriends_SteamFriends002_SetFriendRegValue(winISteamFriends_SteamFriends002 *_this, CSteamID steamIDFriend, const char * pchKey, const char * pchValue)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends002_SetFriendRegValue(_this->linux_side, steamIDFriend, pchKey, pchValue);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_GetFriendRegValue, 16)
const char * __thiscall winISteamFriends_SteamFriends002_GetFriendRegValue(winISteamFriends_SteamFriends002 *_this, CSteamID steamIDFriend, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends002_GetFriendRegValue(_this->linux_side, steamIDFriend, pchKey);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_GetFriendGamePlayed, 28)
bool __thiscall winISteamFriends_SteamFriends002_GetFriendGamePlayed(winISteamFriends_SteamFriends002 *_this, CSteamID steamIDFriend, uint64 * pulGameID, uint32 * punGameIP, uint16 * pusGamePort, uint16 * pusQueryPort)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends002_GetFriendGamePlayed(_this->linux_side, steamIDFriend, pulGameID, punGameIP, pusGamePort, pusQueryPort);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_GetFriendPersonaNameHistory, 16)
const char * __thiscall winISteamFriends_SteamFriends002_GetFriendPersonaNameHistory(winISteamFriends_SteamFriends002 *_this, CSteamID steamIDFriend, int iPersonaName)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends002_GetFriendPersonaNameHistory(_this->linux_side, steamIDFriend, iPersonaName);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_AddFriend, 12)
bool __thiscall winISteamFriends_SteamFriends002_AddFriend(winISteamFriends_SteamFriends002 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends002_AddFriend(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_RemoveFriend, 12)
bool __thiscall winISteamFriends_SteamFriends002_RemoveFriend(winISteamFriends_SteamFriends002 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends002_RemoveFriend(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_HasFriend, 16)
bool __thiscall winISteamFriends_SteamFriends002_HasFriend(winISteamFriends_SteamFriends002 *_this, CSteamID steamIDFriend, int iFriendFlags)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends002_HasFriend(_this->linux_side, steamIDFriend, iFriendFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_AddFriendByName, 8)
int32 __thiscall winISteamFriends_SteamFriends002_AddFriendByName(winISteamFriends_SteamFriends002 *_this, const char * pchEmailOrAccountName)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends002_AddFriendByName(_this->linux_side, pchEmailOrAccountName);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_InviteFriendByEmail, 8)
bool __thiscall winISteamFriends_SteamFriends002_InviteFriendByEmail(winISteamFriends_SteamFriends002 *_this, const char * pchEmailAccount)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends002_InviteFriendByEmail(_this->linux_side, pchEmailAccount);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_GetChatMessage, 28)
int __thiscall winISteamFriends_SteamFriends002_GetChatMessage(winISteamFriends_SteamFriends002 *_this, CSteamID steamIDFriend, int iChatID, void * pvData, int cubData, EChatEntryType * peChatEntryType)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends002_GetChatMessage(_this->linux_side, steamIDFriend, iChatID, pvData, cubData, peChatEntryType);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_SendMsgToFriend, 24)
bool __thiscall winISteamFriends_SteamFriends002_SendMsgToFriend(winISteamFriends_SteamFriends002 *_this, CSteamID steamIDFriend, EChatEntryType eChatEntryType, const void * pvMsgBody, int cubMsgBody)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends002_SendMsgToFriend(_this->linux_side, steamIDFriend, eChatEntryType, pvMsgBody, cubMsgBody);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_GetChatIDOfChatHistoryStart, 12)
int __thiscall winISteamFriends_SteamFriends002_GetChatIDOfChatHistoryStart(winISteamFriends_SteamFriends002 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends002_GetChatIDOfChatHistoryStart(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_SetChatHistoryStart, 16)
void __thiscall winISteamFriends_SteamFriends002_SetChatHistoryStart(winISteamFriends_SteamFriends002 *_this, CSteamID steamIDFriend, int iChatID)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends002_SetChatHistoryStart(_this->linux_side, steamIDFriend, iChatID);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_ClearChatHistory, 12)
void __thiscall winISteamFriends_SteamFriends002_ClearChatHistory(winISteamFriends_SteamFriends002 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends002_ClearChatHistory(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_GetClanCount, 4)
int __thiscall winISteamFriends_SteamFriends002_GetClanCount(winISteamFriends_SteamFriends002 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends002_GetClanCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_GetClanByIndex, 12)
CSteamID *__thiscall winISteamFriends_SteamFriends002_GetClanByIndex(winISteamFriends_SteamFriends002 *_this, CSteamID *_r, int iClan)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends002_GetClanByIndex(_this->linux_side, iClan);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_GetClanName, 12)
const char * __thiscall winISteamFriends_SteamFriends002_GetClanName(winISteamFriends_SteamFriends002 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends002_GetClanName(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_InviteFriendToClan, 20)
bool __thiscall winISteamFriends_SteamFriends002_InviteFriendToClan(winISteamFriends_SteamFriends002 *_this, CSteamID steamIDFriend, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends002_InviteFriendToClan(_this->linux_side, steamIDFriend, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_AcknowledgeInviteToClan, 16)
bool __thiscall winISteamFriends_SteamFriends002_AcknowledgeInviteToClan(winISteamFriends_SteamFriends002 *_this, CSteamID steamIDClan, bool bAcceptOrDenyClanInvite)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends002_AcknowledgeInviteToClan(_this->linux_side, steamIDClan, bAcceptOrDenyClanInvite);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_GetFriendCountFromSource, 12)
int __thiscall winISteamFriends_SteamFriends002_GetFriendCountFromSource(winISteamFriends_SteamFriends002 *_this, CSteamID steamIDSource)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends002_GetFriendCountFromSource(_this->linux_side, steamIDSource);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_GetFriendFromSourceByIndex, 20)
CSteamID *__thiscall winISteamFriends_SteamFriends002_GetFriendFromSourceByIndex(winISteamFriends_SteamFriends002 *_this, CSteamID *_r, CSteamID steamIDSource, int iFriend)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends002_GetFriendFromSourceByIndex(_this->linux_side, steamIDSource, iFriend);
    return _r;
}

extern vtable_ptr winISteamFriends_SteamFriends002_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamFriends_SteamFriends002,
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_GetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_SetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_GetPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_SetPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_GetFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_GetFriendByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_GetFriendRelationship)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_GetFriendPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_GetFriendPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_SetFriendRegValue)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_GetFriendRegValue)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_GetFriendGamePlayed)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_GetFriendPersonaNameHistory)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_AddFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_RemoveFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_HasFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_AddFriendByName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_InviteFriendByEmail)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_GetChatMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_SendMsgToFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_GetChatIDOfChatHistoryStart)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_SetChatHistoryStart)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_ClearChatHistory)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_GetClanCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_GetClanByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_GetClanName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_InviteFriendToClan)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_AcknowledgeInviteToClan)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_GetFriendCountFromSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_GetFriendFromSourceByIndex)
    );
#ifndef __GNUC__
}
#endif

winISteamFriends_SteamFriends002 *create_winISteamFriends_SteamFriends002(void *linux_side)
{
    winISteamFriends_SteamFriends002 *r = alloc_mem_for_iface(sizeof(winISteamFriends_SteamFriends002), "SteamFriends002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamFriends_SteamFriends002_vtable, 30, "SteamFriends002");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamFriends_SteamFriends001.h"

typedef struct __winISteamFriends_SteamFriends001 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamFriends_SteamFriends001;

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_GetPersonaName, 4)
const char * __thiscall winISteamFriends_SteamFriends001_GetPersonaName(winISteamFriends_SteamFriends001 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends001_GetPersonaName(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_SetPersonaName, 8)
void __thiscall winISteamFriends_SteamFriends001_SetPersonaName(winISteamFriends_SteamFriends001 *_this, const char * pchPersonaName)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends001_SetPersonaName(_this->linux_side, pchPersonaName);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_GetPersonaState, 4)
EPersonaState __thiscall winISteamFriends_SteamFriends001_GetPersonaState(winISteamFriends_SteamFriends001 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends001_GetPersonaState(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_SetPersonaState, 8)
void __thiscall winISteamFriends_SteamFriends001_SetPersonaState(winISteamFriends_SteamFriends001 *_this, EPersonaState ePersonaState)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends001_SetPersonaState(_this->linux_side, ePersonaState);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_AddFriend, 12)
bool __thiscall winISteamFriends_SteamFriends001_AddFriend(winISteamFriends_SteamFriends001 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends001_AddFriend(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_RemoveFriend, 12)
bool __thiscall winISteamFriends_SteamFriends001_RemoveFriend(winISteamFriends_SteamFriends001 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends001_RemoveFriend(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_HasFriend, 12)
bool __thiscall winISteamFriends_SteamFriends001_HasFriend(winISteamFriends_SteamFriends001 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends001_HasFriend(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_GetFriendRelationship, 12)
EFriendRelationship __thiscall winISteamFriends_SteamFriends001_GetFriendRelationship(winISteamFriends_SteamFriends001 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends001_GetFriendRelationship(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_GetFriendPersonaState, 12)
EPersonaState __thiscall winISteamFriends_SteamFriends001_GetFriendPersonaState(winISteamFriends_SteamFriends001 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends001_GetFriendPersonaState(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_Deprecated_GetFriendGamePlayed, 24)
bool __thiscall winISteamFriends_SteamFriends001_Deprecated_GetFriendGamePlayed(winISteamFriends_SteamFriends001 *_this, CSteamID steamIDFriend, int32 * pnGameID, uint32 * punGameIP, uint16 * pusGamePort)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends001_Deprecated_GetFriendGamePlayed(_this->linux_side, steamIDFriend, pnGameID, punGameIP, pusGamePort);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_GetFriendPersonaName, 12)
const char * __thiscall winISteamFriends_SteamFriends001_GetFriendPersonaName(winISteamFriends_SteamFriends001 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends001_GetFriendPersonaName(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_AddFriendByName, 8)
int32 __thiscall winISteamFriends_SteamFriends001_AddFriendByName(winISteamFriends_SteamFriends001 *_this, const char * pchEmailOrAccountName)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends001_AddFriendByName(_this->linux_side, pchEmailOrAccountName);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_GetFriendCount, 4)
int __thiscall winISteamFriends_SteamFriends001_GetFriendCount(winISteamFriends_SteamFriends001 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends001_GetFriendCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_GetFriendByIndex, 12)
CSteamID *__thiscall winISteamFriends_SteamFriends001_GetFriendByIndex(winISteamFriends_SteamFriends001 *_this, CSteamID *_r, int iFriend)
{
    TRACE("%p\n", _this);
    *_r = cppISteamFriends_SteamFriends001_GetFriendByIndex(_this->linux_side, iFriend);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_SendMsgToFriend, 20)
void __thiscall winISteamFriends_SteamFriends001_SendMsgToFriend(winISteamFriends_SteamFriends001 *_this, CSteamID steamIDFriend, EChatEntryType eChatEntryType, const char * pchMsgBody)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends001_SendMsgToFriend(_this->linux_side, steamIDFriend, eChatEntryType, pchMsgBody);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_SetFriendRegValue, 20)
void __thiscall winISteamFriends_SteamFriends001_SetFriendRegValue(winISteamFriends_SteamFriends001 *_this, CSteamID steamIDFriend, const char * pchKey, const char * pchValue)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends001_SetFriendRegValue(_this->linux_side, steamIDFriend, pchKey, pchValue);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_GetFriendRegValue, 16)
const char * __thiscall winISteamFriends_SteamFriends001_GetFriendRegValue(winISteamFriends_SteamFriends001 *_this, CSteamID steamIDFriend, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends001_GetFriendRegValue(_this->linux_side, steamIDFriend, pchKey);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_GetFriendPersonaNameHistory, 16)
const char * __thiscall winISteamFriends_SteamFriends001_GetFriendPersonaNameHistory(winISteamFriends_SteamFriends001 *_this, CSteamID steamIDFriend, int iPersonaName)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends001_GetFriendPersonaNameHistory(_this->linux_side, steamIDFriend, iPersonaName);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_GetChatMessage, 28)
int __thiscall winISteamFriends_SteamFriends001_GetChatMessage(winISteamFriends_SteamFriends001 *_this, CSteamID steamIDFriend, int iChatID, void * pvData, int cubData, EChatEntryType * peChatEntryType)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends001_GetChatMessage(_this->linux_side, steamIDFriend, iChatID, pvData, cubData, peChatEntryType);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_SendMsgToFriend_2, 24)
bool __thiscall winISteamFriends_SteamFriends001_SendMsgToFriend_2(winISteamFriends_SteamFriends001 *_this, CSteamID steamIDFriend, EChatEntryType eChatEntryType, const void * pvMsgBody, int cubMsgBody)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends001_SendMsgToFriend_2(_this->linux_side, steamIDFriend, eChatEntryType, pvMsgBody, cubMsgBody);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_GetChatIDOfChatHistoryStart, 12)
int __thiscall winISteamFriends_SteamFriends001_GetChatIDOfChatHistoryStart(winISteamFriends_SteamFriends001 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends001_GetChatIDOfChatHistoryStart(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_SetChatHistoryStart, 16)
void __thiscall winISteamFriends_SteamFriends001_SetChatHistoryStart(winISteamFriends_SteamFriends001 *_this, CSteamID steamIDFriend, int iChatID)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends001_SetChatHistoryStart(_this->linux_side, steamIDFriend, iChatID);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_ClearChatHistory, 12)
void __thiscall winISteamFriends_SteamFriends001_ClearChatHistory(winISteamFriends_SteamFriends001 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends001_ClearChatHistory(_this->linux_side, steamIDFriend);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_InviteFriendByEmail, 8)
bool __thiscall winISteamFriends_SteamFriends001_InviteFriendByEmail(winISteamFriends_SteamFriends001 *_this, const char * pchEmailAccount)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends001_InviteFriendByEmail(_this->linux_side, pchEmailAccount);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_GetBlockedFriendCount, 4)
int __thiscall winISteamFriends_SteamFriends001_GetBlockedFriendCount(winISteamFriends_SteamFriends001 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends001_GetBlockedFriendCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_GetFriendGamePlayed, 24)
bool __thiscall winISteamFriends_SteamFriends001_GetFriendGamePlayed(winISteamFriends_SteamFriends001 *_this, CSteamID steamIDFriend, uint64 * pulGameID, uint32 * punGameIP, uint16 * pusGamePort)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends001_GetFriendGamePlayed(_this->linux_side, steamIDFriend, pulGameID, punGameIP, pusGamePort);
}

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_GetFriendGamePlayed2, 28)
bool __thiscall winISteamFriends_SteamFriends001_GetFriendGamePlayed2(winISteamFriends_SteamFriends001 *_this, CSteamID steamIDFriend, uint64 * pulGameID, uint32 * punGameIP, uint16 * pusGamePort, uint16 * pusQueryPort)
{
    TRACE("%p\n", _this);
    return cppISteamFriends_SteamFriends001_GetFriendGamePlayed2(_this->linux_side, steamIDFriend, pulGameID, punGameIP, pusGamePort, pusQueryPort);
}

extern vtable_ptr winISteamFriends_SteamFriends001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamFriends_SteamFriends001,
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_GetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_SetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_GetPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_SetPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_AddFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_RemoveFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_HasFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_GetFriendRelationship)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_GetFriendPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_Deprecated_GetFriendGamePlayed)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_GetFriendPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_AddFriendByName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_GetFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_GetFriendByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_SendMsgToFriend_2)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_SendMsgToFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_SetFriendRegValue)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_GetFriendRegValue)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_GetFriendPersonaNameHistory)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_GetChatMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_GetChatIDOfChatHistoryStart)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_SetChatHistoryStart)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_ClearChatHistory)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_InviteFriendByEmail)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_GetBlockedFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_GetFriendGamePlayed)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_GetFriendGamePlayed2)
    );
#ifndef __GNUC__
}
#endif

winISteamFriends_SteamFriends001 *create_winISteamFriends_SteamFriends001(void *linux_side)
{
    winISteamFriends_SteamFriends001 *r = alloc_mem_for_iface(sizeof(winISteamFriends_SteamFriends001), "SteamFriends001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamFriends_SteamFriends001_vtable, 27, "SteamFriends001");
    r->linux_side = linux_side;
    return r;
}

