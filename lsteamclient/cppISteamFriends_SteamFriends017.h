/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct cppISteamFriends_SteamFriends017_GetPersonaName_params
{
    void *linux_side;
    const char *_ret;
};
extern void cppISteamFriends_SteamFriends017_GetPersonaName( struct cppISteamFriends_SteamFriends017_GetPersonaName_params *params );

struct cppISteamFriends_SteamFriends017_SetPersonaName_params
{
    void *linux_side;
    uint64_t _ret;
    const char *pchPersonaName;
};
extern void cppISteamFriends_SteamFriends017_SetPersonaName( struct cppISteamFriends_SteamFriends017_SetPersonaName_params *params );

struct cppISteamFriends_SteamFriends017_GetPersonaState_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamFriends_SteamFriends017_GetPersonaState( struct cppISteamFriends_SteamFriends017_GetPersonaState_params *params );

struct cppISteamFriends_SteamFriends017_GetFriendCount_params
{
    void *linux_side;
    int32_t _ret;
    int32_t iFriendFlags;
};
extern void cppISteamFriends_SteamFriends017_GetFriendCount( struct cppISteamFriends_SteamFriends017_GetFriendCount_params *params );

struct cppISteamFriends_SteamFriends017_GetFriendByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    int32_t iFriend;
    int32_t iFriendFlags;
};
extern void cppISteamFriends_SteamFriends017_GetFriendByIndex( struct cppISteamFriends_SteamFriends017_GetFriendByIndex_params *params );

struct cppISteamFriends_SteamFriends017_GetFriendRelationship_params
{
    void *linux_side;
    uint32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends017_GetFriendRelationship( struct cppISteamFriends_SteamFriends017_GetFriendRelationship_params *params );

struct cppISteamFriends_SteamFriends017_GetFriendPersonaState_params
{
    void *linux_side;
    uint32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends017_GetFriendPersonaState( struct cppISteamFriends_SteamFriends017_GetFriendPersonaState_params *params );

struct cppISteamFriends_SteamFriends017_GetFriendPersonaName_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends017_GetFriendPersonaName( struct cppISteamFriends_SteamFriends017_GetFriendPersonaName_params *params );

struct cppISteamFriends_SteamFriends017_GetFriendGamePlayed_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    FriendGameInfo_t *pFriendGameInfo;
};
extern void cppISteamFriends_SteamFriends017_GetFriendGamePlayed( struct cppISteamFriends_SteamFriends017_GetFriendGamePlayed_params *params );

struct cppISteamFriends_SteamFriends017_GetFriendPersonaNameHistory_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
    int32_t iPersonaName;
};
extern void cppISteamFriends_SteamFriends017_GetFriendPersonaNameHistory( struct cppISteamFriends_SteamFriends017_GetFriendPersonaNameHistory_params *params );

struct cppISteamFriends_SteamFriends017_GetFriendSteamLevel_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends017_GetFriendSteamLevel( struct cppISteamFriends_SteamFriends017_GetFriendSteamLevel_params *params );

struct cppISteamFriends_SteamFriends017_GetPlayerNickname_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDPlayer;
};
extern void cppISteamFriends_SteamFriends017_GetPlayerNickname( struct cppISteamFriends_SteamFriends017_GetPlayerNickname_params *params );

struct cppISteamFriends_SteamFriends017_GetFriendsGroupCount_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppISteamFriends_SteamFriends017_GetFriendsGroupCount( struct cppISteamFriends_SteamFriends017_GetFriendsGroupCount_params *params );

struct cppISteamFriends_SteamFriends017_GetFriendsGroupIDByIndex_params
{
    void *linux_side;
    int16_t _ret;
    int32_t iFG;
};
extern void cppISteamFriends_SteamFriends017_GetFriendsGroupIDByIndex( struct cppISteamFriends_SteamFriends017_GetFriendsGroupIDByIndex_params *params );

