struct cppISteamFriends_SteamFriends012_GetPersonaName_params
{
    void *linux_side;
    const char *_ret;
};
extern void cppISteamFriends_SteamFriends012_GetPersonaName( struct cppISteamFriends_SteamFriends012_GetPersonaName_params *params );

struct cppISteamFriends_SteamFriends012_SetPersonaName_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    const char *pchPersonaName;
};
extern void cppISteamFriends_SteamFriends012_SetPersonaName( struct cppISteamFriends_SteamFriends012_SetPersonaName_params *params );

struct cppISteamFriends_SteamFriends012_GetPersonaState_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamFriends_SteamFriends012_GetPersonaState( struct cppISteamFriends_SteamFriends012_GetPersonaState_params *params );

struct cppISteamFriends_SteamFriends012_GetFriendCount_params
{
    void *linux_side;
    int _ret;
    int iFriendFlags;
};
extern void cppISteamFriends_SteamFriends012_GetFriendCount( struct cppISteamFriends_SteamFriends012_GetFriendCount_params *params );

struct cppISteamFriends_SteamFriends012_GetFriendByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    int iFriend;
    int iFriendFlags;
};
extern void cppISteamFriends_SteamFriends012_GetFriendByIndex( struct cppISteamFriends_SteamFriends012_GetFriendByIndex_params *params );

struct cppISteamFriends_SteamFriends012_GetFriendRelationship_params
{
    void *linux_side;
    uint32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends012_GetFriendRelationship( struct cppISteamFriends_SteamFriends012_GetFriendRelationship_params *params );

struct cppISteamFriends_SteamFriends012_GetFriendPersonaState_params
{
    void *linux_side;
    uint32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends012_GetFriendPersonaState( struct cppISteamFriends_SteamFriends012_GetFriendPersonaState_params *params );

struct cppISteamFriends_SteamFriends012_GetFriendPersonaName_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends012_GetFriendPersonaName( struct cppISteamFriends_SteamFriends012_GetFriendPersonaName_params *params );

struct cppISteamFriends_SteamFriends012_GetFriendGamePlayed_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    FriendGameInfo_t *pFriendGameInfo;
};
extern void cppISteamFriends_SteamFriends012_GetFriendGamePlayed( struct cppISteamFriends_SteamFriends012_GetFriendGamePlayed_params *params );

struct cppISteamFriends_SteamFriends012_GetFriendPersonaNameHistory_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
    int iPersonaName;
};
extern void cppISteamFriends_SteamFriends012_GetFriendPersonaNameHistory( struct cppISteamFriends_SteamFriends012_GetFriendPersonaNameHistory_params *params );

struct cppISteamFriends_SteamFriends012_HasFriend_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    int iFriendFlags;
};
extern void cppISteamFriends_SteamFriends012_HasFriend( struct cppISteamFriends_SteamFriends012_HasFriend_params *params );

struct cppISteamFriends_SteamFriends012_GetClanCount_params
{
    void *linux_side;
    int _ret;
};
extern void cppISteamFriends_SteamFriends012_GetClanCount( struct cppISteamFriends_SteamFriends012_GetClanCount_params *params );

struct cppISteamFriends_SteamFriends012_GetClanByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    int iClan;
};
extern void cppISteamFriends_SteamFriends012_GetClanByIndex( struct cppISteamFriends_SteamFriends012_GetClanByIndex_params *params );

struct cppISteamFriends_SteamFriends012_GetClanName_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends012_GetClanName( struct cppISteamFriends_SteamFriends012_GetClanName_params *params );

struct cppISteamFriends_SteamFriends012_GetClanTag_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends012_GetClanTag( struct cppISteamFriends_SteamFriends012_GetClanTag_params *params );

struct cppISteamFriends_SteamFriends012_GetClanActivityCounts_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClan;
    int *pnOnline;
    int *pnInGame;
    int *pnChatting;
};
extern void cppISteamFriends_SteamFriends012_GetClanActivityCounts( struct cppISteamFriends_SteamFriends012_GetClanActivityCounts_params *params );

struct cppISteamFriends_SteamFriends012_DownloadClanActivityCounts_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    CSteamID *psteamIDClans;
    int cClansToRequest;
};
extern void cppISteamFriends_SteamFriends012_DownloadClanActivityCounts( struct cppISteamFriends_SteamFriends012_DownloadClanActivityCounts_params *params );

