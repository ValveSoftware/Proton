struct cppISteamFriends_SteamFriends008_GetPersonaName_params
{
    void *linux_side;
    const char *_ret;
};
extern void cppISteamFriends_SteamFriends008_GetPersonaName( struct cppISteamFriends_SteamFriends008_GetPersonaName_params *params );

struct cppISteamFriends_SteamFriends008_SetPersonaName_params
{
    void *linux_side;
    const char *pchPersonaName;
};
extern void cppISteamFriends_SteamFriends008_SetPersonaName( struct cppISteamFriends_SteamFriends008_SetPersonaName_params *params );

struct cppISteamFriends_SteamFriends008_GetPersonaState_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamFriends_SteamFriends008_GetPersonaState( struct cppISteamFriends_SteamFriends008_GetPersonaState_params *params );

struct cppISteamFriends_SteamFriends008_GetFriendCount_params
{
    void *linux_side;
    int32_t _ret;
    int32_t iFriendFlags;
};
extern void cppISteamFriends_SteamFriends008_GetFriendCount( struct cppISteamFriends_SteamFriends008_GetFriendCount_params *params );

struct cppISteamFriends_SteamFriends008_GetFriendByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    int32_t iFriend;
    int32_t iFriendFlags;
};
extern void cppISteamFriends_SteamFriends008_GetFriendByIndex( struct cppISteamFriends_SteamFriends008_GetFriendByIndex_params *params );

struct cppISteamFriends_SteamFriends008_GetFriendRelationship_params
{
    void *linux_side;
    uint32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends008_GetFriendRelationship( struct cppISteamFriends_SteamFriends008_GetFriendRelationship_params *params );

struct cppISteamFriends_SteamFriends008_GetFriendPersonaState_params
{
    void *linux_side;
    uint32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends008_GetFriendPersonaState( struct cppISteamFriends_SteamFriends008_GetFriendPersonaState_params *params );

struct cppISteamFriends_SteamFriends008_GetFriendPersonaName_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends008_GetFriendPersonaName( struct cppISteamFriends_SteamFriends008_GetFriendPersonaName_params *params );

struct cppISteamFriends_SteamFriends008_GetFriendGamePlayed_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    FriendGameInfo_t *pFriendGameInfo;
};
extern void cppISteamFriends_SteamFriends008_GetFriendGamePlayed( struct cppISteamFriends_SteamFriends008_GetFriendGamePlayed_params *params );

struct cppISteamFriends_SteamFriends008_GetFriendPersonaNameHistory_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
    int32_t iPersonaName;
};
extern void cppISteamFriends_SteamFriends008_GetFriendPersonaNameHistory( struct cppISteamFriends_SteamFriends008_GetFriendPersonaNameHistory_params *params );

struct cppISteamFriends_SteamFriends008_HasFriend_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    int32_t iFriendFlags;
};
extern void cppISteamFriends_SteamFriends008_HasFriend( struct cppISteamFriends_SteamFriends008_HasFriend_params *params );

struct cppISteamFriends_SteamFriends008_GetClanCount_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppISteamFriends_SteamFriends008_GetClanCount( struct cppISteamFriends_SteamFriends008_GetClanCount_params *params );

struct cppISteamFriends_SteamFriends008_GetClanByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    int32_t iClan;
};
extern void cppISteamFriends_SteamFriends008_GetClanByIndex( struct cppISteamFriends_SteamFriends008_GetClanByIndex_params *params );

struct cppISteamFriends_SteamFriends008_GetClanName_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends008_GetClanName( struct cppISteamFriends_SteamFriends008_GetClanName_params *params );

struct cppISteamFriends_SteamFriends008_GetClanTag_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends008_GetClanTag( struct cppISteamFriends_SteamFriends008_GetClanTag_params *params );

struct cppISteamFriends_SteamFriends008_GetFriendCountFromSource_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDSource;
};
extern void cppISteamFriends_SteamFriends008_GetFriendCountFromSource( struct cppISteamFriends_SteamFriends008_GetFriendCountFromSource_params *params );

struct cppISteamFriends_SteamFriends008_GetFriendFromSourceByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDSource;
    int32_t iFriend;
};
extern void cppISteamFriends_SteamFriends008_GetFriendFromSourceByIndex( struct cppISteamFriends_SteamFriends008_GetFriendFromSourceByIndex_params *params );

struct cppISteamFriends_SteamFriends008_IsUserInSource_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    CSteamID steamIDSource;
};
extern void cppISteamFriends_SteamFriends008_IsUserInSource( struct cppISteamFriends_SteamFriends008_IsUserInSource_params *params );

