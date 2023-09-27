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
void cppISteamFriends_SteamFriends005_GetPersonaName( struct cppISteamFriends_SteamFriends005_GetPersonaName_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetPersonaName(  );
}

void cppISteamFriends_SteamFriends005_SetPersonaName( struct cppISteamFriends_SteamFriends005_SetPersonaName_params *params )
{
    ((ISteamFriends*)params->linux_side)->SetPersonaName( (const char *)params->pchPersonaName );
}

void cppISteamFriends_SteamFriends005_GetPersonaState( struct cppISteamFriends_SteamFriends005_GetPersonaState_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetPersonaState(  );
}

void cppISteamFriends_SteamFriends005_GetFriendCount( struct cppISteamFriends_SteamFriends005_GetFriendCount_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendCount( (int)params->iFriendFlags );
}

void cppISteamFriends_SteamFriends005_GetFriendByIndex( struct cppISteamFriends_SteamFriends005_GetFriendByIndex_params *params )
{
    *params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendByIndex( (int)params->iFriend, (int)params->iFriendFlags );
}

void cppISteamFriends_SteamFriends005_GetFriendRelationship( struct cppISteamFriends_SteamFriends005_GetFriendRelationship_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendRelationship( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends005_GetFriendPersonaState( struct cppISteamFriends_SteamFriends005_GetFriendPersonaState_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendPersonaState( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends005_GetFriendPersonaName( struct cppISteamFriends_SteamFriends005_GetFriendPersonaName_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendPersonaName( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends005_GetFriendAvatar( struct cppISteamFriends_SteamFriends005_GetFriendAvatar_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendAvatar( (CSteamID)params->steamIDFriend, (int)params->eAvatarSize );
}

void cppISteamFriends_SteamFriends005_GetFriendGamePlayed( struct cppISteamFriends_SteamFriends005_GetFriendGamePlayed_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendGamePlayed( (CSteamID)params->steamIDFriend, (FriendGameInfo_t *)params->pFriendGameInfo );
}

void cppISteamFriends_SteamFriends005_GetFriendPersonaNameHistory( struct cppISteamFriends_SteamFriends005_GetFriendPersonaNameHistory_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendPersonaNameHistory( (CSteamID)params->steamIDFriend, (int)params->iPersonaName );
}

void cppISteamFriends_SteamFriends005_HasFriend( struct cppISteamFriends_SteamFriends005_HasFriend_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->HasFriend( (CSteamID)params->steamIDFriend, (int)params->iFriendFlags );
}

void cppISteamFriends_SteamFriends005_GetClanCount( struct cppISteamFriends_SteamFriends005_GetClanCount_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetClanCount(  );
}

void cppISteamFriends_SteamFriends005_GetClanByIndex( struct cppISteamFriends_SteamFriends005_GetClanByIndex_params *params )
{
    *params->_ret = ((ISteamFriends*)params->linux_side)->GetClanByIndex( (int)params->iClan );
}

void cppISteamFriends_SteamFriends005_GetClanName( struct cppISteamFriends_SteamFriends005_GetClanName_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetClanName( (CSteamID)params->steamIDClan );
}

void cppISteamFriends_SteamFriends005_GetFriendCountFromSource( struct cppISteamFriends_SteamFriends005_GetFriendCountFromSource_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendCountFromSource( (CSteamID)params->steamIDSource );
}

void cppISteamFriends_SteamFriends005_GetFriendFromSourceByIndex( struct cppISteamFriends_SteamFriends005_GetFriendFromSourceByIndex_params *params )
{
    *params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendFromSourceByIndex( (CSteamID)params->steamIDSource, (int)params->iFriend );
}

void cppISteamFriends_SteamFriends005_IsUserInSource( struct cppISteamFriends_SteamFriends005_IsUserInSource_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->IsUserInSource( (CSteamID)params->steamIDUser, (CSteamID)params->steamIDSource );
}

void cppISteamFriends_SteamFriends005_SetInGameVoiceSpeaking( struct cppISteamFriends_SteamFriends005_SetInGameVoiceSpeaking_params *params )
{
    ((ISteamFriends*)params->linux_side)->SetInGameVoiceSpeaking( (CSteamID)params->steamIDUser, (bool)params->bSpeaking );
}

void cppISteamFriends_SteamFriends005_ActivateGameOverlay( struct cppISteamFriends_SteamFriends005_ActivateGameOverlay_params *params )
{
    ((ISteamFriends*)params->linux_side)->ActivateGameOverlay( (const char *)params->pchDialog );
}

void cppISteamFriends_SteamFriends005_ActivateGameOverlayToUser( struct cppISteamFriends_SteamFriends005_ActivateGameOverlayToUser_params *params )
{
    ((ISteamFriends*)params->linux_side)->ActivateGameOverlayToUser( (const char *)params->pchDialog, (CSteamID)params->steamID );
}

void cppISteamFriends_SteamFriends005_ActivateGameOverlayToWebPage( struct cppISteamFriends_SteamFriends005_ActivateGameOverlayToWebPage_params *params )
{
    ((ISteamFriends*)params->linux_side)->ActivateGameOverlayToWebPage( (const char *)params->pchURL );
}

void cppISteamFriends_SteamFriends005_ActivateGameOverlayToStore( struct cppISteamFriends_SteamFriends005_ActivateGameOverlayToStore_params *params )
{
    ((ISteamFriends*)params->linux_side)->ActivateGameOverlayToStore( (AppId_t)params->nAppID );
}

void cppISteamFriends_SteamFriends005_SetPlayedWith( struct cppISteamFriends_SteamFriends005_SetPlayedWith_params *params )
{
    ((ISteamFriends*)params->linux_side)->SetPlayedWith( (CSteamID)params->steamIDUserPlayedWith );
}

#ifdef __cplusplus
}
#endif
