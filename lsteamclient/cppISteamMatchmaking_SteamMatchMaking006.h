struct cppISteamMatchmaking_SteamMatchMaking006_GetFavoriteGameCount_params
{
    void *linux_side;
    int _ret;
};
extern void cppISteamMatchmaking_SteamMatchMaking006_GetFavoriteGameCount( struct cppISteamMatchmaking_SteamMatchMaking006_GetFavoriteGameCount_params *params );

struct cppISteamMatchmaking_SteamMatchMaking006_GetFavoriteGame_params
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
extern void cppISteamMatchmaking_SteamMatchMaking006_GetFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking006_GetFavoriteGame_params *params );

struct cppISteamMatchmaking_SteamMatchMaking006_AddFavoriteGame_params
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
extern void cppISteamMatchmaking_SteamMatchMaking006_AddFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking006_AddFavoriteGame_params *params );

struct cppISteamMatchmaking_SteamMatchMaking006_RemoveFavoriteGame_params
{
    void *linux_side;
    bool _ret;
    AppId_t nAppID;
    uint32 nIP;
    uint16 nConnPort;
    uint16 nQueryPort;
    uint32 unFlags;
};
extern void cppISteamMatchmaking_SteamMatchMaking006_RemoveFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking006_RemoveFavoriteGame_params *params );

struct cppISteamMatchmaking_SteamMatchMaking006_RequestLobbyList_params
{
    void *linux_side;
    SteamAPICall_t _ret;
};
extern void cppISteamMatchmaking_SteamMatchMaking006_RequestLobbyList( struct cppISteamMatchmaking_SteamMatchMaking006_RequestLobbyList_params *params );

struct cppISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListFilter_params
{
    void *linux_side;
    const char *pchKeyToMatch;
    const char *pchValueToMatch;
};
extern void cppISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListFilter( struct cppISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListFilter_params *params );

struct cppISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListNumericalFilter_params
{
    void *linux_side;
    const char *pchKeyToMatch;
    int nValueToMatch;
    int nComparisonType;
};
extern void cppISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListNumericalFilter( struct cppISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListNumericalFilter_params *params );

struct cppISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListNearValueFilter_params
{
    void *linux_side;
    const char *pchKeyToMatch;
    int nValueToBeCloseTo;
};
extern void cppISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListNearValueFilter( struct cppISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListNearValueFilter_params *params );

struct cppISteamMatchmaking_SteamMatchMaking006_GetLobbyByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    int iLobby;
};
extern void cppISteamMatchmaking_SteamMatchMaking006_GetLobbyByIndex( struct cppISteamMatchmaking_SteamMatchMaking006_GetLobbyByIndex_params *params );

struct cppISteamMatchmaking_SteamMatchMaking006_CreateLobby_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    ELobbyType eLobbyType;
};
extern void cppISteamMatchmaking_SteamMatchMaking006_CreateLobby( struct cppISteamMatchmaking_SteamMatchMaking006_CreateLobby_params *params );

struct cppISteamMatchmaking_SteamMatchMaking006_JoinLobby_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    CSteamID steamIDLobby;
};
extern void cppISteamMatchmaking_SteamMatchMaking006_JoinLobby( struct cppISteamMatchmaking_SteamMatchMaking006_JoinLobby_params *params );

struct cppISteamMatchmaking_SteamMatchMaking006_LeaveLobby_params
{
    void *linux_side;
    CSteamID steamIDLobby;
};
extern void cppISteamMatchmaking_SteamMatchMaking006_LeaveLobby( struct cppISteamMatchmaking_SteamMatchMaking006_LeaveLobby_params *params );

struct cppISteamMatchmaking_SteamMatchMaking006_InviteUserToLobby_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDLobby;
    CSteamID steamIDInvitee;
};
extern void cppISteamMatchmaking_SteamMatchMaking006_InviteUserToLobby( struct cppISteamMatchmaking_SteamMatchMaking006_InviteUserToLobby_params *params );

struct cppISteamMatchmaking_SteamMatchMaking006_GetNumLobbyMembers_params
{
    void *linux_side;
    int _ret;
    CSteamID steamIDLobby;
};
extern void cppISteamMatchmaking_SteamMatchMaking006_GetNumLobbyMembers( struct cppISteamMatchmaking_SteamMatchMaking006_GetNumLobbyMembers_params *params );

