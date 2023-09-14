struct cppISteamFriends_SteamFriends013_GetPersonaName_params
{
    void *linux_side;
    const char *_ret;
};
extern void cppISteamFriends_SteamFriends013_GetPersonaName( struct cppISteamFriends_SteamFriends013_GetPersonaName_params *params );

struct cppISteamFriends_SteamFriends013_SetPersonaName_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    const char *pchPersonaName;
};
extern void cppISteamFriends_SteamFriends013_SetPersonaName( struct cppISteamFriends_SteamFriends013_SetPersonaName_params *params );

struct cppISteamFriends_SteamFriends013_GetPersonaState_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamFriends_SteamFriends013_GetPersonaState( struct cppISteamFriends_SteamFriends013_GetPersonaState_params *params );

struct cppISteamFriends_SteamFriends013_GetFriendCount_params
{
    void *linux_side;
    int32_t _ret;
    int32_t iFriendFlags;
};
extern void cppISteamFriends_SteamFriends013_GetFriendCount( struct cppISteamFriends_SteamFriends013_GetFriendCount_params *params );

struct cppISteamFriends_SteamFriends013_GetFriendByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    int32_t iFriend;
    int32_t iFriendFlags;
};
extern void cppISteamFriends_SteamFriends013_GetFriendByIndex( struct cppISteamFriends_SteamFriends013_GetFriendByIndex_params *params );

struct cppISteamFriends_SteamFriends013_GetFriendRelationship_params
{
    void *linux_side;
    uint32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends013_GetFriendRelationship( struct cppISteamFriends_SteamFriends013_GetFriendRelationship_params *params );

struct cppISteamFriends_SteamFriends013_GetFriendPersonaState_params
{
    void *linux_side;
    uint32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends013_GetFriendPersonaState( struct cppISteamFriends_SteamFriends013_GetFriendPersonaState_params *params );

struct cppISteamFriends_SteamFriends013_GetFriendPersonaName_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends013_GetFriendPersonaName( struct cppISteamFriends_SteamFriends013_GetFriendPersonaName_params *params );

struct cppISteamFriends_SteamFriends013_GetFriendGamePlayed_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    FriendGameInfo_t *pFriendGameInfo;
};
extern void cppISteamFriends_SteamFriends013_GetFriendGamePlayed( struct cppISteamFriends_SteamFriends013_GetFriendGamePlayed_params *params );

struct cppISteamFriends_SteamFriends013_GetFriendPersonaNameHistory_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
    int32_t iPersonaName;
};
extern void cppISteamFriends_SteamFriends013_GetFriendPersonaNameHistory( struct cppISteamFriends_SteamFriends013_GetFriendPersonaNameHistory_params *params );

struct cppISteamFriends_SteamFriends013_HasFriend_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    int32_t iFriendFlags;
};
extern void cppISteamFriends_SteamFriends013_HasFriend( struct cppISteamFriends_SteamFriends013_HasFriend_params *params );

struct cppISteamFriends_SteamFriends013_GetClanCount_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppISteamFriends_SteamFriends013_GetClanCount( struct cppISteamFriends_SteamFriends013_GetClanCount_params *params );

struct cppISteamFriends_SteamFriends013_GetClanByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    int32_t iClan;
};
extern void cppISteamFriends_SteamFriends013_GetClanByIndex( struct cppISteamFriends_SteamFriends013_GetClanByIndex_params *params );

struct cppISteamFriends_SteamFriends013_GetClanName_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends013_GetClanName( struct cppISteamFriends_SteamFriends013_GetClanName_params *params );

struct cppISteamFriends_SteamFriends013_GetClanTag_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends013_GetClanTag( struct cppISteamFriends_SteamFriends013_GetClanTag_params *params );

struct cppISteamFriends_SteamFriends013_GetClanActivityCounts_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClan;
    int32_t *pnOnline;
    int32_t *pnInGame;
    int32_t *pnChatting;
};
extern void cppISteamFriends_SteamFriends013_GetClanActivityCounts( struct cppISteamFriends_SteamFriends013_GetClanActivityCounts_params *params );

struct cppISteamFriends_SteamFriends013_DownloadClanActivityCounts_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    CSteamID *psteamIDClans;
    int32_t cClansToRequest;
};
extern void cppISteamFriends_SteamFriends013_DownloadClanActivityCounts( struct cppISteamFriends_SteamFriends013_DownloadClanActivityCounts_params *params );

