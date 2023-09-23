struct cppISteamFriends_SteamFriends015;
struct cppISteamFriends_SteamFriends015_GetPersonaName_params
{
    void *linux_side;
    const char *_ret;
};
extern void cppISteamFriends_SteamFriends015_GetPersonaName( struct cppISteamFriends_SteamFriends015_GetPersonaName_params *params );

struct cppISteamFriends_SteamFriends015_SetPersonaName_params
{
    void *linux_side;
    uint64_t _ret;
    const char *pchPersonaName;
};
extern void cppISteamFriends_SteamFriends015_SetPersonaName( struct cppISteamFriends_SteamFriends015_SetPersonaName_params *params );

struct cppISteamFriends_SteamFriends015_GetPersonaState_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamFriends_SteamFriends015_GetPersonaState( struct cppISteamFriends_SteamFriends015_GetPersonaState_params *params );

struct cppISteamFriends_SteamFriends015_GetFriendCount_params
{
    void *linux_side;
    int32_t _ret;
    int32_t iFriendFlags;
};
extern void cppISteamFriends_SteamFriends015_GetFriendCount( struct cppISteamFriends_SteamFriends015_GetFriendCount_params *params );

struct cppISteamFriends_SteamFriends015_GetFriendByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    int32_t iFriend;
    int32_t iFriendFlags;
};
extern void cppISteamFriends_SteamFriends015_GetFriendByIndex( struct cppISteamFriends_SteamFriends015_GetFriendByIndex_params *params );

struct cppISteamFriends_SteamFriends015_GetFriendRelationship_params
{
    void *linux_side;
    uint32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends015_GetFriendRelationship( struct cppISteamFriends_SteamFriends015_GetFriendRelationship_params *params );

struct cppISteamFriends_SteamFriends015_GetFriendPersonaState_params
{
    void *linux_side;
    uint32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends015_GetFriendPersonaState( struct cppISteamFriends_SteamFriends015_GetFriendPersonaState_params *params );

struct cppISteamFriends_SteamFriends015_GetFriendPersonaName_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends015_GetFriendPersonaName( struct cppISteamFriends_SteamFriends015_GetFriendPersonaName_params *params );

struct cppISteamFriends_SteamFriends015_GetFriendGamePlayed_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    FriendGameInfo_t *pFriendGameInfo;
};
extern void cppISteamFriends_SteamFriends015_GetFriendGamePlayed( struct cppISteamFriends_SteamFriends015_GetFriendGamePlayed_params *params );

struct cppISteamFriends_SteamFriends015_GetFriendPersonaNameHistory_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
    int32_t iPersonaName;
};
extern void cppISteamFriends_SteamFriends015_GetFriendPersonaNameHistory( struct cppISteamFriends_SteamFriends015_GetFriendPersonaNameHistory_params *params );

struct cppISteamFriends_SteamFriends015_GetFriendSteamLevel_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends015_GetFriendSteamLevel( struct cppISteamFriends_SteamFriends015_GetFriendSteamLevel_params *params );

struct cppISteamFriends_SteamFriends015_GetPlayerNickname_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDPlayer;
};
extern void cppISteamFriends_SteamFriends015_GetPlayerNickname( struct cppISteamFriends_SteamFriends015_GetPlayerNickname_params *params );

struct cppISteamFriends_SteamFriends015_GetFriendsGroupCount_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppISteamFriends_SteamFriends015_GetFriendsGroupCount( struct cppISteamFriends_SteamFriends015_GetFriendsGroupCount_params *params );

struct cppISteamFriends_SteamFriends015_GetFriendsGroupIDByIndex_params
{
    void *linux_side;
    int16_t _ret;
    int32_t iFG;
};
extern void cppISteamFriends_SteamFriends015_GetFriendsGroupIDByIndex( struct cppISteamFriends_SteamFriends015_GetFriendsGroupIDByIndex_params *params );

