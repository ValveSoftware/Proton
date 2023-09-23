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

struct cppISteamMatchmaking_SteamMatchMaking009
{
#ifdef __cplusplus
    virtual int32_t GetFavoriteGameCount(  ) = 0;
    virtual bool GetFavoriteGame( int32_t, uint32_t *, uint32_t *, uint16_t *, uint16_t *, uint32_t *, uint32_t * ) = 0;
    virtual int32_t AddFavoriteGame( uint32_t, uint32_t, uint16_t, uint16_t, uint32_t, uint32_t ) = 0;
    virtual bool RemoveFavoriteGame( uint32_t, uint32_t, uint16_t, uint16_t, uint32_t ) = 0;
    virtual uint64_t RequestLobbyList(  ) = 0;
    virtual void AddRequestLobbyListStringFilter( const char *, const char *, uint32_t ) = 0;
    virtual void AddRequestLobbyListNumericalFilter( const char *, int32_t, uint32_t ) = 0;
    virtual void AddRequestLobbyListNearValueFilter( const char *, int32_t ) = 0;
    virtual void AddRequestLobbyListFilterSlotsAvailable( int32_t ) = 0;
    virtual void AddRequestLobbyListDistanceFilter( uint32_t ) = 0;
    virtual void AddRequestLobbyListResultCountFilter( int32_t ) = 0;
    virtual void AddRequestLobbyListCompatibleMembersFilter( CSteamID ) = 0;
    virtual CSteamID GetLobbyByIndex( int32_t ) = 0;
    virtual uint64_t CreateLobby( uint32_t, int32_t ) = 0;
    virtual uint64_t JoinLobby( CSteamID ) = 0;
    virtual void LeaveLobby( CSteamID ) = 0;
    virtual bool InviteUserToLobby( CSteamID, CSteamID ) = 0;
    virtual int32_t GetNumLobbyMembers( CSteamID ) = 0;
    virtual CSteamID GetLobbyMemberByIndex( CSteamID, int32_t ) = 0;
    virtual const char * GetLobbyData( CSteamID, const char * ) = 0;
    virtual bool SetLobbyData( CSteamID, const char *, const char * ) = 0;
    virtual int32_t GetLobbyDataCount( CSteamID ) = 0;
    virtual bool GetLobbyDataByIndex( CSteamID, int32_t, char *, int32_t, char *, int32_t ) = 0;
    virtual bool DeleteLobbyData( CSteamID, const char * ) = 0;
    virtual const char * GetLobbyMemberData( CSteamID, CSteamID, const char * ) = 0;
    virtual void SetLobbyMemberData( CSteamID, const char *, const char * ) = 0;
    virtual bool SendLobbyChatMsg( CSteamID, const void *, int32_t ) = 0;
    virtual int32_t GetLobbyChatEntry( CSteamID, int32_t, CSteamID *, void *, int32_t, uint32_t * ) = 0;
    virtual bool RequestLobbyData( CSteamID ) = 0;
    virtual void SetLobbyGameServer( CSteamID, uint32_t, uint16_t, CSteamID ) = 0;
    virtual bool GetLobbyGameServer( CSteamID, uint32_t *, uint16_t *, CSteamID * ) = 0;
    virtual bool SetLobbyMemberLimit( CSteamID, int32_t ) = 0;
    virtual int32_t GetLobbyMemberLimit( CSteamID ) = 0;
    virtual bool SetLobbyType( CSteamID, uint32_t ) = 0;
    virtual bool SetLobbyJoinable( CSteamID, bool ) = 0;
    virtual CSteamID GetLobbyOwner( CSteamID ) = 0;
    virtual bool SetLobbyOwner( CSteamID, CSteamID ) = 0;
    virtual bool SetLinkedLobby( CSteamID, CSteamID ) = 0;
#endif /* __cplusplus */
};

