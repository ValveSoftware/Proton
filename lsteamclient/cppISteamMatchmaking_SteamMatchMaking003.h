struct cppISteamMatchmaking_SteamMatchMaking003_GetFavoriteGameCount_params
{
    void *linux_side;
    int _ret;
};
extern void cppISteamMatchmaking_SteamMatchMaking003_GetFavoriteGameCount( struct cppISteamMatchmaking_SteamMatchMaking003_GetFavoriteGameCount_params *params );

struct cppISteamMatchmaking_SteamMatchMaking003_GetFavoriteGame_params
{
    void *linux_side;
    bool _ret;
    int iGame;
    AppId_t *pnAppID;
    uint32 *pnIP;
    uint16 *pnConnPort;
    uint16 *pnQueryPort;
    uint32 *punFlags;
    uint32 *pRTime32LastPlayedOnServer;
};
extern void cppISteamMatchmaking_SteamMatchMaking003_GetFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking003_GetFavoriteGame_params *params );

struct cppISteamMatchmaking_SteamMatchMaking003_AddFavoriteGame_params
{
    void *linux_side;
    int _ret;
    AppId_t nAppID;
    uint32 nIP;
    uint16 nConnPort;
    uint16 nQueryPort;
    uint32 unFlags;
    uint32 rTime32LastPlayedOnServer;
};
extern void cppISteamMatchmaking_SteamMatchMaking003_AddFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking003_AddFavoriteGame_params *params );

struct cppISteamMatchmaking_SteamMatchMaking003_RemoveFavoriteGame_params
{
    void *linux_side;
    bool _ret;
    AppId_t nAppID;
    uint32 nIP;
    uint16 nConnPort;
    uint16 nQueryPort;
    uint32 unFlags;
};
extern void cppISteamMatchmaking_SteamMatchMaking003_RemoveFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking003_RemoveFavoriteGame_params *params );

struct cppISteamMatchmaking_SteamMatchMaking003_RequestLobbyList_params
{
    void *linux_side;
};
extern void cppISteamMatchmaking_SteamMatchMaking003_RequestLobbyList( struct cppISteamMatchmaking_SteamMatchMaking003_RequestLobbyList_params *params );

struct cppISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListFilter_params
{
    void *linux_side;
    const char *pchKeyToMatch;
    const char *pchValueToMatch;
};
extern void cppISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListFilter( struct cppISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListFilter_params *params );

struct cppISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListNumericalFilter_params
{
    void *linux_side;
    const char *pchKeyToMatch;
    int nValueToMatch;
    int nComparisonType;
};
extern void cppISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListNumericalFilter( struct cppISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListNumericalFilter_params *params );

struct cppISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListSlotsAvailableFilter_params
{
    void *linux_side;
};
extern void cppISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListSlotsAvailableFilter( struct cppISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListSlotsAvailableFilter_params *params );

struct cppISteamMatchmaking_SteamMatchMaking003_GetLobbyByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    int iLobby;
};
extern void cppISteamMatchmaking_SteamMatchMaking003_GetLobbyByIndex( struct cppISteamMatchmaking_SteamMatchMaking003_GetLobbyByIndex_params *params );

struct cppISteamMatchmaking_SteamMatchMaking003_CreateLobby_params
{
    void *linux_side;
    bool bPrivate;
};
extern void cppISteamMatchmaking_SteamMatchMaking003_CreateLobby( struct cppISteamMatchmaking_SteamMatchMaking003_CreateLobby_params *params );

struct cppISteamMatchmaking_SteamMatchMaking003_JoinLobby_params
{
    void *linux_side;
    CSteamID steamIDLobby;
};
extern void cppISteamMatchmaking_SteamMatchMaking003_JoinLobby( struct cppISteamMatchmaking_SteamMatchMaking003_JoinLobby_params *params );

struct cppISteamMatchmaking_SteamMatchMaking003_LeaveLobby_params
{
    void *linux_side;
    CSteamID steamIDLobby;
};
extern void cppISteamMatchmaking_SteamMatchMaking003_LeaveLobby( struct cppISteamMatchmaking_SteamMatchMaking003_LeaveLobby_params *params );

struct cppISteamMatchmaking_SteamMatchMaking003_InviteUserToLobby_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDLobby;
    CSteamID steamIDInvitee;
};
extern void cppISteamMatchmaking_SteamMatchMaking003_InviteUserToLobby( struct cppISteamMatchmaking_SteamMatchMaking003_InviteUserToLobby_params *params );

struct cppISteamMatchmaking_SteamMatchMaking003_GetNumLobbyMembers_params
{
    void *linux_side;
    int _ret;
    CSteamID steamIDLobby;
};
extern void cppISteamMatchmaking_SteamMatchMaking003_GetNumLobbyMembers( struct cppISteamMatchmaking_SteamMatchMaking003_GetNumLobbyMembers_params *params );