struct cppISteamFriends_SteamFriends017_GetFriendsGroupName_params
{
    void *linux_side;
    const char *_ret;
    int16_t friendsGroupID;
};
extern void cppISteamFriends_SteamFriends017_GetFriendsGroupName( struct cppISteamFriends_SteamFriends017_GetFriendsGroupName_params *params );

struct cppISteamFriends_SteamFriends017_GetFriendsGroupMembersCount_params
{
    void *linux_side;
    int32_t _ret;
    int16_t friendsGroupID;
};
extern void cppISteamFriends_SteamFriends017_GetFriendsGroupMembersCount( struct cppISteamFriends_SteamFriends017_GetFriendsGroupMembersCount_params *params );

struct cppISteamFriends_SteamFriends017_GetFriendsGroupMembersList_params
{
    void *linux_side;
    int16_t friendsGroupID;
    CSteamID *pOutSteamIDMembers;
    int32_t nMembersCount;
};
extern void cppISteamFriends_SteamFriends017_GetFriendsGroupMembersList( struct cppISteamFriends_SteamFriends017_GetFriendsGroupMembersList_params *params );

struct cppISteamFriends_SteamFriends017_HasFriend_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    int32_t iFriendFlags;
};
extern void cppISteamFriends_SteamFriends017_HasFriend( struct cppISteamFriends_SteamFriends017_HasFriend_params *params );

struct cppISteamFriends_SteamFriends017_GetClanCount_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppISteamFriends_SteamFriends017_GetClanCount( struct cppISteamFriends_SteamFriends017_GetClanCount_params *params );

struct cppISteamFriends_SteamFriends017_GetClanByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    int32_t iClan;
};
extern void cppISteamFriends_SteamFriends017_GetClanByIndex( struct cppISteamFriends_SteamFriends017_GetClanByIndex_params *params );

struct cppISteamFriends_SteamFriends017_GetClanName_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends017_GetClanName( struct cppISteamFriends_SteamFriends017_GetClanName_params *params );

struct cppISteamFriends_SteamFriends017_GetClanTag_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends017_GetClanTag( struct cppISteamFriends_SteamFriends017_GetClanTag_params *params );

struct cppISteamFriends_SteamFriends017_GetClanActivityCounts_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClan;
    int32_t *pnOnline;
    int32_t *pnInGame;
    int32_t *pnChatting;
};
extern void cppISteamFriends_SteamFriends017_GetClanActivityCounts( struct cppISteamFriends_SteamFriends017_GetClanActivityCounts_params *params );

struct cppISteamFriends_SteamFriends017_DownloadClanActivityCounts_params
{
    void *linux_side;
    uint64_t _ret;
    CSteamID *psteamIDClans;
    int32_t cClansToRequest;
};
extern void cppISteamFriends_SteamFriends017_DownloadClanActivityCounts( struct cppISteamFriends_SteamFriends017_DownloadClanActivityCounts_params *params );

struct cppISteamFriends_SteamFriends017_GetFriendCountFromSource_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDSource;
};
extern void cppISteamFriends_SteamFriends017_GetFriendCountFromSource( struct cppISteamFriends_SteamFriends017_GetFriendCountFromSource_params *params );

struct cppISteamFriends_SteamFriends017_GetFriendFromSourceByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDSource;
    int32_t iFriend;
};
extern void cppISteamFriends_SteamFriends017_GetFriendFromSourceByIndex( struct cppISteamFriends_SteamFriends017_GetFriendFromSourceByIndex_params *params );

struct cppISteamFriends_SteamFriends017_IsUserInSource_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    CSteamID steamIDSource;
};
extern void cppISteamFriends_SteamFriends017_IsUserInSource( struct cppISteamFriends_SteamFriends017_IsUserInSource_params *params );

