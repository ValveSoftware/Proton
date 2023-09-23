struct cppISteamFriends_SteamFriends009;
struct cppISteamFriends_SteamFriends009_GetPersonaName_params
{
    void *linux_side;
    const char *_ret;
};
extern void cppISteamFriends_SteamFriends009_GetPersonaName( struct cppISteamFriends_SteamFriends009_GetPersonaName_params *params );

struct cppISteamFriends_SteamFriends009_SetPersonaName_params
{
    void *linux_side;
    const char *pchPersonaName;
};
extern void cppISteamFriends_SteamFriends009_SetPersonaName( struct cppISteamFriends_SteamFriends009_SetPersonaName_params *params );

struct cppISteamFriends_SteamFriends009_GetPersonaState_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamFriends_SteamFriends009_GetPersonaState( struct cppISteamFriends_SteamFriends009_GetPersonaState_params *params );

struct cppISteamFriends_SteamFriends009_GetFriendCount_params
{
    void *linux_side;
    int32_t _ret;
    int32_t iFriendFlags;
};
extern void cppISteamFriends_SteamFriends009_GetFriendCount( struct cppISteamFriends_SteamFriends009_GetFriendCount_params *params );

struct cppISteamFriends_SteamFriends009_GetFriendByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    int32_t iFriend;
    int32_t iFriendFlags;
};
extern void cppISteamFriends_SteamFriends009_GetFriendByIndex( struct cppISteamFriends_SteamFriends009_GetFriendByIndex_params *params );

struct cppISteamFriends_SteamFriends009_GetFriendRelationship_params
{
    void *linux_side;
    uint32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends009_GetFriendRelationship( struct cppISteamFriends_SteamFriends009_GetFriendRelationship_params *params );

struct cppISteamFriends_SteamFriends009_GetFriendPersonaState_params
{
    void *linux_side;
    uint32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends009_GetFriendPersonaState( struct cppISteamFriends_SteamFriends009_GetFriendPersonaState_params *params );

struct cppISteamFriends_SteamFriends009_GetFriendPersonaName_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends009_GetFriendPersonaName( struct cppISteamFriends_SteamFriends009_GetFriendPersonaName_params *params );

struct cppISteamFriends_SteamFriends009_GetFriendGamePlayed_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    FriendGameInfo_t *pFriendGameInfo;
};
extern void cppISteamFriends_SteamFriends009_GetFriendGamePlayed( struct cppISteamFriends_SteamFriends009_GetFriendGamePlayed_params *params );

struct cppISteamFriends_SteamFriends009_GetFriendPersonaNameHistory_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
    int32_t iPersonaName;
};
extern void cppISteamFriends_SteamFriends009_GetFriendPersonaNameHistory( struct cppISteamFriends_SteamFriends009_GetFriendPersonaNameHistory_params *params );

struct cppISteamFriends_SteamFriends009_HasFriend_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    int32_t iFriendFlags;
};
extern void cppISteamFriends_SteamFriends009_HasFriend( struct cppISteamFriends_SteamFriends009_HasFriend_params *params );

struct cppISteamFriends_SteamFriends009_GetClanCount_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppISteamFriends_SteamFriends009_GetClanCount( struct cppISteamFriends_SteamFriends009_GetClanCount_params *params );

struct cppISteamFriends_SteamFriends009_GetClanByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    int32_t iClan;
};
extern void cppISteamFriends_SteamFriends009_GetClanByIndex( struct cppISteamFriends_SteamFriends009_GetClanByIndex_params *params );

struct cppISteamFriends_SteamFriends009_GetClanName_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends009_GetClanName( struct cppISteamFriends_SteamFriends009_GetClanName_params *params );

struct cppISteamFriends_SteamFriends009_GetClanTag_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends009_GetClanTag( struct cppISteamFriends_SteamFriends009_GetClanTag_params *params );

