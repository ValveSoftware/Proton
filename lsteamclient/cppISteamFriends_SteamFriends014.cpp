#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_131/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_131
#include "struct_converters.h"
#include "cppISteamFriends_SteamFriends014.h"

struct cppISteamFriends_SteamFriends014
{
#ifdef __cplusplus
    virtual const char * GetPersonaName(  ) = 0;
    virtual uint64_t SetPersonaName( const char * ) = 0;
    virtual uint32_t GetPersonaState(  ) = 0;
    virtual int32_t GetFriendCount( int32_t ) = 0;
    virtual CSteamID GetFriendByIndex( int32_t, int32_t ) = 0;
    virtual uint32_t GetFriendRelationship( CSteamID ) = 0;
    virtual uint32_t GetFriendPersonaState( CSteamID ) = 0;
    virtual const char * GetFriendPersonaName( CSteamID ) = 0;
    virtual bool GetFriendGamePlayed( CSteamID, FriendGameInfo_t * ) = 0;
    virtual const char * GetFriendPersonaNameHistory( CSteamID, int32_t ) = 0;
    virtual const char * GetPlayerNickname( CSteamID ) = 0;
    virtual bool HasFriend( CSteamID, int32_t ) = 0;
    virtual int32_t GetClanCount(  ) = 0;
    virtual CSteamID GetClanByIndex( int32_t ) = 0;
    virtual const char * GetClanName( CSteamID ) = 0;
    virtual const char * GetClanTag( CSteamID ) = 0;
    virtual bool GetClanActivityCounts( CSteamID, int32_t *, int32_t *, int32_t * ) = 0;
    virtual uint64_t DownloadClanActivityCounts( CSteamID *, int32_t ) = 0;
    virtual int32_t GetFriendCountFromSource( CSteamID ) = 0;
    virtual CSteamID GetFriendFromSourceByIndex( CSteamID, int32_t ) = 0;
    virtual bool IsUserInSource( CSteamID, CSteamID ) = 0;
    virtual void SetInGameVoiceSpeaking( CSteamID, bool ) = 0;
    virtual void ActivateGameOverlay( const char * ) = 0;
    virtual void ActivateGameOverlayToUser( const char *, CSteamID ) = 0;
    virtual void ActivateGameOverlayToWebPage( const char * ) = 0;
    virtual void ActivateGameOverlayToStore( uint32_t, uint32_t ) = 0;
    virtual void SetPlayedWith( CSteamID ) = 0;
    virtual void ActivateGameOverlayInviteDialog( CSteamID ) = 0;
    virtual int32_t GetSmallFriendAvatar( CSteamID ) = 0;
    virtual int32_t GetMediumFriendAvatar( CSteamID ) = 0;
    virtual int32_t GetLargeFriendAvatar( CSteamID ) = 0;
    virtual bool RequestUserInformation( CSteamID, bool ) = 0;
    virtual uint64_t RequestClanOfficerList( CSteamID ) = 0;
    virtual CSteamID GetClanOwner( CSteamID ) = 0;
    virtual int32_t GetClanOfficerCount( CSteamID ) = 0;
    virtual CSteamID GetClanOfficerByIndex( CSteamID, int32_t ) = 0;
    virtual uint32_t GetUserRestrictions(  ) = 0;
    virtual bool SetRichPresence( const char *, const char * ) = 0;
    virtual void ClearRichPresence(  ) = 0;
    virtual const char * GetFriendRichPresence( CSteamID, const char * ) = 0;
    virtual int32_t GetFriendRichPresenceKeyCount( CSteamID ) = 0;
    virtual const char * GetFriendRichPresenceKeyByIndex( CSteamID, int32_t ) = 0;
    virtual void RequestFriendRichPresence( CSteamID ) = 0;
    virtual bool InviteUserToGame( CSteamID, const char * ) = 0;
    virtual int32_t GetCoplayFriendCount(  ) = 0;
    virtual CSteamID GetCoplayFriend( int32_t ) = 0;
    virtual int32_t GetFriendCoplayTime( CSteamID ) = 0;
    virtual uint32_t GetFriendCoplayGame( CSteamID ) = 0;
    virtual uint64_t JoinClanChatRoom( CSteamID ) = 0;
    virtual bool LeaveClanChatRoom( CSteamID ) = 0;
    virtual int32_t GetClanChatMemberCount( CSteamID ) = 0;
    virtual CSteamID GetChatMemberByIndex( CSteamID, int32_t ) = 0;
    virtual bool SendClanChatMessage( CSteamID, const char * ) = 0;
    virtual int32_t GetClanChatMessage( CSteamID, int32_t, void *, int32_t, uint32_t *, CSteamID * ) = 0;
    virtual bool IsClanChatAdmin( CSteamID, CSteamID ) = 0;
    virtual bool IsClanChatWindowOpenInSteam( CSteamID ) = 0;
    virtual bool OpenClanChatWindowInSteam( CSteamID ) = 0;
    virtual bool CloseClanChatWindowInSteam( CSteamID ) = 0;
    virtual bool SetListenForFriendsMessages( bool ) = 0;
    virtual bool ReplyToFriendMessage( CSteamID, const char * ) = 0;
    virtual int32_t GetFriendMessage( CSteamID, int32_t, void *, int32_t, uint32_t * ) = 0;
    virtual uint64_t GetFollowerCount( CSteamID ) = 0;
    virtual uint64_t IsFollowing( CSteamID ) = 0;
    virtual uint64_t EnumerateFollowingList( uint32_t ) = 0;
#endif /* __cplusplus */
};