struct cppISteamFriends_SteamFriends017_SetInGameVoiceSpeaking_params
{
    void *linux_side;
    CSteamID steamIDUser;
    bool bSpeaking;
};
extern void cppISteamFriends_SteamFriends017_SetInGameVoiceSpeaking( struct cppISteamFriends_SteamFriends017_SetInGameVoiceSpeaking_params *params );

struct cppISteamFriends_SteamFriends017_ActivateGameOverlay_params
{
    void *linux_side;
    const char *pchDialog;
};
extern void cppISteamFriends_SteamFriends017_ActivateGameOverlay( struct cppISteamFriends_SteamFriends017_ActivateGameOverlay_params *params );

struct cppISteamFriends_SteamFriends017_ActivateGameOverlayToUser_params
{
    void *linux_side;
    const char *pchDialog;
    CSteamID steamID;
};
extern void cppISteamFriends_SteamFriends017_ActivateGameOverlayToUser( struct cppISteamFriends_SteamFriends017_ActivateGameOverlayToUser_params *params );

struct cppISteamFriends_SteamFriends017_ActivateGameOverlayToWebPage_params
{
    void *linux_side;
    const char *pchURL;
    uint32_t eMode;
};
extern void cppISteamFriends_SteamFriends017_ActivateGameOverlayToWebPage( struct cppISteamFriends_SteamFriends017_ActivateGameOverlayToWebPage_params *params );

struct cppISteamFriends_SteamFriends017_ActivateGameOverlayToStore_params
{
    void *linux_side;
    uint32_t nAppID;
    uint32_t eFlag;
};
extern void cppISteamFriends_SteamFriends017_ActivateGameOverlayToStore( struct cppISteamFriends_SteamFriends017_ActivateGameOverlayToStore_params *params );

struct cppISteamFriends_SteamFriends017_SetPlayedWith_params
{
    void *linux_side;
    CSteamID steamIDUserPlayedWith;
};
extern void cppISteamFriends_SteamFriends017_SetPlayedWith( struct cppISteamFriends_SteamFriends017_SetPlayedWith_params *params );

struct cppISteamFriends_SteamFriends017_ActivateGameOverlayInviteDialog_params
{
    void *linux_side;
    CSteamID steamIDLobby;
};
extern void cppISteamFriends_SteamFriends017_ActivateGameOverlayInviteDialog( struct cppISteamFriends_SteamFriends017_ActivateGameOverlayInviteDialog_params *params );

struct cppISteamFriends_SteamFriends017_GetSmallFriendAvatar_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends017_GetSmallFriendAvatar( struct cppISteamFriends_SteamFriends017_GetSmallFriendAvatar_params *params );

struct cppISteamFriends_SteamFriends017_GetMediumFriendAvatar_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends017_GetMediumFriendAvatar( struct cppISteamFriends_SteamFriends017_GetMediumFriendAvatar_params *params );

struct cppISteamFriends_SteamFriends017_GetLargeFriendAvatar_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends017_GetLargeFriendAvatar( struct cppISteamFriends_SteamFriends017_GetLargeFriendAvatar_params *params );

struct cppISteamFriends_SteamFriends017_RequestUserInformation_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    bool bRequireNameOnly;
};
extern void cppISteamFriends_SteamFriends017_RequestUserInformation( struct cppISteamFriends_SteamFriends017_RequestUserInformation_params *params );

struct cppISteamFriends_SteamFriends017_RequestClanOfficerList_params
{
    void *linux_side;
    uint64_t _ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends017_RequestClanOfficerList( struct cppISteamFriends_SteamFriends017_RequestClanOfficerList_params *params );

struct cppISteamFriends_SteamFriends017_GetClanOwner_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends017_GetClanOwner( struct cppISteamFriends_SteamFriends017_GetClanOwner_params *params );

struct cppISteamFriends_SteamFriends017_GetClanOfficerCount_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends017_GetClanOfficerCount( struct cppISteamFriends_SteamFriends017_GetClanOfficerCount_params *params );

struct cppISteamFriends_SteamFriends017_GetClanOfficerByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDClan;
    int32_t iOfficer;
};
extern void cppISteamFriends_SteamFriends017_GetClanOfficerByIndex( struct cppISteamFriends_SteamFriends017_GetClanOfficerByIndex_params *params );

