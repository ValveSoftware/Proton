struct cppISteamFriends_SteamFriends011_GetPersonaName_params
{
    void *linux_side;
    const char *_ret;
};
extern void cppISteamFriends_SteamFriends011_GetPersonaName( struct cppISteamFriends_SteamFriends011_GetPersonaName_params *params );

struct cppISteamFriends_SteamFriends011_SetPersonaName_params
{
    void *linux_side;
    const char *pchPersonaName;
};
extern void cppISteamFriends_SteamFriends011_SetPersonaName( struct cppISteamFriends_SteamFriends011_SetPersonaName_params *params );

struct cppISteamFriends_SteamFriends011_GetPersonaState_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamFriends_SteamFriends011_GetPersonaState( struct cppISteamFriends_SteamFriends011_GetPersonaState_params *params );

struct cppISteamFriends_SteamFriends011_GetFriendCount_params
{
    void *linux_side;
    int32_t _ret;
    int32_t iFriendFlags;
};
extern void cppISteamFriends_SteamFriends011_GetFriendCount( struct cppISteamFriends_SteamFriends011_GetFriendCount_params *params );

struct cppISteamFriends_SteamFriends011_GetFriendByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    int32_t iFriend;
    int32_t iFriendFlags;
};
extern void cppISteamFriends_SteamFriends011_GetFriendByIndex( struct cppISteamFriends_SteamFriends011_GetFriendByIndex_params *params );

struct cppISteamFriends_SteamFriends011_GetFriendRelationship_params
{
    void *linux_side;
    uint32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends011_GetFriendRelationship( struct cppISteamFriends_SteamFriends011_GetFriendRelationship_params *params );

struct cppISteamFriends_SteamFriends011_GetFriendPersonaState_params
{
    void *linux_side;
    uint32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends011_GetFriendPersonaState( struct cppISteamFriends_SteamFriends011_GetFriendPersonaState_params *params );

struct cppISteamFriends_SteamFriends011_GetFriendPersonaName_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends011_GetFriendPersonaName( struct cppISteamFriends_SteamFriends011_GetFriendPersonaName_params *params );

struct cppISteamFriends_SteamFriends011_GetFriendGamePlayed_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    FriendGameInfo_t *pFriendGameInfo;
};
extern void cppISteamFriends_SteamFriends011_GetFriendGamePlayed( struct cppISteamFriends_SteamFriends011_GetFriendGamePlayed_params *params );

struct cppISteamFriends_SteamFriends011_GetFriendPersonaNameHistory_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
    int32_t iPersonaName;
};
extern void cppISteamFriends_SteamFriends011_GetFriendPersonaNameHistory( struct cppISteamFriends_SteamFriends011_GetFriendPersonaNameHistory_params *params );

struct cppISteamFriends_SteamFriends011_HasFriend_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    int32_t iFriendFlags;
};
extern void cppISteamFriends_SteamFriends011_HasFriend( struct cppISteamFriends_SteamFriends011_HasFriend_params *params );

struct cppISteamFriends_SteamFriends011_GetClanCount_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppISteamFriends_SteamFriends011_GetClanCount( struct cppISteamFriends_SteamFriends011_GetClanCount_params *params );

struct cppISteamFriends_SteamFriends011_GetClanByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    int32_t iClan;
};
extern void cppISteamFriends_SteamFriends011_GetClanByIndex( struct cppISteamFriends_SteamFriends011_GetClanByIndex_params *params );

struct cppISteamFriends_SteamFriends011_GetClanName_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends011_GetClanName( struct cppISteamFriends_SteamFriends011_GetClanName_params *params );

struct cppISteamFriends_SteamFriends011_GetClanTag_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends011_GetClanTag( struct cppISteamFriends_SteamFriends011_GetClanTag_params *params );

struct cppISteamFriends_SteamFriends011_GetClanActivityCounts_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClan;
    int32_t *pnOnline;
    int32_t *pnInGame;
    int32_t *pnChatting;
};
extern void cppISteamFriends_SteamFriends011_GetClanActivityCounts( struct cppISteamFriends_SteamFriends011_GetClanActivityCounts_params *params );

struct cppISteamFriends_SteamFriends011_DownloadClanActivityCounts_params
{
    void *linux_side;
    uint64_t _ret;
    CSteamID *psteamIDClans;
    int32_t cClansToRequest;
};
extern void cppISteamFriends_SteamFriends011_DownloadClanActivityCounts( struct cppISteamFriends_SteamFriends011_DownloadClanActivityCounts_params *params );

