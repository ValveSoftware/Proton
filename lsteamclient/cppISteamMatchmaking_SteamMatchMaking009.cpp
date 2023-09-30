/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamMatchmaking_SteamMatchMaking009_GetFavoriteGameCount( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking009_GetFavoriteGameCount_params *params = (struct ISteamMatchmaking_SteamMatchMaking009_GetFavoriteGameCount_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking009 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->GetFavoriteGameCount(  );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking009_GetFavoriteGame( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking009_GetFavoriteGame_params *params = (struct ISteamMatchmaking_SteamMatchMaking009_GetFavoriteGame_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking009 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->GetFavoriteGame( params->iGame, params->pnAppID, params->pnIP, params->pnConnPort, params->pnQueryPort, params->punFlags, params->pRTime32LastPlayedOnServer );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking009_AddFavoriteGame( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking009_AddFavoriteGame_params *params = (struct ISteamMatchmaking_SteamMatchMaking009_AddFavoriteGame_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking009 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->AddFavoriteGame( params->nAppID, params->nIP, params->nConnPort, params->nQueryPort, params->unFlags, params->rTime32LastPlayedOnServer );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking009_RemoveFavoriteGame( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking009_RemoveFavoriteGame_params *params = (struct ISteamMatchmaking_SteamMatchMaking009_RemoveFavoriteGame_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking009 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->RemoveFavoriteGame( params->nAppID, params->nIP, params->nConnPort, params->nQueryPort, params->unFlags );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking009_RequestLobbyList( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking009_RequestLobbyList_params *params = (struct ISteamMatchmaking_SteamMatchMaking009_RequestLobbyList_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking009 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->RequestLobbyList(  );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListStringFilter( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListStringFilter_params *params = (struct ISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListStringFilter_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking009 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    iface->AddRequestLobbyListStringFilter( params->pchKeyToMatch, params->pchValueToMatch, params->eComparisonType );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListNumericalFilter( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListNumericalFilter_params *params = (struct ISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListNumericalFilter_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking009 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    iface->AddRequestLobbyListNumericalFilter( params->pchKeyToMatch, params->nValueToMatch, params->eComparisonType );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListNearValueFilter( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListNearValueFilter_params *params = (struct ISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListNearValueFilter_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking009 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    iface->AddRequestLobbyListNearValueFilter( params->pchKeyToMatch, params->nValueToBeCloseTo );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListFilterSlotsAvailable( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListFilterSlotsAvailable_params *params = (struct ISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListFilterSlotsAvailable_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking009 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    iface->AddRequestLobbyListFilterSlotsAvailable( params->nSlotsAvailable );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListDistanceFilter( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListDistanceFilter_params *params = (struct ISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListDistanceFilter_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking009 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    iface->AddRequestLobbyListDistanceFilter( params->eLobbyDistanceFilter );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListResultCountFilter( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListResultCountFilter_params *params = (struct ISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListResultCountFilter_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking009 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    iface->AddRequestLobbyListResultCountFilter( params->cMaxResults );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListCompatibleMembersFilter( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListCompatibleMembersFilter_params *params = (struct ISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListCompatibleMembersFilter_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking009 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    iface->AddRequestLobbyListCompatibleMembersFilter( params->steamIDLobby );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking009_GetLobbyByIndex( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking009_GetLobbyByIndex_params *params = (struct ISteamMatchmaking_SteamMatchMaking009_GetLobbyByIndex_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking009 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    *params->_ret = iface->GetLobbyByIndex( params->iLobby );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking009_CreateLobby( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking009_CreateLobby_params *params = (struct ISteamMatchmaking_SteamMatchMaking009_CreateLobby_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking009 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->CreateLobby( params->eLobbyType, params->cMaxMembers );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking009_JoinLobby( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking009_JoinLobby_params *params = (struct ISteamMatchmaking_SteamMatchMaking009_JoinLobby_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking009 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->JoinLobby( params->steamIDLobby );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking009_LeaveLobby( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking009_LeaveLobby_params *params = (struct ISteamMatchmaking_SteamMatchMaking009_LeaveLobby_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking009 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    iface->LeaveLobby( params->steamIDLobby );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking009_InviteUserToLobby( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking009_InviteUserToLobby_params *params = (struct ISteamMatchmaking_SteamMatchMaking009_InviteUserToLobby_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking009 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->InviteUserToLobby( params->steamIDLobby, params->steamIDInvitee );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking009_GetNumLobbyMembers( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking009_GetNumLobbyMembers_params *params = (struct ISteamMatchmaking_SteamMatchMaking009_GetNumLobbyMembers_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking009 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->GetNumLobbyMembers( params->steamIDLobby );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberByIndex( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberByIndex_params *params = (struct ISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberByIndex_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking009 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    *params->_ret = iface->GetLobbyMemberByIndex( params->steamIDLobby, params->iMember );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking009_GetLobbyData( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking009_GetLobbyData_params *params = (struct ISteamMatchmaking_SteamMatchMaking009_GetLobbyData_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking009 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->GetLobbyData( params->steamIDLobby, params->pchKey );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking009_SetLobbyData( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking009_SetLobbyData_params *params = (struct ISteamMatchmaking_SteamMatchMaking009_SetLobbyData_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking009 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->SetLobbyData( params->steamIDLobby, params->pchKey, params->pchValue );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking009_GetLobbyDataCount( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking009_GetLobbyDataCount_params *params = (struct ISteamMatchmaking_SteamMatchMaking009_GetLobbyDataCount_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking009 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->GetLobbyDataCount( params->steamIDLobby );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking009_GetLobbyDataByIndex( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking009_GetLobbyDataByIndex_params *params = (struct ISteamMatchmaking_SteamMatchMaking009_GetLobbyDataByIndex_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking009 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->GetLobbyDataByIndex( params->steamIDLobby, params->iLobbyData, params->pchKey, params->cchKeyBufferSize, params->pchValue, params->cchValueBufferSize );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking009_DeleteLobbyData( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking009_DeleteLobbyData_params *params = (struct ISteamMatchmaking_SteamMatchMaking009_DeleteLobbyData_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking009 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->DeleteLobbyData( params->steamIDLobby, params->pchKey );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberData( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberData_params *params = (struct ISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberData_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking009 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->GetLobbyMemberData( params->steamIDLobby, params->steamIDUser, params->pchKey );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking009_SetLobbyMemberData( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking009_SetLobbyMemberData_params *params = (struct ISteamMatchmaking_SteamMatchMaking009_SetLobbyMemberData_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking009 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    iface->SetLobbyMemberData( params->steamIDLobby, params->pchKey, params->pchValue );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking009_SendLobbyChatMsg( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking009_SendLobbyChatMsg_params *params = (struct ISteamMatchmaking_SteamMatchMaking009_SendLobbyChatMsg_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking009 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->SendLobbyChatMsg( params->steamIDLobby, params->pvMsgBody, params->cubMsgBody );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking009_GetLobbyChatEntry( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking009_GetLobbyChatEntry_params *params = (struct ISteamMatchmaking_SteamMatchMaking009_GetLobbyChatEntry_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking009 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->GetLobbyChatEntry( params->steamIDLobby, params->iChatID, params->pSteamIDUser, params->pvData, params->cubData, params->peChatEntryType );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking009_RequestLobbyData( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking009_RequestLobbyData_params *params = (struct ISteamMatchmaking_SteamMatchMaking009_RequestLobbyData_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking009 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->RequestLobbyData( params->steamIDLobby );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking009_SetLobbyGameServer( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking009_SetLobbyGameServer_params *params = (struct ISteamMatchmaking_SteamMatchMaking009_SetLobbyGameServer_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking009 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    iface->SetLobbyGameServer( params->steamIDLobby, params->unGameServerIP, params->unGameServerPort, params->steamIDGameServer );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking009_GetLobbyGameServer( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking009_GetLobbyGameServer_params *params = (struct ISteamMatchmaking_SteamMatchMaking009_GetLobbyGameServer_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking009 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->GetLobbyGameServer( params->steamIDLobby, params->punGameServerIP, params->punGameServerPort, params->psteamIDGameServer );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking009_SetLobbyMemberLimit( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking009_SetLobbyMemberLimit_params *params = (struct ISteamMatchmaking_SteamMatchMaking009_SetLobbyMemberLimit_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking009 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->SetLobbyMemberLimit( params->steamIDLobby, params->cMaxMembers );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberLimit( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberLimit_params *params = (struct ISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberLimit_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking009 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->GetLobbyMemberLimit( params->steamIDLobby );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking009_SetLobbyType( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking009_SetLobbyType_params *params = (struct ISteamMatchmaking_SteamMatchMaking009_SetLobbyType_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking009 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->SetLobbyType( params->steamIDLobby, params->eLobbyType );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking009_SetLobbyJoinable( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking009_SetLobbyJoinable_params *params = (struct ISteamMatchmaking_SteamMatchMaking009_SetLobbyJoinable_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking009 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->SetLobbyJoinable( params->steamIDLobby, params->bLobbyJoinable );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking009_GetLobbyOwner( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking009_GetLobbyOwner_params *params = (struct ISteamMatchmaking_SteamMatchMaking009_GetLobbyOwner_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking009 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    *params->_ret = iface->GetLobbyOwner( params->steamIDLobby );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking009_SetLobbyOwner( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking009_SetLobbyOwner_params *params = (struct ISteamMatchmaking_SteamMatchMaking009_SetLobbyOwner_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking009 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->SetLobbyOwner( params->steamIDLobby, params->steamIDNewOwner );
    return 0;
}

NTSTATUS ISteamMatchmaking_SteamMatchMaking009_SetLinkedLobby( void *args )
{
    struct ISteamMatchmaking_SteamMatchMaking009_SetLinkedLobby_params *params = (struct ISteamMatchmaking_SteamMatchMaking009_SetLinkedLobby_params *)args;
    struct u_ISteamMatchmaking_SteamMatchMaking009 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->SetLinkedLobby( params->steamIDLobby, params->steamIDLobbyDependent );
    return 0;
}