struct cppISteamFriends_SteamFriends012_GetFriendCountFromSource_params
{
    void *linux_side;
    int _ret;
    CSteamID steamIDSource;
};
extern void cppISteamFriends_SteamFriends012_GetFriendCountFromSource( struct cppISteamFriends_SteamFriends012_GetFriendCountFromSource_params *params );

struct cppISteamFriends_SteamFriends012_GetFriendFromSourceByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDSource;
    int iFriend;
};
extern void cppISteamFriends_SteamFriends012_GetFriendFromSourceByIndex( struct cppISteamFriends_SteamFriends012_GetFriendFromSourceByIndex_params *params );

struct cppISteamFriends_SteamFriends012_IsUserInSource_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    CSteamID steamIDSource;
};
extern void cppISteamFriends_SteamFriends012_IsUserInSource( struct cppISteamFriends_SteamFriends012_IsUserInSource_params *params );

struct cppISteamFriends_SteamFriends012_SetInGameVoiceSpeaking_params
{
    void *linux_side;
    CSteamID steamIDUser;
    bool bSpeaking;
};
extern void cppISteamFriends_SteamFriends012_SetInGameVoiceSpeaking( struct cppISteamFriends_SteamFriends012_SetInGameVoiceSpeaking_params *params );

struct cppISteamFriends_SteamFriends012_ActivateGameOverlay_params
{
    void *linux_side;
    const char *pchDialog;
};
extern void cppISteamFriends_SteamFriends012_ActivateGameOverlay( struct cppISteamFriends_SteamFriends012_ActivateGameOverlay_params *params );

struct cppISteamFriends_SteamFriends012_ActivateGameOverlayToUser_params
{
    void *linux_side;
    const char *pchDialog;
    CSteamID steamID;
};
extern void cppISteamFriends_SteamFriends012_ActivateGameOverlayToUser( struct cppISteamFriends_SteamFriends012_ActivateGameOverlayToUser_params *params );

struct cppISteamFriends_SteamFriends012_ActivateGameOverlayToWebPage_params
{
    void *linux_side;
    const char *pchURL;
};
extern void cppISteamFriends_SteamFriends012_ActivateGameOverlayToWebPage( struct cppISteamFriends_SteamFriends012_ActivateGameOverlayToWebPage_params *params );

struct cppISteamFriends_SteamFriends012_ActivateGameOverlayToStore_params
{
    void *linux_side;
    AppId_t nAppID;
};
extern void cppISteamFriends_SteamFriends012_ActivateGameOverlayToStore( struct cppISteamFriends_SteamFriends012_ActivateGameOverlayToStore_params *params );

struct cppISteamFriends_SteamFriends012_SetPlayedWith_params
{
    void *linux_side;
    CSteamID steamIDUserPlayedWith;
};
extern void cppISteamFriends_SteamFriends012_SetPlayedWith( struct cppISteamFriends_SteamFriends012_SetPlayedWith_params *params );

struct cppISteamFriends_SteamFriends012_ActivateGameOverlayInviteDialog_params
{
    void *linux_side;
    CSteamID steamIDLobby;
};
extern void cppISteamFriends_SteamFriends012_ActivateGameOverlayInviteDialog( struct cppISteamFriends_SteamFriends012_ActivateGameOverlayInviteDialog_params *params );

