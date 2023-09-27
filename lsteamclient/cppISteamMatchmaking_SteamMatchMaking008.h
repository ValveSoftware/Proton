struct cppISteamMatchmaking_SteamMatchMaking008_GetFavoriteGameCount_params
{
    void *linux_side;
    int _ret;
};
extern void cppISteamMatchmaking_SteamMatchMaking008_GetFavoriteGameCount( struct cppISteamMatchmaking_SteamMatchMaking008_GetFavoriteGameCount_params *params );

struct cppISteamMatchmaking_SteamMatchMaking008_GetFavoriteGame_params
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
extern void cppISteamMatchmaking_SteamMatchMaking008_GetFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking008_GetFavoriteGame_params *params );

struct cppISteamMatchmaking_SteamMatchMaking008_AddFavoriteGame_params
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
extern void cppISteamMatchmaking_SteamMatchMaking008_AddFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking008_AddFavoriteGame_params *params );

struct cppISteamMatchmaking_SteamMatchMaking008_RemoveFavoriteGame_params
{
    void *linux_side;
    bool _ret;
    AppId_t nAppID;
    uint32 nIP;
    uint16 nConnPort;
    uint16 nQueryPort;
    uint32 unFlags;
};
extern void cppISteamMatchmaking_SteamMatchMaking008_RemoveFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking008_RemoveFavoriteGame_params *params );

struct cppISteamMatchmaking_SteamMatchMaking008_RequestLobbyList_params
{
    void *linux_side;
    SteamAPICall_t _ret;
};
extern void cppISteamMatchmaking_SteamMatchMaking008_RequestLobbyList( struct cppISteamMatchmaking_SteamMatchMaking008_RequestLobbyList_params *params );

struct cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListStringFilter_params
{
    void *linux_side;
    const char *pchKeyToMatch;
    const char *pchValueToMatch;
    ELobbyComparison eComparisonType;
};
extern void cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListStringFilter( struct cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListStringFilter_params *params );

struct cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListNumericalFilter_params
{
    void *linux_side;
    const char *pchKeyToMatch;
    int nValueToMatch;
    ELobbyComparison eComparisonType;
};
extern void cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListNumericalFilter( struct cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListNumericalFilter_params *params );

struct cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListNearValueFilter_params
{
    void *linux_side;
    const char *pchKeyToMatch;
    int nValueToBeCloseTo;
};
extern void cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListNearValueFilter( struct cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListNearValueFilter_params *params );

struct cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListFilterSlotsAvailable_params
{
    void *linux_side;
    int nSlotsAvailable;
};
extern void cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListFilterSlotsAvailable( struct cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListFilterSlotsAvailable_params *params );

struct cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListDistanceFilter_params
{
    void *linux_side;
    ELobbyDistanceFilter eLobbyDistanceFilter;
};
extern void cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListDistanceFilter( struct cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListDistanceFilter_params *params );

struct cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListResultCountFilter_params
{
    void *linux_side;
    int cMaxResults;
};
extern void cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListResultCountFilter( struct cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListResultCountFilter_params *params );

struct cppISteamMatchmaking_SteamMatchMaking008_GetLobbyByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    int iLobby;
};
extern void cppISteamMatchmaking_SteamMatchMaking008_GetLobbyByIndex( struct cppISteamMatchmaking_SteamMatchMaking008_GetLobbyByIndex_params *params );

struct cppISteamMatchmaking_SteamMatchMaking008_CreateLobby_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    ELobbyType eLobbyType;
    int cMaxMembers;
};
extern void cppISteamMatchmaking_SteamMatchMaking008_CreateLobby( struct cppISteamMatchmaking_SteamMatchMaking008_CreateLobby_params *params );

struct cppISteamMatchmaking_SteamMatchMaking008_JoinLobby_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    CSteamID steamIDLobby;
};
extern void cppISteamMatchmaking_SteamMatchMaking008_JoinLobby( struct cppISteamMatchmaking_SteamMatchMaking008_JoinLobby_params *params );

struct cppISteamMatchmaking_SteamMatchMaking008_LeaveLobby_params
{
    void *linux_side;
    CSteamID steamIDLobby;
};
extern void cppISteamMatchmaking_SteamMatchMaking008_LeaveLobby( struct cppISteamMatchmaking_SteamMatchMaking008_LeaveLobby_params *params );

struct cppISteamMatchmaking_SteamMatchMaking008_InviteUserToLobby_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDLobby;
    CSteamID steamIDInvitee;
};
extern void cppISteamMatchmaking_SteamMatchMaking008_InviteUserToLobby( struct cppISteamMatchmaking_SteamMatchMaking008_InviteUserToLobby_params *params );

struct cppISteamMatchmaking_SteamMatchMaking008_GetNumLobbyMembers_params
{
    void *linux_side;
    int _ret;
    CSteamID steamIDLobby;
};
extern void cppISteamMatchmaking_SteamMatchMaking008_GetNumLobbyMembers( struct cppISteamMatchmaking_SteamMatchMaking008_GetNumLobbyMembers_params *params );

struct cppISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDLobby;
    int iMember;
};
extern void cppISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberByIndex( struct cppISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberByIndex_params *params );

struct cppISteamMatchmaking_SteamMatchMaking008_GetLobbyData_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDLobby;
    const char *pchKey;
};
extern void cppISteamMatchmaking_SteamMatchMaking008_GetLobbyData( struct cppISteamMatchmaking_SteamMatchMaking008_GetLobbyData_params *params );

