/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS ISteamFriends_SteamFriends006_GetPersonaName( void *args )
{
    struct ISteamFriends_SteamFriends006_GetPersonaName_params *params = (struct ISteamFriends_SteamFriends006_GetPersonaName_params *)args;
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    params->_ret = iface->GetPersonaName(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends006_SetPersonaName( void *args )
{
    struct ISteamFriends_SteamFriends006_SetPersonaName_params *params = (struct ISteamFriends_SteamFriends006_SetPersonaName_params *)args;
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    iface->SetPersonaName( params->pchPersonaName );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends006_GetPersonaState( void *args )
{
    struct ISteamFriends_SteamFriends006_GetPersonaState_params *params = (struct ISteamFriends_SteamFriends006_GetPersonaState_params *)args;
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    params->_ret = iface->GetPersonaState(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends006_GetFriendCount( void *args )
{
    struct ISteamFriends_SteamFriends006_GetFriendCount_params *params = (struct ISteamFriends_SteamFriends006_GetFriendCount_params *)args;
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    params->_ret = iface->GetFriendCount( params->iFriendFlags );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends006_GetFriendByIndex( void *args )
{
    struct ISteamFriends_SteamFriends006_GetFriendByIndex_params *params = (struct ISteamFriends_SteamFriends006_GetFriendByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    *params->_ret = iface->GetFriendByIndex( params->iFriend, params->iFriendFlags );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends006_GetFriendRelationship( void *args )
{
    struct ISteamFriends_SteamFriends006_GetFriendRelationship_params *params = (struct ISteamFriends_SteamFriends006_GetFriendRelationship_params *)args;
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    params->_ret = iface->GetFriendRelationship( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends006_GetFriendPersonaState( void *args )
{
    struct ISteamFriends_SteamFriends006_GetFriendPersonaState_params *params = (struct ISteamFriends_SteamFriends006_GetFriendPersonaState_params *)args;
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaState( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends006_GetFriendPersonaName( void *args )
{
    struct ISteamFriends_SteamFriends006_GetFriendPersonaName_params *params = (struct ISteamFriends_SteamFriends006_GetFriendPersonaName_params *)args;
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaName( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends006_GetFriendAvatar( void *args )
{
    struct ISteamFriends_SteamFriends006_GetFriendAvatar_params *params = (struct ISteamFriends_SteamFriends006_GetFriendAvatar_params *)args;
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    params->_ret = iface->GetFriendAvatar( params->steamIDFriend, params->eAvatarSize );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends006_GetFriendGamePlayed( void *args )
{
    struct ISteamFriends_SteamFriends006_GetFriendGamePlayed_params *params = (struct ISteamFriends_SteamFriends006_GetFriendGamePlayed_params *)args;
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    params->_ret = iface->GetFriendGamePlayed( params->steamIDFriend, params->pFriendGameInfo );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends006_GetFriendPersonaNameHistory( void *args )
{
    struct ISteamFriends_SteamFriends006_GetFriendPersonaNameHistory_params *params = (struct ISteamFriends_SteamFriends006_GetFriendPersonaNameHistory_params *)args;
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaNameHistory( params->steamIDFriend, params->iPersonaName );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends006_HasFriend( void *args )
{
    struct ISteamFriends_SteamFriends006_HasFriend_params *params = (struct ISteamFriends_SteamFriends006_HasFriend_params *)args;
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    params->_ret = iface->HasFriend( params->steamIDFriend, params->iFriendFlags );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends006_GetClanCount( void *args )
{
    struct ISteamFriends_SteamFriends006_GetClanCount_params *params = (struct ISteamFriends_SteamFriends006_GetClanCount_params *)args;
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    params->_ret = iface->GetClanCount(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends006_GetClanByIndex( void *args )
{
    struct ISteamFriends_SteamFriends006_GetClanByIndex_params *params = (struct ISteamFriends_SteamFriends006_GetClanByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    *params->_ret = iface->GetClanByIndex( params->iClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends006_GetClanName( void *args )
{
    struct ISteamFriends_SteamFriends006_GetClanName_params *params = (struct ISteamFriends_SteamFriends006_GetClanName_params *)args;
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    params->_ret = iface->GetClanName( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends006_GetClanTag( void *args )
{
    struct ISteamFriends_SteamFriends006_GetClanTag_params *params = (struct ISteamFriends_SteamFriends006_GetClanTag_params *)args;
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    params->_ret = iface->GetClanTag( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends006_GetFriendCountFromSource( void *args )
{
    struct ISteamFriends_SteamFriends006_GetFriendCountFromSource_params *params = (struct ISteamFriends_SteamFriends006_GetFriendCountFromSource_params *)args;
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    params->_ret = iface->GetFriendCountFromSource( params->steamIDSource );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends006_GetFriendFromSourceByIndex( void *args )
{
    struct ISteamFriends_SteamFriends006_GetFriendFromSourceByIndex_params *params = (struct ISteamFriends_SteamFriends006_GetFriendFromSourceByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    *params->_ret = iface->GetFriendFromSourceByIndex( params->steamIDSource, params->iFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends006_IsUserInSource( void *args )
{
    struct ISteamFriends_SteamFriends006_IsUserInSource_params *params = (struct ISteamFriends_SteamFriends006_IsUserInSource_params *)args;
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    params->_ret = iface->IsUserInSource( params->steamIDUser, params->steamIDSource );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends006_SetInGameVoiceSpeaking( void *args )
{
    struct ISteamFriends_SteamFriends006_SetInGameVoiceSpeaking_params *params = (struct ISteamFriends_SteamFriends006_SetInGameVoiceSpeaking_params *)args;
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    iface->SetInGameVoiceSpeaking( params->steamIDUser, params->bSpeaking );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends006_ActivateGameOverlay( void *args )
{
    struct ISteamFriends_SteamFriends006_ActivateGameOverlay_params *params = (struct ISteamFriends_SteamFriends006_ActivateGameOverlay_params *)args;
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    iface->ActivateGameOverlay( params->pchDialog );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends006_ActivateGameOverlayToUser( void *args )
{
    struct ISteamFriends_SteamFriends006_ActivateGameOverlayToUser_params *params = (struct ISteamFriends_SteamFriends006_ActivateGameOverlayToUser_params *)args;
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    iface->ActivateGameOverlayToUser( params->pchDialog, params->steamID );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends006_ActivateGameOverlayToWebPage( void *args )
{
    struct ISteamFriends_SteamFriends006_ActivateGameOverlayToWebPage_params *params = (struct ISteamFriends_SteamFriends006_ActivateGameOverlayToWebPage_params *)args;
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    char *u_pchURL = steamclient_dos_to_unix_path( params->pchURL, 1 );
    iface->ActivateGameOverlayToWebPage( u_pchURL );
    steamclient_free_path( u_pchURL );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends006_ActivateGameOverlayToStore( void *args )
{
    struct ISteamFriends_SteamFriends006_ActivateGameOverlayToStore_params *params = (struct ISteamFriends_SteamFriends006_ActivateGameOverlayToStore_params *)args;
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    iface->ActivateGameOverlayToStore( params->nAppID );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends006_SetPlayedWith( void *args )
{
    struct ISteamFriends_SteamFriends006_SetPlayedWith_params *params = (struct ISteamFriends_SteamFriends006_SetPlayedWith_params *)args;
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    iface->SetPlayedWith( params->steamIDUserPlayedWith );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends006_ActivateGameOverlayInviteDialog( void *args )
{
    struct ISteamFriends_SteamFriends006_ActivateGameOverlayInviteDialog_params *params = (struct ISteamFriends_SteamFriends006_ActivateGameOverlayInviteDialog_params *)args;
    struct u_ISteamFriends_SteamFriends006 *iface = (struct u_ISteamFriends_SteamFriends006 *)params->linux_side;
    iface->ActivateGameOverlayInviteDialog( params->steamIDLobby );
    return 0;
}

