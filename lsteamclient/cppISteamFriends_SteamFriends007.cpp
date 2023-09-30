/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamFriends_SteamFriends007.h"

void cppISteamFriends_SteamFriends007_GetPersonaName( struct cppISteamFriends_SteamFriends007_GetPersonaName_params *params )
{
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    params->_ret = iface->GetPersonaName(  );
}

void cppISteamFriends_SteamFriends007_SetPersonaName( struct cppISteamFriends_SteamFriends007_SetPersonaName_params *params )
{
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    iface->SetPersonaName( params->pchPersonaName );
}

void cppISteamFriends_SteamFriends007_GetPersonaState( struct cppISteamFriends_SteamFriends007_GetPersonaState_params *params )
{
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    params->_ret = iface->GetPersonaState(  );
}

void cppISteamFriends_SteamFriends007_GetFriendCount( struct cppISteamFriends_SteamFriends007_GetFriendCount_params *params )
{
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    params->_ret = iface->GetFriendCount( params->iFriendFlags );
}

void cppISteamFriends_SteamFriends007_GetFriendByIndex( struct cppISteamFriends_SteamFriends007_GetFriendByIndex_params *params )
{
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    *params->_ret = iface->GetFriendByIndex( params->iFriend, params->iFriendFlags );
}

void cppISteamFriends_SteamFriends007_GetFriendRelationship( struct cppISteamFriends_SteamFriends007_GetFriendRelationship_params *params )
{
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    params->_ret = iface->GetFriendRelationship( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends007_GetFriendPersonaState( struct cppISteamFriends_SteamFriends007_GetFriendPersonaState_params *params )
{
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaState( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends007_GetFriendPersonaName( struct cppISteamFriends_SteamFriends007_GetFriendPersonaName_params *params )
{
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaName( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends007_GetFriendGamePlayed( struct cppISteamFriends_SteamFriends007_GetFriendGamePlayed_params *params )
{
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    params->_ret = iface->GetFriendGamePlayed( params->steamIDFriend, params->pFriendGameInfo );
}

void cppISteamFriends_SteamFriends007_GetFriendPersonaNameHistory( struct cppISteamFriends_SteamFriends007_GetFriendPersonaNameHistory_params *params )
{
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaNameHistory( params->steamIDFriend, params->iPersonaName );
}

void cppISteamFriends_SteamFriends007_HasFriend( struct cppISteamFriends_SteamFriends007_HasFriend_params *params )
{
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    params->_ret = iface->HasFriend( params->steamIDFriend, params->iFriendFlags );
}

void cppISteamFriends_SteamFriends007_GetClanCount( struct cppISteamFriends_SteamFriends007_GetClanCount_params *params )
{
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    params->_ret = iface->GetClanCount(  );
}

void cppISteamFriends_SteamFriends007_GetClanByIndex( struct cppISteamFriends_SteamFriends007_GetClanByIndex_params *params )
{
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    *params->_ret = iface->GetClanByIndex( params->iClan );
}

void cppISteamFriends_SteamFriends007_GetClanName( struct cppISteamFriends_SteamFriends007_GetClanName_params *params )
{
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    params->_ret = iface->GetClanName( params->steamIDClan );
}

void cppISteamFriends_SteamFriends007_GetClanTag( struct cppISteamFriends_SteamFriends007_GetClanTag_params *params )
{
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    params->_ret = iface->GetClanTag( params->steamIDClan );
}

void cppISteamFriends_SteamFriends007_GetFriendCountFromSource( struct cppISteamFriends_SteamFriends007_GetFriendCountFromSource_params *params )
{
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    params->_ret = iface->GetFriendCountFromSource( params->steamIDSource );
}

void cppISteamFriends_SteamFriends007_GetFriendFromSourceByIndex( struct cppISteamFriends_SteamFriends007_GetFriendFromSourceByIndex_params *params )
{
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    *params->_ret = iface->GetFriendFromSourceByIndex( params->steamIDSource, params->iFriend );
}

void cppISteamFriends_SteamFriends007_IsUserInSource( struct cppISteamFriends_SteamFriends007_IsUserInSource_params *params )
{
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    params->_ret = iface->IsUserInSource( params->steamIDUser, params->steamIDSource );
}

void cppISteamFriends_SteamFriends007_SetInGameVoiceSpeaking( struct cppISteamFriends_SteamFriends007_SetInGameVoiceSpeaking_params *params )
{
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    iface->SetInGameVoiceSpeaking( params->steamIDUser, params->bSpeaking );
}

void cppISteamFriends_SteamFriends007_ActivateGameOverlay( struct cppISteamFriends_SteamFriends007_ActivateGameOverlay_params *params )
{
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    iface->ActivateGameOverlay( params->pchDialog );
}

void cppISteamFriends_SteamFriends007_ActivateGameOverlayToUser( struct cppISteamFriends_SteamFriends007_ActivateGameOverlayToUser_params *params )
{
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    iface->ActivateGameOverlayToUser( params->pchDialog, params->steamID );
}

void cppISteamFriends_SteamFriends007_ActivateGameOverlayToWebPage( struct cppISteamFriends_SteamFriends007_ActivateGameOverlayToWebPage_params *params )
{
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    iface->ActivateGameOverlayToWebPage( params->pchURL );
}

void cppISteamFriends_SteamFriends007_ActivateGameOverlayToStore( struct cppISteamFriends_SteamFriends007_ActivateGameOverlayToStore_params *params )
{
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    iface->ActivateGameOverlayToStore( params->nAppID );
}

void cppISteamFriends_SteamFriends007_SetPlayedWith( struct cppISteamFriends_SteamFriends007_SetPlayedWith_params *params )
{
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    iface->SetPlayedWith( params->steamIDUserPlayedWith );
}

void cppISteamFriends_SteamFriends007_ActivateGameOverlayInviteDialog( struct cppISteamFriends_SteamFriends007_ActivateGameOverlayInviteDialog_params *params )
{
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    iface->ActivateGameOverlayInviteDialog( params->steamIDLobby );
}

void cppISteamFriends_SteamFriends007_GetSmallFriendAvatar( struct cppISteamFriends_SteamFriends007_GetSmallFriendAvatar_params *params )
{
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    params->_ret = iface->GetSmallFriendAvatar( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends007_GetMediumFriendAvatar( struct cppISteamFriends_SteamFriends007_GetMediumFriendAvatar_params *params )
{
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    params->_ret = iface->GetMediumFriendAvatar( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends007_GetLargeFriendAvatar( struct cppISteamFriends_SteamFriends007_GetLargeFriendAvatar_params *params )
{
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    params->_ret = iface->GetLargeFriendAvatar( params->steamIDFriend );
}