struct cppISteamFriends_SteamFriends012_GetSmallFriendAvatar_params
{
    void *linux_side;
    int _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends012_GetSmallFriendAvatar( struct cppISteamFriends_SteamFriends012_GetSmallFriendAvatar_params *params );

struct cppISteamFriends_SteamFriends012_GetMediumFriendAvatar_params
{
    void *linux_side;
    int _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends012_GetMediumFriendAvatar( struct cppISteamFriends_SteamFriends012_GetMediumFriendAvatar_params *params );

struct cppISteamFriends_SteamFriends012_GetLargeFriendAvatar_params
{
    void *linux_side;
    int _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends012_GetLargeFriendAvatar( struct cppISteamFriends_SteamFriends012_GetLargeFriendAvatar_params *params );

struct cppISteamFriends_SteamFriends012_RequestUserInformation_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    bool bRequireNameOnly;
};
extern void cppISteamFriends_SteamFriends012_RequestUserInformation( struct cppISteamFriends_SteamFriends012_RequestUserInformation_params *params );

struct cppISteamFriends_SteamFriends012_RequestClanOfficerList_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends012_RequestClanOfficerList( struct cppISteamFriends_SteamFriends012_RequestClanOfficerList_params *params );

struct cppISteamFriends_SteamFriends012_GetClanOwner_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends012_GetClanOwner( struct cppISteamFriends_SteamFriends012_GetClanOwner_params *params );

struct cppISteamFriends_SteamFriends012_GetClanOfficerCount_params
{
    void *linux_side;
    int _ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends012_GetClanOfficerCount( struct cppISteamFriends_SteamFriends012_GetClanOfficerCount_params *params );

struct cppISteamFriends_SteamFriends012_GetClanOfficerByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDClan;
    int iOfficer;
};
extern void cppISteamFriends_SteamFriends012_GetClanOfficerByIndex( struct cppISteamFriends_SteamFriends012_GetClanOfficerByIndex_params *params );

struct cppISteamFriends_SteamFriends012_GetUserRestrictions_params
{
    void *linux_side;
    uint32 _ret;
};
extern void cppISteamFriends_SteamFriends012_GetUserRestrictions( struct cppISteamFriends_SteamFriends012_GetUserRestrictions_params *params );

struct cppISteamFriends_SteamFriends012_SetRichPresence_params
{
    void *linux_side;
    bool _ret;
    const char *pchKey;
    const char *pchValue;
};
extern void cppISteamFriends_SteamFriends012_SetRichPresence( struct cppISteamFriends_SteamFriends012_SetRichPresence_params *params );

struct cppISteamFriends_SteamFriends012_ClearRichPresence_params
{
    void *linux_side;
};
extern void cppISteamFriends_SteamFriends012_ClearRichPresence( struct cppISteamFriends_SteamFriends012_ClearRichPresence_params *params );

struct cppISteamFriends_SteamFriends012_GetFriendRichPresence_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
    const char *pchKey;
};
extern void cppISteamFriends_SteamFriends012_GetFriendRichPresence( struct cppISteamFriends_SteamFriends012_GetFriendRichPresence_params *params );

struct cppISteamFriends_SteamFriends012_GetFriendRichPresenceKeyCount_params
{
    void *linux_side;
    int _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends012_GetFriendRichPresenceKeyCount( struct cppISteamFriends_SteamFriends012_GetFriendRichPresenceKeyCount_params *params );

struct cppISteamFriends_SteamFriends012_GetFriendRichPresenceKeyByIndex_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
    int iKey;
};
extern void cppISteamFriends_SteamFriends012_GetFriendRichPresenceKeyByIndex( struct cppISteamFriends_SteamFriends012_GetFriendRichPresenceKeyByIndex_params *params );

struct cppISteamFriends_SteamFriends012_RequestFriendRichPresence_params
{
    void *linux_side;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends012_RequestFriendRichPresence( struct cppISteamFriends_SteamFriends012_RequestFriendRichPresence_params *params );

struct cppISteamFriends_SteamFriends012_InviteUserToGame_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    const char *pchConnectString;
};
extern void cppISteamFriends_SteamFriends012_InviteUserToGame( struct cppISteamFriends_SteamFriends012_InviteUserToGame_params *params );

struct cppISteamFriends_SteamFriends012_GetCoplayFriendCount_params
{
    void *linux_side;
    int _ret;
};
extern void cppISteamFriends_SteamFriends012_GetCoplayFriendCount( struct cppISteamFriends_SteamFriends012_GetCoplayFriendCount_params *params );

struct cppISteamFriends_SteamFriends012_GetCoplayFriend_params
{
    void *linux_side;
    CSteamID *_ret;
    int iCoplayFriend;
};
extern void cppISteamFriends_SteamFriends012_GetCoplayFriend( struct cppISteamFriends_SteamFriends012_GetCoplayFriend_params *params );

struct cppISteamFriends_SteamFriends012_GetFriendCoplayTime_params
{
    void *linux_side;
    int _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends012_GetFriendCoplayTime( struct cppISteamFriends_SteamFriends012_GetFriendCoplayTime_params *params );

struct cppISteamFriends_SteamFriends012_GetFriendCoplayGame_params
{
    void *linux_side;
    AppId_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends012_GetFriendCoplayGame( struct cppISteamFriends_SteamFriends012_GetFriendCoplayGame_params *params );

struct cppISteamFriends_SteamFriends012_JoinClanChatRoom_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends012_JoinClanChatRoom( struct cppISteamFriends_SteamFriends012_JoinClanChatRoom_params *params );

struct cppISteamFriends_SteamFriends012_LeaveClanChatRoom_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends012_LeaveClanChatRoom( struct cppISteamFriends_SteamFriends012_LeaveClanChatRoom_params *params );

struct cppISteamFriends_SteamFriends012_GetClanChatMemberCount_params
{
    void *linux_side;
    int _ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends012_GetClanChatMemberCount( struct cppISteamFriends_SteamFriends012_GetClanChatMemberCount_params *params );

struct cppISteamFriends_SteamFriends012_GetChatMemberByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDClan;
    int iUser;
};
extern void cppISteamFriends_SteamFriends012_GetChatMemberByIndex( struct cppISteamFriends_SteamFriends012_GetChatMemberByIndex_params *params );

struct cppISteamFriends_SteamFriends012_SendClanChatMessage_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClanChat;
    const char *pchText;
};
extern void cppISteamFriends_SteamFriends012_SendClanChatMessage( struct cppISteamFriends_SteamFriends012_SendClanChatMessage_params *params );

struct cppISteamFriends_SteamFriends012_GetClanChatMessage_params
{
    void *linux_side;
    int _ret;
    CSteamID steamIDClanChat;
    int iMessage;
    void *prgchText;
    int cchTextMax;
    uint32_t *_e;
    CSteamID *_f;
};
extern void cppISteamFriends_SteamFriends012_GetClanChatMessage( struct cppISteamFriends_SteamFriends012_GetClanChatMessage_params *params );

struct cppISteamFriends_SteamFriends012_IsClanChatAdmin_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClanChat;
    CSteamID steamIDUser;
};
extern void cppISteamFriends_SteamFriends012_IsClanChatAdmin( struct cppISteamFriends_SteamFriends012_IsClanChatAdmin_params *params );

struct cppISteamFriends_SteamFriends012_IsClanChatWindowOpenInSteam_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClanChat;
};
extern void cppISteamFriends_SteamFriends012_IsClanChatWindowOpenInSteam( struct cppISteamFriends_SteamFriends012_IsClanChatWindowOpenInSteam_params *params );

