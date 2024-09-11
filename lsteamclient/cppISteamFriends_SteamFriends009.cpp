/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS ISteamFriends_SteamFriends009_GetPersonaName( void *args )
{
    struct ISteamFriends_SteamFriends009_GetPersonaName_params *params = (struct ISteamFriends_SteamFriends009_GetPersonaName_params *)args;
    struct u_ISteamFriends_SteamFriends009 *iface = (struct u_ISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->GetPersonaName(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends009_SetPersonaName( void *args )
{
    struct ISteamFriends_SteamFriends009_SetPersonaName_params *params = (struct ISteamFriends_SteamFriends009_SetPersonaName_params *)args;
    struct u_ISteamFriends_SteamFriends009 *iface = (struct u_ISteamFriends_SteamFriends009 *)params->linux_side;
    iface->SetPersonaName( params->pchPersonaName );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends009_GetPersonaState( void *args )
{
    struct ISteamFriends_SteamFriends009_GetPersonaState_params *params = (struct ISteamFriends_SteamFriends009_GetPersonaState_params *)args;
    struct u_ISteamFriends_SteamFriends009 *iface = (struct u_ISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->GetPersonaState(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends009_GetFriendCount( void *args )
{
    struct ISteamFriends_SteamFriends009_GetFriendCount_params *params = (struct ISteamFriends_SteamFriends009_GetFriendCount_params *)args;
    struct u_ISteamFriends_SteamFriends009 *iface = (struct u_ISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->GetFriendCount( params->iFriendFlags );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends009_GetFriendByIndex( void *args )
{
    struct ISteamFriends_SteamFriends009_GetFriendByIndex_params *params = (struct ISteamFriends_SteamFriends009_GetFriendByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends009 *iface = (struct u_ISteamFriends_SteamFriends009 *)params->linux_side;
    *params->_ret = iface->GetFriendByIndex( params->iFriend, params->iFriendFlags );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends009_GetFriendRelationship( void *args )
{
    struct ISteamFriends_SteamFriends009_GetFriendRelationship_params *params = (struct ISteamFriends_SteamFriends009_GetFriendRelationship_params *)args;
    struct u_ISteamFriends_SteamFriends009 *iface = (struct u_ISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->GetFriendRelationship( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends009_GetFriendPersonaState( void *args )
{
    struct ISteamFriends_SteamFriends009_GetFriendPersonaState_params *params = (struct ISteamFriends_SteamFriends009_GetFriendPersonaState_params *)args;
    struct u_ISteamFriends_SteamFriends009 *iface = (struct u_ISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaState( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends009_GetFriendPersonaName( void *args )
{
    struct ISteamFriends_SteamFriends009_GetFriendPersonaName_params *params = (struct ISteamFriends_SteamFriends009_GetFriendPersonaName_params *)args;
    struct u_ISteamFriends_SteamFriends009 *iface = (struct u_ISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaName( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends009_GetFriendGamePlayed( void *args )
{
    struct ISteamFriends_SteamFriends009_GetFriendGamePlayed_params *params = (struct ISteamFriends_SteamFriends009_GetFriendGamePlayed_params *)args;
    struct u_ISteamFriends_SteamFriends009 *iface = (struct u_ISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->GetFriendGamePlayed( params->steamIDFriend, params->pFriendGameInfo );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends009_GetFriendPersonaNameHistory( void *args )
{
    struct ISteamFriends_SteamFriends009_GetFriendPersonaNameHistory_params *params = (struct ISteamFriends_SteamFriends009_GetFriendPersonaNameHistory_params *)args;
    struct u_ISteamFriends_SteamFriends009 *iface = (struct u_ISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaNameHistory( params->steamIDFriend, params->iPersonaName );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends009_HasFriend( void *args )
{
    struct ISteamFriends_SteamFriends009_HasFriend_params *params = (struct ISteamFriends_SteamFriends009_HasFriend_params *)args;
    struct u_ISteamFriends_SteamFriends009 *iface = (struct u_ISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->HasFriend( params->steamIDFriend, params->iFriendFlags );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends009_GetClanCount( void *args )
{
    struct ISteamFriends_SteamFriends009_GetClanCount_params *params = (struct ISteamFriends_SteamFriends009_GetClanCount_params *)args;
    struct u_ISteamFriends_SteamFriends009 *iface = (struct u_ISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->GetClanCount(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends009_GetClanByIndex( void *args )
{
    struct ISteamFriends_SteamFriends009_GetClanByIndex_params *params = (struct ISteamFriends_SteamFriends009_GetClanByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends009 *iface = (struct u_ISteamFriends_SteamFriends009 *)params->linux_side;
    *params->_ret = iface->GetClanByIndex( params->iClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends009_GetClanName( void *args )
{
    struct ISteamFriends_SteamFriends009_GetClanName_params *params = (struct ISteamFriends_SteamFriends009_GetClanName_params *)args;
    struct u_ISteamFriends_SteamFriends009 *iface = (struct u_ISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->GetClanName( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends009_GetClanTag( void *args )
{
    struct ISteamFriends_SteamFriends009_GetClanTag_params *params = (struct ISteamFriends_SteamFriends009_GetClanTag_params *)args;
    struct u_ISteamFriends_SteamFriends009 *iface = (struct u_ISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->GetClanTag( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends009_GetFriendCountFromSource( void *args )
{
    struct ISteamFriends_SteamFriends009_GetFriendCountFromSource_params *params = (struct ISteamFriends_SteamFriends009_GetFriendCountFromSource_params *)args;
    struct u_ISteamFriends_SteamFriends009 *iface = (struct u_ISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->GetFriendCountFromSource( params->steamIDSource );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends009_GetFriendFromSourceByIndex( void *args )
{
    struct ISteamFriends_SteamFriends009_GetFriendFromSourceByIndex_params *params = (struct ISteamFriends_SteamFriends009_GetFriendFromSourceByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends009 *iface = (struct u_ISteamFriends_SteamFriends009 *)params->linux_side;
    *params->_ret = iface->GetFriendFromSourceByIndex( params->steamIDSource, params->iFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends009_IsUserInSource( void *args )
{
    struct ISteamFriends_SteamFriends009_IsUserInSource_params *params = (struct ISteamFriends_SteamFriends009_IsUserInSource_params *)args;
    struct u_ISteamFriends_SteamFriends009 *iface = (struct u_ISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->IsUserInSource( params->steamIDUser, params->steamIDSource );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends009_SetInGameVoiceSpeaking( void *args )
{
    struct ISteamFriends_SteamFriends009_SetInGameVoiceSpeaking_params *params = (struct ISteamFriends_SteamFriends009_SetInGameVoiceSpeaking_params *)args;
    struct u_ISteamFriends_SteamFriends009 *iface = (struct u_ISteamFriends_SteamFriends009 *)params->linux_side;
    iface->SetInGameVoiceSpeaking( params->steamIDUser, params->bSpeaking );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends009_ActivateGameOverlay( void *args )
{
    struct ISteamFriends_SteamFriends009_ActivateGameOverlay_params *params = (struct ISteamFriends_SteamFriends009_ActivateGameOverlay_params *)args;
    struct u_ISteamFriends_SteamFriends009 *iface = (struct u_ISteamFriends_SteamFriends009 *)params->linux_side;
    iface->ActivateGameOverlay( params->pchDialog );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends009_ActivateGameOverlayToUser( void *args )
{
    struct ISteamFriends_SteamFriends009_ActivateGameOverlayToUser_params *params = (struct ISteamFriends_SteamFriends009_ActivateGameOverlayToUser_params *)args;
    struct u_ISteamFriends_SteamFriends009 *iface = (struct u_ISteamFriends_SteamFriends009 *)params->linux_side;
    iface->ActivateGameOverlayToUser( params->pchDialog, params->steamID );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends009_ActivateGameOverlayToWebPage( void *args )
{
    struct ISteamFriends_SteamFriends009_ActivateGameOverlayToWebPage_params *params = (struct ISteamFriends_SteamFriends009_ActivateGameOverlayToWebPage_params *)args;
    struct u_ISteamFriends_SteamFriends009 *iface = (struct u_ISteamFriends_SteamFriends009 *)params->linux_side;
    char *u_pchURL = steamclient_dos_to_unix_path( params->pchURL, 1 );
    iface->ActivateGameOverlayToWebPage( u_pchURL );
    steamclient_free_path( u_pchURL );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends009_ActivateGameOverlayToStore( void *args )
{
    struct ISteamFriends_SteamFriends009_ActivateGameOverlayToStore_params *params = (struct ISteamFriends_SteamFriends009_ActivateGameOverlayToStore_params *)args;
    struct u_ISteamFriends_SteamFriends009 *iface = (struct u_ISteamFriends_SteamFriends009 *)params->linux_side;
    iface->ActivateGameOverlayToStore( params->nAppID );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends009_SetPlayedWith( void *args )
{
    struct ISteamFriends_SteamFriends009_SetPlayedWith_params *params = (struct ISteamFriends_SteamFriends009_SetPlayedWith_params *)args;
    struct u_ISteamFriends_SteamFriends009 *iface = (struct u_ISteamFriends_SteamFriends009 *)params->linux_side;
    iface->SetPlayedWith( params->steamIDUserPlayedWith );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends009_ActivateGameOverlayInviteDialog( void *args )
{
    struct ISteamFriends_SteamFriends009_ActivateGameOverlayInviteDialog_params *params = (struct ISteamFriends_SteamFriends009_ActivateGameOverlayInviteDialog_params *)args;
    struct u_ISteamFriends_SteamFriends009 *iface = (struct u_ISteamFriends_SteamFriends009 *)params->linux_side;
    iface->ActivateGameOverlayInviteDialog( params->steamIDLobby );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends009_GetSmallFriendAvatar( void *args )
{
    struct ISteamFriends_SteamFriends009_GetSmallFriendAvatar_params *params = (struct ISteamFriends_SteamFriends009_GetSmallFriendAvatar_params *)args;
    struct u_ISteamFriends_SteamFriends009 *iface = (struct u_ISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->GetSmallFriendAvatar( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends009_GetMediumFriendAvatar( void *args )
{
    struct ISteamFriends_SteamFriends009_GetMediumFriendAvatar_params *params = (struct ISteamFriends_SteamFriends009_GetMediumFriendAvatar_params *)args;
    struct u_ISteamFriends_SteamFriends009 *iface = (struct u_ISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->GetMediumFriendAvatar( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends009_GetLargeFriendAvatar( void *args )
{
    struct ISteamFriends_SteamFriends009_GetLargeFriendAvatar_params *params = (struct ISteamFriends_SteamFriends009_GetLargeFriendAvatar_params *)args;
    struct u_ISteamFriends_SteamFriends009 *iface = (struct u_ISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->GetLargeFriendAvatar( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends009_RequestUserInformation( void *args )
{
    struct ISteamFriends_SteamFriends009_RequestUserInformation_params *params = (struct ISteamFriends_SteamFriends009_RequestUserInformation_params *)args;
    struct u_ISteamFriends_SteamFriends009 *iface = (struct u_ISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->RequestUserInformation( params->steamIDUser, params->bRequireNameOnly );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends009_RequestClanOfficerList( void *args )
{
    struct ISteamFriends_SteamFriends009_RequestClanOfficerList_params *params = (struct ISteamFriends_SteamFriends009_RequestClanOfficerList_params *)args;
    struct u_ISteamFriends_SteamFriends009 *iface = (struct u_ISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->RequestClanOfficerList( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends009_GetClanOwner( void *args )
{
    struct ISteamFriends_SteamFriends009_GetClanOwner_params *params = (struct ISteamFriends_SteamFriends009_GetClanOwner_params *)args;
    struct u_ISteamFriends_SteamFriends009 *iface = (struct u_ISteamFriends_SteamFriends009 *)params->linux_side;
    *params->_ret = iface->GetClanOwner( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends009_GetClanOfficerCount( void *args )
{
    struct ISteamFriends_SteamFriends009_GetClanOfficerCount_params *params = (struct ISteamFriends_SteamFriends009_GetClanOfficerCount_params *)args;
    struct u_ISteamFriends_SteamFriends009 *iface = (struct u_ISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->GetClanOfficerCount( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends009_GetClanOfficerByIndex( void *args )
{
    struct ISteamFriends_SteamFriends009_GetClanOfficerByIndex_params *params = (struct ISteamFriends_SteamFriends009_GetClanOfficerByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends009 *iface = (struct u_ISteamFriends_SteamFriends009 *)params->linux_side;
    *params->_ret = iface->GetClanOfficerByIndex( params->steamIDClan, params->iOfficer );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends009_GetUserRestrictions( void *args )
{
    struct ISteamFriends_SteamFriends009_GetUserRestrictions_params *params = (struct ISteamFriends_SteamFriends009_GetUserRestrictions_params *)args;
    struct u_ISteamFriends_SteamFriends009 *iface = (struct u_ISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->GetUserRestrictions(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends009_SetRichPresence( void *args )
{
    struct ISteamFriends_SteamFriends009_SetRichPresence_params *params = (struct ISteamFriends_SteamFriends009_SetRichPresence_params *)args;
    struct u_ISteamFriends_SteamFriends009 *iface = (struct u_ISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->SetRichPresence( params->pchKey, params->pchValue );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends009_ClearRichPresence( void *args )
{
    struct ISteamFriends_SteamFriends009_ClearRichPresence_params *params = (struct ISteamFriends_SteamFriends009_ClearRichPresence_params *)args;
    struct u_ISteamFriends_SteamFriends009 *iface = (struct u_ISteamFriends_SteamFriends009 *)params->linux_side;
    iface->ClearRichPresence(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends009_GetFriendRichPresence( void *args )
{
    struct ISteamFriends_SteamFriends009_GetFriendRichPresence_params *params = (struct ISteamFriends_SteamFriends009_GetFriendRichPresence_params *)args;
    struct u_ISteamFriends_SteamFriends009 *iface = (struct u_ISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->GetFriendRichPresence( params->steamIDFriend, params->pchKey );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends009_GetFriendRichPresenceKeyCount( void *args )
{
    struct ISteamFriends_SteamFriends009_GetFriendRichPresenceKeyCount_params *params = (struct ISteamFriends_SteamFriends009_GetFriendRichPresenceKeyCount_params *)args;
    struct u_ISteamFriends_SteamFriends009 *iface = (struct u_ISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->GetFriendRichPresenceKeyCount( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends009_GetFriendRichPresenceKeyByIndex( void *args )
{
    struct ISteamFriends_SteamFriends009_GetFriendRichPresenceKeyByIndex_params *params = (struct ISteamFriends_SteamFriends009_GetFriendRichPresenceKeyByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends009 *iface = (struct u_ISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->GetFriendRichPresenceKeyByIndex( params->steamIDFriend, params->iKey );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends009_InviteUserToGame( void *args )
{
    struct ISteamFriends_SteamFriends009_InviteUserToGame_params *params = (struct ISteamFriends_SteamFriends009_InviteUserToGame_params *)args;
    struct u_ISteamFriends_SteamFriends009 *iface = (struct u_ISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->InviteUserToGame( params->steamIDFriend, params->pchConnectString );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends009_GetCoplayFriendCount( void *args )
{
    struct ISteamFriends_SteamFriends009_GetCoplayFriendCount_params *params = (struct ISteamFriends_SteamFriends009_GetCoplayFriendCount_params *)args;
    struct u_ISteamFriends_SteamFriends009 *iface = (struct u_ISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->GetCoplayFriendCount(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends009_GetCoplayFriend( void *args )
{
    struct ISteamFriends_SteamFriends009_GetCoplayFriend_params *params = (struct ISteamFriends_SteamFriends009_GetCoplayFriend_params *)args;
    struct u_ISteamFriends_SteamFriends009 *iface = (struct u_ISteamFriends_SteamFriends009 *)params->linux_side;
    *params->_ret = iface->GetCoplayFriend( params->iCoplayFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends009_GetFriendCoplayTime( void *args )
{
    struct ISteamFriends_SteamFriends009_GetFriendCoplayTime_params *params = (struct ISteamFriends_SteamFriends009_GetFriendCoplayTime_params *)args;
    struct u_ISteamFriends_SteamFriends009 *iface = (struct u_ISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->GetFriendCoplayTime( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends009_GetFriendCoplayGame( void *args )
{
    struct ISteamFriends_SteamFriends009_GetFriendCoplayGame_params *params = (struct ISteamFriends_SteamFriends009_GetFriendCoplayGame_params *)args;
    struct u_ISteamFriends_SteamFriends009 *iface = (struct u_ISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->GetFriendCoplayGame( params->steamIDFriend );
    return 0;
}

