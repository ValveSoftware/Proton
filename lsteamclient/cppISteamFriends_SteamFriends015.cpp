/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS ISteamFriends_SteamFriends015_GetPersonaName( void *args )
{
    struct ISteamFriends_SteamFriends015_GetPersonaName_params *params = (struct ISteamFriends_SteamFriends015_GetPersonaName_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->GetPersonaName(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_SetPersonaName( void *args )
{
    struct ISteamFriends_SteamFriends015_SetPersonaName_params *params = (struct ISteamFriends_SteamFriends015_SetPersonaName_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->SetPersonaName( params->pchPersonaName );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_GetPersonaState( void *args )
{
    struct ISteamFriends_SteamFriends015_GetPersonaState_params *params = (struct ISteamFriends_SteamFriends015_GetPersonaState_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->GetPersonaState(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_GetFriendCount( void *args )
{
    struct ISteamFriends_SteamFriends015_GetFriendCount_params *params = (struct ISteamFriends_SteamFriends015_GetFriendCount_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->GetFriendCount( params->iFriendFlags );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_GetFriendByIndex( void *args )
{
    struct ISteamFriends_SteamFriends015_GetFriendByIndex_params *params = (struct ISteamFriends_SteamFriends015_GetFriendByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    *params->_ret = iface->GetFriendByIndex( params->iFriend, params->iFriendFlags );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_GetFriendRelationship( void *args )
{
    struct ISteamFriends_SteamFriends015_GetFriendRelationship_params *params = (struct ISteamFriends_SteamFriends015_GetFriendRelationship_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->GetFriendRelationship( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_GetFriendPersonaState( void *args )
{
    struct ISteamFriends_SteamFriends015_GetFriendPersonaState_params *params = (struct ISteamFriends_SteamFriends015_GetFriendPersonaState_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaState( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_GetFriendPersonaName( void *args )
{
    struct ISteamFriends_SteamFriends015_GetFriendPersonaName_params *params = (struct ISteamFriends_SteamFriends015_GetFriendPersonaName_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaName( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_GetFriendGamePlayed( void *args )
{
    struct ISteamFriends_SteamFriends015_GetFriendGamePlayed_params *params = (struct ISteamFriends_SteamFriends015_GetFriendGamePlayed_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->GetFriendGamePlayed( params->steamIDFriend, params->pFriendGameInfo );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_GetFriendPersonaNameHistory( void *args )
{
    struct ISteamFriends_SteamFriends015_GetFriendPersonaNameHistory_params *params = (struct ISteamFriends_SteamFriends015_GetFriendPersonaNameHistory_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaNameHistory( params->steamIDFriend, params->iPersonaName );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_GetFriendSteamLevel( void *args )
{
    struct ISteamFriends_SteamFriends015_GetFriendSteamLevel_params *params = (struct ISteamFriends_SteamFriends015_GetFriendSteamLevel_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->GetFriendSteamLevel( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_GetPlayerNickname( void *args )
{
    struct ISteamFriends_SteamFriends015_GetPlayerNickname_params *params = (struct ISteamFriends_SteamFriends015_GetPlayerNickname_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->GetPlayerNickname( params->steamIDPlayer );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_GetFriendsGroupCount( void *args )
{
    struct ISteamFriends_SteamFriends015_GetFriendsGroupCount_params *params = (struct ISteamFriends_SteamFriends015_GetFriendsGroupCount_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->GetFriendsGroupCount(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_GetFriendsGroupIDByIndex( void *args )
{
    struct ISteamFriends_SteamFriends015_GetFriendsGroupIDByIndex_params *params = (struct ISteamFriends_SteamFriends015_GetFriendsGroupIDByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->GetFriendsGroupIDByIndex( params->iFG );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_GetFriendsGroupName( void *args )
{
    struct ISteamFriends_SteamFriends015_GetFriendsGroupName_params *params = (struct ISteamFriends_SteamFriends015_GetFriendsGroupName_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->GetFriendsGroupName( params->friendsGroupID );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_GetFriendsGroupMembersCount( void *args )
{
    struct ISteamFriends_SteamFriends015_GetFriendsGroupMembersCount_params *params = (struct ISteamFriends_SteamFriends015_GetFriendsGroupMembersCount_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->GetFriendsGroupMembersCount( params->friendsGroupID );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_GetFriendsGroupMembersList( void *args )
{
    struct ISteamFriends_SteamFriends015_GetFriendsGroupMembersList_params *params = (struct ISteamFriends_SteamFriends015_GetFriendsGroupMembersList_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    iface->GetFriendsGroupMembersList( params->friendsGroupID, params->pOutSteamIDMembers, params->nMembersCount );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_HasFriend( void *args )
{
    struct ISteamFriends_SteamFriends015_HasFriend_params *params = (struct ISteamFriends_SteamFriends015_HasFriend_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->HasFriend( params->steamIDFriend, params->iFriendFlags );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_GetClanCount( void *args )
{
    struct ISteamFriends_SteamFriends015_GetClanCount_params *params = (struct ISteamFriends_SteamFriends015_GetClanCount_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->GetClanCount(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_GetClanByIndex( void *args )
{
    struct ISteamFriends_SteamFriends015_GetClanByIndex_params *params = (struct ISteamFriends_SteamFriends015_GetClanByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    *params->_ret = iface->GetClanByIndex( params->iClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_GetClanName( void *args )
{
    struct ISteamFriends_SteamFriends015_GetClanName_params *params = (struct ISteamFriends_SteamFriends015_GetClanName_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->GetClanName( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_GetClanTag( void *args )
{
    struct ISteamFriends_SteamFriends015_GetClanTag_params *params = (struct ISteamFriends_SteamFriends015_GetClanTag_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->GetClanTag( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_GetClanActivityCounts( void *args )
{
    struct ISteamFriends_SteamFriends015_GetClanActivityCounts_params *params = (struct ISteamFriends_SteamFriends015_GetClanActivityCounts_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->GetClanActivityCounts( params->steamIDClan, params->pnOnline, params->pnInGame, params->pnChatting );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_DownloadClanActivityCounts( void *args )
{
    struct ISteamFriends_SteamFriends015_DownloadClanActivityCounts_params *params = (struct ISteamFriends_SteamFriends015_DownloadClanActivityCounts_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->DownloadClanActivityCounts( params->psteamIDClans, params->cClansToRequest );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_GetFriendCountFromSource( void *args )
{
    struct ISteamFriends_SteamFriends015_GetFriendCountFromSource_params *params = (struct ISteamFriends_SteamFriends015_GetFriendCountFromSource_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->GetFriendCountFromSource( params->steamIDSource );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_GetFriendFromSourceByIndex( void *args )
{
    struct ISteamFriends_SteamFriends015_GetFriendFromSourceByIndex_params *params = (struct ISteamFriends_SteamFriends015_GetFriendFromSourceByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    *params->_ret = iface->GetFriendFromSourceByIndex( params->steamIDSource, params->iFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_IsUserInSource( void *args )
{
    struct ISteamFriends_SteamFriends015_IsUserInSource_params *params = (struct ISteamFriends_SteamFriends015_IsUserInSource_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->IsUserInSource( params->steamIDUser, params->steamIDSource );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_SetInGameVoiceSpeaking( void *args )
{
    struct ISteamFriends_SteamFriends015_SetInGameVoiceSpeaking_params *params = (struct ISteamFriends_SteamFriends015_SetInGameVoiceSpeaking_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    iface->SetInGameVoiceSpeaking( params->steamIDUser, params->bSpeaking );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_ActivateGameOverlay( void *args )
{
    struct ISteamFriends_SteamFriends015_ActivateGameOverlay_params *params = (struct ISteamFriends_SteamFriends015_ActivateGameOverlay_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    iface->ActivateGameOverlay( params->pchDialog );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_ActivateGameOverlayToUser( void *args )
{
    struct ISteamFriends_SteamFriends015_ActivateGameOverlayToUser_params *params = (struct ISteamFriends_SteamFriends015_ActivateGameOverlayToUser_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    iface->ActivateGameOverlayToUser( params->pchDialog, params->steamID );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_ActivateGameOverlayToWebPage( void *args )
{
    struct ISteamFriends_SteamFriends015_ActivateGameOverlayToWebPage_params *params = (struct ISteamFriends_SteamFriends015_ActivateGameOverlayToWebPage_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    char *u_pchURL = steamclient_dos_to_unix_path( params->pchURL, 1 );
    iface->ActivateGameOverlayToWebPage( u_pchURL );
    steamclient_free_path( u_pchURL );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_ActivateGameOverlayToStore( void *args )
{
    struct ISteamFriends_SteamFriends015_ActivateGameOverlayToStore_params *params = (struct ISteamFriends_SteamFriends015_ActivateGameOverlayToStore_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    iface->ActivateGameOverlayToStore( params->nAppID, params->eFlag );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_SetPlayedWith( void *args )
{
    struct ISteamFriends_SteamFriends015_SetPlayedWith_params *params = (struct ISteamFriends_SteamFriends015_SetPlayedWith_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    iface->SetPlayedWith( params->steamIDUserPlayedWith );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_ActivateGameOverlayInviteDialog( void *args )
{
    struct ISteamFriends_SteamFriends015_ActivateGameOverlayInviteDialog_params *params = (struct ISteamFriends_SteamFriends015_ActivateGameOverlayInviteDialog_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    iface->ActivateGameOverlayInviteDialog( params->steamIDLobby );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_GetSmallFriendAvatar( void *args )
{
    struct ISteamFriends_SteamFriends015_GetSmallFriendAvatar_params *params = (struct ISteamFriends_SteamFriends015_GetSmallFriendAvatar_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->GetSmallFriendAvatar( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_GetMediumFriendAvatar( void *args )
{
    struct ISteamFriends_SteamFriends015_GetMediumFriendAvatar_params *params = (struct ISteamFriends_SteamFriends015_GetMediumFriendAvatar_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->GetMediumFriendAvatar( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_GetLargeFriendAvatar( void *args )
{
    struct ISteamFriends_SteamFriends015_GetLargeFriendAvatar_params *params = (struct ISteamFriends_SteamFriends015_GetLargeFriendAvatar_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->GetLargeFriendAvatar( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_RequestUserInformation( void *args )
{
    struct ISteamFriends_SteamFriends015_RequestUserInformation_params *params = (struct ISteamFriends_SteamFriends015_RequestUserInformation_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->RequestUserInformation( params->steamIDUser, params->bRequireNameOnly );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_RequestClanOfficerList( void *args )
{
    struct ISteamFriends_SteamFriends015_RequestClanOfficerList_params *params = (struct ISteamFriends_SteamFriends015_RequestClanOfficerList_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->RequestClanOfficerList( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_GetClanOwner( void *args )
{
    struct ISteamFriends_SteamFriends015_GetClanOwner_params *params = (struct ISteamFriends_SteamFriends015_GetClanOwner_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    *params->_ret = iface->GetClanOwner( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_GetClanOfficerCount( void *args )
{
    struct ISteamFriends_SteamFriends015_GetClanOfficerCount_params *params = (struct ISteamFriends_SteamFriends015_GetClanOfficerCount_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->GetClanOfficerCount( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_GetClanOfficerByIndex( void *args )
{
    struct ISteamFriends_SteamFriends015_GetClanOfficerByIndex_params *params = (struct ISteamFriends_SteamFriends015_GetClanOfficerByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    *params->_ret = iface->GetClanOfficerByIndex( params->steamIDClan, params->iOfficer );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_GetUserRestrictions( void *args )
{
    struct ISteamFriends_SteamFriends015_GetUserRestrictions_params *params = (struct ISteamFriends_SteamFriends015_GetUserRestrictions_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->GetUserRestrictions(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_SetRichPresence( void *args )
{
    struct ISteamFriends_SteamFriends015_SetRichPresence_params *params = (struct ISteamFriends_SteamFriends015_SetRichPresence_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->SetRichPresence( params->pchKey, params->pchValue );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_ClearRichPresence( void *args )
{
    struct ISteamFriends_SteamFriends015_ClearRichPresence_params *params = (struct ISteamFriends_SteamFriends015_ClearRichPresence_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    iface->ClearRichPresence(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_GetFriendRichPresence( void *args )
{
    struct ISteamFriends_SteamFriends015_GetFriendRichPresence_params *params = (struct ISteamFriends_SteamFriends015_GetFriendRichPresence_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->GetFriendRichPresence( params->steamIDFriend, params->pchKey );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_GetFriendRichPresenceKeyCount( void *args )
{
    struct ISteamFriends_SteamFriends015_GetFriendRichPresenceKeyCount_params *params = (struct ISteamFriends_SteamFriends015_GetFriendRichPresenceKeyCount_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->GetFriendRichPresenceKeyCount( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_GetFriendRichPresenceKeyByIndex( void *args )
{
    struct ISteamFriends_SteamFriends015_GetFriendRichPresenceKeyByIndex_params *params = (struct ISteamFriends_SteamFriends015_GetFriendRichPresenceKeyByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->GetFriendRichPresenceKeyByIndex( params->steamIDFriend, params->iKey );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_RequestFriendRichPresence( void *args )
{
    struct ISteamFriends_SteamFriends015_RequestFriendRichPresence_params *params = (struct ISteamFriends_SteamFriends015_RequestFriendRichPresence_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    iface->RequestFriendRichPresence( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_InviteUserToGame( void *args )
{
    struct ISteamFriends_SteamFriends015_InviteUserToGame_params *params = (struct ISteamFriends_SteamFriends015_InviteUserToGame_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->InviteUserToGame( params->steamIDFriend, params->pchConnectString );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_GetCoplayFriendCount( void *args )
{
    struct ISteamFriends_SteamFriends015_GetCoplayFriendCount_params *params = (struct ISteamFriends_SteamFriends015_GetCoplayFriendCount_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->GetCoplayFriendCount(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_GetCoplayFriend( void *args )
{
    struct ISteamFriends_SteamFriends015_GetCoplayFriend_params *params = (struct ISteamFriends_SteamFriends015_GetCoplayFriend_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    *params->_ret = iface->GetCoplayFriend( params->iCoplayFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_GetFriendCoplayTime( void *args )
{
    struct ISteamFriends_SteamFriends015_GetFriendCoplayTime_params *params = (struct ISteamFriends_SteamFriends015_GetFriendCoplayTime_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->GetFriendCoplayTime( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_GetFriendCoplayGame( void *args )
{
    struct ISteamFriends_SteamFriends015_GetFriendCoplayGame_params *params = (struct ISteamFriends_SteamFriends015_GetFriendCoplayGame_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->GetFriendCoplayGame( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_JoinClanChatRoom( void *args )
{
    struct ISteamFriends_SteamFriends015_JoinClanChatRoom_params *params = (struct ISteamFriends_SteamFriends015_JoinClanChatRoom_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->JoinClanChatRoom( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_LeaveClanChatRoom( void *args )
{
    struct ISteamFriends_SteamFriends015_LeaveClanChatRoom_params *params = (struct ISteamFriends_SteamFriends015_LeaveClanChatRoom_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->LeaveClanChatRoom( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_GetClanChatMemberCount( void *args )
{
    struct ISteamFriends_SteamFriends015_GetClanChatMemberCount_params *params = (struct ISteamFriends_SteamFriends015_GetClanChatMemberCount_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->GetClanChatMemberCount( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_GetChatMemberByIndex( void *args )
{
    struct ISteamFriends_SteamFriends015_GetChatMemberByIndex_params *params = (struct ISteamFriends_SteamFriends015_GetChatMemberByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    *params->_ret = iface->GetChatMemberByIndex( params->steamIDClan, params->iUser );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_SendClanChatMessage( void *args )
{
    struct ISteamFriends_SteamFriends015_SendClanChatMessage_params *params = (struct ISteamFriends_SteamFriends015_SendClanChatMessage_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->SendClanChatMessage( params->steamIDClanChat, params->pchText );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_GetClanChatMessage( void *args )
{
    struct ISteamFriends_SteamFriends015_GetClanChatMessage_params *params = (struct ISteamFriends_SteamFriends015_GetClanChatMessage_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->GetClanChatMessage( params->steamIDClanChat, params->iMessage, params->prgchText, params->cchTextMax, params->peChatEntryType, params->psteamidChatter );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_IsClanChatAdmin( void *args )
{
    struct ISteamFriends_SteamFriends015_IsClanChatAdmin_params *params = (struct ISteamFriends_SteamFriends015_IsClanChatAdmin_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->IsClanChatAdmin( params->steamIDClanChat, params->steamIDUser );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_IsClanChatWindowOpenInSteam( void *args )
{
    struct ISteamFriends_SteamFriends015_IsClanChatWindowOpenInSteam_params *params = (struct ISteamFriends_SteamFriends015_IsClanChatWindowOpenInSteam_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->IsClanChatWindowOpenInSteam( params->steamIDClanChat );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_OpenClanChatWindowInSteam( void *args )
{
    struct ISteamFriends_SteamFriends015_OpenClanChatWindowInSteam_params *params = (struct ISteamFriends_SteamFriends015_OpenClanChatWindowInSteam_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->OpenClanChatWindowInSteam( params->steamIDClanChat );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_CloseClanChatWindowInSteam( void *args )
{
    struct ISteamFriends_SteamFriends015_CloseClanChatWindowInSteam_params *params = (struct ISteamFriends_SteamFriends015_CloseClanChatWindowInSteam_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->CloseClanChatWindowInSteam( params->steamIDClanChat );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_SetListenForFriendsMessages( void *args )
{
    struct ISteamFriends_SteamFriends015_SetListenForFriendsMessages_params *params = (struct ISteamFriends_SteamFriends015_SetListenForFriendsMessages_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->SetListenForFriendsMessages( params->bInterceptEnabled );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_ReplyToFriendMessage( void *args )
{
    struct ISteamFriends_SteamFriends015_ReplyToFriendMessage_params *params = (struct ISteamFriends_SteamFriends015_ReplyToFriendMessage_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->ReplyToFriendMessage( params->steamIDFriend, params->pchMsgToSend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_GetFriendMessage( void *args )
{
    struct ISteamFriends_SteamFriends015_GetFriendMessage_params *params = (struct ISteamFriends_SteamFriends015_GetFriendMessage_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->GetFriendMessage( params->steamIDFriend, params->iMessageID, params->pvData, params->cubData, params->peChatEntryType );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_GetFollowerCount( void *args )
{
    struct ISteamFriends_SteamFriends015_GetFollowerCount_params *params = (struct ISteamFriends_SteamFriends015_GetFollowerCount_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->GetFollowerCount( params->steamID );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_IsFollowing( void *args )
{
    struct ISteamFriends_SteamFriends015_IsFollowing_params *params = (struct ISteamFriends_SteamFriends015_IsFollowing_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->IsFollowing( params->steamID );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_EnumerateFollowingList( void *args )
{
    struct ISteamFriends_SteamFriends015_EnumerateFollowingList_params *params = (struct ISteamFriends_SteamFriends015_EnumerateFollowingList_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->EnumerateFollowingList( params->unStartIndex );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_IsClanPublic( void *args )
{
    struct ISteamFriends_SteamFriends015_IsClanPublic_params *params = (struct ISteamFriends_SteamFriends015_IsClanPublic_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->IsClanPublic( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends015_IsClanOfficialGameGroup( void *args )
{
    struct ISteamFriends_SteamFriends015_IsClanOfficialGameGroup_params *params = (struct ISteamFriends_SteamFriends015_IsClanOfficialGameGroup_params *)args;
    struct u_ISteamFriends_SteamFriends015 *iface = (struct u_ISteamFriends_SteamFriends015 *)params->linux_side;
    params->_ret = iface->IsClanOfficialGameGroup( params->steamIDClan );
    return 0;
}

