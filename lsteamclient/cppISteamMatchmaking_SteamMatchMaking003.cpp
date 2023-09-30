/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamMatchmaking_SteamMatchMaking003.h"

void cppISteamMatchmaking_SteamMatchMaking003_GetFavoriteGameCount( struct cppISteamMatchmaking_SteamMatchMaking003_GetFavoriteGameCount_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    params->_ret = iface->GetFavoriteGameCount(  );
}

void cppISteamMatchmaking_SteamMatchMaking003_GetFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking003_GetFavoriteGame_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    params->_ret = iface->GetFavoriteGame( params->iGame, params->pnAppID, params->pnIP, params->pnConnPort, params->pnQueryPort, params->punFlags, params->pRTime32LastPlayedOnServer );
}

void cppISteamMatchmaking_SteamMatchMaking003_AddFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking003_AddFavoriteGame_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    params->_ret = iface->AddFavoriteGame( params->nAppID, params->nIP, params->nConnPort, params->nQueryPort, params->unFlags, params->rTime32LastPlayedOnServer );
}

void cppISteamMatchmaking_SteamMatchMaking003_RemoveFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking003_RemoveFavoriteGame_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    params->_ret = iface->RemoveFavoriteGame( params->nAppID, params->nIP, params->nConnPort, params->nQueryPort, params->unFlags );
}

void cppISteamMatchmaking_SteamMatchMaking003_RequestLobbyList( struct cppISteamMatchmaking_SteamMatchMaking003_RequestLobbyList_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    iface->RequestLobbyList(  );
}

void cppISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListFilter( struct cppISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListFilter_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    iface->AddRequestLobbyListFilter( params->pchKeyToMatch, params->pchValueToMatch );
}

void cppISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListNumericalFilter( struct cppISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListNumericalFilter_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    iface->AddRequestLobbyListNumericalFilter( params->pchKeyToMatch, params->nValueToMatch, params->nComparisonType );
}

void cppISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListSlotsAvailableFilter( struct cppISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListSlotsAvailableFilter_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    iface->AddRequestLobbyListSlotsAvailableFilter(  );
}

void cppISteamMatchmaking_SteamMatchMaking003_GetLobbyByIndex( struct cppISteamMatchmaking_SteamMatchMaking003_GetLobbyByIndex_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    *params->_ret = iface->GetLobbyByIndex( params->iLobby );
}

void cppISteamMatchmaking_SteamMatchMaking003_CreateLobby( struct cppISteamMatchmaking_SteamMatchMaking003_CreateLobby_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    iface->CreateLobby( params->bPrivate );
}

void cppISteamMatchmaking_SteamMatchMaking003_JoinLobby( struct cppISteamMatchmaking_SteamMatchMaking003_JoinLobby_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    iface->JoinLobby( params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking003_LeaveLobby( struct cppISteamMatchmaking_SteamMatchMaking003_LeaveLobby_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    iface->LeaveLobby( params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking003_InviteUserToLobby( struct cppISteamMatchmaking_SteamMatchMaking003_InviteUserToLobby_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    params->_ret = iface->InviteUserToLobby( params->steamIDLobby, params->steamIDInvitee );
}

void cppISteamMatchmaking_SteamMatchMaking003_GetNumLobbyMembers( struct cppISteamMatchmaking_SteamMatchMaking003_GetNumLobbyMembers_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    params->_ret = iface->GetNumLobbyMembers( params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberByIndex( struct cppISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberByIndex_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    *params->_ret = iface->GetLobbyMemberByIndex( params->steamIDLobby, params->iMember );
}

void cppISteamMatchmaking_SteamMatchMaking003_GetLobbyData( struct cppISteamMatchmaking_SteamMatchMaking003_GetLobbyData_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    params->_ret = iface->GetLobbyData( params->steamIDLobby, params->pchKey );
}

void cppISteamMatchmaking_SteamMatchMaking003_SetLobbyData( struct cppISteamMatchmaking_SteamMatchMaking003_SetLobbyData_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    params->_ret = iface->SetLobbyData( params->steamIDLobby, params->pchKey, params->pchValue );
}

void cppISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberData( struct cppISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberData_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    params->_ret = iface->GetLobbyMemberData( params->steamIDLobby, params->steamIDUser, params->pchKey );
}

void cppISteamMatchmaking_SteamMatchMaking003_SetLobbyMemberData( struct cppISteamMatchmaking_SteamMatchMaking003_SetLobbyMemberData_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    iface->SetLobbyMemberData( params->steamIDLobby, params->pchKey, params->pchValue );
}

void cppISteamMatchmaking_SteamMatchMaking003_SendLobbyChatMsg( struct cppISteamMatchmaking_SteamMatchMaking003_SendLobbyChatMsg_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    params->_ret = iface->SendLobbyChatMsg( params->steamIDLobby, params->pvMsgBody, params->cubMsgBody );
}

void cppISteamMatchmaking_SteamMatchMaking003_GetLobbyChatEntry( struct cppISteamMatchmaking_SteamMatchMaking003_GetLobbyChatEntry_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    params->_ret = iface->GetLobbyChatEntry( params->steamIDLobby, params->iChatID, params->pSteamIDUser, params->pvData, params->cubData, params->peChatEntryType );
}

void cppISteamMatchmaking_SteamMatchMaking003_RequestLobbyData( struct cppISteamMatchmaking_SteamMatchMaking003_RequestLobbyData_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    params->_ret = iface->RequestLobbyData( params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking003_SetLobbyGameServer( struct cppISteamMatchmaking_SteamMatchMaking003_SetLobbyGameServer_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    iface->SetLobbyGameServer( params->steamIDLobby, params->unGameServerIP, params->unGameServerPort, params->steamIDGameServer );
}

void cppISteamMatchmaking_SteamMatchMaking003_GetLobbyGameServer( struct cppISteamMatchmaking_SteamMatchMaking003_GetLobbyGameServer_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    params->_ret = iface->GetLobbyGameServer( params->steamIDLobby, params->punGameServerIP, params->punGameServerPort, params->psteamIDGameServer );
}

void cppISteamMatchmaking_SteamMatchMaking003_SetLobbyMemberLimit( struct cppISteamMatchmaking_SteamMatchMaking003_SetLobbyMemberLimit_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    params->_ret = iface->SetLobbyMemberLimit( params->steamIDLobby, params->cMaxMembers );
}

void cppISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberLimit( struct cppISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberLimit_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    params->_ret = iface->GetLobbyMemberLimit( params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking003_SetLobbyVoiceEnabled( struct cppISteamMatchmaking_SteamMatchMaking003_SetLobbyVoiceEnabled_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    iface->SetLobbyVoiceEnabled( params->steamIDLobby, params->bVoiceEnabled );
}

void cppISteamMatchmaking_SteamMatchMaking003_RequestFriendsLobbies( struct cppISteamMatchmaking_SteamMatchMaking003_RequestFriendsLobbies_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    params->_ret = iface->RequestFriendsLobbies(  );
}

