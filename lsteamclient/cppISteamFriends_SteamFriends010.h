struct cppISteamFriends_SteamFriends010;
struct cppISteamFriends_SteamFriends010_GetPersonaName_params
{
    void *linux_side;
    const char *_ret;
};
extern void cppISteamFriends_SteamFriends010_GetPersonaName( struct cppISteamFriends_SteamFriends010_GetPersonaName_params *params );

struct cppISteamFriends_SteamFriends010_SetPersonaName_params
{
    void *linux_side;
    const char *pchPersonaName;
};
extern void cppISteamFriends_SteamFriends010_SetPersonaName( struct cppISteamFriends_SteamFriends010_SetPersonaName_params *params );

struct cppISteamFriends_SteamFriends010_GetPersonaState_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamFriends_SteamFriends010_GetPersonaState( struct cppISteamFriends_SteamFriends010_GetPersonaState_params *params );

struct cppISteamFriends_SteamFriends010_GetFriendCount_params
{
    void *linux_side;
    int32_t _ret;
    int32_t iFriendFlags;
};
extern void cppISteamFriends_SteamFriends010_GetFriendCount( struct cppISteamFriends_SteamFriends010_GetFriendCount_params *params );

struct cppISteamFriends_SteamFriends010_GetFriendByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    int32_t iFriend;
    int32_t iFriendFlags;
};
extern void cppISteamFriends_SteamFriends010_GetFriendByIndex( struct cppISteamFriends_SteamFriends010_GetFriendByIndex_params *params );

struct cppISteamFriends_SteamFriends010_GetFriendRelationship_params
{
    void *linux_side;
    uint32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends010_GetFriendRelationship( struct cppISteamFriends_SteamFriends010_GetFriendRelationship_params *params );

struct cppISteamFriends_SteamFriends010_GetFriendPersonaState_params
{
    void *linux_side;
    uint32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends010_GetFriendPersonaState( struct cppISteamFriends_SteamFriends010_GetFriendPersonaState_params *params );

struct cppISteamFriends_SteamFriends010_GetFriendPersonaName_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends010_GetFriendPersonaName( struct cppISteamFriends_SteamFriends010_GetFriendPersonaName_params *params );

struct cppISteamFriends_SteamFriends010_GetFriendGamePlayed_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    FriendGameInfo_t *pFriendGameInfo;
};
extern void cppISteamFriends_SteamFriends010_GetFriendGamePlayed( struct cppISteamFriends_SteamFriends010_GetFriendGamePlayed_params *params );

struct cppISteamFriends_SteamFriends010_GetFriendPersonaNameHistory_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
    int32_t iPersonaName;
};
extern void cppISteamFriends_SteamFriends010_GetFriendPersonaNameHistory( struct cppISteamFriends_SteamFriends010_GetFriendPersonaNameHistory_params *params );

struct cppISteamFriends_SteamFriends010_HasFriend_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    int32_t iFriendFlags;
};
extern void cppISteamFriends_SteamFriends010_HasFriend( struct cppISteamFriends_SteamFriends010_HasFriend_params *params );

struct cppISteamFriends_SteamFriends010_GetClanCount_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppISteamFriends_SteamFriends010_GetClanCount( struct cppISteamFriends_SteamFriends010_GetClanCount_params *params );

struct cppISteamFriends_SteamFriends010_GetClanByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    int32_t iClan;
};
extern void cppISteamFriends_SteamFriends010_GetClanByIndex( struct cppISteamFriends_SteamFriends010_GetClanByIndex_params *params );

struct cppISteamFriends_SteamFriends010_GetClanName_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends010_GetClanName( struct cppISteamFriends_SteamFriends010_GetClanName_params *params );

struct cppISteamFriends_SteamFriends010_GetClanTag_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends010_GetClanTag( struct cppISteamFriends_SteamFriends010_GetClanTag_params *params );

struct cppISteamFriends_SteamFriends010_GetClanActivityCounts_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClan;
    int32_t *pnOnline;
    int32_t *pnInGame;
    int32_t *pnChatting;
};
extern void cppISteamFriends_SteamFriends010_GetClanActivityCounts( struct cppISteamFriends_SteamFriends010_GetClanActivityCounts_params *params );

