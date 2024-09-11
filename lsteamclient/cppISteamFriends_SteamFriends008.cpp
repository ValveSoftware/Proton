/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS ISteamFriends_SteamFriends008_GetPersonaName( void *args )
{
    struct ISteamFriends_SteamFriends008_GetPersonaName_params *params = (struct ISteamFriends_SteamFriends008_GetPersonaName_params *)args;
    struct u_ISteamFriends_SteamFriends008 *iface = (struct u_ISteamFriends_SteamFriends008 *)params->linux_side;
    params->_ret = iface->GetPersonaName(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends008_SetPersonaName( void *args )
{
    struct ISteamFriends_SteamFriends008_SetPersonaName_params *params = (struct ISteamFriends_SteamFriends008_SetPersonaName_params *)args;
    struct u_ISteamFriends_SteamFriends008 *iface = (struct u_ISteamFriends_SteamFriends008 *)params->linux_side;
    iface->SetPersonaName( params->pchPersonaName );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends008_GetPersonaState( void *args )
{
    struct ISteamFriends_SteamFriends008_GetPersonaState_params *params = (struct ISteamFriends_SteamFriends008_GetPersonaState_params *)args;
    struct u_ISteamFriends_SteamFriends008 *iface = (struct u_ISteamFriends_SteamFriends008 *)params->linux_side;
    params->_ret = iface->GetPersonaState(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends008_GetFriendCount( void *args )
{
    struct ISteamFriends_SteamFriends008_GetFriendCount_params *params = (struct ISteamFriends_SteamFriends008_GetFriendCount_params *)args;
    struct u_ISteamFriends_SteamFriends008 *iface = (struct u_ISteamFriends_SteamFriends008 *)params->linux_side;
    params->_ret = iface->GetFriendCount( params->iFriendFlags );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends008_GetFriendByIndex( void *args )
{
    struct ISteamFriends_SteamFriends008_GetFriendByIndex_params *params = (struct ISteamFriends_SteamFriends008_GetFriendByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends008 *iface = (struct u_ISteamFriends_SteamFriends008 *)params->linux_side;
    *params->_ret = iface->GetFriendByIndex( params->iFriend, params->iFriendFlags );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends008_GetFriendRelationship( void *args )
{
    struct ISteamFriends_SteamFriends008_GetFriendRelationship_params *params = (struct ISteamFriends_SteamFriends008_GetFriendRelationship_params *)args;
    struct u_ISteamFriends_SteamFriends008 *iface = (struct u_ISteamFriends_SteamFriends008 *)params->linux_side;
    params->_ret = iface->GetFriendRelationship( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends008_GetFriendPersonaState( void *args )
{
    struct ISteamFriends_SteamFriends008_GetFriendPersonaState_params *params = (struct ISteamFriends_SteamFriends008_GetFriendPersonaState_params *)args;
    struct u_ISteamFriends_SteamFriends008 *iface = (struct u_ISteamFriends_SteamFriends008 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaState( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends008_GetFriendPersonaName( void *args )
{
    struct ISteamFriends_SteamFriends008_GetFriendPersonaName_params *params = (struct ISteamFriends_SteamFriends008_GetFriendPersonaName_params *)args;
    struct u_ISteamFriends_SteamFriends008 *iface = (struct u_ISteamFriends_SteamFriends008 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaName( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends008_GetFriendGamePlayed( void *args )
{
    struct ISteamFriends_SteamFriends008_GetFriendGamePlayed_params *params = (struct ISteamFriends_SteamFriends008_GetFriendGamePlayed_params *)args;
    struct u_ISteamFriends_SteamFriends008 *iface = (struct u_ISteamFriends_SteamFriends008 *)params->linux_side;
    params->_ret = iface->GetFriendGamePlayed( params->steamIDFriend, params->pFriendGameInfo );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends008_GetFriendPersonaNameHistory( void *args )
{
    struct ISteamFriends_SteamFriends008_GetFriendPersonaNameHistory_params *params = (struct ISteamFriends_SteamFriends008_GetFriendPersonaNameHistory_params *)args;
    struct u_ISteamFriends_SteamFriends008 *iface = (struct u_ISteamFriends_SteamFriends008 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaNameHistory( params->steamIDFriend, params->iPersonaName );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends008_HasFriend( void *args )
{
    struct ISteamFriends_SteamFriends008_HasFriend_params *params = (struct ISteamFriends_SteamFriends008_HasFriend_params *)args;
    struct u_ISteamFriends_SteamFriends008 *iface = (struct u_ISteamFriends_SteamFriends008 *)params->linux_side;
    params->_ret = iface->HasFriend( params->steamIDFriend, params->iFriendFlags );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends008_GetClanCount( void *args )
{
    struct ISteamFriends_SteamFriends008_GetClanCount_params *params = (struct ISteamFriends_SteamFriends008_GetClanCount_params *)args;
    struct u_ISteamFriends_SteamFriends008 *iface = (struct u_ISteamFriends_SteamFriends008 *)params->linux_side;
    params->_ret = iface->GetClanCount(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends008_GetClanByIndex( void *args )
{
    struct ISteamFriends_SteamFriends008_GetClanByIndex_params *params = (struct ISteamFriends_SteamFriends008_GetClanByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends008 *iface = (struct u_ISteamFriends_SteamFriends008 *)params->linux_side;
    *params->_ret = iface->GetClanByIndex( params->iClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends008_GetClanName( void *args )
{
    struct ISteamFriends_SteamFriends008_GetClanName_params *params = (struct ISteamFriends_SteamFriends008_GetClanName_params *)args;
    struct u_ISteamFriends_SteamFriends008 *iface = (struct u_ISteamFriends_SteamFriends008 *)params->linux_side;
    params->_ret = iface->GetClanName( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends008_GetClanTag( void *args )
{
    struct ISteamFriends_SteamFriends008_GetClanTag_params *params = (struct ISteamFriends_SteamFriends008_GetClanTag_params *)args;
    struct u_ISteamFriends_SteamFriends008 *iface = (struct u_ISteamFriends_SteamFriends008 *)params->linux_side;
    params->_ret = iface->GetClanTag( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends008_GetFriendCountFromSource( void *args )
{
    struct ISteamFriends_SteamFriends008_GetFriendCountFromSource_params *params = (struct ISteamFriends_SteamFriends008_GetFriendCountFromSource_params *)args;
    struct u_ISteamFriends_SteamFriends008 *iface = (struct u_ISteamFriends_SteamFriends008 *)params->linux_side;
    params->_ret = iface->GetFriendCountFromSource( params->steamIDSource );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends008_GetFriendFromSourceByIndex( void *args )
{
    struct ISteamFriends_SteamFriends008_GetFriendFromSourceByIndex_params *params = (struct ISteamFriends_SteamFriends008_GetFriendFromSourceByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends008 *iface = (struct u_ISteamFriends_SteamFriends008 *)params->linux_side;
    *params->_ret = iface->GetFriendFromSourceByIndex( params->steamIDSource, params->iFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends008_IsUserInSource( void *args )
{
    struct ISteamFriends_SteamFriends008_IsUserInSource_params *params = (struct ISteamFriends_SteamFriends008_IsUserInSource_params *)args;
    struct u_ISteamFriends_SteamFriends008 *iface = (struct u_ISteamFriends_SteamFriends008 *)params->linux_side;
    params->_ret = iface->IsUserInSource( params->steamIDUser, params->steamIDSource );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends008_SetInGameVoiceSpeaking( void *args )
{
    struct ISteamFriends_SteamFriends008_SetInGameVoiceSpeaking_params *params = (struct ISteamFriends_SteamFriends008_SetInGameVoiceSpeaking_params *)args;
    struct u_ISteamFriends_SteamFriends008 *iface = (struct u_ISteamFriends_SteamFriends008 *)params->linux_side;
    iface->SetInGameVoiceSpeaking( params->steamIDUser, params->bSpeaking );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends008_ActivateGameOverlay( void *args )
{
    struct ISteamFriends_SteamFriends008_ActivateGameOverlay_params *params = (struct ISteamFriends_SteamFriends008_ActivateGameOverlay_params *)args;
    struct u_ISteamFriends_SteamFriends008 *iface = (struct u_ISteamFriends_SteamFriends008 *)params->linux_side;
    iface->ActivateGameOverlay( params->pchDialog );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends008_ActivateGameOverlayToUser( void *args )
{
    struct ISteamFriends_SteamFriends008_ActivateGameOverlayToUser_params *params = (struct ISteamFriends_SteamFriends008_ActivateGameOverlayToUser_params *)args;
    struct u_ISteamFriends_SteamFriends008 *iface = (struct u_ISteamFriends_SteamFriends008 *)params->linux_side;
    iface->ActivateGameOverlayToUser( params->pchDialog, params->steamID );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends008_ActivateGameOverlayToWebPage( void *args )
{
    struct ISteamFriends_SteamFriends008_ActivateGameOverlayToWebPage_params *params = (struct ISteamFriends_SteamFriends008_ActivateGameOverlayToWebPage_params *)args;
    struct u_ISteamFriends_SteamFriends008 *iface = (struct u_ISteamFriends_SteamFriends008 *)params->linux_side;
    char *u_pchURL = steamclient_dos_to_unix_path( params->pchURL, 1 );
    iface->ActivateGameOverlayToWebPage( u_pchURL );
    steamclient_free_path( u_pchURL );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends008_ActivateGameOverlayToStore( void *args )
{
    struct ISteamFriends_SteamFriends008_ActivateGameOverlayToStore_params *params = (struct ISteamFriends_SteamFriends008_ActivateGameOverlayToStore_params *)args;
    struct u_ISteamFriends_SteamFriends008 *iface = (struct u_ISteamFriends_SteamFriends008 *)params->linux_side;
    iface->ActivateGameOverlayToStore( params->nAppID );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends008_SetPlayedWith( void *args )
{
    struct ISteamFriends_SteamFriends008_SetPlayedWith_params *params = (struct ISteamFriends_SteamFriends008_SetPlayedWith_params *)args;
    struct u_ISteamFriends_SteamFriends008 *iface = (struct u_ISteamFriends_SteamFriends008 *)params->linux_side;
    iface->SetPlayedWith( params->steamIDUserPlayedWith );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends008_ActivateGameOverlayInviteDialog( void *args )
{
    struct ISteamFriends_SteamFriends008_ActivateGameOverlayInviteDialog_params *params = (struct ISteamFriends_SteamFriends008_ActivateGameOverlayInviteDialog_params *)args;
    struct u_ISteamFriends_SteamFriends008 *iface = (struct u_ISteamFriends_SteamFriends008 *)params->linux_side;
    iface->ActivateGameOverlayInviteDialog( params->steamIDLobby );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends008_GetSmallFriendAvatar( void *args )
{
    struct ISteamFriends_SteamFriends008_GetSmallFriendAvatar_params *params = (struct ISteamFriends_SteamFriends008_GetSmallFriendAvatar_params *)args;
    struct u_ISteamFriends_SteamFriends008 *iface = (struct u_ISteamFriends_SteamFriends008 *)params->linux_side;
    params->_ret = iface->GetSmallFriendAvatar( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends008_GetMediumFriendAvatar( void *args )
{
    struct ISteamFriends_SteamFriends008_GetMediumFriendAvatar_params *params = (struct ISteamFriends_SteamFriends008_GetMediumFriendAvatar_params *)args;
    struct u_ISteamFriends_SteamFriends008 *iface = (struct u_ISteamFriends_SteamFriends008 *)params->linux_side;
    params->_ret = iface->GetMediumFriendAvatar( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends008_GetLargeFriendAvatar( void *args )
{
    struct ISteamFriends_SteamFriends008_GetLargeFriendAvatar_params *params = (struct ISteamFriends_SteamFriends008_GetLargeFriendAvatar_params *)args;
    struct u_ISteamFriends_SteamFriends008 *iface = (struct u_ISteamFriends_SteamFriends008 *)params->linux_side;
    params->_ret = iface->GetLargeFriendAvatar( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends008_RequestUserInformation( void *args )
{
    struct ISteamFriends_SteamFriends008_RequestUserInformation_params *params = (struct ISteamFriends_SteamFriends008_RequestUserInformation_params *)args;
    struct u_ISteamFriends_SteamFriends008 *iface = (struct u_ISteamFriends_SteamFriends008 *)params->linux_side;
    params->_ret = iface->RequestUserInformation( params->steamIDUser, params->bRequireNameOnly );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends008_RequestClanOfficerList( void *args )
{
    struct ISteamFriends_SteamFriends008_RequestClanOfficerList_params *params = (struct ISteamFriends_SteamFriends008_RequestClanOfficerList_params *)args;
    struct u_ISteamFriends_SteamFriends008 *iface = (struct u_ISteamFriends_SteamFriends008 *)params->linux_side;
    params->_ret = iface->RequestClanOfficerList( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends008_GetClanOwner( void *args )
{
    struct ISteamFriends_SteamFriends008_GetClanOwner_params *params = (struct ISteamFriends_SteamFriends008_GetClanOwner_params *)args;
    struct u_ISteamFriends_SteamFriends008 *iface = (struct u_ISteamFriends_SteamFriends008 *)params->linux_side;
    *params->_ret = iface->GetClanOwner( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends008_GetClanOfficerCount( void *args )
{
    struct ISteamFriends_SteamFriends008_GetClanOfficerCount_params *params = (struct ISteamFriends_SteamFriends008_GetClanOfficerCount_params *)args;
    struct u_ISteamFriends_SteamFriends008 *iface = (struct u_ISteamFriends_SteamFriends008 *)params->linux_side;
    params->_ret = iface->GetClanOfficerCount( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends008_GetClanOfficerByIndex( void *args )
{
    struct ISteamFriends_SteamFriends008_GetClanOfficerByIndex_params *params = (struct ISteamFriends_SteamFriends008_GetClanOfficerByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends008 *iface = (struct u_ISteamFriends_SteamFriends008 *)params->linux_side;
    *params->_ret = iface->GetClanOfficerByIndex( params->steamIDClan, params->iOfficer );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends008_GetUserRestrictions( void *args )
{
    struct ISteamFriends_SteamFriends008_GetUserRestrictions_params *params = (struct ISteamFriends_SteamFriends008_GetUserRestrictions_params *)args;
    struct u_ISteamFriends_SteamFriends008 *iface = (struct u_ISteamFriends_SteamFriends008 *)params->linux_side;
    params->_ret = iface->GetUserRestrictions(  );
    return 0;
}

