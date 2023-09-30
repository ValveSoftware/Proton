/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamGameSearch_SteamMatchGameSearch001.h"

void cppISteamGameSearch_SteamMatchGameSearch001_AddGameSearchParams( struct cppISteamGameSearch_SteamMatchGameSearch001_AddGameSearchParams_params *params )
{
    struct u_ISteamGameSearch_SteamMatchGameSearch001 *iface = (struct u_ISteamGameSearch_SteamMatchGameSearch001 *)params->linux_side;
    params->_ret = iface->AddGameSearchParams( params->pchKeyToFind, params->pchValuesToFind );
}

void cppISteamGameSearch_SteamMatchGameSearch001_SearchForGameWithLobby( struct cppISteamGameSearch_SteamMatchGameSearch001_SearchForGameWithLobby_params *params )
{
    struct u_ISteamGameSearch_SteamMatchGameSearch001 *iface = (struct u_ISteamGameSearch_SteamMatchGameSearch001 *)params->linux_side;
    params->_ret = iface->SearchForGameWithLobby( params->steamIDLobby, params->nPlayerMin, params->nPlayerMax );
}

void cppISteamGameSearch_SteamMatchGameSearch001_SearchForGameSolo( struct cppISteamGameSearch_SteamMatchGameSearch001_SearchForGameSolo_params *params )
{
    struct u_ISteamGameSearch_SteamMatchGameSearch001 *iface = (struct u_ISteamGameSearch_SteamMatchGameSearch001 *)params->linux_side;
    params->_ret = iface->SearchForGameSolo( params->nPlayerMin, params->nPlayerMax );
}

void cppISteamGameSearch_SteamMatchGameSearch001_AcceptGame( struct cppISteamGameSearch_SteamMatchGameSearch001_AcceptGame_params *params )
{
    struct u_ISteamGameSearch_SteamMatchGameSearch001 *iface = (struct u_ISteamGameSearch_SteamMatchGameSearch001 *)params->linux_side;
    params->_ret = iface->AcceptGame(  );
}

void cppISteamGameSearch_SteamMatchGameSearch001_DeclineGame( struct cppISteamGameSearch_SteamMatchGameSearch001_DeclineGame_params *params )
{
    struct u_ISteamGameSearch_SteamMatchGameSearch001 *iface = (struct u_ISteamGameSearch_SteamMatchGameSearch001 *)params->linux_side;
    params->_ret = iface->DeclineGame(  );
}

void cppISteamGameSearch_SteamMatchGameSearch001_RetrieveConnectionDetails( struct cppISteamGameSearch_SteamMatchGameSearch001_RetrieveConnectionDetails_params *params )
{
    struct u_ISteamGameSearch_SteamMatchGameSearch001 *iface = (struct u_ISteamGameSearch_SteamMatchGameSearch001 *)params->linux_side;
    params->_ret = iface->RetrieveConnectionDetails( params->steamIDHost, params->pchConnectionDetails, params->cubConnectionDetails );
}

void cppISteamGameSearch_SteamMatchGameSearch001_EndGameSearch( struct cppISteamGameSearch_SteamMatchGameSearch001_EndGameSearch_params *params )
{
    struct u_ISteamGameSearch_SteamMatchGameSearch001 *iface = (struct u_ISteamGameSearch_SteamMatchGameSearch001 *)params->linux_side;
    params->_ret = iface->EndGameSearch(  );
}

void cppISteamGameSearch_SteamMatchGameSearch001_SetGameHostParams( struct cppISteamGameSearch_SteamMatchGameSearch001_SetGameHostParams_params *params )
{
    struct u_ISteamGameSearch_SteamMatchGameSearch001 *iface = (struct u_ISteamGameSearch_SteamMatchGameSearch001 *)params->linux_side;
    params->_ret = iface->SetGameHostParams( params->pchKey, params->pchValue );
}

void cppISteamGameSearch_SteamMatchGameSearch001_SetConnectionDetails( struct cppISteamGameSearch_SteamMatchGameSearch001_SetConnectionDetails_params *params )
{
    struct u_ISteamGameSearch_SteamMatchGameSearch001 *iface = (struct u_ISteamGameSearch_SteamMatchGameSearch001 *)params->linux_side;
    params->_ret = iface->SetConnectionDetails( params->pchConnectionDetails, params->cubConnectionDetails );
}

void cppISteamGameSearch_SteamMatchGameSearch001_RequestPlayersForGame( struct cppISteamGameSearch_SteamMatchGameSearch001_RequestPlayersForGame_params *params )
{
    struct u_ISteamGameSearch_SteamMatchGameSearch001 *iface = (struct u_ISteamGameSearch_SteamMatchGameSearch001 *)params->linux_side;
    params->_ret = iface->RequestPlayersForGame( params->nPlayerMin, params->nPlayerMax, params->nMaxTeamSize );
}

void cppISteamGameSearch_SteamMatchGameSearch001_HostConfirmGameStart( struct cppISteamGameSearch_SteamMatchGameSearch001_HostConfirmGameStart_params *params )
{
    struct u_ISteamGameSearch_SteamMatchGameSearch001 *iface = (struct u_ISteamGameSearch_SteamMatchGameSearch001 *)params->linux_side;
    params->_ret = iface->HostConfirmGameStart( params->ullUniqueGameID );
}

void cppISteamGameSearch_SteamMatchGameSearch001_CancelRequestPlayersForGame( struct cppISteamGameSearch_SteamMatchGameSearch001_CancelRequestPlayersForGame_params *params )
{
    struct u_ISteamGameSearch_SteamMatchGameSearch001 *iface = (struct u_ISteamGameSearch_SteamMatchGameSearch001 *)params->linux_side;
    params->_ret = iface->CancelRequestPlayersForGame(  );
}

void cppISteamGameSearch_SteamMatchGameSearch001_SubmitPlayerResult( struct cppISteamGameSearch_SteamMatchGameSearch001_SubmitPlayerResult_params *params )
{
    struct u_ISteamGameSearch_SteamMatchGameSearch001 *iface = (struct u_ISteamGameSearch_SteamMatchGameSearch001 *)params->linux_side;
    params->_ret = iface->SubmitPlayerResult( params->ullUniqueGameID, params->steamIDPlayer, params->EPlayerResult );
}

void cppISteamGameSearch_SteamMatchGameSearch001_EndGame( struct cppISteamGameSearch_SteamMatchGameSearch001_EndGame_params *params )
{
    struct u_ISteamGameSearch_SteamMatchGameSearch001 *iface = (struct u_ISteamGameSearch_SteamMatchGameSearch001 *)params->linux_side;
    params->_ret = iface->EndGame( params->ullUniqueGameID );
}

