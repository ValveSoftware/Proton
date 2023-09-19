struct cppISteamFriends_SteamFriends005_GetPersonaName_params
{
    void *linux_side;
    const char *_ret;
};
extern void cppISteamFriends_SteamFriends005_GetPersonaName( struct cppISteamFriends_SteamFriends005_GetPersonaName_params *params );

struct cppISteamFriends_SteamFriends005_SetPersonaName_params
{
    void *linux_side;
    const char *pchPersonaName;
};
extern void cppISteamFriends_SteamFriends005_SetPersonaName( struct cppISteamFriends_SteamFriends005_SetPersonaName_params *params );

struct cppISteamFriends_SteamFriends005_GetPersonaState_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamFriends_SteamFriends005_GetPersonaState( struct cppISteamFriends_SteamFriends005_GetPersonaState_params *params );

struct cppISteamFriends_SteamFriends005_GetFriendCount_params
{
    void *linux_side;
    int32_t _ret;
    int32_t iFriendFlags;
};
extern void cppISteamFriends_SteamFriends005_GetFriendCount( struct cppISteamFriends_SteamFriends005_GetFriendCount_params *params );

struct cppISteamFriends_SteamFriends005_GetFriendByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    int32_t iFriend;
    int32_t iFriendFlags;
};
extern void cppISteamFriends_SteamFriends005_GetFriendByIndex( struct cppISteamFriends_SteamFriends005_GetFriendByIndex_params *params );

struct cppISteamFriends_SteamFriends005_GetFriendRelationship_params
{
    void *linux_side;
    uint32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends005_GetFriendRelationship( struct cppISteamFriends_SteamFriends005_GetFriendRelationship_params *params );

struct cppISteamFriends_SteamFriends005_GetFriendPersonaState_params
{
    void *linux_side;
    uint32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends005_GetFriendPersonaState( struct cppISteamFriends_SteamFriends005_GetFriendPersonaState_params *params );

struct cppISteamFriends_SteamFriends005_GetFriendPersonaName_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends005_GetFriendPersonaName( struct cppISteamFriends_SteamFriends005_GetFriendPersonaName_params *params );

struct cppISteamFriends_SteamFriends005_GetFriendAvatar_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
    int32_t eAvatarSize;
};
extern void cppISteamFriends_SteamFriends005_GetFriendAvatar( struct cppISteamFriends_SteamFriends005_GetFriendAvatar_params *params );

struct cppISteamFriends_SteamFriends005_GetFriendGamePlayed_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    FriendGameInfo_t *pFriendGameInfo;
};
extern void cppISteamFriends_SteamFriends005_GetFriendGamePlayed( struct cppISteamFriends_SteamFriends005_GetFriendGamePlayed_params *params );

struct cppISteamFriends_SteamFriends005_GetFriendPersonaNameHistory_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
    int32_t iPersonaName;
};
extern void cppISteamFriends_SteamFriends005_GetFriendPersonaNameHistory( struct cppISteamFriends_SteamFriends005_GetFriendPersonaNameHistory_params *params );

struct cppISteamFriends_SteamFriends005_HasFriend_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    int32_t iFriendFlags;
};
extern void cppISteamFriends_SteamFriends005_HasFriend( struct cppISteamFriends_SteamFriends005_HasFriend_params *params );

struct cppISteamFriends_SteamFriends005_GetClanCount_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppISteamFriends_SteamFriends005_GetClanCount( struct cppISteamFriends_SteamFriends005_GetClanCount_params *params );

struct cppISteamFriends_SteamFriends005_GetClanByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    int32_t iClan;
};
extern void cppISteamFriends_SteamFriends005_GetClanByIndex( struct cppISteamFriends_SteamFriends005_GetClanByIndex_params *params );

struct cppISteamFriends_SteamFriends005_GetClanName_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends005_GetClanName( struct cppISteamFriends_SteamFriends005_GetClanName_params *params );

struct cppISteamFriends_SteamFriends005_GetFriendCountFromSource_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDSource;
};
extern void cppISteamFriends_SteamFriends005_GetFriendCountFromSource( struct cppISteamFriends_SteamFriends005_GetFriendCountFromSource_params *params );

struct cppISteamFriends_SteamFriends005_GetFriendFromSourceByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDSource;
    int32_t iFriend;
};
extern void cppISteamFriends_SteamFriends005_GetFriendFromSourceByIndex( struct cppISteamFriends_SteamFriends005_GetFriendFromSourceByIndex_params *params );

struct cppISteamFriends_SteamFriends005_IsUserInSource_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    CSteamID steamIDSource;
};
extern void cppISteamFriends_SteamFriends005_IsUserInSource( struct cppISteamFriends_SteamFriends005_IsUserInSource_params *params );

struct cppISteamFriends_SteamFriends005_SetInGameVoiceSpeaking_params
{
    void *linux_side;
    CSteamID steamIDUser;
    bool bSpeaking;
};
extern void cppISteamFriends_SteamFriends005_SetInGameVoiceSpeaking( struct cppISteamFriends_SteamFriends005_SetInGameVoiceSpeaking_params *params );

struct cppISteamFriends_SteamFriends005_ActivateGameOverlay_params
{
    void *linux_side;
    const char *pchDialog;
};
extern void cppISteamFriends_SteamFriends005_ActivateGameOverlay( struct cppISteamFriends_SteamFriends005_ActivateGameOverlay_params *params );

struct cppISteamFriends_SteamFriends005_ActivateGameOverlayToUser_params
{
    void *linux_side;
    const char *pchDialog;
    CSteamID steamID;
};
extern void cppISteamFriends_SteamFriends005_ActivateGameOverlayToUser( struct cppISteamFriends_SteamFriends005_ActivateGameOverlayToUser_params *params );

struct cppISteamFriends_SteamFriends005_ActivateGameOverlayToWebPage_params
{
    void *linux_side;
    const char *pchURL;
};
extern void cppISteamFriends_SteamFriends005_ActivateGameOverlayToWebPage( struct cppISteamFriends_SteamFriends005_ActivateGameOverlayToWebPage_params *params );

struct cppISteamFriends_SteamFriends005_ActivateGameOverlayToStore_params
{
    void *linux_side;
    uint32_t nAppID;
};
extern void cppISteamFriends_SteamFriends005_ActivateGameOverlayToStore( struct cppISteamFriends_SteamFriends005_ActivateGameOverlayToStore_params *params );

struct cppISteamFriends_SteamFriends005_SetPlayedWith_params
{
    void *linux_side;
    CSteamID steamIDUserPlayedWith;
};
extern void cppISteamFriends_SteamFriends005_SetPlayedWith( struct cppISteamFriends_SteamFriends005_SetPlayedWith_params *params );

