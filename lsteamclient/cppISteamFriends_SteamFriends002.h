struct cppISteamFriends_SteamFriends002_GetPersonaName_params
{
    void *linux_side;
    const char *_ret;
};
extern void cppISteamFriends_SteamFriends002_GetPersonaName( struct cppISteamFriends_SteamFriends002_GetPersonaName_params *params );

struct cppISteamFriends_SteamFriends002_SetPersonaName_params
{
    void *linux_side;
    const char *pchPersonaName;
};
extern void cppISteamFriends_SteamFriends002_SetPersonaName( struct cppISteamFriends_SteamFriends002_SetPersonaName_params *params );

struct cppISteamFriends_SteamFriends002_GetPersonaState_params
{
    void *linux_side;
    EPersonaState _ret;
};
extern void cppISteamFriends_SteamFriends002_GetPersonaState( struct cppISteamFriends_SteamFriends002_GetPersonaState_params *params );

struct cppISteamFriends_SteamFriends002_SetPersonaState_params
{
    void *linux_side;
    EPersonaState ePersonaState;
};
extern void cppISteamFriends_SteamFriends002_SetPersonaState( struct cppISteamFriends_SteamFriends002_SetPersonaState_params *params );

struct cppISteamFriends_SteamFriends002_GetFriendCount_params
{
    void *linux_side;
    int _ret;
    int iFriendFlags;
};
extern void cppISteamFriends_SteamFriends002_GetFriendCount( struct cppISteamFriends_SteamFriends002_GetFriendCount_params *params );

struct cppISteamFriends_SteamFriends002_GetFriendByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    int iFriend;
    int iFriendFlags;
};
extern void cppISteamFriends_SteamFriends002_GetFriendByIndex( struct cppISteamFriends_SteamFriends002_GetFriendByIndex_params *params );

struct cppISteamFriends_SteamFriends002_GetFriendRelationship_params
{
    void *linux_side;
    EFriendRelationship _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends002_GetFriendRelationship( struct cppISteamFriends_SteamFriends002_GetFriendRelationship_params *params );

struct cppISteamFriends_SteamFriends002_GetFriendPersonaState_params
{
    void *linux_side;
    EPersonaState _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends002_GetFriendPersonaState( struct cppISteamFriends_SteamFriends002_GetFriendPersonaState_params *params );

struct cppISteamFriends_SteamFriends002_GetFriendPersonaName_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends002_GetFriendPersonaName( struct cppISteamFriends_SteamFriends002_GetFriendPersonaName_params *params );

struct cppISteamFriends_SteamFriends002_SetFriendRegValue_params
{
    void *linux_side;
    CSteamID steamIDFriend;
    const char *pchKey;
    const char *pchValue;
};
extern void cppISteamFriends_SteamFriends002_SetFriendRegValue( struct cppISteamFriends_SteamFriends002_SetFriendRegValue_params *params );

struct cppISteamFriends_SteamFriends002_GetFriendRegValue_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
    const char *pchKey;
};
extern void cppISteamFriends_SteamFriends002_GetFriendRegValue( struct cppISteamFriends_SteamFriends002_GetFriendRegValue_params *params );

struct cppISteamFriends_SteamFriends002_GetFriendGamePlayed_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    uint64 *pulGameID;
    uint32 *punGameIP;
    uint16 *pusGamePort;
    uint16 *pusQueryPort;
};
extern void cppISteamFriends_SteamFriends002_GetFriendGamePlayed( struct cppISteamFriends_SteamFriends002_GetFriendGamePlayed_params *params );

struct cppISteamFriends_SteamFriends002_GetFriendPersonaNameHistory_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
    int iPersonaName;
};
extern void cppISteamFriends_SteamFriends002_GetFriendPersonaNameHistory( struct cppISteamFriends_SteamFriends002_GetFriendPersonaNameHistory_params *params );

struct cppISteamFriends_SteamFriends002_AddFriend_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends002_AddFriend( struct cppISteamFriends_SteamFriends002_AddFriend_params *params );

struct cppISteamFriends_SteamFriends002_RemoveFriend_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends002_RemoveFriend( struct cppISteamFriends_SteamFriends002_RemoveFriend_params *params );

