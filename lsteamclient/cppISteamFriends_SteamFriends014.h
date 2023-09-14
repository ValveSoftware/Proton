struct cppISteamFriends_SteamFriends014_GetPersonaName_params
{
    void *linux_side;
    const char *_ret;
};
extern void cppISteamFriends_SteamFriends014_GetPersonaName( struct cppISteamFriends_SteamFriends014_GetPersonaName_params *params );

struct cppISteamFriends_SteamFriends014_SetPersonaName_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    const char *pchPersonaName;
};
extern void cppISteamFriends_SteamFriends014_SetPersonaName( struct cppISteamFriends_SteamFriends014_SetPersonaName_params *params );

struct cppISteamFriends_SteamFriends014_GetPersonaState_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamFriends_SteamFriends014_GetPersonaState( struct cppISteamFriends_SteamFriends014_GetPersonaState_params *params );

struct cppISteamFriends_SteamFriends014_GetFriendCount_params
{
    void *linux_side;
    int32_t _ret;
    int32_t iFriendFlags;
};
extern void cppISteamFriends_SteamFriends014_GetFriendCount( struct cppISteamFriends_SteamFriends014_GetFriendCount_params *params );

struct cppISteamFriends_SteamFriends014_GetFriendByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    int32_t iFriend;
    int32_t iFriendFlags;
};
extern void cppISteamFriends_SteamFriends014_GetFriendByIndex( struct cppISteamFriends_SteamFriends014_GetFriendByIndex_params *params );

struct cppISteamFriends_SteamFriends014_GetFriendRelationship_params
{
    void *linux_side;
    uint32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends014_GetFriendRelationship( struct cppISteamFriends_SteamFriends014_GetFriendRelationship_params *params );

struct cppISteamFriends_SteamFriends014_GetFriendPersonaState_params
{
    void *linux_side;
    uint32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends014_GetFriendPersonaState( struct cppISteamFriends_SteamFriends014_GetFriendPersonaState_params *params );

struct cppISteamFriends_SteamFriends014_GetFriendPersonaName_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends014_GetFriendPersonaName( struct cppISteamFriends_SteamFriends014_GetFriendPersonaName_params *params );

struct cppISteamFriends_SteamFriends014_GetFriendGamePlayed_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    FriendGameInfo_t *pFriendGameInfo;
};
extern void cppISteamFriends_SteamFriends014_GetFriendGamePlayed( struct cppISteamFriends_SteamFriends014_GetFriendGamePlayed_params *params );

struct cppISteamFriends_SteamFriends014_GetFriendPersonaNameHistory_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
    int32_t iPersonaName;
};
extern void cppISteamFriends_SteamFriends014_GetFriendPersonaNameHistory( struct cppISteamFriends_SteamFriends014_GetFriendPersonaNameHistory_params *params );

struct cppISteamFriends_SteamFriends014_GetPlayerNickname_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDPlayer;
};
extern void cppISteamFriends_SteamFriends014_GetPlayerNickname( struct cppISteamFriends_SteamFriends014_GetPlayerNickname_params *params );

struct cppISteamFriends_SteamFriends014_HasFriend_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    int32_t iFriendFlags;
};
extern void cppISteamFriends_SteamFriends014_HasFriend( struct cppISteamFriends_SteamFriends014_HasFriend_params *params );

struct cppISteamFriends_SteamFriends014_GetClanCount_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppISteamFriends_SteamFriends014_GetClanCount( struct cppISteamFriends_SteamFriends014_GetClanCount_params *params );

struct cppISteamFriends_SteamFriends014_GetClanByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    int32_t iClan;
};
extern void cppISteamFriends_SteamFriends014_GetClanByIndex( struct cppISteamFriends_SteamFriends014_GetClanByIndex_params *params );

struct cppISteamFriends_SteamFriends014_GetClanName_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends014_GetClanName( struct cppISteamFriends_SteamFriends014_GetClanName_params *params );

struct cppISteamFriends_SteamFriends014_GetClanTag_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends014_GetClanTag( struct cppISteamFriends_SteamFriends014_GetClanTag_params *params );

struct cppISteamFriends_SteamFriends014_GetClanActivityCounts_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClan;
    int32_t *pnOnline;
    int32_t *pnInGame;
    int32_t *pnChatting;
};
extern void cppISteamFriends_SteamFriends014_GetClanActivityCounts( struct cppISteamFriends_SteamFriends014_GetClanActivityCounts_params *params );