struct cppISteamFriends_SteamFriends013_GetFriendCountFromSource_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDSource;
};
extern void cppISteamFriends_SteamFriends013_GetFriendCountFromSource( struct cppISteamFriends_SteamFriends013_GetFriendCountFromSource_params *params );

struct cppISteamFriends_SteamFriends013_GetFriendFromSourceByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDSource;
    int32_t iFriend;
};
extern void cppISteamFriends_SteamFriends013_GetFriendFromSourceByIndex( struct cppISteamFriends_SteamFriends013_GetFriendFromSourceByIndex_params *params );

struct cppISteamFriends_SteamFriends013_IsUserInSource_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    CSteamID steamIDSource;
};
extern void cppISteamFriends_SteamFriends013_IsUserInSource( struct cppISteamFriends_SteamFriends013_IsUserInSource_params *params );

struct cppISteamFriends_SteamFriends013_SetInGameVoiceSpeaking_params
{
    void *linux_side;
    CSteamID steamIDUser;
    bool bSpeaking;
};
extern void cppISteamFriends_SteamFriends013_SetInGameVoiceSpeaking( struct cppISteamFriends_SteamFriends013_SetInGameVoiceSpeaking_params *params );

struct cppISteamFriends_SteamFriends013_ActivateGameOverlay_params
{
    void *linux_side;
    const char *pchDialog;
};
extern void cppISteamFriends_SteamFriends013_ActivateGameOverlay( struct cppISteamFriends_SteamFriends013_ActivateGameOverlay_params *params );

struct cppISteamFriends_SteamFriends013_ActivateGameOverlayToUser_params
{
    void *linux_side;
    const char *pchDialog;
    CSteamID steamID;
};
extern void cppISteamFriends_SteamFriends013_ActivateGameOverlayToUser( struct cppISteamFriends_SteamFriends013_ActivateGameOverlayToUser_params *params );

struct cppISteamFriends_SteamFriends013_ActivateGameOverlayToWebPage_params
{
    void *linux_side;
    const char *pchURL;
};
extern void cppISteamFriends_SteamFriends013_ActivateGameOverlayToWebPage( struct cppISteamFriends_SteamFriends013_ActivateGameOverlayToWebPage_params *params );

struct cppISteamFriends_SteamFriends013_ActivateGameOverlayToStore_params
{
    void *linux_side;
    AppId_t nAppID;
    uint32_t eFlag;
};
extern void cppISteamFriends_SteamFriends013_ActivateGameOverlayToStore( struct cppISteamFriends_SteamFriends013_ActivateGameOverlayToStore_params *params );

struct cppISteamFriends_SteamFriends013_SetPlayedWith_params
{
    void *linux_side;
    CSteamID steamIDUserPlayedWith;
};
extern void cppISteamFriends_SteamFriends013_SetPlayedWith( struct cppISteamFriends_SteamFriends013_SetPlayedWith_params *params );

struct cppISteamFriends_SteamFriends013_ActivateGameOverlayInviteDialog_params
{
    void *linux_side;
    CSteamID steamIDLobby;
};
extern void cppISteamFriends_SteamFriends013_ActivateGameOverlayInviteDialog( struct cppISteamFriends_SteamFriends013_ActivateGameOverlayInviteDialog_params *params );

struct cppISteamFriends_SteamFriends013_GetSmallFriendAvatar_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends013_GetSmallFriendAvatar( struct cppISteamFriends_SteamFriends013_GetSmallFriendAvatar_params *params );

struct cppISteamFriends_SteamFriends013_GetMediumFriendAvatar_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends013_GetMediumFriendAvatar( struct cppISteamFriends_SteamFriends013_GetMediumFriendAvatar_params *params );

struct cppISteamFriends_SteamFriends013_GetLargeFriendAvatar_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends013_GetLargeFriendAvatar( struct cppISteamFriends_SteamFriends013_GetLargeFriendAvatar_params *params );

struct cppISteamFriends_SteamFriends013_RequestUserInformation_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    bool bRequireNameOnly;
};
extern void cppISteamFriends_SteamFriends013_RequestUserInformation( struct cppISteamFriends_SteamFriends013_RequestUserInformation_params *params );

