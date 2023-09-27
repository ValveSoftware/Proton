#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_142/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_142
#include "struct_converters.h"
#include "cppISteamFriends_SteamFriends015.h"
void cppISteamFriends_SteamFriends015_GetPersonaName( struct cppISteamFriends_SteamFriends015_GetPersonaName_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetPersonaName(  );
}

void cppISteamFriends_SteamFriends015_SetPersonaName( struct cppISteamFriends_SteamFriends015_SetPersonaName_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->SetPersonaName( (const char *)params->pchPersonaName );
}

void cppISteamFriends_SteamFriends015_GetPersonaState( struct cppISteamFriends_SteamFriends015_GetPersonaState_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetPersonaState(  );
}

void cppISteamFriends_SteamFriends015_GetFriendCount( struct cppISteamFriends_SteamFriends015_GetFriendCount_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendCount( (int)params->iFriendFlags );
}

void cppISteamFriends_SteamFriends015_GetFriendByIndex( struct cppISteamFriends_SteamFriends015_GetFriendByIndex_params *params )
{
    *params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendByIndex( (int)params->iFriend, (int)params->iFriendFlags );
}

void cppISteamFriends_SteamFriends015_GetFriendRelationship( struct cppISteamFriends_SteamFriends015_GetFriendRelationship_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendRelationship( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends015_GetFriendPersonaState( struct cppISteamFriends_SteamFriends015_GetFriendPersonaState_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendPersonaState( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends015_GetFriendPersonaName( struct cppISteamFriends_SteamFriends015_GetFriendPersonaName_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendPersonaName( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends015_GetFriendGamePlayed( struct cppISteamFriends_SteamFriends015_GetFriendGamePlayed_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendGamePlayed( (CSteamID)params->steamIDFriend, (FriendGameInfo_t *)params->pFriendGameInfo );
}

void cppISteamFriends_SteamFriends015_GetFriendPersonaNameHistory( struct cppISteamFriends_SteamFriends015_GetFriendPersonaNameHistory_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendPersonaNameHistory( (CSteamID)params->steamIDFriend, (int)params->iPersonaName );
}

void cppISteamFriends_SteamFriends015_GetFriendSteamLevel( struct cppISteamFriends_SteamFriends015_GetFriendSteamLevel_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendSteamLevel( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends015_GetPlayerNickname( struct cppISteamFriends_SteamFriends015_GetPlayerNickname_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetPlayerNickname( (CSteamID)params->steamIDPlayer );
}

void cppISteamFriends_SteamFriends015_GetFriendsGroupCount( struct cppISteamFriends_SteamFriends015_GetFriendsGroupCount_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendsGroupCount(  );
}

void cppISteamFriends_SteamFriends015_GetFriendsGroupIDByIndex( struct cppISteamFriends_SteamFriends015_GetFriendsGroupIDByIndex_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendsGroupIDByIndex( (int)params->iFG );
}

void cppISteamFriends_SteamFriends015_GetFriendsGroupName( struct cppISteamFriends_SteamFriends015_GetFriendsGroupName_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendsGroupName( (FriendsGroupID_t)params->friendsGroupID );
}

void cppISteamFriends_SteamFriends015_GetFriendsGroupMembersCount( struct cppISteamFriends_SteamFriends015_GetFriendsGroupMembersCount_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendsGroupMembersCount( (FriendsGroupID_t)params->friendsGroupID );
}

void cppISteamFriends_SteamFriends015_GetFriendsGroupMembersList( struct cppISteamFriends_SteamFriends015_GetFriendsGroupMembersList_params *params )
{
    ((ISteamFriends*)params->linux_side)->GetFriendsGroupMembersList( (FriendsGroupID_t)params->friendsGroupID, (CSteamID *)params->pOutSteamIDMembers, (int)params->nMembersCount );
}

void cppISteamFriends_SteamFriends015_HasFriend( struct cppISteamFriends_SteamFriends015_HasFriend_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->HasFriend( (CSteamID)params->steamIDFriend, (int)params->iFriendFlags );
}

void cppISteamFriends_SteamFriends015_GetClanCount( struct cppISteamFriends_SteamFriends015_GetClanCount_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetClanCount(  );
}

void cppISteamFriends_SteamFriends015_GetClanByIndex( struct cppISteamFriends_SteamFriends015_GetClanByIndex_params *params )
{
    *params->_ret = ((ISteamFriends*)params->linux_side)->GetClanByIndex( (int)params->iClan );
}

void cppISteamFriends_SteamFriends015_GetClanName( struct cppISteamFriends_SteamFriends015_GetClanName_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetClanName( (CSteamID)params->steamIDClan );
}

void cppISteamFriends_SteamFriends015_GetClanTag( struct cppISteamFriends_SteamFriends015_GetClanTag_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetClanTag( (CSteamID)params->steamIDClan );
}

void cppISteamFriends_SteamFriends015_GetClanActivityCounts( struct cppISteamFriends_SteamFriends015_GetClanActivityCounts_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetClanActivityCounts( (CSteamID)params->steamIDClan, (int *)params->pnOnline, (int *)params->pnInGame, (int *)params->pnChatting );
}

void cppISteamFriends_SteamFriends015_DownloadClanActivityCounts( struct cppISteamFriends_SteamFriends015_DownloadClanActivityCounts_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->DownloadClanActivityCounts( (CSteamID *)params->psteamIDClans, (int)params->cClansToRequest );
}

void cppISteamFriends_SteamFriends015_GetFriendCountFromSource( struct cppISteamFriends_SteamFriends015_GetFriendCountFromSource_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendCountFromSource( (CSteamID)params->steamIDSource );
}

void cppISteamFriends_SteamFriends015_GetFriendFromSourceByIndex( struct cppISteamFriends_SteamFriends015_GetFriendFromSourceByIndex_params *params )
{
    *params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendFromSourceByIndex( (CSteamID)params->steamIDSource, (int)params->iFriend );
}

void cppISteamFriends_SteamFriends015_IsUserInSource( struct cppISteamFriends_SteamFriends015_IsUserInSource_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->IsUserInSource( (CSteamID)params->steamIDUser, (CSteamID)params->steamIDSource );
}

void cppISteamFriends_SteamFriends015_SetInGameVoiceSpeaking( struct cppISteamFriends_SteamFriends015_SetInGameVoiceSpeaking_params *params )
{
    ((ISteamFriends*)params->linux_side)->SetInGameVoiceSpeaking( (CSteamID)params->steamIDUser, (bool)params->bSpeaking );
}

void cppISteamFriends_SteamFriends015_ActivateGameOverlay( struct cppISteamFriends_SteamFriends015_ActivateGameOverlay_params *params )
{
    ((ISteamFriends*)params->linux_side)->ActivateGameOverlay( (const char *)params->pchDialog );
}

void cppISteamFriends_SteamFriends015_ActivateGameOverlayToUser( struct cppISteamFriends_SteamFriends015_ActivateGameOverlayToUser_params *params )
{
    ((ISteamFriends*)params->linux_side)->ActivateGameOverlayToUser( (const char *)params->pchDialog, (CSteamID)params->steamID );
}

void cppISteamFriends_SteamFriends015_ActivateGameOverlayToWebPage( struct cppISteamFriends_SteamFriends015_ActivateGameOverlayToWebPage_params *params )
{
    ((ISteamFriends*)params->linux_side)->ActivateGameOverlayToWebPage( (const char *)params->pchURL );
}

void cppISteamFriends_SteamFriends015_ActivateGameOverlayToStore( struct cppISteamFriends_SteamFriends015_ActivateGameOverlayToStore_params *params )
{
    ((ISteamFriends*)params->linux_side)->ActivateGameOverlayToStore( (AppId_t)params->nAppID, (EOverlayToStoreFlag)params->eFlag );
}

void cppISteamFriends_SteamFriends015_SetPlayedWith( struct cppISteamFriends_SteamFriends015_SetPlayedWith_params *params )
{
    ((ISteamFriends*)params->linux_side)->SetPlayedWith( (CSteamID)params->steamIDUserPlayedWith );
}

void cppISteamFriends_SteamFriends015_ActivateGameOverlayInviteDialog( struct cppISteamFriends_SteamFriends015_ActivateGameOverlayInviteDialog_params *params )
{
    ((ISteamFriends*)params->linux_side)->ActivateGameOverlayInviteDialog( (CSteamID)params->steamIDLobby );
}

void cppISteamFriends_SteamFriends015_GetSmallFriendAvatar( struct cppISteamFriends_SteamFriends015_GetSmallFriendAvatar_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetSmallFriendAvatar( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends015_GetMediumFriendAvatar( struct cppISteamFriends_SteamFriends015_GetMediumFriendAvatar_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetMediumFriendAvatar( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends015_GetLargeFriendAvatar( struct cppISteamFriends_SteamFriends015_GetLargeFriendAvatar_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetLargeFriendAvatar( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends015_RequestUserInformation( struct cppISteamFriends_SteamFriends015_RequestUserInformation_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->RequestUserInformation( (CSteamID)params->steamIDUser, (bool)params->bRequireNameOnly );
}

void cppISteamFriends_SteamFriends015_RequestClanOfficerList( struct cppISteamFriends_SteamFriends015_RequestClanOfficerList_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->RequestClanOfficerList( (CSteamID)params->steamIDClan );
}

void cppISteamFriends_SteamFriends015_GetClanOwner( struct cppISteamFriends_SteamFriends015_GetClanOwner_params *params )
{
    *params->_ret = ((ISteamFriends*)params->linux_side)->GetClanOwner( (CSteamID)params->steamIDClan );
}

void cppISteamFriends_SteamFriends015_GetClanOfficerCount( struct cppISteamFriends_SteamFriends015_GetClanOfficerCount_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetClanOfficerCount( (CSteamID)params->steamIDClan );
}

void cppISteamFriends_SteamFriends015_GetClanOfficerByIndex( struct cppISteamFriends_SteamFriends015_GetClanOfficerByIndex_params *params )
{
    *params->_ret = ((ISteamFriends*)params->linux_side)->GetClanOfficerByIndex( (CSteamID)params->steamIDClan, (int)params->iOfficer );
}

void cppISteamFriends_SteamFriends015_GetUserRestrictions( struct cppISteamFriends_SteamFriends015_GetUserRestrictions_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetUserRestrictions(  );
}

void cppISteamFriends_SteamFriends015_SetRichPresence( struct cppISteamFriends_SteamFriends015_SetRichPresence_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->SetRichPresence( (const char *)params->pchKey, (const char *)params->pchValue );
}

void cppISteamFriends_SteamFriends015_ClearRichPresence( struct cppISteamFriends_SteamFriends015_ClearRichPresence_params *params )
{
    ((ISteamFriends*)params->linux_side)->ClearRichPresence(  );
}

void cppISteamFriends_SteamFriends015_GetFriendRichPresence( struct cppISteamFriends_SteamFriends015_GetFriendRichPresence_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendRichPresence( (CSteamID)params->steamIDFriend, (const char *)params->pchKey );
}

void cppISteamFriends_SteamFriends015_GetFriendRichPresenceKeyCount( struct cppISteamFriends_SteamFriends015_GetFriendRichPresenceKeyCount_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendRichPresenceKeyCount( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends015_GetFriendRichPresenceKeyByIndex( struct cppISteamFriends_SteamFriends015_GetFriendRichPresenceKeyByIndex_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendRichPresenceKeyByIndex( (CSteamID)params->steamIDFriend, (int)params->iKey );
}

void cppISteamFriends_SteamFriends015_RequestFriendRichPresence( struct cppISteamFriends_SteamFriends015_RequestFriendRichPresence_params *params )
{
    ((ISteamFriends*)params->linux_side)->RequestFriendRichPresence( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends015_InviteUserToGame( struct cppISteamFriends_SteamFriends015_InviteUserToGame_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->InviteUserToGame( (CSteamID)params->steamIDFriend, (const char *)params->pchConnectString );
}

void cppISteamFriends_SteamFriends015_GetCoplayFriendCount( struct cppISteamFriends_SteamFriends015_GetCoplayFriendCount_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetCoplayFriendCount(  );
}

void cppISteamFriends_SteamFriends015_GetCoplayFriend( struct cppISteamFriends_SteamFriends015_GetCoplayFriend_params *params )
{
    *params->_ret = ((ISteamFriends*)params->linux_side)->GetCoplayFriend( (int)params->iCoplayFriend );
}

void cppISteamFriends_SteamFriends015_GetFriendCoplayTime( struct cppISteamFriends_SteamFriends015_GetFriendCoplayTime_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendCoplayTime( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends015_GetFriendCoplayGame( struct cppISteamFriends_SteamFriends015_GetFriendCoplayGame_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendCoplayGame( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends015_JoinClanChatRoom( struct cppISteamFriends_SteamFriends015_JoinClanChatRoom_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->JoinClanChatRoom( (CSteamID)params->steamIDClan );
}

void cppISteamFriends_SteamFriends015_LeaveClanChatRoom( struct cppISteamFriends_SteamFriends015_LeaveClanChatRoom_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->LeaveClanChatRoom( (CSteamID)params->steamIDClan );
}

void cppISteamFriends_SteamFriends015_GetClanChatMemberCount( struct cppISteamFriends_SteamFriends015_GetClanChatMemberCount_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetClanChatMemberCount( (CSteamID)params->steamIDClan );
}

void cppISteamFriends_SteamFriends015_GetChatMemberByIndex( struct cppISteamFriends_SteamFriends015_GetChatMemberByIndex_params *params )
{
    *params->_ret = ((ISteamFriends*)params->linux_side)->GetChatMemberByIndex( (CSteamID)params->steamIDClan, (int)params->iUser );
}

void cppISteamFriends_SteamFriends015_SendClanChatMessage( struct cppISteamFriends_SteamFriends015_SendClanChatMessage_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->SendClanChatMessage( (CSteamID)params->steamIDClanChat, (const char *)params->pchText );
}

void cppISteamFriends_SteamFriends015_GetClanChatMessage( struct cppISteamFriends_SteamFriends015_GetClanChatMessage_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetClanChatMessage( (CSteamID)params->steamIDClanChat, (int)params->iMessage, (void *)params->prgchText, (int)params->cchTextMax, (EChatEntryType *)params->peChatEntryType, (CSteamID *)params->psteamidChatter );
}

void cppISteamFriends_SteamFriends015_IsClanChatAdmin( struct cppISteamFriends_SteamFriends015_IsClanChatAdmin_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->IsClanChatAdmin( (CSteamID)params->steamIDClanChat, (CSteamID)params->steamIDUser );
}

void cppISteamFriends_SteamFriends015_IsClanChatWindowOpenInSteam( struct cppISteamFriends_SteamFriends015_IsClanChatWindowOpenInSteam_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->IsClanChatWindowOpenInSteam( (CSteamID)params->steamIDClanChat );
}

void cppISteamFriends_SteamFriends015_OpenClanChatWindowInSteam( struct cppISteamFriends_SteamFriends015_OpenClanChatWindowInSteam_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->OpenClanChatWindowInSteam( (CSteamID)params->steamIDClanChat );
}

void cppISteamFriends_SteamFriends015_CloseClanChatWindowInSteam( struct cppISteamFriends_SteamFriends015_CloseClanChatWindowInSteam_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->CloseClanChatWindowInSteam( (CSteamID)params->steamIDClanChat );
}

void cppISteamFriends_SteamFriends015_SetListenForFriendsMessages( struct cppISteamFriends_SteamFriends015_SetListenForFriendsMessages_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->SetListenForFriendsMessages( (bool)params->bInterceptEnabled );
}

void cppISteamFriends_SteamFriends015_ReplyToFriendMessage( struct cppISteamFriends_SteamFriends015_ReplyToFriendMessage_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->ReplyToFriendMessage( (CSteamID)params->steamIDFriend, (const char *)params->pchMsgToSend );
}

void cppISteamFriends_SteamFriends015_GetFriendMessage( struct cppISteamFriends_SteamFriends015_GetFriendMessage_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendMessage( (CSteamID)params->steamIDFriend, (int)params->iMessageID, (void *)params->pvData, (int)params->cubData, (EChatEntryType *)params->peChatEntryType );
}

void cppISteamFriends_SteamFriends015_GetFollowerCount( struct cppISteamFriends_SteamFriends015_GetFollowerCount_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFollowerCount( (CSteamID)params->steamID );
}

void cppISteamFriends_SteamFriends015_IsFollowing( struct cppISteamFriends_SteamFriends015_IsFollowing_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->IsFollowing( (CSteamID)params->steamID );
}

void cppISteamFriends_SteamFriends015_EnumerateFollowingList( struct cppISteamFriends_SteamFriends015_EnumerateFollowingList_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->EnumerateFollowingList( (uint32)params->unStartIndex );
}

void cppISteamFriends_SteamFriends015_IsClanPublic( struct cppISteamFriends_SteamFriends015_IsClanPublic_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->IsClanPublic( (CSteamID)params->steamIDClan );
}

void cppISteamFriends_SteamFriends015_IsClanOfficialGameGroup( struct cppISteamFriends_SteamFriends015_IsClanOfficialGameGroup_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->IsClanOfficialGameGroup( (CSteamID)params->steamIDClan );
}

#ifdef __cplusplus
}
#endif