struct cppISteamFriends_SteamFriends015_GetFriendsGroupName_params
{
    void *linux_side;
    const char *_ret;
    int16_t friendsGroupID;
};
extern void cppISteamFriends_SteamFriends015_GetFriendsGroupName( struct cppISteamFriends_SteamFriends015_GetFriendsGroupName_params *params );

struct cppISteamFriends_SteamFriends015_GetFriendsGroupMembersCount_params
{
    void *linux_side;
    int32_t _ret;
    int16_t friendsGroupID;
};
extern void cppISteamFriends_SteamFriends015_GetFriendsGroupMembersCount( struct cppISteamFriends_SteamFriends015_GetFriendsGroupMembersCount_params *params );

struct cppISteamFriends_SteamFriends015_GetFriendsGroupMembersList_params
{
    void *linux_side;
    int16_t friendsGroupID;
    CSteamID *pOutSteamIDMembers;
    int32_t nMembersCount;
};
extern void cppISteamFriends_SteamFriends015_GetFriendsGroupMembersList( struct cppISteamFriends_SteamFriends015_GetFriendsGroupMembersList_params *params );

struct cppISteamFriends_SteamFriends015_HasFriend_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    int32_t iFriendFlags;
};
extern void cppISteamFriends_SteamFriends015_HasFriend( struct cppISteamFriends_SteamFriends015_HasFriend_params *params );

struct cppISteamFriends_SteamFriends015_GetClanCount_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppISteamFriends_SteamFriends015_GetClanCount( struct cppISteamFriends_SteamFriends015_GetClanCount_params *params );

struct cppISteamFriends_SteamFriends015_GetClanByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    int32_t iClan;
};
extern void cppISteamFriends_SteamFriends015_GetClanByIndex( struct cppISteamFriends_SteamFriends015_GetClanByIndex_params *params );

struct cppISteamFriends_SteamFriends015_GetClanName_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends015_GetClanName( struct cppISteamFriends_SteamFriends015_GetClanName_params *params );

struct cppISteamFriends_SteamFriends015_GetClanTag_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends015_GetClanTag( struct cppISteamFriends_SteamFriends015_GetClanTag_params *params );

struct cppISteamFriends_SteamFriends015_GetClanActivityCounts_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClan;
    int32_t *pnOnline;
    int32_t *pnInGame;
    int32_t *pnChatting;
};
extern void cppISteamFriends_SteamFriends015_GetClanActivityCounts( struct cppISteamFriends_SteamFriends015_GetClanActivityCounts_params *params );

struct cppISteamFriends_SteamFriends015_DownloadClanActivityCounts_params
{
    void *linux_side;
    uint64_t _ret;
    CSteamID *psteamIDClans;
    int32_t cClansToRequest;
};
extern void cppISteamFriends_SteamFriends015_DownloadClanActivityCounts( struct cppISteamFriends_SteamFriends015_DownloadClanActivityCounts_params *params );

struct cppISteamFriends_SteamFriends015_GetFriendCountFromSource_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDSource;
};
extern void cppISteamFriends_SteamFriends015_GetFriendCountFromSource( struct cppISteamFriends_SteamFriends015_GetFriendCountFromSource_params *params );

struct cppISteamFriends_SteamFriends015_GetFriendFromSourceByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDSource;
    int32_t iFriend;
};
extern void cppISteamFriends_SteamFriends015_GetFriendFromSourceByIndex( struct cppISteamFriends_SteamFriends015_GetFriendFromSourceByIndex_params *params );

struct cppISteamFriends_SteamFriends015_IsUserInSource_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    CSteamID steamIDSource;
};
extern void cppISteamFriends_SteamFriends015_IsUserInSource( struct cppISteamFriends_SteamFriends015_IsUserInSource_params *params );

struct cppISteamFriends_SteamFriends015_SetInGameVoiceSpeaking_params
{
    void *linux_side;
    CSteamID steamIDUser;
    bool bSpeaking;
};
extern void cppISteamFriends_SteamFriends015_SetInGameVoiceSpeaking( struct cppISteamFriends_SteamFriends015_SetInGameVoiceSpeaking_params *params );

