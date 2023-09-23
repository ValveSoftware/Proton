#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_109/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_109
#include "struct_converters.h"
#include "cppISteamFriends_SteamFriends005.h"

struct cppISteamFriends_SteamFriends005
{
#ifdef __cplusplus
    virtual const char * GetPersonaName(  ) = 0;
    virtual void SetPersonaName( const char * ) = 0;
    virtual uint32_t GetPersonaState(  ) = 0;
    virtual int32_t GetFriendCount( int32_t ) = 0;
    virtual CSteamID GetFriendByIndex( int32_t, int32_t ) = 0;
    virtual uint32_t GetFriendRelationship( CSteamID ) = 0;
    virtual uint32_t GetFriendPersonaState( CSteamID ) = 0;
    virtual const char * GetFriendPersonaName( CSteamID ) = 0;
    virtual int32_t GetFriendAvatar( CSteamID, int32_t ) = 0;
    virtual bool GetFriendGamePlayed( CSteamID, FriendGameInfo_t * ) = 0;
    virtual const char * GetFriendPersonaNameHistory( CSteamID, int32_t ) = 0;
    virtual bool HasFriend( CSteamID, int32_t ) = 0;
    virtual int32_t GetClanCount(  ) = 0;
    virtual CSteamID GetClanByIndex( int32_t ) = 0;
    virtual const char * GetClanName( CSteamID ) = 0;
    virtual int32_t GetFriendCountFromSource( CSteamID ) = 0;
    virtual CSteamID GetFriendFromSourceByIndex( CSteamID, int32_t ) = 0;
    virtual bool IsUserInSource( CSteamID, CSteamID ) = 0;
    virtual void SetInGameVoiceSpeaking( CSteamID, bool ) = 0;
    virtual void ActivateGameOverlay( const char * ) = 0;
    virtual void ActivateGameOverlayToUser( const char *, CSteamID ) = 0;
    virtual void ActivateGameOverlayToWebPage( const char * ) = 0;
    virtual void ActivateGameOverlayToStore( uint32_t ) = 0;
    virtual void SetPlayedWith( CSteamID ) = 0;
#endif /* __cplusplus */
};

void cppISteamFriends_SteamFriends005_GetPersonaName( struct cppISteamFriends_SteamFriends005_GetPersonaName_params *params )
{
    struct cppISteamFriends_SteamFriends005 *iface = (struct cppISteamFriends_SteamFriends005 *)params->linux_side;
    params->_ret = iface->GetPersonaName(  );
}

void cppISteamFriends_SteamFriends005_SetPersonaName( struct cppISteamFriends_SteamFriends005_SetPersonaName_params *params )
{
    struct cppISteamFriends_SteamFriends005 *iface = (struct cppISteamFriends_SteamFriends005 *)params->linux_side;
    iface->SetPersonaName( params->pchPersonaName );
}

void cppISteamFriends_SteamFriends005_GetPersonaState( struct cppISteamFriends_SteamFriends005_GetPersonaState_params *params )
{
    struct cppISteamFriends_SteamFriends005 *iface = (struct cppISteamFriends_SteamFriends005 *)params->linux_side;
    params->_ret = iface->GetPersonaState(  );
}

void cppISteamFriends_SteamFriends005_GetFriendCount( struct cppISteamFriends_SteamFriends005_GetFriendCount_params *params )
{
    struct cppISteamFriends_SteamFriends005 *iface = (struct cppISteamFriends_SteamFriends005 *)params->linux_side;
    params->_ret = iface->GetFriendCount( params->iFriendFlags );
}

void cppISteamFriends_SteamFriends005_GetFriendByIndex( struct cppISteamFriends_SteamFriends005_GetFriendByIndex_params *params )
{
    struct cppISteamFriends_SteamFriends005 *iface = (struct cppISteamFriends_SteamFriends005 *)params->linux_side;
    *params->_ret = iface->GetFriendByIndex( params->iFriend, params->iFriendFlags );
}

