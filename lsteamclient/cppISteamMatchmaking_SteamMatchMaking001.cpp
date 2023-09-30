/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamMatchmaking_SteamMatchMaking001.h"

struct u_ISteamMatchmaking_SteamMatchMaking001
{
#ifdef __cplusplus
    virtual int32_t GetFavoriteGameCount(  ) = 0;
    virtual bool GetFavoriteGame( int32_t, uint32_t *, uint32_t *, uint16_t *, uint32_t *, uint32_t * ) = 0;
    virtual int32_t AddFavoriteGame( uint32_t, uint32_t, uint16_t, uint32_t, uint32_t ) = 0;
    virtual bool RemoveFavoriteGame( uint32_t, uint32_t, uint16_t, uint32_t ) = 0;
    virtual bool GetFavoriteGame2( int32_t, uint32_t *, uint32_t *, uint16_t *, uint16_t *, uint32_t *, uint32_t * ) = 0;
    virtual int32_t AddFavoriteGame2( uint32_t, uint32_t, uint16_t, uint16_t, uint32_t, uint32_t ) = 0;
    virtual bool RemoveFavoriteGame2( uint32_t, uint32_t, uint16_t, uint16_t, uint32_t ) = 0;
    virtual void RequestLobbyList( uint64_t, MatchMakingKeyValuePair_t *, uint32_t ) = 0;
    virtual CSteamID GetLobbyByIndex( int32_t ) = 0;
    virtual void CreateLobby( uint64_t, bool ) = 0;
    virtual void JoinLobby( CSteamID ) = 0;
    virtual void LeaveLobby( CSteamID ) = 0;
    virtual bool InviteUserToLobby( CSteamID, CSteamID ) = 0;
    virtual int32_t GetNumLobbyMembers( CSteamID ) = 0;
    virtual CSteamID GetLobbyMemberByIndex( CSteamID, int32_t ) = 0;
    virtual const char * GetLobbyData( CSteamID, const char * ) = 0;
    virtual bool SetLobbyData( CSteamID, const char *, const char * ) = 0;
    virtual const char * GetLobbyMemberData( CSteamID, CSteamID, const char * ) = 0;
    virtual bool SetLobbyMemberData( CSteamID, const char *, const char * ) = 0;
    virtual bool SendLobbyChatMsg( CSteamID, const void *, int32_t ) = 0;
    virtual int32_t GetLobbyChatEntry( CSteamID, int32_t, CSteamID *, void *, int32_t, uint32_t * ) = 0;
    virtual bool RequestLobbyData( CSteamID ) = 0;
#endif /* __cplusplus */
};

void cppISteamMatchmaking_SteamMatchMaking001_GetFavoriteGameCount( struct cppISteamMatchmaking_SteamMatchMaking001_GetFavoriteGameCount_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking001 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking001 *)params->linux_side;
    params->_ret = iface->GetFavoriteGameCount(  );
}

void cppISteamMatchmaking_SteamMatchMaking001_GetFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking001_GetFavoriteGame_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking001 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking001 *)params->linux_side;
    params->_ret = iface->GetFavoriteGame( params->iGame, params->pnAppID, params->pnIP, params->pnConnPort, params->punFlags, params->pRTime32LastPlayedOnServer );
}

void cppISteamMatchmaking_SteamMatchMaking001_AddFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking001_AddFavoriteGame_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking001 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking001 *)params->linux_side;
    params->_ret = iface->AddFavoriteGame( params->nAppID, params->nIP, params->nConnPort, params->unFlags, params->rTime32LastPlayedOnServer );
}

void cppISteamMatchmaking_SteamMatchMaking001_RemoveFavoriteGame( struct cppISteamMatchmaking_SteamMatchMaking001_RemoveFavoriteGame_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking001 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking001 *)params->linux_side;
    params->_ret = iface->RemoveFavoriteGame( params->nAppID, params->nIP, params->nConnPort, params->unFlags );
}

void cppISteamMatchmaking_SteamMatchMaking001_GetFavoriteGame2( struct cppISteamMatchmaking_SteamMatchMaking001_GetFavoriteGame2_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking001 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking001 *)params->linux_side;
    params->_ret = iface->GetFavoriteGame2( params->iGame, params->pnAppID, params->pnIP, params->pnConnPort, params->pnQueryPort, params->punFlags, params->pRTime32LastPlayedOnServer );
}

void cppISteamMatchmaking_SteamMatchMaking001_AddFavoriteGame2( struct cppISteamMatchmaking_SteamMatchMaking001_AddFavoriteGame2_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking001 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking001 *)params->linux_side;
    params->_ret = iface->AddFavoriteGame2( params->nAppID, params->nIP, params->nConnPort, params->nQueryPort, params->unFlags, params->rTime32LastPlayedOnServer );
}

void cppISteamMatchmaking_SteamMatchMaking001_RemoveFavoriteGame2( struct cppISteamMatchmaking_SteamMatchMaking001_RemoveFavoriteGame2_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking001 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking001 *)params->linux_side;
    params->_ret = iface->RemoveFavoriteGame2( params->nAppID, params->nIP, params->nConnPort, params->nQueryPort, params->unFlags );
}

