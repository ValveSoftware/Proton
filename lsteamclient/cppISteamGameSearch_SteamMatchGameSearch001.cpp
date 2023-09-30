/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamGameSearch_SteamMatchGameSearch001_AddGameSearchParams( void *args )
{
    struct ISteamGameSearch_SteamMatchGameSearch001_AddGameSearchParams_params *params = (struct ISteamGameSearch_SteamMatchGameSearch001_AddGameSearchParams_params *)args;
    struct u_ISteamGameSearch_SteamMatchGameSearch001 *iface = (struct u_ISteamGameSearch_SteamMatchGameSearch001 *)params->linux_side;
    params->_ret = iface->AddGameSearchParams( params->pchKeyToFind, params->pchValuesToFind );
    return 0;
}

NTSTATUS ISteamGameSearch_SteamMatchGameSearch001_SearchForGameWithLobby( void *args )
{
    struct ISteamGameSearch_SteamMatchGameSearch001_SearchForGameWithLobby_params *params = (struct ISteamGameSearch_SteamMatchGameSearch001_SearchForGameWithLobby_params *)args;
    struct u_ISteamGameSearch_SteamMatchGameSearch001 *iface = (struct u_ISteamGameSearch_SteamMatchGameSearch001 *)params->linux_side;
    params->_ret = iface->SearchForGameWithLobby( params->steamIDLobby, params->nPlayerMin, params->nPlayerMax );
    return 0;
}

NTSTATUS ISteamGameSearch_SteamMatchGameSearch001_SearchForGameSolo( void *args )
{
    struct ISteamGameSearch_SteamMatchGameSearch001_SearchForGameSolo_params *params = (struct ISteamGameSearch_SteamMatchGameSearch001_SearchForGameSolo_params *)args;
    struct u_ISteamGameSearch_SteamMatchGameSearch001 *iface = (struct u_ISteamGameSearch_SteamMatchGameSearch001 *)params->linux_side;
    params->_ret = iface->SearchForGameSolo( params->nPlayerMin, params->nPlayerMax );
    return 0;
}

NTSTATUS ISteamGameSearch_SteamMatchGameSearch001_AcceptGame( void *args )
{
    struct ISteamGameSearch_SteamMatchGameSearch001_AcceptGame_params *params = (struct ISteamGameSearch_SteamMatchGameSearch001_AcceptGame_params *)args;
    struct u_ISteamGameSearch_SteamMatchGameSearch001 *iface = (struct u_ISteamGameSearch_SteamMatchGameSearch001 *)params->linux_side;
    params->_ret = iface->AcceptGame(  );
    return 0;
}

NTSTATUS ISteamGameSearch_SteamMatchGameSearch001_DeclineGame( void *args )
{
    struct ISteamGameSearch_SteamMatchGameSearch001_DeclineGame_params *params = (struct ISteamGameSearch_SteamMatchGameSearch001_DeclineGame_params *)args;
    struct u_ISteamGameSearch_SteamMatchGameSearch001 *iface = (struct u_ISteamGameSearch_SteamMatchGameSearch001 *)params->linux_side;
    params->_ret = iface->DeclineGame(  );
    return 0;
}

NTSTATUS ISteamGameSearch_SteamMatchGameSearch001_RetrieveConnectionDetails( void *args )
{
    struct ISteamGameSearch_SteamMatchGameSearch001_RetrieveConnectionDetails_params *params = (struct ISteamGameSearch_SteamMatchGameSearch001_RetrieveConnectionDetails_params *)args;
    struct u_ISteamGameSearch_SteamMatchGameSearch001 *iface = (struct u_ISteamGameSearch_SteamMatchGameSearch001 *)params->linux_side;
    params->_ret = iface->RetrieveConnectionDetails( params->steamIDHost, params->pchConnectionDetails, params->cubConnectionDetails );
    return 0;
}

NTSTATUS ISteamGameSearch_SteamMatchGameSearch001_EndGameSearch( void *args )
{
    struct ISteamGameSearch_SteamMatchGameSearch001_EndGameSearch_params *params = (struct ISteamGameSearch_SteamMatchGameSearch001_EndGameSearch_params *)args;
    struct u_ISteamGameSearch_SteamMatchGameSearch001 *iface = (struct u_ISteamGameSearch_SteamMatchGameSearch001 *)params->linux_side;
    params->_ret = iface->EndGameSearch(  );
    return 0;
}

