struct cppISteamFriends_SteamFriends007_GetPersonaName_params
{
    void *linux_side;
    const char *_ret;
};
extern void cppISteamFriends_SteamFriends007_GetPersonaName( struct cppISteamFriends_SteamFriends007_GetPersonaName_params *params );

struct cppISteamFriends_SteamFriends007_SetPersonaName_params
{
    void *linux_side;
    const char *pchPersonaName;
};
extern void cppISteamFriends_SteamFriends007_SetPersonaName( struct cppISteamFriends_SteamFriends007_SetPersonaName_params *params );

struct cppISteamFriends_SteamFriends007_GetPersonaState_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamFriends_SteamFriends007_GetPersonaState( struct cppISteamFriends_SteamFriends007_GetPersonaState_params *params );

struct cppISteamFriends_SteamFriends007_GetFriendCount_params
{
    void *linux_side;
    int32_t _ret;
    int32_t iFriendFlags;
};
extern void cppISteamFriends_SteamFriends007_GetFriendCount( struct cppISteamFriends_SteamFriends007_GetFriendCount_params *params );

struct cppISteamFriends_SteamFriends007_GetFriendByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    int32_t iFriend;
    int32_t iFriendFlags;
};
extern void cppISteamFriends_SteamFriends007_GetFriendByIndex( struct cppISteamFriends_SteamFriends007_GetFriendByIndex_params *params );

struct cppISteamFriends_SteamFriends007_GetFriendRelationship_params
{
    void *linux_side;
    uint32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends007_GetFriendRelationship( struct cppISteamFriends_SteamFriends007_GetFriendRelationship_params *params );

struct cppISteamFriends_SteamFriends007_GetFriendPersonaState_params
{
    void *linux_side;
    uint32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends007_GetFriendPersonaState( struct cppISteamFriends_SteamFriends007_GetFriendPersonaState_params *params );

struct cppISteamFriends_SteamFriends007_GetFriendPersonaName_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends007_GetFriendPersonaName( struct cppISteamFriends_SteamFriends007_GetFriendPersonaName_params *params );

struct cppISteamFriends_SteamFriends007_GetFriendGamePlayed_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    FriendGameInfo_t *pFriendGameInfo;
};
extern void cppISteamFriends_SteamFriends007_GetFriendGamePlayed( struct cppISteamFriends_SteamFriends007_GetFriendGamePlayed_params *params );

struct cppISteamFriends_SteamFriends007_GetFriendPersonaNameHistory_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
    int32_t iPersonaName;
};
extern void cppISteamFriends_SteamFriends007_GetFriendPersonaNameHistory( struct cppISteamFriends_SteamFriends007_GetFriendPersonaNameHistory_params *params );

struct cppISteamFriends_SteamFriends007_HasFriend_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    int32_t iFriendFlags;
};
extern void cppISteamFriends_SteamFriends007_HasFriend( struct cppISteamFriends_SteamFriends007_HasFriend_params *params );

struct cppISteamFriends_SteamFriends007_GetClanCount_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppISteamFriends_SteamFriends007_GetClanCount( struct cppISteamFriends_SteamFriends007_GetClanCount_params *params );

struct cppISteamFriends_SteamFriends007_GetClanByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    int32_t iClan;
};
extern void cppISteamFriends_SteamFriends007_GetClanByIndex( struct cppISteamFriends_SteamFriends007_GetClanByIndex_params *params );

struct cppISteamFriends_SteamFriends007_GetClanName_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends007_GetClanName( struct cppISteamFriends_SteamFriends007_GetClanName_params *params );

struct cppISteamFriends_SteamFriends007_GetClanTag_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends007_GetClanTag( struct cppISteamFriends_SteamFriends007_GetClanTag_params *params );

struct cppISteamFriends_SteamFriends007_GetFriendCountFromSource_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDSource;
};
extern void cppISteamFriends_SteamFriends007_GetFriendCountFromSource( struct cppISteamFriends_SteamFriends007_GetFriendCountFromSource_params *params );

struct cppISteamFriends_SteamFriends007_GetFriendFromSourceByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDSource;
    int32_t iFriend;
};
extern void cppISteamFriends_SteamFriends007_GetFriendFromSourceByIndex( struct cppISteamFriends_SteamFriends007_GetFriendFromSourceByIndex_params *params );

struct cppISteamFriends_SteamFriends007_IsUserInSource_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    CSteamID steamIDSource;
};
extern void cppISteamFriends_SteamFriends007_IsUserInSource( struct cppISteamFriends_SteamFriends007_IsUserInSource_params *params );

struct cppISteamFriends_SteamFriends007_SetInGameVoiceSpeaking_params
{
    void *linux_side;
    CSteamID steamIDUser;
    bool bSpeaking;
};
extern void cppISteamFriends_SteamFriends007_SetInGameVoiceSpeaking( struct cppISteamFriends_SteamFriends007_SetInGameVoiceSpeaking_params *params );

struct cppISteamFriends_SteamFriends007_ActivateGameOverlay_params
{
    void *linux_side;
    const char *pchDialog;
};
extern void cppISteamFriends_SteamFriends007_ActivateGameOverlay( struct cppISteamFriends_SteamFriends007_ActivateGameOverlay_params *params );

struct cppISteamFriends_SteamFriends007_ActivateGameOverlayToUser_params
{
    void *linux_side;
    const char *pchDialog;
    CSteamID steamID;
};
extern void cppISteamFriends_SteamFriends007_ActivateGameOverlayToUser( struct cppISteamFriends_SteamFriends007_ActivateGameOverlayToUser_params *params );

struct cppISteamFriends_SteamFriends007_ActivateGameOverlayToWebPage_params
{
    void *linux_side;
    const char *pchURL;
};
extern void cppISteamFriends_SteamFriends007_ActivateGameOverlayToWebPage( struct cppISteamFriends_SteamFriends007_ActivateGameOverlayToWebPage_params *params );

struct cppISteamFriends_SteamFriends007_ActivateGameOverlayToStore_params
{
    void *linux_side;
    AppId_t nAppID;
};
extern void cppISteamFriends_SteamFriends007_ActivateGameOverlayToStore( struct cppISteamFriends_SteamFriends007_ActivateGameOverlayToStore_params *params );

struct cppISteamFriends_SteamFriends007_SetPlayedWith_params
{
    void *linux_side;
    CSteamID steamIDUserPlayedWith;
};
extern void cppISteamFriends_SteamFriends007_SetPlayedWith( struct cppISteamFriends_SteamFriends007_SetPlayedWith_params *params );

struct cppISteamFriends_SteamFriends007_ActivateGameOverlayInviteDialog_params
{
    void *linux_side;
    CSteamID steamIDLobby;
};
extern void cppISteamFriends_SteamFriends007_ActivateGameOverlayInviteDialog( struct cppISteamFriends_SteamFriends007_ActivateGameOverlayInviteDialog_params *params );

struct cppISteamFriends_SteamFriends007_GetSmallFriendAvatar_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends007_GetSmallFriendAvatar( struct cppISteamFriends_SteamFriends007_GetSmallFriendAvatar_params *params );

struct cppISteamFriends_SteamFriends007_GetMediumFriendAvatar_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends007_GetMediumFriendAvatar( struct cppISteamFriends_SteamFriends007_GetMediumFriendAvatar_params *params );

struct cppISteamFriends_SteamFriends007_GetLargeFriendAvatar_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends007_GetLargeFriendAvatar( struct cppISteamFriends_SteamFriends007_GetLargeFriendAvatar_params *params );