struct cppISteamFriends_SteamFriends017_GetUserRestrictions_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamFriends_SteamFriends017_GetUserRestrictions( struct cppISteamFriends_SteamFriends017_GetUserRestrictions_params *params );

struct cppISteamFriends_SteamFriends017_SetRichPresence_params
{
    void *linux_side;
    bool _ret;
    const char *pchKey;
    const char *pchValue;
};
extern void cppISteamFriends_SteamFriends017_SetRichPresence( struct cppISteamFriends_SteamFriends017_SetRichPresence_params *params );

struct cppISteamFriends_SteamFriends017_ClearRichPresence_params
{
    void *linux_side;
};
extern void cppISteamFriends_SteamFriends017_ClearRichPresence( struct cppISteamFriends_SteamFriends017_ClearRichPresence_params *params );

struct cppISteamFriends_SteamFriends017_GetFriendRichPresence_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
    const char *pchKey;
};
extern void cppISteamFriends_SteamFriends017_GetFriendRichPresence( struct cppISteamFriends_SteamFriends017_GetFriendRichPresence_params *params );

struct cppISteamFriends_SteamFriends017_GetFriendRichPresenceKeyCount_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends017_GetFriendRichPresenceKeyCount( struct cppISteamFriends_SteamFriends017_GetFriendRichPresenceKeyCount_params *params );

struct cppISteamFriends_SteamFriends017_GetFriendRichPresenceKeyByIndex_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
    int32_t iKey;
};
extern void cppISteamFriends_SteamFriends017_GetFriendRichPresenceKeyByIndex( struct cppISteamFriends_SteamFriends017_GetFriendRichPresenceKeyByIndex_params *params );

struct cppISteamFriends_SteamFriends017_RequestFriendRichPresence_params
{
    void *linux_side;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends017_RequestFriendRichPresence( struct cppISteamFriends_SteamFriends017_RequestFriendRichPresence_params *params );

struct cppISteamFriends_SteamFriends017_InviteUserToGame_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    const char *pchConnectString;
};
extern void cppISteamFriends_SteamFriends017_InviteUserToGame( struct cppISteamFriends_SteamFriends017_InviteUserToGame_params *params );

struct cppISteamFriends_SteamFriends017_GetCoplayFriendCount_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppISteamFriends_SteamFriends017_GetCoplayFriendCount( struct cppISteamFriends_SteamFriends017_GetCoplayFriendCount_params *params );

struct cppISteamFriends_SteamFriends017_GetCoplayFriend_params
{
    void *linux_side;
    CSteamID *_ret;
    int32_t iCoplayFriend;
};
extern void cppISteamFriends_SteamFriends017_GetCoplayFriend( struct cppISteamFriends_SteamFriends017_GetCoplayFriend_params *params );

struct cppISteamFriends_SteamFriends017_GetFriendCoplayTime_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends017_GetFriendCoplayTime( struct cppISteamFriends_SteamFriends017_GetFriendCoplayTime_params *params );

