#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_119/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_119
#include "struct_converters.h"
#include "cppISteamFriends_SteamFriends011.h"
void cppISteamFriends_SteamFriends011_GetPersonaName( struct cppISteamFriends_SteamFriends011_GetPersonaName_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetPersonaName(  );
}

void cppISteamFriends_SteamFriends011_SetPersonaName( struct cppISteamFriends_SteamFriends011_SetPersonaName_params *params )
{
    ((ISteamFriends*)params->linux_side)->SetPersonaName( (const char *)params->pchPersonaName );
}

void cppISteamFriends_SteamFriends011_GetPersonaState( struct cppISteamFriends_SteamFriends011_GetPersonaState_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetPersonaState(  );
}

void cppISteamFriends_SteamFriends011_GetFriendCount( struct cppISteamFriends_SteamFriends011_GetFriendCount_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendCount( (int)params->iFriendFlags );
}

void cppISteamFriends_SteamFriends011_GetFriendByIndex( struct cppISteamFriends_SteamFriends011_GetFriendByIndex_params *params )
{
    *params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendByIndex( (int)params->iFriend, (int)params->iFriendFlags );
}

void cppISteamFriends_SteamFriends011_GetFriendRelationship( struct cppISteamFriends_SteamFriends011_GetFriendRelationship_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendRelationship( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends011_GetFriendPersonaState( struct cppISteamFriends_SteamFriends011_GetFriendPersonaState_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendPersonaState( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends011_GetFriendPersonaName( struct cppISteamFriends_SteamFriends011_GetFriendPersonaName_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendPersonaName( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends011_GetFriendGamePlayed( struct cppISteamFriends_SteamFriends011_GetFriendGamePlayed_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendGamePlayed( (CSteamID)params->steamIDFriend, (FriendGameInfo_t *)params->pFriendGameInfo );
}

void cppISteamFriends_SteamFriends011_GetFriendPersonaNameHistory( struct cppISteamFriends_SteamFriends011_GetFriendPersonaNameHistory_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendPersonaNameHistory( (CSteamID)params->steamIDFriend, (int)params->iPersonaName );
}

void cppISteamFriends_SteamFriends011_HasFriend( struct cppISteamFriends_SteamFriends011_HasFriend_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->HasFriend( (CSteamID)params->steamIDFriend, (int)params->iFriendFlags );
}

void cppISteamFriends_SteamFriends011_GetClanCount( struct cppISteamFriends_SteamFriends011_GetClanCount_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetClanCount(  );
}

void cppISteamFriends_SteamFriends011_GetClanByIndex( struct cppISteamFriends_SteamFriends011_GetClanByIndex_params *params )
{
    *params->_ret = ((ISteamFriends*)params->linux_side)->GetClanByIndex( (int)params->iClan );
}

void cppISteamFriends_SteamFriends011_GetClanName( struct cppISteamFriends_SteamFriends011_GetClanName_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetClanName( (CSteamID)params->steamIDClan );
}

void cppISteamFriends_SteamFriends011_GetClanTag( struct cppISteamFriends_SteamFriends011_GetClanTag_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetClanTag( (CSteamID)params->steamIDClan );
}

void cppISteamFriends_SteamFriends011_GetClanActivityCounts( struct cppISteamFriends_SteamFriends011_GetClanActivityCounts_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetClanActivityCounts( (CSteamID)params->steamIDClan, (int *)params->pnOnline, (int *)params->pnInGame, (int *)params->pnChatting );
}

void cppISteamFriends_SteamFriends011_DownloadClanActivityCounts( struct cppISteamFriends_SteamFriends011_DownloadClanActivityCounts_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->DownloadClanActivityCounts( (CSteamID *)params->psteamIDClans, (int)params->cClansToRequest );
}

void cppISteamFriends_SteamFriends011_GetFriendCountFromSource( struct cppISteamFriends_SteamFriends011_GetFriendCountFromSource_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendCountFromSource( (CSteamID)params->steamIDSource );
}

void cppISteamFriends_SteamFriends011_GetFriendFromSourceByIndex( struct cppISteamFriends_SteamFriends011_GetFriendFromSourceByIndex_params *params )
{
    *params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendFromSourceByIndex( (CSteamID)params->steamIDSource, (int)params->iFriend );
}

void cppISteamFriends_SteamFriends011_IsUserInSource( struct cppISteamFriends_SteamFriends011_IsUserInSource_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->IsUserInSource( (CSteamID)params->steamIDUser, (CSteamID)params->steamIDSource );
}

void cppISteamFriends_SteamFriends011_SetInGameVoiceSpeaking( struct cppISteamFriends_SteamFriends011_SetInGameVoiceSpeaking_params *params )
{
    ((ISteamFriends*)params->linux_side)->SetInGameVoiceSpeaking( (CSteamID)params->steamIDUser, (bool)params->bSpeaking );
}

void cppISteamFriends_SteamFriends011_ActivateGameOverlay( struct cppISteamFriends_SteamFriends011_ActivateGameOverlay_params *params )
{
    ((ISteamFriends*)params->linux_side)->ActivateGameOverlay( (const char *)params->pchDialog );
}

void cppISteamFriends_SteamFriends011_ActivateGameOverlayToUser( struct cppISteamFriends_SteamFriends011_ActivateGameOverlayToUser_params *params )
{
    ((ISteamFriends*)params->linux_side)->ActivateGameOverlayToUser( (const char *)params->pchDialog, (CSteamID)params->steamID );
}

void cppISteamFriends_SteamFriends011_ActivateGameOverlayToWebPage( struct cppISteamFriends_SteamFriends011_ActivateGameOverlayToWebPage_params *params )
{
    ((ISteamFriends*)params->linux_side)->ActivateGameOverlayToWebPage( (const char *)params->pchURL );
}

void cppISteamFriends_SteamFriends011_ActivateGameOverlayToStore( struct cppISteamFriends_SteamFriends011_ActivateGameOverlayToStore_params *params )
{
    ((ISteamFriends*)params->linux_side)->ActivateGameOverlayToStore( (AppId_t)params->nAppID );
}

void cppISteamFriends_SteamFriends011_SetPlayedWith( struct cppISteamFriends_SteamFriends011_SetPlayedWith_params *params )
{
    ((ISteamFriends*)params->linux_side)->SetPlayedWith( (CSteamID)params->steamIDUserPlayedWith );
}

void cppISteamFriends_SteamFriends011_ActivateGameOverlayInviteDialog( struct cppISteamFriends_SteamFriends011_ActivateGameOverlayInviteDialog_params *params )
{
    ((ISteamFriends*)params->linux_side)->ActivateGameOverlayInviteDialog( (CSteamID)params->steamIDLobby );
}

void cppISteamFriends_SteamFriends011_GetSmallFriendAvatar( struct cppISteamFriends_SteamFriends011_GetSmallFriendAvatar_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetSmallFriendAvatar( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends011_GetMediumFriendAvatar( struct cppISteamFriends_SteamFriends011_GetMediumFriendAvatar_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetMediumFriendAvatar( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends011_GetLargeFriendAvatar( struct cppISteamFriends_SteamFriends011_GetLargeFriendAvatar_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetLargeFriendAvatar( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends011_RequestUserInformation( struct cppISteamFriends_SteamFriends011_RequestUserInformation_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->RequestUserInformation( (CSteamID)params->steamIDUser, (bool)params->bRequireNameOnly );
}

void cppISteamFriends_SteamFriends011_RequestClanOfficerList( struct cppISteamFriends_SteamFriends011_RequestClanOfficerList_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->RequestClanOfficerList( (CSteamID)params->steamIDClan );
}

void cppISteamFriends_SteamFriends011_GetClanOwner( struct cppISteamFriends_SteamFriends011_GetClanOwner_params *params )
{
    *params->_ret = ((ISteamFriends*)params->linux_side)->GetClanOwner( (CSteamID)params->steamIDClan );
}

void cppISteamFriends_SteamFriends011_GetClanOfficerCount( struct cppISteamFriends_SteamFriends011_GetClanOfficerCount_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetClanOfficerCount( (CSteamID)params->steamIDClan );
}

void cppISteamFriends_SteamFriends011_GetClanOfficerByIndex( struct cppISteamFriends_SteamFriends011_GetClanOfficerByIndex_params *params )
{
    *params->_ret = ((ISteamFriends*)params->linux_side)->GetClanOfficerByIndex( (CSteamID)params->steamIDClan, (int)params->iOfficer );
}

void cppISteamFriends_SteamFriends011_GetUserRestrictions( struct cppISteamFriends_SteamFriends011_GetUserRestrictions_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetUserRestrictions(  );
}

void cppISteamFriends_SteamFriends011_SetRichPresence( struct cppISteamFriends_SteamFriends011_SetRichPresence_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->SetRichPresence( (const char *)params->pchKey, (const char *)params->pchValue );
}

void cppISteamFriends_SteamFriends011_ClearRichPresence( struct cppISteamFriends_SteamFriends011_ClearRichPresence_params *params )
{
    ((ISteamFriends*)params->linux_side)->ClearRichPresence(  );
}

void cppISteamFriends_SteamFriends011_GetFriendRichPresence( struct cppISteamFriends_SteamFriends011_GetFriendRichPresence_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendRichPresence( (CSteamID)params->steamIDFriend, (const char *)params->pchKey );
}

void cppISteamFriends_SteamFriends011_GetFriendRichPresenceKeyCount( struct cppISteamFriends_SteamFriends011_GetFriendRichPresenceKeyCount_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendRichPresenceKeyCount( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends011_GetFriendRichPresenceKeyByIndex( struct cppISteamFriends_SteamFriends011_GetFriendRichPresenceKeyByIndex_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendRichPresenceKeyByIndex( (CSteamID)params->steamIDFriend, (int)params->iKey );
}

void cppISteamFriends_SteamFriends011_RequestFriendRichPresence( struct cppISteamFriends_SteamFriends011_RequestFriendRichPresence_params *params )
{
    ((ISteamFriends*)params->linux_side)->RequestFriendRichPresence( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends011_InviteUserToGame( struct cppISteamFriends_SteamFriends011_InviteUserToGame_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->InviteUserToGame( (CSteamID)params->steamIDFriend, (const char *)params->pchConnectString );
}

void cppISteamFriends_SteamFriends011_GetCoplayFriendCount( struct cppISteamFriends_SteamFriends011_GetCoplayFriendCount_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetCoplayFriendCount(  );
}

void cppISteamFriends_SteamFriends011_GetCoplayFriend( struct cppISteamFriends_SteamFriends011_GetCoplayFriend_params *params )
{
    *params->_ret = ((ISteamFriends*)params->linux_side)->GetCoplayFriend( (int)params->iCoplayFriend );
}

void cppISteamFriends_SteamFriends011_GetFriendCoplayTime( struct cppISteamFriends_SteamFriends011_GetFriendCoplayTime_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendCoplayTime( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends011_GetFriendCoplayGame( struct cppISteamFriends_SteamFriends011_GetFriendCoplayGame_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendCoplayGame( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends011_JoinClanChatRoom( struct cppISteamFriends_SteamFriends011_JoinClanChatRoom_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->JoinClanChatRoom( (CSteamID)params->steamIDClan );
}

void cppISteamFriends_SteamFriends011_LeaveClanChatRoom( struct cppISteamFriends_SteamFriends011_LeaveClanChatRoom_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->LeaveClanChatRoom( (CSteamID)params->steamIDClan );
}

void cppISteamFriends_SteamFriends011_GetClanChatMemberCount( struct cppISteamFriends_SteamFriends011_GetClanChatMemberCount_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetClanChatMemberCount( (CSteamID)params->steamIDClan );
}

void cppISteamFriends_SteamFriends011_GetChatMemberByIndex( struct cppISteamFriends_SteamFriends011_GetChatMemberByIndex_params *params )
{
    *params->_ret = ((ISteamFriends*)params->linux_side)->GetChatMemberByIndex( (CSteamID)params->steamIDClan, (int)params->iUser );
}

void cppISteamFriends_SteamFriends011_SendClanChatMessage( struct cppISteamFriends_SteamFriends011_SendClanChatMessage_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->SendClanChatMessage( (CSteamID)params->steamIDClanChat, (const char *)params->pchText );
}

void cppISteamFriends_SteamFriends011_GetClanChatMessage( struct cppISteamFriends_SteamFriends011_GetClanChatMessage_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetClanChatMessage( (CSteamID)params->steamIDClanChat, (int)params->iMessage, (void *)params->prgchText, (int)params->cchTextMax, (EChatEntryType *)params->_e, (CSteamID *)params->_f );
}

void cppISteamFriends_SteamFriends011_IsClanChatAdmin( struct cppISteamFriends_SteamFriends011_IsClanChatAdmin_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->IsClanChatAdmin( (CSteamID)params->steamIDClanChat, (CSteamID)params->steamIDUser );
}

void cppISteamFriends_SteamFriends011_IsClanChatWindowOpenInSteam( struct cppISteamFriends_SteamFriends011_IsClanChatWindowOpenInSteam_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->IsClanChatWindowOpenInSteam( (CSteamID)params->steamIDClanChat );
}

void cppISteamFriends_SteamFriends011_OpenClanChatWindowInSteam( struct cppISteamFriends_SteamFriends011_OpenClanChatWindowInSteam_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->OpenClanChatWindowInSteam( (CSteamID)params->steamIDClanChat );
}

void cppISteamFriends_SteamFriends011_CloseClanChatWindowInSteam( struct cppISteamFriends_SteamFriends011_CloseClanChatWindowInSteam_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->CloseClanChatWindowInSteam( (CSteamID)params->steamIDClanChat );
}

void cppISteamFriends_SteamFriends011_SetListenForFriendsMessages( struct cppISteamFriends_SteamFriends011_SetListenForFriendsMessages_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->SetListenForFriendsMessages( (bool)params->bInterceptEnabled );
}

void cppISteamFriends_SteamFriends011_ReplyToFriendMessage( struct cppISteamFriends_SteamFriends011_ReplyToFriendMessage_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->ReplyToFriendMessage( (CSteamID)params->steamIDFriend, (const char *)params->pchMsgToSend );
}

void cppISteamFriends_SteamFriends011_GetFriendMessage( struct cppISteamFriends_SteamFriends011_GetFriendMessage_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendMessage( (CSteamID)params->steamIDFriend, (int)params->iMessageID, (void *)params->pvData, (int)params->cubData, (EChatEntryType *)params->peChatEntryType );
}

void cppISteamFriends_SteamFriends011_GetFollowerCount( struct cppISteamFriends_SteamFriends011_GetFollowerCount_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFollowerCount( (CSteamID)params->steamID );
}

void cppISteamFriends_SteamFriends011_IsFollowing( struct cppISteamFriends_SteamFriends011_IsFollowing_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->IsFollowing( (CSteamID)params->steamID );
}

void cppISteamFriends_SteamFriends011_EnumerateFollowingList( struct cppISteamFriends_SteamFriends011_EnumerateFollowingList_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->EnumerateFollowingList( (uint32)params->unStartIndex );
}

#ifdef __cplusplus
}
#endif