struct cppISteamFriends_SteamFriends012_OpenClanChatWindowInSteam_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClanChat;
};
extern void cppISteamFriends_SteamFriends012_OpenClanChatWindowInSteam( struct cppISteamFriends_SteamFriends012_OpenClanChatWindowInSteam_params *params );

struct cppISteamFriends_SteamFriends012_CloseClanChatWindowInSteam_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClanChat;
};
extern void cppISteamFriends_SteamFriends012_CloseClanChatWindowInSteam( struct cppISteamFriends_SteamFriends012_CloseClanChatWindowInSteam_params *params );

struct cppISteamFriends_SteamFriends012_SetListenForFriendsMessages_params
{
    void *linux_side;
    bool _ret;
    bool bInterceptEnabled;
};
extern void cppISteamFriends_SteamFriends012_SetListenForFriendsMessages( struct cppISteamFriends_SteamFriends012_SetListenForFriendsMessages_params *params );

struct cppISteamFriends_SteamFriends012_ReplyToFriendMessage_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    const char *pchMsgToSend;
};
extern void cppISteamFriends_SteamFriends012_ReplyToFriendMessage( struct cppISteamFriends_SteamFriends012_ReplyToFriendMessage_params *params );

struct cppISteamFriends_SteamFriends012_GetFriendMessage_params
{
    void *linux_side;
    int _ret;
    CSteamID steamIDFriend;
    int iMessageID;
    void *pvData;
    int cubData;
    uint32_t *peChatEntryType;
};
extern void cppISteamFriends_SteamFriends012_GetFriendMessage( struct cppISteamFriends_SteamFriends012_GetFriendMessage_params *params );

struct cppISteamFriends_SteamFriends012_GetFollowerCount_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    CSteamID steamID;
};
extern void cppISteamFriends_SteamFriends012_GetFollowerCount( struct cppISteamFriends_SteamFriends012_GetFollowerCount_params *params );

struct cppISteamFriends_SteamFriends012_IsFollowing_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    CSteamID steamID;
};
extern void cppISteamFriends_SteamFriends012_IsFollowing( struct cppISteamFriends_SteamFriends012_IsFollowing_params *params );

struct cppISteamFriends_SteamFriends012_EnumerateFollowingList_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    uint32 unStartIndex;
};
extern void cppISteamFriends_SteamFriends012_EnumerateFollowingList( struct cppISteamFriends_SteamFriends012_EnumerateFollowingList_params *params );