struct cppISteamFriends_SteamFriends010_DownloadClanActivityCounts_params
{
    void *linux_side;
    uint64_t _ret;
    CSteamID *psteamIDClans;
    int32_t cClansToRequest;
};
extern void cppISteamFriends_SteamFriends010_DownloadClanActivityCounts( struct cppISteamFriends_SteamFriends010_DownloadClanActivityCounts_params *params );

struct cppISteamFriends_SteamFriends010_GetFriendCountFromSource_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDSource;
};
extern void cppISteamFriends_SteamFriends010_GetFriendCountFromSource( struct cppISteamFriends_SteamFriends010_GetFriendCountFromSource_params *params );

struct cppISteamFriends_SteamFriends010_GetFriendFromSourceByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDSource;
    int32_t iFriend;
};
extern void cppISteamFriends_SteamFriends010_GetFriendFromSourceByIndex( struct cppISteamFriends_SteamFriends010_GetFriendFromSourceByIndex_params *params );

struct cppISteamFriends_SteamFriends010_IsUserInSource_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    CSteamID steamIDSource;
};
extern void cppISteamFriends_SteamFriends010_IsUserInSource( struct cppISteamFriends_SteamFriends010_IsUserInSource_params *params );

struct cppISteamFriends_SteamFriends010_SetInGameVoiceSpeaking_params
{
    void *linux_side;
    CSteamID steamIDUser;
    bool bSpeaking;
};
extern void cppISteamFriends_SteamFriends010_SetInGameVoiceSpeaking( struct cppISteamFriends_SteamFriends010_SetInGameVoiceSpeaking_params *params );

struct cppISteamFriends_SteamFriends010_ActivateGameOverlay_params
{
    void *linux_side;
    const char *pchDialog;
};
extern void cppISteamFriends_SteamFriends010_ActivateGameOverlay( struct cppISteamFriends_SteamFriends010_ActivateGameOverlay_params *params );

struct cppISteamFriends_SteamFriends010_ActivateGameOverlayToUser_params
{
    void *linux_side;
    const char *pchDialog;
    CSteamID steamID;
};
extern void cppISteamFriends_SteamFriends010_ActivateGameOverlayToUser( struct cppISteamFriends_SteamFriends010_ActivateGameOverlayToUser_params *params );

struct cppISteamFriends_SteamFriends010_ActivateGameOverlayToWebPage_params
{
    void *linux_side;
    const char *pchURL;
};
extern void cppISteamFriends_SteamFriends010_ActivateGameOverlayToWebPage( struct cppISteamFriends_SteamFriends010_ActivateGameOverlayToWebPage_params *params );

struct cppISteamFriends_SteamFriends010_ActivateGameOverlayToStore_params
{
    void *linux_side;
    uint32_t nAppID;
};
extern void cppISteamFriends_SteamFriends010_ActivateGameOverlayToStore( struct cppISteamFriends_SteamFriends010_ActivateGameOverlayToStore_params *params );

struct cppISteamFriends_SteamFriends010_SetPlayedWith_params
{
    void *linux_side;
    CSteamID steamIDUserPlayedWith;
};
extern void cppISteamFriends_SteamFriends010_SetPlayedWith( struct cppISteamFriends_SteamFriends010_SetPlayedWith_params *params );

struct cppISteamFriends_SteamFriends010_ActivateGameOverlayInviteDialog_params
{
    void *linux_side;
    CSteamID steamIDLobby;
};
extern void cppISteamFriends_SteamFriends010_ActivateGameOverlayInviteDialog( struct cppISteamFriends_SteamFriends010_ActivateGameOverlayInviteDialog_params *params );

struct cppISteamFriends_SteamFriends010_GetSmallFriendAvatar_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends010_GetSmallFriendAvatar( struct cppISteamFriends_SteamFriends010_GetSmallFriendAvatar_params *params );

struct cppISteamFriends_SteamFriends010_GetMediumFriendAvatar_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends010_GetMediumFriendAvatar( struct cppISteamFriends_SteamFriends010_GetMediumFriendAvatar_params *params );

