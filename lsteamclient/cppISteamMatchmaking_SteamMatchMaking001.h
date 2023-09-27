struct cppISteamMatchmaking_SteamMatchMaking001_GetFavoriteGameCount_params
{
    void *linux_side;
    int _ret;
};
extern void cppISteamMatchmaking_SteamMatchMaking001_GetFavoriteGameCount( struct cppISteamMatchmaking_SteamMatchMaking001_GetFavoriteGameCount_params *params );

struct cppISteamMatchmaking_SteamMatchMaking001_GetFavoriteGame_params
{
    void *linux_side;
    bool _ret;
    int iGame;
    uint32 *pnAppID;
    uint32 *pnIP;
    uint16 *pnConnPort;
    uint32 *punFlags;
    uint32 *pRTime32LastPlayedOnServer;
};
extern void cppISteamMatchmaking_SteamMatchMaking001_GetFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking001_GetFavoriteGame_params *params );

struct cppISteamMatchmaking_SteamMatchMaking001_AddFavoriteGame_params
{
    void *linux_side;
    int _ret;
    uint32 nAppID;
    uint32 nIP;
    uint16 nConnPort;
    uint32 unFlags;
    uint32 rTime32LastPlayedOnServer;
};
extern void cppISteamMatchmaking_SteamMatchMaking001_AddFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking001_AddFavoriteGame_params *params );

struct cppISteamMatchmaking_SteamMatchMaking001_RemoveFavoriteGame_params
{
    void *linux_side;
    bool _ret;
    uint32 nAppID;
    uint32 nIP;
    uint16 nConnPort;
    uint32 unFlags;
};
extern void cppISteamMatchmaking_SteamMatchMaking001_RemoveFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking001_RemoveFavoriteGame_params *params );

struct cppISteamMatchmaking_SteamMatchMaking001_GetFavoriteGame2_params
{
    void *linux_side;
    bool _ret;
    int iGame;
    uint32 *pnAppID;
    uint32 *pnIP;
    uint16 *pnConnPort;
    uint16 *pnQueryPort;
    uint32 *punFlags;
    uint32 *pRTime32LastPlayedOnServer;
};
extern void cppISteamMatchmaking_SteamMatchMaking001_GetFavoriteGame2( struct cppISteamMatchmaking_SteamMatchMaking001_GetFavoriteGame2_params *params );

struct cppISteamMatchmaking_SteamMatchMaking001_AddFavoriteGame2_params
{
    void *linux_side;
    int _ret;
    uint32 nAppID;
    uint32 nIP;
    uint16 nConnPort;
    uint16 nQueryPort;
    uint32 unFlags;
    uint32 rTime32LastPlayedOnServer;
};
extern void cppISteamMatchmaking_SteamMatchMaking001_AddFavoriteGame2( struct cppISteamMatchmaking_SteamMatchMaking001_AddFavoriteGame2_params *params );

struct cppISteamMatchmaking_SteamMatchMaking001_RemoveFavoriteGame2_params
{
    void *linux_side;
    bool _ret;
    uint32 nAppID;
    uint32 nIP;
    uint16 nConnPort;
    uint16 nQueryPort;
    uint32 unFlags;
};
extern void cppISteamMatchmaking_SteamMatchMaking001_RemoveFavoriteGame2( struct cppISteamMatchmaking_SteamMatchMaking001_RemoveFavoriteGame2_params *params );

struct cppISteamMatchmaking_SteamMatchMaking001_RequestLobbyList_params
{
    void *linux_side;
    uint64 ulGameID;
    MatchMakingKeyValuePair_t *pFilters;
    uint32 nFilters;
};
extern void cppISteamMatchmaking_SteamMatchMaking001_RequestLobbyList( struct cppISteamMatchmaking_SteamMatchMaking001_RequestLobbyList_params *params );

struct cppISteamMatchmaking_SteamMatchMaking001_GetLobbyByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    int iLobby;
};
extern void cppISteamMatchmaking_SteamMatchMaking001_GetLobbyByIndex( struct cppISteamMatchmaking_SteamMatchMaking001_GetLobbyByIndex_params *params );

struct cppISteamMatchmaking_SteamMatchMaking001_CreateLobby_params
{
    void *linux_side;
    uint64 ulGameID;
    bool bPrivate;
};
extern void cppISteamMatchmaking_SteamMatchMaking001_CreateLobby( struct cppISteamMatchmaking_SteamMatchMaking001_CreateLobby_params *params );