struct cppISteamFriends_SteamFriends011_GetFriendCountFromSource_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDSource;
};
extern void cppISteamFriends_SteamFriends011_GetFriendCountFromSource( struct cppISteamFriends_SteamFriends011_GetFriendCountFromSource_params *params );

struct cppISteamFriends_SteamFriends011_GetFriendFromSourceByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDSource;
    int32_t iFriend;
};
extern void cppISteamFriends_SteamFriends011_GetFriendFromSourceByIndex( struct cppISteamFriends_SteamFriends011_GetFriendFromSourceByIndex_params *params );

struct cppISteamFriends_SteamFriends011_IsUserInSource_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    CSteamID steamIDSource;
};
extern void cppISteamFriends_SteamFriends011_IsUserInSource( struct cppISteamFriends_SteamFriends011_IsUserInSource_params *params );

struct cppISteamFriends_SteamFriends011_SetInGameVoiceSpeaking_params
{
    void *linux_side;
    CSteamID steamIDUser;
    bool bSpeaking;
};
extern void cppISteamFriends_SteamFriends011_SetInGameVoiceSpeaking( struct cppISteamFriends_SteamFriends011_SetInGameVoiceSpeaking_params *params );

struct cppISteamFriends_SteamFriends011_ActivateGameOverlay_params
{
    void *linux_side;
    const char *pchDialog;
};
extern void cppISteamFriends_SteamFriends011_ActivateGameOverlay( struct cppISteamFriends_SteamFriends011_ActivateGameOverlay_params *params );

struct cppISteamFriends_SteamFriends011_ActivateGameOverlayToUser_params
{
    void *linux_side;
    const char *pchDialog;
    CSteamID steamID;
};
extern void cppISteamFriends_SteamFriends011_ActivateGameOverlayToUser( struct cppISteamFriends_SteamFriends011_ActivateGameOverlayToUser_params *params );

struct cppISteamFriends_SteamFriends011_ActivateGameOverlayToWebPage_params
{
    void *linux_side;
    const char *pchURL;
};
extern void cppISteamFriends_SteamFriends011_ActivateGameOverlayToWebPage( struct cppISteamFriends_SteamFriends011_ActivateGameOverlayToWebPage_params *params );

struct cppISteamFriends_SteamFriends011_ActivateGameOverlayToStore_params
{
    void *linux_side;
    uint32_t nAppID;
};
extern void cppISteamFriends_SteamFriends011_ActivateGameOverlayToStore( struct cppISteamFriends_SteamFriends011_ActivateGameOverlayToStore_params *params );

struct cppISteamFriends_SteamFriends011_SetPlayedWith_params
{
    void *linux_side;
    CSteamID steamIDUserPlayedWith;
};
extern void cppISteamFriends_SteamFriends011_SetPlayedWith( struct cppISteamFriends_SteamFriends011_SetPlayedWith_params *params );

struct cppISteamFriends_SteamFriends011_ActivateGameOverlayInviteDialog_params
{
    void *linux_side;
    CSteamID steamIDLobby;
};
extern void cppISteamFriends_SteamFriends011_ActivateGameOverlayInviteDialog( struct cppISteamFriends_SteamFriends011_ActivateGameOverlayInviteDialog_params *params );

struct cppISteamFriends_SteamFriends011_GetSmallFriendAvatar_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends011_GetSmallFriendAvatar( struct cppISteamFriends_SteamFriends011_GetSmallFriendAvatar_params *params );

struct cppISteamFriends_SteamFriends011_GetMediumFriendAvatar_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends011_GetMediumFriendAvatar( struct cppISteamFriends_SteamFriends011_GetMediumFriendAvatar_params *params );

struct cppISteamFriends_SteamFriends011_GetLargeFriendAvatar_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends011_GetLargeFriendAvatar( struct cppISteamFriends_SteamFriends011_GetLargeFriendAvatar_params *params );

struct cppISteamFriends_SteamFriends011_RequestUserInformation_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    bool bRequireNameOnly;
};
extern void cppISteamFriends_SteamFriends011_RequestUserInformation( struct cppISteamFriends_SteamFriends011_RequestUserInformation_params *params );