struct cppISteamFriends_SteamFriends014_DownloadClanActivityCounts_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    CSteamID *psteamIDClans;
    int32_t cClansToRequest;
};
extern void cppISteamFriends_SteamFriends014_DownloadClanActivityCounts( struct cppISteamFriends_SteamFriends014_DownloadClanActivityCounts_params *params );

struct cppISteamFriends_SteamFriends014_GetFriendCountFromSource_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDSource;
};
extern void cppISteamFriends_SteamFriends014_GetFriendCountFromSource( struct cppISteamFriends_SteamFriends014_GetFriendCountFromSource_params *params );

struct cppISteamFriends_SteamFriends014_GetFriendFromSourceByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDSource;
    int32_t iFriend;
};
extern void cppISteamFriends_SteamFriends014_GetFriendFromSourceByIndex( struct cppISteamFriends_SteamFriends014_GetFriendFromSourceByIndex_params *params );

struct cppISteamFriends_SteamFriends014_IsUserInSource_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    CSteamID steamIDSource;
};
extern void cppISteamFriends_SteamFriends014_IsUserInSource( struct cppISteamFriends_SteamFriends014_IsUserInSource_params *params );

struct cppISteamFriends_SteamFriends014_SetInGameVoiceSpeaking_params
{
    void *linux_side;
    CSteamID steamIDUser;
    bool bSpeaking;
};
extern void cppISteamFriends_SteamFriends014_SetInGameVoiceSpeaking( struct cppISteamFriends_SteamFriends014_SetInGameVoiceSpeaking_params *params );

struct cppISteamFriends_SteamFriends014_ActivateGameOverlay_params
{
    void *linux_side;
    const char *pchDialog;
};
extern void cppISteamFriends_SteamFriends014_ActivateGameOverlay( struct cppISteamFriends_SteamFriends014_ActivateGameOverlay_params *params );

struct cppISteamFriends_SteamFriends014_ActivateGameOverlayToUser_params
{
    void *linux_side;
    const char *pchDialog;
    CSteamID steamID;
};
extern void cppISteamFriends_SteamFriends014_ActivateGameOverlayToUser( struct cppISteamFriends_SteamFriends014_ActivateGameOverlayToUser_params *params );

struct cppISteamFriends_SteamFriends014_ActivateGameOverlayToWebPage_params
{
    void *linux_side;
    const char *pchURL;
};
extern void cppISteamFriends_SteamFriends014_ActivateGameOverlayToWebPage( struct cppISteamFriends_SteamFriends014_ActivateGameOverlayToWebPage_params *params );

struct cppISteamFriends_SteamFriends014_ActivateGameOverlayToStore_params
{
    void *linux_side;
    AppId_t nAppID;
    uint32_t eFlag;
};
extern void cppISteamFriends_SteamFriends014_ActivateGameOverlayToStore( struct cppISteamFriends_SteamFriends014_ActivateGameOverlayToStore_params *params );

struct cppISteamFriends_SteamFriends014_SetPlayedWith_params
{
    void *linux_side;
    CSteamID steamIDUserPlayedWith;
};
extern void cppISteamFriends_SteamFriends014_SetPlayedWith( struct cppISteamFriends_SteamFriends014_SetPlayedWith_params *params );

struct cppISteamFriends_SteamFriends014_ActivateGameOverlayInviteDialog_params
{
    void *linux_side;
    CSteamID steamIDLobby;
};
extern void cppISteamFriends_SteamFriends014_ActivateGameOverlayInviteDialog( struct cppISteamFriends_SteamFriends014_ActivateGameOverlayInviteDialog_params *params );

struct cppISteamFriends_SteamFriends014_GetSmallFriendAvatar_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends014_GetSmallFriendAvatar( struct cppISteamFriends_SteamFriends014_GetSmallFriendAvatar_params *params );

struct cppISteamFriends_SteamFriends014_GetMediumFriendAvatar_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends014_GetMediumFriendAvatar( struct cppISteamFriends_SteamFriends014_GetMediumFriendAvatar_params *params );

struct cppISteamFriends_SteamFriends014_GetLargeFriendAvatar_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends014_GetLargeFriendAvatar( struct cppISteamFriends_SteamFriends014_GetLargeFriendAvatar_params *params );