struct cppISteamFriends_SteamFriends015_ActivateGameOverlay_params
{
    void *linux_side;
    const char *pchDialog;
};
extern void cppISteamFriends_SteamFriends015_ActivateGameOverlay( struct cppISteamFriends_SteamFriends015_ActivateGameOverlay_params *params );

struct cppISteamFriends_SteamFriends015_ActivateGameOverlayToUser_params
{
    void *linux_side;
    const char *pchDialog;
    CSteamID steamID;
};
extern void cppISteamFriends_SteamFriends015_ActivateGameOverlayToUser( struct cppISteamFriends_SteamFriends015_ActivateGameOverlayToUser_params *params );

struct cppISteamFriends_SteamFriends015_ActivateGameOverlayToWebPage_params
{
    void *linux_side;
    const char *pchURL;
};
extern void cppISteamFriends_SteamFriends015_ActivateGameOverlayToWebPage( struct cppISteamFriends_SteamFriends015_ActivateGameOverlayToWebPage_params *params );

struct cppISteamFriends_SteamFriends015_ActivateGameOverlayToStore_params
{
    void *linux_side;
    uint32_t nAppID;
    uint32_t eFlag;
};
extern void cppISteamFriends_SteamFriends015_ActivateGameOverlayToStore( struct cppISteamFriends_SteamFriends015_ActivateGameOverlayToStore_params *params );

struct cppISteamFriends_SteamFriends015_SetPlayedWith_params
{
    void *linux_side;
    CSteamID steamIDUserPlayedWith;
};
extern void cppISteamFriends_SteamFriends015_SetPlayedWith( struct cppISteamFriends_SteamFriends015_SetPlayedWith_params *params );

struct cppISteamFriends_SteamFriends015_ActivateGameOverlayInviteDialog_params
{
    void *linux_side;
    CSteamID steamIDLobby;
};
extern void cppISteamFriends_SteamFriends015_ActivateGameOverlayInviteDialog( struct cppISteamFriends_SteamFriends015_ActivateGameOverlayInviteDialog_params *params );

struct cppISteamFriends_SteamFriends015_GetSmallFriendAvatar_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends015_GetSmallFriendAvatar( struct cppISteamFriends_SteamFriends015_GetSmallFriendAvatar_params *params );

struct cppISteamFriends_SteamFriends015_GetMediumFriendAvatar_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends015_GetMediumFriendAvatar( struct cppISteamFriends_SteamFriends015_GetMediumFriendAvatar_params *params );

struct cppISteamFriends_SteamFriends015_GetLargeFriendAvatar_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends015_GetLargeFriendAvatar( struct cppISteamFriends_SteamFriends015_GetLargeFriendAvatar_params *params );

struct cppISteamFriends_SteamFriends015_RequestUserInformation_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    bool bRequireNameOnly;
};
extern void cppISteamFriends_SteamFriends015_RequestUserInformation( struct cppISteamFriends_SteamFriends015_RequestUserInformation_params *params );

struct cppISteamFriends_SteamFriends015_RequestClanOfficerList_params
{
    void *linux_side;
    uint64_t _ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends015_RequestClanOfficerList( struct cppISteamFriends_SteamFriends015_RequestClanOfficerList_params *params );

struct cppISteamFriends_SteamFriends015_GetClanOwner_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends015_GetClanOwner( struct cppISteamFriends_SteamFriends015_GetClanOwner_params *params );

struct cppISteamFriends_SteamFriends015_GetClanOfficerCount_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends015_GetClanOfficerCount( struct cppISteamFriends_SteamFriends015_GetClanOfficerCount_params *params );

struct cppISteamFriends_SteamFriends015_GetClanOfficerByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDClan;
    int32_t iOfficer;
};
extern void cppISteamFriends_SteamFriends015_GetClanOfficerByIndex( struct cppISteamFriends_SteamFriends015_GetClanOfficerByIndex_params *params );

struct cppISteamFriends_SteamFriends015_GetUserRestrictions_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamFriends_SteamFriends015_GetUserRestrictions( struct cppISteamFriends_SteamFriends015_GetUserRestrictions_params *params );

