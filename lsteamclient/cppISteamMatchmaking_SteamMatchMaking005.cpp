#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_102x/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_102x
#include "struct_converters.h"
#include "cppISteamMatchmaking_SteamMatchMaking005.h"
void cppISteamMatchmaking_SteamMatchMaking005_GetFavoriteGameCount( struct cppISteamMatchmaking_SteamMatchMaking005_GetFavoriteGameCount_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->GetFavoriteGameCount(  );
}

void cppISteamMatchmaking_SteamMatchMaking005_GetFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking005_GetFavoriteGame_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->GetFavoriteGame( (int)params->iGame, (AppId_t *)params->pnAppID, (uint32 *)params->pnIP, (uint16 *)params->pnConnPort, (uint16 *)params->pnQueryPort, (uint32 *)params->punFlags, (uint32 *)params->pRTime32LastPlayedOnServer );
}

void cppISteamMatchmaking_SteamMatchMaking005_AddFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking005_AddFavoriteGame_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->AddFavoriteGame( (AppId_t)params->nAppID, (uint32)params->nIP, (uint16)params->nConnPort, (uint16)params->nQueryPort, (uint32)params->unFlags, (uint32)params->rTime32LastPlayedOnServer );
}

void cppISteamMatchmaking_SteamMatchMaking005_RemoveFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking005_RemoveFavoriteGame_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->RemoveFavoriteGame( (AppId_t)params->nAppID, (uint32)params->nIP, (uint16)params->nConnPort, (uint16)params->nQueryPort, (uint32)params->unFlags );
}

void cppISteamMatchmaking_SteamMatchMaking005_RequestLobbyList( struct cppISteamMatchmaking_SteamMatchMaking005_RequestLobbyList_params *params )
{
    ((ISteamMatchmaking*)params->linux_side)->RequestLobbyList(  );
}

void cppISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListFilter( struct cppISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListFilter_params *params )
{
    ((ISteamMatchmaking*)params->linux_side)->AddRequestLobbyListFilter( (const char *)params->pchKeyToMatch, (const char *)params->pchValueToMatch );
}

void cppISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListNumericalFilter( struct cppISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListNumericalFilter_params *params )
{
    ((ISteamMatchmaking*)params->linux_side)->AddRequestLobbyListNumericalFilter( (const char *)params->pchKeyToMatch, (int)params->nValueToMatch, (int)params->nComparisonType );
}

void cppISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListSlotsAvailableFilter( struct cppISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListSlotsAvailableFilter_params *params )
{
    ((ISteamMatchmaking*)params->linux_side)->AddRequestLobbyListSlotsAvailableFilter(  );
}

void cppISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListNearValueFilter( struct cppISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListNearValueFilter_params *params )
{
    ((ISteamMatchmaking*)params->linux_side)->AddRequestLobbyListNearValueFilter( (const char *)params->pchKeyToMatch, (int)params->nValueToBeCloseTo );
}

void cppISteamMatchmaking_SteamMatchMaking005_GetLobbyByIndex( struct cppISteamMatchmaking_SteamMatchMaking005_GetLobbyByIndex_params *params )
{
    *params->_ret = ((ISteamMatchmaking*)params->linux_side)->GetLobbyByIndex( (int)params->iLobby );
}

void cppISteamMatchmaking_SteamMatchMaking005_CreateLobby( struct cppISteamMatchmaking_SteamMatchMaking005_CreateLobby_params *params )
{
    ((ISteamMatchmaking*)params->linux_side)->CreateLobby( (ELobbyType)params->eLobbyType );
}

