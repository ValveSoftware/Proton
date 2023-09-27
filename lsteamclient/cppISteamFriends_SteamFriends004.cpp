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
#include "cppISteamFriends_SteamFriends004.h"
void cppISteamFriends_SteamFriends004_GetPersonaName( struct cppISteamFriends_SteamFriends004_GetPersonaName_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetPersonaName(  );
}

void cppISteamFriends_SteamFriends004_SetPersonaName( struct cppISteamFriends_SteamFriends004_SetPersonaName_params *params )
{
    ((ISteamFriends*)params->linux_side)->SetPersonaName( (const char *)params->pchPersonaName );
}

void cppISteamFriends_SteamFriends004_GetPersonaState( struct cppISteamFriends_SteamFriends004_GetPersonaState_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetPersonaState(  );
}

void cppISteamFriends_SteamFriends004_GetFriendCount( struct cppISteamFriends_SteamFriends004_GetFriendCount_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendCount( (int)params->iFriendFlags );
}

void cppISteamFriends_SteamFriends004_GetFriendByIndex( struct cppISteamFriends_SteamFriends004_GetFriendByIndex_params *params )
{
    *params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendByIndex( (int)params->iFriend, (int)params->iFriendFlags );
}

void cppISteamFriends_SteamFriends004_GetFriendRelationship( struct cppISteamFriends_SteamFriends004_GetFriendRelationship_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendRelationship( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends004_GetFriendPersonaState( struct cppISteamFriends_SteamFriends004_GetFriendPersonaState_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendPersonaState( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends004_GetFriendPersonaName( struct cppISteamFriends_SteamFriends004_GetFriendPersonaName_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendPersonaName( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends004_GetFriendAvatar( struct cppISteamFriends_SteamFriends004_GetFriendAvatar_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendAvatar( (CSteamID)params->steamIDFriend, (int)params->eAvatarSize );
}

void cppISteamFriends_SteamFriends004_GetFriendGamePlayed( struct cppISteamFriends_SteamFriends004_GetFriendGamePlayed_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendGamePlayed( (CSteamID)params->steamIDFriend, (uint64 *)params->pulGameID, (uint32 *)params->punGameIP, (uint16 *)params->pusGamePort, (uint16 *)params->pusQueryPort );
}

void cppISteamFriends_SteamFriends004_GetFriendPersonaNameHistory( struct cppISteamFriends_SteamFriends004_GetFriendPersonaNameHistory_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendPersonaNameHistory( (CSteamID)params->steamIDFriend, (int)params->iPersonaName );
}

void cppISteamFriends_SteamFriends004_HasFriend( struct cppISteamFriends_SteamFriends004_HasFriend_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->HasFriend( (CSteamID)params->steamIDFriend, (int)params->iFriendFlags );
}

void cppISteamFriends_SteamFriends004_GetClanCount( struct cppISteamFriends_SteamFriends004_GetClanCount_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetClanCount(  );
}

void cppISteamFriends_SteamFriends004_GetClanByIndex( struct cppISteamFriends_SteamFriends004_GetClanByIndex_params *params )
{
    *params->_ret = ((ISteamFriends*)params->linux_side)->GetClanByIndex( (int)params->iClan );
}

void cppISteamFriends_SteamFriends004_GetClanName( struct cppISteamFriends_SteamFriends004_GetClanName_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetClanName( (CSteamID)params->steamIDClan );
}

void cppISteamFriends_SteamFriends004_GetFriendCountFromSource( struct cppISteamFriends_SteamFriends004_GetFriendCountFromSource_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendCountFromSource( (CSteamID)params->steamIDSource );
}

void cppISteamFriends_SteamFriends004_GetFriendFromSourceByIndex( struct cppISteamFriends_SteamFriends004_GetFriendFromSourceByIndex_params *params )
{
    *params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendFromSourceByIndex( (CSteamID)params->steamIDSource, (int)params->iFriend );
}

void cppISteamFriends_SteamFriends004_IsUserInSource( struct cppISteamFriends_SteamFriends004_IsUserInSource_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->IsUserInSource( (CSteamID)params->steamIDUser, (CSteamID)params->steamIDSource );
}

void cppISteamFriends_SteamFriends004_SetInGameVoiceSpeaking( struct cppISteamFriends_SteamFriends004_SetInGameVoiceSpeaking_params *params )
{
    ((ISteamFriends*)params->linux_side)->SetInGameVoiceSpeaking( (CSteamID)params->steamIDUser, (bool)params->bSpeaking );
}

void cppISteamFriends_SteamFriends004_ActivateGameOverlay( struct cppISteamFriends_SteamFriends004_ActivateGameOverlay_params *params )
{
    ((ISteamFriends*)params->linux_side)->ActivateGameOverlay( (const char *)params->pchDialog );
}

#ifdef __cplusplus
}
#endif
