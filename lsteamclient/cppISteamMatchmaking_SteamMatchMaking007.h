struct cppISteamMatchmaking_SteamMatchMaking007_GetFavoriteGameCount_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppISteamMatchmaking_SteamMatchMaking007_GetFavoriteGameCount( struct cppISteamMatchmaking_SteamMatchMaking007_GetFavoriteGameCount_params *params );

struct cppISteamMatchmaking_SteamMatchMaking007_GetFavoriteGame_params
{
    void *linux_side;
    bool _ret;
    int32_t iGame;
    AppId_t *pnAppID;
    uint32_t *pnIP;
    uint16_t *pnConnPort;
    uint16_t *pnQueryPort;
    uint32_t *punFlags;
    uint32_t *pRTime32LastPlayedOnServer;
};
extern void cppISteamMatchmaking_SteamMatchMaking007_GetFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking007_GetFavoriteGame_params *params );

struct cppISteamMatchmaking_SteamMatchMaking007_AddFavoriteGame_params
{
    void *linux_side;
    int32_t _ret;
    AppId_t nAppID;
    uint32_t nIP;
    uint16_t nConnPort;
    uint16_t nQueryPort;
    uint32_t unFlags;
    uint32_t rTime32LastPlayedOnServer;
};
extern void cppISteamMatchmaking_SteamMatchMaking007_AddFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking007_AddFavoriteGame_params *params );

struct cppISteamMatchmaking_SteamMatchMaking007_RemoveFavoriteGame_params
{
    void *linux_side;
    bool _ret;
    AppId_t nAppID;
    uint32_t nIP;
    uint16_t nConnPort;
    uint16_t nQueryPort;
    uint32_t unFlags;
};
extern void cppISteamMatchmaking_SteamMatchMaking007_RemoveFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking007_RemoveFavoriteGame_params *params );

struct cppISteamMatchmaking_SteamMatchMaking007_RequestLobbyList_params
{
    void *linux_side;
    SteamAPICall_t _ret;
};
extern void cppISteamMatchmaking_SteamMatchMaking007_RequestLobbyList( struct cppISteamMatchmaking_SteamMatchMaking007_RequestLobbyList_params *params );

struct cppISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListStringFilter_params
{
    void *linux_side;
    const char *pchKeyToMatch;
    const char *pchValueToMatch;
    uint32_t eComparisonType;
};
extern void cppISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListStringFilter( struct cppISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListStringFilter_params *params );

struct cppISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListNumericalFilter_params
{
    void *linux_side;
    const char *pchKeyToMatch;
    int32_t nValueToMatch;
    uint32_t eComparisonType;
};
extern void cppISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListNumericalFilter( struct cppISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListNumericalFilter_params *params );

struct cppISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListNearValueFilter_params
{
    void *linux_side;
    const char *pchKeyToMatch;
    int32_t nValueToBeCloseTo;
};
extern void cppISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListNearValueFilter( struct cppISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListNearValueFilter_params *params );

struct cppISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListFilterSlotsAvailable_params
{
    void *linux_side;
    int32_t nSlotsAvailable;
};
extern void cppISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListFilterSlotsAvailable( struct cppISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListFilterSlotsAvailable_params *params );

struct cppISteamMatchmaking_SteamMatchMaking007_GetLobbyByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    int32_t iLobby;
};
extern void cppISteamMatchmaking_SteamMatchMaking007_GetLobbyByIndex( struct cppISteamMatchmaking_SteamMatchMaking007_GetLobbyByIndex_params *params );

struct cppISteamMatchmaking_SteamMatchMaking007_CreateLobby_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    uint32_t eLobbyType;
    int32_t cMaxMembers;
};
extern void cppISteamMatchmaking_SteamMatchMaking007_CreateLobby( struct cppISteamMatchmaking_SteamMatchMaking007_CreateLobby_params *params );