struct cppISteamFriends_SteamFriends013_RequestClanOfficerList_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends013_RequestClanOfficerList( struct cppISteamFriends_SteamFriends013_RequestClanOfficerList_params *params );

struct cppISteamFriends_SteamFriends013_GetClanOwner_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends013_GetClanOwner( struct cppISteamFriends_SteamFriends013_GetClanOwner_params *params );

struct cppISteamFriends_SteamFriends013_GetClanOfficerCount_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends013_GetClanOfficerCount( struct cppISteamFriends_SteamFriends013_GetClanOfficerCount_params *params );

struct cppISteamFriends_SteamFriends013_GetClanOfficerByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDClan;
    int32_t iOfficer;
};
extern void cppISteamFriends_SteamFriends013_GetClanOfficerByIndex( struct cppISteamFriends_SteamFriends013_GetClanOfficerByIndex_params *params );

struct cppISteamFriends_SteamFriends013_GetUserRestrictions_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamFriends_SteamFriends013_GetUserRestrictions( struct cppISteamFriends_SteamFriends013_GetUserRestrictions_params *params );

struct cppISteamFriends_SteamFriends013_SetRichPresence_params
{
    void *linux_side;
    bool _ret;
    const char *pchKey;
    const char *pchValue;
};
extern void cppISteamFriends_SteamFriends013_SetRichPresence( struct cppISteamFriends_SteamFriends013_SetRichPresence_params *params );

struct cppISteamFriends_SteamFriends013_ClearRichPresence_params
{
    void *linux_side;
};
extern void cppISteamFriends_SteamFriends013_ClearRichPresence( struct cppISteamFriends_SteamFriends013_ClearRichPresence_params *params );

struct cppISteamFriends_SteamFriends013_GetFriendRichPresence_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
    const char *pchKey;
};
extern void cppISteamFriends_SteamFriends013_GetFriendRichPresence( struct cppISteamFriends_SteamFriends013_GetFriendRichPresence_params *params );

struct cppISteamFriends_SteamFriends013_GetFriendRichPresenceKeyCount_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends013_GetFriendRichPresenceKeyCount( struct cppISteamFriends_SteamFriends013_GetFriendRichPresenceKeyCount_params *params );

struct cppISteamFriends_SteamFriends013_GetFriendRichPresenceKeyByIndex_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
    int32_t iKey;
};
extern void cppISteamFriends_SteamFriends013_GetFriendRichPresenceKeyByIndex( struct cppISteamFriends_SteamFriends013_GetFriendRichPresenceKeyByIndex_params *params );

struct cppISteamFriends_SteamFriends013_RequestFriendRichPresence_params
{
    void *linux_side;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends013_RequestFriendRichPresence( struct cppISteamFriends_SteamFriends013_RequestFriendRichPresence_params *params );

struct cppISteamFriends_SteamFriends013_InviteUserToGame_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    const char *pchConnectString;
};
extern void cppISteamFriends_SteamFriends013_InviteUserToGame( struct cppISteamFriends_SteamFriends013_InviteUserToGame_params *params );

struct cppISteamFriends_SteamFriends013_GetCoplayFriendCount_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppISteamFriends_SteamFriends013_GetCoplayFriendCount( struct cppISteamFriends_SteamFriends013_GetCoplayFriendCount_params *params );

struct cppISteamFriends_SteamFriends013_GetCoplayFriend_params
{
    void *linux_side;
    CSteamID *_ret;
    int32_t iCoplayFriend;
};
extern void cppISteamFriends_SteamFriends013_GetCoplayFriend( struct cppISteamFriends_SteamFriends013_GetCoplayFriend_params *params );

struct cppISteamFriends_SteamFriends013_GetFriendCoplayTime_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends013_GetFriendCoplayTime( struct cppISteamFriends_SteamFriends013_GetFriendCoplayTime_params *params );

