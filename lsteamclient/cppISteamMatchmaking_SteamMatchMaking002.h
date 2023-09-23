struct cppISteamMatchmaking_SteamMatchMaking002;
struct cppISteamMatchmaking_SteamMatchMaking002_GetFavoriteGameCount_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppISteamMatchmaking_SteamMatchMaking002_GetFavoriteGameCount( struct cppISteamMatchmaking_SteamMatchMaking002_GetFavoriteGameCount_params *params );

struct cppISteamMatchmaking_SteamMatchMaking002_GetFavoriteGame_params
{
    void *linux_side;
    bool _ret;
    int32_t iGame;
    uint32_t *pnAppID;
    uint32_t *pnIP;
    uint16_t *pnConnPort;
    uint16_t *pnQueryPort;
    uint32_t *punFlags;
    uint32_t *pRTime32LastPlayedOnServer;
};
extern void cppISteamMatchmaking_SteamMatchMaking002_GetFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking002_GetFavoriteGame_params *params );

struct cppISteamMatchmaking_SteamMatchMaking002_AddFavoriteGame_params
{
    void *linux_side;
    int32_t _ret;
    uint32_t nAppID;
    uint32_t nIP;
    uint16_t nConnPort;
    uint16_t nQueryPort;
    uint32_t unFlags;
    uint32_t rTime32LastPlayedOnServer;
};
extern void cppISteamMatchmaking_SteamMatchMaking002_AddFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking002_AddFavoriteGame_params *params );

struct cppISteamMatchmaking_SteamMatchMaking002_RemoveFavoriteGame_params
{
    void *linux_side;
    bool _ret;
    uint32_t nAppID;
    uint32_t nIP;
    uint16_t nConnPort;
    uint16_t nQueryPort;
    uint32_t unFlags;
};
extern void cppISteamMatchmaking_SteamMatchMaking002_RemoveFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking002_RemoveFavoriteGame_params *params );

struct cppISteamMatchmaking_SteamMatchMaking002_RequestLobbyList_params
{
    void *linux_side;
};
extern void cppISteamMatchmaking_SteamMatchMaking002_RequestLobbyList( struct cppISteamMatchmaking_SteamMatchMaking002_RequestLobbyList_params *params );

struct cppISteamMatchmaking_SteamMatchMaking002_GetLobbyByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    int32_t iLobby;
};
extern void cppISteamMatchmaking_SteamMatchMaking002_GetLobbyByIndex( struct cppISteamMatchmaking_SteamMatchMaking002_GetLobbyByIndex_params *params );

struct cppISteamMatchmaking_SteamMatchMaking002_CreateLobby_params
{
    void *linux_side;
    bool bPrivate;
};
extern void cppISteamMatchmaking_SteamMatchMaking002_CreateLobby( struct cppISteamMatchmaking_SteamMatchMaking002_CreateLobby_params *params );

struct cppISteamMatchmaking_SteamMatchMaking002_JoinLobby_params
{
    void *linux_side;
    CSteamID steamIDLobby;
};
extern void cppISteamMatchmaking_SteamMatchMaking002_JoinLobby( struct cppISteamMatchmaking_SteamMatchMaking002_JoinLobby_params *params );

struct cppISteamMatchmaking_SteamMatchMaking002_LeaveLobby_params
{
    void *linux_side;
    CSteamID steamIDLobby;
};
extern void cppISteamMatchmaking_SteamMatchMaking002_LeaveLobby( struct cppISteamMatchmaking_SteamMatchMaking002_LeaveLobby_params *params );

struct cppISteamMatchmaking_SteamMatchMaking002_InviteUserToLobby_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDLobby;
    CSteamID steamIDInvitee;
};
extern void cppISteamMatchmaking_SteamMatchMaking002_InviteUserToLobby( struct cppISteamMatchmaking_SteamMatchMaking002_InviteUserToLobby_params *params );

struct cppISteamMatchmaking_SteamMatchMaking002_GetNumLobbyMembers_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDLobby;
};
extern void cppISteamMatchmaking_SteamMatchMaking002_GetNumLobbyMembers( struct cppISteamMatchmaking_SteamMatchMaking002_GetNumLobbyMembers_params *params );

struct cppISteamMatchmaking_SteamMatchMaking002_GetLobbyMemberByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDLobby;
    int32_t iMember;
};
extern void cppISteamMatchmaking_SteamMatchMaking002_GetLobbyMemberByIndex( struct cppISteamMatchmaking_SteamMatchMaking002_GetLobbyMemberByIndex_params *params );

struct cppISteamMatchmaking_SteamMatchMaking002_GetLobbyData_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDLobby;
    const char *pchKey;
};
extern void cppISteamMatchmaking_SteamMatchMaking002_GetLobbyData( struct cppISteamMatchmaking_SteamMatchMaking002_GetLobbyData_params *params );

struct cppISteamMatchmaking_SteamMatchMaking002_SetLobbyData_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDLobby;
    const char *pchKey;
    const char *pchValue;
};
extern void cppISteamMatchmaking_SteamMatchMaking002_SetLobbyData( struct cppISteamMatchmaking_SteamMatchMaking002_SetLobbyData_params *params );

struct cppISteamMatchmaking_SteamMatchMaking002_GetLobbyMemberData_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDLobby;
    CSteamID steamIDUser;
    const char *pchKey;
};
extern void cppISteamMatchmaking_SteamMatchMaking002_GetLobbyMemberData( struct cppISteamMatchmaking_SteamMatchMaking002_GetLobbyMemberData_params *params );

struct cppISteamMatchmaking_SteamMatchMaking002_SetLobbyMemberData_params
{
    void *linux_side;
    CSteamID steamIDLobby;
    const char *pchKey;
    const char *pchValue;
};
extern void cppISteamMatchmaking_SteamMatchMaking002_SetLobbyMemberData( struct cppISteamMatchmaking_SteamMatchMaking002_SetLobbyMemberData_params *params );

struct cppISteamMatchmaking_SteamMatchMaking002_SendLobbyChatMsg_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDLobby;
    const void *pvMsgBody;
    int32_t cubMsgBody;
};
extern void cppISteamMatchmaking_SteamMatchMaking002_SendLobbyChatMsg( struct cppISteamMatchmaking_SteamMatchMaking002_SendLobbyChatMsg_params *params );

struct cppISteamMatchmaking_SteamMatchMaking002_GetLobbyChatEntry_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDLobby;
    int32_t iChatID;
    CSteamID *pSteamIDUser;
    void *pvData;
    int32_t cubData;
    uint32_t *peChatEntryType;
};
extern void cppISteamMatchmaking_SteamMatchMaking002_GetLobbyChatEntry( struct cppISteamMatchmaking_SteamMatchMaking002_GetLobbyChatEntry_params *params );

struct cppISteamMatchmaking_SteamMatchMaking002_RequestLobbyData_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDLobby;
};
extern void cppISteamMatchmaking_SteamMatchMaking002_RequestLobbyData( struct cppISteamMatchmaking_SteamMatchMaking002_RequestLobbyData_params *params );

struct cppISteamMatchmaking_SteamMatchMaking002_SetLobbyGameServer_params
{
    void *linux_side;
    CSteamID steamIDLobby;
    uint32_t unGameServerIP;
    uint16_t unGameServerPort;
    CSteamID steamIDGameServer;
};
extern void cppISteamMatchmaking_SteamMatchMaking002_SetLobbyGameServer( struct cppISteamMatchmaking_SteamMatchMaking002_SetLobbyGameServer_params *params );