struct cppISteamMatchmaking_SteamMatchMaking007_JoinLobby_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    CSteamID steamIDLobby;
};
extern void cppISteamMatchmaking_SteamMatchMaking007_JoinLobby( struct cppISteamMatchmaking_SteamMatchMaking007_JoinLobby_params *params );

struct cppISteamMatchmaking_SteamMatchMaking007_LeaveLobby_params
{
    void *linux_side;
    CSteamID steamIDLobby;
};
extern void cppISteamMatchmaking_SteamMatchMaking007_LeaveLobby( struct cppISteamMatchmaking_SteamMatchMaking007_LeaveLobby_params *params );

struct cppISteamMatchmaking_SteamMatchMaking007_InviteUserToLobby_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDLobby;
    CSteamID steamIDInvitee;
};
extern void cppISteamMatchmaking_SteamMatchMaking007_InviteUserToLobby( struct cppISteamMatchmaking_SteamMatchMaking007_InviteUserToLobby_params *params );

struct cppISteamMatchmaking_SteamMatchMaking007_GetNumLobbyMembers_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDLobby;
};
extern void cppISteamMatchmaking_SteamMatchMaking007_GetNumLobbyMembers( struct cppISteamMatchmaking_SteamMatchMaking007_GetNumLobbyMembers_params *params );

struct cppISteamMatchmaking_SteamMatchMaking007_GetLobbyMemberByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDLobby;
    int32_t iMember;
};
extern void cppISteamMatchmaking_SteamMatchMaking007_GetLobbyMemberByIndex( struct cppISteamMatchmaking_SteamMatchMaking007_GetLobbyMemberByIndex_params *params );

struct cppISteamMatchmaking_SteamMatchMaking007_GetLobbyData_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDLobby;
    const char *pchKey;
};
extern void cppISteamMatchmaking_SteamMatchMaking007_GetLobbyData( struct cppISteamMatchmaking_SteamMatchMaking007_GetLobbyData_params *params );

struct cppISteamMatchmaking_SteamMatchMaking007_SetLobbyData_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDLobby;
    const char *pchKey;
    const char *pchValue;
};
extern void cppISteamMatchmaking_SteamMatchMaking007_SetLobbyData( struct cppISteamMatchmaking_SteamMatchMaking007_SetLobbyData_params *params );

struct cppISteamMatchmaking_SteamMatchMaking007_GetLobbyDataCount_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDLobby;
};
extern void cppISteamMatchmaking_SteamMatchMaking007_GetLobbyDataCount( struct cppISteamMatchmaking_SteamMatchMaking007_GetLobbyDataCount_params *params );

struct cppISteamMatchmaking_SteamMatchMaking007_GetLobbyDataByIndex_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDLobby;
    int32_t iLobbyData;
    char *pchKey;
    int32_t cchKeyBufferSize;
    char *pchValue;
    int32_t cchValueBufferSize;
};
extern void cppISteamMatchmaking_SteamMatchMaking007_GetLobbyDataByIndex( struct cppISteamMatchmaking_SteamMatchMaking007_GetLobbyDataByIndex_params *params );

struct cppISteamMatchmaking_SteamMatchMaking007_DeleteLobbyData_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDLobby;
    const char *pchKey;
};
extern void cppISteamMatchmaking_SteamMatchMaking007_DeleteLobbyData( struct cppISteamMatchmaking_SteamMatchMaking007_DeleteLobbyData_params *params );

struct cppISteamMatchmaking_SteamMatchMaking007_GetLobbyMemberData_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDLobby;
    CSteamID steamIDUser;
    const char *pchKey;
};
extern void cppISteamMatchmaking_SteamMatchMaking007_GetLobbyMemberData( struct cppISteamMatchmaking_SteamMatchMaking007_GetLobbyMemberData_params *params );

struct cppISteamMatchmaking_SteamMatchMaking007_SetLobbyMemberData_params
{
    void *linux_side;
    CSteamID steamIDLobby;
    const char *pchKey;
    const char *pchValue;
};
extern void cppISteamMatchmaking_SteamMatchMaking007_SetLobbyMemberData( struct cppISteamMatchmaking_SteamMatchMaking007_SetLobbyMemberData_params *params );