struct cppISteamFriends_SteamFriends010_GetLargeFriendAvatar_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends010_GetLargeFriendAvatar( struct cppISteamFriends_SteamFriends010_GetLargeFriendAvatar_params *params );

struct cppISteamFriends_SteamFriends010_RequestUserInformation_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    bool bRequireNameOnly;
};
extern void cppISteamFriends_SteamFriends010_RequestUserInformation( struct cppISteamFriends_SteamFriends010_RequestUserInformation_params *params );

struct cppISteamFriends_SteamFriends010_RequestClanOfficerList_params
{
    void *linux_side;
    uint64_t _ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends010_RequestClanOfficerList( struct cppISteamFriends_SteamFriends010_RequestClanOfficerList_params *params );

struct cppISteamFriends_SteamFriends010_GetClanOwner_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends010_GetClanOwner( struct cppISteamFriends_SteamFriends010_GetClanOwner_params *params );

struct cppISteamFriends_SteamFriends010_GetClanOfficerCount_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends010_GetClanOfficerCount( struct cppISteamFriends_SteamFriends010_GetClanOfficerCount_params *params );

struct cppISteamFriends_SteamFriends010_GetClanOfficerByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDClan;
    int32_t iOfficer;
};
extern void cppISteamFriends_SteamFriends010_GetClanOfficerByIndex( struct cppISteamFriends_SteamFriends010_GetClanOfficerByIndex_params *params );

struct cppISteamFriends_SteamFriends010_GetUserRestrictions_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamFriends_SteamFriends010_GetUserRestrictions( struct cppISteamFriends_SteamFriends010_GetUserRestrictions_params *params );

struct cppISteamFriends_SteamFriends010_SetRichPresence_params
{
    void *linux_side;
    bool _ret;
    const char *pchKey;
    const char *pchValue;
};
extern void cppISteamFriends_SteamFriends010_SetRichPresence( struct cppISteamFriends_SteamFriends010_SetRichPresence_params *params );

struct cppISteamFriends_SteamFriends010_ClearRichPresence_params
{
    void *linux_side;
};
extern void cppISteamFriends_SteamFriends010_ClearRichPresence( struct cppISteamFriends_SteamFriends010_ClearRichPresence_params *params );

struct cppISteamFriends_SteamFriends010_GetFriendRichPresence_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
    const char *pchKey;
};
extern void cppISteamFriends_SteamFriends010_GetFriendRichPresence( struct cppISteamFriends_SteamFriends010_GetFriendRichPresence_params *params );

struct cppISteamFriends_SteamFriends010_GetFriendRichPresenceKeyCount_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends010_GetFriendRichPresenceKeyCount( struct cppISteamFriends_SteamFriends010_GetFriendRichPresenceKeyCount_params *params );

struct cppISteamFriends_SteamFriends010_GetFriendRichPresenceKeyByIndex_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
    int32_t iKey;
};
extern void cppISteamFriends_SteamFriends010_GetFriendRichPresenceKeyByIndex( struct cppISteamFriends_SteamFriends010_GetFriendRichPresenceKeyByIndex_params *params );

struct cppISteamFriends_SteamFriends010_InviteUserToGame_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    const char *pchConnectString;
};
extern void cppISteamFriends_SteamFriends010_InviteUserToGame( struct cppISteamFriends_SteamFriends010_InviteUserToGame_params *params );

struct cppISteamFriends_SteamFriends010_GetCoplayFriendCount_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppISteamFriends_SteamFriends010_GetCoplayFriendCount( struct cppISteamFriends_SteamFriends010_GetCoplayFriendCount_params *params );

struct cppISteamFriends_SteamFriends010_GetCoplayFriend_params
{
    void *linux_side;
    CSteamID *_ret;
    int32_t iCoplayFriend;
};
extern void cppISteamFriends_SteamFriends010_GetCoplayFriend( struct cppISteamFriends_SteamFriends010_GetCoplayFriend_params *params );

