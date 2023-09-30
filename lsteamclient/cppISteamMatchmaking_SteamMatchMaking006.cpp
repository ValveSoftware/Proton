/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamMatchmaking_SteamMatchMaking006_GetFavoriteGameCount( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking006_GetFavoriteGameCount_params *params = (struct ISteamMatchmaking_SteamMatchMaking006_GetFavoriteGameCount_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking006 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking006 *)params->linux_side;
    params->_ret = iface->GetFavoriteGameCount(  );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking006_GetFavoriteGame( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking006_GetFavoriteGame_params *params = (struct ISteamMatchmaking_SteamMatchMaking006_GetFavoriteGame_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking006 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking006 *)params->linux_side;
    params->_ret = iface->GetFavoriteGame( params->iGame, params->pnAppID, params->pnIP, params->pnConnPort, params->pnQueryPort, params->punFlags, params->pRTime32LastPlayedOnServer );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking006_AddFavoriteGame( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking006_AddFavoriteGame_params *params = (struct ISteamMatchmaking_SteamMatchMaking006_AddFavoriteGame_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking006 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking006 *)params->linux_side;
    params->_ret = iface->AddFavoriteGame( params->nAppID, params->nIP, params->nConnPort, params->nQueryPort, params->unFlags, params->rTime32LastPlayedOnServer );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking006_RemoveFavoriteGame( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking006_RemoveFavoriteGame_params *params = (struct ISteamMatchmaking_SteamMatchMaking006_RemoveFavoriteGame_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking006 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking006 *)params->linux_side;
    params->_ret = iface->RemoveFavoriteGame( params->nAppID, params->nIP, params->nConnPort, params->nQueryPort, params->unFlags );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking006_RequestLobbyList( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking006_RequestLobbyList_params *params = (struct ISteamMatchmaking_SteamMatchMaking006_RequestLobbyList_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking006 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking006 *)params->linux_side;
    params->_ret = iface->RequestLobbyList(  );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListFilter( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListFilter_params *params = (struct ISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListFilter_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking006 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking006 *)params->linux_side;
    iface->AddRequestLobbyListFilter( params->pchKeyToMatch, params->pchValueToMatch );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListNumericalFilter( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListNumericalFilter_params *params = (struct ISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListNumericalFilter_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking006 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking006 *)params->linux_side;
    iface->AddRequestLobbyListNumericalFilter( params->pchKeyToMatch, params->nValueToMatch, params->nComparisonType );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListNearValueFilter( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListNearValueFilter_params *params = (struct ISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListNearValueFilter_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking006 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking006 *)params->linux_side;
    iface->AddRequestLobbyListNearValueFilter( params->pchKeyToMatch, params->nValueToBeCloseTo );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking006_GetLobbyByIndex( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking006_GetLobbyByIndex_params *params = (struct ISteamMatchmaking_SteamMatchMaking006_GetLobbyByIndex_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking006 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking006 *)params->linux_side;
    *params->_ret = iface->GetLobbyByIndex( params->iLobby );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking006_CreateLobby( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking006_CreateLobby_params *params = (struct ISteamMatchmaking_SteamMatchMaking006_CreateLobby_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking006 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking006 *)params->linux_side;
    params->_ret = iface->CreateLobby( params->eLobbyType );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking006_JoinLobby( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking006_JoinLobby_params *params = (struct ISteamMatchmaking_SteamMatchMaking006_JoinLobby_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking006 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking006 *)params->linux_side;
    params->_ret = iface->JoinLobby( params->steamIDLobby );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking006_LeaveLobby( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking006_LeaveLobby_params *params = (struct ISteamMatchmaking_SteamMatchMaking006_LeaveLobby_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking006 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking006 *)params->linux_side;
    iface->LeaveLobby( params->steamIDLobby );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking006_InviteUserToLobby( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking006_InviteUserToLobby_params *params = (struct ISteamMatchmaking_SteamMatchMaking006_InviteUserToLobby_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking006 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking006 *)params->linux_side;
    params->_ret = iface->InviteUserToLobby( params->steamIDLobby, params->steamIDInvitee );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking006_GetNumLobbyMembers( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking006_GetNumLobbyMembers_params *params = (struct ISteamMatchmaking_SteamMatchMaking006_GetNumLobbyMembers_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking006 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking006 *)params->linux_side;
    params->_ret = iface->GetNumLobbyMembers( params->steamIDLobby );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberByIndex( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberByIndex_params *params = (struct ISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberByIndex_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking006 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking006 *)params->linux_side;
    *params->_ret = iface->GetLobbyMemberByIndex( params->steamIDLobby, params->iMember );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking006_GetLobbyData( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking006_GetLobbyData_params *params = (struct ISteamMatchmaking_SteamMatchMaking006_GetLobbyData_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking006 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking006 *)params->linux_side;
    params->_ret = iface->GetLobbyData( params->steamIDLobby, params->pchKey );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking006_SetLobbyData( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking006_SetLobbyData_params *params = (struct ISteamMatchmaking_SteamMatchMaking006_SetLobbyData_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking006 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking006 *)params->linux_side;
    params->_ret = iface->SetLobbyData( params->steamIDLobby, params->pchKey, params->pchValue );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberData( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberData_params *params = (struct ISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberData_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking006 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking006 *)params->linux_side;
    params->_ret = iface->GetLobbyMemberData( params->steamIDLobby, params->steamIDUser, params->pchKey );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking006_SetLobbyMemberData( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking006_SetLobbyMemberData_params *params = (struct ISteamMatchmaking_SteamMatchMaking006_SetLobbyMemberData_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking006 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking006 *)params->linux_side;
    iface->SetLobbyMemberData( params->steamIDLobby, params->pchKey, params->pchValue );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking006_SendLobbyChatMsg( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking006_SendLobbyChatMsg_params *params = (struct ISteamMatchmaking_SteamMatchMaking006_SendLobbyChatMsg_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking006 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking006 *)params->linux_side;
    params->_ret = iface->SendLobbyChatMsg( params->steamIDLobby, params->pvMsgBody, params->cubMsgBody );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking006_GetLobbyChatEntry( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking006_GetLobbyChatEntry_params *params = (struct ISteamMatchmaking_SteamMatchMaking006_GetLobbyChatEntry_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking006 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking006 *)params->linux_side;
    params->_ret = iface->GetLobbyChatEntry( params->steamIDLobby, params->iChatID, params->pSteamIDUser, params->pvData, params->cubData, params->peChatEntryType );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking006_RequestLobbyData( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking006_RequestLobbyData_params *params = (struct ISteamMatchmaking_SteamMatchMaking006_RequestLobbyData_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking006 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking006 *)params->linux_side;
    params->_ret = iface->RequestLobbyData( params->steamIDLobby );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking006_SetLobbyGameServer( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking006_SetLobbyGameServer_params *params = (struct ISteamMatchmaking_SteamMatchMaking006_SetLobbyGameServer_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking006 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking006 *)params->linux_side;
    iface->SetLobbyGameServer( params->steamIDLobby, params->unGameServerIP, params->unGameServerPort, params->steamIDGameServer );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking006_GetLobbyGameServer( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking006_GetLobbyGameServer_params *params = (struct ISteamMatchmaking_SteamMatchMaking006_GetLobbyGameServer_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking006 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking006 *)params->linux_side;
    params->_ret = iface->GetLobbyGameServer( params->steamIDLobby, params->punGameServerIP, params->punGameServerPort, params->psteamIDGameServer );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking006_SetLobbyMemberLimit( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking006_SetLobbyMemberLimit_params *params = (struct ISteamMatchmaking_SteamMatchMaking006_SetLobbyMemberLimit_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking006 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking006 *)params->linux_side;
    params->_ret = iface->SetLobbyMemberLimit( params->steamIDLobby, params->cMaxMembers );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberLimit( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberLimit_params *params = (struct ISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberLimit_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking006 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking006 *)params->linux_side;
    params->_ret = iface->GetLobbyMemberLimit( params->steamIDLobby );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking006_SetLobbyType( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking006_SetLobbyType_params *params = (struct ISteamMatchmaking_SteamMatchMaking006_SetLobbyType_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking006 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking006 *)params->linux_side;
    params->_ret = iface->SetLobbyType( params->steamIDLobby, params->eLobbyType );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking006_GetLobbyOwner( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking006_GetLobbyOwner_params *params = (struct ISteamMatchmaking_SteamMatchMaking006_GetLobbyOwner_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking006 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking006 *)params->linux_side;
    *params->_ret = iface->GetLobbyOwner( params->steamIDLobby );
    return 0;
}