struct cppISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDLobby;
    int iMember;
};
extern void cppISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberByIndex( struct cppISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberByIndex_params *params );

struct cppISteamMatchmaking_SteamMatchMaking006_GetLobbyData_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDLobby;
    const char *pchKey;
};
extern void cppISteamMatchmaking_SteamMatchMaking006_GetLobbyData( struct cppISteamMatchmaking_SteamMatchMaking006_GetLobbyData_params *params );

struct cppISteamMatchmaking_SteamMatchMaking006_SetLobbyData_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDLobby;
    const char *pchKey;
    const char *pchValue;
};
extern void cppISteamMatchmaking_SteamMatchMaking006_SetLobbyData( struct cppISteamMatchmaking_SteamMatchMaking006_SetLobbyData_params *params );

struct cppISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberData_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDLobby;
    CSteamID steamIDUser;
    const char *pchKey;
};
extern void cppISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberData( struct cppISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberData_params *params );

struct cppISteamMatchmaking_SteamMatchMaking006_SetLobbyMemberData_params
{
    void *linux_side;
    CSteamID steamIDLobby;
    const char *pchKey;
    const char *pchValue;
};
extern void cppISteamMatchmaking_SteamMatchMaking006_SetLobbyMemberData( struct cppISteamMatchmaking_SteamMatchMaking006_SetLobbyMemberData_params *params );

struct cppISteamMatchmaking_SteamMatchMaking006_SendLobbyChatMsg_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDLobby;
    const void *pvMsgBody;
    int cubMsgBody;
};
extern void cppISteamMatchmaking_SteamMatchMaking006_SendLobbyChatMsg( struct cppISteamMatchmaking_SteamMatchMaking006_SendLobbyChatMsg_params *params );

struct cppISteamMatchmaking_SteamMatchMaking006_GetLobbyChatEntry_params
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
extern void cppISteamMatchmaking_SteamMatchMaking006_GetLobbyChatEntry( struct cppISteamMatchmaking_SteamMatchMaking006_GetLobbyChatEntry_params *params );

struct cppISteamMatchmaking_SteamMatchMaking006_RequestLobbyData_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDLobby;
};
extern void cppISteamMatchmaking_SteamMatchMaking006_RequestLobbyData( struct cppISteamMatchmaking_SteamMatchMaking006_RequestLobbyData_params *params );

struct cppISteamMatchmaking_SteamMatchMaking006_SetLobbyGameServer_params
{
    void *linux_side;
    CSteamID steamIDLobby;
    uint32 unGameServerIP;
    uint16 unGameServerPort;
    CSteamID steamIDGameServer;
};
extern void cppISteamMatchmaking_SteamMatchMaking006_SetLobbyGameServer( struct cppISteamMatchmaking_SteamMatchMaking006_SetLobbyGameServer_params *params );

struct cppISteamMatchmaking_SteamMatchMaking006_GetLobbyGameServer_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDLobby;
    uint32 *punGameServerIP;
    uint16 *punGameServerPort;
    CSteamID *psteamIDGameServer;
};
extern void cppISteamMatchmaking_SteamMatchMaking006_GetLobbyGameServer( struct cppISteamMatchmaking_SteamMatchMaking006_GetLobbyGameServer_params *params );

struct cppISteamMatchmaking_SteamMatchMaking006_SetLobbyMemberLimit_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDLobby;
    int cMaxMembers;
};
extern void cppISteamMatchmaking_SteamMatchMaking006_SetLobbyMemberLimit( struct cppISteamMatchmaking_SteamMatchMaking006_SetLobbyMemberLimit_params *params );

struct cppISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberLimit_params
{
    void *linux_side;
    int _ret;
    CSteamID steamIDLobby;
};
extern void cppISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberLimit( struct cppISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberLimit_params *params );

struct cppISteamMatchmaking_SteamMatchMaking006_SetLobbyType_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDLobby;
    ELobbyType eLobbyType;
};
extern void cppISteamMatchmaking_SteamMatchMaking006_SetLobbyType( struct cppISteamMatchmaking_SteamMatchMaking006_SetLobbyType_params *params );

struct cppISteamMatchmaking_SteamMatchMaking006_GetLobbyOwner_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDLobby;
};
extern void cppISteamMatchmaking_SteamMatchMaking006_GetLobbyOwner( struct cppISteamMatchmaking_SteamMatchMaking006_GetLobbyOwner_params *params );