void cppISteamMatchmaking_SteamMatchMaking005_JoinLobby( struct cppISteamMatchmaking_SteamMatchMaking005_JoinLobby_params *params )
{
    ((ISteamMatchmaking*)params->linux_side)->JoinLobby( (CSteamID)params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking005_LeaveLobby( struct cppISteamMatchmaking_SteamMatchMaking005_LeaveLobby_params *params )
{
    ((ISteamMatchmaking*)params->linux_side)->LeaveLobby( (CSteamID)params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking005_InviteUserToLobby( struct cppISteamMatchmaking_SteamMatchMaking005_InviteUserToLobby_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->InviteUserToLobby( (CSteamID)params->steamIDLobby, (CSteamID)params->steamIDInvitee );
}

void cppISteamMatchmaking_SteamMatchMaking005_GetNumLobbyMembers( struct cppISteamMatchmaking_SteamMatchMaking005_GetNumLobbyMembers_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->GetNumLobbyMembers( (CSteamID)params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberByIndex( struct cppISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberByIndex_params *params )
{
    *params->_ret = ((ISteamMatchmaking*)params->linux_side)->GetLobbyMemberByIndex( (CSteamID)params->steamIDLobby, (int)params->iMember );
}

void cppISteamMatchmaking_SteamMatchMaking005_GetLobbyData( struct cppISteamMatchmaking_SteamMatchMaking005_GetLobbyData_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->GetLobbyData( (CSteamID)params->steamIDLobby, (const char *)params->pchKey );
}

void cppISteamMatchmaking_SteamMatchMaking005_SetLobbyData( struct cppISteamMatchmaking_SteamMatchMaking005_SetLobbyData_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->SetLobbyData( (CSteamID)params->steamIDLobby, (const char *)params->pchKey, (const char *)params->pchValue );
}

void cppISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberData( struct cppISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberData_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->GetLobbyMemberData( (CSteamID)params->steamIDLobby, (CSteamID)params->steamIDUser, (const char *)params->pchKey );
}

void cppISteamMatchmaking_SteamMatchMaking005_SetLobbyMemberData( struct cppISteamMatchmaking_SteamMatchMaking005_SetLobbyMemberData_params *params )
{
    ((ISteamMatchmaking*)params->linux_side)->SetLobbyMemberData( (CSteamID)params->steamIDLobby, (const char *)params->pchKey, (const char *)params->pchValue );
}

void cppISteamMatchmaking_SteamMatchMaking005_SendLobbyChatMsg( struct cppISteamMatchmaking_SteamMatchMaking005_SendLobbyChatMsg_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->SendLobbyChatMsg( (CSteamID)params->steamIDLobby, (const void *)params->pvMsgBody, (int)params->cubMsgBody );
}

void cppISteamMatchmaking_SteamMatchMaking005_GetLobbyChatEntry( struct cppISteamMatchmaking_SteamMatchMaking005_GetLobbyChatEntry_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->GetLobbyChatEntry( (CSteamID)params->steamIDLobby, (int)params->iChatID, (CSteamID *)params->pSteamIDUser, (void *)params->pvData, (int)params->cubData, (EChatEntryType *)params->peChatEntryType );
}

void cppISteamMatchmaking_SteamMatchMaking005_RequestLobbyData( struct cppISteamMatchmaking_SteamMatchMaking005_RequestLobbyData_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->RequestLobbyData( (CSteamID)params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking005_SetLobbyGameServer( struct cppISteamMatchmaking_SteamMatchMaking005_SetLobbyGameServer_params *params )
{
    ((ISteamMatchmaking*)params->linux_side)->SetLobbyGameServer( (CSteamID)params->steamIDLobby, (uint32)params->unGameServerIP, (uint16)params->unGameServerPort, (CSteamID)params->steamIDGameServer );
}

void cppISteamMatchmaking_SteamMatchMaking005_GetLobbyGameServer( struct cppISteamMatchmaking_SteamMatchMaking005_GetLobbyGameServer_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->GetLobbyGameServer( (CSteamID)params->steamIDLobby, (uint32 *)params->punGameServerIP, (uint16 *)params->punGameServerPort, (CSteamID *)params->psteamIDGameServer );
}

void cppISteamMatchmaking_SteamMatchMaking005_SetLobbyMemberLimit( struct cppISteamMatchmaking_SteamMatchMaking005_SetLobbyMemberLimit_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->SetLobbyMemberLimit( (CSteamID)params->steamIDLobby, (int)params->cMaxMembers );
}

void cppISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberLimit( struct cppISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberLimit_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->GetLobbyMemberLimit( (CSteamID)params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking005_RequestFriendsLobbies( struct cppISteamMatchmaking_SteamMatchMaking005_RequestFriendsLobbies_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->RequestFriendsLobbies(  );
}

void cppISteamMatchmaking_SteamMatchMaking005_SetLobbyType( struct cppISteamMatchmaking_SteamMatchMaking005_SetLobbyType_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->SetLobbyType( (CSteamID)params->steamIDLobby, (ELobbyType)params->eLobbyType );
}

void cppISteamMatchmaking_SteamMatchMaking005_GetLobbyOwner( struct cppISteamMatchmaking_SteamMatchMaking005_GetLobbyOwner_params *params )
{
    *params->_ret = ((ISteamMatchmaking*)params->linux_side)->GetLobbyOwner( (CSteamID)params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking005_GetLobbyDistance( struct cppISteamMatchmaking_SteamMatchMaking005_GetLobbyDistance_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->GetLobbyDistance( (CSteamID)params->steamIDLobby );
}

#ifdef __cplusplus
}
#endif
