struct cppISteamFriends_SteamFriends004_GetPersonaName_params
{
    void *linux_side;
    const char *_ret;
};
extern void cppISteamFriends_SteamFriends004_GetPersonaName( struct cppISteamFriends_SteamFriends004_GetPersonaName_params *params );

struct cppISteamFriends_SteamFriends004_SetPersonaName_params
{
    void *linux_side;
    const char *pchPersonaName;
};
extern void cppISteamFriends_SteamFriends004_SetPersonaName( struct cppISteamFriends_SteamFriends004_SetPersonaName_params *params );

struct cppISteamFriends_SteamFriends004_GetPersonaState_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamFriends_SteamFriends004_GetPersonaState( struct cppISteamFriends_SteamFriends004_GetPersonaState_params *params );

struct cppISteamFriends_SteamFriends004_GetFriendCount_params
{
    void *linux_side;
    int _ret;
    int iFriendFlags;
};
extern void cppISteamFriends_SteamFriends004_GetFriendCount( struct cppISteamFriends_SteamFriends004_GetFriendCount_params *params );

struct cppISteamFriends_SteamFriends004_GetFriendByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    int iFriend;
    int iFriendFlags;
};
extern void cppISteamFriends_SteamFriends004_GetFriendByIndex( struct cppISteamFriends_SteamFriends004_GetFriendByIndex_params *params );

struct cppISteamFriends_SteamFriends004_GetFriendRelationship_params
{
    void *linux_side;
    uint32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends004_GetFriendRelationship( struct cppISteamFriends_SteamFriends004_GetFriendRelationship_params *params );

struct cppISteamFriends_SteamFriends004_GetFriendPersonaState_params
{
    void *linux_side;
    uint32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends004_GetFriendPersonaState( struct cppISteamFriends_SteamFriends004_GetFriendPersonaState_params *params );

struct cppISteamFriends_SteamFriends004_GetFriendPersonaName_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends004_GetFriendPersonaName( struct cppISteamFriends_SteamFriends004_GetFriendPersonaName_params *params );

struct cppISteamFriends_SteamFriends004_GetFriendAvatar_params
{
    void *linux_side;
    int _ret;
    CSteamID steamIDFriend;
    int eAvatarSize;
};
extern void cppISteamFriends_SteamFriends004_GetFriendAvatar( struct cppISteamFriends_SteamFriends004_GetFriendAvatar_params *params );

struct cppISteamFriends_SteamFriends004_GetFriendGamePlayed_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    uint64 *pulGameID;
    uint32 *punGameIP;
    uint16 *pusGamePort;
    uint16 *pusQueryPort;
};
extern void cppISteamFriends_SteamFriends004_GetFriendGamePlayed( struct cppISteamFriends_SteamFriends004_GetFriendGamePlayed_params *params );

struct cppISteamFriends_SteamFriends004_GetFriendPersonaNameHistory_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
    int iPersonaName;
};
extern void cppISteamFriends_SteamFriends004_GetFriendPersonaNameHistory( struct cppISteamFriends_SteamFriends004_GetFriendPersonaNameHistory_params *params );

struct cppISteamFriends_SteamFriends004_HasFriend_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    int iFriendFlags;
};
extern void cppISteamFriends_SteamFriends004_HasFriend( struct cppISteamFriends_SteamFriends004_HasFriend_params *params );

struct cppISteamFriends_SteamFriends004_GetClanCount_params
{
    void *linux_side;
    int _ret;
};
extern void cppISteamFriends_SteamFriends004_GetClanCount( struct cppISteamFriends_SteamFriends004_GetClanCount_params *params );

struct cppISteamFriends_SteamFriends004_GetClanByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    int iClan;
};
extern void cppISteamFriends_SteamFriends004_GetClanByIndex( struct cppISteamFriends_SteamFriends004_GetClanByIndex_params *params );

struct cppISteamFriends_SteamFriends004_GetClanName_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends004_GetClanName( struct cppISteamFriends_SteamFriends004_GetClanName_params *params );

struct cppISteamFriends_SteamFriends004_GetFriendCountFromSource_params
{
    void *linux_side;
    int _ret;
    CSteamID steamIDSource;
};
extern void cppISteamFriends_SteamFriends004_GetFriendCountFromSource( struct cppISteamFriends_SteamFriends004_GetFriendCountFromSource_params *params );

struct cppISteamFriends_SteamFriends004_GetFriendFromSourceByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDSource;
    int iFriend;
};
extern void cppISteamFriends_SteamFriends004_GetFriendFromSourceByIndex( struct cppISteamFriends_SteamFriends004_GetFriendFromSourceByIndex_params *params );

struct cppISteamFriends_SteamFriends004_IsUserInSource_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    CSteamID steamIDSource;
};
extern void cppISteamFriends_SteamFriends004_IsUserInSource( struct cppISteamFriends_SteamFriends004_IsUserInSource_params *params );

struct cppISteamFriends_SteamFriends004_SetInGameVoiceSpeaking_params
{
    void *linux_side;
    CSteamID steamIDUser;
    bool bSpeaking;
};
extern void cppISteamFriends_SteamFriends004_SetInGameVoiceSpeaking( struct cppISteamFriends_SteamFriends004_SetInGameVoiceSpeaking_params *params );

struct cppISteamFriends_SteamFriends004_ActivateGameOverlay_params
{
    void *linux_side;
    const char *pchDialog;
};
extern void cppISteamFriends_SteamFriends004_ActivateGameOverlay( struct cppISteamFriends_SteamFriends004_ActivateGameOverlay_params *params );

