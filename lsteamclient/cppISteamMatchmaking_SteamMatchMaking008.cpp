/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamMatchmaking_SteamMatchMaking008.h"

void cppISteamMatchmaking_SteamMatchMaking008_GetFavoriteGameCount( struct cppISteamMatchmaking_SteamMatchMaking008_GetFavoriteGameCount_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking008 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking008 *)params->linux_side;
    params->_ret = iface->GetFavoriteGameCount(  );
}

void cppISteamMatchmaking_SteamMatchMaking008_GetFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking008_GetFavoriteGame_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking008 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking008 *)params->linux_side;
    params->_ret = iface->GetFavoriteGame( params->iGame, params->pnAppID, params->pnIP, params->pnConnPort, params->pnQueryPort, params->punFlags, params->pRTime32LastPlayedOnServer );
}

void cppISteamMatchmaking_SteamMatchMaking008_AddFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking008_AddFavoriteGame_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking008 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking008 *)params->linux_side;
    params->_ret = iface->AddFavoriteGame( params->nAppID, params->nIP, params->nConnPort, params->nQueryPort, params->unFlags, params->rTime32LastPlayedOnServer );
}

void cppISteamMatchmaking_SteamMatchMaking008_RemoveFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking008_RemoveFavoriteGame_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking008 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking008 *)params->linux_side;
    params->_ret = iface->RemoveFavoriteGame( params->nAppID, params->nIP, params->nConnPort, params->nQueryPort, params->unFlags );
}

void cppISteamMatchmaking_SteamMatchMaking008_RequestLobbyList( struct cppISteamMatchmaking_SteamMatchMaking008_RequestLobbyList_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking008 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking008 *)params->linux_side;
    params->_ret = iface->RequestLobbyList(  );
}

void cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListStringFilter( struct cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListStringFilter_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking008 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking008 *)params->linux_side;
    iface->AddRequestLobbyListStringFilter( params->pchKeyToMatch, params->pchValueToMatch, params->eComparisonType );
}

void cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListNumericalFilter( struct cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListNumericalFilter_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking008 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking008 *)params->linux_side;
    iface->AddRequestLobbyListNumericalFilter( params->pchKeyToMatch, params->nValueToMatch, params->eComparisonType );
}

void cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListNearValueFilter( struct cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListNearValueFilter_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking008 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking008 *)params->linux_side;
    iface->AddRequestLobbyListNearValueFilter( params->pchKeyToMatch, params->nValueToBeCloseTo );
}

void cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListFilterSlotsAvailable( struct cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListFilterSlotsAvailable_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking008 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking008 *)params->linux_side;
    iface->AddRequestLobbyListFilterSlotsAvailable( params->nSlotsAvailable );
}

void cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListDistanceFilter( struct cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListDistanceFilter_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking008 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking008 *)params->linux_side;
    iface->AddRequestLobbyListDistanceFilter( params->eLobbyDistanceFilter );
}

void cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListResultCountFilter( struct cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListResultCountFilter_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking008 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking008 *)params->linux_side;
    iface->AddRequestLobbyListResultCountFilter( params->cMaxResults );
}

void cppISteamMatchmaking_SteamMatchMaking008_GetLobbyByIndex( struct cppISteamMatchmaking_SteamMatchMaking008_GetLobbyByIndex_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking008 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking008 *)params->linux_side;
    *params->_ret = iface->GetLobbyByIndex( params->iLobby );
}

void cppISteamMatchmaking_SteamMatchMaking008_CreateLobby( struct cppISteamMatchmaking_SteamMatchMaking008_CreateLobby_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking008 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking008 *)params->linux_side;
    params->_ret = iface->CreateLobby( params->eLobbyType, params->cMaxMembers );
}

void cppISteamMatchmaking_SteamMatchMaking008_JoinLobby( struct cppISteamMatchmaking_SteamMatchMaking008_JoinLobby_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking008 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking008 *)params->linux_side;
    params->_ret = iface->JoinLobby( params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking008_LeaveLobby( struct cppISteamMatchmaking_SteamMatchMaking008_LeaveLobby_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking008 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking008 *)params->linux_side;
    iface->LeaveLobby( params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking008_InviteUserToLobby( struct cppISteamMatchmaking_SteamMatchMaking008_InviteUserToLobby_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking008 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking008 *)params->linux_side;
    params->_ret = iface->InviteUserToLobby( params->steamIDLobby, params->steamIDInvitee );
}

void cppISteamMatchmaking_SteamMatchMaking008_GetNumLobbyMembers( struct cppISteamMatchmaking_SteamMatchMaking008_GetNumLobbyMembers_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking008 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking008 *)params->linux_side;
    params->_ret = iface->GetNumLobbyMembers( params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberByIndex( struct cppISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberByIndex_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking008 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking008 *)params->linux_side;
    *params->_ret = iface->GetLobbyMemberByIndex( params->steamIDLobby, params->iMember );
}

void cppISteamMatchmaking_SteamMatchMaking008_GetLobbyData( struct cppISteamMatchmaking_SteamMatchMaking008_GetLobbyData_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking008 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking008 *)params->linux_side;
    params->_ret = iface->GetLobbyData( params->steamIDLobby, params->pchKey );
}