struct cppISteamFriends_SteamFriends009_GetFriendCountFromSource_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDSource;
};
extern void cppISteamFriends_SteamFriends009_GetFriendCountFromSource( struct cppISteamFriends_SteamFriends009_GetFriendCountFromSource_params *params );

struct cppISteamFriends_SteamFriends009_GetFriendFromSourceByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDSource;
    int32_t iFriend;
};
extern void cppISteamFriends_SteamFriends009_GetFriendFromSourceByIndex( struct cppISteamFriends_SteamFriends009_GetFriendFromSourceByIndex_params *params );

struct cppISteamFriends_SteamFriends009_IsUserInSource_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    CSteamID steamIDSource;
};
extern void cppISteamFriends_SteamFriends009_IsUserInSource( struct cppISteamFriends_SteamFriends009_IsUserInSource_params *params );

struct cppISteamFriends_SteamFriends009_SetInGameVoiceSpeaking_params
{
    void *linux_side;
    CSteamID steamIDUser;
    bool bSpeaking;
};
extern void cppISteamFriends_SteamFriends009_SetInGameVoiceSpeaking( struct cppISteamFriends_SteamFriends009_SetInGameVoiceSpeaking_params *params );

struct cppISteamFriends_SteamFriends009_ActivateGameOverlay_params
{
    void *linux_side;
    const char *pchDialog;
};
extern void cppISteamFriends_SteamFriends009_ActivateGameOverlay( struct cppISteamFriends_SteamFriends009_ActivateGameOverlay_params *params );

struct cppISteamFriends_SteamFriends009_ActivateGameOverlayToUser_params
{
    void *linux_side;
    const char *pchDialog;
    CSteamID steamID;
};
extern void cppISteamFriends_SteamFriends009_ActivateGameOverlayToUser( struct cppISteamFriends_SteamFriends009_ActivateGameOverlayToUser_params *params );

struct cppISteamFriends_SteamFriends009_ActivateGameOverlayToWebPage_params
{
    void *linux_side;
    const char *pchURL;
};
extern void cppISteamFriends_SteamFriends009_ActivateGameOverlayToWebPage( struct cppISteamFriends_SteamFriends009_ActivateGameOverlayToWebPage_params *params );

struct cppISteamFriends_SteamFriends009_ActivateGameOverlayToStore_params
{
    void *linux_side;
    uint32_t nAppID;
};
extern void cppISteamFriends_SteamFriends009_ActivateGameOverlayToStore( struct cppISteamFriends_SteamFriends009_ActivateGameOverlayToStore_params *params );

struct cppISteamFriends_SteamFriends009_SetPlayedWith_params
{
    void *linux_side;
    CSteamID steamIDUserPlayedWith;
};
extern void cppISteamFriends_SteamFriends009_SetPlayedWith( struct cppISteamFriends_SteamFriends009_SetPlayedWith_params *params );

struct cppISteamFriends_SteamFriends009_ActivateGameOverlayInviteDialog_params
{
    void *linux_side;
    CSteamID steamIDLobby;
};
extern void cppISteamFriends_SteamFriends009_ActivateGameOverlayInviteDialog( struct cppISteamFriends_SteamFriends009_ActivateGameOverlayInviteDialog_params *params );

struct cppISteamFriends_SteamFriends009_GetSmallFriendAvatar_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends009_GetSmallFriendAvatar( struct cppISteamFriends_SteamFriends009_GetSmallFriendAvatar_params *params );

struct cppISteamFriends_SteamFriends009_GetMediumFriendAvatar_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends009_GetMediumFriendAvatar( struct cppISteamFriends_SteamFriends009_GetMediumFriendAvatar_params *params );

struct cppISteamFriends_SteamFriends009_GetLargeFriendAvatar_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends009_GetLargeFriendAvatar( struct cppISteamFriends_SteamFriends009_GetLargeFriendAvatar_params *params );

struct cppISteamFriends_SteamFriends009_RequestUserInformation_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    bool bRequireNameOnly;
};
extern void cppISteamFriends_SteamFriends009_RequestUserInformation( struct cppISteamFriends_SteamFriends009_RequestUserInformation_params *params );

