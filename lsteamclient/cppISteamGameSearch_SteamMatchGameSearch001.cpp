#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_158/steam_api.h"
#include "steamworks_sdk_158/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_158
#include "struct_converters.h"
#include "cppISteamGameSearch_SteamMatchGameSearch001.h"
void cppISteamGameSearch_SteamMatchGameSearch001_AddGameSearchParams( struct cppISteamGameSearch_SteamMatchGameSearch001_AddGameSearchParams_params *params )
{
    params->_ret = ((ISteamGameSearch*)params->linux_side)->AddGameSearchParams( (const char *)params->pchKeyToFind, (const char *)params->pchValuesToFind );
}

void cppISteamGameSearch_SteamMatchGameSearch001_SearchForGameWithLobby( struct cppISteamGameSearch_SteamMatchGameSearch001_SearchForGameWithLobby_params *params )
{
    params->_ret = ((ISteamGameSearch*)params->linux_side)->SearchForGameWithLobby( (CSteamID)params->steamIDLobby, (int)params->nPlayerMin, (int)params->nPlayerMax );
}

void cppISteamGameSearch_SteamMatchGameSearch001_SearchForGameSolo( struct cppISteamGameSearch_SteamMatchGameSearch001_SearchForGameSolo_params *params )
{
    params->_ret = ((ISteamGameSearch*)params->linux_side)->SearchForGameSolo( (int)params->nPlayerMin, (int)params->nPlayerMax );
}

void cppISteamGameSearch_SteamMatchGameSearch001_AcceptGame( struct cppISteamGameSearch_SteamMatchGameSearch001_AcceptGame_params *params )
{
    params->_ret = ((ISteamGameSearch*)params->linux_side)->AcceptGame(  );
}

void cppISteamGameSearch_SteamMatchGameSearch001_DeclineGame( struct cppISteamGameSearch_SteamMatchGameSearch001_DeclineGame_params *params )
{
    params->_ret = ((ISteamGameSearch*)params->linux_side)->DeclineGame(  );
}

void cppISteamGameSearch_SteamMatchGameSearch001_RetrieveConnectionDetails( struct cppISteamGameSearch_SteamMatchGameSearch001_RetrieveConnectionDetails_params *params )
{
    params->_ret = ((ISteamGameSearch*)params->linux_side)->RetrieveConnectionDetails( (CSteamID)params->steamIDHost, (char *)params->pchConnectionDetails, (int)params->cubConnectionDetails );
}

void cppISteamGameSearch_SteamMatchGameSearch001_EndGameSearch( struct cppISteamGameSearch_SteamMatchGameSearch001_EndGameSearch_params *params )
{
    params->_ret = ((ISteamGameSearch*)params->linux_side)->EndGameSearch(  );
}

void cppISteamGameSearch_SteamMatchGameSearch001_SetGameHostParams( struct cppISteamGameSearch_SteamMatchGameSearch001_SetGameHostParams_params *params )
{
    params->_ret = ((ISteamGameSearch*)params->linux_side)->SetGameHostParams( (const char *)params->pchKey, (const char *)params->pchValue );
}

void cppISteamGameSearch_SteamMatchGameSearch001_SetConnectionDetails( struct cppISteamGameSearch_SteamMatchGameSearch001_SetConnectionDetails_params *params )
{
    params->_ret = ((ISteamGameSearch*)params->linux_side)->SetConnectionDetails( (const char *)params->pchConnectionDetails, (int)params->cubConnectionDetails );
}

void cppISteamGameSearch_SteamMatchGameSearch001_RequestPlayersForGame( struct cppISteamGameSearch_SteamMatchGameSearch001_RequestPlayersForGame_params *params )
{
    params->_ret = ((ISteamGameSearch*)params->linux_side)->RequestPlayersForGame( (int)params->nPlayerMin, (int)params->nPlayerMax, (int)params->nMaxTeamSize );
}

void cppISteamGameSearch_SteamMatchGameSearch001_HostConfirmGameStart( struct cppISteamGameSearch_SteamMatchGameSearch001_HostConfirmGameStart_params *params )
{
    params->_ret = ((ISteamGameSearch*)params->linux_side)->HostConfirmGameStart( (uint64)params->ullUniqueGameID );
}

void cppISteamGameSearch_SteamMatchGameSearch001_CancelRequestPlayersForGame( struct cppISteamGameSearch_SteamMatchGameSearch001_CancelRequestPlayersForGame_params *params )
{
    params->_ret = ((ISteamGameSearch*)params->linux_side)->CancelRequestPlayersForGame(  );
}

void cppISteamGameSearch_SteamMatchGameSearch001_SubmitPlayerResult( struct cppISteamGameSearch_SteamMatchGameSearch001_SubmitPlayerResult_params *params )
{
    params->_ret = ((ISteamGameSearch*)params->linux_side)->SubmitPlayerResult( (uint64)params->ullUniqueGameID, (CSteamID)params->steamIDPlayer, (EPlayerResult_t)params->EPlayerResult );
}

void cppISteamGameSearch_SteamMatchGameSearch001_EndGame( struct cppISteamGameSearch_SteamMatchGameSearch001_EndGame_params *params )
{
    params->_ret = ((ISteamGameSearch*)params->linux_side)->EndGame( (uint64)params->ullUniqueGameID );
}

#ifdef __cplusplus
}
#endif