struct cppISteamFriends_SteamFriends015_SetRichPresence_params
{
    void *linux_side;
    bool _ret;
    const char *pchKey;
    const char *pchValue;
};
extern void cppISteamFriends_SteamFriends015_SetRichPresence( struct cppISteamFriends_SteamFriends015_SetRichPresence_params *params );

struct cppISteamFriends_SteamFriends015_ClearRichPresence_params
{
    void *linux_side;
};
extern void cppISteamFriends_SteamFriends015_ClearRichPresence( struct cppISteamFriends_SteamFriends015_ClearRichPresence_params *params );

struct cppISteamFriends_SteamFriends015_GetFriendRichPresence_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
    const char *pchKey;
};
extern void cppISteamFriends_SteamFriends015_GetFriendRichPresence( struct cppISteamFriends_SteamFriends015_GetFriendRichPresence_params *params );

struct cppISteamFriends_SteamFriends015_GetFriendRichPresenceKeyCount_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends015_GetFriendRichPresenceKeyCount( struct cppISteamFriends_SteamFriends015_GetFriendRichPresenceKeyCount_params *params );

struct cppISteamFriends_SteamFriends015_GetFriendRichPresenceKeyByIndex_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
    int32_t iKey;
};
extern void cppISteamFriends_SteamFriends015_GetFriendRichPresenceKeyByIndex( struct cppISteamFriends_SteamFriends015_GetFriendRichPresenceKeyByIndex_params *params );

struct cppISteamFriends_SteamFriends015_RequestFriendRichPresence_params
{
    void *linux_side;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends015_RequestFriendRichPresence( struct cppISteamFriends_SteamFriends015_RequestFriendRichPresence_params *params );

struct cppISteamFriends_SteamFriends015_InviteUserToGame_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    const char *pchConnectString;
};
extern void cppISteamFriends_SteamFriends015_InviteUserToGame( struct cppISteamFriends_SteamFriends015_InviteUserToGame_params *params );

struct cppISteamFriends_SteamFriends015_GetCoplayFriendCount_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppISteamFriends_SteamFriends015_GetCoplayFriendCount( struct cppISteamFriends_SteamFriends015_GetCoplayFriendCount_params *params );

struct cppISteamFriends_SteamFriends015_GetCoplayFriend_params
{
    void *linux_side;
    CSteamID *_ret;
    int32_t iCoplayFriend;
};
extern void cppISteamFriends_SteamFriends015_GetCoplayFriend( struct cppISteamFriends_SteamFriends015_GetCoplayFriend_params *params );

struct cppISteamFriends_SteamFriends015_GetFriendCoplayTime_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends015_GetFriendCoplayTime( struct cppISteamFriends_SteamFriends015_GetFriendCoplayTime_params *params );

struct cppISteamFriends_SteamFriends015_GetFriendCoplayGame_params
{
    void *linux_side;
    uint32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends015_GetFriendCoplayGame( struct cppISteamFriends_SteamFriends015_GetFriendCoplayGame_params *params );

struct cppISteamFriends_SteamFriends015_JoinClanChatRoom_params
{
    void *linux_side;
    uint64_t _ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends015_JoinClanChatRoom( struct cppISteamFriends_SteamFriends015_JoinClanChatRoom_params *params );

struct cppISteamFriends_SteamFriends015_LeaveClanChatRoom_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends015_LeaveClanChatRoom( struct cppISteamFriends_SteamFriends015_LeaveClanChatRoom_params *params );

struct cppISteamFriends_SteamFriends015_GetClanChatMemberCount_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends015_GetClanChatMemberCount( struct cppISteamFriends_SteamFriends015_GetClanChatMemberCount_params *params );

struct cppISteamFriends_SteamFriends015_GetChatMemberByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDClan;
    int32_t iUser;
};
extern void cppISteamFriends_SteamFriends015_GetChatMemberByIndex( struct cppISteamFriends_SteamFriends015_GetChatMemberByIndex_params *params );

struct cppISteamFriends_SteamFriends015_SendClanChatMessage_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClanChat;
    const char *pchText;
};
extern void cppISteamFriends_SteamFriends015_SendClanChatMessage( struct cppISteamFriends_SteamFriends015_SendClanChatMessage_params *params );

