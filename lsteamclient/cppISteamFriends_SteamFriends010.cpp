/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS ISteamFriends_SteamFriends010_GetPersonaName( void *args )
{
    struct ISteamFriends_SteamFriends010_GetPersonaName_params *params = (struct ISteamFriends_SteamFriends010_GetPersonaName_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    params->_ret = iface->GetPersonaName(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_SetPersonaName( void *args )
{
    struct ISteamFriends_SteamFriends010_SetPersonaName_params *params = (struct ISteamFriends_SteamFriends010_SetPersonaName_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    iface->SetPersonaName( params->pchPersonaName );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_GetPersonaState( void *args )
{
    struct ISteamFriends_SteamFriends010_GetPersonaState_params *params = (struct ISteamFriends_SteamFriends010_GetPersonaState_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    params->_ret = iface->GetPersonaState(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_GetFriendCount( void *args )
{
    struct ISteamFriends_SteamFriends010_GetFriendCount_params *params = (struct ISteamFriends_SteamFriends010_GetFriendCount_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    params->_ret = iface->GetFriendCount( params->iFriendFlags );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_GetFriendByIndex( void *args )
{
    struct ISteamFriends_SteamFriends010_GetFriendByIndex_params *params = (struct ISteamFriends_SteamFriends010_GetFriendByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    *params->_ret = iface->GetFriendByIndex( params->iFriend, params->iFriendFlags );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_GetFriendRelationship( void *args )
{
    struct ISteamFriends_SteamFriends010_GetFriendRelationship_params *params = (struct ISteamFriends_SteamFriends010_GetFriendRelationship_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    params->_ret = iface->GetFriendRelationship( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_GetFriendPersonaState( void *args )
{
    struct ISteamFriends_SteamFriends010_GetFriendPersonaState_params *params = (struct ISteamFriends_SteamFriends010_GetFriendPersonaState_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaState( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_GetFriendPersonaName( void *args )
{
    struct ISteamFriends_SteamFriends010_GetFriendPersonaName_params *params = (struct ISteamFriends_SteamFriends010_GetFriendPersonaName_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaName( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_GetFriendGamePlayed( void *args )
{
    struct ISteamFriends_SteamFriends010_GetFriendGamePlayed_params *params = (struct ISteamFriends_SteamFriends010_GetFriendGamePlayed_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    params->_ret = iface->GetFriendGamePlayed( params->steamIDFriend, params->pFriendGameInfo );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_GetFriendPersonaNameHistory( void *args )
{
    struct ISteamFriends_SteamFriends010_GetFriendPersonaNameHistory_params *params = (struct ISteamFriends_SteamFriends010_GetFriendPersonaNameHistory_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaNameHistory( params->steamIDFriend, params->iPersonaName );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_HasFriend( void *args )
{
    struct ISteamFriends_SteamFriends010_HasFriend_params *params = (struct ISteamFriends_SteamFriends010_HasFriend_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    params->_ret = iface->HasFriend( params->steamIDFriend, params->iFriendFlags );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_GetClanCount( void *args )
{
    struct ISteamFriends_SteamFriends010_GetClanCount_params *params = (struct ISteamFriends_SteamFriends010_GetClanCount_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    params->_ret = iface->GetClanCount(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_GetClanByIndex( void *args )
{
    struct ISteamFriends_SteamFriends010_GetClanByIndex_params *params = (struct ISteamFriends_SteamFriends010_GetClanByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    *params->_ret = iface->GetClanByIndex( params->iClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_GetClanName( void *args )
{
    struct ISteamFriends_SteamFriends010_GetClanName_params *params = (struct ISteamFriends_SteamFriends010_GetClanName_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    params->_ret = iface->GetClanName( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_GetClanTag( void *args )
{
    struct ISteamFriends_SteamFriends010_GetClanTag_params *params = (struct ISteamFriends_SteamFriends010_GetClanTag_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    params->_ret = iface->GetClanTag( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_GetClanActivityCounts( void *args )
{
    struct ISteamFriends_SteamFriends010_GetClanActivityCounts_params *params = (struct ISteamFriends_SteamFriends010_GetClanActivityCounts_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    params->_ret = iface->GetClanActivityCounts( params->steamIDClan, params->pnOnline, params->pnInGame, params->pnChatting );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_DownloadClanActivityCounts( void *args )
{
    struct ISteamFriends_SteamFriends010_DownloadClanActivityCounts_params *params = (struct ISteamFriends_SteamFriends010_DownloadClanActivityCounts_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    params->_ret = iface->DownloadClanActivityCounts( params->psteamIDClans, params->cClansToRequest );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_GetFriendCountFromSource( void *args )
{
    struct ISteamFriends_SteamFriends010_GetFriendCountFromSource_params *params = (struct ISteamFriends_SteamFriends010_GetFriendCountFromSource_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    params->_ret = iface->GetFriendCountFromSource( params->steamIDSource );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_GetFriendFromSourceByIndex( void *args )
{
    struct ISteamFriends_SteamFriends010_GetFriendFromSourceByIndex_params *params = (struct ISteamFriends_SteamFriends010_GetFriendFromSourceByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    *params->_ret = iface->GetFriendFromSourceByIndex( params->steamIDSource, params->iFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_IsUserInSource( void *args )
{
    struct ISteamFriends_SteamFriends010_IsUserInSource_params *params = (struct ISteamFriends_SteamFriends010_IsUserInSource_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    params->_ret = iface->IsUserInSource( params->steamIDUser, params->steamIDSource );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_SetInGameVoiceSpeaking( void *args )
{
    struct ISteamFriends_SteamFriends010_SetInGameVoiceSpeaking_params *params = (struct ISteamFriends_SteamFriends010_SetInGameVoiceSpeaking_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    iface->SetInGameVoiceSpeaking( params->steamIDUser, params->bSpeaking );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_ActivateGameOverlay( void *args )
{
    struct ISteamFriends_SteamFriends010_ActivateGameOverlay_params *params = (struct ISteamFriends_SteamFriends010_ActivateGameOverlay_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    iface->ActivateGameOverlay( params->pchDialog );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_ActivateGameOverlayToUser( void *args )
{
    struct ISteamFriends_SteamFriends010_ActivateGameOverlayToUser_params *params = (struct ISteamFriends_SteamFriends010_ActivateGameOverlayToUser_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    iface->ActivateGameOverlayToUser( params->pchDialog, params->steamID );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_ActivateGameOverlayToWebPage( void *args )
{
    struct ISteamFriends_SteamFriends010_ActivateGameOverlayToWebPage_params *params = (struct ISteamFriends_SteamFriends010_ActivateGameOverlayToWebPage_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    char *u_pchURL = steamclient_dos_to_unix_path( params->pchURL, 1 );
    iface->ActivateGameOverlayToWebPage( u_pchURL );
    steamclient_free_path( u_pchURL );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_ActivateGameOverlayToStore( void *args )
{
    struct ISteamFriends_SteamFriends010_ActivateGameOverlayToStore_params *params = (struct ISteamFriends_SteamFriends010_ActivateGameOverlayToStore_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    iface->ActivateGameOverlayToStore( params->nAppID );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_SetPlayedWith( void *args )
{
    struct ISteamFriends_SteamFriends010_SetPlayedWith_params *params = (struct ISteamFriends_SteamFriends010_SetPlayedWith_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    iface->SetPlayedWith( params->steamIDUserPlayedWith );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_ActivateGameOverlayInviteDialog( void *args )
{
    struct ISteamFriends_SteamFriends010_ActivateGameOverlayInviteDialog_params *params = (struct ISteamFriends_SteamFriends010_ActivateGameOverlayInviteDialog_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    iface->ActivateGameOverlayInviteDialog( params->steamIDLobby );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_GetSmallFriendAvatar( void *args )
{
    struct ISteamFriends_SteamFriends010_GetSmallFriendAvatar_params *params = (struct ISteamFriends_SteamFriends010_GetSmallFriendAvatar_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    params->_ret = iface->GetSmallFriendAvatar( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_GetMediumFriendAvatar( void *args )
{
    struct ISteamFriends_SteamFriends010_GetMediumFriendAvatar_params *params = (struct ISteamFriends_SteamFriends010_GetMediumFriendAvatar_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    params->_ret = iface->GetMediumFriendAvatar( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_GetLargeFriendAvatar( void *args )
{
    struct ISteamFriends_SteamFriends010_GetLargeFriendAvatar_params *params = (struct ISteamFriends_SteamFriends010_GetLargeFriendAvatar_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    params->_ret = iface->GetLargeFriendAvatar( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_RequestUserInformation( void *args )
{
    struct ISteamFriends_SteamFriends010_RequestUserInformation_params *params = (struct ISteamFriends_SteamFriends010_RequestUserInformation_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    params->_ret = iface->RequestUserInformation( params->steamIDUser, params->bRequireNameOnly );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_RequestClanOfficerList( void *args )
{
    struct ISteamFriends_SteamFriends010_RequestClanOfficerList_params *params = (struct ISteamFriends_SteamFriends010_RequestClanOfficerList_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    params->_ret = iface->RequestClanOfficerList( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_GetClanOwner( void *args )
{
    struct ISteamFriends_SteamFriends010_GetClanOwner_params *params = (struct ISteamFriends_SteamFriends010_GetClanOwner_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    *params->_ret = iface->GetClanOwner( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_GetClanOfficerCount( void *args )
{
    struct ISteamFriends_SteamFriends010_GetClanOfficerCount_params *params = (struct ISteamFriends_SteamFriends010_GetClanOfficerCount_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    params->_ret = iface->GetClanOfficerCount( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_GetClanOfficerByIndex( void *args )
{
    struct ISteamFriends_SteamFriends010_GetClanOfficerByIndex_params *params = (struct ISteamFriends_SteamFriends010_GetClanOfficerByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    *params->_ret = iface->GetClanOfficerByIndex( params->steamIDClan, params->iOfficer );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_GetUserRestrictions( void *args )
{
    struct ISteamFriends_SteamFriends010_GetUserRestrictions_params *params = (struct ISteamFriends_SteamFriends010_GetUserRestrictions_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    params->_ret = iface->GetUserRestrictions(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_SetRichPresence( void *args )
{
    struct ISteamFriends_SteamFriends010_SetRichPresence_params *params = (struct ISteamFriends_SteamFriends010_SetRichPresence_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    params->_ret = iface->SetRichPresence( params->pchKey, params->pchValue );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_ClearRichPresence( void *args )
{
    struct ISteamFriends_SteamFriends010_ClearRichPresence_params *params = (struct ISteamFriends_SteamFriends010_ClearRichPresence_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    iface->ClearRichPresence(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_GetFriendRichPresence( void *args )
{
    struct ISteamFriends_SteamFriends010_GetFriendRichPresence_params *params = (struct ISteamFriends_SteamFriends010_GetFriendRichPresence_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    params->_ret = iface->GetFriendRichPresence( params->steamIDFriend, params->pchKey );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_GetFriendRichPresenceKeyCount( void *args )
{
    struct ISteamFriends_SteamFriends010_GetFriendRichPresenceKeyCount_params *params = (struct ISteamFriends_SteamFriends010_GetFriendRichPresenceKeyCount_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    params->_ret = iface->GetFriendRichPresenceKeyCount( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_GetFriendRichPresenceKeyByIndex( void *args )
{
    struct ISteamFriends_SteamFriends010_GetFriendRichPresenceKeyByIndex_params *params = (struct ISteamFriends_SteamFriends010_GetFriendRichPresenceKeyByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    params->_ret = iface->GetFriendRichPresenceKeyByIndex( params->steamIDFriend, params->iKey );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_InviteUserToGame( void *args )
{
    struct ISteamFriends_SteamFriends010_InviteUserToGame_params *params = (struct ISteamFriends_SteamFriends010_InviteUserToGame_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    params->_ret = iface->InviteUserToGame( params->steamIDFriend, params->pchConnectString );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_GetCoplayFriendCount( void *args )
{
    struct ISteamFriends_SteamFriends010_GetCoplayFriendCount_params *params = (struct ISteamFriends_SteamFriends010_GetCoplayFriendCount_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    params->_ret = iface->GetCoplayFriendCount(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_GetCoplayFriend( void *args )
{
    struct ISteamFriends_SteamFriends010_GetCoplayFriend_params *params = (struct ISteamFriends_SteamFriends010_GetCoplayFriend_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    *params->_ret = iface->GetCoplayFriend( params->iCoplayFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_GetFriendCoplayTime( void *args )
{
    struct ISteamFriends_SteamFriends010_GetFriendCoplayTime_params *params = (struct ISteamFriends_SteamFriends010_GetFriendCoplayTime_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    params->_ret = iface->GetFriendCoplayTime( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_GetFriendCoplayGame( void *args )
{
    struct ISteamFriends_SteamFriends010_GetFriendCoplayGame_params *params = (struct ISteamFriends_SteamFriends010_GetFriendCoplayGame_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    params->_ret = iface->GetFriendCoplayGame( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_JoinClanChatRoom( void *args )
{
    struct ISteamFriends_SteamFriends010_JoinClanChatRoom_params *params = (struct ISteamFriends_SteamFriends010_JoinClanChatRoom_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    params->_ret = iface->JoinClanChatRoom( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_LeaveClanChatRoom( void *args )
{
    struct ISteamFriends_SteamFriends010_LeaveClanChatRoom_params *params = (struct ISteamFriends_SteamFriends010_LeaveClanChatRoom_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    params->_ret = iface->LeaveClanChatRoom( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_GetClanChatMemberCount( void *args )
{
    struct ISteamFriends_SteamFriends010_GetClanChatMemberCount_params *params = (struct ISteamFriends_SteamFriends010_GetClanChatMemberCount_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    params->_ret = iface->GetClanChatMemberCount( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_GetChatMemberByIndex( void *args )
{
    struct ISteamFriends_SteamFriends010_GetChatMemberByIndex_params *params = (struct ISteamFriends_SteamFriends010_GetChatMemberByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    *params->_ret = iface->GetChatMemberByIndex( params->steamIDClan, params->iUser );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_SendClanChatMessage( void *args )
{
    struct ISteamFriends_SteamFriends010_SendClanChatMessage_params *params = (struct ISteamFriends_SteamFriends010_SendClanChatMessage_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    params->_ret = iface->SendClanChatMessage( params->steamIDClanChat, params->pchText );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_GetClanChatMessage( void *args )
{
    struct ISteamFriends_SteamFriends010_GetClanChatMessage_params *params = (struct ISteamFriends_SteamFriends010_GetClanChatMessage_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    params->_ret = iface->GetClanChatMessage( params->steamIDClanChat, params->iMessage, params->prgchText, params->cchTextMax, params->_e, params->_f );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_IsClanChatAdmin( void *args )
{
    struct ISteamFriends_SteamFriends010_IsClanChatAdmin_params *params = (struct ISteamFriends_SteamFriends010_IsClanChatAdmin_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    params->_ret = iface->IsClanChatAdmin( params->steamIDClanChat, params->steamIDUser );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_IsClanChatWindowOpenInSteam( void *args )
{
    struct ISteamFriends_SteamFriends010_IsClanChatWindowOpenInSteam_params *params = (struct ISteamFriends_SteamFriends010_IsClanChatWindowOpenInSteam_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    params->_ret = iface->IsClanChatWindowOpenInSteam( params->steamIDClanChat );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_OpenClanChatWindowInSteam( void *args )
{
    struct ISteamFriends_SteamFriends010_OpenClanChatWindowInSteam_params *params = (struct ISteamFriends_SteamFriends010_OpenClanChatWindowInSteam_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    params->_ret = iface->OpenClanChatWindowInSteam( params->steamIDClanChat );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_CloseClanChatWindowInSteam( void *args )
{
    struct ISteamFriends_SteamFriends010_CloseClanChatWindowInSteam_params *params = (struct ISteamFriends_SteamFriends010_CloseClanChatWindowInSteam_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    params->_ret = iface->CloseClanChatWindowInSteam( params->steamIDClanChat );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_SetListenForFriendsMessages( void *args )
{
    struct ISteamFriends_SteamFriends010_SetListenForFriendsMessages_params *params = (struct ISteamFriends_SteamFriends010_SetListenForFriendsMessages_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    params->_ret = iface->SetListenForFriendsMessages( params->bInterceptEnabled );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_ReplyToFriendMessage( void *args )
{
    struct ISteamFriends_SteamFriends010_ReplyToFriendMessage_params *params = (struct ISteamFriends_SteamFriends010_ReplyToFriendMessage_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    params->_ret = iface->ReplyToFriendMessage( params->steamIDFriend, params->pchMsgToSend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends010_GetFriendMessage( void *args )
{
    struct ISteamFriends_SteamFriends010_GetFriendMessage_params *params = (struct ISteamFriends_SteamFriends010_GetFriendMessage_params *)args;
    struct u_ISteamFriends_SteamFriends010 *iface = (struct u_ISteamFriends_SteamFriends010 *)params->linux_side;
    params->_ret = iface->GetFriendMessage( params->steamIDFriend, params->iMessageID, params->pvData, params->cubData, params->peChatEntryType );
    return 0;
}