NTSTATUS ISteamGameSearch_SteamMatchGameSearch001_SetGameHostParams( void *args )
{
    struct ISteamGameSearch_SteamMatchGameSearch001_SetGameHostParams_params *params = (struct ISteamGameSearch_SteamMatchGameSearch001_SetGameHostParams_params *)args;
    struct u_ISteamGameSearch_SteamMatchGameSearch001 *iface = (struct u_ISteamGameSearch_SteamMatchGameSearch001 *)params->linux_side;
    params->_ret = iface->SetGameHostParams( params->pchKey, params->pchValue );
    return 0;
}

NTSTATUS ISteamGameSearch_SteamMatchGameSearch001_SetConnectionDetails( void *args )
{
    struct ISteamGameSearch_SteamMatchGameSearch001_SetConnectionDetails_params *params = (struct ISteamGameSearch_SteamMatchGameSearch001_SetConnectionDetails_params *)args;
    struct u_ISteamGameSearch_SteamMatchGameSearch001 *iface = (struct u_ISteamGameSearch_SteamMatchGameSearch001 *)params->linux_side;
    params->_ret = iface->SetConnectionDetails( params->pchConnectionDetails, params->cubConnectionDetails );
    return 0;
}

NTSTATUS ISteamGameSearch_SteamMatchGameSearch001_RequestPlayersForGame( void *args )
{
    struct ISteamGameSearch_SteamMatchGameSearch001_RequestPlayersForGame_params *params = (struct ISteamGameSearch_SteamMatchGameSearch001_RequestPlayersForGame_params *)args;
    struct u_ISteamGameSearch_SteamMatchGameSearch001 *iface = (struct u_ISteamGameSearch_SteamMatchGameSearch001 *)params->linux_side;
    params->_ret = iface->RequestPlayersForGame( params->nPlayerMin, params->nPlayerMax, params->nMaxTeamSize );
    return 0;
}

NTSTATUS ISteamGameSearch_SteamMatchGameSearch001_HostConfirmGameStart( void *args )
{
    struct ISteamGameSearch_SteamMatchGameSearch001_HostConfirmGameStart_params *params = (struct ISteamGameSearch_SteamMatchGameSearch001_HostConfirmGameStart_params *)args;
    struct u_ISteamGameSearch_SteamMatchGameSearch001 *iface = (struct u_ISteamGameSearch_SteamMatchGameSearch001 *)params->linux_side;
    params->_ret = iface->HostConfirmGameStart( params->ullUniqueGameID );
    return 0;
}

NTSTATUS ISteamGameSearch_SteamMatchGameSearch001_CancelRequestPlayersForGame( void *args )
{
    struct ISteamGameSearch_SteamMatchGameSearch001_CancelRequestPlayersForGame_params *params = (struct ISteamGameSearch_SteamMatchGameSearch001_CancelRequestPlayersForGame_params *)args;
    struct u_ISteamGameSearch_SteamMatchGameSearch001 *iface = (struct u_ISteamGameSearch_SteamMatchGameSearch001 *)params->linux_side;
    params->_ret = iface->CancelRequestPlayersForGame(  );
    return 0;
}

NTSTATUS ISteamGameSearch_SteamMatchGameSearch001_SubmitPlayerResult( void *args )
{
    struct ISteamGameSearch_SteamMatchGameSearch001_SubmitPlayerResult_params *params = (struct ISteamGameSearch_SteamMatchGameSearch001_SubmitPlayerResult_params *)args;
    struct u_ISteamGameSearch_SteamMatchGameSearch001 *iface = (struct u_ISteamGameSearch_SteamMatchGameSearch001 *)params->linux_side;
    params->_ret = iface->SubmitPlayerResult( params->ullUniqueGameID, params->steamIDPlayer, params->EPlayerResult );
    return 0;
}

NTSTATUS ISteamGameSearch_SteamMatchGameSearch001_EndGame( void *args )
{
    struct ISteamGameSearch_SteamMatchGameSearch001_EndGame_params *params = (struct ISteamGameSearch_SteamMatchGameSearch001_EndGame_params *)args;
    struct u_ISteamGameSearch_SteamMatchGameSearch001 *iface = (struct u_ISteamGameSearch_SteamMatchGameSearch001 *)params->linux_side;
    params->_ret = iface->EndGame( params->ullUniqueGameID );
    return 0;
}

