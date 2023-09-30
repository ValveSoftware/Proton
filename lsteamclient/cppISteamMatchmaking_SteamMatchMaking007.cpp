/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamMatchmaking_SteamMatchMaking007.h"

void cppISteamMatchmaking_SteamMatchMaking007_GetFavoriteGameCount( struct cppISteamMatchmaking_SteamMatchMaking007_GetFavoriteGameCount_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking007 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking007 *)params->linux_side;
    params->_ret = iface->GetFavoriteGameCount(  );
}

void cppISteamMatchmaking_SteamMatchMaking007_GetFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking007_GetFavoriteGame_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking007 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking007 *)params->linux_side;
    params->_ret = iface->GetFavoriteGame( params->iGame, params->pnAppID, params->pnIP, params->pnConnPort, params->pnQueryPort, params->punFlags, params->pRTime32LastPlayedOnServer );
}

void cppISteamMatchmaking_SteamMatchMaking007_AddFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking007_AddFavoriteGame_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking007 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking007 *)params->linux_side;
    params->_ret = iface->AddFavoriteGame( params->nAppID, params->nIP, params->nConnPort, params->nQueryPort, params->unFlags, params->rTime32LastPlayedOnServer );
}

void cppISteamMatchmaking_SteamMatchMaking007_RemoveFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking007_RemoveFavoriteGame_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking007 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking007 *)params->linux_side;
    params->_ret = iface->RemoveFavoriteGame( params->nAppID, params->nIP, params->nConnPort, params->nQueryPort, params->unFlags );
}

void cppISteamMatchmaking_SteamMatchMaking007_RequestLobbyList( struct cppISteamMatchmaking_SteamMatchMaking007_RequestLobbyList_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking007 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking007 *)params->linux_side;
    params->_ret = iface->RequestLobbyList(  );
}

void cppISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListStringFilter( struct cppISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListStringFilter_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking007 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking007 *)params->linux_side;
    iface->AddRequestLobbyListStringFilter( params->pchKeyToMatch, params->pchValueToMatch, params->eComparisonType );
}

void cppISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListNumericalFilter( struct cppISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListNumericalFilter_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking007 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking007 *)params->linux_side;
    iface->AddRequestLobbyListNumericalFilter( params->pchKeyToMatch, params->nValueToMatch, params->eComparisonType );
}

void cppISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListNearValueFilter( struct cppISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListNearValueFilter_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking007 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking007 *)params->linux_side;
    iface->AddRequestLobbyListNearValueFilter( params->pchKeyToMatch, params->nValueToBeCloseTo );
}

void cppISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListFilterSlotsAvailable( struct cppISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListFilterSlotsAvailable_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking007 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking007 *)params->linux_side;
    iface->AddRequestLobbyListFilterSlotsAvailable( params->nSlotsAvailable );
}

void cppISteamMatchmaking_SteamMatchMaking007_GetLobbyByIndex( struct cppISteamMatchmaking_SteamMatchMaking007_GetLobbyByIndex_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking007 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking007 *)params->linux_side;
    *params->_ret = iface->GetLobbyByIndex( params->iLobby );
}

void cppISteamMatchmaking_SteamMatchMaking007_CreateLobby( struct cppISteamMatchmaking_SteamMatchMaking007_CreateLobby_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking007 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking007 *)params->linux_side;
    params->_ret = iface->CreateLobby( params->eLobbyType, params->cMaxMembers );
}

void cppISteamMatchmaking_SteamMatchMaking007_JoinLobby( struct cppISteamMatchmaking_SteamMatchMaking007_JoinLobby_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking007 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking007 *)params->linux_side;
    params->_ret = iface->JoinLobby( params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking007_LeaveLobby( struct cppISteamMatchmaking_SteamMatchMaking007_LeaveLobby_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking007 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking007 *)params->linux_side;
    iface->LeaveLobby( params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking007_InviteUserToLobby( struct cppISteamMatchmaking_SteamMatchMaking007_InviteUserToLobby_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking007 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking007 *)params->linux_side;
    params->_ret = iface->InviteUserToLobby( params->steamIDLobby, params->steamIDInvitee );
}

void cppISteamMatchmaking_SteamMatchMaking007_GetNumLobbyMembers( struct cppISteamMatchmaking_SteamMatchMaking007_GetNumLobbyMembers_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking007 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking007 *)params->linux_side;
    params->_ret = iface->GetNumLobbyMembers( params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking007_GetLobbyMemberByIndex( struct cppISteamMatchmaking_SteamMatchMaking007_GetLobbyMemberByIndex_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking007 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking007 *)params->linux_side;
    *params->_ret = iface->GetLobbyMemberByIndex( params->steamIDLobby, params->iMember );
}

void cppISteamMatchmaking_SteamMatchMaking007_GetLobbyData( struct cppISteamMatchmaking_SteamMatchMaking007_GetLobbyData_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking007 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking007 *)params->linux_side;
    params->_ret = iface->GetLobbyData( params->steamIDLobby, params->pchKey );
}

void cppISteamMatchmaking_SteamMatchMaking007_SetLobbyData( struct cppISteamMatchmaking_SteamMatchMaking007_SetLobbyData_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking007 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking007 *)params->linux_side;
    params->_ret = iface->SetLobbyData( params->steamIDLobby, params->pchKey, params->pchValue );
}

