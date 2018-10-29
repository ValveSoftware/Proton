#include "steamclient_private.h"
#include "steam_defs.h"
#include "steamworks_sdk_102/steam_api.h"
#include "steamworks_sdk_102/isteamgameserver.h"
extern "C" {
struct winRequestFriendsLobbiesResponse_t_24 {
    uint64 m_ulSteamIDFriend;
    uint64 m_ulSteamIDLobby;
    int m_cResultIndex;
    int m_cResultsTotal;
}  __attribute__ ((ms_struct));
void cb_RequestFriendsLobbiesResponse_t_24(void *l, void *w)
{
    RequestFriendsLobbiesResponse_t *lin = (RequestFriendsLobbiesResponse_t *)l;
    struct winRequestFriendsLobbiesResponse_t_24 *win = (struct winRequestFriendsLobbiesResponse_t_24 *)w;
    win->m_ulSteamIDFriend = lin->m_ulSteamIDFriend;
    win->m_ulSteamIDLobby = lin->m_ulSteamIDLobby;
    win->m_cResultIndex = lin->m_cResultIndex;
    win->m_cResultsTotal = lin->m_cResultsTotal;
}

struct winUserStatsReceived_t_12 {
    uint64 m_nGameID;
    EResult m_eResult;
}  __attribute__ ((ms_struct));
void cb_UserStatsReceived_t_12(void *l, void *w)
{
    UserStatsReceived_t *lin = (UserStatsReceived_t *)l;
    struct winUserStatsReceived_t_12 *win = (struct winUserStatsReceived_t_12 *)w;
    win->m_nGameID = lin->m_nGameID;
    win->m_eResult = lin->m_eResult;
}


}
