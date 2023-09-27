#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_102/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_102
#include "struct_converters.h"
#include "cppISteamMatchmaking_SteamMatchMaking004.h"
void cppISteamMatchmaking_SteamMatchMaking004_GetFavoriteGameCount( struct cppISteamMatchmaking_SteamMatchMaking004_GetFavoriteGameCount_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->GetFavoriteGameCount(  );
}

void cppISteamMatchmaking_SteamMatchMaking004_GetFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking004_GetFavoriteGame_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->GetFavoriteGame( (int)params->iGame, (AppId_t *)params->pnAppID, (uint32 *)params->pnIP, (uint16 *)params->pnConnPort, (uint16 *)params->pnQueryPort, (uint32 *)params->punFlags, (uint32 *)params->pRTime32LastPlayedOnServer );
}

void cppISteamMatchmaking_SteamMatchMaking004_AddFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking004_AddFavoriteGame_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->AddFavoriteGame( (AppId_t)params->nAppID, (uint32)params->nIP, (uint16)params->nConnPort, (uint16)params->nQueryPort, (uint32)params->unFlags, (uint32)params->rTime32LastPlayedOnServer );
}

void cppISteamMatchmaking_SteamMatchMaking004_RemoveFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking004_RemoveFavoriteGame_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->RemoveFavoriteGame( (AppId_t)params->nAppID, (uint32)params->nIP, (uint16)params->nConnPort, (uint16)params->nQueryPort, (uint32)params->unFlags );
}

void cppISteamMatchmaking_SteamMatchMaking004_RequestLobbyList( struct cppISteamMatchmaking_SteamMatchMaking004_RequestLobbyList_params *params )
{
    ((ISteamMatchmaking*)params->linux_side)->RequestLobbyList(  );
}

void cppISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListFilter( struct cppISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListFilter_params *params )
{
    ((ISteamMatchmaking*)params->linux_side)->AddRequestLobbyListFilter( (const char *)params->pchKeyToMatch, (const char *)params->pchValueToMatch );
}

void cppISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListNumericalFilter( struct cppISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListNumericalFilter_params *params )
{
    ((ISteamMatchmaking*)params->linux_side)->AddRequestLobbyListNumericalFilter( (const char *)params->pchKeyToMatch, (int)params->nValueToMatch, (int)params->nComparisonType );
}

void cppISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListSlotsAvailableFilter( struct cppISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListSlotsAvailableFilter_params *params )
{
    ((ISteamMatchmaking*)params->linux_side)->AddRequestLobbyListSlotsAvailableFilter(  );
}

void cppISteamMatchmaking_SteamMatchMaking004_GetLobbyByIndex( struct cppISteamMatchmaking_SteamMatchMaking004_GetLobbyByIndex_params *params )
{
    *params->_ret = ((ISteamMatchmaking*)params->linux_side)->GetLobbyByIndex( (int)params->iLobby );
}

void cppISteamMatchmaking_SteamMatchMaking004_CreateLobby( struct cppISteamMatchmaking_SteamMatchMaking004_CreateLobby_params *params )
{
    ((ISteamMatchmaking*)params->linux_side)->CreateLobby( (bool)params->bPrivate );
}