struct cppISteamFriends_SteamFriends015_GetClanChatMessage_params
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
extern void cppISteamFriends_SteamFriends015_GetClanChatMessage( struct cppISteamFriends_SteamFriends015_GetClanChatMessage_params *params );

struct cppISteamFriends_SteamFriends015_IsClanChatAdmin_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClanChat;
    CSteamID steamIDUser;
};
extern void cppISteamFriends_SteamFriends015_IsClanChatAdmin( struct cppISteamFriends_SteamFriends015_IsClanChatAdmin_params *params );

struct cppISteamFriends_SteamFriends015_IsClanChatWindowOpenInSteam_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClanChat;
};
extern void cppISteamFriends_SteamFriends015_IsClanChatWindowOpenInSteam( struct cppISteamFriends_SteamFriends015_IsClanChatWindowOpenInSteam_params *params );

struct cppISteamFriends_SteamFriends015_OpenClanChatWindowInSteam_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClanChat;
};
extern void cppISteamFriends_SteamFriends015_OpenClanChatWindowInSteam( struct cppISteamFriends_SteamFriends015_OpenClanChatWindowInSteam_params *params );

struct cppISteamFriends_SteamFriends015_CloseClanChatWindowInSteam_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClanChat;
};
extern void cppISteamFriends_SteamFriends015_CloseClanChatWindowInSteam( struct cppISteamFriends_SteamFriends015_CloseClanChatWindowInSteam_params *params );

struct cppISteamFriends_SteamFriends015_SetListenForFriendsMessages_params
{
    void *linux_side;
    bool _ret;
    bool bInterceptEnabled;
};
extern void cppISteamFriends_SteamFriends015_SetListenForFriendsMessages( struct cppISteamFriends_SteamFriends015_SetListenForFriendsMessages_params *params );

struct cppISteamFriends_SteamFriends015_ReplyToFriendMessage_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    const char *pchMsgToSend;
};
extern void cppISteamFriends_SteamFriends015_ReplyToFriendMessage( struct cppISteamFriends_SteamFriends015_ReplyToFriendMessage_params *params );

struct cppISteamFriends_SteamFriends015_GetFriendMessage_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
    int32_t iMessageID;
    void *pvData;
    int32_t cubData;
    uint32_t *peChatEntryType;
};
extern void cppISteamFriends_SteamFriends015_GetFriendMessage( struct cppISteamFriends_SteamFriends015_GetFriendMessage_params *params );

struct cppISteamFriends_SteamFriends015_GetFollowerCount_params
{
    void *linux_side;
    uint64_t _ret;
    CSteamID steamID;
};
extern void cppISteamFriends_SteamFriends015_GetFollowerCount( struct cppISteamFriends_SteamFriends015_GetFollowerCount_params *params );

struct cppISteamFriends_SteamFriends015_IsFollowing_params
{
    void *linux_side;
    uint64_t _ret;
    CSteamID steamID;
};
extern void cppISteamFriends_SteamFriends015_IsFollowing( struct cppISteamFriends_SteamFriends015_IsFollowing_params *params );

struct cppISteamFriends_SteamFriends015_EnumerateFollowingList_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t unStartIndex;
};
extern void cppISteamFriends_SteamFriends015_EnumerateFollowingList( struct cppISteamFriends_SteamFriends015_EnumerateFollowingList_params *params );

struct cppISteamFriends_SteamFriends015_IsClanPublic_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends015_IsClanPublic( struct cppISteamFriends_SteamFriends015_IsClanPublic_params *params );

struct cppISteamFriends_SteamFriends015_IsClanOfficialGameGroup_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends015_IsClanOfficialGameGroup( struct cppISteamFriends_SteamFriends015_IsClanOfficialGameGroup_params *params );

