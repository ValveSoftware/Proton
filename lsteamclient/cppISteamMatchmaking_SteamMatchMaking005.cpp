#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_102x/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_102x
#include "struct_converters.h"
#include "cppISteamMatchmaking_SteamMatchMaking005.h"

struct cppISteamMatchmaking_SteamMatchMaking005
{
#ifdef __cplusplus
    virtual int32_t GetFavoriteGameCount(  ) = 0;
    virtual bool GetFavoriteGame( int32_t, uint32_t *, uint32_t *, uint16_t *, uint16_t *, uint32_t *, uint32_t * ) = 0;
    virtual int32_t AddFavoriteGame( uint32_t, uint32_t, uint16_t, uint16_t, uint32_t, uint32_t ) = 0;
    virtual bool RemoveFavoriteGame( uint32_t, uint32_t, uint16_t, uint16_t, uint32_t ) = 0;
    virtual void RequestLobbyList(  ) = 0;
    virtual void AddRequestLobbyListFilter( const char *, const char * ) = 0;
    virtual void AddRequestLobbyListNumericalFilter( const char *, int32_t, int32_t ) = 0;
    virtual void AddRequestLobbyListSlotsAvailableFilter(  ) = 0;
    virtual void AddRequestLobbyListNearValueFilter( const char *, int32_t ) = 0;
    virtual CSteamID GetLobbyByIndex( int32_t ) = 0;
    virtual void CreateLobby( uint32_t ) = 0;
    virtual void JoinLobby( CSteamID ) = 0;
    virtual void LeaveLobby( CSteamID ) = 0;
    virtual bool InviteUserToLobby( CSteamID, CSteamID ) = 0;
    virtual int32_t GetNumLobbyMembers( CSteamID ) = 0;
    virtual CSteamID GetLobbyMemberByIndex( CSteamID, int32_t ) = 0;
    virtual const char * GetLobbyData( CSteamID, const char * ) = 0;
    virtual bool SetLobbyData( CSteamID, const char *, const char * ) = 0;
    virtual const char * GetLobbyMemberData( CSteamID, CSteamID, const char * ) = 0;
    virtual void SetLobbyMemberData( CSteamID, const char *, const char * ) = 0;
    virtual bool SendLobbyChatMsg( CSteamID, const void *, int32_t ) = 0;
    virtual int32_t GetLobbyChatEntry( CSteamID, int32_t, CSteamID *, void *, int32_t, uint32_t * ) = 0;
    virtual bool RequestLobbyData( CSteamID ) = 0;
    virtual void SetLobbyGameServer( CSteamID, uint32_t, uint16_t, CSteamID ) = 0;
    virtual bool GetLobbyGameServer( CSteamID, uint32_t *, uint16_t *, CSteamID * ) = 0;
    virtual bool SetLobbyMemberLimit( CSteamID, int32_t ) = 0;
    virtual int32_t GetLobbyMemberLimit( CSteamID ) = 0;
    virtual bool RequestFriendsLobbies(  ) = 0;
    virtual bool SetLobbyType( CSteamID, uint32_t ) = 0;
    virtual CSteamID GetLobbyOwner( CSteamID ) = 0;
    virtual float GetLobbyDistance( CSteamID ) = 0;
#endif /* __cplusplus */
};

