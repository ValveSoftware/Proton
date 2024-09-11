/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS ISteamFriends_SteamFriends017_GetPersonaName( void *args )
{
    struct ISteamFriends_SteamFriends017_GetPersonaName_params *params = (struct ISteamFriends_SteamFriends017_GetPersonaName_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetPersonaName(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_SetPersonaName( void *args )
{
    struct ISteamFriends_SteamFriends017_SetPersonaName_params *params = (struct ISteamFriends_SteamFriends017_SetPersonaName_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->SetPersonaName( params->pchPersonaName );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_GetPersonaState( void *args )
{
    struct ISteamFriends_SteamFriends017_GetPersonaState_params *params = (struct ISteamFriends_SteamFriends017_GetPersonaState_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetPersonaState(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_GetFriendCount( void *args )
{
    struct ISteamFriends_SteamFriends017_GetFriendCount_params *params = (struct ISteamFriends_SteamFriends017_GetFriendCount_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetFriendCount( params->iFriendFlags );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_GetFriendByIndex( void *args )
{
    struct ISteamFriends_SteamFriends017_GetFriendByIndex_params *params = (struct ISteamFriends_SteamFriends017_GetFriendByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    *params->_ret = iface->GetFriendByIndex( params->iFriend, params->iFriendFlags );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_GetFriendRelationship( void *args )
{
    struct ISteamFriends_SteamFriends017_GetFriendRelationship_params *params = (struct ISteamFriends_SteamFriends017_GetFriendRelationship_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetFriendRelationship( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_GetFriendPersonaState( void *args )
{
    struct ISteamFriends_SteamFriends017_GetFriendPersonaState_params *params = (struct ISteamFriends_SteamFriends017_GetFriendPersonaState_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaState( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_GetFriendPersonaName( void *args )
{
    struct ISteamFriends_SteamFriends017_GetFriendPersonaName_params *params = (struct ISteamFriends_SteamFriends017_GetFriendPersonaName_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaName( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_GetFriendGamePlayed( void *args )
{
    struct ISteamFriends_SteamFriends017_GetFriendGamePlayed_params *params = (struct ISteamFriends_SteamFriends017_GetFriendGamePlayed_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetFriendGamePlayed( params->steamIDFriend, params->pFriendGameInfo );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_GetFriendPersonaNameHistory( void *args )
{
    struct ISteamFriends_SteamFriends017_GetFriendPersonaNameHistory_params *params = (struct ISteamFriends_SteamFriends017_GetFriendPersonaNameHistory_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaNameHistory( params->steamIDFriend, params->iPersonaName );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_GetFriendSteamLevel( void *args )
{
    struct ISteamFriends_SteamFriends017_GetFriendSteamLevel_params *params = (struct ISteamFriends_SteamFriends017_GetFriendSteamLevel_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetFriendSteamLevel( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_GetPlayerNickname( void *args )
{
    struct ISteamFriends_SteamFriends017_GetPlayerNickname_params *params = (struct ISteamFriends_SteamFriends017_GetPlayerNickname_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetPlayerNickname( params->steamIDPlayer );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_GetFriendsGroupCount( void *args )
{
    struct ISteamFriends_SteamFriends017_GetFriendsGroupCount_params *params = (struct ISteamFriends_SteamFriends017_GetFriendsGroupCount_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetFriendsGroupCount(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_GetFriendsGroupIDByIndex( void *args )
{
    struct ISteamFriends_SteamFriends017_GetFriendsGroupIDByIndex_params *params = (struct ISteamFriends_SteamFriends017_GetFriendsGroupIDByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetFriendsGroupIDByIndex( params->iFG );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_GetFriendsGroupName( void *args )
{
    struct ISteamFriends_SteamFriends017_GetFriendsGroupName_params *params = (struct ISteamFriends_SteamFriends017_GetFriendsGroupName_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetFriendsGroupName( params->friendsGroupID );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_GetFriendsGroupMembersCount( void *args )
{
    struct ISteamFriends_SteamFriends017_GetFriendsGroupMembersCount_params *params = (struct ISteamFriends_SteamFriends017_GetFriendsGroupMembersCount_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetFriendsGroupMembersCount( params->friendsGroupID );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_GetFriendsGroupMembersList( void *args )
{
    struct ISteamFriends_SteamFriends017_GetFriendsGroupMembersList_params *params = (struct ISteamFriends_SteamFriends017_GetFriendsGroupMembersList_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    iface->GetFriendsGroupMembersList( params->friendsGroupID, params->pOutSteamIDMembers, params->nMembersCount );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_HasFriend( void *args )
{
    struct ISteamFriends_SteamFriends017_HasFriend_params *params = (struct ISteamFriends_SteamFriends017_HasFriend_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->HasFriend( params->steamIDFriend, params->iFriendFlags );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_GetClanCount( void *args )
{
    struct ISteamFriends_SteamFriends017_GetClanCount_params *params = (struct ISteamFriends_SteamFriends017_GetClanCount_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetClanCount(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_GetClanByIndex( void *args )
{
    struct ISteamFriends_SteamFriends017_GetClanByIndex_params *params = (struct ISteamFriends_SteamFriends017_GetClanByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    *params->_ret = iface->GetClanByIndex( params->iClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_GetClanName( void *args )
{
    struct ISteamFriends_SteamFriends017_GetClanName_params *params = (struct ISteamFriends_SteamFriends017_GetClanName_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetClanName( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_GetClanTag( void *args )
{
    struct ISteamFriends_SteamFriends017_GetClanTag_params *params = (struct ISteamFriends_SteamFriends017_GetClanTag_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetClanTag( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_GetClanActivityCounts( void *args )
{
    struct ISteamFriends_SteamFriends017_GetClanActivityCounts_params *params = (struct ISteamFriends_SteamFriends017_GetClanActivityCounts_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetClanActivityCounts( params->steamIDClan, params->pnOnline, params->pnInGame, params->pnChatting );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_DownloadClanActivityCounts( void *args )
{
    struct ISteamFriends_SteamFriends017_DownloadClanActivityCounts_params *params = (struct ISteamFriends_SteamFriends017_DownloadClanActivityCounts_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->DownloadClanActivityCounts( params->psteamIDClans, params->cClansToRequest );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_GetFriendCountFromSource( void *args )
{
    struct ISteamFriends_SteamFriends017_GetFriendCountFromSource_params *params = (struct ISteamFriends_SteamFriends017_GetFriendCountFromSource_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetFriendCountFromSource( params->steamIDSource );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_GetFriendFromSourceByIndex( void *args )
{
    struct ISteamFriends_SteamFriends017_GetFriendFromSourceByIndex_params *params = (struct ISteamFriends_SteamFriends017_GetFriendFromSourceByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    *params->_ret = iface->GetFriendFromSourceByIndex( params->steamIDSource, params->iFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_IsUserInSource( void *args )
{
    struct ISteamFriends_SteamFriends017_IsUserInSource_params *params = (struct ISteamFriends_SteamFriends017_IsUserInSource_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->IsUserInSource( params->steamIDUser, params->steamIDSource );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_SetInGameVoiceSpeaking( void *args )
{
    struct ISteamFriends_SteamFriends017_SetInGameVoiceSpeaking_params *params = (struct ISteamFriends_SteamFriends017_SetInGameVoiceSpeaking_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    iface->SetInGameVoiceSpeaking( params->steamIDUser, params->bSpeaking );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_ActivateGameOverlay( void *args )
{
    struct ISteamFriends_SteamFriends017_ActivateGameOverlay_params *params = (struct ISteamFriends_SteamFriends017_ActivateGameOverlay_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    iface->ActivateGameOverlay( params->pchDialog );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_ActivateGameOverlayToUser( void *args )
{
    struct ISteamFriends_SteamFriends017_ActivateGameOverlayToUser_params *params = (struct ISteamFriends_SteamFriends017_ActivateGameOverlayToUser_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    iface->ActivateGameOverlayToUser( params->pchDialog, params->steamID );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_ActivateGameOverlayToWebPage( void *args )
{
    struct ISteamFriends_SteamFriends017_ActivateGameOverlayToWebPage_params *params = (struct ISteamFriends_SteamFriends017_ActivateGameOverlayToWebPage_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    char *u_pchURL = steamclient_dos_to_unix_path( params->pchURL, 1 );
    iface->ActivateGameOverlayToWebPage( u_pchURL, params->eMode );
    steamclient_free_path( u_pchURL );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_ActivateGameOverlayToStore( void *args )
{
    struct ISteamFriends_SteamFriends017_ActivateGameOverlayToStore_params *params = (struct ISteamFriends_SteamFriends017_ActivateGameOverlayToStore_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    iface->ActivateGameOverlayToStore( params->nAppID, params->eFlag );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_SetPlayedWith( void *args )
{
    struct ISteamFriends_SteamFriends017_SetPlayedWith_params *params = (struct ISteamFriends_SteamFriends017_SetPlayedWith_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    iface->SetPlayedWith( params->steamIDUserPlayedWith );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_ActivateGameOverlayInviteDialog( void *args )
{
    struct ISteamFriends_SteamFriends017_ActivateGameOverlayInviteDialog_params *params = (struct ISteamFriends_SteamFriends017_ActivateGameOverlayInviteDialog_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    iface->ActivateGameOverlayInviteDialog( params->steamIDLobby );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_GetSmallFriendAvatar( void *args )
{
    struct ISteamFriends_SteamFriends017_GetSmallFriendAvatar_params *params = (struct ISteamFriends_SteamFriends017_GetSmallFriendAvatar_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetSmallFriendAvatar( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_GetMediumFriendAvatar( void *args )
{
    struct ISteamFriends_SteamFriends017_GetMediumFriendAvatar_params *params = (struct ISteamFriends_SteamFriends017_GetMediumFriendAvatar_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetMediumFriendAvatar( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_GetLargeFriendAvatar( void *args )
{
    struct ISteamFriends_SteamFriends017_GetLargeFriendAvatar_params *params = (struct ISteamFriends_SteamFriends017_GetLargeFriendAvatar_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetLargeFriendAvatar( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_RequestUserInformation( void *args )
{
    struct ISteamFriends_SteamFriends017_RequestUserInformation_params *params = (struct ISteamFriends_SteamFriends017_RequestUserInformation_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->RequestUserInformation( params->steamIDUser, params->bRequireNameOnly );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_RequestClanOfficerList( void *args )
{
    struct ISteamFriends_SteamFriends017_RequestClanOfficerList_params *params = (struct ISteamFriends_SteamFriends017_RequestClanOfficerList_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->RequestClanOfficerList( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_GetClanOwner( void *args )
{
    struct ISteamFriends_SteamFriends017_GetClanOwner_params *params = (struct ISteamFriends_SteamFriends017_GetClanOwner_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    *params->_ret = iface->GetClanOwner( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_GetClanOfficerCount( void *args )
{
    struct ISteamFriends_SteamFriends017_GetClanOfficerCount_params *params = (struct ISteamFriends_SteamFriends017_GetClanOfficerCount_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetClanOfficerCount( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_GetClanOfficerByIndex( void *args )
{
    struct ISteamFriends_SteamFriends017_GetClanOfficerByIndex_params *params = (struct ISteamFriends_SteamFriends017_GetClanOfficerByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    *params->_ret = iface->GetClanOfficerByIndex( params->steamIDClan, params->iOfficer );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_GetUserRestrictions( void *args )
{
    struct ISteamFriends_SteamFriends017_GetUserRestrictions_params *params = (struct ISteamFriends_SteamFriends017_GetUserRestrictions_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetUserRestrictions(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_SetRichPresence( void *args )
{
    struct ISteamFriends_SteamFriends017_SetRichPresence_params *params = (struct ISteamFriends_SteamFriends017_SetRichPresence_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->SetRichPresence( params->pchKey, params->pchValue );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_ClearRichPresence( void *args )
{
    struct ISteamFriends_SteamFriends017_ClearRichPresence_params *params = (struct ISteamFriends_SteamFriends017_ClearRichPresence_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    iface->ClearRichPresence(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_GetFriendRichPresence( void *args )
{
    struct ISteamFriends_SteamFriends017_GetFriendRichPresence_params *params = (struct ISteamFriends_SteamFriends017_GetFriendRichPresence_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetFriendRichPresence( params->steamIDFriend, params->pchKey );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_GetFriendRichPresenceKeyCount( void *args )
{
    struct ISteamFriends_SteamFriends017_GetFriendRichPresenceKeyCount_params *params = (struct ISteamFriends_SteamFriends017_GetFriendRichPresenceKeyCount_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetFriendRichPresenceKeyCount( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_GetFriendRichPresenceKeyByIndex( void *args )
{
    struct ISteamFriends_SteamFriends017_GetFriendRichPresenceKeyByIndex_params *params = (struct ISteamFriends_SteamFriends017_GetFriendRichPresenceKeyByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetFriendRichPresenceKeyByIndex( params->steamIDFriend, params->iKey );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_RequestFriendRichPresence( void *args )
{
    struct ISteamFriends_SteamFriends017_RequestFriendRichPresence_params *params = (struct ISteamFriends_SteamFriends017_RequestFriendRichPresence_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    iface->RequestFriendRichPresence( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_InviteUserToGame( void *args )
{
    struct ISteamFriends_SteamFriends017_InviteUserToGame_params *params = (struct ISteamFriends_SteamFriends017_InviteUserToGame_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->InviteUserToGame( params->steamIDFriend, params->pchConnectString );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_GetCoplayFriendCount( void *args )
{
    struct ISteamFriends_SteamFriends017_GetCoplayFriendCount_params *params = (struct ISteamFriends_SteamFriends017_GetCoplayFriendCount_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetCoplayFriendCount(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_GetCoplayFriend( void *args )
{
    struct ISteamFriends_SteamFriends017_GetCoplayFriend_params *params = (struct ISteamFriends_SteamFriends017_GetCoplayFriend_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    *params->_ret = iface->GetCoplayFriend( params->iCoplayFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_GetFriendCoplayTime( void *args )
{
    struct ISteamFriends_SteamFriends017_GetFriendCoplayTime_params *params = (struct ISteamFriends_SteamFriends017_GetFriendCoplayTime_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetFriendCoplayTime( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_GetFriendCoplayGame( void *args )
{
    struct ISteamFriends_SteamFriends017_GetFriendCoplayGame_params *params = (struct ISteamFriends_SteamFriends017_GetFriendCoplayGame_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetFriendCoplayGame( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_JoinClanChatRoom( void *args )
{
    struct ISteamFriends_SteamFriends017_JoinClanChatRoom_params *params = (struct ISteamFriends_SteamFriends017_JoinClanChatRoom_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->JoinClanChatRoom( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_LeaveClanChatRoom( void *args )
{
    struct ISteamFriends_SteamFriends017_LeaveClanChatRoom_params *params = (struct ISteamFriends_SteamFriends017_LeaveClanChatRoom_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->LeaveClanChatRoom( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_GetClanChatMemberCount( void *args )
{
    struct ISteamFriends_SteamFriends017_GetClanChatMemberCount_params *params = (struct ISteamFriends_SteamFriends017_GetClanChatMemberCount_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetClanChatMemberCount( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_GetChatMemberByIndex( void *args )
{
    struct ISteamFriends_SteamFriends017_GetChatMemberByIndex_params *params = (struct ISteamFriends_SteamFriends017_GetChatMemberByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    *params->_ret = iface->GetChatMemberByIndex( params->steamIDClan, params->iUser );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_SendClanChatMessage( void *args )
{
    struct ISteamFriends_SteamFriends017_SendClanChatMessage_params *params = (struct ISteamFriends_SteamFriends017_SendClanChatMessage_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->SendClanChatMessage( params->steamIDClanChat, params->pchText );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_GetClanChatMessage( void *args )
{
    struct ISteamFriends_SteamFriends017_GetClanChatMessage_params *params = (struct ISteamFriends_SteamFriends017_GetClanChatMessage_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetClanChatMessage( params->steamIDClanChat, params->iMessage, params->prgchText, params->cchTextMax, params->peChatEntryType, params->psteamidChatter );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_IsClanChatAdmin( void *args )
{
    struct ISteamFriends_SteamFriends017_IsClanChatAdmin_params *params = (struct ISteamFriends_SteamFriends017_IsClanChatAdmin_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->IsClanChatAdmin( params->steamIDClanChat, params->steamIDUser );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_IsClanChatWindowOpenInSteam( void *args )
{
    struct ISteamFriends_SteamFriends017_IsClanChatWindowOpenInSteam_params *params = (struct ISteamFriends_SteamFriends017_IsClanChatWindowOpenInSteam_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->IsClanChatWindowOpenInSteam( params->steamIDClanChat );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_OpenClanChatWindowInSteam( void *args )
{
    struct ISteamFriends_SteamFriends017_OpenClanChatWindowInSteam_params *params = (struct ISteamFriends_SteamFriends017_OpenClanChatWindowInSteam_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->OpenClanChatWindowInSteam( params->steamIDClanChat );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_CloseClanChatWindowInSteam( void *args )
{
    struct ISteamFriends_SteamFriends017_CloseClanChatWindowInSteam_params *params = (struct ISteamFriends_SteamFriends017_CloseClanChatWindowInSteam_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->CloseClanChatWindowInSteam( params->steamIDClanChat );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_SetListenForFriendsMessages( void *args )
{
    struct ISteamFriends_SteamFriends017_SetListenForFriendsMessages_params *params = (struct ISteamFriends_SteamFriends017_SetListenForFriendsMessages_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->SetListenForFriendsMessages( params->bInterceptEnabled );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_ReplyToFriendMessage( void *args )
{
    struct ISteamFriends_SteamFriends017_ReplyToFriendMessage_params *params = (struct ISteamFriends_SteamFriends017_ReplyToFriendMessage_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->ReplyToFriendMessage( params->steamIDFriend, params->pchMsgToSend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_GetFriendMessage( void *args )
{
    struct ISteamFriends_SteamFriends017_GetFriendMessage_params *params = (struct ISteamFriends_SteamFriends017_GetFriendMessage_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetFriendMessage( params->steamIDFriend, params->iMessageID, params->pvData, params->cubData, params->peChatEntryType );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_GetFollowerCount( void *args )
{
    struct ISteamFriends_SteamFriends017_GetFollowerCount_params *params = (struct ISteamFriends_SteamFriends017_GetFollowerCount_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetFollowerCount( params->steamID );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_IsFollowing( void *args )
{
    struct ISteamFriends_SteamFriends017_IsFollowing_params *params = (struct ISteamFriends_SteamFriends017_IsFollowing_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->IsFollowing( params->steamID );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_EnumerateFollowingList( void *args )
{
    struct ISteamFriends_SteamFriends017_EnumerateFollowingList_params *params = (struct ISteamFriends_SteamFriends017_EnumerateFollowingList_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->EnumerateFollowingList( params->unStartIndex );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_IsClanPublic( void *args )
{
    struct ISteamFriends_SteamFriends017_IsClanPublic_params *params = (struct ISteamFriends_SteamFriends017_IsClanPublic_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->IsClanPublic( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_IsClanOfficialGameGroup( void *args )
{
    struct ISteamFriends_SteamFriends017_IsClanOfficialGameGroup_params *params = (struct ISteamFriends_SteamFriends017_IsClanOfficialGameGroup_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->IsClanOfficialGameGroup( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_GetNumChatsWithUnreadPriorityMessages( void *args )
{
    struct ISteamFriends_SteamFriends017_GetNumChatsWithUnreadPriorityMessages_params *params = (struct ISteamFriends_SteamFriends017_GetNumChatsWithUnreadPriorityMessages_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetNumChatsWithUnreadPriorityMessages(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_ActivateGameOverlayRemotePlayTogetherInviteDialog( void *args )
{
    struct ISteamFriends_SteamFriends017_ActivateGameOverlayRemotePlayTogetherInviteDialog_params *params = (struct ISteamFriends_SteamFriends017_ActivateGameOverlayRemotePlayTogetherInviteDialog_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    iface->ActivateGameOverlayRemotePlayTogetherInviteDialog( params->steamIDLobby );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_RegisterProtocolInOverlayBrowser( void *args )
{
    struct ISteamFriends_SteamFriends017_RegisterProtocolInOverlayBrowser_params *params = (struct ISteamFriends_SteamFriends017_RegisterProtocolInOverlayBrowser_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->RegisterProtocolInOverlayBrowser( params->pchProtocol );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_ActivateGameOverlayInviteDialogConnectString( void *args )
{
    struct ISteamFriends_SteamFriends017_ActivateGameOverlayInviteDialogConnectString_params *params = (struct ISteamFriends_SteamFriends017_ActivateGameOverlayInviteDialogConnectString_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    iface->ActivateGameOverlayInviteDialogConnectString( params->pchConnectString );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_RequestEquippedProfileItems( void *args )
{
    struct ISteamFriends_SteamFriends017_RequestEquippedProfileItems_params *params = (struct ISteamFriends_SteamFriends017_RequestEquippedProfileItems_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->RequestEquippedProfileItems( params->steamID );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_BHasEquippedProfileItem( void *args )
{
    struct ISteamFriends_SteamFriends017_BHasEquippedProfileItem_params *params = (struct ISteamFriends_SteamFriends017_BHasEquippedProfileItem_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->BHasEquippedProfileItem( params->steamID, params->itemType );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_GetProfileItemPropertyString( void *args )
{
    struct ISteamFriends_SteamFriends017_GetProfileItemPropertyString_params *params = (struct ISteamFriends_SteamFriends017_GetProfileItemPropertyString_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetProfileItemPropertyString( params->steamID, params->itemType, params->prop );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends017_GetProfileItemPropertyUint( void *args )
{
    struct ISteamFriends_SteamFriends017_GetProfileItemPropertyUint_params *params = (struct ISteamFriends_SteamFriends017_GetProfileItemPropertyUint_params *)args;
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetProfileItemPropertyUint( params->steamID, params->itemType, params->prop );
    return 0;
}

