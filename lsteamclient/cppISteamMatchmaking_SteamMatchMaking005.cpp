/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamMatchmaking_SteamMatchMaking005_GetFavoriteGameCount( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking005_GetFavoriteGameCount_params *params = (struct ISteamMatchmaking_SteamMatchMaking005_GetFavoriteGameCount_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking005 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    params->_ret = iface->GetFavoriteGameCount(  );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking005_GetFavoriteGame( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking005_GetFavoriteGame_params *params = (struct ISteamMatchmaking_SteamMatchMaking005_GetFavoriteGame_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking005 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    params->_ret = iface->GetFavoriteGame( params->iGame, params->pnAppID, params->pnIP, params->pnConnPort, params->pnQueryPort, params->punFlags, params->pRTime32LastPlayedOnServer );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking005_AddFavoriteGame( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking005_AddFavoriteGame_params *params = (struct ISteamMatchmaking_SteamMatchMaking005_AddFavoriteGame_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking005 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    params->_ret = iface->AddFavoriteGame( params->nAppID, params->nIP, params->nConnPort, params->nQueryPort, params->unFlags, params->rTime32LastPlayedOnServer );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking005_RemoveFavoriteGame( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking005_RemoveFavoriteGame_params *params = (struct ISteamMatchmaking_SteamMatchMaking005_RemoveFavoriteGame_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking005 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    params->_ret = iface->RemoveFavoriteGame( params->nAppID, params->nIP, params->nConnPort, params->nQueryPort, params->unFlags );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking005_RequestLobbyList( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking005_RequestLobbyList_params *params = (struct ISteamMatchmaking_SteamMatchMaking005_RequestLobbyList_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking005 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    iface->RequestLobbyList(  );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListFilter( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListFilter_params *params = (struct ISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListFilter_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking005 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    iface->AddRequestLobbyListFilter( params->pchKeyToMatch, params->pchValueToMatch );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListNumericalFilter( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListNumericalFilter_params *params = (struct ISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListNumericalFilter_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking005 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    iface->AddRequestLobbyListNumericalFilter( params->pchKeyToMatch, params->nValueToMatch, params->nComparisonType );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListSlotsAvailableFilter( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListSlotsAvailableFilter_params *params = (struct ISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListSlotsAvailableFilter_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking005 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    iface->AddRequestLobbyListSlotsAvailableFilter(  );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListNearValueFilter( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListNearValueFilter_params *params = (struct ISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListNearValueFilter_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking005 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    iface->AddRequestLobbyListNearValueFilter( params->pchKeyToMatch, params->nValueToBeCloseTo );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking005_GetLobbyByIndex( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking005_GetLobbyByIndex_params *params = (struct ISteamMatchmaking_SteamMatchMaking005_GetLobbyByIndex_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking005 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    *params->_ret = iface->GetLobbyByIndex( params->iLobby );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking005_CreateLobby( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking005_CreateLobby_params *params = (struct ISteamMatchmaking_SteamMatchMaking005_CreateLobby_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking005 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    iface->CreateLobby( params->eLobbyType );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking005_JoinLobby( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking005_JoinLobby_params *params = (struct ISteamMatchmaking_SteamMatchMaking005_JoinLobby_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking005 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    iface->JoinLobby( params->steamIDLobby );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking005_LeaveLobby( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking005_LeaveLobby_params *params = (struct ISteamMatchmaking_SteamMatchMaking005_LeaveLobby_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking005 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    iface->LeaveLobby( params->steamIDLobby );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking005_InviteUserToLobby( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking005_InviteUserToLobby_params *params = (struct ISteamMatchmaking_SteamMatchMaking005_InviteUserToLobby_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking005 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    params->_ret = iface->InviteUserToLobby( params->steamIDLobby, params->steamIDInvitee );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking005_GetNumLobbyMembers( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking005_GetNumLobbyMembers_params *params = (struct ISteamMatchmaking_SteamMatchMaking005_GetNumLobbyMembers_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking005 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    params->_ret = iface->GetNumLobbyMembers( params->steamIDLobby );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberByIndex( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberByIndex_params *params = (struct ISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberByIndex_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking005 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    *params->_ret = iface->GetLobbyMemberByIndex( params->steamIDLobby, params->iMember );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking005_GetLobbyData( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking005_GetLobbyData_params *params = (struct ISteamMatchmaking_SteamMatchMaking005_GetLobbyData_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking005 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    params->_ret = iface->GetLobbyData( params->steamIDLobby, params->pchKey );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking005_SetLobbyData( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking005_SetLobbyData_params *params = (struct ISteamMatchmaking_SteamMatchMaking005_SetLobbyData_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking005 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    params->_ret = iface->SetLobbyData( params->steamIDLobby, params->pchKey, params->pchValue );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberData( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberData_params *params = (struct ISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberData_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking005 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    params->_ret = iface->GetLobbyMemberData( params->steamIDLobby, params->steamIDUser, params->pchKey );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking005_SetLobbyMemberData( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking005_SetLobbyMemberData_params *params = (struct ISteamMatchmaking_SteamMatchMaking005_SetLobbyMemberData_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking005 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    iface->SetLobbyMemberData( params->steamIDLobby, params->pchKey, params->pchValue );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking005_SendLobbyChatMsg( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking005_SendLobbyChatMsg_params *params = (struct ISteamMatchmaking_SteamMatchMaking005_SendLobbyChatMsg_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking005 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    params->_ret = iface->SendLobbyChatMsg( params->steamIDLobby, params->pvMsgBody, params->cubMsgBody );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking005_GetLobbyChatEntry( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking005_GetLobbyChatEntry_params *params = (struct ISteamMatchmaking_SteamMatchMaking005_GetLobbyChatEntry_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking005 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    params->_ret = iface->GetLobbyChatEntry( params->steamIDLobby, params->iChatID, params->pSteamIDUser, params->pvData, params->cubData, params->peChatEntryType );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking005_RequestLobbyData( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking005_RequestLobbyData_params *params = (struct ISteamMatchmaking_SteamMatchMaking005_RequestLobbyData_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking005 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    params->_ret = iface->RequestLobbyData( params->steamIDLobby );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking005_SetLobbyGameServer( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking005_SetLobbyGameServer_params *params = (struct ISteamMatchmaking_SteamMatchMaking005_SetLobbyGameServer_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking005 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    iface->SetLobbyGameServer( params->steamIDLobby, params->unGameServerIP, params->unGameServerPort, params->steamIDGameServer );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking005_GetLobbyGameServer( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking005_GetLobbyGameServer_params *params = (struct ISteamMatchmaking_SteamMatchMaking005_GetLobbyGameServer_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking005 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    params->_ret = iface->GetLobbyGameServer( params->steamIDLobby, params->punGameServerIP, params->punGameServerPort, params->psteamIDGameServer );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking005_SetLobbyMemberLimit( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking005_SetLobbyMemberLimit_params *params = (struct ISteamMatchmaking_SteamMatchMaking005_SetLobbyMemberLimit_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking005 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    params->_ret = iface->SetLobbyMemberLimit( params->steamIDLobby, params->cMaxMembers );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberLimit( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberLimit_params *params = (struct ISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberLimit_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking005 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    params->_ret = iface->GetLobbyMemberLimit( params->steamIDLobby );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking005_RequestFriendsLobbies( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking005_RequestFriendsLobbies_params *params = (struct ISteamMatchmaking_SteamMatchMaking005_RequestFriendsLobbies_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking005 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    params->_ret = iface->RequestFriendsLobbies(  );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking005_SetLobbyType( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking005_SetLobbyType_params *params = (struct ISteamMatchmaking_SteamMatchMaking005_SetLobbyType_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking005 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    params->_ret = iface->SetLobbyType( params->steamIDLobby, params->eLobbyType );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking005_GetLobbyOwner( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking005_GetLobbyOwner_params *params = (struct ISteamMatchmaking_SteamMatchMaking005_GetLobbyOwner_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking005 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    *params->_ret = iface->GetLobbyOwner( params->steamIDLobby );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking005_GetLobbyDistance( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking005_GetLobbyDistance_params *params = (struct ISteamMatchmaking_SteamMatchMaking005_GetLobbyDistance_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking005 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    params->_ret = iface->GetLobbyDistance( params->steamIDLobby );
    return 0;
}

