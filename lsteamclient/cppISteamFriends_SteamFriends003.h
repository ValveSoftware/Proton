struct cppISteamFriends_SteamFriends003;
struct cppISteamFriends_SteamFriends003_GetPersonaName_params
{
    void *linux_side;
    const char *_ret;
};
extern void cppISteamFriends_SteamFriends003_GetPersonaName( struct cppISteamFriends_SteamFriends003_GetPersonaName_params *params );

struct cppISteamFriends_SteamFriends003_SetPersonaName_params
{
    void *linux_side;
    const char *pchPersonaName;
};
extern void cppISteamFriends_SteamFriends003_SetPersonaName( struct cppISteamFriends_SteamFriends003_SetPersonaName_params *params );

struct cppISteamFriends_SteamFriends003_GetPersonaState_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamFriends_SteamFriends003_GetPersonaState( struct cppISteamFriends_SteamFriends003_GetPersonaState_params *params );

struct cppISteamFriends_SteamFriends003_GetFriendCount_params
{
    void *linux_side;
    int32_t _ret;
    int32_t iFriendFlags;
};
extern void cppISteamFriends_SteamFriends003_GetFriendCount( struct cppISteamFriends_SteamFriends003_GetFriendCount_params *params );

struct cppISteamFriends_SteamFriends003_GetFriendByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    int32_t iFriend;
    int32_t iFriendFlags;
};
extern void cppISteamFriends_SteamFriends003_GetFriendByIndex( struct cppISteamFriends_SteamFriends003_GetFriendByIndex_params *params );

struct cppISteamFriends_SteamFriends003_GetFriendRelationship_params
{
    void *linux_side;
    uint32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends003_GetFriendRelationship( struct cppISteamFriends_SteamFriends003_GetFriendRelationship_params *params );

struct cppISteamFriends_SteamFriends003_GetFriendPersonaState_params
{
    void *linux_side;
    uint32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends003_GetFriendPersonaState( struct cppISteamFriends_SteamFriends003_GetFriendPersonaState_params *params );

struct cppISteamFriends_SteamFriends003_GetFriendPersonaName_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends003_GetFriendPersonaName( struct cppISteamFriends_SteamFriends003_GetFriendPersonaName_params *params );

struct cppISteamFriends_SteamFriends003_GetFriendAvatar_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends003_GetFriendAvatar( struct cppISteamFriends_SteamFriends003_GetFriendAvatar_params *params );

struct cppISteamFriends_SteamFriends003_GetFriendGamePlayed_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    uint64_t *pulGameID;
    uint32_t *punGameIP;
    uint16_t *pusGamePort;
    uint16_t *pusQueryPort;
};
extern void cppISteamFriends_SteamFriends003_GetFriendGamePlayed( struct cppISteamFriends_SteamFriends003_GetFriendGamePlayed_params *params );

struct cppISteamFriends_SteamFriends003_GetFriendPersonaNameHistory_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
    int32_t iPersonaName;
};
extern void cppISteamFriends_SteamFriends003_GetFriendPersonaNameHistory( struct cppISteamFriends_SteamFriends003_GetFriendPersonaNameHistory_params *params );

struct cppISteamFriends_SteamFriends003_HasFriend_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    int32_t iFriendFlags;
};
extern void cppISteamFriends_SteamFriends003_HasFriend( struct cppISteamFriends_SteamFriends003_HasFriend_params *params );

struct cppISteamFriends_SteamFriends003_GetClanCount_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppISteamFriends_SteamFriends003_GetClanCount( struct cppISteamFriends_SteamFriends003_GetClanCount_params *params );

struct cppISteamFriends_SteamFriends003_GetClanByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    int32_t iClan;
};
extern void cppISteamFriends_SteamFriends003_GetClanByIndex( struct cppISteamFriends_SteamFriends003_GetClanByIndex_params *params );

struct cppISteamFriends_SteamFriends003_GetClanName_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends003_GetClanName( struct cppISteamFriends_SteamFriends003_GetClanName_params *params );

struct cppISteamFriends_SteamFriends003_GetFriendCountFromSource_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDSource;
};
extern void cppISteamFriends_SteamFriends003_GetFriendCountFromSource( struct cppISteamFriends_SteamFriends003_GetFriendCountFromSource_params *params );

struct cppISteamFriends_SteamFriends003_GetFriendFromSourceByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDSource;
    int32_t iFriend;
};
extern void cppISteamFriends_SteamFriends003_GetFriendFromSourceByIndex( struct cppISteamFriends_SteamFriends003_GetFriendFromSourceByIndex_params *params );

struct cppISteamFriends_SteamFriends003_IsUserInSource_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    CSteamID steamIDSource;
};
extern void cppISteamFriends_SteamFriends003_IsUserInSource( struct cppISteamFriends_SteamFriends003_IsUserInSource_params *params );

struct cppISteamFriends_SteamFriends003_SetInGameVoiceSpeaking_params
{
    void *linux_side;
    CSteamID steamIDUser;
    bool bSpeaking;
};
extern void cppISteamFriends_SteamFriends003_SetInGameVoiceSpeaking( struct cppISteamFriends_SteamFriends003_SetInGameVoiceSpeaking_params *params );

struct cppISteamFriends_SteamFriends003_ActivateGameOverlay_params
{
    void *linux_side;
    const char *pchDialog;
};
extern void cppISteamFriends_SteamFriends003_ActivateGameOverlay( struct cppISteamFriends_SteamFriends003_ActivateGameOverlay_params *params );