struct cppISteamFriends_SteamFriends009_RequestClanOfficerList_params
{
    void *linux_side;
    uint64_t _ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends009_RequestClanOfficerList( struct cppISteamFriends_SteamFriends009_RequestClanOfficerList_params *params );

struct cppISteamFriends_SteamFriends009_GetClanOwner_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends009_GetClanOwner( struct cppISteamFriends_SteamFriends009_GetClanOwner_params *params );

struct cppISteamFriends_SteamFriends009_GetClanOfficerCount_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends009_GetClanOfficerCount( struct cppISteamFriends_SteamFriends009_GetClanOfficerCount_params *params );

struct cppISteamFriends_SteamFriends009_GetClanOfficerByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDClan;
    int32_t iOfficer;
};
extern void cppISteamFriends_SteamFriends009_GetClanOfficerByIndex( struct cppISteamFriends_SteamFriends009_GetClanOfficerByIndex_params *params );

struct cppISteamFriends_SteamFriends009_GetUserRestrictions_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamFriends_SteamFriends009_GetUserRestrictions( struct cppISteamFriends_SteamFriends009_GetUserRestrictions_params *params );

struct cppISteamFriends_SteamFriends009_SetRichPresence_params
{
    void *linux_side;
    bool _ret;
    const char *pchKey;
    const char *pchValue;
};
extern void cppISteamFriends_SteamFriends009_SetRichPresence( struct cppISteamFriends_SteamFriends009_SetRichPresence_params *params );

struct cppISteamFriends_SteamFriends009_ClearRichPresence_params
{
    void *linux_side;
};
extern void cppISteamFriends_SteamFriends009_ClearRichPresence( struct cppISteamFriends_SteamFriends009_ClearRichPresence_params *params );

struct cppISteamFriends_SteamFriends009_GetFriendRichPresence_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
    const char *pchKey;
};
extern void cppISteamFriends_SteamFriends009_GetFriendRichPresence( struct cppISteamFriends_SteamFriends009_GetFriendRichPresence_params *params );

struct cppISteamFriends_SteamFriends009_GetFriendRichPresenceKeyCount_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends009_GetFriendRichPresenceKeyCount( struct cppISteamFriends_SteamFriends009_GetFriendRichPresenceKeyCount_params *params );

struct cppISteamFriends_SteamFriends009_GetFriendRichPresenceKeyByIndex_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
    int32_t iKey;
};
extern void cppISteamFriends_SteamFriends009_GetFriendRichPresenceKeyByIndex( struct cppISteamFriends_SteamFriends009_GetFriendRichPresenceKeyByIndex_params *params );

struct cppISteamFriends_SteamFriends009_InviteUserToGame_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    const char *pchConnectString;
};
extern void cppISteamFriends_SteamFriends009_InviteUserToGame( struct cppISteamFriends_SteamFriends009_InviteUserToGame_params *params );

struct cppISteamFriends_SteamFriends009_GetCoplayFriendCount_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppISteamFriends_SteamFriends009_GetCoplayFriendCount( struct cppISteamFriends_SteamFriends009_GetCoplayFriendCount_params *params );

struct cppISteamFriends_SteamFriends009_GetCoplayFriend_params
{
    void *linux_side;
    CSteamID *_ret;
    int32_t iCoplayFriend;
};
extern void cppISteamFriends_SteamFriends009_GetCoplayFriend( struct cppISteamFriends_SteamFriends009_GetCoplayFriend_params *params );

struct cppISteamFriends_SteamFriends009_GetFriendCoplayTime_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends009_GetFriendCoplayTime( struct cppISteamFriends_SteamFriends009_GetFriendCoplayTime_params *params );

struct cppISteamFriends_SteamFriends009_GetFriendCoplayGame_params
{
    void *linux_side;
    uint32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends009_GetFriendCoplayGame( struct cppISteamFriends_SteamFriends009_GetFriendCoplayGame_params *params );

