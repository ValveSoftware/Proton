/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS ISteamFriends_SteamFriends012_GetPersonaName( void *args )
{
    struct ISteamFriends_SteamFriends012_GetPersonaName_params *params = (struct ISteamFriends_SteamFriends012_GetPersonaName_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    params->_ret = iface->GetPersonaName(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_SetPersonaName( void *args )
{
    struct ISteamFriends_SteamFriends012_SetPersonaName_params *params = (struct ISteamFriends_SteamFriends012_SetPersonaName_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    params->_ret = iface->SetPersonaName( params->pchPersonaName );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_GetPersonaState( void *args )
{
    struct ISteamFriends_SteamFriends012_GetPersonaState_params *params = (struct ISteamFriends_SteamFriends012_GetPersonaState_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    params->_ret = iface->GetPersonaState(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_GetFriendCount( void *args )
{
    struct ISteamFriends_SteamFriends012_GetFriendCount_params *params = (struct ISteamFriends_SteamFriends012_GetFriendCount_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    params->_ret = iface->GetFriendCount( params->iFriendFlags );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_GetFriendByIndex( void *args )
{
    struct ISteamFriends_SteamFriends012_GetFriendByIndex_params *params = (struct ISteamFriends_SteamFriends012_GetFriendByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    *params->_ret = iface->GetFriendByIndex( params->iFriend, params->iFriendFlags );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_GetFriendRelationship( void *args )
{
    struct ISteamFriends_SteamFriends012_GetFriendRelationship_params *params = (struct ISteamFriends_SteamFriends012_GetFriendRelationship_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    params->_ret = iface->GetFriendRelationship( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_GetFriendPersonaState( void *args )
{
    struct ISteamFriends_SteamFriends012_GetFriendPersonaState_params *params = (struct ISteamFriends_SteamFriends012_GetFriendPersonaState_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaState( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_GetFriendPersonaName( void *args )
{
    struct ISteamFriends_SteamFriends012_GetFriendPersonaName_params *params = (struct ISteamFriends_SteamFriends012_GetFriendPersonaName_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaName( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_GetFriendGamePlayed( void *args )
{
    struct ISteamFriends_SteamFriends012_GetFriendGamePlayed_params *params = (struct ISteamFriends_SteamFriends012_GetFriendGamePlayed_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    params->_ret = iface->GetFriendGamePlayed( params->steamIDFriend, params->pFriendGameInfo );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_GetFriendPersonaNameHistory( void *args )
{
    struct ISteamFriends_SteamFriends012_GetFriendPersonaNameHistory_params *params = (struct ISteamFriends_SteamFriends012_GetFriendPersonaNameHistory_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaNameHistory( params->steamIDFriend, params->iPersonaName );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_HasFriend( void *args )
{
    struct ISteamFriends_SteamFriends012_HasFriend_params *params = (struct ISteamFriends_SteamFriends012_HasFriend_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    params->_ret = iface->HasFriend( params->steamIDFriend, params->iFriendFlags );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_GetClanCount( void *args )
{
    struct ISteamFriends_SteamFriends012_GetClanCount_params *params = (struct ISteamFriends_SteamFriends012_GetClanCount_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    params->_ret = iface->GetClanCount(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_GetClanByIndex( void *args )
{
    struct ISteamFriends_SteamFriends012_GetClanByIndex_params *params = (struct ISteamFriends_SteamFriends012_GetClanByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    *params->_ret = iface->GetClanByIndex( params->iClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_GetClanName( void *args )
{
    struct ISteamFriends_SteamFriends012_GetClanName_params *params = (struct ISteamFriends_SteamFriends012_GetClanName_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    params->_ret = iface->GetClanName( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_GetClanTag( void *args )
{
    struct ISteamFriends_SteamFriends012_GetClanTag_params *params = (struct ISteamFriends_SteamFriends012_GetClanTag_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    params->_ret = iface->GetClanTag( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_GetClanActivityCounts( void *args )
{
    struct ISteamFriends_SteamFriends012_GetClanActivityCounts_params *params = (struct ISteamFriends_SteamFriends012_GetClanActivityCounts_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    params->_ret = iface->GetClanActivityCounts( params->steamIDClan, params->pnOnline, params->pnInGame, params->pnChatting );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_DownloadClanActivityCounts( void *args )
{
    struct ISteamFriends_SteamFriends012_DownloadClanActivityCounts_params *params = (struct ISteamFriends_SteamFriends012_DownloadClanActivityCounts_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    params->_ret = iface->DownloadClanActivityCounts( params->psteamIDClans, params->cClansToRequest );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_GetFriendCountFromSource( void *args )
{
    struct ISteamFriends_SteamFriends012_GetFriendCountFromSource_params *params = (struct ISteamFriends_SteamFriends012_GetFriendCountFromSource_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    params->_ret = iface->GetFriendCountFromSource( params->steamIDSource );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_GetFriendFromSourceByIndex( void *args )
{
    struct ISteamFriends_SteamFriends012_GetFriendFromSourceByIndex_params *params = (struct ISteamFriends_SteamFriends012_GetFriendFromSourceByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    *params->_ret = iface->GetFriendFromSourceByIndex( params->steamIDSource, params->iFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_IsUserInSource( void *args )
{
    struct ISteamFriends_SteamFriends012_IsUserInSource_params *params = (struct ISteamFriends_SteamFriends012_IsUserInSource_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    params->_ret = iface->IsUserInSource( params->steamIDUser, params->steamIDSource );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_SetInGameVoiceSpeaking( void *args )
{
    struct ISteamFriends_SteamFriends012_SetInGameVoiceSpeaking_params *params = (struct ISteamFriends_SteamFriends012_SetInGameVoiceSpeaking_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    iface->SetInGameVoiceSpeaking( params->steamIDUser, params->bSpeaking );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_ActivateGameOverlay( void *args )
{
    struct ISteamFriends_SteamFriends012_ActivateGameOverlay_params *params = (struct ISteamFriends_SteamFriends012_ActivateGameOverlay_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    iface->ActivateGameOverlay( params->pchDialog );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_ActivateGameOverlayToUser( void *args )
{
    struct ISteamFriends_SteamFriends012_ActivateGameOverlayToUser_params *params = (struct ISteamFriends_SteamFriends012_ActivateGameOverlayToUser_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    iface->ActivateGameOverlayToUser( params->pchDialog, params->steamID );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_ActivateGameOverlayToWebPage( void *args )
{
    struct ISteamFriends_SteamFriends012_ActivateGameOverlayToWebPage_params *params = (struct ISteamFriends_SteamFriends012_ActivateGameOverlayToWebPage_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    char *u_pchURL = steamclient_dos_to_unix_path( params->pchURL, 1 );
    iface->ActivateGameOverlayToWebPage( u_pchURL );
    steamclient_free_path( u_pchURL );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_ActivateGameOverlayToStore( void *args )
{
    struct ISteamFriends_SteamFriends012_ActivateGameOverlayToStore_params *params = (struct ISteamFriends_SteamFriends012_ActivateGameOverlayToStore_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    iface->ActivateGameOverlayToStore( params->nAppID );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_SetPlayedWith( void *args )
{
    struct ISteamFriends_SteamFriends012_SetPlayedWith_params *params = (struct ISteamFriends_SteamFriends012_SetPlayedWith_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    iface->SetPlayedWith( params->steamIDUserPlayedWith );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_ActivateGameOverlayInviteDialog( void *args )
{
    struct ISteamFriends_SteamFriends012_ActivateGameOverlayInviteDialog_params *params = (struct ISteamFriends_SteamFriends012_ActivateGameOverlayInviteDialog_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    iface->ActivateGameOverlayInviteDialog( params->steamIDLobby );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_GetSmallFriendAvatar( void *args )
{
    struct ISteamFriends_SteamFriends012_GetSmallFriendAvatar_params *params = (struct ISteamFriends_SteamFriends012_GetSmallFriendAvatar_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    params->_ret = iface->GetSmallFriendAvatar( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_GetMediumFriendAvatar( void *args )
{
    struct ISteamFriends_SteamFriends012_GetMediumFriendAvatar_params *params = (struct ISteamFriends_SteamFriends012_GetMediumFriendAvatar_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    params->_ret = iface->GetMediumFriendAvatar( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_GetLargeFriendAvatar( void *args )
{
    struct ISteamFriends_SteamFriends012_GetLargeFriendAvatar_params *params = (struct ISteamFriends_SteamFriends012_GetLargeFriendAvatar_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    params->_ret = iface->GetLargeFriendAvatar( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_RequestUserInformation( void *args )
{
    struct ISteamFriends_SteamFriends012_RequestUserInformation_params *params = (struct ISteamFriends_SteamFriends012_RequestUserInformation_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    params->_ret = iface->RequestUserInformation( params->steamIDUser, params->bRequireNameOnly );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_RequestClanOfficerList( void *args )
{
    struct ISteamFriends_SteamFriends012_RequestClanOfficerList_params *params = (struct ISteamFriends_SteamFriends012_RequestClanOfficerList_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    params->_ret = iface->RequestClanOfficerList( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_GetClanOwner( void *args )
{
    struct ISteamFriends_SteamFriends012_GetClanOwner_params *params = (struct ISteamFriends_SteamFriends012_GetClanOwner_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    *params->_ret = iface->GetClanOwner( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_GetClanOfficerCount( void *args )
{
    struct ISteamFriends_SteamFriends012_GetClanOfficerCount_params *params = (struct ISteamFriends_SteamFriends012_GetClanOfficerCount_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    params->_ret = iface->GetClanOfficerCount( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_GetClanOfficerByIndex( void *args )
{
    struct ISteamFriends_SteamFriends012_GetClanOfficerByIndex_params *params = (struct ISteamFriends_SteamFriends012_GetClanOfficerByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    *params->_ret = iface->GetClanOfficerByIndex( params->steamIDClan, params->iOfficer );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_GetUserRestrictions( void *args )
{
    struct ISteamFriends_SteamFriends012_GetUserRestrictions_params *params = (struct ISteamFriends_SteamFriends012_GetUserRestrictions_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    params->_ret = iface->GetUserRestrictions(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_SetRichPresence( void *args )
{
    struct ISteamFriends_SteamFriends012_SetRichPresence_params *params = (struct ISteamFriends_SteamFriends012_SetRichPresence_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    params->_ret = iface->SetRichPresence( params->pchKey, params->pchValue );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_ClearRichPresence( void *args )
{
    struct ISteamFriends_SteamFriends012_ClearRichPresence_params *params = (struct ISteamFriends_SteamFriends012_ClearRichPresence_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    iface->ClearRichPresence(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_GetFriendRichPresence( void *args )
{
    struct ISteamFriends_SteamFriends012_GetFriendRichPresence_params *params = (struct ISteamFriends_SteamFriends012_GetFriendRichPresence_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    params->_ret = iface->GetFriendRichPresence( params->steamIDFriend, params->pchKey );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_GetFriendRichPresenceKeyCount( void *args )
{
    struct ISteamFriends_SteamFriends012_GetFriendRichPresenceKeyCount_params *params = (struct ISteamFriends_SteamFriends012_GetFriendRichPresenceKeyCount_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    params->_ret = iface->GetFriendRichPresenceKeyCount( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_GetFriendRichPresenceKeyByIndex( void *args )
{
    struct ISteamFriends_SteamFriends012_GetFriendRichPresenceKeyByIndex_params *params = (struct ISteamFriends_SteamFriends012_GetFriendRichPresenceKeyByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    params->_ret = iface->GetFriendRichPresenceKeyByIndex( params->steamIDFriend, params->iKey );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_RequestFriendRichPresence( void *args )
{
    struct ISteamFriends_SteamFriends012_RequestFriendRichPresence_params *params = (struct ISteamFriends_SteamFriends012_RequestFriendRichPresence_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    iface->RequestFriendRichPresence( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_InviteUserToGame( void *args )
{
    struct ISteamFriends_SteamFriends012_InviteUserToGame_params *params = (struct ISteamFriends_SteamFriends012_InviteUserToGame_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    params->_ret = iface->InviteUserToGame( params->steamIDFriend, params->pchConnectString );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_GetCoplayFriendCount( void *args )
{
    struct ISteamFriends_SteamFriends012_GetCoplayFriendCount_params *params = (struct ISteamFriends_SteamFriends012_GetCoplayFriendCount_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    params->_ret = iface->GetCoplayFriendCount(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_GetCoplayFriend( void *args )
{
    struct ISteamFriends_SteamFriends012_GetCoplayFriend_params *params = (struct ISteamFriends_SteamFriends012_GetCoplayFriend_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    *params->_ret = iface->GetCoplayFriend( params->iCoplayFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_GetFriendCoplayTime( void *args )
{
    struct ISteamFriends_SteamFriends012_GetFriendCoplayTime_params *params = (struct ISteamFriends_SteamFriends012_GetFriendCoplayTime_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    params->_ret = iface->GetFriendCoplayTime( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_GetFriendCoplayGame( void *args )
{
    struct ISteamFriends_SteamFriends012_GetFriendCoplayGame_params *params = (struct ISteamFriends_SteamFriends012_GetFriendCoplayGame_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    params->_ret = iface->GetFriendCoplayGame( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_JoinClanChatRoom( void *args )
{
    struct ISteamFriends_SteamFriends012_JoinClanChatRoom_params *params = (struct ISteamFriends_SteamFriends012_JoinClanChatRoom_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    params->_ret = iface->JoinClanChatRoom( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_LeaveClanChatRoom( void *args )
{
    struct ISteamFriends_SteamFriends012_LeaveClanChatRoom_params *params = (struct ISteamFriends_SteamFriends012_LeaveClanChatRoom_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    params->_ret = iface->LeaveClanChatRoom( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_GetClanChatMemberCount( void *args )
{
    struct ISteamFriends_SteamFriends012_GetClanChatMemberCount_params *params = (struct ISteamFriends_SteamFriends012_GetClanChatMemberCount_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    params->_ret = iface->GetClanChatMemberCount( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_GetChatMemberByIndex( void *args )
{
    struct ISteamFriends_SteamFriends012_GetChatMemberByIndex_params *params = (struct ISteamFriends_SteamFriends012_GetChatMemberByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    *params->_ret = iface->GetChatMemberByIndex( params->steamIDClan, params->iUser );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_SendClanChatMessage( void *args )
{
    struct ISteamFriends_SteamFriends012_SendClanChatMessage_params *params = (struct ISteamFriends_SteamFriends012_SendClanChatMessage_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    params->_ret = iface->SendClanChatMessage( params->steamIDClanChat, params->pchText );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_GetClanChatMessage( void *args )
{
    struct ISteamFriends_SteamFriends012_GetClanChatMessage_params *params = (struct ISteamFriends_SteamFriends012_GetClanChatMessage_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    params->_ret = iface->GetClanChatMessage( params->steamIDClanChat, params->iMessage, params->prgchText, params->cchTextMax, params->_e, params->_f );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_IsClanChatAdmin( void *args )
{
    struct ISteamFriends_SteamFriends012_IsClanChatAdmin_params *params = (struct ISteamFriends_SteamFriends012_IsClanChatAdmin_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    params->_ret = iface->IsClanChatAdmin( params->steamIDClanChat, params->steamIDUser );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_IsClanChatWindowOpenInSteam( void *args )
{
    struct ISteamFriends_SteamFriends012_IsClanChatWindowOpenInSteam_params *params = (struct ISteamFriends_SteamFriends012_IsClanChatWindowOpenInSteam_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    params->_ret = iface->IsClanChatWindowOpenInSteam( params->steamIDClanChat );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_OpenClanChatWindowInSteam( void *args )
{
    struct ISteamFriends_SteamFriends012_OpenClanChatWindowInSteam_params *params = (struct ISteamFriends_SteamFriends012_OpenClanChatWindowInSteam_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    params->_ret = iface->OpenClanChatWindowInSteam( params->steamIDClanChat );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_CloseClanChatWindowInSteam( void *args )
{
    struct ISteamFriends_SteamFriends012_CloseClanChatWindowInSteam_params *params = (struct ISteamFriends_SteamFriends012_CloseClanChatWindowInSteam_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    params->_ret = iface->CloseClanChatWindowInSteam( params->steamIDClanChat );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_SetListenForFriendsMessages( void *args )
{
    struct ISteamFriends_SteamFriends012_SetListenForFriendsMessages_params *params = (struct ISteamFriends_SteamFriends012_SetListenForFriendsMessages_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    params->_ret = iface->SetListenForFriendsMessages( params->bInterceptEnabled );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_ReplyToFriendMessage( void *args )
{
    struct ISteamFriends_SteamFriends012_ReplyToFriendMessage_params *params = (struct ISteamFriends_SteamFriends012_ReplyToFriendMessage_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    params->_ret = iface->ReplyToFriendMessage( params->steamIDFriend, params->pchMsgToSend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_GetFriendMessage( void *args )
{
    struct ISteamFriends_SteamFriends012_GetFriendMessage_params *params = (struct ISteamFriends_SteamFriends012_GetFriendMessage_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    params->_ret = iface->GetFriendMessage( params->steamIDFriend, params->iMessageID, params->pvData, params->cubData, params->peChatEntryType );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_GetFollowerCount( void *args )
{
    struct ISteamFriends_SteamFriends012_GetFollowerCount_params *params = (struct ISteamFriends_SteamFriends012_GetFollowerCount_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    params->_ret = iface->GetFollowerCount( params->steamID );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_IsFollowing( void *args )
{
    struct ISteamFriends_SteamFriends012_IsFollowing_params *params = (struct ISteamFriends_SteamFriends012_IsFollowing_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    params->_ret = iface->IsFollowing( params->steamID );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends012_EnumerateFollowingList( void *args )
{
    struct ISteamFriends_SteamFriends012_EnumerateFollowingList_params *params = (struct ISteamFriends_SteamFriends012_EnumerateFollowingList_params *)args;
    struct u_ISteamFriends_SteamFriends012 *iface = (struct u_ISteamFriends_SteamFriends012 *)params->linux_side;
    params->_ret = iface->EnumerateFollowingList( params->unStartIndex );
    return 0;
}

