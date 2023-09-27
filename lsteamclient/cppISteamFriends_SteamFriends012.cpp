#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_119x/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_119x
#include "struct_converters.h"
#include "cppISteamFriends_SteamFriends012.h"
void cppISteamFriends_SteamFriends012_GetPersonaName( struct cppISteamFriends_SteamFriends012_GetPersonaName_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetPersonaName(  );
}

void cppISteamFriends_SteamFriends012_SetPersonaName( struct cppISteamFriends_SteamFriends012_SetPersonaName_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->SetPersonaName( (const char *)params->pchPersonaName );
}

void cppISteamFriends_SteamFriends012_GetPersonaState( struct cppISteamFriends_SteamFriends012_GetPersonaState_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetPersonaState(  );
}

void cppISteamFriends_SteamFriends012_GetFriendCount( struct cppISteamFriends_SteamFriends012_GetFriendCount_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendCount( (int)params->iFriendFlags );
}

void cppISteamFriends_SteamFriends012_GetFriendByIndex( struct cppISteamFriends_SteamFriends012_GetFriendByIndex_params *params )
{
    *params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendByIndex( (int)params->iFriend, (int)params->iFriendFlags );
}

void cppISteamFriends_SteamFriends012_GetFriendRelationship( struct cppISteamFriends_SteamFriends012_GetFriendRelationship_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendRelationship( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends012_GetFriendPersonaState( struct cppISteamFriends_SteamFriends012_GetFriendPersonaState_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendPersonaState( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends012_GetFriendPersonaName( struct cppISteamFriends_SteamFriends012_GetFriendPersonaName_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendPersonaName( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends012_GetFriendGamePlayed( struct cppISteamFriends_SteamFriends012_GetFriendGamePlayed_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendGamePlayed( (CSteamID)params->steamIDFriend, (FriendGameInfo_t *)params->pFriendGameInfo );
}

void cppISteamFriends_SteamFriends012_GetFriendPersonaNameHistory( struct cppISteamFriends_SteamFriends012_GetFriendPersonaNameHistory_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendPersonaNameHistory( (CSteamID)params->steamIDFriend, (int)params->iPersonaName );
}

void cppISteamFriends_SteamFriends012_HasFriend( struct cppISteamFriends_SteamFriends012_HasFriend_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->HasFriend( (CSteamID)params->steamIDFriend, (int)params->iFriendFlags );
}

void cppISteamFriends_SteamFriends012_GetClanCount( struct cppISteamFriends_SteamFriends012_GetClanCount_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetClanCount(  );
}

void cppISteamFriends_SteamFriends012_GetClanByIndex( struct cppISteamFriends_SteamFriends012_GetClanByIndex_params *params )
{
    *params->_ret = ((ISteamFriends*)params->linux_side)->GetClanByIndex( (int)params->iClan );
}

void cppISteamFriends_SteamFriends012_GetClanName( struct cppISteamFriends_SteamFriends012_GetClanName_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetClanName( (CSteamID)params->steamIDClan );
}

void cppISteamFriends_SteamFriends012_GetClanTag( struct cppISteamFriends_SteamFriends012_GetClanTag_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetClanTag( (CSteamID)params->steamIDClan );
}

void cppISteamFriends_SteamFriends012_GetClanActivityCounts( struct cppISteamFriends_SteamFriends012_GetClanActivityCounts_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetClanActivityCounts( (CSteamID)params->steamIDClan, (int *)params->pnOnline, (int *)params->pnInGame, (int *)params->pnChatting );
}

void cppISteamFriends_SteamFriends012_DownloadClanActivityCounts( struct cppISteamFriends_SteamFriends012_DownloadClanActivityCounts_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->DownloadClanActivityCounts( (CSteamID *)params->psteamIDClans, (int)params->cClansToRequest );
}

void cppISteamFriends_SteamFriends012_GetFriendCountFromSource( struct cppISteamFriends_SteamFriends012_GetFriendCountFromSource_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendCountFromSource( (CSteamID)params->steamIDSource );
}

void cppISteamFriends_SteamFriends012_GetFriendFromSourceByIndex( struct cppISteamFriends_SteamFriends012_GetFriendFromSourceByIndex_params *params )
{
    *params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendFromSourceByIndex( (CSteamID)params->steamIDSource, (int)params->iFriend );
}

void cppISteamFriends_SteamFriends012_IsUserInSource( struct cppISteamFriends_SteamFriends012_IsUserInSource_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->IsUserInSource( (CSteamID)params->steamIDUser, (CSteamID)params->steamIDSource );
}

void cppISteamFriends_SteamFriends012_SetInGameVoiceSpeaking( struct cppISteamFriends_SteamFriends012_SetInGameVoiceSpeaking_params *params )
{
    ((ISteamFriends*)params->linux_side)->SetInGameVoiceSpeaking( (CSteamID)params->steamIDUser, (bool)params->bSpeaking );
}

void cppISteamFriends_SteamFriends012_ActivateGameOverlay( struct cppISteamFriends_SteamFriends012_ActivateGameOverlay_params *params )
{
    ((ISteamFriends*)params->linux_side)->ActivateGameOverlay( (const char *)params->pchDialog );
}

void cppISteamFriends_SteamFriends012_ActivateGameOverlayToUser( struct cppISteamFriends_SteamFriends012_ActivateGameOverlayToUser_params *params )
{
    ((ISteamFriends*)params->linux_side)->ActivateGameOverlayToUser( (const char *)params->pchDialog, (CSteamID)params->steamID );
}

void cppISteamFriends_SteamFriends012_ActivateGameOverlayToWebPage( struct cppISteamFriends_SteamFriends012_ActivateGameOverlayToWebPage_params *params )
{
    ((ISteamFriends*)params->linux_side)->ActivateGameOverlayToWebPage( (const char *)params->pchURL );
}

void cppISteamFriends_SteamFriends012_ActivateGameOverlayToStore( struct cppISteamFriends_SteamFriends012_ActivateGameOverlayToStore_params *params )
{
    ((ISteamFriends*)params->linux_side)->ActivateGameOverlayToStore( (AppId_t)params->nAppID );
}

void cppISteamFriends_SteamFriends012_SetPlayedWith( struct cppISteamFriends_SteamFriends012_SetPlayedWith_params *params )
{
    ((ISteamFriends*)params->linux_side)->SetPlayedWith( (CSteamID)params->steamIDUserPlayedWith );
}

void cppISteamFriends_SteamFriends012_ActivateGameOverlayInviteDialog( struct cppISteamFriends_SteamFriends012_ActivateGameOverlayInviteDialog_params *params )
{
    ((ISteamFriends*)params->linux_side)->ActivateGameOverlayInviteDialog( (CSteamID)params->steamIDLobby );
}

void cppISteamFriends_SteamFriends012_GetSmallFriendAvatar( struct cppISteamFriends_SteamFriends012_GetSmallFriendAvatar_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetSmallFriendAvatar( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends012_GetMediumFriendAvatar( struct cppISteamFriends_SteamFriends012_GetMediumFriendAvatar_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetMediumFriendAvatar( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends012_GetLargeFriendAvatar( struct cppISteamFriends_SteamFriends012_GetLargeFriendAvatar_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetLargeFriendAvatar( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends012_RequestUserInformation( struct cppISteamFriends_SteamFriends012_RequestUserInformation_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->RequestUserInformation( (CSteamID)params->steamIDUser, (bool)params->bRequireNameOnly );
}

void cppISteamFriends_SteamFriends012_RequestClanOfficerList( struct cppISteamFriends_SteamFriends012_RequestClanOfficerList_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->RequestClanOfficerList( (CSteamID)params->steamIDClan );
}

void cppISteamFriends_SteamFriends012_GetClanOwner( struct cppISteamFriends_SteamFriends012_GetClanOwner_params *params )
{
    *params->_ret = ((ISteamFriends*)params->linux_side)->GetClanOwner( (CSteamID)params->steamIDClan );
}

void cppISteamFriends_SteamFriends012_GetClanOfficerCount( struct cppISteamFriends_SteamFriends012_GetClanOfficerCount_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetClanOfficerCount( (CSteamID)params->steamIDClan );
}

void cppISteamFriends_SteamFriends012_GetClanOfficerByIndex( struct cppISteamFriends_SteamFriends012_GetClanOfficerByIndex_params *params )
{
    *params->_ret = ((ISteamFriends*)params->linux_side)->GetClanOfficerByIndex( (CSteamID)params->steamIDClan, (int)params->iOfficer );
}

void cppISteamFriends_SteamFriends012_GetUserRestrictions( struct cppISteamFriends_SteamFriends012_GetUserRestrictions_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetUserRestrictions(  );
}

void cppISteamFriends_SteamFriends012_SetRichPresence( struct cppISteamFriends_SteamFriends012_SetRichPresence_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->SetRichPresence( (const char *)params->pchKey, (const char *)params->pchValue );
}

void cppISteamFriends_SteamFriends012_ClearRichPresence( struct cppISteamFriends_SteamFriends012_ClearRichPresence_params *params )
{
    ((ISteamFriends*)params->linux_side)->ClearRichPresence(  );
}

void cppISteamFriends_SteamFriends012_GetFriendRichPresence( struct cppISteamFriends_SteamFriends012_GetFriendRichPresence_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendRichPresence( (CSteamID)params->steamIDFriend, (const char *)params->pchKey );
}

void cppISteamFriends_SteamFriends012_GetFriendRichPresenceKeyCount( struct cppISteamFriends_SteamFriends012_GetFriendRichPresenceKeyCount_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendRichPresenceKeyCount( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends012_GetFriendRichPresenceKeyByIndex( struct cppISteamFriends_SteamFriends012_GetFriendRichPresenceKeyByIndex_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendRichPresenceKeyByIndex( (CSteamID)params->steamIDFriend, (int)params->iKey );
}

void cppISteamFriends_SteamFriends012_RequestFriendRichPresence( struct cppISteamFriends_SteamFriends012_RequestFriendRichPresence_params *params )
{
    ((ISteamFriends*)params->linux_side)->RequestFriendRichPresence( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends012_InviteUserToGame( struct cppISteamFriends_SteamFriends012_InviteUserToGame_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->InviteUserToGame( (CSteamID)params->steamIDFriend, (const char *)params->pchConnectString );
}

void cppISteamFriends_SteamFriends012_GetCoplayFriendCount( struct cppISteamFriends_SteamFriends012_GetCoplayFriendCount_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetCoplayFriendCount(  );
}

void cppISteamFriends_SteamFriends012_GetCoplayFriend( struct cppISteamFriends_SteamFriends012_GetCoplayFriend_params *params )
{
    *params->_ret = ((ISteamFriends*)params->linux_side)->GetCoplayFriend( (int)params->iCoplayFriend );
}

void cppISteamFriends_SteamFriends012_GetFriendCoplayTime( struct cppISteamFriends_SteamFriends012_GetFriendCoplayTime_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendCoplayTime( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends012_GetFriendCoplayGame( struct cppISteamFriends_SteamFriends012_GetFriendCoplayGame_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendCoplayGame( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends012_JoinClanChatRoom( struct cppISteamFriends_SteamFriends012_JoinClanChatRoom_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->JoinClanChatRoom( (CSteamID)params->steamIDClan );
}

void cppISteamFriends_SteamFriends012_LeaveClanChatRoom( struct cppISteamFriends_SteamFriends012_LeaveClanChatRoom_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->LeaveClanChatRoom( (CSteamID)params->steamIDClan );
}

void cppISteamFriends_SteamFriends012_GetClanChatMemberCount( struct cppISteamFriends_SteamFriends012_GetClanChatMemberCount_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetClanChatMemberCount( (CSteamID)params->steamIDClan );
}

void cppISteamFriends_SteamFriends012_GetChatMemberByIndex( struct cppISteamFriends_SteamFriends012_GetChatMemberByIndex_params *params )
{
    *params->_ret = ((ISteamFriends*)params->linux_side)->GetChatMemberByIndex( (CSteamID)params->steamIDClan, (int)params->iUser );
}

void cppISteamFriends_SteamFriends012_SendClanChatMessage( struct cppISteamFriends_SteamFriends012_SendClanChatMessage_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->SendClanChatMessage( (CSteamID)params->steamIDClanChat, (const char *)params->pchText );
}

void cppISteamFriends_SteamFriends012_GetClanChatMessage( struct cppISteamFriends_SteamFriends012_GetClanChatMessage_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetClanChatMessage( (CSteamID)params->steamIDClanChat, (int)params->iMessage, (void *)params->prgchText, (int)params->cchTextMax, (EChatEntryType *)params->_e, (CSteamID *)params->_f );
}

void cppISteamFriends_SteamFriends012_IsClanChatAdmin( struct cppISteamFriends_SteamFriends012_IsClanChatAdmin_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->IsClanChatAdmin( (CSteamID)params->steamIDClanChat, (CSteamID)params->steamIDUser );
}

void cppISteamFriends_SteamFriends012_IsClanChatWindowOpenInSteam( struct cppISteamFriends_SteamFriends012_IsClanChatWindowOpenInSteam_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->IsClanChatWindowOpenInSteam( (CSteamID)params->steamIDClanChat );
}

void cppISteamFriends_SteamFriends012_OpenClanChatWindowInSteam( struct cppISteamFriends_SteamFriends012_OpenClanChatWindowInSteam_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->OpenClanChatWindowInSteam( (CSteamID)params->steamIDClanChat );
}

void cppISteamFriends_SteamFriends012_CloseClanChatWindowInSteam( struct cppISteamFriends_SteamFriends012_CloseClanChatWindowInSteam_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->CloseClanChatWindowInSteam( (CSteamID)params->steamIDClanChat );
}

void cppISteamFriends_SteamFriends012_SetListenForFriendsMessages( struct cppISteamFriends_SteamFriends012_SetListenForFriendsMessages_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->SetListenForFriendsMessages( (bool)params->bInterceptEnabled );
}

void cppISteamFriends_SteamFriends012_ReplyToFriendMessage( struct cppISteamFriends_SteamFriends012_ReplyToFriendMessage_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->ReplyToFriendMessage( (CSteamID)params->steamIDFriend, (const char *)params->pchMsgToSend );
}

void cppISteamFriends_SteamFriends012_GetFriendMessage( struct cppISteamFriends_SteamFriends012_GetFriendMessage_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendMessage( (CSteamID)params->steamIDFriend, (int)params->iMessageID, (void *)params->pvData, (int)params->cubData, (EChatEntryType *)params->peChatEntryType );
}

void cppISteamFriends_SteamFriends012_GetFollowerCount( struct cppISteamFriends_SteamFriends012_GetFollowerCount_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFollowerCount( (CSteamID)params->steamID );
}

void cppISteamFriends_SteamFriends012_IsFollowing( struct cppISteamFriends_SteamFriends012_IsFollowing_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->IsFollowing( (CSteamID)params->steamID );
}

void cppISteamFriends_SteamFriends012_EnumerateFollowingList( struct cppISteamFriends_SteamFriends012_EnumerateFollowingList_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->EnumerateFollowingList( (uint32)params->unStartIndex );
}

#ifdef __cplusplus
}
#endif
