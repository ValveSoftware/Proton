#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_099y/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_099y
#include "struct_converters.h"
#include "cppISteamMatchmaking_SteamMatchMaking001.h"
void cppISteamMatchmaking_SteamMatchMaking001_GetFavoriteGameCount( struct cppISteamMatchmaking_SteamMatchMaking001_GetFavoriteGameCount_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->GetFavoriteGameCount(  );
}

void cppISteamMatchmaking_SteamMatchMaking001_GetFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking001_GetFavoriteGame_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->GetFavoriteGame( (int)params->iGame, (uint32 *)params->pnAppID, (uint32 *)params->pnIP, (uint16 *)params->pnConnPort, (uint32 *)params->punFlags, (uint32 *)params->pRTime32LastPlayedOnServer );
}

void cppISteamMatchmaking_SteamMatchMaking001_AddFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking001_AddFavoriteGame_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->AddFavoriteGame( (uint32)params->nAppID, (uint32)params->nIP, (uint16)params->nConnPort, (uint32)params->unFlags, (uint32)params->rTime32LastPlayedOnServer );
}

void cppISteamMatchmaking_SteamMatchMaking001_RemoveFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking001_RemoveFavoriteGame_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->RemoveFavoriteGame( (uint32)params->nAppID, (uint32)params->nIP, (uint16)params->nConnPort, (uint32)params->unFlags );
}

void cppISteamMatchmaking_SteamMatchMaking001_GetFavoriteGame2( struct cppISteamMatchmaking_SteamMatchMaking001_GetFavoriteGame2_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->GetFavoriteGame2( (int)params->iGame, (uint32 *)params->pnAppID, (uint32 *)params->pnIP, (uint16 *)params->pnConnPort, (uint16 *)params->pnQueryPort, (uint32 *)params->punFlags, (uint32 *)params->pRTime32LastPlayedOnServer );
}

void cppISteamMatchmaking_SteamMatchMaking001_AddFavoriteGame2( struct cppISteamMatchmaking_SteamMatchMaking001_AddFavoriteGame2_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->AddFavoriteGame2( (uint32)params->nAppID, (uint32)params->nIP, (uint16)params->nConnPort, (uint16)params->nQueryPort, (uint32)params->unFlags, (uint32)params->rTime32LastPlayedOnServer );
}

void cppISteamMatchmaking_SteamMatchMaking001_RemoveFavoriteGame2( struct cppISteamMatchmaking_SteamMatchMaking001_RemoveFavoriteGame2_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->RemoveFavoriteGame2( (uint32)params->nAppID, (uint32)params->nIP, (uint16)params->nConnPort, (uint16)params->nQueryPort, (uint32)params->unFlags );
}

void cppISteamMatchmaking_SteamMatchMaking001_RequestLobbyList( struct cppISteamMatchmaking_SteamMatchMaking001_RequestLobbyList_params *params )
{
    ((ISteamMatchmaking*)params->linux_side)->RequestLobbyList( (uint64)params->ulGameID, (MatchMakingKeyValuePair_t *)params->pFilters, (uint32)params->nFilters );
}

void cppISteamMatchmaking_SteamMatchMaking001_GetLobbyByIndex( struct cppISteamMatchmaking_SteamMatchMaking001_GetLobbyByIndex_params *params )
{
    *params->_ret = ((ISteamMatchmaking*)params->linux_side)->GetLobbyByIndex( (int)params->iLobby );
}

void cppISteamMatchmaking_SteamMatchMaking001_CreateLobby( struct cppISteamMatchmaking_SteamMatchMaking001_CreateLobby_params *params )
{
    ((ISteamMatchmaking*)params->linux_side)->CreateLobby( (uint64)params->ulGameID, (bool)params->bPrivate );
}

void cppISteamMatchmaking_SteamMatchMaking001_JoinLobby( struct cppISteamMatchmaking_SteamMatchMaking001_JoinLobby_params *params )
{
    ((ISteamMatchmaking*)params->linux_side)->JoinLobby( (CSteamID)params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking001_LeaveLobby( struct cppISteamMatchmaking_SteamMatchMaking001_LeaveLobby_params *params )
{
    ((ISteamMatchmaking*)params->linux_side)->LeaveLobby( (CSteamID)params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking001_InviteUserToLobby( struct cppISteamMatchmaking_SteamMatchMaking001_InviteUserToLobby_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->InviteUserToLobby( (CSteamID)params->steamIDLobby, (CSteamID)params->steamIDInvitee );
}

void cppISteamMatchmaking_SteamMatchMaking001_GetNumLobbyMembers( struct cppISteamMatchmaking_SteamMatchMaking001_GetNumLobbyMembers_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->GetNumLobbyMembers( (CSteamID)params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking001_GetLobbyMemberByIndex( struct cppISteamMatchmaking_SteamMatchMaking001_GetLobbyMemberByIndex_params *params )
{
    *params->_ret = ((ISteamMatchmaking*)params->linux_side)->GetLobbyMemberByIndex( (CSteamID)params->steamIDLobby, (int)params->iMember );
}

void cppISteamMatchmaking_SteamMatchMaking001_GetLobbyData( struct cppISteamMatchmaking_SteamMatchMaking001_GetLobbyData_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->GetLobbyData( (CSteamID)params->SteamIDLobby, (const char *)params->pchKey );
}

void cppISteamMatchmaking_SteamMatchMaking001_SetLobbyData( struct cppISteamMatchmaking_SteamMatchMaking001_SetLobbyData_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->SetLobbyData( (CSteamID)params->steamIDLobby, (const char *)params->pchKey, (const char *)params->pchValue );
}

void cppISteamMatchmaking_SteamMatchMaking001_GetLobbyMemberData( struct cppISteamMatchmaking_SteamMatchMaking001_GetLobbyMemberData_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->GetLobbyMemberData( (CSteamID)params->steamIDLobby, (CSteamID)params->steamIDUser, (const char *)params->pchKey );
}

void cppISteamMatchmaking_SteamMatchMaking001_SetLobbyMemberData( struct cppISteamMatchmaking_SteamMatchMaking001_SetLobbyMemberData_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->SetLobbyMemberData( (CSteamID)params->steamIDLobby, (const char *)params->pchKey, (const char *)params->pchValue );
}

void cppISteamMatchmaking_SteamMatchMaking001_SendLobbyChatMsg( struct cppISteamMatchmaking_SteamMatchMaking001_SendLobbyChatMsg_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->SendLobbyChatMsg( (CSteamID)params->steamIDLobby, (const void *)params->pvMsgBody, (int)params->cubMsgBody );
}

void cppISteamMatchmaking_SteamMatchMaking001_GetLobbyChatEntry( struct cppISteamMatchmaking_SteamMatchMaking001_GetLobbyChatEntry_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->GetLobbyChatEntry( (CSteamID)params->steamIDLobby, (int)params->iChatID, (CSteamID *)params->pSteamIDUser, (void *)params->pvData, (int)params->cubData, (EChatEntryType *)params->peChatEntryType );
}

void cppISteamMatchmaking_SteamMatchMaking001_RequestLobbyData( struct cppISteamMatchmaking_SteamMatchMaking001_RequestLobbyData_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->RequestLobbyData( (CSteamID)params->steamIDLobby );
}

#ifdef __cplusplus
}
#endif