struct cppISteamFriends_SteamFriends014_RequestUserInformation_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    bool bRequireNameOnly;
};
extern void cppISteamFriends_SteamFriends014_RequestUserInformation( struct cppISteamFriends_SteamFriends014_RequestUserInformation_params *params );

struct cppISteamFriends_SteamFriends014_RequestClanOfficerList_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends014_RequestClanOfficerList( struct cppISteamFriends_SteamFriends014_RequestClanOfficerList_params *params );

struct cppISteamFriends_SteamFriends014_GetClanOwner_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends014_GetClanOwner( struct cppISteamFriends_SteamFriends014_GetClanOwner_params *params );

struct cppISteamFriends_SteamFriends014_GetClanOfficerCount_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends014_GetClanOfficerCount( struct cppISteamFriends_SteamFriends014_GetClanOfficerCount_params *params );

struct cppISteamFriends_SteamFriends014_GetClanOfficerByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDClan;
    int32_t iOfficer;
};
extern void cppISteamFriends_SteamFriends014_GetClanOfficerByIndex( struct cppISteamFriends_SteamFriends014_GetClanOfficerByIndex_params *params );

struct cppISteamFriends_SteamFriends014_GetUserRestrictions_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamFriends_SteamFriends014_GetUserRestrictions( struct cppISteamFriends_SteamFriends014_GetUserRestrictions_params *params );

struct cppISteamFriends_SteamFriends014_SetRichPresence_params
{
    void *linux_side;
    bool _ret;
    const char *pchKey;
    const char *pchValue;
};
extern void cppISteamFriends_SteamFriends014_SetRichPresence( struct cppISteamFriends_SteamFriends014_SetRichPresence_params *params );

struct cppISteamFriends_SteamFriends014_ClearRichPresence_params
{
    void *linux_side;
};
extern void cppISteamFriends_SteamFriends014_ClearRichPresence( struct cppISteamFriends_SteamFriends014_ClearRichPresence_params *params );

struct cppISteamFriends_SteamFriends014_GetFriendRichPresence_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
    const char *pchKey;
};
extern void cppISteamFriends_SteamFriends014_GetFriendRichPresence( struct cppISteamFriends_SteamFriends014_GetFriendRichPresence_params *params );

struct cppISteamFriends_SteamFriends014_GetFriendRichPresenceKeyCount_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends014_GetFriendRichPresenceKeyCount( struct cppISteamFriends_SteamFriends014_GetFriendRichPresenceKeyCount_params *params );

struct cppISteamFriends_SteamFriends014_GetFriendRichPresenceKeyByIndex_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
    int32_t iKey;
};
extern void cppISteamFriends_SteamFriends014_GetFriendRichPresenceKeyByIndex( struct cppISteamFriends_SteamFriends014_GetFriendRichPresenceKeyByIndex_params *params );

struct cppISteamFriends_SteamFriends014_RequestFriendRichPresence_params
{
    void *linux_side;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends014_RequestFriendRichPresence( struct cppISteamFriends_SteamFriends014_RequestFriendRichPresence_params *params );

struct cppISteamFriends_SteamFriends014_InviteUserToGame_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    const char *pchConnectString;
};
extern void cppISteamFriends_SteamFriends014_InviteUserToGame( struct cppISteamFriends_SteamFriends014_InviteUserToGame_params *params );

struct cppISteamFriends_SteamFriends014_GetCoplayFriendCount_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppISteamFriends_SteamFriends014_GetCoplayFriendCount( struct cppISteamFriends_SteamFriends014_GetCoplayFriendCount_params *params );

struct cppISteamFriends_SteamFriends014_GetCoplayFriend_params
{
    void *linux_side;
    CSteamID *_ret;
    int32_t iCoplayFriend;
};
extern void cppISteamFriends_SteamFriends014_GetCoplayFriend( struct cppISteamFriends_SteamFriends014_GetCoplayFriend_params *params );

struct cppISteamFriends_SteamFriends014_GetFriendCoplayTime_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends014_GetFriendCoplayTime( struct cppISteamFriends_SteamFriends014_GetFriendCoplayTime_params *params );