struct cppISteamFriends_SteamFriends011_RequestClanOfficerList_params
{
    void *linux_side;
    uint64_t _ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends011_RequestClanOfficerList( struct cppISteamFriends_SteamFriends011_RequestClanOfficerList_params *params );

struct cppISteamFriends_SteamFriends011_GetClanOwner_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends011_GetClanOwner( struct cppISteamFriends_SteamFriends011_GetClanOwner_params *params );

struct cppISteamFriends_SteamFriends011_GetClanOfficerCount_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends011_GetClanOfficerCount( struct cppISteamFriends_SteamFriends011_GetClanOfficerCount_params *params );

struct cppISteamFriends_SteamFriends011_GetClanOfficerByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDClan;
    int32_t iOfficer;
};
extern void cppISteamFriends_SteamFriends011_GetClanOfficerByIndex( struct cppISteamFriends_SteamFriends011_GetClanOfficerByIndex_params *params );

struct cppISteamFriends_SteamFriends011_GetUserRestrictions_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamFriends_SteamFriends011_GetUserRestrictions( struct cppISteamFriends_SteamFriends011_GetUserRestrictions_params *params );

struct cppISteamFriends_SteamFriends011_SetRichPresence_params
{
    void *linux_side;
    bool _ret;
    const char *pchKey;
    const char *pchValue;
};
extern void cppISteamFriends_SteamFriends011_SetRichPresence( struct cppISteamFriends_SteamFriends011_SetRichPresence_params *params );

struct cppISteamFriends_SteamFriends011_ClearRichPresence_params
{
    void *linux_side;
};
extern void cppISteamFriends_SteamFriends011_ClearRichPresence( struct cppISteamFriends_SteamFriends011_ClearRichPresence_params *params );

struct cppISteamFriends_SteamFriends011_GetFriendRichPresence_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
    const char *pchKey;
};
extern void cppISteamFriends_SteamFriends011_GetFriendRichPresence( struct cppISteamFriends_SteamFriends011_GetFriendRichPresence_params *params );

struct cppISteamFriends_SteamFriends011_GetFriendRichPresenceKeyCount_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends011_GetFriendRichPresenceKeyCount( struct cppISteamFriends_SteamFriends011_GetFriendRichPresenceKeyCount_params *params );

struct cppISteamFriends_SteamFriends011_GetFriendRichPresenceKeyByIndex_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
    int32_t iKey;
};
extern void cppISteamFriends_SteamFriends011_GetFriendRichPresenceKeyByIndex( struct cppISteamFriends_SteamFriends011_GetFriendRichPresenceKeyByIndex_params *params );

struct cppISteamFriends_SteamFriends011_RequestFriendRichPresence_params
{
    void *linux_side;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends011_RequestFriendRichPresence( struct cppISteamFriends_SteamFriends011_RequestFriendRichPresence_params *params );

struct cppISteamFriends_SteamFriends011_InviteUserToGame_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    const char *pchConnectString;
};
extern void cppISteamFriends_SteamFriends011_InviteUserToGame( struct cppISteamFriends_SteamFriends011_InviteUserToGame_params *params );

struct cppISteamFriends_SteamFriends011_GetCoplayFriendCount_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppISteamFriends_SteamFriends011_GetCoplayFriendCount( struct cppISteamFriends_SteamFriends011_GetCoplayFriendCount_params *params );

struct cppISteamFriends_SteamFriends011_GetCoplayFriend_params
{
    void *linux_side;
    CSteamID *_ret;
    int32_t iCoplayFriend;
};
extern void cppISteamFriends_SteamFriends011_GetCoplayFriend( struct cppISteamFriends_SteamFriends011_GetCoplayFriend_params *params );

struct cppISteamFriends_SteamFriends011_GetFriendCoplayTime_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends011_GetFriendCoplayTime( struct cppISteamFriends_SteamFriends011_GetFriendCoplayTime_params *params );