void cppISteamMatchmaking_SteamMatchMaking007_GetLobbyDataCount( struct cppISteamMatchmaking_SteamMatchMaking007_GetLobbyDataCount_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking007 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking007 *)params->linux_side;
    params->_ret = iface->GetLobbyDataCount( params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking007_GetLobbyDataByIndex( struct cppISteamMatchmaking_SteamMatchMaking007_GetLobbyDataByIndex_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking007 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking007 *)params->linux_side;
    params->_ret = iface->GetLobbyDataByIndex( params->steamIDLobby, params->iLobbyData, params->pchKey, params->cchKeyBufferSize, params->pchValue, params->cchValueBufferSize );
}

void cppISteamMatchmaking_SteamMatchMaking007_DeleteLobbyData( struct cppISteamMatchmaking_SteamMatchMaking007_DeleteLobbyData_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking007 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking007 *)params->linux_side;
    params->_ret = iface->DeleteLobbyData( params->steamIDLobby, params->pchKey );
}

void cppISteamMatchmaking_SteamMatchMaking007_GetLobbyMemberData( struct cppISteamMatchmaking_SteamMatchMaking007_GetLobbyMemberData_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking007 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking007 *)params->linux_side;
    params->_ret = iface->GetLobbyMemberData( params->steamIDLobby, params->steamIDUser, params->pchKey );
}

void cppISteamMatchmaking_SteamMatchMaking007_SetLobbyMemberData( struct cppISteamMatchmaking_SteamMatchMaking007_SetLobbyMemberData_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking007 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking007 *)params->linux_side;
    iface->SetLobbyMemberData( params->steamIDLobby, params->pchKey, params->pchValue );
}

void cppISteamMatchmaking_SteamMatchMaking007_SendLobbyChatMsg( struct cppISteamMatchmaking_SteamMatchMaking007_SendLobbyChatMsg_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking007 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking007 *)params->linux_side;
    params->_ret = iface->SendLobbyChatMsg( params->steamIDLobby, params->pvMsgBody, params->cubMsgBody );
}

void cppISteamMatchmaking_SteamMatchMaking007_GetLobbyChatEntry( struct cppISteamMatchmaking_SteamMatchMaking007_GetLobbyChatEntry_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking007 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking007 *)params->linux_side;
    params->_ret = iface->GetLobbyChatEntry( params->steamIDLobby, params->iChatID, params->pSteamIDUser, params->pvData, params->cubData, params->peChatEntryType );
}

void cppISteamMatchmaking_SteamMatchMaking007_RequestLobbyData( struct cppISteamMatchmaking_SteamMatchMaking007_RequestLobbyData_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking007 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking007 *)params->linux_side;
    params->_ret = iface->RequestLobbyData( params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking007_SetLobbyGameServer( struct cppISteamMatchmaking_SteamMatchMaking007_SetLobbyGameServer_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking007 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking007 *)params->linux_side;
    iface->SetLobbyGameServer( params->steamIDLobby, params->unGameServerIP, params->unGameServerPort, params->steamIDGameServer );
}

void cppISteamMatchmaking_SteamMatchMaking007_GetLobbyGameServer( struct cppISteamMatchmaking_SteamMatchMaking007_GetLobbyGameServer_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking007 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking007 *)params->linux_side;
    params->_ret = iface->GetLobbyGameServer( params->steamIDLobby, params->punGameServerIP, params->punGameServerPort, params->psteamIDGameServer );
}

void cppISteamMatchmaking_SteamMatchMaking007_SetLobbyMemberLimit( struct cppISteamMatchmaking_SteamMatchMaking007_SetLobbyMemberLimit_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking007 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking007 *)params->linux_side;
    params->_ret = iface->SetLobbyMemberLimit( params->steamIDLobby, params->cMaxMembers );
}

void cppISteamMatchmaking_SteamMatchMaking007_GetLobbyMemberLimit( struct cppISteamMatchmaking_SteamMatchMaking007_GetLobbyMemberLimit_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking007 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking007 *)params->linux_side;
    params->_ret = iface->GetLobbyMemberLimit( params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking007_SetLobbyType( struct cppISteamMatchmaking_SteamMatchMaking007_SetLobbyType_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking007 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking007 *)params->linux_side;
    params->_ret = iface->SetLobbyType( params->steamIDLobby, params->eLobbyType );
}

void cppISteamMatchmaking_SteamMatchMaking007_SetLobbyJoinable( struct cppISteamMatchmaking_SteamMatchMaking007_SetLobbyJoinable_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking007 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking007 *)params->linux_side;
    params->_ret = iface->SetLobbyJoinable( params->steamIDLobby, params->bLobbyJoinable );
}

void cppISteamMatchmaking_SteamMatchMaking007_GetLobbyOwner( struct cppISteamMatchmaking_SteamMatchMaking007_GetLobbyOwner_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking007 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking007 *)params->linux_side;
    *params->_ret = iface->GetLobbyOwner( params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking007_SetLobbyOwner( struct cppISteamMatchmaking_SteamMatchMaking007_SetLobbyOwner_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking007 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking007 *)params->linux_side;
    params->_ret = iface->SetLobbyOwner( params->steamIDLobby, params->steamIDNewOwner );
}

