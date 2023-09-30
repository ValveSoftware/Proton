/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamMatchmaking_SteamMatchMaking001_GetFavoriteGameCount( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking001_GetFavoriteGameCount_params *params = (struct ISteamMatchmaking_SteamMatchMaking001_GetFavoriteGameCount_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking001 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking001 *)params->linux_side;
    params->_ret = iface->GetFavoriteGameCount(  );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking001_GetFavoriteGame( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking001_GetFavoriteGame_params *params = (struct ISteamMatchmaking_SteamMatchMaking001_GetFavoriteGame_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking001 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking001 *)params->linux_side;
    params->_ret = iface->GetFavoriteGame( params->iGame, params->pnAppID, params->pnIP, params->pnConnPort, params->punFlags, params->pRTime32LastPlayedOnServer );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking001_AddFavoriteGame( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking001_AddFavoriteGame_params *params = (struct ISteamMatchmaking_SteamMatchMaking001_AddFavoriteGame_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking001 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking001 *)params->linux_side;
    params->_ret = iface->AddFavoriteGame( params->nAppID, params->nIP, params->nConnPort, params->unFlags, params->rTime32LastPlayedOnServer );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking001_RemoveFavoriteGame( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking001_RemoveFavoriteGame_params *params = (struct ISteamMatchmaking_SteamMatchMaking001_RemoveFavoriteGame_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking001 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking001 *)params->linux_side;
    params->_ret = iface->RemoveFavoriteGame( params->nAppID, params->nIP, params->nConnPort, params->unFlags );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking001_GetFavoriteGame2( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking001_GetFavoriteGame2_params *params = (struct ISteamMatchmaking_SteamMatchMaking001_GetFavoriteGame2_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking001 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking001 *)params->linux_side;
    params->_ret = iface->GetFavoriteGame2( params->iGame, params->pnAppID, params->pnIP, params->pnConnPort, params->pnQueryPort, params->punFlags, params->pRTime32LastPlayedOnServer );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking001_AddFavoriteGame2( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking001_AddFavoriteGame2_params *params = (struct ISteamMatchmaking_SteamMatchMaking001_AddFavoriteGame2_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking001 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking001 *)params->linux_side;
    params->_ret = iface->AddFavoriteGame2( params->nAppID, params->nIP, params->nConnPort, params->nQueryPort, params->unFlags, params->rTime32LastPlayedOnServer );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking001_RemoveFavoriteGame2( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking001_RemoveFavoriteGame2_params *params = (struct ISteamMatchmaking_SteamMatchMaking001_RemoveFavoriteGame2_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking001 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking001 *)params->linux_side;
    params->_ret = iface->RemoveFavoriteGame2( params->nAppID, params->nIP, params->nConnPort, params->nQueryPort, params->unFlags );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking001_RequestLobbyList( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking001_RequestLobbyList_params *params = (struct ISteamMatchmaking_SteamMatchMaking001_RequestLobbyList_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking001 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking001 *)params->linux_side;
    iface->RequestLobbyList( params->ulGameID, params->pFilters, params->nFilters );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking001_GetLobbyByIndex( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking001_GetLobbyByIndex_params *params = (struct ISteamMatchmaking_SteamMatchMaking001_GetLobbyByIndex_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking001 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking001 *)params->linux_side;
    *params->_ret = iface->GetLobbyByIndex( params->iLobby );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking001_CreateLobby( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking001_CreateLobby_params *params = (struct ISteamMatchmaking_SteamMatchMaking001_CreateLobby_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking001 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking001 *)params->linux_side;
    iface->CreateLobby( params->ulGameID, params->bPrivate );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking001_JoinLobby( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking001_JoinLobby_params *params = (struct ISteamMatchmaking_SteamMatchMaking001_JoinLobby_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking001 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking001 *)params->linux_side;
    iface->JoinLobby( params->steamIDLobby );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking001_LeaveLobby( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking001_LeaveLobby_params *params = (struct ISteamMatchmaking_SteamMatchMaking001_LeaveLobby_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking001 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking001 *)params->linux_side;
    iface->LeaveLobby( params->steamIDLobby );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking001_InviteUserToLobby( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking001_InviteUserToLobby_params *params = (struct ISteamMatchmaking_SteamMatchMaking001_InviteUserToLobby_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking001 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking001 *)params->linux_side;
    params->_ret = iface->InviteUserToLobby( params->steamIDLobby, params->steamIDInvitee );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking001_GetNumLobbyMembers( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking001_GetNumLobbyMembers_params *params = (struct ISteamMatchmaking_SteamMatchMaking001_GetNumLobbyMembers_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking001 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking001 *)params->linux_side;
    params->_ret = iface->GetNumLobbyMembers( params->steamIDLobby );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking001_GetLobbyMemberByIndex( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking001_GetLobbyMemberByIndex_params *params = (struct ISteamMatchmaking_SteamMatchMaking001_GetLobbyMemberByIndex_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking001 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking001 *)params->linux_side;
    *params->_ret = iface->GetLobbyMemberByIndex( params->steamIDLobby, params->iMember );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking001_GetLobbyData( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking001_GetLobbyData_params *params = (struct ISteamMatchmaking_SteamMatchMaking001_GetLobbyData_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking001 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking001 *)params->linux_side;
    params->_ret = iface->GetLobbyData( params->SteamIDLobby, params->pchKey );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking001_SetLobbyData( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking001_SetLobbyData_params *params = (struct ISteamMatchmaking_SteamMatchMaking001_SetLobbyData_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking001 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking001 *)params->linux_side;
    params->_ret = iface->SetLobbyData( params->steamIDLobby, params->pchKey, params->pchValue );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking001_GetLobbyMemberData( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking001_GetLobbyMemberData_params *params = (struct ISteamMatchmaking_SteamMatchMaking001_GetLobbyMemberData_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking001 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking001 *)params->linux_side;
    params->_ret = iface->GetLobbyMemberData( params->steamIDLobby, params->steamIDUser, params->pchKey );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking001_SetLobbyMemberData( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking001_SetLobbyMemberData_params *params = (struct ISteamMatchmaking_SteamMatchMaking001_SetLobbyMemberData_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking001 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking001 *)params->linux_side;
    params->_ret = iface->SetLobbyMemberData( params->steamIDLobby, params->pchKey, params->pchValue );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking001_SendLobbyChatMsg( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking001_SendLobbyChatMsg_params *params = (struct ISteamMatchmaking_SteamMatchMaking001_SendLobbyChatMsg_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking001 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking001 *)params->linux_side;
    params->_ret = iface->SendLobbyChatMsg( params->steamIDLobby, params->pvMsgBody, params->cubMsgBody );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking001_GetLobbyChatEntry( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking001_GetLobbyChatEntry_params *params = (struct ISteamMatchmaking_SteamMatchMaking001_GetLobbyChatEntry_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking001 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking001 *)params->linux_side;
    params->_ret = iface->GetLobbyChatEntry( params->steamIDLobby, params->iChatID, params->pSteamIDUser, params->pvData, params->cubData, params->peChatEntryType );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking001_RequestLobbyData( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking001_RequestLobbyData_params *params = (struct ISteamMatchmaking_SteamMatchMaking001_RequestLobbyData_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking001 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking001 *)params->linux_side;
    params->_ret = iface->RequestLobbyData( params->steamIDLobby );
    return 0;
}