void cppISteamMatchmaking_SteamMatchMaking008_SetLobbyData( struct cppISteamMatchmaking_SteamMatchMaking008_SetLobbyData_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking008 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking008 *)params->linux_side;
    params->_ret = iface->SetLobbyData( params->steamIDLobby, params->pchKey, params->pchValue );
}

void cppISteamMatchmaking_SteamMatchMaking008_GetLobbyDataCount( struct cppISteamMatchmaking_SteamMatchMaking008_GetLobbyDataCount_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking008 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking008 *)params->linux_side;
    params->_ret = iface->GetLobbyDataCount( params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking008_GetLobbyDataByIndex( struct cppISteamMatchmaking_SteamMatchMaking008_GetLobbyDataByIndex_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking008 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking008 *)params->linux_side;
    params->_ret = iface->GetLobbyDataByIndex( params->steamIDLobby, params->iLobbyData, params->pchKey, params->cchKeyBufferSize, params->pchValue, params->cchValueBufferSize );
}

void cppISteamMatchmaking_SteamMatchMaking008_DeleteLobbyData( struct cppISteamMatchmaking_SteamMatchMaking008_DeleteLobbyData_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking008 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking008 *)params->linux_side;
    params->_ret = iface->DeleteLobbyData( params->steamIDLobby, params->pchKey );
}

void cppISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberData( struct cppISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberData_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking008 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking008 *)params->linux_side;
    params->_ret = iface->GetLobbyMemberData( params->steamIDLobby, params->steamIDUser, params->pchKey );
}

void cppISteamMatchmaking_SteamMatchMaking008_SetLobbyMemberData( struct cppISteamMatchmaking_SteamMatchMaking008_SetLobbyMemberData_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking008 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking008 *)params->linux_side;
    iface->SetLobbyMemberData( params->steamIDLobby, params->pchKey, params->pchValue );
}

void cppISteamMatchmaking_SteamMatchMaking008_SendLobbyChatMsg( struct cppISteamMatchmaking_SteamMatchMaking008_SendLobbyChatMsg_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking008 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking008 *)params->linux_side;
    params->_ret = iface->SendLobbyChatMsg( params->steamIDLobby, params->pvMsgBody, params->cubMsgBody );
}

void cppISteamMatchmaking_SteamMatchMaking008_GetLobbyChatEntry( struct cppISteamMatchmaking_SteamMatchMaking008_GetLobbyChatEntry_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking008 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking008 *)params->linux_side;
    params->_ret = iface->GetLobbyChatEntry( params->steamIDLobby, params->iChatID, params->pSteamIDUser, params->pvData, params->cubData, params->peChatEntryType );
}

void cppISteamMatchmaking_SteamMatchMaking008_RequestLobbyData( struct cppISteamMatchmaking_SteamMatchMaking008_RequestLobbyData_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking008 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking008 *)params->linux_side;
    params->_ret = iface->RequestLobbyData( params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking008_SetLobbyGameServer( struct cppISteamMatchmaking_SteamMatchMaking008_SetLobbyGameServer_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking008 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking008 *)params->linux_side;
    iface->SetLobbyGameServer( params->steamIDLobby, params->unGameServerIP, params->unGameServerPort, params->steamIDGameServer );
}

void cppISteamMatchmaking_SteamMatchMaking008_GetLobbyGameServer( struct cppISteamMatchmaking_SteamMatchMaking008_GetLobbyGameServer_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking008 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking008 *)params->linux_side;
    params->_ret = iface->GetLobbyGameServer( params->steamIDLobby, params->punGameServerIP, params->punGameServerPort, params->psteamIDGameServer );
}

void cppISteamMatchmaking_SteamMatchMaking008_SetLobbyMemberLimit( struct cppISteamMatchmaking_SteamMatchMaking008_SetLobbyMemberLimit_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking008 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking008 *)params->linux_side;
    params->_ret = iface->SetLobbyMemberLimit( params->steamIDLobby, params->cMaxMembers );
}

void cppISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberLimit( struct cppISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberLimit_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking008 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking008 *)params->linux_side;
    params->_ret = iface->GetLobbyMemberLimit( params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking008_SetLobbyType( struct cppISteamMatchmaking_SteamMatchMaking008_SetLobbyType_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking008 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking008 *)params->linux_side;
    params->_ret = iface->SetLobbyType( params->steamIDLobby, params->eLobbyType );
}

void cppISteamMatchmaking_SteamMatchMaking008_SetLobbyJoinable( struct cppISteamMatchmaking_SteamMatchMaking008_SetLobbyJoinable_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking008 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking008 *)params->linux_side;
    params->_ret = iface->SetLobbyJoinable( params->steamIDLobby, params->bLobbyJoinable );
}

void cppISteamMatchmaking_SteamMatchMaking008_GetLobbyOwner( struct cppISteamMatchmaking_SteamMatchMaking008_GetLobbyOwner_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking008 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking008 *)params->linux_side;
    *params->_ret = iface->GetLobbyOwner( params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking008_SetLobbyOwner( struct cppISteamMatchmaking_SteamMatchMaking008_SetLobbyOwner_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking008 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking008 *)params->linux_side;
    params->_ret = iface->SetLobbyOwner( params->steamIDLobby, params->steamIDNewOwner );
}