void cppISteamFriends_SteamFriends005_GetFriendRelationship( struct cppISteamFriends_SteamFriends005_GetFriendRelationship_params *params )
{
    struct cppISteamFriends_SteamFriends005 *iface = (struct cppISteamFriends_SteamFriends005 *)params->linux_side;
    params->_ret = iface->GetFriendRelationship( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends005_GetFriendPersonaState( struct cppISteamFriends_SteamFriends005_GetFriendPersonaState_params *params )
{
    struct cppISteamFriends_SteamFriends005 *iface = (struct cppISteamFriends_SteamFriends005 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaState( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends005_GetFriendPersonaName( struct cppISteamFriends_SteamFriends005_GetFriendPersonaName_params *params )
{
    struct cppISteamFriends_SteamFriends005 *iface = (struct cppISteamFriends_SteamFriends005 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaName( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends005_GetFriendAvatar( struct cppISteamFriends_SteamFriends005_GetFriendAvatar_params *params )
{
    struct cppISteamFriends_SteamFriends005 *iface = (struct cppISteamFriends_SteamFriends005 *)params->linux_side;
    params->_ret = iface->GetFriendAvatar( params->steamIDFriend, params->eAvatarSize );
}

void cppISteamFriends_SteamFriends005_GetFriendGamePlayed( struct cppISteamFriends_SteamFriends005_GetFriendGamePlayed_params *params )
{
    struct cppISteamFriends_SteamFriends005 *iface = (struct cppISteamFriends_SteamFriends005 *)params->linux_side;
    params->_ret = iface->GetFriendGamePlayed( params->steamIDFriend, params->pFriendGameInfo );
}

void cppISteamFriends_SteamFriends005_GetFriendPersonaNameHistory( struct cppISteamFriends_SteamFriends005_GetFriendPersonaNameHistory_params *params )
{
    struct cppISteamFriends_SteamFriends005 *iface = (struct cppISteamFriends_SteamFriends005 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaNameHistory( params->steamIDFriend, params->iPersonaName );
}

void cppISteamFriends_SteamFriends005_HasFriend( struct cppISteamFriends_SteamFriends005_HasFriend_params *params )
{
    struct cppISteamFriends_SteamFriends005 *iface = (struct cppISteamFriends_SteamFriends005 *)params->linux_side;
    params->_ret = iface->HasFriend( params->steamIDFriend, params->iFriendFlags );
}

void cppISteamFriends_SteamFriends005_GetClanCount( struct cppISteamFriends_SteamFriends005_GetClanCount_params *params )
{
    struct cppISteamFriends_SteamFriends005 *iface = (struct cppISteamFriends_SteamFriends005 *)params->linux_side;
    params->_ret = iface->GetClanCount(  );
}

void cppISteamFriends_SteamFriends005_GetClanByIndex( struct cppISteamFriends_SteamFriends005_GetClanByIndex_params *params )
{
    struct cppISteamFriends_SteamFriends005 *iface = (struct cppISteamFriends_SteamFriends005 *)params->linux_side;
    *params->_ret = iface->GetClanByIndex( params->iClan );
}

void cppISteamFriends_SteamFriends005_GetClanName( struct cppISteamFriends_SteamFriends005_GetClanName_params *params )
{
    struct cppISteamFriends_SteamFriends005 *iface = (struct cppISteamFriends_SteamFriends005 *)params->linux_side;
    params->_ret = iface->GetClanName( params->steamIDClan );
}

void cppISteamFriends_SteamFriends005_GetFriendCountFromSource( struct cppISteamFriends_SteamFriends005_GetFriendCountFromSource_params *params )
{
    struct cppISteamFriends_SteamFriends005 *iface = (struct cppISteamFriends_SteamFriends005 *)params->linux_side;
    params->_ret = iface->GetFriendCountFromSource( params->steamIDSource );
}

void cppISteamFriends_SteamFriends005_GetFriendFromSourceByIndex( struct cppISteamFriends_SteamFriends005_GetFriendFromSourceByIndex_params *params )
{
    struct cppISteamFriends_SteamFriends005 *iface = (struct cppISteamFriends_SteamFriends005 *)params->linux_side;
    *params->_ret = iface->GetFriendFromSourceByIndex( params->steamIDSource, params->iFriend );
}

void cppISteamFriends_SteamFriends005_IsUserInSource( struct cppISteamFriends_SteamFriends005_IsUserInSource_params *params )
{
    struct cppISteamFriends_SteamFriends005 *iface = (struct cppISteamFriends_SteamFriends005 *)params->linux_side;
    params->_ret = iface->IsUserInSource( params->steamIDUser, params->steamIDSource );
}

void cppISteamFriends_SteamFriends005_SetInGameVoiceSpeaking( struct cppISteamFriends_SteamFriends005_SetInGameVoiceSpeaking_params *params )
{
    struct cppISteamFriends_SteamFriends005 *iface = (struct cppISteamFriends_SteamFriends005 *)params->linux_side;
    iface->SetInGameVoiceSpeaking( params->steamIDUser, params->bSpeaking );
}

void cppISteamFriends_SteamFriends005_ActivateGameOverlay( struct cppISteamFriends_SteamFriends005_ActivateGameOverlay_params *params )
{
    struct cppISteamFriends_SteamFriends005 *iface = (struct cppISteamFriends_SteamFriends005 *)params->linux_side;
    iface->ActivateGameOverlay( params->pchDialog );
}

void cppISteamFriends_SteamFriends005_ActivateGameOverlayToUser( struct cppISteamFriends_SteamFriends005_ActivateGameOverlayToUser_params *params )
{
    struct cppISteamFriends_SteamFriends005 *iface = (struct cppISteamFriends_SteamFriends005 *)params->linux_side;
    iface->ActivateGameOverlayToUser( params->pchDialog, params->steamID );
}

void cppISteamFriends_SteamFriends005_ActivateGameOverlayToWebPage( struct cppISteamFriends_SteamFriends005_ActivateGameOverlayToWebPage_params *params )
{
    struct cppISteamFriends_SteamFriends005 *iface = (struct cppISteamFriends_SteamFriends005 *)params->linux_side;
    iface->ActivateGameOverlayToWebPage( params->pchURL );
}

void cppISteamFriends_SteamFriends005_ActivateGameOverlayToStore( struct cppISteamFriends_SteamFriends005_ActivateGameOverlayToStore_params *params )
{
    struct cppISteamFriends_SteamFriends005 *iface = (struct cppISteamFriends_SteamFriends005 *)params->linux_side;
    iface->ActivateGameOverlayToStore( params->nAppID );
}

void cppISteamFriends_SteamFriends005_SetPlayedWith( struct cppISteamFriends_SteamFriends005_SetPlayedWith_params *params )
{
    struct cppISteamFriends_SteamFriends005 *iface = (struct cppISteamFriends_SteamFriends005 *)params->linux_side;
    iface->SetPlayedWith( params->steamIDUserPlayedWith );
}

#ifdef __cplusplus
}
#endif