struct cppISteamMatchmaking_SteamMatchMaking008_SetLobbyData_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDLobby;
    const char *pchKey;
    const char *pchValue;
};
extern void cppISteamMatchmaking_SteamMatchMaking008_SetLobbyData( struct cppISteamMatchmaking_SteamMatchMaking008_SetLobbyData_params *params );

struct cppISteamMatchmaking_SteamMatchMaking008_GetLobbyDataCount_params
{
    void *linux_side;
    int _ret;
    CSteamID steamIDLobby;
};
extern void cppISteamMatchmaking_SteamMatchMaking008_GetLobbyDataCount( struct cppISteamMatchmaking_SteamMatchMaking008_GetLobbyDataCount_params *params );

struct cppISteamMatchmaking_SteamMatchMaking008_GetLobbyDataByIndex_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDLobby;
    int iLobbyData;
    char *pchKey;
    int cchKeyBufferSize;
    char *pchValue;
    int cchValueBufferSize;
};
extern void cppISteamMatchmaking_SteamMatchMaking008_GetLobbyDataByIndex( struct cppISteamMatchmaking_SteamMatchMaking008_GetLobbyDataByIndex_params *params );

struct cppISteamMatchmaking_SteamMatchMaking008_DeleteLobbyData_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDLobby;
    const char *pchKey;
};
extern void cppISteamMatchmaking_SteamMatchMaking008_DeleteLobbyData( struct cppISteamMatchmaking_SteamMatchMaking008_DeleteLobbyData_params *params );

struct cppISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberData_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDLobby;
    CSteamID steamIDUser;
    const char *pchKey;
};
extern void cppISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberData( struct cppISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberData_params *params );

struct cppISteamMatchmaking_SteamMatchMaking008_SetLobbyMemberData_params
{
    void *linux_side;
    CSteamID steamIDLobby;
    const char *pchKey;
    const char *pchValue;
};
extern void cppISteamMatchmaking_SteamMatchMaking008_SetLobbyMemberData( struct cppISteamMatchmaking_SteamMatchMaking008_SetLobbyMemberData_params *params );

struct cppISteamMatchmaking_SteamMatchMaking008_SendLobbyChatMsg_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDLobby;
    const void *pvMsgBody;
    int cubMsgBody;
};
extern void cppISteamMatchmaking_SteamMatchMaking008_SendLobbyChatMsg( struct cppISteamMatchmaking_SteamMatchMaking008_SendLobbyChatMsg_params *params );

struct cppISteamMatchmaking_SteamMatchMaking008_GetLobbyChatEntry_params
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
extern void cppISteamMatchmaking_SteamMatchMaking008_GetLobbyChatEntry( struct cppISteamMatchmaking_SteamMatchMaking008_GetLobbyChatEntry_params *params );

struct cppISteamMatchmaking_SteamMatchMaking008_RequestLobbyData_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDLobby;
};
extern void cppISteamMatchmaking_SteamMatchMaking008_RequestLobbyData( struct cppISteamMatchmaking_SteamMatchMaking008_RequestLobbyData_params *params );

struct cppISteamMatchmaking_SteamMatchMaking008_SetLobbyGameServer_params
{
    void *linux_side;
    CSteamID steamIDLobby;
    uint32 unGameServerIP;
    uint16 unGameServerPort;
    CSteamID steamIDGameServer;
};
extern void cppISteamMatchmaking_SteamMatchMaking008_SetLobbyGameServer( struct cppISteamMatchmaking_SteamMatchMaking008_SetLobbyGameServer_params *params );

struct cppISteamMatchmaking_SteamMatchMaking008_GetLobbyGameServer_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDLobby;
    uint32 *punGameServerIP;
    uint16 *punGameServerPort;
    CSteamID *psteamIDGameServer;
};
extern void cppISteamMatchmaking_SteamMatchMaking008_GetLobbyGameServer( struct cppISteamMatchmaking_SteamMatchMaking008_GetLobbyGameServer_params *params );

struct cppISteamMatchmaking_SteamMatchMaking008_SetLobbyMemberLimit_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDLobby;
    int cMaxMembers;
};
extern void cppISteamMatchmaking_SteamMatchMaking008_SetLobbyMemberLimit( struct cppISteamMatchmaking_SteamMatchMaking008_SetLobbyMemberLimit_params *params );

struct cppISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberLimit_params
{
    void *linux_side;
    int _ret;
    CSteamID steamIDLobby;
};
extern void cppISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberLimit( struct cppISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberLimit_params *params );

struct cppISteamMatchmaking_SteamMatchMaking008_SetLobbyType_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDLobby;
    ELobbyType eLobbyType;
};
extern void cppISteamMatchmaking_SteamMatchMaking008_SetLobbyType( struct cppISteamMatchmaking_SteamMatchMaking008_SetLobbyType_params *params );

struct cppISteamMatchmaking_SteamMatchMaking008_SetLobbyJoinable_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDLobby;
    bool bLobbyJoinable;
};
extern void cppISteamMatchmaking_SteamMatchMaking008_SetLobbyJoinable( struct cppISteamMatchmaking_SteamMatchMaking008_SetLobbyJoinable_params *params );

struct cppISteamMatchmaking_SteamMatchMaking008_GetLobbyOwner_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDLobby;
};
extern void cppISteamMatchmaking_SteamMatchMaking008_GetLobbyOwner( struct cppISteamMatchmaking_SteamMatchMaking008_GetLobbyOwner_params *params );

struct cppISteamMatchmaking_SteamMatchMaking008_SetLobbyOwner_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDLobby;
    CSteamID steamIDNewOwner;
};
extern void cppISteamMatchmaking_SteamMatchMaking008_SetLobbyOwner( struct cppISteamMatchmaking_SteamMatchMaking008_SetLobbyOwner_params *params );