struct cppISteamFriends_SteamFriends011_GetFriendCoplayGame_params
{
    void *linux_side;
    uint32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends011_GetFriendCoplayGame( struct cppISteamFriends_SteamFriends011_GetFriendCoplayGame_params *params );

struct cppISteamFriends_SteamFriends011_JoinClanChatRoom_params
{
    void *linux_side;
    uint64_t _ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends011_JoinClanChatRoom( struct cppISteamFriends_SteamFriends011_JoinClanChatRoom_params *params );

struct cppISteamFriends_SteamFriends011_LeaveClanChatRoom_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends011_LeaveClanChatRoom( struct cppISteamFriends_SteamFriends011_LeaveClanChatRoom_params *params );

struct cppISteamFriends_SteamFriends011_GetClanChatMemberCount_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends011_GetClanChatMemberCount( struct cppISteamFriends_SteamFriends011_GetClanChatMemberCount_params *params );

struct cppISteamFriends_SteamFriends011_GetChatMemberByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDClan;
    int32_t iUser;
};
extern void cppISteamFriends_SteamFriends011_GetChatMemberByIndex( struct cppISteamFriends_SteamFriends011_GetChatMemberByIndex_params *params );

struct cppISteamFriends_SteamFriends011_SendClanChatMessage_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClanChat;
    const char *pchText;
};
extern void cppISteamFriends_SteamFriends011_SendClanChatMessage( struct cppISteamFriends_SteamFriends011_SendClanChatMessage_params *params );

struct cppISteamFriends_SteamFriends011_GetClanChatMessage_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDClanChat;
    int32_t iMessage;
    void *prgchText;
    int32_t cchTextMax;
    uint32_t *_e;
    CSteamID *_f;
};
extern void cppISteamFriends_SteamFriends011_GetClanChatMessage( struct cppISteamFriends_SteamFriends011_GetClanChatMessage_params *params );

struct cppISteamFriends_SteamFriends011_IsClanChatAdmin_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClanChat;
    CSteamID steamIDUser;
};
extern void cppISteamFriends_SteamFriends011_IsClanChatAdmin( struct cppISteamFriends_SteamFriends011_IsClanChatAdmin_params *params );

struct cppISteamFriends_SteamFriends011_IsClanChatWindowOpenInSteam_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClanChat;
};
extern void cppISteamFriends_SteamFriends011_IsClanChatWindowOpenInSteam( struct cppISteamFriends_SteamFriends011_IsClanChatWindowOpenInSteam_params *params );

struct cppISteamFriends_SteamFriends011_OpenClanChatWindowInSteam_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClanChat;
};
extern void cppISteamFriends_SteamFriends011_OpenClanChatWindowInSteam( struct cppISteamFriends_SteamFriends011_OpenClanChatWindowInSteam_params *params );

struct cppISteamFriends_SteamFriends011_CloseClanChatWindowInSteam_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClanChat;
};
extern void cppISteamFriends_SteamFriends011_CloseClanChatWindowInSteam( struct cppISteamFriends_SteamFriends011_CloseClanChatWindowInSteam_params *params );

struct cppISteamFriends_SteamFriends011_SetListenForFriendsMessages_params
{
    void *linux_side;
    bool _ret;
    bool bInterceptEnabled;
};
extern void cppISteamFriends_SteamFriends011_SetListenForFriendsMessages( struct cppISteamFriends_SteamFriends011_SetListenForFriendsMessages_params *params );

struct cppISteamFriends_SteamFriends011_ReplyToFriendMessage_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    const char *pchMsgToSend;
};
extern void cppISteamFriends_SteamFriends011_ReplyToFriendMessage( struct cppISteamFriends_SteamFriends011_ReplyToFriendMessage_params *params );

struct cppISteamFriends_SteamFriends011_GetFriendMessage_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
    int32_t iMessageID;
    void *pvData;
    int32_t cubData;
    uint32_t *peChatEntryType;
};
extern void cppISteamFriends_SteamFriends011_GetFriendMessage( struct cppISteamFriends_SteamFriends011_GetFriendMessage_params *params );

struct cppISteamFriends_SteamFriends011_GetFollowerCount_params
{
    void *linux_side;
    uint64_t _ret;
    CSteamID steamID;
};
extern void cppISteamFriends_SteamFriends011_GetFollowerCount( struct cppISteamFriends_SteamFriends011_GetFollowerCount_params *params );

struct cppISteamFriends_SteamFriends011_IsFollowing_params
{
    void *linux_side;
    uint64_t _ret;
    CSteamID steamID;
};
extern void cppISteamFriends_SteamFriends011_IsFollowing( struct cppISteamFriends_SteamFriends011_IsFollowing_params *params );

struct cppISteamFriends_SteamFriends011_EnumerateFollowingList_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t unStartIndex;
};
extern void cppISteamFriends_SteamFriends011_EnumerateFollowingList( struct cppISteamFriends_SteamFriends011_EnumerateFollowingList_params *params );