struct cppISteamMatchmaking_SteamMatchMaking001_JoinLobby_params
{
    void *linux_side;
    CSteamID steamIDLobby;
};
extern void cppISteamMatchmaking_SteamMatchMaking001_JoinLobby( struct cppISteamMatchmaking_SteamMatchMaking001_JoinLobby_params *params );

struct cppISteamMatchmaking_SteamMatchMaking001_LeaveLobby_params
{
    void *linux_side;
    CSteamID steamIDLobby;
};
extern void cppISteamMatchmaking_SteamMatchMaking001_LeaveLobby( struct cppISteamMatchmaking_SteamMatchMaking001_LeaveLobby_params *params );

struct cppISteamMatchmaking_SteamMatchMaking001_InviteUserToLobby_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDLobby;
    CSteamID steamIDInvitee;
};
extern void cppISteamMatchmaking_SteamMatchMaking001_InviteUserToLobby( struct cppISteamMatchmaking_SteamMatchMaking001_InviteUserToLobby_params *params );

struct cppISteamMatchmaking_SteamMatchMaking001_GetNumLobbyMembers_params
{
    void *linux_side;
    int _ret;
    CSteamID steamIDLobby;
};
extern void cppISteamMatchmaking_SteamMatchMaking001_GetNumLobbyMembers( struct cppISteamMatchmaking_SteamMatchMaking001_GetNumLobbyMembers_params *params );

struct cppISteamMatchmaking_SteamMatchMaking001_GetLobbyMemberByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDLobby;
    int iMember;
};
extern void cppISteamMatchmaking_SteamMatchMaking001_GetLobbyMemberByIndex( struct cppISteamMatchmaking_SteamMatchMaking001_GetLobbyMemberByIndex_params *params );

struct cppISteamMatchmaking_SteamMatchMaking001_GetLobbyData_params
{
    void *linux_side;
    const char *_ret;
    CSteamID SteamIDLobby;
    const char *pchKey;
};
extern void cppISteamMatchmaking_SteamMatchMaking001_GetLobbyData( struct cppISteamMatchmaking_SteamMatchMaking001_GetLobbyData_params *params );

struct cppISteamMatchmaking_SteamMatchMaking001_SetLobbyData_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDLobby;
    const char *pchKey;
    const char *pchValue;
};
extern void cppISteamMatchmaking_SteamMatchMaking001_SetLobbyData( struct cppISteamMatchmaking_SteamMatchMaking001_SetLobbyData_params *params );

struct cppISteamMatchmaking_SteamMatchMaking001_GetLobbyMemberData_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDLobby;
    CSteamID steamIDUser;
    const char *pchKey;
};
extern void cppISteamMatchmaking_SteamMatchMaking001_GetLobbyMemberData( struct cppISteamMatchmaking_SteamMatchMaking001_GetLobbyMemberData_params *params );

struct cppISteamMatchmaking_SteamMatchMaking001_SetLobbyMemberData_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDLobby;
    const char *pchKey;
    const char *pchValue;
};
extern void cppISteamMatchmaking_SteamMatchMaking001_SetLobbyMemberData( struct cppISteamMatchmaking_SteamMatchMaking001_SetLobbyMemberData_params *params );

struct cppISteamMatchmaking_SteamMatchMaking001_SendLobbyChatMsg_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDLobby;
    const void *pvMsgBody;
    int cubMsgBody;
};
extern void cppISteamMatchmaking_SteamMatchMaking001_SendLobbyChatMsg( struct cppISteamMatchmaking_SteamMatchMaking001_SendLobbyChatMsg_params *params );

struct cppISteamMatchmaking_SteamMatchMaking001_GetLobbyChatEntry_params
{
    void *linux_side;
    int _ret;
    CSteamID steamIDLobby;
    int iChatID;
    CSteamID *pSteamIDUser;
    void *pvData;
    int cubData;
    EChatEntryType *peChatEntryType;
};
extern void cppISteamMatchmaking_SteamMatchMaking001_GetLobbyChatEntry( struct cppISteamMatchmaking_SteamMatchMaking001_GetLobbyChatEntry_params *params );

struct cppISteamMatchmaking_SteamMatchMaking001_RequestLobbyData_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDLobby;
};
extern void cppISteamMatchmaking_SteamMatchMaking001_RequestLobbyData( struct cppISteamMatchmaking_SteamMatchMaking001_RequestLobbyData_params *params );