void cppISteamMatchmaking_SteamMatchMaking001_RequestLobbyList( struct cppISteamMatchmaking_SteamMatchMaking001_RequestLobbyList_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking001 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking001 *)params->linux_side;
    iface->RequestLobbyList( params->ulGameID, params->pFilters, params->nFilters );
}

void cppISteamMatchmaking_SteamMatchMaking001_GetLobbyByIndex( struct cppISteamMatchmaking_SteamMatchMaking001_GetLobbyByIndex_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking001 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking001 *)params->linux_side;
    *params->_ret = iface->GetLobbyByIndex( params->iLobby );
}

void cppISteamMatchmaking_SteamMatchMaking001_CreateLobby( struct cppISteamMatchmaking_SteamMatchMaking001_CreateLobby_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking001 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking001 *)params->linux_side;
    iface->CreateLobby( params->ulGameID, params->bPrivate );
}

void cppISteamMatchmaking_SteamMatchMaking001_JoinLobby( struct cppISteamMatchmaking_SteamMatchMaking001_JoinLobby_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking001 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking001 *)params->linux_side;
    iface->JoinLobby( params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking001_LeaveLobby( struct cppISteamMatchmaking_SteamMatchMaking001_LeaveLobby_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking001 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking001 *)params->linux_side;
    iface->LeaveLobby( params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking001_InviteUserToLobby( struct cppISteamMatchmaking_SteamMatchMaking001_InviteUserToLobby_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking001 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking001 *)params->linux_side;
    params->_ret = iface->InviteUserToLobby( params->steamIDLobby, params->steamIDInvitee );
}

void cppISteamMatchmaking_SteamMatchMaking001_GetNumLobbyMembers( struct cppISteamMatchmaking_SteamMatchMaking001_GetNumLobbyMembers_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking001 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking001 *)params->linux_side;
    params->_ret = iface->GetNumLobbyMembers( params->steamIDLobby );
}

void cppISteamMatchmaking_SteamMatchMaking001_GetLobbyMemberByIndex( struct cppISteamMatchmaking_SteamMatchMaking001_GetLobbyMemberByIndex_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking001 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking001 *)params->linux_side;
    *params->_ret = iface->GetLobbyMemberByIndex( params->steamIDLobby, params->iMember );
}

void cppISteamMatchmaking_SteamMatchMaking001_GetLobbyData( struct cppISteamMatchmaking_SteamMatchMaking001_GetLobbyData_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking001 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking001 *)params->linux_side;
    params->_ret = iface->GetLobbyData( params->SteamIDLobby, params->pchKey );
}

void cppISteamMatchmaking_SteamMatchMaking001_SetLobbyData( struct cppISteamMatchmaking_SteamMatchMaking001_SetLobbyData_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking001 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking001 *)params->linux_side;
    params->_ret = iface->SetLobbyData( params->steamIDLobby, params->pchKey, params->pchValue );
}

void cppISteamMatchmaking_SteamMatchMaking001_GetLobbyMemberData( struct cppISteamMatchmaking_SteamMatchMaking001_GetLobbyMemberData_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking001 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking001 *)params->linux_side;
    params->_ret = iface->GetLobbyMemberData( params->steamIDLobby, params->steamIDUser, params->pchKey );
}

void cppISteamMatchmaking_SteamMatchMaking001_SetLobbyMemberData( struct cppISteamMatchmaking_SteamMatchMaking001_SetLobbyMemberData_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking001 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking001 *)params->linux_side;
    params->_ret = iface->SetLobbyMemberData( params->steamIDLobby, params->pchKey, params->pchValue );
}

void cppISteamMatchmaking_SteamMatchMaking001_SendLobbyChatMsg( struct cppISteamMatchmaking_SteamMatchMaking001_SendLobbyChatMsg_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking001 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking001 *)params->linux_side;
    params->_ret = iface->SendLobbyChatMsg( params->steamIDLobby, params->pvMsgBody, params->cubMsgBody );
}

void cppISteamMatchmaking_SteamMatchMaking001_GetLobbyChatEntry( struct cppISteamMatchmaking_SteamMatchMaking001_GetLobbyChatEntry_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking001 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking001 *)params->linux_side;
    params->_ret = iface->GetLobbyChatEntry( params->steamIDLobby, params->iChatID, params->pSteamIDUser, params->pvData, params->cubData, params->peChatEntryType );
}

void cppISteamMatchmaking_SteamMatchMaking001_RequestLobbyData( struct cppISteamMatchmaking_SteamMatchMaking001_RequestLobbyData_params *params )
{
    struct u_ISteamMatchmaking_SteamMatchMaking001 *iface = (struct u_ISteamMatchmaking_SteamMatchMaking001 *)params->linux_side;
    params->_ret = iface->RequestLobbyData( params->steamIDLobby );
}

