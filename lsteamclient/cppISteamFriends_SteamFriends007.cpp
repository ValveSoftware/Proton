/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS ISteamFriends_SteamFriends007_GetPersonaName( void *args )
{
    struct ISteamFriends_SteamFriends007_GetPersonaName_params *params = (struct ISteamFriends_SteamFriends007_GetPersonaName_params *)args;
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    params->_ret = iface->GetPersonaName(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends007_SetPersonaName( void *args )
{
    struct ISteamFriends_SteamFriends007_SetPersonaName_params *params = (struct ISteamFriends_SteamFriends007_SetPersonaName_params *)args;
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    iface->SetPersonaName( params->pchPersonaName );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends007_GetPersonaState( void *args )
{
    struct ISteamFriends_SteamFriends007_GetPersonaState_params *params = (struct ISteamFriends_SteamFriends007_GetPersonaState_params *)args;
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    params->_ret = iface->GetPersonaState(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends007_GetFriendCount( void *args )
{
    struct ISteamFriends_SteamFriends007_GetFriendCount_params *params = (struct ISteamFriends_SteamFriends007_GetFriendCount_params *)args;
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    params->_ret = iface->GetFriendCount( params->iFriendFlags );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends007_GetFriendByIndex( void *args )
{
    struct ISteamFriends_SteamFriends007_GetFriendByIndex_params *params = (struct ISteamFriends_SteamFriends007_GetFriendByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    *params->_ret = iface->GetFriendByIndex( params->iFriend, params->iFriendFlags );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends007_GetFriendRelationship( void *args )
{
    struct ISteamFriends_SteamFriends007_GetFriendRelationship_params *params = (struct ISteamFriends_SteamFriends007_GetFriendRelationship_params *)args;
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    params->_ret = iface->GetFriendRelationship( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends007_GetFriendPersonaState( void *args )
{
    struct ISteamFriends_SteamFriends007_GetFriendPersonaState_params *params = (struct ISteamFriends_SteamFriends007_GetFriendPersonaState_params *)args;
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaState( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends007_GetFriendPersonaName( void *args )
{
    struct ISteamFriends_SteamFriends007_GetFriendPersonaName_params *params = (struct ISteamFriends_SteamFriends007_GetFriendPersonaName_params *)args;
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaName( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends007_GetFriendGamePlayed( void *args )
{
    struct ISteamFriends_SteamFriends007_GetFriendGamePlayed_params *params = (struct ISteamFriends_SteamFriends007_GetFriendGamePlayed_params *)args;
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    params->_ret = iface->GetFriendGamePlayed( params->steamIDFriend, params->pFriendGameInfo );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends007_GetFriendPersonaNameHistory( void *args )
{
    struct ISteamFriends_SteamFriends007_GetFriendPersonaNameHistory_params *params = (struct ISteamFriends_SteamFriends007_GetFriendPersonaNameHistory_params *)args;
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaNameHistory( params->steamIDFriend, params->iPersonaName );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends007_HasFriend( void *args )
{
    struct ISteamFriends_SteamFriends007_HasFriend_params *params = (struct ISteamFriends_SteamFriends007_HasFriend_params *)args;
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    params->_ret = iface->HasFriend( params->steamIDFriend, params->iFriendFlags );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends007_GetClanCount( void *args )
{
    struct ISteamFriends_SteamFriends007_GetClanCount_params *params = (struct ISteamFriends_SteamFriends007_GetClanCount_params *)args;
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    params->_ret = iface->GetClanCount(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends007_GetClanByIndex( void *args )
{
    struct ISteamFriends_SteamFriends007_GetClanByIndex_params *params = (struct ISteamFriends_SteamFriends007_GetClanByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    *params->_ret = iface->GetClanByIndex( params->iClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends007_GetClanName( void *args )
{
    struct ISteamFriends_SteamFriends007_GetClanName_params *params = (struct ISteamFriends_SteamFriends007_GetClanName_params *)args;
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    params->_ret = iface->GetClanName( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends007_GetClanTag( void *args )
{
    struct ISteamFriends_SteamFriends007_GetClanTag_params *params = (struct ISteamFriends_SteamFriends007_GetClanTag_params *)args;
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    params->_ret = iface->GetClanTag( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends007_GetFriendCountFromSource( void *args )
{
    struct ISteamFriends_SteamFriends007_GetFriendCountFromSource_params *params = (struct ISteamFriends_SteamFriends007_GetFriendCountFromSource_params *)args;
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    params->_ret = iface->GetFriendCountFromSource( params->steamIDSource );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends007_GetFriendFromSourceByIndex( void *args )
{
    struct ISteamFriends_SteamFriends007_GetFriendFromSourceByIndex_params *params = (struct ISteamFriends_SteamFriends007_GetFriendFromSourceByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    *params->_ret = iface->GetFriendFromSourceByIndex( params->steamIDSource, params->iFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends007_IsUserInSource( void *args )
{
    struct ISteamFriends_SteamFriends007_IsUserInSource_params *params = (struct ISteamFriends_SteamFriends007_IsUserInSource_params *)args;
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    params->_ret = iface->IsUserInSource( params->steamIDUser, params->steamIDSource );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends007_SetInGameVoiceSpeaking( void *args )
{
    struct ISteamFriends_SteamFriends007_SetInGameVoiceSpeaking_params *params = (struct ISteamFriends_SteamFriends007_SetInGameVoiceSpeaking_params *)args;
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    iface->SetInGameVoiceSpeaking( params->steamIDUser, params->bSpeaking );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends007_ActivateGameOverlay( void *args )
{
    struct ISteamFriends_SteamFriends007_ActivateGameOverlay_params *params = (struct ISteamFriends_SteamFriends007_ActivateGameOverlay_params *)args;
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    iface->ActivateGameOverlay( params->pchDialog );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends007_ActivateGameOverlayToUser( void *args )
{
    struct ISteamFriends_SteamFriends007_ActivateGameOverlayToUser_params *params = (struct ISteamFriends_SteamFriends007_ActivateGameOverlayToUser_params *)args;
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    iface->ActivateGameOverlayToUser( params->pchDialog, params->steamID );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends007_ActivateGameOverlayToWebPage( void *args )
{
    struct ISteamFriends_SteamFriends007_ActivateGameOverlayToWebPage_params *params = (struct ISteamFriends_SteamFriends007_ActivateGameOverlayToWebPage_params *)args;
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    char *u_pchURL = steamclient_dos_to_unix_path( params->pchURL, 1 );
    iface->ActivateGameOverlayToWebPage( u_pchURL );
    steamclient_free_path( u_pchURL );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends007_ActivateGameOverlayToStore( void *args )
{
    struct ISteamFriends_SteamFriends007_ActivateGameOverlayToStore_params *params = (struct ISteamFriends_SteamFriends007_ActivateGameOverlayToStore_params *)args;
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    iface->ActivateGameOverlayToStore( params->nAppID );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends007_SetPlayedWith( void *args )
{
    struct ISteamFriends_SteamFriends007_SetPlayedWith_params *params = (struct ISteamFriends_SteamFriends007_SetPlayedWith_params *)args;
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    iface->SetPlayedWith( params->steamIDUserPlayedWith );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends007_ActivateGameOverlayInviteDialog( void *args )
{
    struct ISteamFriends_SteamFriends007_ActivateGameOverlayInviteDialog_params *params = (struct ISteamFriends_SteamFriends007_ActivateGameOverlayInviteDialog_params *)args;
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    iface->ActivateGameOverlayInviteDialog( params->steamIDLobby );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends007_GetSmallFriendAvatar( void *args )
{
    struct ISteamFriends_SteamFriends007_GetSmallFriendAvatar_params *params = (struct ISteamFriends_SteamFriends007_GetSmallFriendAvatar_params *)args;
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    params->_ret = iface->GetSmallFriendAvatar( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends007_GetMediumFriendAvatar( void *args )
{
    struct ISteamFriends_SteamFriends007_GetMediumFriendAvatar_params *params = (struct ISteamFriends_SteamFriends007_GetMediumFriendAvatar_params *)args;
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    params->_ret = iface->GetMediumFriendAvatar( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends007_GetLargeFriendAvatar( void *args )
{
    struct ISteamFriends_SteamFriends007_GetLargeFriendAvatar_params *params = (struct ISteamFriends_SteamFriends007_GetLargeFriendAvatar_params *)args;
    struct u_ISteamFriends_SteamFriends007 *iface = (struct u_ISteamFriends_SteamFriends007 *)params->linux_side;
    params->_ret = iface->GetLargeFriendAvatar( params->steamIDFriend );
    return 0;
}