void cppISteamMatchmaking_SteamMatchMaking009_GetFavoriteGameCount( struct cppISteamMatchmaking_SteamMatchMaking009_GetFavoriteGameCount_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking009 *iface = (struct cppISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->GetFavoriteGameCount(  );
}

void cppISteamMatchmaking_SteamMatchMaking009_GetFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking009_GetFavoriteGame_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking009 *iface = (struct cppISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->GetFavoriteGame( params->iGame, params->pnAppID, params->pnIP, params->pnConnPort, params->pnQueryPort, params->punFlags, params->pRTime32LastPlayedOnServer );
}

void cppISteamMatchmaking_SteamMatchMaking009_AddFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking009_AddFavoriteGame_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking009 *iface = (struct cppISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->AddFavoriteGame( params->nAppID, params->nIP, params->nConnPort, params->nQueryPort, params->unFlags, params->rTime32LastPlayedOnServer );
}

void cppISteamMatchmaking_SteamMatchMaking009_RemoveFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking009_RemoveFavoriteGame_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking009 *iface = (struct cppISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->RemoveFavoriteGame( params->nAppID, params->nIP, params->nConnPort, params->nQueryPort, params->unFlags );
}

void cppISteamMatchmaking_SteamMatchMaking009_RequestLobbyList( struct cppISteamMatchmaking_SteamMatchMaking009_RequestLobbyList_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking009 *iface = (struct cppISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->RequestLobbyList(  );
}

void cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListStringFilter( struct cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListStringFilter_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking009 *iface = (struct cppISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    iface->AddRequestLobbyListStringFilter( params->pchKeyToMatch, params->pchValueToMatch, params->eComparisonType );
}

void cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListNumericalFilter( struct cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListNumericalFilter_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking009 *iface = (struct cppISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    iface->AddRequestLobbyListNumericalFilter( params->pchKeyToMatch, params->nValueToMatch, params->eComparisonType );
}

void cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListNearValueFilter( struct cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListNearValueFilter_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking009 *iface = (struct cppISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    iface->AddRequestLobbyListNearValueFilter( params->pchKeyToMatch, params->nValueToBeCloseTo );
}

void cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListFilterSlotsAvailable( struct cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListFilterSlotsAvailable_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking009 *iface = (struct cppISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    iface->AddRequestLobbyListFilterSlotsAvailable( params->nSlotsAvailable );
}

void cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListDistanceFilter( struct cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListDistanceFilter_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking009 *iface = (struct cppISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    iface->AddRequestLobbyListDistanceFilter( params->eLobbyDistanceFilter );
}

void cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListResultCountFilter( struct cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListResultCountFilter_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking009 *iface = (struct cppISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    iface->AddRequestLobbyListResultCountFilter( params->cMaxResults );
}

void cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListCompatibleMembersFilter( struct cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListCompatibleMembersFilter_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking009 *iface = (struct cppISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    iface->AddRequestLobbyListCompatibleMembersFilter( params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking009_GetLobbyByIndex( struct cppISteamMatchmaking_SteamMatchMaking009_GetLobbyByIndex_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking009 *iface = (struct cppISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    *params->_ret = iface->GetLobbyByIndex( params->iLobby );
}

void cppISteamMatchmaking_SteamMatchMaking009_CreateLobby( struct cppISteamMatchmaking_SteamMatchMaking009_CreateLobby_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking009 *iface = (struct cppISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->CreateLobby( params->eLobbyType, params->cMaxMembers );
}

void cppISteamMatchmaking_SteamMatchMaking009_JoinLobby( struct cppISteamMatchmaking_SteamMatchMaking009_JoinLobby_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking009 *iface = (struct cppISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->JoinLobby( params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking009_LeaveLobby( struct cppISteamMatchmaking_SteamMatchMaking009_LeaveLobby_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking009 *iface = (struct cppISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    iface->LeaveLobby( params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking009_InviteUserToLobby( struct cppISteamMatchmaking_SteamMatchMaking009_InviteUserToLobby_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking009 *iface = (struct cppISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->InviteUserToLobby( params->steamIDLobby, params->steamIDInvitee );
}

void cppISteamMatchmaking_SteamMatchMaking009_GetNumLobbyMembers( struct cppISteamMatchmaking_SteamMatchMaking009_GetNumLobbyMembers_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking009 *iface = (struct cppISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->GetNumLobbyMembers( params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberByIndex( struct cppISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberByIndex_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking009 *iface = (struct cppISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    *params->_ret = iface->GetLobbyMemberByIndex( params->steamIDLobby, params->iMember );
}

void cppISteamMatchmaking_SteamMatchMaking009_GetLobbyData( struct cppISteamMatchmaking_SteamMatchMaking009_GetLobbyData_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking009 *iface = (struct cppISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->GetLobbyData( params->steamIDLobby, params->pchKey );
}

void cppISteamMatchmaking_SteamMatchMaking009_SetLobbyData( struct cppISteamMatchmaking_SteamMatchMaking009_SetLobbyData_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking009 *iface = (struct cppISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->SetLobbyData( params->steamIDLobby, params->pchKey, params->pchValue );
}

void cppISteamMatchmaking_SteamMatchMaking009_GetLobbyDataCount( struct cppISteamMatchmaking_SteamMatchMaking009_GetLobbyDataCount_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking009 *iface = (struct cppISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->GetLobbyDataCount( params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking009_GetLobbyDataByIndex( struct cppISteamMatchmaking_SteamMatchMaking009_GetLobbyDataByIndex_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking009 *iface = (struct cppISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->GetLobbyDataByIndex( params->steamIDLobby, params->iLobbyData, params->pchKey, params->cchKeyBufferSize, params->pchValue, params->cchValueBufferSize );
}

void cppISteamMatchmaking_SteamMatchMaking009_DeleteLobbyData( struct cppISteamMatchmaking_SteamMatchMaking009_DeleteLobbyData_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking009 *iface = (struct cppISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->DeleteLobbyData( params->steamIDLobby, params->pchKey );
}

void cppISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberData( struct cppISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberData_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking009 *iface = (struct cppISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->GetLobbyMemberData( params->steamIDLobby, params->steamIDUser, params->pchKey );
}

void cppISteamMatchmaking_SteamMatchMaking009_SetLobbyMemberData( struct cppISteamMatchmaking_SteamMatchMaking009_SetLobbyMemberData_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking009 *iface = (struct cppISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    iface->SetLobbyMemberData( params->steamIDLobby, params->pchKey, params->pchValue );
}

void cppISteamMatchmaking_SteamMatchMaking009_SendLobbyChatMsg( struct cppISteamMatchmaking_SteamMatchMaking009_SendLobbyChatMsg_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking009 *iface = (struct cppISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->SendLobbyChatMsg( params->steamIDLobby, params->pvMsgBody, params->cubMsgBody );
}

void cppISteamMatchmaking_SteamMatchMaking009_GetLobbyChatEntry( struct cppISteamMatchmaking_SteamMatchMaking009_GetLobbyChatEntry_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking009 *iface = (struct cppISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->GetLobbyChatEntry( params->steamIDLobby, params->iChatID, params->pSteamIDUser, params->pvData, params->cubData, params->peChatEntryType );
}

void cppISteamMatchmaking_SteamMatchMaking009_RequestLobbyData( struct cppISteamMatchmaking_SteamMatchMaking009_RequestLobbyData_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking009 *iface = (struct cppISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->RequestLobbyData( params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking009_SetLobbyGameServer( struct cppISteamMatchmaking_SteamMatchMaking009_SetLobbyGameServer_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking009 *iface = (struct cppISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    iface->SetLobbyGameServer( params->steamIDLobby, params->unGameServerIP, params->unGameServerPort, params->steamIDGameServer );
}

void cppISteamMatchmaking_SteamMatchMaking009_GetLobbyGameServer( struct cppISteamMatchmaking_SteamMatchMaking009_GetLobbyGameServer_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking009 *iface = (struct cppISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->GetLobbyGameServer( params->steamIDLobby, params->punGameServerIP, params->punGameServerPort, params->psteamIDGameServer );
}

void cppISteamMatchmaking_SteamMatchMaking009_SetLobbyMemberLimit( struct cppISteamMatchmaking_SteamMatchMaking009_SetLobbyMemberLimit_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking009 *iface = (struct cppISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->SetLobbyMemberLimit( params->steamIDLobby, params->cMaxMembers );
}

void cppISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberLimit( struct cppISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberLimit_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking009 *iface = (struct cppISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->GetLobbyMemberLimit( params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking009_SetLobbyType( struct cppISteamMatchmaking_SteamMatchMaking009_SetLobbyType_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking009 *iface = (struct cppISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->SetLobbyType( params->steamIDLobby, params->eLobbyType );
}

void cppISteamMatchmaking_SteamMatchMaking009_SetLobbyJoinable( struct cppISteamMatchmaking_SteamMatchMaking009_SetLobbyJoinable_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking009 *iface = (struct cppISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->SetLobbyJoinable( params->steamIDLobby, params->bLobbyJoinable );
}

void cppISteamMatchmaking_SteamMatchMaking009_GetLobbyOwner( struct cppISteamMatchmaking_SteamMatchMaking009_GetLobbyOwner_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking009 *iface = (struct cppISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    *params->_ret = iface->GetLobbyOwner( params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking009_SetLobbyOwner( struct cppISteamMatchmaking_SteamMatchMaking009_SetLobbyOwner_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking009 *iface = (struct cppISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->SetLobbyOwner( params->steamIDLobby, params->steamIDNewOwner );
}

void cppISteamMatchmaking_SteamMatchMaking009_SetLinkedLobby( struct cppISteamMatchmaking_SteamMatchMaking009_SetLinkedLobby_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking009 *iface = (struct cppISteamMatchmaking_SteamMatchMaking009 *)params->linux_side;
    params->_ret = iface->SetLinkedLobby( params->steamIDLobby, params->steamIDLobbyDependent );
}

#ifdef __cplusplus
}
#endif