struct cppISteamFriends_SteamFriends017_GetFriendCoplayGame_params
{
    void *linux_side;
    uint32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends017_GetFriendCoplayGame( struct cppISteamFriends_SteamFriends017_GetFriendCoplayGame_params *params );

struct cppISteamFriends_SteamFriends017_JoinClanChatRoom_params
{
    void *linux_side;
    uint64_t _ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends017_JoinClanChatRoom( struct cppISteamFriends_SteamFriends017_JoinClanChatRoom_params *params );

struct cppISteamFriends_SteamFriends017_LeaveClanChatRoom_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends017_LeaveClanChatRoom( struct cppISteamFriends_SteamFriends017_LeaveClanChatRoom_params *params );

struct cppISteamFriends_SteamFriends017_GetClanChatMemberCount_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends017_GetClanChatMemberCount( struct cppISteamFriends_SteamFriends017_GetClanChatMemberCount_params *params );

struct cppISteamFriends_SteamFriends017_GetChatMemberByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDClan;
    int32_t iUser;
};
extern void cppISteamFriends_SteamFriends017_GetChatMemberByIndex( struct cppISteamFriends_SteamFriends017_GetChatMemberByIndex_params *params );

struct cppISteamFriends_SteamFriends017_SendClanChatMessage_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClanChat;
    const char *pchText;
};
extern void cppISteamFriends_SteamFriends017_SendClanChatMessage( struct cppISteamFriends_SteamFriends017_SendClanChatMessage_params *params );

struct cppISteamFriends_SteamFriends017_GetClanChatMessage_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDClanChat;
    int32_t iMessage;
    void *prgchText;
    int32_t cchTextMax;
    uint32_t *peChatEntryType;
    CSteamID *psteamidChatter;
};
extern void cppISteamFriends_SteamFriends017_GetClanChatMessage( struct cppISteamFriends_SteamFriends017_GetClanChatMessage_params *params );

struct cppISteamFriends_SteamFriends017_IsClanChatAdmin_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClanChat;
    CSteamID steamIDUser;
};
extern void cppISteamFriends_SteamFriends017_IsClanChatAdmin( struct cppISteamFriends_SteamFriends017_IsClanChatAdmin_params *params );

struct cppISteamFriends_SteamFriends017_IsClanChatWindowOpenInSteam_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClanChat;
};
extern void cppISteamFriends_SteamFriends017_IsClanChatWindowOpenInSteam( struct cppISteamFriends_SteamFriends017_IsClanChatWindowOpenInSteam_params *params );

struct cppISteamFriends_SteamFriends017_OpenClanChatWindowInSteam_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClanChat;
};
extern void cppISteamFriends_SteamFriends017_OpenClanChatWindowInSteam( struct cppISteamFriends_SteamFriends017_OpenClanChatWindowInSteam_params *params );

struct cppISteamFriends_SteamFriends017_CloseClanChatWindowInSteam_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClanChat;
};
extern void cppISteamFriends_SteamFriends017_CloseClanChatWindowInSteam( struct cppISteamFriends_SteamFriends017_CloseClanChatWindowInSteam_params *params );

struct cppISteamFriends_SteamFriends017_SetListenForFriendsMessages_params
{
    void *linux_side;
    bool _ret;
    bool bInterceptEnabled;
};
extern void cppISteamFriends_SteamFriends017_SetListenForFriendsMessages( struct cppISteamFriends_SteamFriends017_SetListenForFriendsMessages_params *params );

struct cppISteamFriends_SteamFriends017_ReplyToFriendMessage_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    const char *pchMsgToSend;
};
extern void cppISteamFriends_SteamFriends017_ReplyToFriendMessage( struct cppISteamFriends_SteamFriends017_ReplyToFriendMessage_params *params );

struct cppISteamFriends_SteamFriends017_GetFriendMessage_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
    int32_t iMessageID;
    void *pvData;
    int32_t cubData;
    uint32_t *peChatEntryType;
};
extern void cppISteamFriends_SteamFriends017_GetFriendMessage( struct cppISteamFriends_SteamFriends017_GetFriendMessage_params *params );

struct cppISteamFriends_SteamFriends017_GetFollowerCount_params
{
    void *linux_side;
    uint64_t _ret;
    CSteamID steamID;
};
extern void cppISteamFriends_SteamFriends017_GetFollowerCount( struct cppISteamFriends_SteamFriends017_GetFollowerCount_params *params );

