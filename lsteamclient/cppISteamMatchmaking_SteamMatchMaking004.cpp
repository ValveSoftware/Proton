/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamMatchmaking_SteamMatchMaking004_GetFavoriteGameCount( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking004_GetFavoriteGameCount_params *params = (struct ISteamMatchmaking_SteamMatchMaking004_GetFavoriteGameCount_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking004 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    params->_ret = iface->GetFavoriteGameCount(  );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking004_GetFavoriteGame( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking004_GetFavoriteGame_params *params = (struct ISteamMatchmaking_SteamMatchMaking004_GetFavoriteGame_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking004 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    params->_ret = iface->GetFavoriteGame( params->iGame, params->pnAppID, params->pnIP, params->pnConnPort, params->pnQueryPort, params->punFlags, params->pRTime32LastPlayedOnServer );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking004_AddFavoriteGame( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking004_AddFavoriteGame_params *params = (struct ISteamMatchmaking_SteamMatchMaking004_AddFavoriteGame_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking004 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    params->_ret = iface->AddFavoriteGame( params->nAppID, params->nIP, params->nConnPort, params->nQueryPort, params->unFlags, params->rTime32LastPlayedOnServer );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking004_RemoveFavoriteGame( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking004_RemoveFavoriteGame_params *params = (struct ISteamMatchmaking_SteamMatchMaking004_RemoveFavoriteGame_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking004 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    params->_ret = iface->RemoveFavoriteGame( params->nAppID, params->nIP, params->nConnPort, params->nQueryPort, params->unFlags );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking004_RequestLobbyList( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking004_RequestLobbyList_params *params = (struct ISteamMatchmaking_SteamMatchMaking004_RequestLobbyList_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking004 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    iface->RequestLobbyList(  );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListFilter( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListFilter_params *params = (struct ISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListFilter_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking004 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    iface->AddRequestLobbyListFilter( params->pchKeyToMatch, params->pchValueToMatch );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListNumericalFilter( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListNumericalFilter_params *params = (struct ISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListNumericalFilter_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking004 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    iface->AddRequestLobbyListNumericalFilter( params->pchKeyToMatch, params->nValueToMatch, params->nComparisonType );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListSlotsAvailableFilter( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListSlotsAvailableFilter_params *params = (struct ISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListSlotsAvailableFilter_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking004 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    iface->AddRequestLobbyListSlotsAvailableFilter(  );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking004_GetLobbyByIndex( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking004_GetLobbyByIndex_params *params = (struct ISteamMatchmaking_SteamMatchMaking004_GetLobbyByIndex_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking004 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    *params->_ret = iface->GetLobbyByIndex( params->iLobby );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking004_CreateLobby( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking004_CreateLobby_params *params = (struct ISteamMatchmaking_SteamMatchMaking004_CreateLobby_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking004 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    iface->CreateLobby( params->bPrivate );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking004_JoinLobby( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking004_JoinLobby_params *params = (struct ISteamMatchmaking_SteamMatchMaking004_JoinLobby_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking004 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    iface->JoinLobby( params->steamIDLobby );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking004_LeaveLobby( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking004_LeaveLobby_params *params = (struct ISteamMatchmaking_SteamMatchMaking004_LeaveLobby_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking004 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    iface->LeaveLobby( params->steamIDLobby );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking004_InviteUserToLobby( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking004_InviteUserToLobby_params *params = (struct ISteamMatchmaking_SteamMatchMaking004_InviteUserToLobby_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking004 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    params->_ret = iface->InviteUserToLobby( params->steamIDLobby, params->steamIDInvitee );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking004_GetNumLobbyMembers( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking004_GetNumLobbyMembers_params *params = (struct ISteamMatchmaking_SteamMatchMaking004_GetNumLobbyMembers_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking004 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    params->_ret = iface->GetNumLobbyMembers( params->steamIDLobby );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberByIndex( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberByIndex_params *params = (struct ISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberByIndex_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking004 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    *params->_ret = iface->GetLobbyMemberByIndex( params->steamIDLobby, params->iMember );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking004_GetLobbyData( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking004_GetLobbyData_params *params = (struct ISteamMatchmaking_SteamMatchMaking004_GetLobbyData_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking004 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    params->_ret = iface->GetLobbyData( params->steamIDLobby, params->pchKey );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking004_SetLobbyData( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking004_SetLobbyData_params *params = (struct ISteamMatchmaking_SteamMatchMaking004_SetLobbyData_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking004 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    params->_ret = iface->SetLobbyData( params->steamIDLobby, params->pchKey, params->pchValue );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberData( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberData_params *params = (struct ISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberData_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking004 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    params->_ret = iface->GetLobbyMemberData( params->steamIDLobby, params->steamIDUser, params->pchKey );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking004_SetLobbyMemberData( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking004_SetLobbyMemberData_params *params = (struct ISteamMatchmaking_SteamMatchMaking004_SetLobbyMemberData_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking004 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    iface->SetLobbyMemberData( params->steamIDLobby, params->pchKey, params->pchValue );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking004_SendLobbyChatMsg( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking004_SendLobbyChatMsg_params *params = (struct ISteamMatchmaking_SteamMatchMaking004_SendLobbyChatMsg_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking004 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    params->_ret = iface->SendLobbyChatMsg( params->steamIDLobby, params->pvMsgBody, params->cubMsgBody );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking004_GetLobbyChatEntry( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking004_GetLobbyChatEntry_params *params = (struct ISteamMatchmaking_SteamMatchMaking004_GetLobbyChatEntry_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking004 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    params->_ret = iface->GetLobbyChatEntry( params->steamIDLobby, params->iChatID, params->pSteamIDUser, params->pvData, params->cubData, params->peChatEntryType );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking004_RequestLobbyData( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking004_RequestLobbyData_params *params = (struct ISteamMatchmaking_SteamMatchMaking004_RequestLobbyData_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking004 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    params->_ret = iface->RequestLobbyData( params->steamIDLobby );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking004_SetLobbyGameServer( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking004_SetLobbyGameServer_params *params = (struct ISteamMatchmaking_SteamMatchMaking004_SetLobbyGameServer_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking004 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    iface->SetLobbyGameServer( params->steamIDLobby, params->unGameServerIP, params->unGameServerPort, params->steamIDGameServer );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking004_GetLobbyGameServer( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking004_GetLobbyGameServer_params *params = (struct ISteamMatchmaking_SteamMatchMaking004_GetLobbyGameServer_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking004 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    params->_ret = iface->GetLobbyGameServer( params->steamIDLobby, params->punGameServerIP, params->punGameServerPort, params->psteamIDGameServer );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking004_SetLobbyMemberLimit( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking004_SetLobbyMemberLimit_params *params = (struct ISteamMatchmaking_SteamMatchMaking004_SetLobbyMemberLimit_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking004 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    params->_ret = iface->SetLobbyMemberLimit( params->steamIDLobby, params->cMaxMembers );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberLimit( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberLimit_params *params = (struct ISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberLimit_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking004 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    params->_ret = iface->GetLobbyMemberLimit( params->steamIDLobby );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking004_RequestFriendsLobbies( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking004_RequestFriendsLobbies_params *params = (struct ISteamMatchmaking_SteamMatchMaking004_RequestFriendsLobbies_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking004 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    params->_ret = iface->RequestFriendsLobbies(  );
    return 0;
}