struct cppISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDLobby;
    int iMember;
};
extern void cppISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberByIndex( struct cppISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberByIndex_params *params );

struct cppISteamMatchmaking_SteamMatchMaking003_GetLobbyData_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDLobby;
    const char *pchKey;
};
extern void cppISteamMatchmaking_SteamMatchMaking003_GetLobbyData( struct cppISteamMatchmaking_SteamMatchMaking003_GetLobbyData_params *params );

struct cppISteamMatchmaking_SteamMatchMaking003_SetLobbyData_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDLobby;
    const char *pchKey;
    const char *pchValue;
};
extern void cppISteamMatchmaking_SteamMatchMaking003_SetLobbyData( struct cppISteamMatchmaking_SteamMatchMaking003_SetLobbyData_params *params );

struct cppISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberData_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDLobby;
    CSteamID steamIDUser;
    const char *pchKey;
};
extern void cppISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberData( struct cppISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberData_params *params );

struct cppISteamMatchmaking_SteamMatchMaking003_SetLobbyMemberData_params
{
    void *linux_side;
    CSteamID steamIDLobby;
    const char *pchKey;
    const char *pchValue;
};
extern void cppISteamMatchmaking_SteamMatchMaking003_SetLobbyMemberData( struct cppISteamMatchmaking_SteamMatchMaking003_SetLobbyMemberData_params *params );

struct cppISteamMatchmaking_SteamMatchMaking003_SendLobbyChatMsg_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDLobby;
    const void *pvMsgBody;
    int cubMsgBody;
};
extern void cppISteamMatchmaking_SteamMatchMaking003_SendLobbyChatMsg( struct cppISteamMatchmaking_SteamMatchMaking003_SendLobbyChatMsg_params *params );

struct cppISteamMatchmaking_SteamMatchMaking003_GetLobbyChatEntry_params
{
    void *linux_side;
    int _ret;
    CSteamID steamIDLobby;
    int iChatID;
    CSteamID *pSteamIDUser;
    void *pvData;
    int cubData;
    uint32_t *peChatEntryType;
};
extern void cppISteamMatchmaking_SteamMatchMaking003_GetLobbyChatEntry( struct cppISteamMatchmaking_SteamMatchMaking003_GetLobbyChatEntry_params *params );

struct cppISteamMatchmaking_SteamMatchMaking003_RequestLobbyData_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDLobby;
};
extern void cppISteamMatchmaking_SteamMatchMaking003_RequestLobbyData( struct cppISteamMatchmaking_SteamMatchMaking003_RequestLobbyData_params *params );

struct cppISteamMatchmaking_SteamMatchMaking003_SetLobbyGameServer_params
{
    void *linux_side;
    CSteamID steamIDLobby;
    uint32 unGameServerIP;
    uint16 unGameServerPort;
    CSteamID steamIDGameServer;
};
extern void cppISteamMatchmaking_SteamMatchMaking003_SetLobbyGameServer( struct cppISteamMatchmaking_SteamMatchMaking003_SetLobbyGameServer_params *params );

struct cppISteamMatchmaking_SteamMatchMaking003_GetLobbyGameServer_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDLobby;
    uint32 *punGameServerIP;
    uint16 *punGameServerPort;
    CSteamID *psteamIDGameServer;
};
extern void cppISteamMatchmaking_SteamMatchMaking003_GetLobbyGameServer( struct cppISteamMatchmaking_SteamMatchMaking003_GetLobbyGameServer_params *params );

struct cppISteamMatchmaking_SteamMatchMaking003_SetLobbyMemberLimit_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDLobby;
    int cMaxMembers;
};
extern void cppISteamMatchmaking_SteamMatchMaking003_SetLobbyMemberLimit( struct cppISteamMatchmaking_SteamMatchMaking003_SetLobbyMemberLimit_params *params );

struct cppISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberLimit_params
{
    void *linux_side;
    int _ret;
    CSteamID steamIDLobby;
};
extern void cppISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberLimit( struct cppISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberLimit_params *params );

struct cppISteamMatchmaking_SteamMatchMaking003_SetLobbyVoiceEnabled_params
{
    void *linux_side;
    CSteamID steamIDLobby;
    bool bVoiceEnabled;
};
extern void cppISteamMatchmaking_SteamMatchMaking003_SetLobbyVoiceEnabled( struct cppISteamMatchmaking_SteamMatchMaking003_SetLobbyVoiceEnabled_params *params );

struct cppISteamMatchmaking_SteamMatchMaking003_RequestFriendsLobbies_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamMatchmaking_SteamMatchMaking003_RequestFriendsLobbies( struct cppISteamMatchmaking_SteamMatchMaking003_RequestFriendsLobbies_params *params );

