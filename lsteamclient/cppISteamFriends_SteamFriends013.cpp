/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS ISteamFriends_SteamFriends013_GetPersonaName( void *args )
{
    struct ISteamFriends_SteamFriends013_GetPersonaName_params *params = (struct ISteamFriends_SteamFriends013_GetPersonaName_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetPersonaName(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_SetPersonaName( void *args )
{
    struct ISteamFriends_SteamFriends013_SetPersonaName_params *params = (struct ISteamFriends_SteamFriends013_SetPersonaName_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->SetPersonaName( params->pchPersonaName );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_GetPersonaState( void *args )
{
    struct ISteamFriends_SteamFriends013_GetPersonaState_params *params = (struct ISteamFriends_SteamFriends013_GetPersonaState_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetPersonaState(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_GetFriendCount( void *args )
{
    struct ISteamFriends_SteamFriends013_GetFriendCount_params *params = (struct ISteamFriends_SteamFriends013_GetFriendCount_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetFriendCount( params->iFriendFlags );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_GetFriendByIndex( void *args )
{
    struct ISteamFriends_SteamFriends013_GetFriendByIndex_params *params = (struct ISteamFriends_SteamFriends013_GetFriendByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    *params->_ret = iface->GetFriendByIndex( params->iFriend, params->iFriendFlags );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_GetFriendRelationship( void *args )
{
    struct ISteamFriends_SteamFriends013_GetFriendRelationship_params *params = (struct ISteamFriends_SteamFriends013_GetFriendRelationship_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetFriendRelationship( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_GetFriendPersonaState( void *args )
{
    struct ISteamFriends_SteamFriends013_GetFriendPersonaState_params *params = (struct ISteamFriends_SteamFriends013_GetFriendPersonaState_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaState( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_GetFriendPersonaName( void *args )
{
    struct ISteamFriends_SteamFriends013_GetFriendPersonaName_params *params = (struct ISteamFriends_SteamFriends013_GetFriendPersonaName_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaName( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_GetFriendGamePlayed( void *args )
{
    struct ISteamFriends_SteamFriends013_GetFriendGamePlayed_params *params = (struct ISteamFriends_SteamFriends013_GetFriendGamePlayed_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetFriendGamePlayed( params->steamIDFriend, params->pFriendGameInfo );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_GetFriendPersonaNameHistory( void *args )
{
    struct ISteamFriends_SteamFriends013_GetFriendPersonaNameHistory_params *params = (struct ISteamFriends_SteamFriends013_GetFriendPersonaNameHistory_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaNameHistory( params->steamIDFriend, params->iPersonaName );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_HasFriend( void *args )
{
    struct ISteamFriends_SteamFriends013_HasFriend_params *params = (struct ISteamFriends_SteamFriends013_HasFriend_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->HasFriend( params->steamIDFriend, params->iFriendFlags );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_GetClanCount( void *args )
{
    struct ISteamFriends_SteamFriends013_GetClanCount_params *params = (struct ISteamFriends_SteamFriends013_GetClanCount_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetClanCount(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_GetClanByIndex( void *args )
{
    struct ISteamFriends_SteamFriends013_GetClanByIndex_params *params = (struct ISteamFriends_SteamFriends013_GetClanByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    *params->_ret = iface->GetClanByIndex( params->iClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_GetClanName( void *args )
{
    struct ISteamFriends_SteamFriends013_GetClanName_params *params = (struct ISteamFriends_SteamFriends013_GetClanName_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetClanName( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_GetClanTag( void *args )
{
    struct ISteamFriends_SteamFriends013_GetClanTag_params *params = (struct ISteamFriends_SteamFriends013_GetClanTag_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetClanTag( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_GetClanActivityCounts( void *args )
{
    struct ISteamFriends_SteamFriends013_GetClanActivityCounts_params *params = (struct ISteamFriends_SteamFriends013_GetClanActivityCounts_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetClanActivityCounts( params->steamIDClan, params->pnOnline, params->pnInGame, params->pnChatting );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_DownloadClanActivityCounts( void *args )
{
    struct ISteamFriends_SteamFriends013_DownloadClanActivityCounts_params *params = (struct ISteamFriends_SteamFriends013_DownloadClanActivityCounts_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->DownloadClanActivityCounts( params->psteamIDClans, params->cClansToRequest );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_GetFriendCountFromSource( void *args )
{
    struct ISteamFriends_SteamFriends013_GetFriendCountFromSource_params *params = (struct ISteamFriends_SteamFriends013_GetFriendCountFromSource_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetFriendCountFromSource( params->steamIDSource );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_GetFriendFromSourceByIndex( void *args )
{
    struct ISteamFriends_SteamFriends013_GetFriendFromSourceByIndex_params *params = (struct ISteamFriends_SteamFriends013_GetFriendFromSourceByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    *params->_ret = iface->GetFriendFromSourceByIndex( params->steamIDSource, params->iFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_IsUserInSource( void *args )
{
    struct ISteamFriends_SteamFriends013_IsUserInSource_params *params = (struct ISteamFriends_SteamFriends013_IsUserInSource_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->IsUserInSource( params->steamIDUser, params->steamIDSource );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_SetInGameVoiceSpeaking( void *args )
{
    struct ISteamFriends_SteamFriends013_SetInGameVoiceSpeaking_params *params = (struct ISteamFriends_SteamFriends013_SetInGameVoiceSpeaking_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    iface->SetInGameVoiceSpeaking( params->steamIDUser, params->bSpeaking );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_ActivateGameOverlay( void *args )
{
    struct ISteamFriends_SteamFriends013_ActivateGameOverlay_params *params = (struct ISteamFriends_SteamFriends013_ActivateGameOverlay_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    iface->ActivateGameOverlay( params->pchDialog );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_ActivateGameOverlayToUser( void *args )
{
    struct ISteamFriends_SteamFriends013_ActivateGameOverlayToUser_params *params = (struct ISteamFriends_SteamFriends013_ActivateGameOverlayToUser_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    iface->ActivateGameOverlayToUser( params->pchDialog, params->steamID );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_ActivateGameOverlayToWebPage( void *args )
{
    struct ISteamFriends_SteamFriends013_ActivateGameOverlayToWebPage_params *params = (struct ISteamFriends_SteamFriends013_ActivateGameOverlayToWebPage_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    char *u_pchURL = steamclient_dos_to_unix_path( params->pchURL, 1 );
    iface->ActivateGameOverlayToWebPage( u_pchURL );
    steamclient_free_path( u_pchURL );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_ActivateGameOverlayToStore( void *args )
{
    struct ISteamFriends_SteamFriends013_ActivateGameOverlayToStore_params *params = (struct ISteamFriends_SteamFriends013_ActivateGameOverlayToStore_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    iface->ActivateGameOverlayToStore( params->nAppID, params->eFlag );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_SetPlayedWith( void *args )
{
    struct ISteamFriends_SteamFriends013_SetPlayedWith_params *params = (struct ISteamFriends_SteamFriends013_SetPlayedWith_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    iface->SetPlayedWith( params->steamIDUserPlayedWith );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_ActivateGameOverlayInviteDialog( void *args )
{
    struct ISteamFriends_SteamFriends013_ActivateGameOverlayInviteDialog_params *params = (struct ISteamFriends_SteamFriends013_ActivateGameOverlayInviteDialog_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    iface->ActivateGameOverlayInviteDialog( params->steamIDLobby );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_GetSmallFriendAvatar( void *args )
{
    struct ISteamFriends_SteamFriends013_GetSmallFriendAvatar_params *params = (struct ISteamFriends_SteamFriends013_GetSmallFriendAvatar_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetSmallFriendAvatar( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_GetMediumFriendAvatar( void *args )
{
    struct ISteamFriends_SteamFriends013_GetMediumFriendAvatar_params *params = (struct ISteamFriends_SteamFriends013_GetMediumFriendAvatar_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetMediumFriendAvatar( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_GetLargeFriendAvatar( void *args )
{
    struct ISteamFriends_SteamFriends013_GetLargeFriendAvatar_params *params = (struct ISteamFriends_SteamFriends013_GetLargeFriendAvatar_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetLargeFriendAvatar( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_RequestUserInformation( void *args )
{
    struct ISteamFriends_SteamFriends013_RequestUserInformation_params *params = (struct ISteamFriends_SteamFriends013_RequestUserInformation_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->RequestUserInformation( params->steamIDUser, params->bRequireNameOnly );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_RequestClanOfficerList( void *args )
{
    struct ISteamFriends_SteamFriends013_RequestClanOfficerList_params *params = (struct ISteamFriends_SteamFriends013_RequestClanOfficerList_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->RequestClanOfficerList( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_GetClanOwner( void *args )
{
    struct ISteamFriends_SteamFriends013_GetClanOwner_params *params = (struct ISteamFriends_SteamFriends013_GetClanOwner_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    *params->_ret = iface->GetClanOwner( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_GetClanOfficerCount( void *args )
{
    struct ISteamFriends_SteamFriends013_GetClanOfficerCount_params *params = (struct ISteamFriends_SteamFriends013_GetClanOfficerCount_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetClanOfficerCount( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_GetClanOfficerByIndex( void *args )
{
    struct ISteamFriends_SteamFriends013_GetClanOfficerByIndex_params *params = (struct ISteamFriends_SteamFriends013_GetClanOfficerByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    *params->_ret = iface->GetClanOfficerByIndex( params->steamIDClan, params->iOfficer );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_GetUserRestrictions( void *args )
{
    struct ISteamFriends_SteamFriends013_GetUserRestrictions_params *params = (struct ISteamFriends_SteamFriends013_GetUserRestrictions_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetUserRestrictions(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_SetRichPresence( void *args )
{
    struct ISteamFriends_SteamFriends013_SetRichPresence_params *params = (struct ISteamFriends_SteamFriends013_SetRichPresence_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->SetRichPresence( params->pchKey, params->pchValue );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_ClearRichPresence( void *args )
{
    struct ISteamFriends_SteamFriends013_ClearRichPresence_params *params = (struct ISteamFriends_SteamFriends013_ClearRichPresence_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    iface->ClearRichPresence(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_GetFriendRichPresence( void *args )
{
    struct ISteamFriends_SteamFriends013_GetFriendRichPresence_params *params = (struct ISteamFriends_SteamFriends013_GetFriendRichPresence_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetFriendRichPresence( params->steamIDFriend, params->pchKey );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_GetFriendRichPresenceKeyCount( void *args )
{
    struct ISteamFriends_SteamFriends013_GetFriendRichPresenceKeyCount_params *params = (struct ISteamFriends_SteamFriends013_GetFriendRichPresenceKeyCount_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetFriendRichPresenceKeyCount( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_GetFriendRichPresenceKeyByIndex( void *args )
{
    struct ISteamFriends_SteamFriends013_GetFriendRichPresenceKeyByIndex_params *params = (struct ISteamFriends_SteamFriends013_GetFriendRichPresenceKeyByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetFriendRichPresenceKeyByIndex( params->steamIDFriend, params->iKey );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_RequestFriendRichPresence( void *args )
{
    struct ISteamFriends_SteamFriends013_RequestFriendRichPresence_params *params = (struct ISteamFriends_SteamFriends013_RequestFriendRichPresence_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    iface->RequestFriendRichPresence( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_InviteUserToGame( void *args )
{
    struct ISteamFriends_SteamFriends013_InviteUserToGame_params *params = (struct ISteamFriends_SteamFriends013_InviteUserToGame_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->InviteUserToGame( params->steamIDFriend, params->pchConnectString );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_GetCoplayFriendCount( void *args )
{
    struct ISteamFriends_SteamFriends013_GetCoplayFriendCount_params *params = (struct ISteamFriends_SteamFriends013_GetCoplayFriendCount_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetCoplayFriendCount(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_GetCoplayFriend( void *args )
{
    struct ISteamFriends_SteamFriends013_GetCoplayFriend_params *params = (struct ISteamFriends_SteamFriends013_GetCoplayFriend_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    *params->_ret = iface->GetCoplayFriend( params->iCoplayFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_GetFriendCoplayTime( void *args )
{
    struct ISteamFriends_SteamFriends013_GetFriendCoplayTime_params *params = (struct ISteamFriends_SteamFriends013_GetFriendCoplayTime_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetFriendCoplayTime( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_GetFriendCoplayGame( void *args )
{
    struct ISteamFriends_SteamFriends013_GetFriendCoplayGame_params *params = (struct ISteamFriends_SteamFriends013_GetFriendCoplayGame_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetFriendCoplayGame( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_JoinClanChatRoom( void *args )
{
    struct ISteamFriends_SteamFriends013_JoinClanChatRoom_params *params = (struct ISteamFriends_SteamFriends013_JoinClanChatRoom_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->JoinClanChatRoom( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_LeaveClanChatRoom( void *args )
{
    struct ISteamFriends_SteamFriends013_LeaveClanChatRoom_params *params = (struct ISteamFriends_SteamFriends013_LeaveClanChatRoom_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->LeaveClanChatRoom( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_GetClanChatMemberCount( void *args )
{
    struct ISteamFriends_SteamFriends013_GetClanChatMemberCount_params *params = (struct ISteamFriends_SteamFriends013_GetClanChatMemberCount_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetClanChatMemberCount( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_GetChatMemberByIndex( void *args )
{
    struct ISteamFriends_SteamFriends013_GetChatMemberByIndex_params *params = (struct ISteamFriends_SteamFriends013_GetChatMemberByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    *params->_ret = iface->GetChatMemberByIndex( params->steamIDClan, params->iUser );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_SendClanChatMessage( void *args )
{
    struct ISteamFriends_SteamFriends013_SendClanChatMessage_params *params = (struct ISteamFriends_SteamFriends013_SendClanChatMessage_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->SendClanChatMessage( params->steamIDClanChat, params->pchText );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_GetClanChatMessage( void *args )
{
    struct ISteamFriends_SteamFriends013_GetClanChatMessage_params *params = (struct ISteamFriends_SteamFriends013_GetClanChatMessage_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetClanChatMessage( params->steamIDClanChat, params->iMessage, params->prgchText, params->cchTextMax, params->_e, params->_f );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_IsClanChatAdmin( void *args )
{
    struct ISteamFriends_SteamFriends013_IsClanChatAdmin_params *params = (struct ISteamFriends_SteamFriends013_IsClanChatAdmin_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->IsClanChatAdmin( params->steamIDClanChat, params->steamIDUser );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_IsClanChatWindowOpenInSteam( void *args )
{
    struct ISteamFriends_SteamFriends013_IsClanChatWindowOpenInSteam_params *params = (struct ISteamFriends_SteamFriends013_IsClanChatWindowOpenInSteam_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->IsClanChatWindowOpenInSteam( params->steamIDClanChat );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_OpenClanChatWindowInSteam( void *args )
{
    struct ISteamFriends_SteamFriends013_OpenClanChatWindowInSteam_params *params = (struct ISteamFriends_SteamFriends013_OpenClanChatWindowInSteam_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->OpenClanChatWindowInSteam( params->steamIDClanChat );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_CloseClanChatWindowInSteam( void *args )
{
    struct ISteamFriends_SteamFriends013_CloseClanChatWindowInSteam_params *params = (struct ISteamFriends_SteamFriends013_CloseClanChatWindowInSteam_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->CloseClanChatWindowInSteam( params->steamIDClanChat );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_SetListenForFriendsMessages( void *args )
{
    struct ISteamFriends_SteamFriends013_SetListenForFriendsMessages_params *params = (struct ISteamFriends_SteamFriends013_SetListenForFriendsMessages_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->SetListenForFriendsMessages( params->bInterceptEnabled );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_ReplyToFriendMessage( void *args )
{
    struct ISteamFriends_SteamFriends013_ReplyToFriendMessage_params *params = (struct ISteamFriends_SteamFriends013_ReplyToFriendMessage_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->ReplyToFriendMessage( params->steamIDFriend, params->pchMsgToSend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_GetFriendMessage( void *args )
{
    struct ISteamFriends_SteamFriends013_GetFriendMessage_params *params = (struct ISteamFriends_SteamFriends013_GetFriendMessage_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetFriendMessage( params->steamIDFriend, params->iMessageID, params->pvData, params->cubData, params->peChatEntryType );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_GetFollowerCount( void *args )
{
    struct ISteamFriends_SteamFriends013_GetFollowerCount_params *params = (struct ISteamFriends_SteamFriends013_GetFollowerCount_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->GetFollowerCount( params->steamID );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_IsFollowing( void *args )
{
    struct ISteamFriends_SteamFriends013_IsFollowing_params *params = (struct ISteamFriends_SteamFriends013_IsFollowing_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->IsFollowing( params->steamID );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends013_EnumerateFollowingList( void *args )
{
    struct ISteamFriends_SteamFriends013_EnumerateFollowingList_params *params = (struct ISteamFriends_SteamFriends013_EnumerateFollowingList_params *)args;
    struct u_ISteamFriends_SteamFriends013 *iface = (struct u_ISteamFriends_SteamFriends013 *)params->linux_side;
    params->_ret = iface->EnumerateFollowingList( params->unStartIndex );
    return 0;
}