struct cppISteamFriends_SteamFriends014_GetFriendCoplayGame_params
{
    void *linux_side;
    AppId_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends014_GetFriendCoplayGame( struct cppISteamFriends_SteamFriends014_GetFriendCoplayGame_params *params );

struct cppISteamFriends_SteamFriends014_JoinClanChatRoom_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends014_JoinClanChatRoom( struct cppISteamFriends_SteamFriends014_JoinClanChatRoom_params *params );

struct cppISteamFriends_SteamFriends014_LeaveClanChatRoom_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends014_LeaveClanChatRoom( struct cppISteamFriends_SteamFriends014_LeaveClanChatRoom_params *params );

struct cppISteamFriends_SteamFriends014_GetClanChatMemberCount_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends014_GetClanChatMemberCount( struct cppISteamFriends_SteamFriends014_GetClanChatMemberCount_params *params );

struct cppISteamFriends_SteamFriends014_GetChatMemberByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDClan;
    int32_t iUser;
};
extern void cppISteamFriends_SteamFriends014_GetChatMemberByIndex( struct cppISteamFriends_SteamFriends014_GetChatMemberByIndex_params *params );

struct cppISteamFriends_SteamFriends014_SendClanChatMessage_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClanChat;
    const char *pchText;
};
extern void cppISteamFriends_SteamFriends014_SendClanChatMessage( struct cppISteamFriends_SteamFriends014_SendClanChatMessage_params *params );

struct cppISteamFriends_SteamFriends014_GetClanChatMessage_params
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
extern void cppISteamFriends_SteamFriends014_GetClanChatMessage( struct cppISteamFriends_SteamFriends014_GetClanChatMessage_params *params );

struct cppISteamFriends_SteamFriends014_IsClanChatAdmin_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClanChat;
    CSteamID steamIDUser;
};
extern void cppISteamFriends_SteamFriends014_IsClanChatAdmin( struct cppISteamFriends_SteamFriends014_IsClanChatAdmin_params *params );

struct cppISteamFriends_SteamFriends014_IsClanChatWindowOpenInSteam_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClanChat;
};
extern void cppISteamFriends_SteamFriends014_IsClanChatWindowOpenInSteam( struct cppISteamFriends_SteamFriends014_IsClanChatWindowOpenInSteam_params *params );

struct cppISteamFriends_SteamFriends014_OpenClanChatWindowInSteam_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClanChat;
};
extern void cppISteamFriends_SteamFriends014_OpenClanChatWindowInSteam( struct cppISteamFriends_SteamFriends014_OpenClanChatWindowInSteam_params *params );

struct cppISteamFriends_SteamFriends014_CloseClanChatWindowInSteam_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClanChat;
};
extern void cppISteamFriends_SteamFriends014_CloseClanChatWindowInSteam( struct cppISteamFriends_SteamFriends014_CloseClanChatWindowInSteam_params *params );

struct cppISteamFriends_SteamFriends014_SetListenForFriendsMessages_params
{
    void *linux_side;
    bool _ret;
    bool bInterceptEnabled;
};
extern void cppISteamFriends_SteamFriends014_SetListenForFriendsMessages( struct cppISteamFriends_SteamFriends014_SetListenForFriendsMessages_params *params );

struct cppISteamFriends_SteamFriends014_ReplyToFriendMessage_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    const char *pchMsgToSend;
};
extern void cppISteamFriends_SteamFriends014_ReplyToFriendMessage( struct cppISteamFriends_SteamFriends014_ReplyToFriendMessage_params *params );

struct cppISteamFriends_SteamFriends014_GetFriendMessage_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
    int32_t iMessageID;
    void *pvData;
    int32_t cubData;
    uint32_t *peChatEntryType;
};
extern void cppISteamFriends_SteamFriends014_GetFriendMessage( struct cppISteamFriends_SteamFriends014_GetFriendMessage_params *params );

struct cppISteamFriends_SteamFriends014_GetFollowerCount_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    CSteamID steamID;
};
extern void cppISteamFriends_SteamFriends014_GetFollowerCount( struct cppISteamFriends_SteamFriends014_GetFollowerCount_params *params );

struct cppISteamFriends_SteamFriends014_IsFollowing_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    CSteamID steamID;
};
extern void cppISteamFriends_SteamFriends014_IsFollowing( struct cppISteamFriends_SteamFriends014_IsFollowing_params *params );

struct cppISteamFriends_SteamFriends014_EnumerateFollowingList_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    uint32_t unStartIndex;
};
extern void cppISteamFriends_SteamFriends014_EnumerateFollowingList( struct cppISteamFriends_SteamFriends014_EnumerateFollowingList_params *params );