struct cppISteamMatchmaking_SteamMatchMaking007_SendLobbyChatMsg_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDLobby;
    const void *pvMsgBody;
    int32_t cubMsgBody;
};
extern void cppISteamMatchmaking_SteamMatchMaking007_SendLobbyChatMsg( struct cppISteamMatchmaking_SteamMatchMaking007_SendLobbyChatMsg_params *params );

struct cppISteamMatchmaking_SteamMatchMaking007_GetLobbyChatEntry_params
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
extern void cppISteamMatchmaking_SteamMatchMaking007_GetLobbyChatEntry( struct cppISteamMatchmaking_SteamMatchMaking007_GetLobbyChatEntry_params *params );

struct cppISteamMatchmaking_SteamMatchMaking007_RequestLobbyData_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDLobby;
};
extern void cppISteamMatchmaking_SteamMatchMaking007_RequestLobbyData( struct cppISteamMatchmaking_SteamMatchMaking007_RequestLobbyData_params *params );

struct cppISteamMatchmaking_SteamMatchMaking007_SetLobbyGameServer_params
{
    void *linux_side;
    CSteamID steamIDLobby;
    uint32_t unGameServerIP;
    uint16_t unGameServerPort;
    CSteamID steamIDGameServer;
};
extern void cppISteamMatchmaking_SteamMatchMaking007_SetLobbyGameServer( struct cppISteamMatchmaking_SteamMatchMaking007_SetLobbyGameServer_params *params );

struct cppISteamMatchmaking_SteamMatchMaking007_GetLobbyGameServer_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDLobby;
    uint32_t *punGameServerIP;
    uint16_t *punGameServerPort;
    CSteamID *psteamIDGameServer;
};
extern void cppISteamMatchmaking_SteamMatchMaking007_GetLobbyGameServer( struct cppISteamMatchmaking_SteamMatchMaking007_GetLobbyGameServer_params *params );

struct cppISteamMatchmaking_SteamMatchMaking007_SetLobbyMemberLimit_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDLobby;
    int32_t cMaxMembers;
};
extern void cppISteamMatchmaking_SteamMatchMaking007_SetLobbyMemberLimit( struct cppISteamMatchmaking_SteamMatchMaking007_SetLobbyMemberLimit_params *params );

struct cppISteamMatchmaking_SteamMatchMaking007_GetLobbyMemberLimit_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDLobby;
};
extern void cppISteamMatchmaking_SteamMatchMaking007_GetLobbyMemberLimit( struct cppISteamMatchmaking_SteamMatchMaking007_GetLobbyMemberLimit_params *params );

struct cppISteamMatchmaking_SteamMatchMaking007_SetLobbyType_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDLobby;
    uint32_t eLobbyType;
};
extern void cppISteamMatchmaking_SteamMatchMaking007_SetLobbyType( struct cppISteamMatchmaking_SteamMatchMaking007_SetLobbyType_params *params );

struct cppISteamMatchmaking_SteamMatchMaking007_SetLobbyJoinable_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDLobby;
    bool bLobbyJoinable;
};
extern void cppISteamMatchmaking_SteamMatchMaking007_SetLobbyJoinable( struct cppISteamMatchmaking_SteamMatchMaking007_SetLobbyJoinable_params *params );

struct cppISteamMatchmaking_SteamMatchMaking007_GetLobbyOwner_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDLobby;
};
extern void cppISteamMatchmaking_SteamMatchMaking007_GetLobbyOwner( struct cppISteamMatchmaking_SteamMatchMaking007_GetLobbyOwner_params *params );

struct cppISteamMatchmaking_SteamMatchMaking007_SetLobbyOwner_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDLobby;
    CSteamID steamIDNewOwner;
};
extern void cppISteamMatchmaking_SteamMatchMaking007_SetLobbyOwner( struct cppISteamMatchmaking_SteamMatchMaking007_SetLobbyOwner_params *params );

