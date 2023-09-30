/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamFriends_SteamFriends006.h"

void cppISteamFriends_SteamFriends006_GetPersonaName( struct cppISteamFriends_SteamFriends006_GetPersonaName_params *params )
{
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    params->_ret = iface->GetPersonaName(  );
}

void cppISteamFriends_SteamFriends006_SetPersonaName( struct cppISteamFriends_SteamFriends006_SetPersonaName_params *params )
{
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    iface->SetPersonaName( params->pchPersonaName );
}

void cppISteamFriends_SteamFriends006_GetPersonaState( struct cppISteamFriends_SteamFriends006_GetPersonaState_params *params )
{
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    params->_ret = iface->GetPersonaState(  );
}

void cppISteamFriends_SteamFriends006_GetFriendCount( struct cppISteamFriends_SteamFriends006_GetFriendCount_params *params )
{
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    params->_ret = iface->GetFriendCount( params->iFriendFlags );
}

void cppISteamFriends_SteamFriends006_GetFriendByIndex( struct cppISteamFriends_SteamFriends006_GetFriendByIndex_params *params )
{
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    *params->_ret = iface->GetFriendByIndex( params->iFriend, params->iFriendFlags );
}

void cppISteamFriends_SteamFriends006_GetFriendRelationship( struct cppISteamFriends_SteamFriends006_GetFriendRelationship_params *params )
{
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    params->_ret = iface->GetFriendRelationship( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends006_GetFriendPersonaState( struct cppISteamFriends_SteamFriends006_GetFriendPersonaState_params *params )
{
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaState( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends006_GetFriendPersonaName( struct cppISteamFriends_SteamFriends006_GetFriendPersonaName_params *params )
{
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaName( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends006_GetFriendAvatar( struct cppISteamFriends_SteamFriends006_GetFriendAvatar_params *params )
{
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    params->_ret = iface->GetFriendAvatar( params->steamIDFriend, params->eAvatarSize );
}

void cppISteamFriends_SteamFriends006_GetFriendGamePlayed( struct cppISteamFriends_SteamFriends006_GetFriendGamePlayed_params *params )
{
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    params->_ret = iface->GetFriendGamePlayed( params->steamIDFriend, params->pFriendGameInfo );
}

void cppISteamFriends_SteamFriends006_GetFriendPersonaNameHistory( struct cppISteamFriends_SteamFriends006_GetFriendPersonaNameHistory_params *params )
{
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaNameHistory( params->steamIDFriend, params->iPersonaName );
}

void cppISteamFriends_SteamFriends006_HasFriend( struct cppISteamFriends_SteamFriends006_HasFriend_params *params )
{
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    params->_ret = iface->HasFriend( params->steamIDFriend, params->iFriendFlags );
}

void cppISteamFriends_SteamFriends006_GetClanCount( struct cppISteamFriends_SteamFriends006_GetClanCount_params *params )
{
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    params->_ret = iface->GetClanCount(  );
}

void cppISteamFriends_SteamFriends006_GetClanByIndex( struct cppISteamFriends_SteamFriends006_GetClanByIndex_params *params )
{
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    *params->_ret = iface->GetClanByIndex( params->iClan );
}

void cppISteamFriends_SteamFriends006_GetClanName( struct cppISteamFriends_SteamFriends006_GetClanName_params *params )
{
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    params->_ret = iface->GetClanName( params->steamIDClan );
}

void cppISteamFriends_SteamFriends006_GetClanTag( struct cppISteamFriends_SteamFriends006_GetClanTag_params *params )
{
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    params->_ret = iface->GetClanTag( params->steamIDClan );
}

void cppISteamFriends_SteamFriends006_GetFriendCountFromSource( struct cppISteamFriends_SteamFriends006_GetFriendCountFromSource_params *params )
{
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    params->_ret = iface->GetFriendCountFromSource( params->steamIDSource );
}

void cppISteamFriends_SteamFriends006_GetFriendFromSourceByIndex( struct cppISteamFriends_SteamFriends006_GetFriendFromSourceByIndex_params *params )
{
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    *params->_ret = iface->GetFriendFromSourceByIndex( params->steamIDSource, params->iFriend );
}

void cppISteamFriends_SteamFriends006_IsUserInSource( struct cppISteamFriends_SteamFriends006_IsUserInSource_params *params )
{
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    params->_ret = iface->IsUserInSource( params->steamIDUser, params->steamIDSource );
}

void cppISteamFriends_SteamFriends006_SetInGameVoiceSpeaking( struct cppISteamFriends_SteamFriends006_SetInGameVoiceSpeaking_params *params )
{
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    iface->SetInGameVoiceSpeaking( params->steamIDUser, params->bSpeaking );
}

void cppISteamFriends_SteamFriends006_ActivateGameOverlay( struct cppISteamFriends_SteamFriends006_ActivateGameOverlay_params *params )
{
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    iface->ActivateGameOverlay( params->pchDialog );
}

void cppISteamFriends_SteamFriends006_ActivateGameOverlayToUser( struct cppISteamFriends_SteamFriends006_ActivateGameOverlayToUser_params *params )
{
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    iface->ActivateGameOverlayToUser( params->pchDialog, params->steamID );
}

void cppISteamFriends_SteamFriends006_ActivateGameOverlayToWebPage( struct cppISteamFriends_SteamFriends006_ActivateGameOverlayToWebPage_params *params )
{
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    iface->ActivateGameOverlayToWebPage( params->pchURL );
}

void cppISteamFriends_SteamFriends006_ActivateGameOverlayToStore( struct cppISteamFriends_SteamFriends006_ActivateGameOverlayToStore_params *params )
{
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    iface->ActivateGameOverlayToStore( params->nAppID );
}

void cppISteamFriends_SteamFriends006_SetPlayedWith( struct cppISteamFriends_SteamFriends006_SetPlayedWith_params *params )
{
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    iface->SetPlayedWith( params->steamIDUserPlayedWith );
}

void cppISteamFriends_SteamFriends006_ActivateGameOverlayInviteDialog( struct cppISteamFriends_SteamFriends006_ActivateGameOverlayInviteDialog_params *params )
{
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    iface->ActivateGameOverlayInviteDialog( params->steamIDLobby );
}

