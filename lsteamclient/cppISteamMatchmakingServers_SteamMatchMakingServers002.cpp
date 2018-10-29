#include "steamclient_private.h"
#include "steam_defs.h"
#include "steamworks_sdk_142/steam_api.h"
#include "cppISteamMatchmakingServers_SteamMatchMakingServers002.h"
#ifdef __cplusplus
extern "C" {
#endif
HServerListRequest cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestInternetServerList(void *linux_side, AppId_t iApp, MatchMakingKeyValuePair_t ** ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse * pRequestServersResponse)
{
    MatchMakingKeyValuePair_t ** *lin_ppchFilters = malloc(sizeof(MatchMakingKeyValuePair_t **) * nFilters);
    for(int i = 0; i < nFilters; ++i)
        win_to_lin_struct_MatchMakingKeyValuePair_t **_142(ppchFilters[i], &lin_ppchFilters[i]);
    ISteamMatchmakingServerListResponse lin_pRequestServersResponse;
    win_to_lin_struct_ISteamMatchmakingServerListResponse_142(pRequestServersResponse, &lin_pRequestServersResponse);
    HServerListRequest retval = ((ISteamMatchmakingServers*)linux_side)->RequestInternetServerList((AppId_t)iApp, &lin_ppchFilters, (uint32)nFilters, (ISteamMatchmakingServerListResponse *)pRequestServersResponse);
    lin_to_win_struct_MatchMakingKeyValuePair_t *_142(&lin_ppchFilters, ppchFilters);
    lin_to_win_struct_ISteamMatchmakingServerListResponse_142(&lin_pRequestServersResponse, pRequestServersResponse);
    return retval;
}

HServerListRequest cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestLANServerList(void *linux_side, AppId_t iApp, ISteamMatchmakingServerListResponse * pRequestServersResponse)
{
    ISteamMatchmakingServerListResponse lin_pRequestServersResponse;
    win_to_lin_struct_ISteamMatchmakingServerListResponse_142(pRequestServersResponse, &lin_pRequestServersResponse);
    HServerListRequest retval = ((ISteamMatchmakingServers*)linux_side)->RequestLANServerList((AppId_t)iApp, (ISteamMatchmakingServerListResponse *)pRequestServersResponse);
    lin_to_win_struct_ISteamMatchmakingServerListResponse_142(&lin_pRequestServersResponse, pRequestServersResponse);
    return retval;
}

HServerListRequest cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestFriendsServerList(void *linux_side, AppId_t iApp, MatchMakingKeyValuePair_t ** ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse * pRequestServersResponse)
{
    MatchMakingKeyValuePair_t ** *lin_ppchFilters = malloc(sizeof(MatchMakingKeyValuePair_t **) * nFilters);
    for(int i = 0; i < nFilters; ++i)
        win_to_lin_struct_MatchMakingKeyValuePair_t **_142(ppchFilters[i], &lin_ppchFilters[i]);
    ISteamMatchmakingServerListResponse lin_pRequestServersResponse;
    win_to_lin_struct_ISteamMatchmakingServerListResponse_142(pRequestServersResponse, &lin_pRequestServersResponse);
    HServerListRequest retval = ((ISteamMatchmakingServers*)linux_side)->RequestFriendsServerList((AppId_t)iApp, &lin_ppchFilters, (uint32)nFilters, (ISteamMatchmakingServerListResponse *)pRequestServersResponse);
    lin_to_win_struct_MatchMakingKeyValuePair_t *_142(&lin_ppchFilters, ppchFilters);
    lin_to_win_struct_ISteamMatchmakingServerListResponse_142(&lin_pRequestServersResponse, pRequestServersResponse);
    return retval;
}

HServerListRequest cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestFavoritesServerList(void *linux_side, AppId_t iApp, MatchMakingKeyValuePair_t ** ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse * pRequestServersResponse)
{
    MatchMakingKeyValuePair_t ** *lin_ppchFilters = malloc(sizeof(MatchMakingKeyValuePair_t **) * nFilters);
    for(int i = 0; i < nFilters; ++i)
        win_to_lin_struct_MatchMakingKeyValuePair_t **_142(ppchFilters[i], &lin_ppchFilters[i]);
    ISteamMatchmakingServerListResponse lin_pRequestServersResponse;
    win_to_lin_struct_ISteamMatchmakingServerListResponse_142(pRequestServersResponse, &lin_pRequestServersResponse);
    HServerListRequest retval = ((ISteamMatchmakingServers*)linux_side)->RequestFavoritesServerList((AppId_t)iApp, &lin_ppchFilters, (uint32)nFilters, (ISteamMatchmakingServerListResponse *)pRequestServersResponse);
    lin_to_win_struct_MatchMakingKeyValuePair_t *_142(&lin_ppchFilters, ppchFilters);
    lin_to_win_struct_ISteamMatchmakingServerListResponse_142(&lin_pRequestServersResponse, pRequestServersResponse);
    return retval;
}

HServerListRequest cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestHistoryServerList(void *linux_side, AppId_t iApp, MatchMakingKeyValuePair_t ** ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse * pRequestServersResponse)
{
    MatchMakingKeyValuePair_t ** *lin_ppchFilters = malloc(sizeof(MatchMakingKeyValuePair_t **) * nFilters);
    for(int i = 0; i < nFilters; ++i)
        win_to_lin_struct_MatchMakingKeyValuePair_t **_142(ppchFilters[i], &lin_ppchFilters[i]);
    ISteamMatchmakingServerListResponse lin_pRequestServersResponse;
    win_to_lin_struct_ISteamMatchmakingServerListResponse_142(pRequestServersResponse, &lin_pRequestServersResponse);
    HServerListRequest retval = ((ISteamMatchmakingServers*)linux_side)->RequestHistoryServerList((AppId_t)iApp, &lin_ppchFilters, (uint32)nFilters, (ISteamMatchmakingServerListResponse *)pRequestServersResponse);
    lin_to_win_struct_MatchMakingKeyValuePair_t *_142(&lin_ppchFilters, ppchFilters);
    lin_to_win_struct_ISteamMatchmakingServerListResponse_142(&lin_pRequestServersResponse, pRequestServersResponse);
    return retval;
}

HServerListRequest cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestSpectatorServerList(void *linux_side, AppId_t iApp, MatchMakingKeyValuePair_t ** ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse * pRequestServersResponse)
{
    MatchMakingKeyValuePair_t ** *lin_ppchFilters = malloc(sizeof(MatchMakingKeyValuePair_t **) * nFilters);
    for(int i = 0; i < nFilters; ++i)
        win_to_lin_struct_MatchMakingKeyValuePair_t **_142(ppchFilters[i], &lin_ppchFilters[i]);
    ISteamMatchmakingServerListResponse lin_pRequestServersResponse;
    win_to_lin_struct_ISteamMatchmakingServerListResponse_142(pRequestServersResponse, &lin_pRequestServersResponse);
    HServerListRequest retval = ((ISteamMatchmakingServers*)linux_side)->RequestSpectatorServerList((AppId_t)iApp, &lin_ppchFilters, (uint32)nFilters, (ISteamMatchmakingServerListResponse *)pRequestServersResponse);
    lin_to_win_struct_MatchMakingKeyValuePair_t *_142(&lin_ppchFilters, ppchFilters);
    lin_to_win_struct_ISteamMatchmakingServerListResponse_142(&lin_pRequestServersResponse, pRequestServersResponse);
    return retval;
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_ReleaseRequest(void *linux_side, HServerListRequest hServerListRequest)
{
    ((ISteamMatchmakingServers*)linux_side)->ReleaseRequest((HServerListRequest)hServerListRequest);
}

gameserveritem_t * cppISteamMatchmakingServers_SteamMatchMakingServers002_GetServerDetails(void *linux_side, HServerListRequest hRequest, int iServer)
{
    return ((ISteamMatchmakingServers*)linux_side)->GetServerDetails((HServerListRequest)hRequest, (int)iServer);
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_CancelQuery(void *linux_side, HServerListRequest hRequest)
{
    ((ISteamMatchmakingServers*)linux_side)->CancelQuery((HServerListRequest)hRequest);
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_RefreshQuery(void *linux_side, HServerListRequest hRequest)
{
    ((ISteamMatchmakingServers*)linux_side)->RefreshQuery((HServerListRequest)hRequest);
}

bool cppISteamMatchmakingServers_SteamMatchMakingServers002_IsRefreshing(void *linux_side, HServerListRequest hRequest)
{
    return ((ISteamMatchmakingServers*)linux_side)->IsRefreshing((HServerListRequest)hRequest);
}

int cppISteamMatchmakingServers_SteamMatchMakingServers002_GetServerCount(void *linux_side, HServerListRequest hRequest)
{
    return ((ISteamMatchmakingServers*)linux_side)->GetServerCount((HServerListRequest)hRequest);
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_RefreshServer(void *linux_side, HServerListRequest hRequest, int iServer)
{
    ((ISteamMatchmakingServers*)linux_side)->RefreshServer((HServerListRequest)hRequest, (int)iServer);
}

HServerQuery cppISteamMatchmakingServers_SteamMatchMakingServers002_PingServer(void *linux_side, uint32 unIP, uint16 usPort, ISteamMatchmakingPingResponse * pRequestServersResponse)
{
    ISteamMatchmakingPingResponse lin_pRequestServersResponse;
    win_to_lin_struct_ISteamMatchmakingPingResponse_142(pRequestServersResponse, &lin_pRequestServersResponse);
    HServerQuery retval = ((ISteamMatchmakingServers*)linux_side)->PingServer((uint32)unIP, (uint16)usPort, &lin_pRequestServersResponse);
    lin_to_win_struct_ISteamMatchmakingPingResponse_142(&lin_pRequestServersResponse, pRequestServersResponse);
    return retval;
}

HServerQuery cppISteamMatchmakingServers_SteamMatchMakingServers002_PlayerDetails(void *linux_side, uint32 unIP, uint16 usPort, ISteamMatchmakingPlayersResponse * pRequestServersResponse)
{
    ISteamMatchmakingPlayersResponse lin_pRequestServersResponse;
    win_to_lin_struct_ISteamMatchmakingPlayersResponse_142(pRequestServersResponse, &lin_pRequestServersResponse);
    HServerQuery retval = ((ISteamMatchmakingServers*)linux_side)->PlayerDetails((uint32)unIP, (uint16)usPort, &lin_pRequestServersResponse);
    lin_to_win_struct_ISteamMatchmakingPlayersResponse_142(&lin_pRequestServersResponse, pRequestServersResponse);
    return retval;
}

HServerQuery cppISteamMatchmakingServers_SteamMatchMakingServers002_ServerRules(void *linux_side, uint32 unIP, uint16 usPort, ISteamMatchmakingRulesResponse * pRequestServersResponse)
{
    ISteamMatchmakingRulesResponse lin_pRequestServersResponse;
    win_to_lin_struct_ISteamMatchmakingRulesResponse_142(pRequestServersResponse, &lin_pRequestServersResponse);
    HServerQuery retval = ((ISteamMatchmakingServers*)linux_side)->ServerRules((uint32)unIP, (uint16)usPort, &lin_pRequestServersResponse);
    lin_to_win_struct_ISteamMatchmakingRulesResponse_142(&lin_pRequestServersResponse, pRequestServersResponse);
    return retval;
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_CancelServerQuery(void *linux_side, HServerQuery hServerQuery)
{
    ((ISteamMatchmakingServers*)linux_side)->CancelServerQuery((HServerQuery)hServerQuery);
}

#ifdef __cplusplus
}
#endif