struct cppISteamFriends_SteamFriends017_IsFollowing_params
{
    void *linux_side;
    uint64_t _ret;
    CSteamID steamID;
};
extern void cppISteamFriends_SteamFriends017_IsFollowing( struct cppISteamFriends_SteamFriends017_IsFollowing_params *params );

struct cppISteamFriends_SteamFriends017_EnumerateFollowingList_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t unStartIndex;
};
extern void cppISteamFriends_SteamFriends017_EnumerateFollowingList( struct cppISteamFriends_SteamFriends017_EnumerateFollowingList_params *params );

struct cppISteamFriends_SteamFriends017_IsClanPublic_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends017_IsClanPublic( struct cppISteamFriends_SteamFriends017_IsClanPublic_params *params );

struct cppISteamFriends_SteamFriends017_IsClanOfficialGameGroup_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends017_IsClanOfficialGameGroup( struct cppISteamFriends_SteamFriends017_IsClanOfficialGameGroup_params *params );

struct cppISteamFriends_SteamFriends017_GetNumChatsWithUnreadPriorityMessages_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppISteamFriends_SteamFriends017_GetNumChatsWithUnreadPriorityMessages( struct cppISteamFriends_SteamFriends017_GetNumChatsWithUnreadPriorityMessages_params *params );

struct cppISteamFriends_SteamFriends017_ActivateGameOverlayRemotePlayTogetherInviteDialog_params
{
    void *linux_side;
    CSteamID steamIDLobby;
};
extern void cppISteamFriends_SteamFriends017_ActivateGameOverlayRemotePlayTogetherInviteDialog( struct cppISteamFriends_SteamFriends017_ActivateGameOverlayRemotePlayTogetherInviteDialog_params *params );

struct cppISteamFriends_SteamFriends017_RegisterProtocolInOverlayBrowser_params
{
    void *linux_side;
    bool _ret;
    const char *pchProtocol;
};
extern void cppISteamFriends_SteamFriends017_RegisterProtocolInOverlayBrowser( struct cppISteamFriends_SteamFriends017_RegisterProtocolInOverlayBrowser_params *params );

struct cppISteamFriends_SteamFriends017_ActivateGameOverlayInviteDialogConnectString_params
{
    void *linux_side;
    const char *pchConnectString;
};
extern void cppISteamFriends_SteamFriends017_ActivateGameOverlayInviteDialogConnectString( struct cppISteamFriends_SteamFriends017_ActivateGameOverlayInviteDialogConnectString_params *params );

struct cppISteamFriends_SteamFriends017_RequestEquippedProfileItems_params
{
    void *linux_side;
    uint64_t _ret;
    CSteamID steamID;
};
extern void cppISteamFriends_SteamFriends017_RequestEquippedProfileItems( struct cppISteamFriends_SteamFriends017_RequestEquippedProfileItems_params *params );

struct cppISteamFriends_SteamFriends017_BHasEquippedProfileItem_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamID;
    uint32_t itemType;
};
extern void cppISteamFriends_SteamFriends017_BHasEquippedProfileItem( struct cppISteamFriends_SteamFriends017_BHasEquippedProfileItem_params *params );

struct cppISteamFriends_SteamFriends017_GetProfileItemPropertyString_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamID;
    uint32_t itemType;
    uint32_t prop;
};
extern void cppISteamFriends_SteamFriends017_GetProfileItemPropertyString( struct cppISteamFriends_SteamFriends017_GetProfileItemPropertyString_params *params );

struct cppISteamFriends_SteamFriends017_GetProfileItemPropertyUint_params
{
    void *linux_side;
    uint32_t _ret;
    CSteamID steamID;
    uint32_t itemType;
    uint32_t prop;
};
extern void cppISteamFriends_SteamFriends017_GetProfileItemPropertyUint( struct cppISteamFriends_SteamFriends017_GetProfileItemPropertyUint_params *params );

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
