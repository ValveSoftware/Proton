#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_158/steam_api.h"
#include "steamworks_sdk_158/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_158
#include "struct_converters.h"
#include "cppISteamMatchmaking_SteamMatchMaking009.h"
void cppISteamMatchmaking_SteamMatchMaking009_GetFavoriteGameCount( struct cppISteamMatchmaking_SteamMatchMaking009_GetFavoriteGameCount_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->GetFavoriteGameCount(  );
}

void cppISteamMatchmaking_SteamMatchMaking009_GetFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking009_GetFavoriteGame_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->GetFavoriteGame( (int)params->iGame, (AppId_t *)params->pnAppID, (uint32 *)params->pnIP, (uint16 *)params->pnConnPort, (uint16 *)params->pnQueryPort, (uint32 *)params->punFlags, (uint32 *)params->pRTime32LastPlayedOnServer );
}

void cppISteamMatchmaking_SteamMatchMaking009_AddFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking009_AddFavoriteGame_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->AddFavoriteGame( (AppId_t)params->nAppID, (uint32)params->nIP, (uint16)params->nConnPort, (uint16)params->nQueryPort, (uint32)params->unFlags, (uint32)params->rTime32LastPlayedOnServer );
}

void cppISteamMatchmaking_SteamMatchMaking009_RemoveFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking009_RemoveFavoriteGame_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->RemoveFavoriteGame( (AppId_t)params->nAppID, (uint32)params->nIP, (uint16)params->nConnPort, (uint16)params->nQueryPort, (uint32)params->unFlags );
}

void cppISteamMatchmaking_SteamMatchMaking009_RequestLobbyList( struct cppISteamMatchmaking_SteamMatchMaking009_RequestLobbyList_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->RequestLobbyList(  );
}

void cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListStringFilter( struct cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListStringFilter_params *params )
{
    ((ISteamMatchmaking*)params->linux_side)->AddRequestLobbyListStringFilter( (const char *)params->pchKeyToMatch, (const char *)params->pchValueToMatch, (ELobbyComparison)params->eComparisonType );
}

void cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListNumericalFilter( struct cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListNumericalFilter_params *params )
{
    ((ISteamMatchmaking*)params->linux_side)->AddRequestLobbyListNumericalFilter( (const char *)params->pchKeyToMatch, (int)params->nValueToMatch, (ELobbyComparison)params->eComparisonType );
}

void cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListNearValueFilter( struct cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListNearValueFilter_params *params )
{
    ((ISteamMatchmaking*)params->linux_side)->AddRequestLobbyListNearValueFilter( (const char *)params->pchKeyToMatch, (int)params->nValueToBeCloseTo );
}

void cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListFilterSlotsAvailable( struct cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListFilterSlotsAvailable_params *params )
{
    ((ISteamMatchmaking*)params->linux_side)->AddRequestLobbyListFilterSlotsAvailable( (int)params->nSlotsAvailable );
}

void cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListDistanceFilter( struct cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListDistanceFilter_params *params )
{
    ((ISteamMatchmaking*)params->linux_side)->AddRequestLobbyListDistanceFilter( (ELobbyDistanceFilter)params->eLobbyDistanceFilter );
}

void cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListResultCountFilter( struct cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListResultCountFilter_params *params )
{
    ((ISteamMatchmaking*)params->linux_side)->AddRequestLobbyListResultCountFilter( (int)params->cMaxResults );
}

void cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListCompatibleMembersFilter( struct cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListCompatibleMembersFilter_params *params )
{
    ((ISteamMatchmaking*)params->linux_side)->AddRequestLobbyListCompatibleMembersFilter( (CSteamID)params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking009_GetLobbyByIndex( struct cppISteamMatchmaking_SteamMatchMaking009_GetLobbyByIndex_params *params )
{
    *params->_ret = ((ISteamMatchmaking*)params->linux_side)->GetLobbyByIndex( (int)params->iLobby );
}

void cppISteamMatchmaking_SteamMatchMaking009_CreateLobby( struct cppISteamMatchmaking_SteamMatchMaking009_CreateLobby_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->CreateLobby( (ELobbyType)params->eLobbyType, (int)params->cMaxMembers );
}

void cppISteamMatchmaking_SteamMatchMaking009_JoinLobby( struct cppISteamMatchmaking_SteamMatchMaking009_JoinLobby_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->JoinLobby( (CSteamID)params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking009_LeaveLobby( struct cppISteamMatchmaking_SteamMatchMaking009_LeaveLobby_params *params )
{
    ((ISteamMatchmaking*)params->linux_side)->LeaveLobby( (CSteamID)params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking009_InviteUserToLobby( struct cppISteamMatchmaking_SteamMatchMaking009_InviteUserToLobby_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->InviteUserToLobby( (CSteamID)params->steamIDLobby, (CSteamID)params->steamIDInvitee );
}

void cppISteamMatchmaking_SteamMatchMaking009_GetNumLobbyMembers( struct cppISteamMatchmaking_SteamMatchMaking009_GetNumLobbyMembers_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->GetNumLobbyMembers( (CSteamID)params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberByIndex( struct cppISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberByIndex_params *params )
{
    *params->_ret = ((ISteamMatchmaking*)params->linux_side)->GetLobbyMemberByIndex( (CSteamID)params->steamIDLobby, (int)params->iMember );
}

void cppISteamMatchmaking_SteamMatchMaking009_GetLobbyData( struct cppISteamMatchmaking_SteamMatchMaking009_GetLobbyData_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->GetLobbyData( (CSteamID)params->steamIDLobby, (const char *)params->pchKey );
}

void cppISteamMatchmaking_SteamMatchMaking009_SetLobbyData( struct cppISteamMatchmaking_SteamMatchMaking009_SetLobbyData_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->SetLobbyData( (CSteamID)params->steamIDLobby, (const char *)params->pchKey, (const char *)params->pchValue );
}

void cppISteamMatchmaking_SteamMatchMaking009_GetLobbyDataCount( struct cppISteamMatchmaking_SteamMatchMaking009_GetLobbyDataCount_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->GetLobbyDataCount( (CSteamID)params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking009_GetLobbyDataByIndex( struct cppISteamMatchmaking_SteamMatchMaking009_GetLobbyDataByIndex_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->GetLobbyDataByIndex( (CSteamID)params->steamIDLobby, (int)params->iLobbyData, (char *)params->pchKey, (int)params->cchKeyBufferSize, (char *)params->pchValue, (int)params->cchValueBufferSize );
}

void cppISteamMatchmaking_SteamMatchMaking009_DeleteLobbyData( struct cppISteamMatchmaking_SteamMatchMaking009_DeleteLobbyData_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->DeleteLobbyData( (CSteamID)params->steamIDLobby, (const char *)params->pchKey );
}

void cppISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberData( struct cppISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberData_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->GetLobbyMemberData( (CSteamID)params->steamIDLobby, (CSteamID)params->steamIDUser, (const char *)params->pchKey );
}

void cppISteamMatchmaking_SteamMatchMaking009_SetLobbyMemberData( struct cppISteamMatchmaking_SteamMatchMaking009_SetLobbyMemberData_params *params )
{
    ((ISteamMatchmaking*)params->linux_side)->SetLobbyMemberData( (CSteamID)params->steamIDLobby, (const char *)params->pchKey, (const char *)params->pchValue );
}

void cppISteamMatchmaking_SteamMatchMaking009_SendLobbyChatMsg( struct cppISteamMatchmaking_SteamMatchMaking009_SendLobbyChatMsg_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->SendLobbyChatMsg( (CSteamID)params->steamIDLobby, (const void *)params->pvMsgBody, (int)params->cubMsgBody );
}

void cppISteamMatchmaking_SteamMatchMaking009_GetLobbyChatEntry( struct cppISteamMatchmaking_SteamMatchMaking009_GetLobbyChatEntry_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->GetLobbyChatEntry( (CSteamID)params->steamIDLobby, (int)params->iChatID, (CSteamID *)params->pSteamIDUser, (void *)params->pvData, (int)params->cubData, (EChatEntryType *)params->peChatEntryType );
}

void cppISteamMatchmaking_SteamMatchMaking009_RequestLobbyData( struct cppISteamMatchmaking_SteamMatchMaking009_RequestLobbyData_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->RequestLobbyData( (CSteamID)params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking009_SetLobbyGameServer( struct cppISteamMatchmaking_SteamMatchMaking009_SetLobbyGameServer_params *params )
{
    ((ISteamMatchmaking*)params->linux_side)->SetLobbyGameServer( (CSteamID)params->steamIDLobby, (uint32)params->unGameServerIP, (uint16)params->unGameServerPort, (CSteamID)params->steamIDGameServer );
}

void cppISteamMatchmaking_SteamMatchMaking009_GetLobbyGameServer( struct cppISteamMatchmaking_SteamMatchMaking009_GetLobbyGameServer_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->GetLobbyGameServer( (CSteamID)params->steamIDLobby, (uint32 *)params->punGameServerIP, (uint16 *)params->punGameServerPort, (CSteamID *)params->psteamIDGameServer );
}

void cppISteamMatchmaking_SteamMatchMaking009_SetLobbyMemberLimit( struct cppISteamMatchmaking_SteamMatchMaking009_SetLobbyMemberLimit_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->SetLobbyMemberLimit( (CSteamID)params->steamIDLobby, (int)params->cMaxMembers );
}

void cppISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberLimit( struct cppISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberLimit_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->GetLobbyMemberLimit( (CSteamID)params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking009_SetLobbyType( struct cppISteamMatchmaking_SteamMatchMaking009_SetLobbyType_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->SetLobbyType( (CSteamID)params->steamIDLobby, (ELobbyType)params->eLobbyType );
}

void cppISteamMatchmaking_SteamMatchMaking009_SetLobbyJoinable( struct cppISteamMatchmaking_SteamMatchMaking009_SetLobbyJoinable_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->SetLobbyJoinable( (CSteamID)params->steamIDLobby, (bool)params->bLobbyJoinable );
}

void cppISteamMatchmaking_SteamMatchMaking009_GetLobbyOwner( struct cppISteamMatchmaking_SteamMatchMaking009_GetLobbyOwner_params *params )
{
    *params->_ret = ((ISteamMatchmaking*)params->linux_side)->GetLobbyOwner( (CSteamID)params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking009_SetLobbyOwner( struct cppISteamMatchmaking_SteamMatchMaking009_SetLobbyOwner_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->SetLobbyOwner( (CSteamID)params->steamIDLobby, (CSteamID)params->steamIDNewOwner );
}

void cppISteamMatchmaking_SteamMatchMaking009_SetLinkedLobby( struct cppISteamMatchmaking_SteamMatchMaking009_SetLinkedLobby_params *params )
{
    params->_ret = ((ISteamMatchmaking*)params->linux_side)->SetLinkedLobby( (CSteamID)params->steamIDLobby, (CSteamID)params->steamIDLobbyDependent );
}

#ifdef __cplusplus
}
#endif