struct cppISteamFriends_SteamFriends013_GetFriendCoplayGame_params
{
    void *linux_side;
    AppId_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends013_GetFriendCoplayGame( struct cppISteamFriends_SteamFriends013_GetFriendCoplayGame_params *params );

struct cppISteamFriends_SteamFriends013_JoinClanChatRoom_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends013_JoinClanChatRoom( struct cppISteamFriends_SteamFriends013_JoinClanChatRoom_params *params );

struct cppISteamFriends_SteamFriends013_LeaveClanChatRoom_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends013_LeaveClanChatRoom( struct cppISteamFriends_SteamFriends013_LeaveClanChatRoom_params *params );

struct cppISteamFriends_SteamFriends013_GetClanChatMemberCount_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends013_GetClanChatMemberCount( struct cppISteamFriends_SteamFriends013_GetClanChatMemberCount_params *params );

struct cppISteamFriends_SteamFriends013_GetChatMemberByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDClan;
    int32_t iUser;
};
extern void cppISteamFriends_SteamFriends013_GetChatMemberByIndex( struct cppISteamFriends_SteamFriends013_GetChatMemberByIndex_params *params );

struct cppISteamFriends_SteamFriends013_SendClanChatMessage_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClanChat;
    const char *pchText;
};
extern void cppISteamFriends_SteamFriends013_SendClanChatMessage( struct cppISteamFriends_SteamFriends013_SendClanChatMessage_params *params );

struct cppISteamFriends_SteamFriends013_GetClanChatMessage_params
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
extern void cppISteamFriends_SteamFriends013_GetClanChatMessage( struct cppISteamFriends_SteamFriends013_GetClanChatMessage_params *params );

struct cppISteamFriends_SteamFriends013_IsClanChatAdmin_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClanChat;
    CSteamID steamIDUser;
};
extern void cppISteamFriends_SteamFriends013_IsClanChatAdmin( struct cppISteamFriends_SteamFriends013_IsClanChatAdmin_params *params );

struct cppISteamFriends_SteamFriends013_IsClanChatWindowOpenInSteam_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClanChat;
};
extern void cppISteamFriends_SteamFriends013_IsClanChatWindowOpenInSteam( struct cppISteamFriends_SteamFriends013_IsClanChatWindowOpenInSteam_params *params );

struct cppISteamFriends_SteamFriends013_OpenClanChatWindowInSteam_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClanChat;
};
extern void cppISteamFriends_SteamFriends013_OpenClanChatWindowInSteam( struct cppISteamFriends_SteamFriends013_OpenClanChatWindowInSteam_params *params );

struct cppISteamFriends_SteamFriends013_CloseClanChatWindowInSteam_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClanChat;
};
extern void cppISteamFriends_SteamFriends013_CloseClanChatWindowInSteam( struct cppISteamFriends_SteamFriends013_CloseClanChatWindowInSteam_params *params );

struct cppISteamFriends_SteamFriends013_SetListenForFriendsMessages_params
{
    void *linux_side;
    bool _ret;
    bool bInterceptEnabled;
};
extern void cppISteamFriends_SteamFriends013_SetListenForFriendsMessages( struct cppISteamFriends_SteamFriends013_SetListenForFriendsMessages_params *params );

struct cppISteamFriends_SteamFriends013_ReplyToFriendMessage_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    const char *pchMsgToSend;
};
extern void cppISteamFriends_SteamFriends013_ReplyToFriendMessage( struct cppISteamFriends_SteamFriends013_ReplyToFriendMessage_params *params );

struct cppISteamFriends_SteamFriends013_GetFriendMessage_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
    int32_t iMessageID;
    void *pvData;
    int32_t cubData;
    uint32_t *peChatEntryType;
};
extern void cppISteamFriends_SteamFriends013_GetFriendMessage( struct cppISteamFriends_SteamFriends013_GetFriendMessage_params *params );

struct cppISteamFriends_SteamFriends013_GetFollowerCount_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    CSteamID steamID;
};
extern void cppISteamFriends_SteamFriends013_GetFollowerCount( struct cppISteamFriends_SteamFriends013_GetFollowerCount_params *params );

struct cppISteamFriends_SteamFriends013_IsFollowing_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    CSteamID steamID;
};
extern void cppISteamFriends_SteamFriends013_IsFollowing( struct cppISteamFriends_SteamFriends013_IsFollowing_params *params );

struct cppISteamFriends_SteamFriends013_EnumerateFollowingList_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    uint32_t unStartIndex;
};
extern void cppISteamFriends_SteamFriends013_EnumerateFollowingList( struct cppISteamFriends_SteamFriends013_EnumerateFollowingList_params *params );

