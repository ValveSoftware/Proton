/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamMatchmaking_SteamMatchMaking003_GetFavoriteGameCount( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking003_GetFavoriteGameCount_params *params = (struct ISteamMatchmaking_SteamMatchMaking003_GetFavoriteGameCount_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    params->_ret = iface->GetFavoriteGameCount(  );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking003_GetFavoriteGame( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking003_GetFavoriteGame_params *params = (struct ISteamMatchmaking_SteamMatchMaking003_GetFavoriteGame_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    params->_ret = iface->GetFavoriteGame( params->iGame, params->pnAppID, params->pnIP, params->pnConnPort, params->pnQueryPort, params->punFlags, params->pRTime32LastPlayedOnServer );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking003_AddFavoriteGame( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking003_AddFavoriteGame_params *params = (struct ISteamMatchmaking_SteamMatchMaking003_AddFavoriteGame_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    params->_ret = iface->AddFavoriteGame( params->nAppID, params->nIP, params->nConnPort, params->nQueryPort, params->unFlags, params->rTime32LastPlayedOnServer );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking003_RemoveFavoriteGame( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking003_RemoveFavoriteGame_params *params = (struct ISteamMatchmaking_SteamMatchMaking003_RemoveFavoriteGame_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    params->_ret = iface->RemoveFavoriteGame( params->nAppID, params->nIP, params->nConnPort, params->nQueryPort, params->unFlags );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking003_RequestLobbyList( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking003_RequestLobbyList_params *params = (struct ISteamMatchmaking_SteamMatchMaking003_RequestLobbyList_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    iface->RequestLobbyList(  );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListFilter( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListFilter_params *params = (struct ISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListFilter_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    iface->AddRequestLobbyListFilter( params->pchKeyToMatch, params->pchValueToMatch );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListNumericalFilter( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListNumericalFilter_params *params = (struct ISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListNumericalFilter_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    iface->AddRequestLobbyListNumericalFilter( params->pchKeyToMatch, params->nValueToMatch, params->nComparisonType );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListSlotsAvailableFilter( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListSlotsAvailableFilter_params *params = (struct ISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListSlotsAvailableFilter_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    iface->AddRequestLobbyListSlotsAvailableFilter(  );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking003_GetLobbyByIndex( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking003_GetLobbyByIndex_params *params = (struct ISteamMatchmaking_SteamMatchMaking003_GetLobbyByIndex_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    *params->_ret = iface->GetLobbyByIndex( params->iLobby );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking003_CreateLobby( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking003_CreateLobby_params *params = (struct ISteamMatchmaking_SteamMatchMaking003_CreateLobby_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    iface->CreateLobby( params->bPrivate );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking003_JoinLobby( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking003_JoinLobby_params *params = (struct ISteamMatchmaking_SteamMatchMaking003_JoinLobby_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    iface->JoinLobby( params->steamIDLobby );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking003_LeaveLobby( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking003_LeaveLobby_params *params = (struct ISteamMatchmaking_SteamMatchMaking003_LeaveLobby_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    iface->LeaveLobby( params->steamIDLobby );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking003_InviteUserToLobby( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking003_InviteUserToLobby_params *params = (struct ISteamMatchmaking_SteamMatchMaking003_InviteUserToLobby_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    params->_ret = iface->InviteUserToLobby( params->steamIDLobby, params->steamIDInvitee );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking003_GetNumLobbyMembers( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking003_GetNumLobbyMembers_params *params = (struct ISteamMatchmaking_SteamMatchMaking003_GetNumLobbyMembers_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    params->_ret = iface->GetNumLobbyMembers( params->steamIDLobby );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberByIndex( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberByIndex_params *params = (struct ISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberByIndex_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    *params->_ret = iface->GetLobbyMemberByIndex( params->steamIDLobby, params->iMember );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking003_GetLobbyData( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking003_GetLobbyData_params *params = (struct ISteamMatchmaking_SteamMatchMaking003_GetLobbyData_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    params->_ret = iface->GetLobbyData( params->steamIDLobby, params->pchKey );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking003_SetLobbyData( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking003_SetLobbyData_params *params = (struct ISteamMatchmaking_SteamMatchMaking003_SetLobbyData_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    params->_ret = iface->SetLobbyData( params->steamIDLobby, params->pchKey, params->pchValue );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberData( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberData_params *params = (struct ISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberData_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    params->_ret = iface->GetLobbyMemberData( params->steamIDLobby, params->steamIDUser, params->pchKey );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking003_SetLobbyMemberData( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking003_SetLobbyMemberData_params *params = (struct ISteamMatchmaking_SteamMatchMaking003_SetLobbyMemberData_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    iface->SetLobbyMemberData( params->steamIDLobby, params->pchKey, params->pchValue );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking003_SendLobbyChatMsg( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking003_SendLobbyChatMsg_params *params = (struct ISteamMatchmaking_SteamMatchMaking003_SendLobbyChatMsg_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    params->_ret = iface->SendLobbyChatMsg( params->steamIDLobby, params->pvMsgBody, params->cubMsgBody );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking003_GetLobbyChatEntry( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking003_GetLobbyChatEntry_params *params = (struct ISteamMatchmaking_SteamMatchMaking003_GetLobbyChatEntry_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    params->_ret = iface->GetLobbyChatEntry( params->steamIDLobby, params->iChatID, params->pSteamIDUser, params->pvData, params->cubData, params->peChatEntryType );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking003_RequestLobbyData( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking003_RequestLobbyData_params *params = (struct ISteamMatchmaking_SteamMatchMaking003_RequestLobbyData_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    params->_ret = iface->RequestLobbyData( params->steamIDLobby );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking003_SetLobbyGameServer( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking003_SetLobbyGameServer_params *params = (struct ISteamMatchmaking_SteamMatchMaking003_SetLobbyGameServer_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    iface->SetLobbyGameServer( params->steamIDLobby, params->unGameServerIP, params->unGameServerPort, params->steamIDGameServer );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking003_GetLobbyGameServer( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking003_GetLobbyGameServer_params *params = (struct ISteamMatchmaking_SteamMatchMaking003_GetLobbyGameServer_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    params->_ret = iface->GetLobbyGameServer( params->steamIDLobby, params->punGameServerIP, params->punGameServerPort, params->psteamIDGameServer );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking003_SetLobbyMemberLimit( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking003_SetLobbyMemberLimit_params *params = (struct ISteamMatchmaking_SteamMatchMaking003_SetLobbyMemberLimit_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    params->_ret = iface->SetLobbyMemberLimit( params->steamIDLobby, params->cMaxMembers );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberLimit( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberLimit_params *params = (struct ISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberLimit_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    params->_ret = iface->GetLobbyMemberLimit( params->steamIDLobby );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking003_SetLobbyVoiceEnabled( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking003_SetLobbyVoiceEnabled_params *params = (struct ISteamMatchmaking_SteamMatchMaking003_SetLobbyVoiceEnabled_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    iface->SetLobbyVoiceEnabled( params->steamIDLobby, params->bVoiceEnabled );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking003_RequestFriendsLobbies( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking003_RequestFriendsLobbies_params *params = (struct ISteamMatchmaking_SteamMatchMaking003_RequestFriendsLobbies_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking003 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking003 *)params->linux_side;
    params->_ret = iface->RequestFriendsLobbies(  );
    return 0;
}

