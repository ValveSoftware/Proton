#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_102/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_102
#include "struct_converters.h"
#include "cppISteamMatchmaking_SteamMatchMaking004.h"

struct cppISteamMatchmaking_SteamMatchMaking004
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
    virtual CSteamID GetLobbyByIndex( int32_t ) = 0;
    virtual void CreateLobby( bool ) = 0;
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
#endif /* __cplusplus */
};

void cppISteamMatchmaking_SteamMatchMaking004_GetFavoriteGameCount( struct cppISteamMatchmaking_SteamMatchMaking004_GetFavoriteGameCount_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking004 *iface = (struct cppISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    params->_ret = iface->GetFavoriteGameCount(  );
}

void cppISteamMatchmaking_SteamMatchMaking004_GetFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking004_GetFavoriteGame_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking004 *iface = (struct cppISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    params->_ret = iface->GetFavoriteGame( params->iGame, params->pnAppID, params->pnIP, params->pnConnPort, params->pnQueryPort, params->punFlags, params->pRTime32LastPlayedOnServer );
}

void cppISteamMatchmaking_SteamMatchMaking004_AddFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking004_AddFavoriteGame_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking004 *iface = (struct cppISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    params->_ret = iface->AddFavoriteGame( params->nAppID, params->nIP, params->nConnPort, params->nQueryPort, params->unFlags, params->rTime32LastPlayedOnServer );
}

void cppISteamMatchmaking_SteamMatchMaking004_RemoveFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking004_RemoveFavoriteGame_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking004 *iface = (struct cppISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    params->_ret = iface->RemoveFavoriteGame( params->nAppID, params->nIP, params->nConnPort, params->nQueryPort, params->unFlags );
}

void cppISteamMatchmaking_SteamMatchMaking004_RequestLobbyList( struct cppISteamMatchmaking_SteamMatchMaking004_RequestLobbyList_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking004 *iface = (struct cppISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    iface->RequestLobbyList(  );
}

void cppISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListFilter( struct cppISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListFilter_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking004 *iface = (struct cppISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    iface->AddRequestLobbyListFilter( params->pchKeyToMatch, params->pchValueToMatch );
}

void cppISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListNumericalFilter( struct cppISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListNumericalFilter_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking004 *iface = (struct cppISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    iface->AddRequestLobbyListNumericalFilter( params->pchKeyToMatch, params->nValueToMatch, params->nComparisonType );
}

void cppISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListSlotsAvailableFilter( struct cppISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListSlotsAvailableFilter_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking004 *iface = (struct cppISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    iface->AddRequestLobbyListSlotsAvailableFilter(  );
}

void cppISteamMatchmaking_SteamMatchMaking004_GetLobbyByIndex( struct cppISteamMatchmaking_SteamMatchMaking004_GetLobbyByIndex_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking004 *iface = (struct cppISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    *params->_ret = iface->GetLobbyByIndex( params->iLobby );
}

void cppISteamMatchmaking_SteamMatchMaking004_CreateLobby( struct cppISteamMatchmaking_SteamMatchMaking004_CreateLobby_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking004 *iface = (struct cppISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    iface->CreateLobby( params->bPrivate );
}

void cppISteamMatchmaking_SteamMatchMaking004_JoinLobby( struct cppISteamMatchmaking_SteamMatchMaking004_JoinLobby_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking004 *iface = (struct cppISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    iface->JoinLobby( params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking004_LeaveLobby( struct cppISteamMatchmaking_SteamMatchMaking004_LeaveLobby_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking004 *iface = (struct cppISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    iface->LeaveLobby( params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking004_InviteUserToLobby( struct cppISteamMatchmaking_SteamMatchMaking004_InviteUserToLobby_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking004 *iface = (struct cppISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    params->_ret = iface->InviteUserToLobby( params->steamIDLobby, params->steamIDInvitee );
}

void cppISteamMatchmaking_SteamMatchMaking004_GetNumLobbyMembers( struct cppISteamMatchmaking_SteamMatchMaking004_GetNumLobbyMembers_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking004 *iface = (struct cppISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    params->_ret = iface->GetNumLobbyMembers( params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberByIndex( struct cppISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberByIndex_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking004 *iface = (struct cppISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    *params->_ret = iface->GetLobbyMemberByIndex( params->steamIDLobby, params->iMember );
}

void cppISteamMatchmaking_SteamMatchMaking004_GetLobbyData( struct cppISteamMatchmaking_SteamMatchMaking004_GetLobbyData_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking004 *iface = (struct cppISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    params->_ret = iface->GetLobbyData( params->steamIDLobby, params->pchKey );
}

void cppISteamMatchmaking_SteamMatchMaking004_SetLobbyData( struct cppISteamMatchmaking_SteamMatchMaking004_SetLobbyData_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking004 *iface = (struct cppISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    params->_ret = iface->SetLobbyData( params->steamIDLobby, params->pchKey, params->pchValue );
}

void cppISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberData( struct cppISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberData_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking004 *iface = (struct cppISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    params->_ret = iface->GetLobbyMemberData( params->steamIDLobby, params->steamIDUser, params->pchKey );
}

void cppISteamMatchmaking_SteamMatchMaking004_SetLobbyMemberData( struct cppISteamMatchmaking_SteamMatchMaking004_SetLobbyMemberData_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking004 *iface = (struct cppISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    iface->SetLobbyMemberData( params->steamIDLobby, params->pchKey, params->pchValue );
}

void cppISteamMatchmaking_SteamMatchMaking004_SendLobbyChatMsg( struct cppISteamMatchmaking_SteamMatchMaking004_SendLobbyChatMsg_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking004 *iface = (struct cppISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    params->_ret = iface->SendLobbyChatMsg( params->steamIDLobby, params->pvMsgBody, params->cubMsgBody );
}

void cppISteamMatchmaking_SteamMatchMaking004_GetLobbyChatEntry( struct cppISteamMatchmaking_SteamMatchMaking004_GetLobbyChatEntry_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking004 *iface = (struct cppISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    params->_ret = iface->GetLobbyChatEntry( params->steamIDLobby, params->iChatID, params->pSteamIDUser, params->pvData, params->cubData, params->peChatEntryType );
}

void cppISteamMatchmaking_SteamMatchMaking004_RequestLobbyData( struct cppISteamMatchmaking_SteamMatchMaking004_RequestLobbyData_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking004 *iface = (struct cppISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    params->_ret = iface->RequestLobbyData( params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking004_SetLobbyGameServer( struct cppISteamMatchmaking_SteamMatchMaking004_SetLobbyGameServer_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking004 *iface = (struct cppISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    iface->SetLobbyGameServer( params->steamIDLobby, params->unGameServerIP, params->unGameServerPort, params->steamIDGameServer );
}

void cppISteamMatchmaking_SteamMatchMaking004_GetLobbyGameServer( struct cppISteamMatchmaking_SteamMatchMaking004_GetLobbyGameServer_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking004 *iface = (struct cppISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    params->_ret = iface->GetLobbyGameServer( params->steamIDLobby, params->punGameServerIP, params->punGameServerPort, params->psteamIDGameServer );
}

void cppISteamMatchmaking_SteamMatchMaking004_SetLobbyMemberLimit( struct cppISteamMatchmaking_SteamMatchMaking004_SetLobbyMemberLimit_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking004 *iface = (struct cppISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    params->_ret = iface->SetLobbyMemberLimit( params->steamIDLobby, params->cMaxMembers );
}

void cppISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberLimit( struct cppISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberLimit_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking004 *iface = (struct cppISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    params->_ret = iface->GetLobbyMemberLimit( params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking004_RequestFriendsLobbies( struct cppISteamMatchmaking_SteamMatchMaking004_RequestFriendsLobbies_params *params )
{
    struct cppISteamMatchmaking_SteamMatchMaking004 *iface = (struct cppISteamMatchmaking_SteamMatchMaking004 *)params->linux_side;
    params->_ret = iface->RequestFriendsLobbies(  );
}

#ifdef __cplusplus
}
#endif