void cppISteamMatchmaking_SteamMatchMaking004_JoinLobby( struct cppISteamMatchmaking_SteamMatchMaking004_JoinLobby_params *params )
{
    ((ISteamMatchmaking*)params->linux_side)->JoinLobby( (CSteamID)params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking004_LeaveLobby( struct cppISteamMatchmaking_SteamMatchMaking004_LeaveLobby_params *params )
{
    ((ISteamMatchmaking*)params->linux_side)->LeaveLobby( (CSteamID)params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking004_InviteUserToLobby( struct cppISteamMatchmaking_SteamMatchMaking004_InviteUserToLobby_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->InviteUserToLobby( (CSteamID)params->steamIDLobby, (CSteamID)params->steamIDInvitee );
}

void cppISteamMatchmaking_SteamMatchMaking004_GetNumLobbyMembers( struct cppISteamMatchmaking_SteamMatchMaking004_GetNumLobbyMembers_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->GetNumLobbyMembers( (CSteamID)params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberByIndex( struct cppISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberByIndex_params *params )
{
    *params->_ret = ((ISteamMatchmaking*)params->linux_side)->GetLobbyMemberByIndex( (CSteamID)params->steamIDLobby, (int)params->iMember );
}

void cppISteamMatchmaking_SteamMatchMaking004_GetLobbyData( struct cppISteamMatchmaking_SteamMatchMaking004_GetLobbyData_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->GetLobbyData( (CSteamID)params->steamIDLobby, (const char *)params->pchKey );
}

void cppISteamMatchmaking_SteamMatchMaking004_SetLobbyData( struct cppISteamMatchmaking_SteamMatchMaking004_SetLobbyData_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->SetLobbyData( (CSteamID)params->steamIDLobby, (const char *)params->pchKey, (const char *)params->pchValue );
}

void cppISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberData( struct cppISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberData_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->GetLobbyMemberData( (CSteamID)params->steamIDLobby, (CSteamID)params->steamIDUser, (const char *)params->pchKey );
}

void cppISteamMatchmaking_SteamMatchMaking004_SetLobbyMemberData( struct cppISteamMatchmaking_SteamMatchMaking004_SetLobbyMemberData_params *params )
{
    ((ISteamMatchmaking*)params->linux_side)->SetLobbyMemberData( (CSteamID)params->steamIDLobby, (const char *)params->pchKey, (const char *)params->pchValue );
}

void cppISteamMatchmaking_SteamMatchMaking004_SendLobbyChatMsg( struct cppISteamMatchmaking_SteamMatchMaking004_SendLobbyChatMsg_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->SendLobbyChatMsg( (CSteamID)params->steamIDLobby, (const void *)params->pvMsgBody, (int)params->cubMsgBody );
}

void cppISteamMatchmaking_SteamMatchMaking004_GetLobbyChatEntry( struct cppISteamMatchmaking_SteamMatchMaking004_GetLobbyChatEntry_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->GetLobbyChatEntry( (CSteamID)params->steamIDLobby, (int)params->iChatID, (CSteamID *)params->pSteamIDUser, (void *)params->pvData, (int)params->cubData, (EChatEntryType *)params->peChatEntryType );
}

void cppISteamMatchmaking_SteamMatchMaking004_RequestLobbyData( struct cppISteamMatchmaking_SteamMatchMaking004_RequestLobbyData_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->RequestLobbyData( (CSteamID)params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking004_SetLobbyGameServer( struct cppISteamMatchmaking_SteamMatchMaking004_SetLobbyGameServer_params *params )
{
    ((ISteamMatchmaking*)params->linux_side)->SetLobbyGameServer( (CSteamID)params->steamIDLobby, (uint32)params->unGameServerIP, (uint16)params->unGameServerPort, (CSteamID)params->steamIDGameServer );
}

void cppISteamMatchmaking_SteamMatchMaking004_GetLobbyGameServer( struct cppISteamMatchmaking_SteamMatchMaking004_GetLobbyGameServer_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->GetLobbyGameServer( (CSteamID)params->steamIDLobby, (uint32 *)params->punGameServerIP, (uint16 *)params->punGameServerPort, (CSteamID *)params->psteamIDGameServer );
}

void cppISteamMatchmaking_SteamMatchMaking004_SetLobbyMemberLimit( struct cppISteamMatchmaking_SteamMatchMaking004_SetLobbyMemberLimit_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->SetLobbyMemberLimit( (CSteamID)params->steamIDLobby, (int)params->cMaxMembers );
}

void cppISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberLimit( struct cppISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberLimit_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->GetLobbyMemberLimit( (CSteamID)params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking004_RequestFriendsLobbies( struct cppISteamMatchmaking_SteamMatchMaking004_RequestFriendsLobbies_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->RequestFriendsLobbies(  );
}

#ifdef __cplusplus
}
#endif