struct cppISteamFriends_SteamFriends008_SetInGameVoiceSpeaking_params
{
    void *linux_side;
    CSteamID steamIDUser;
    bool bSpeaking;
};
extern void cppISteamFriends_SteamFriends008_SetInGameVoiceSpeaking( struct cppISteamFriends_SteamFriends008_SetInGameVoiceSpeaking_params *params );

struct cppISteamFriends_SteamFriends008_ActivateGameOverlay_params
{
    void *linux_side;
    const char *pchDialog;
};
extern void cppISteamFriends_SteamFriends008_ActivateGameOverlay( struct cppISteamFriends_SteamFriends008_ActivateGameOverlay_params *params );

struct cppISteamFriends_SteamFriends008_ActivateGameOverlayToUser_params
{
    void *linux_side;
    const char *pchDialog;
    CSteamID steamID;
};
extern void cppISteamFriends_SteamFriends008_ActivateGameOverlayToUser( struct cppISteamFriends_SteamFriends008_ActivateGameOverlayToUser_params *params );

struct cppISteamFriends_SteamFriends008_ActivateGameOverlayToWebPage_params
{
    void *linux_side;
    const char *pchURL;
};
extern void cppISteamFriends_SteamFriends008_ActivateGameOverlayToWebPage( struct cppISteamFriends_SteamFriends008_ActivateGameOverlayToWebPage_params *params );

struct cppISteamFriends_SteamFriends008_ActivateGameOverlayToStore_params
{
    void *linux_side;
    uint32_t nAppID;
};
extern void cppISteamFriends_SteamFriends008_ActivateGameOverlayToStore( struct cppISteamFriends_SteamFriends008_ActivateGameOverlayToStore_params *params );

struct cppISteamFriends_SteamFriends008_SetPlayedWith_params
{
    void *linux_side;
    CSteamID steamIDUserPlayedWith;
};
extern void cppISteamFriends_SteamFriends008_SetPlayedWith( struct cppISteamFriends_SteamFriends008_SetPlayedWith_params *params );

struct cppISteamFriends_SteamFriends008_ActivateGameOverlayInviteDialog_params
{
    void *linux_side;
    CSteamID steamIDLobby;
};
extern void cppISteamFriends_SteamFriends008_ActivateGameOverlayInviteDialog( struct cppISteamFriends_SteamFriends008_ActivateGameOverlayInviteDialog_params *params );

struct cppISteamFriends_SteamFriends008_GetSmallFriendAvatar_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends008_GetSmallFriendAvatar( struct cppISteamFriends_SteamFriends008_GetSmallFriendAvatar_params *params );

struct cppISteamFriends_SteamFriends008_GetMediumFriendAvatar_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends008_GetMediumFriendAvatar( struct cppISteamFriends_SteamFriends008_GetMediumFriendAvatar_params *params );

struct cppISteamFriends_SteamFriends008_GetLargeFriendAvatar_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends008_GetLargeFriendAvatar( struct cppISteamFriends_SteamFriends008_GetLargeFriendAvatar_params *params );

struct cppISteamFriends_SteamFriends008_RequestUserInformation_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    bool bRequireNameOnly;
};
extern void cppISteamFriends_SteamFriends008_RequestUserInformation( struct cppISteamFriends_SteamFriends008_RequestUserInformation_params *params );

struct cppISteamFriends_SteamFriends008_RequestClanOfficerList_params
{
    void *linux_side;
    uint64_t _ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends008_RequestClanOfficerList( struct cppISteamFriends_SteamFriends008_RequestClanOfficerList_params *params );

struct cppISteamFriends_SteamFriends008_GetClanOwner_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends008_GetClanOwner( struct cppISteamFriends_SteamFriends008_GetClanOwner_params *params );

struct cppISteamFriends_SteamFriends008_GetClanOfficerCount_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends008_GetClanOfficerCount( struct cppISteamFriends_SteamFriends008_GetClanOfficerCount_params *params );

struct cppISteamFriends_SteamFriends008_GetClanOfficerByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDClan;
    int32_t iOfficer;
};
extern void cppISteamFriends_SteamFriends008_GetClanOfficerByIndex( struct cppISteamFriends_SteamFriends008_GetClanOfficerByIndex_params *params );

struct cppISteamFriends_SteamFriends008_GetUserRestrictions_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamFriends_SteamFriends008_GetUserRestrictions( struct cppISteamFriends_SteamFriends008_GetUserRestrictions_params *params );

