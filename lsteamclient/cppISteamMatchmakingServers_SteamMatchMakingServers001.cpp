#include "steamclient_private.h"
#include "steam_defs.h"
#include "steamworks_sdk_105/steam_api.h"
#include "cppISteamMatchmakingServers_SteamMatchMakingServers001.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestInternetServerList(void *linux_side, AppId_t iApp, MatchMakingKeyValuePair_t ** ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse * pRequestServersResponse)
{
    MatchMakingKeyValuePair_t ** *lin_ppchFilters = malloc(sizeof(MatchMakingKeyValuePair_t **) * nFilters);
    for(int i = 0; i < nFilters; ++i)
        win_to_lin_struct_MatchMakingKeyValuePair_t **_105(ppchFilters[i], &lin_ppchFilters[i]);
    ISteamMatchmakingServerListResponse lin_pRequestServersResponse;
    win_to_lin_struct_ISteamMatchmakingServerListResponse_105(pRequestServersResponse, &lin_pRequestServersResponse);
    ((ISteamMatchmakingServers*)linux_side)->RequestInternetServerList((AppId_t)iApp, &lin_ppchFilters, (uint32)nFilters, (ISteamMatchmakingServerListResponse *)pRequestServersResponse);
    lin_to_win_struct_MatchMakingKeyValuePair_t *_105(&lin_ppchFilters, ppchFilters);
    lin_to_win_struct_ISteamMatchmakingServerListResponse_105(&lin_pRequestServersResponse, pRequestServersResponse);
}

void cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestLANServerList(void *linux_side, AppId_t iApp, ISteamMatchmakingServerListResponse * pRequestServersResponse)
{
    ISteamMatchmakingServerListResponse lin_pRequestServersResponse;
    win_to_lin_struct_ISteamMatchmakingServerListResponse_105(pRequestServersResponse, &lin_pRequestServersResponse);
    ((ISteamMatchmakingServers*)linux_side)->RequestLANServerList((AppId_t)iApp, (ISteamMatchmakingServerListResponse *)pRequestServersResponse);
    lin_to_win_struct_ISteamMatchmakingServerListResponse_105(&lin_pRequestServersResponse, pRequestServersResponse);
}

void cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestFriendsServerList(void *linux_side, AppId_t iApp, MatchMakingKeyValuePair_t ** ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse * pRequestServersResponse)
{
    MatchMakingKeyValuePair_t ** *lin_ppchFilters = malloc(sizeof(MatchMakingKeyValuePair_t **) * nFilters);
    for(int i = 0; i < nFilters; ++i)
        win_to_lin_struct_MatchMakingKeyValuePair_t **_105(ppchFilters[i], &lin_ppchFilters[i]);
    ISteamMatchmakingServerListResponse lin_pRequestServersResponse;
    win_to_lin_struct_ISteamMatchmakingServerListResponse_105(pRequestServersResponse, &lin_pRequestServersResponse);
    ((ISteamMatchmakingServers*)linux_side)->RequestFriendsServerList((AppId_t)iApp, &lin_ppchFilters, (uint32)nFilters, (ISteamMatchmakingServerListResponse *)pRequestServersResponse);
    lin_to_win_struct_MatchMakingKeyValuePair_t *_105(&lin_ppchFilters, ppchFilters);
    lin_to_win_struct_ISteamMatchmakingServerListResponse_105(&lin_pRequestServersResponse, pRequestServersResponse);
}

void cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestFavoritesServerList(void *linux_side, AppId_t iApp, MatchMakingKeyValuePair_t ** ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse * pRequestServersResponse)
{
    MatchMakingKeyValuePair_t ** *lin_ppchFilters = malloc(sizeof(MatchMakingKeyValuePair_t **) * nFilters);
    for(int i = 0; i < nFilters; ++i)
        win_to_lin_struct_MatchMakingKeyValuePair_t **_105(ppchFilters[i], &lin_ppchFilters[i]);
    ISteamMatchmakingServerListResponse lin_pRequestServersResponse;
    win_to_lin_struct_ISteamMatchmakingServerListResponse_105(pRequestServersResponse, &lin_pRequestServersResponse);
    ((ISteamMatchmakingServers*)linux_side)->RequestFavoritesServerList((AppId_t)iApp, &lin_ppchFilters, (uint32)nFilters, (ISteamMatchmakingServerListResponse *)pRequestServersResponse);
    lin_to_win_struct_MatchMakingKeyValuePair_t *_105(&lin_ppchFilters, ppchFilters);
    lin_to_win_struct_ISteamMatchmakingServerListResponse_105(&lin_pRequestServersResponse, pRequestServersResponse);
}

void cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestHistoryServerList(void *linux_side, AppId_t iApp, MatchMakingKeyValuePair_t ** ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse * pRequestServersResponse)
{
    MatchMakingKeyValuePair_t ** *lin_ppchFilters = malloc(sizeof(MatchMakingKeyValuePair_t **) * nFilters);
    for(int i = 0; i < nFilters; ++i)
        win_to_lin_struct_MatchMakingKeyValuePair_t **_105(ppchFilters[i], &lin_ppchFilters[i]);
    ISteamMatchmakingServerListResponse lin_pRequestServersResponse;
    win_to_lin_struct_ISteamMatchmakingServerListResponse_105(pRequestServersResponse, &lin_pRequestServersResponse);
    ((ISteamMatchmakingServers*)linux_side)->RequestHistoryServerList((AppId_t)iApp, &lin_ppchFilters, (uint32)nFilters, (ISteamMatchmakingServerListResponse *)pRequestServersResponse);
    lin_to_win_struct_MatchMakingKeyValuePair_t *_105(&lin_ppchFilters, ppchFilters);
    lin_to_win_struct_ISteamMatchmakingServerListResponse_105(&lin_pRequestServersResponse, pRequestServersResponse);
}

void cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestSpectatorServerList(void *linux_side, AppId_t iApp, MatchMakingKeyValuePair_t ** ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse * pRequestServersResponse)
{
    MatchMakingKeyValuePair_t ** *lin_ppchFilters = malloc(sizeof(MatchMakingKeyValuePair_t **) * nFilters);
    for(int i = 0; i < nFilters; ++i)
        win_to_lin_struct_MatchMakingKeyValuePair_t **_105(ppchFilters[i], &lin_ppchFilters[i]);
    ISteamMatchmakingServerListResponse lin_pRequestServersResponse;
    win_to_lin_struct_ISteamMatchmakingServerListResponse_105(pRequestServersResponse, &lin_pRequestServersResponse);
    ((ISteamMatchmakingServers*)linux_side)->RequestSpectatorServerList((AppId_t)iApp, &lin_ppchFilters, (uint32)nFilters, (ISteamMatchmakingServerListResponse *)pRequestServersResponse);
    lin_to_win_struct_MatchMakingKeyValuePair_t *_105(&lin_ppchFilters, ppchFilters);
    lin_to_win_struct_ISteamMatchmakingServerListResponse_105(&lin_pRequestServersResponse, pRequestServersResponse);
}

gameserveritem_t * cppISteamMatchmakingServers_SteamMatchMakingServers001_GetServerDetails(void *linux_side, EMatchMakingType eType, int iServer)
{
    return ((ISteamMatchmakingServers*)linux_side)->GetServerDetails((EMatchMakingType)eType, (int)iServer);
}

void cppISteamMatchmakingServers_SteamMatchMakingServers001_CancelQuery(void *linux_side, EMatchMakingType eType)
{
    ((ISteamMatchmakingServers*)linux_side)->CancelQuery((EMatchMakingType)eType);
}

void cppISteamMatchmakingServers_SteamMatchMakingServers001_RefreshQuery(void *linux_side, EMatchMakingType eType)
{
    ((ISteamMatchmakingServers*)linux_side)->RefreshQuery((EMatchMakingType)eType);
}

bool cppISteamMatchmakingServers_SteamMatchMakingServers001_IsRefreshing(void *linux_side, EMatchMakingType eType)
{
    return ((ISteamMatchmakingServers*)linux_side)->IsRefreshing((EMatchMakingType)eType);
}

int cppISteamMatchmakingServers_SteamMatchMakingServers001_GetServerCount(void *linux_side, EMatchMakingType eType)
{
    return ((ISteamMatchmakingServers*)linux_side)->GetServerCount((EMatchMakingType)eType);
}

void cppISteamMatchmakingServers_SteamMatchMakingServers001_RefreshServer(void *linux_side, EMatchMakingType eType, int iServer)
{
    ((ISteamMatchmakingServers*)linux_side)->RefreshServer((EMatchMakingType)eType, (int)iServer);
}

HServerQuery cppISteamMatchmakingServers_SteamMatchMakingServers001_PingServer(void *linux_side, uint32 unIP, uint16 usPort, ISteamMatchmakingPingResponse * pRequestServersResponse)
{
    ISteamMatchmakingPingResponse lin_pRequestServersResponse;
    win_to_lin_struct_ISteamMatchmakingPingResponse_105(pRequestServersResponse, &lin_pRequestServersResponse);
    HServerQuery retval = ((ISteamMatchmakingServers*)linux_side)->PingServer((uint32)unIP, (uint16)usPort, &lin_pRequestServersResponse);
    lin_to_win_struct_ISteamMatchmakingPingResponse_105(&lin_pRequestServersResponse, pRequestServersResponse);
    return retval;
}

HServerQuery cppISteamMatchmakingServers_SteamMatchMakingServers001_PlayerDetails(void *linux_side, uint32 unIP, uint16 usPort, ISteamMatchmakingPlayersResponse * pRequestServersResponse)
{
    ISteamMatchmakingPlayersResponse lin_pRequestServersResponse;
    win_to_lin_struct_ISteamMatchmakingPlayersResponse_105(pRequestServersResponse, &lin_pRequestServersResponse);
    HServerQuery retval = ((ISteamMatchmakingServers*)linux_side)->PlayerDetails((uint32)unIP, (uint16)usPort, &lin_pRequestServersResponse);
    lin_to_win_struct_ISteamMatchmakingPlayersResponse_105(&lin_pRequestServersResponse, pRequestServersResponse);
    return retval;
}

HServerQuery cppISteamMatchmakingServers_SteamMatchMakingServers001_ServerRules(void *linux_side, uint32 unIP, uint16 usPort, ISteamMatchmakingRulesResponse * pRequestServersResponse)
{
    ISteamMatchmakingRulesResponse lin_pRequestServersResponse;
    win_to_lin_struct_ISteamMatchmakingRulesResponse_105(pRequestServersResponse, &lin_pRequestServersResponse);
    HServerQuery retval = ((ISteamMatchmakingServers*)linux_side)->ServerRules((uint32)unIP, (uint16)usPort, &lin_pRequestServersResponse);
    lin_to_win_struct_ISteamMatchmakingRulesResponse_105(&lin_pRequestServersResponse, pRequestServersResponse);
    return retval;
}

void cppISteamMatchmakingServers_SteamMatchMakingServers001_CancelServerQuery(void *linux_side, HServerQuery hServerQuery)
{
    ((ISteamMatchmakingServers*)linux_side)->CancelServerQuery((HServerQuery)hServerQuery);
}

#ifdef __cplusplus
}
#endif