struct cppISteamFriends_SteamFriends002_HasFriend_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    int iFriendFlags;
};
extern void cppISteamFriends_SteamFriends002_HasFriend( struct cppISteamFriends_SteamFriends002_HasFriend_params *params );

struct cppISteamFriends_SteamFriends002_AddFriendByName_params
{
    void *linux_side;
    int32 _ret;
    const char *pchEmailOrAccountName;
};
extern void cppISteamFriends_SteamFriends002_AddFriendByName( struct cppISteamFriends_SteamFriends002_AddFriendByName_params *params );

struct cppISteamFriends_SteamFriends002_InviteFriendByEmail_params
{
    void *linux_side;
    bool _ret;
    const char *pchEmailAccount;
};
extern void cppISteamFriends_SteamFriends002_InviteFriendByEmail( struct cppISteamFriends_SteamFriends002_InviteFriendByEmail_params *params );

struct cppISteamFriends_SteamFriends002_GetChatMessage_params
{
    void *linux_side;
    int _ret;
    CSteamID steamIDFriend;
    int iChatID;
    void *pvData;
    int cubData;
    EChatEntryType *peChatEntryType;
};
extern void cppISteamFriends_SteamFriends002_GetChatMessage( struct cppISteamFriends_SteamFriends002_GetChatMessage_params *params );

struct cppISteamFriends_SteamFriends002_SendMsgToFriend_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    EChatEntryType eChatEntryType;
    const void *pvMsgBody;
    int cubMsgBody;
};
extern void cppISteamFriends_SteamFriends002_SendMsgToFriend( struct cppISteamFriends_SteamFriends002_SendMsgToFriend_params *params );

struct cppISteamFriends_SteamFriends002_GetChatIDOfChatHistoryStart_params
{
    void *linux_side;
    int _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends002_GetChatIDOfChatHistoryStart( struct cppISteamFriends_SteamFriends002_GetChatIDOfChatHistoryStart_params *params );

struct cppISteamFriends_SteamFriends002_SetChatHistoryStart_params
{
    void *linux_side;
    CSteamID steamIDFriend;
    int iChatID;
};
extern void cppISteamFriends_SteamFriends002_SetChatHistoryStart( struct cppISteamFriends_SteamFriends002_SetChatHistoryStart_params *params );

struct cppISteamFriends_SteamFriends002_ClearChatHistory_params
{
    void *linux_side;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends002_ClearChatHistory( struct cppISteamFriends_SteamFriends002_ClearChatHistory_params *params );

struct cppISteamFriends_SteamFriends002_GetClanCount_params
{
    void *linux_side;
    int _ret;
};
extern void cppISteamFriends_SteamFriends002_GetClanCount( struct cppISteamFriends_SteamFriends002_GetClanCount_params *params );

struct cppISteamFriends_SteamFriends002_GetClanByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    int iClan;
};
extern void cppISteamFriends_SteamFriends002_GetClanByIndex( struct cppISteamFriends_SteamFriends002_GetClanByIndex_params *params );

struct cppISteamFriends_SteamFriends002_GetClanName_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends002_GetClanName( struct cppISteamFriends_SteamFriends002_GetClanName_params *params );

struct cppISteamFriends_SteamFriends002_InviteFriendToClan_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends002_InviteFriendToClan( struct cppISteamFriends_SteamFriends002_InviteFriendToClan_params *params );

struct cppISteamFriends_SteamFriends002_AcknowledgeInviteToClan_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDClan;
    bool bAcceptOrDenyClanInvite;
};
extern void cppISteamFriends_SteamFriends002_AcknowledgeInviteToClan( struct cppISteamFriends_SteamFriends002_AcknowledgeInviteToClan_params *params );

struct cppISteamFriends_SteamFriends002_GetFriendCountFromSource_params
{
    void *linux_side;
    int _ret;
    CSteamID steamIDSource;
};
extern void cppISteamFriends_SteamFriends002_GetFriendCountFromSource( struct cppISteamFriends_SteamFriends002_GetFriendCountFromSource_params *params );

struct cppISteamFriends_SteamFriends002_GetFriendFromSourceByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDSource;
    int iFriend;
};
extern void cppISteamFriends_SteamFriends002_GetFriendFromSourceByIndex( struct cppISteamFriends_SteamFriends002_GetFriendFromSourceByIndex_params *params );