void cppISteamMatchmaking_SteamMatchMaking005_GetFavoriteGameCount( struct cppISteamMatchmaking_SteamMatchMaking005_GetFavoriteGameCount_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking005 *iface = (struct cppISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    params->_ret = iface->GetFavoriteGameCount(  );
}

void cppISteamMatchmaking_SteamMatchMaking005_GetFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking005_GetFavoriteGame_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking005 *iface = (struct cppISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    params->_ret = iface->GetFavoriteGame( params->iGame, params->pnAppID, params->pnIP, params->pnConnPort, params->pnQueryPort, params->punFlags, params->pRTime32LastPlayedOnServer );
}

void cppISteamMatchmaking_SteamMatchMaking005_AddFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking005_AddFavoriteGame_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking005 *iface = (struct cppISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    params->_ret = iface->AddFavoriteGame( params->nAppID, params->nIP, params->nConnPort, params->nQueryPort, params->unFlags, params->rTime32LastPlayedOnServer );
}

void cppISteamMatchmaking_SteamMatchMaking005_RemoveFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking005_RemoveFavoriteGame_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking005 *iface = (struct cppISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    params->_ret = iface->RemoveFavoriteGame( params->nAppID, params->nIP, params->nConnPort, params->nQueryPort, params->unFlags );
}

void cppISteamMatchmaking_SteamMatchMaking005_RequestLobbyList( struct cppISteamMatchmaking_SteamMatchMaking005_RequestLobbyList_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking005 *iface = (struct cppISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    iface->RequestLobbyList(  );
}

void cppISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListFilter( struct cppISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListFilter_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking005 *iface = (struct cppISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    iface->AddRequestLobbyListFilter( params->pchKeyToMatch, params->pchValueToMatch );
}

void cppISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListNumericalFilter( struct cppISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListNumericalFilter_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking005 *iface = (struct cppISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    iface->AddRequestLobbyListNumericalFilter( params->pchKeyToMatch, params->nValueToMatch, params->nComparisonType );
}

void cppISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListSlotsAvailableFilter( struct cppISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListSlotsAvailableFilter_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking005 *iface = (struct cppISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    iface->AddRequestLobbyListSlotsAvailableFilter(  );
}

void cppISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListNearValueFilter( struct cppISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListNearValueFilter_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking005 *iface = (struct cppISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    iface->AddRequestLobbyListNearValueFilter( params->pchKeyToMatch, params->nValueToBeCloseTo );
}

void cppISteamMatchmaking_SteamMatchMaking005_GetLobbyByIndex( struct cppISteamMatchmaking_SteamMatchMaking005_GetLobbyByIndex_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking005 *iface = (struct cppISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    *params->_ret = iface->GetLobbyByIndex( params->iLobby );
}

void cppISteamMatchmaking_SteamMatchMaking005_CreateLobby( struct cppISteamMatchmaking_SteamMatchMaking005_CreateLobby_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking005 *iface = (struct cppISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    iface->CreateLobby( params->eLobbyType );
}

void cppISteamMatchmaking_SteamMatchMaking005_JoinLobby( struct cppISteamMatchmaking_SteamMatchMaking005_JoinLobby_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking005 *iface = (struct cppISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    iface->JoinLobby( params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking005_LeaveLobby( struct cppISteamMatchmaking_SteamMatchMaking005_LeaveLobby_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking005 *iface = (struct cppISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    iface->LeaveLobby( params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking005_InviteUserToLobby( struct cppISteamMatchmaking_SteamMatchMaking005_InviteUserToLobby_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking005 *iface = (struct cppISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    params->_ret = iface->InviteUserToLobby( params->steamIDLobby, params->steamIDInvitee );
}

void cppISteamMatchmaking_SteamMatchMaking005_GetNumLobbyMembers( struct cppISteamMatchmaking_SteamMatchMaking005_GetNumLobbyMembers_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking005 *iface = (struct cppISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    params->_ret = iface->GetNumLobbyMembers( params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberByIndex( struct cppISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberByIndex_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking005 *iface = (struct cppISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    *params->_ret = iface->GetLobbyMemberByIndex( params->steamIDLobby, params->iMember );
}

void cppISteamMatchmaking_SteamMatchMaking005_GetLobbyData( struct cppISteamMatchmaking_SteamMatchMaking005_GetLobbyData_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking005 *iface = (struct cppISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    params->_ret = iface->GetLobbyData( params->steamIDLobby, params->pchKey );
}

void cppISteamMatchmaking_SteamMatchMaking005_SetLobbyData( struct cppISteamMatchmaking_SteamMatchMaking005_SetLobbyData_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking005 *iface = (struct cppISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    params->_ret = iface->SetLobbyData( params->steamIDLobby, params->pchKey, params->pchValue );
}

void cppISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberData( struct cppISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberData_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking005 *iface = (struct cppISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    params->_ret = iface->GetLobbyMemberData( params->steamIDLobby, params->steamIDUser, params->pchKey );
}

void cppISteamMatchmaking_SteamMatchMaking005_SetLobbyMemberData( struct cppISteamMatchmaking_SteamMatchMaking005_SetLobbyMemberData_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking005 *iface = (struct cppISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    iface->SetLobbyMemberData( params->steamIDLobby, params->pchKey, params->pchValue );
}

void cppISteamMatchmaking_SteamMatchMaking005_SendLobbyChatMsg( struct cppISteamMatchmaking_SteamMatchMaking005_SendLobbyChatMsg_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking005 *iface = (struct cppISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    params->_ret = iface->SendLobbyChatMsg( params->steamIDLobby, params->pvMsgBody, params->cubMsgBody );
}

void cppISteamMatchmaking_SteamMatchMaking005_GetLobbyChatEntry( struct cppISteamMatchmaking_SteamMatchMaking005_GetLobbyChatEntry_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking005 *iface = (struct cppISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    params->_ret = iface->GetLobbyChatEntry( params->steamIDLobby, params->iChatID, params->pSteamIDUser, params->pvData, params->cubData, params->peChatEntryType );
}

void cppISteamMatchmaking_SteamMatchMaking005_RequestLobbyData( struct cppISteamMatchmaking_SteamMatchMaking005_RequestLobbyData_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking005 *iface = (struct cppISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    params->_ret = iface->RequestLobbyData( params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking005_SetLobbyGameServer( struct cppISteamMatchmaking_SteamMatchMaking005_SetLobbyGameServer_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking005 *iface = (struct cppISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    iface->SetLobbyGameServer( params->steamIDLobby, params->unGameServerIP, params->unGameServerPort, params->steamIDGameServer );
}

void cppISteamMatchmaking_SteamMatchMaking005_GetLobbyGameServer( struct cppISteamMatchmaking_SteamMatchMaking005_GetLobbyGameServer_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking005 *iface = (struct cppISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    params->_ret = iface->GetLobbyGameServer( params->steamIDLobby, params->punGameServerIP, params->punGameServerPort, params->psteamIDGameServer );
}

void cppISteamMatchmaking_SteamMatchMaking005_SetLobbyMemberLimit( struct cppISteamMatchmaking_SteamMatchMaking005_SetLobbyMemberLimit_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking005 *iface = (struct cppISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    params->_ret = iface->SetLobbyMemberLimit( params->steamIDLobby, params->cMaxMembers );
}

void cppISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberLimit( struct cppISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberLimit_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking005 *iface = (struct cppISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    params->_ret = iface->GetLobbyMemberLimit( params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking005_RequestFriendsLobbies( struct cppISteamMatchmaking_SteamMatchMaking005_RequestFriendsLobbies_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking005 *iface = (struct cppISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    params->_ret = iface->RequestFriendsLobbies(  );
}

void cppISteamMatchmaking_SteamMatchMaking005_SetLobbyType( struct cppISteamMatchmaking_SteamMatchMaking005_SetLobbyType_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking005 *iface = (struct cppISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    params->_ret = iface->SetLobbyType( params->steamIDLobby, params->eLobbyType );
}

void cppISteamMatchmaking_SteamMatchMaking005_GetLobbyOwner( struct cppISteamMatchmaking_SteamMatchMaking005_GetLobbyOwner_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking005 *iface = (struct cppISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    *params->_ret = iface->GetLobbyOwner( params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking005_GetLobbyDistance( struct cppISteamMatchmaking_SteamMatchMaking005_GetLobbyDistance_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking005 *iface = (struct cppISteamMatchmaking_SteamMatchMaking005 *)params->linux_side;
    params->_ret = iface->GetLobbyDistance( params->steamIDLobby );
}

#ifdef __cplusplus
}
#endif