void cppISteamFriends_SteamFriends014_GetPersonaName( struct cppISteamFriends_SteamFriends014_GetPersonaName_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    params->_ret = iface->GetPersonaName(  );
}

void cppISteamFriends_SteamFriends014_SetPersonaName( struct cppISteamFriends_SteamFriends014_SetPersonaName_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    params->_ret = iface->SetPersonaName( params->pchPersonaName );
}

void cppISteamFriends_SteamFriends014_GetPersonaState( struct cppISteamFriends_SteamFriends014_GetPersonaState_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    params->_ret = iface->GetPersonaState(  );
}

void cppISteamFriends_SteamFriends014_GetFriendCount( struct cppISteamFriends_SteamFriends014_GetFriendCount_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    params->_ret = iface->GetFriendCount( params->iFriendFlags );
}

void cppISteamFriends_SteamFriends014_GetFriendByIndex( struct cppISteamFriends_SteamFriends014_GetFriendByIndex_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    *params->_ret = iface->GetFriendByIndex( params->iFriend, params->iFriendFlags );
}

void cppISteamFriends_SteamFriends014_GetFriendRelationship( struct cppISteamFriends_SteamFriends014_GetFriendRelationship_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    params->_ret = iface->GetFriendRelationship( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends014_GetFriendPersonaState( struct cppISteamFriends_SteamFriends014_GetFriendPersonaState_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaState( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends014_GetFriendPersonaName( struct cppISteamFriends_SteamFriends014_GetFriendPersonaName_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaName( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends014_GetFriendGamePlayed( struct cppISteamFriends_SteamFriends014_GetFriendGamePlayed_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    params->_ret = iface->GetFriendGamePlayed( params->steamIDFriend, params->pFriendGameInfo );
}

void cppISteamFriends_SteamFriends014_GetFriendPersonaNameHistory( struct cppISteamFriends_SteamFriends014_GetFriendPersonaNameHistory_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaNameHistory( params->steamIDFriend, params->iPersonaName );
}

void cppISteamFriends_SteamFriends014_GetPlayerNickname( struct cppISteamFriends_SteamFriends014_GetPlayerNickname_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    params->_ret = iface->GetPlayerNickname( params->steamIDPlayer );
}

void cppISteamFriends_SteamFriends014_HasFriend( struct cppISteamFriends_SteamFriends014_HasFriend_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    params->_ret = iface->HasFriend( params->steamIDFriend, params->iFriendFlags );
}

void cppISteamFriends_SteamFriends014_GetClanCount( struct cppISteamFriends_SteamFriends014_GetClanCount_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    params->_ret = iface->GetClanCount(  );
}

void cppISteamFriends_SteamFriends014_GetClanByIndex( struct cppISteamFriends_SteamFriends014_GetClanByIndex_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    *params->_ret = iface->GetClanByIndex( params->iClan );
}

void cppISteamFriends_SteamFriends014_GetClanName( struct cppISteamFriends_SteamFriends014_GetClanName_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    params->_ret = iface->GetClanName( params->steamIDClan );
}

void cppISteamFriends_SteamFriends014_GetClanTag( struct cppISteamFriends_SteamFriends014_GetClanTag_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    params->_ret = iface->GetClanTag( params->steamIDClan );
}

void cppISteamFriends_SteamFriends014_GetClanActivityCounts( struct cppISteamFriends_SteamFriends014_GetClanActivityCounts_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    params->_ret = iface->GetClanActivityCounts( params->steamIDClan, params->pnOnline, params->pnInGame, params->pnChatting );
}

void cppISteamFriends_SteamFriends014_DownloadClanActivityCounts( struct cppISteamFriends_SteamFriends014_DownloadClanActivityCounts_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    params->_ret = iface->DownloadClanActivityCounts( params->psteamIDClans, params->cClansToRequest );
}

void cppISteamFriends_SteamFriends014_GetFriendCountFromSource( struct cppISteamFriends_SteamFriends014_GetFriendCountFromSource_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    params->_ret = iface->GetFriendCountFromSource( params->steamIDSource );
}

void cppISteamFriends_SteamFriends014_GetFriendFromSourceByIndex( struct cppISteamFriends_SteamFriends014_GetFriendFromSourceByIndex_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    *params->_ret = iface->GetFriendFromSourceByIndex( params->steamIDSource, params->iFriend );
}

void cppISteamFriends_SteamFriends014_IsUserInSource( struct cppISteamFriends_SteamFriends014_IsUserInSource_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    params->_ret = iface->IsUserInSource( params->steamIDUser, params->steamIDSource );
}

void cppISteamFriends_SteamFriends014_SetInGameVoiceSpeaking( struct cppISteamFriends_SteamFriends014_SetInGameVoiceSpeaking_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    iface->SetInGameVoiceSpeaking( params->steamIDUser, params->bSpeaking );
}

void cppISteamFriends_SteamFriends014_ActivateGameOverlay( struct cppISteamFriends_SteamFriends014_ActivateGameOverlay_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    iface->ActivateGameOverlay( params->pchDialog );
}

void cppISteamFriends_SteamFriends014_ActivateGameOverlayToUser( struct cppISteamFriends_SteamFriends014_ActivateGameOverlayToUser_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    iface->ActivateGameOverlayToUser( params->pchDialog, params->steamID );
}

void cppISteamFriends_SteamFriends014_ActivateGameOverlayToWebPage( struct cppISteamFriends_SteamFriends014_ActivateGameOverlayToWebPage_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    iface->ActivateGameOverlayToWebPage( params->pchURL );
}

void cppISteamFriends_SteamFriends014_ActivateGameOverlayToStore( struct cppISteamFriends_SteamFriends014_ActivateGameOverlayToStore_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    iface->ActivateGameOverlayToStore( params->nAppID, params->eFlag );
}

void cppISteamFriends_SteamFriends014_SetPlayedWith( struct cppISteamFriends_SteamFriends014_SetPlayedWith_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    iface->SetPlayedWith( params->steamIDUserPlayedWith );
}

void cppISteamFriends_SteamFriends014_ActivateGameOverlayInviteDialog( struct cppISteamFriends_SteamFriends014_ActivateGameOverlayInviteDialog_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    iface->ActivateGameOverlayInviteDialog( params->steamIDLobby );
}

void cppISteamFriends_SteamFriends014_GetSmallFriendAvatar( struct cppISteamFriends_SteamFriends014_GetSmallFriendAvatar_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    params->_ret = iface->GetSmallFriendAvatar( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends014_GetMediumFriendAvatar( struct cppISteamFriends_SteamFriends014_GetMediumFriendAvatar_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    params->_ret = iface->GetMediumFriendAvatar( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends014_GetLargeFriendAvatar( struct cppISteamFriends_SteamFriends014_GetLargeFriendAvatar_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    params->_ret = iface->GetLargeFriendAvatar( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends014_RequestUserInformation( struct cppISteamFriends_SteamFriends014_RequestUserInformation_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    params->_ret = iface->RequestUserInformation( params->steamIDUser, params->bRequireNameOnly );
}

void cppISteamFriends_SteamFriends014_RequestClanOfficerList( struct cppISteamFriends_SteamFriends014_RequestClanOfficerList_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    params->_ret = iface->RequestClanOfficerList( params->steamIDClan );
}

void cppISteamFriends_SteamFriends014_GetClanOwner( struct cppISteamFriends_SteamFriends014_GetClanOwner_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    *params->_ret = iface->GetClanOwner( params->steamIDClan );
}

void cppISteamFriends_SteamFriends014_GetClanOfficerCount( struct cppISteamFriends_SteamFriends014_GetClanOfficerCount_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    params->_ret = iface->GetClanOfficerCount( params->steamIDClan );
}

void cppISteamFriends_SteamFriends014_GetClanOfficerByIndex( struct cppISteamFriends_SteamFriends014_GetClanOfficerByIndex_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    *params->_ret = iface->GetClanOfficerByIndex( params->steamIDClan, params->iOfficer );
}

void cppISteamFriends_SteamFriends014_GetUserRestrictions( struct cppISteamFriends_SteamFriends014_GetUserRestrictions_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    params->_ret = iface->GetUserRestrictions(  );
}

void cppISteamFriends_SteamFriends014_SetRichPresence( struct cppISteamFriends_SteamFriends014_SetRichPresence_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    params->_ret = iface->SetRichPresence( params->pchKey, params->pchValue );
}

void cppISteamFriends_SteamFriends014_ClearRichPresence( struct cppISteamFriends_SteamFriends014_ClearRichPresence_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    iface->ClearRichPresence(  );
}

void cppISteamFriends_SteamFriends014_GetFriendRichPresence( struct cppISteamFriends_SteamFriends014_GetFriendRichPresence_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    params->_ret = iface->GetFriendRichPresence( params->steamIDFriend, params->pchKey );
}

void cppISteamFriends_SteamFriends014_GetFriendRichPresenceKeyCount( struct cppISteamFriends_SteamFriends014_GetFriendRichPresenceKeyCount_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    params->_ret = iface->GetFriendRichPresenceKeyCount( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends014_GetFriendRichPresenceKeyByIndex( struct cppISteamFriends_SteamFriends014_GetFriendRichPresenceKeyByIndex_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    params->_ret = iface->GetFriendRichPresenceKeyByIndex( params->steamIDFriend, params->iKey );
}

void cppISteamFriends_SteamFriends014_RequestFriendRichPresence( struct cppISteamFriends_SteamFriends014_RequestFriendRichPresence_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    iface->RequestFriendRichPresence( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends014_InviteUserToGame( struct cppISteamFriends_SteamFriends014_InviteUserToGame_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    params->_ret = iface->InviteUserToGame( params->steamIDFriend, params->pchConnectString );
}

void cppISteamFriends_SteamFriends014_GetCoplayFriendCount( struct cppISteamFriends_SteamFriends014_GetCoplayFriendCount_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    params->_ret = iface->GetCoplayFriendCount(  );
}

void cppISteamFriends_SteamFriends014_GetCoplayFriend( struct cppISteamFriends_SteamFriends014_GetCoplayFriend_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    *params->_ret = iface->GetCoplayFriend( params->iCoplayFriend );
}

void cppISteamFriends_SteamFriends014_GetFriendCoplayTime( struct cppISteamFriends_SteamFriends014_GetFriendCoplayTime_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    params->_ret = iface->GetFriendCoplayTime( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends014_GetFriendCoplayGame( struct cppISteamFriends_SteamFriends014_GetFriendCoplayGame_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    params->_ret = iface->GetFriendCoplayGame( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends014_JoinClanChatRoom( struct cppISteamFriends_SteamFriends014_JoinClanChatRoom_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    params->_ret = iface->JoinClanChatRoom( params->steamIDClan );
}

void cppISteamFriends_SteamFriends014_LeaveClanChatRoom( struct cppISteamFriends_SteamFriends014_LeaveClanChatRoom_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    params->_ret = iface->LeaveClanChatRoom( params->steamIDClan );
}

void cppISteamFriends_SteamFriends014_GetClanChatMemberCount( struct cppISteamFriends_SteamFriends014_GetClanChatMemberCount_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    params->_ret = iface->GetClanChatMemberCount( params->steamIDClan );
}

void cppISteamFriends_SteamFriends014_GetChatMemberByIndex( struct cppISteamFriends_SteamFriends014_GetChatMemberByIndex_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    *params->_ret = iface->GetChatMemberByIndex( params->steamIDClan, params->iUser );
}

void cppISteamFriends_SteamFriends014_SendClanChatMessage( struct cppISteamFriends_SteamFriends014_SendClanChatMessage_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    params->_ret = iface->SendClanChatMessage( params->steamIDClanChat, params->pchText );
}

void cppISteamFriends_SteamFriends014_GetClanChatMessage( struct cppISteamFriends_SteamFriends014_GetClanChatMessage_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    params->_ret = iface->GetClanChatMessage( params->steamIDClanChat, params->iMessage, params->prgchText, params->cchTextMax, params->peChatEntryType, params->psteamidChatter );
}

void cppISteamFriends_SteamFriends014_IsClanChatAdmin( struct cppISteamFriends_SteamFriends014_IsClanChatAdmin_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    params->_ret = iface->IsClanChatAdmin( params->steamIDClanChat, params->steamIDUser );
}

void cppISteamFriends_SteamFriends014_IsClanChatWindowOpenInSteam( struct cppISteamFriends_SteamFriends014_IsClanChatWindowOpenInSteam_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    params->_ret = iface->IsClanChatWindowOpenInSteam( params->steamIDClanChat );
}

void cppISteamFriends_SteamFriends014_OpenClanChatWindowInSteam( struct cppISteamFriends_SteamFriends014_OpenClanChatWindowInSteam_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    params->_ret = iface->OpenClanChatWindowInSteam( params->steamIDClanChat );
}

void cppISteamFriends_SteamFriends014_CloseClanChatWindowInSteam( struct cppISteamFriends_SteamFriends014_CloseClanChatWindowInSteam_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    params->_ret = iface->CloseClanChatWindowInSteam( params->steamIDClanChat );
}

void cppISteamFriends_SteamFriends014_SetListenForFriendsMessages( struct cppISteamFriends_SteamFriends014_SetListenForFriendsMessages_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    params->_ret = iface->SetListenForFriendsMessages( params->bInterceptEnabled );
}

void cppISteamFriends_SteamFriends014_ReplyToFriendMessage( struct cppISteamFriends_SteamFriends014_ReplyToFriendMessage_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    params->_ret = iface->ReplyToFriendMessage( params->steamIDFriend, params->pchMsgToSend );
}

void cppISteamFriends_SteamFriends014_GetFriendMessage( struct cppISteamFriends_SteamFriends014_GetFriendMessage_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    params->_ret = iface->GetFriendMessage( params->steamIDFriend, params->iMessageID, params->pvData, params->cubData, params->peChatEntryType );
}

void cppISteamFriends_SteamFriends014_GetFollowerCount( struct cppISteamFriends_SteamFriends014_GetFollowerCount_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    params->_ret = iface->GetFollowerCount( params->steamID );
}

void cppISteamFriends_SteamFriends014_IsFollowing( struct cppISteamFriends_SteamFriends014_IsFollowing_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    params->_ret = iface->IsFollowing( params->steamID );
}

void cppISteamFriends_SteamFriends014_EnumerateFollowingList( struct cppISteamFriends_SteamFriends014_EnumerateFollowingList_params *params )
{
    struct cppISteamFriends_SteamFriends014 *iface = (struct cppISteamFriends_SteamFriends014 *)params->linux_side;
    params->_ret = iface->EnumerateFollowingList( params->unStartIndex );
}

#ifdef __cplusplus
}
#endif