struct cppISteamFriends_SteamFriends010_GetFriendCoplayTime_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends010_GetFriendCoplayTime( struct cppISteamFriends_SteamFriends010_GetFriendCoplayTime_params *params );

struct cppISteamFriends_SteamFriends010_GetFriendCoplayGame_params
{
    void *linux_side;
    uint32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends010_GetFriendCoplayGame( struct cppISteamFriends_SteamFriends010_GetFriendCoplayGame_params *params );

struct cppISteamFriends_SteamFriends010_JoinClanChatRoom_params
{
    void *linux_side;
    uint64_t _ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends010_JoinClanChatRoom( struct cppISteamFriends_SteamFriends010_JoinClanChatRoom_params *params );

struct cppISteamFriends_SteamFriends010_LeaveClanChatRoom_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends010_LeaveClanChatRoom( struct cppISteamFriends_SteamFriends010_LeaveClanChatRoom_params *params );

struct cppISteamFriends_SteamFriends010_GetClanChatMemberCount_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends010_GetClanChatMemberCount( struct cppISteamFriends_SteamFriends010_GetClanChatMemberCount_params *params );

struct cppISteamFriends_SteamFriends010_GetChatMemberByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDClan;
    int32_t iUser;
};
extern void cppISteamFriends_SteamFriends010_GetChatMemberByIndex( struct cppISteamFriends_SteamFriends010_GetChatMemberByIndex_params *params );

struct cppISteamFriends_SteamFriends010_SendClanChatMessage_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClanChat;
    const char *pchText;
};
extern void cppISteamFriends_SteamFriends010_SendClanChatMessage( struct cppISteamFriends_SteamFriends010_SendClanChatMessage_params *params );

struct cppISteamFriends_SteamFriends010_GetClanChatMessage_params
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
extern void cppISteamFriends_SteamFriends010_GetClanChatMessage( struct cppISteamFriends_SteamFriends010_GetClanChatMessage_params *params );

struct cppISteamFriends_SteamFriends010_IsClanChatAdmin_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClanChat;
    CSteamID steamIDUser;
};
extern void cppISteamFriends_SteamFriends010_IsClanChatAdmin( struct cppISteamFriends_SteamFriends010_IsClanChatAdmin_params *params );

struct cppISteamFriends_SteamFriends010_IsClanChatWindowOpenInSteam_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClanChat;
};
extern void cppISteamFriends_SteamFriends010_IsClanChatWindowOpenInSteam( struct cppISteamFriends_SteamFriends010_IsClanChatWindowOpenInSteam_params *params );

struct cppISteamFriends_SteamFriends010_OpenClanChatWindowInSteam_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClanChat;
};
extern void cppISteamFriends_SteamFriends010_OpenClanChatWindowInSteam( struct cppISteamFriends_SteamFriends010_OpenClanChatWindowInSteam_params *params );

struct cppISteamFriends_SteamFriends010_CloseClanChatWindowInSteam_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClanChat;
};
extern void cppISteamFriends_SteamFriends010_CloseClanChatWindowInSteam( struct cppISteamFriends_SteamFriends010_CloseClanChatWindowInSteam_params *params );

struct cppISteamFriends_SteamFriends010_SetListenForFriendsMessages_params
{
    void *linux_side;
    bool _ret;
    bool bInterceptEnabled;
};
extern void cppISteamFriends_SteamFriends010_SetListenForFriendsMessages( struct cppISteamFriends_SteamFriends010_SetListenForFriendsMessages_params *params );

struct cppISteamFriends_SteamFriends010_ReplyToFriendMessage_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    const char *pchMsgToSend;
};
extern void cppISteamFriends_SteamFriends010_ReplyToFriendMessage( struct cppISteamFriends_SteamFriends010_ReplyToFriendMessage_params *params );

struct cppISteamFriends_SteamFriends010_GetFriendMessage_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
    int32_t iMessageID;
    void *pvData;
    int32_t cubData;
    uint32_t *peChatEntryType;
};
extern void cppISteamFriends_SteamFriends010_GetFriendMessage( struct cppISteamFriends_SteamFriends010_GetFriendMessage_params *params );

