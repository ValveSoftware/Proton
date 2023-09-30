/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamMatchmaking_SteamMatchMaking002.h"

void cppISteamMatchmaking_SteamMatchMaking002_GetFavoriteGameCount( struct cppISteamMatchmaking_SteamMatchMaking002_GetFavoriteGameCount_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking002 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking002 *)params->linux_side;
    params->_ret = iface->GetFavoriteGameCount(  );
}

void cppISteamMatchmaking_SteamMatchMaking002_GetFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking002_GetFavoriteGame_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking002 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking002 *)params->linux_side;
    params->_ret = iface->GetFavoriteGame( params->iGame, params->pnAppID, params->pnIP, params->pnConnPort, params->pnQueryPort, params->punFlags, params->pRTime32LastPlayedOnServer );
}

void cppISteamMatchmaking_SteamMatchMaking002_AddFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking002_AddFavoriteGame_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking002 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking002 *)params->linux_side;
    params->_ret = iface->AddFavoriteGame( params->nAppID, params->nIP, params->nConnPort, params->nQueryPort, params->unFlags, params->rTime32LastPlayedOnServer );
}

void cppISteamMatchmaking_SteamMatchMaking002_RemoveFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking002_RemoveFavoriteGame_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking002 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking002 *)params->linux_side;
    params->_ret = iface->RemoveFavoriteGame( params->nAppID, params->nIP, params->nConnPort, params->nQueryPort, params->unFlags );
}

void cppISteamMatchmaking_SteamMatchMaking002_RequestLobbyList( struct cppISteamMatchmaking_SteamMatchMaking002_RequestLobbyList_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking002 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking002 *)params->linux_side;
    iface->RequestLobbyList(  );
}

void cppISteamMatchmaking_SteamMatchMaking002_GetLobbyByIndex( struct cppISteamMatchmaking_SteamMatchMaking002_GetLobbyByIndex_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking002 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking002 *)params->linux_side;
    *params->_ret = iface->GetLobbyByIndex( params->iLobby );
}

void cppISteamMatchmaking_SteamMatchMaking002_CreateLobby( struct cppISteamMatchmaking_SteamMatchMaking002_CreateLobby_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking002 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking002 *)params->linux_side;
    iface->CreateLobby( params->bPrivate );
}

void cppISteamMatchmaking_SteamMatchMaking002_JoinLobby( struct cppISteamMatchmaking_SteamMatchMaking002_JoinLobby_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking002 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking002 *)params->linux_side;
    iface->JoinLobby( params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking002_LeaveLobby( struct cppISteamMatchmaking_SteamMatchMaking002_LeaveLobby_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking002 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking002 *)params->linux_side;
    iface->LeaveLobby( params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking002_InviteUserToLobby( struct cppISteamMatchmaking_SteamMatchMaking002_InviteUserToLobby_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking002 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking002 *)params->linux_side;
    params->_ret = iface->InviteUserToLobby( params->steamIDLobby, params->steamIDInvitee );
}

void cppISteamMatchmaking_SteamMatchMaking002_GetNumLobbyMembers( struct cppISteamMatchmaking_SteamMatchMaking002_GetNumLobbyMembers_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking002 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking002 *)params->linux_side;
    params->_ret = iface->GetNumLobbyMembers( params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking002_GetLobbyMemberByIndex( struct cppISteamMatchmaking_SteamMatchMaking002_GetLobbyMemberByIndex_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking002 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking002 *)params->linux_side;
    *params->_ret = iface->GetLobbyMemberByIndex( params->steamIDLobby, params->iMember );
}

void cppISteamMatchmaking_SteamMatchMaking002_GetLobbyData( struct cppISteamMatchmaking_SteamMatchMaking002_GetLobbyData_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking002 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking002 *)params->linux_side;
    params->_ret = iface->GetLobbyData( params->steamIDLobby, params->pchKey );
}

void cppISteamMatchmaking_SteamMatchMaking002_SetLobbyData( struct cppISteamMatchmaking_SteamMatchMaking002_SetLobbyData_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking002 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking002 *)params->linux_side;
    params->_ret = iface->SetLobbyData( params->steamIDLobby, params->pchKey, params->pchValue );
}

void cppISteamMatchmaking_SteamMatchMaking002_GetLobbyMemberData( struct cppISteamMatchmaking_SteamMatchMaking002_GetLobbyMemberData_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking002 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking002 *)params->linux_side;
    params->_ret = iface->GetLobbyMemberData( params->steamIDLobby, params->steamIDUser, params->pchKey );
}

void cppISteamMatchmaking_SteamMatchMaking002_SetLobbyMemberData( struct cppISteamMatchmaking_SteamMatchMaking002_SetLobbyMemberData_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking002 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking002 *)params->linux_side;
    iface->SetLobbyMemberData( params->steamIDLobby, params->pchKey, params->pchValue );
}

void cppISteamMatchmaking_SteamMatchMaking002_SendLobbyChatMsg( struct cppISteamMatchmaking_SteamMatchMaking002_SendLobbyChatMsg_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking002 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking002 *)params->linux_side;
    params->_ret = iface->SendLobbyChatMsg( params->steamIDLobby, params->pvMsgBody, params->cubMsgBody );
}

void cppISteamMatchmaking_SteamMatchMaking002_GetLobbyChatEntry( struct cppISteamMatchmaking_SteamMatchMaking002_GetLobbyChatEntry_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking002 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking002 *)params->linux_side;
    params->_ret = iface->GetLobbyChatEntry( params->steamIDLobby, params->iChatID, params->pSteamIDUser, params->pvData, params->cubData, params->peChatEntryType );
}

void cppISteamMatchmaking_SteamMatchMaking002_RequestLobbyData( struct cppISteamMatchmaking_SteamMatchMaking002_RequestLobbyData_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking002 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking002 *)params->linux_side;
    params->_ret = iface->RequestLobbyData( params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking002_SetLobbyGameServer( struct cppISteamMatchmaking_SteamMatchMaking002_SetLobbyGameServer_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking002 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking002 *)params->linux_side;
    iface->SetLobbyGameServer( params->steamIDLobby, params->unGameServerIP, params->unGameServerPort, params->steamIDGameServer );
}

