#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_111/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_111
#include "struct_converters.h"
#include "cppISteamFriends_SteamFriends007.h"
void cppISteamFriends_SteamFriends007_GetPersonaName( struct cppISteamFriends_SteamFriends007_GetPersonaName_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetPersonaName(  );
}

void cppISteamFriends_SteamFriends007_SetPersonaName( struct cppISteamFriends_SteamFriends007_SetPersonaName_params *params )
{
    ((ISteamFriends*)params->linux_side)->SetPersonaName( (const char *)params->pchPersonaName );
}

void cppISteamFriends_SteamFriends007_GetPersonaState( struct cppISteamFriends_SteamFriends007_GetPersonaState_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetPersonaState(  );
}

void cppISteamFriends_SteamFriends007_GetFriendCount( struct cppISteamFriends_SteamFriends007_GetFriendCount_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendCount( (int)params->iFriendFlags );
}

void cppISteamFriends_SteamFriends007_GetFriendByIndex( struct cppISteamFriends_SteamFriends007_GetFriendByIndex_params *params )
{
    *params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendByIndex( (int)params->iFriend, (int)params->iFriendFlags );
}

void cppISteamFriends_SteamFriends007_GetFriendRelationship( struct cppISteamFriends_SteamFriends007_GetFriendRelationship_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendRelationship( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends007_GetFriendPersonaState( struct cppISteamFriends_SteamFriends007_GetFriendPersonaState_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendPersonaState( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends007_GetFriendPersonaName( struct cppISteamFriends_SteamFriends007_GetFriendPersonaName_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendPersonaName( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends007_GetFriendGamePlayed( struct cppISteamFriends_SteamFriends007_GetFriendGamePlayed_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendGamePlayed( (CSteamID)params->steamIDFriend, (FriendGameInfo_t *)params->pFriendGameInfo );
}

void cppISteamFriends_SteamFriends007_GetFriendPersonaNameHistory( struct cppISteamFriends_SteamFriends007_GetFriendPersonaNameHistory_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendPersonaNameHistory( (CSteamID)params->steamIDFriend, (int)params->iPersonaName );
}

void cppISteamFriends_SteamFriends007_HasFriend( struct cppISteamFriends_SteamFriends007_HasFriend_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->HasFriend( (CSteamID)params->steamIDFriend, (int)params->iFriendFlags );
}

void cppISteamFriends_SteamFriends007_GetClanCount( struct cppISteamFriends_SteamFriends007_GetClanCount_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetClanCount(  );
}

void cppISteamFriends_SteamFriends007_GetClanByIndex( struct cppISteamFriends_SteamFriends007_GetClanByIndex_params *params )
{
    *params->_ret = ((ISteamFriends*)params->linux_side)->GetClanByIndex( (int)params->iClan );
}

void cppISteamFriends_SteamFriends007_GetClanName( struct cppISteamFriends_SteamFriends007_GetClanName_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetClanName( (CSteamID)params->steamIDClan );
}

void cppISteamFriends_SteamFriends007_GetClanTag( struct cppISteamFriends_SteamFriends007_GetClanTag_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetClanTag( (CSteamID)params->steamIDClan );
}

void cppISteamFriends_SteamFriends007_GetFriendCountFromSource( struct cppISteamFriends_SteamFriends007_GetFriendCountFromSource_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendCountFromSource( (CSteamID)params->steamIDSource );
}

void cppISteamFriends_SteamFriends007_GetFriendFromSourceByIndex( struct cppISteamFriends_SteamFriends007_GetFriendFromSourceByIndex_params *params )
{
    *params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendFromSourceByIndex( (CSteamID)params->steamIDSource, (int)params->iFriend );
}

void cppISteamFriends_SteamFriends007_IsUserInSource( struct cppISteamFriends_SteamFriends007_IsUserInSource_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->IsUserInSource( (CSteamID)params->steamIDUser, (CSteamID)params->steamIDSource );
}

void cppISteamFriends_SteamFriends007_SetInGameVoiceSpeaking( struct cppISteamFriends_SteamFriends007_SetInGameVoiceSpeaking_params *params )
{
    ((ISteamFriends*)params->linux_side)->SetInGameVoiceSpeaking( (CSteamID)params->steamIDUser, (bool)params->bSpeaking );
}

void cppISteamFriends_SteamFriends007_ActivateGameOverlay( struct cppISteamFriends_SteamFriends007_ActivateGameOverlay_params *params )
{
    ((ISteamFriends*)params->linux_side)->ActivateGameOverlay( (const char *)params->pchDialog );
}

void cppISteamFriends_SteamFriends007_ActivateGameOverlayToUser( struct cppISteamFriends_SteamFriends007_ActivateGameOverlayToUser_params *params )
{
    ((ISteamFriends*)params->linux_side)->ActivateGameOverlayToUser( (const char *)params->pchDialog, (CSteamID)params->steamID );
}

void cppISteamFriends_SteamFriends007_ActivateGameOverlayToWebPage( struct cppISteamFriends_SteamFriends007_ActivateGameOverlayToWebPage_params *params )
{
    ((ISteamFriends*)params->linux_side)->ActivateGameOverlayToWebPage( (const char *)params->pchURL );
}

void cppISteamFriends_SteamFriends007_ActivateGameOverlayToStore( struct cppISteamFriends_SteamFriends007_ActivateGameOverlayToStore_params *params )
{
    ((ISteamFriends*)params->linux_side)->ActivateGameOverlayToStore( (AppId_t)params->nAppID );
}

void cppISteamFriends_SteamFriends007_SetPlayedWith( struct cppISteamFriends_SteamFriends007_SetPlayedWith_params *params )
{
    ((ISteamFriends*)params->linux_side)->SetPlayedWith( (CSteamID)params->steamIDUserPlayedWith );
}

void cppISteamFriends_SteamFriends007_ActivateGameOverlayInviteDialog( struct cppISteamFriends_SteamFriends007_ActivateGameOverlayInviteDialog_params *params )
{
    ((ISteamFriends*)params->linux_side)->ActivateGameOverlayInviteDialog( (CSteamID)params->steamIDLobby );
}

void cppISteamFriends_SteamFriends007_GetSmallFriendAvatar( struct cppISteamFriends_SteamFriends007_GetSmallFriendAvatar_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetSmallFriendAvatar( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends007_GetMediumFriendAvatar( struct cppISteamFriends_SteamFriends007_GetMediumFriendAvatar_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetMediumFriendAvatar( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends007_GetLargeFriendAvatar( struct cppISteamFriends_SteamFriends007_GetLargeFriendAvatar_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetLargeFriendAvatar( (CSteamID)params->steamIDFriend );
}

#ifdef __cplusplus
}
#endif
