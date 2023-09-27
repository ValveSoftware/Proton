#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_099y/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_099y
#include "struct_converters.h"
#include "cppISteamFriends_SteamFriends002.h"
void cppISteamFriends_SteamFriends002_GetPersonaName( struct cppISteamFriends_SteamFriends002_GetPersonaName_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetPersonaName(  );
}

void cppISteamFriends_SteamFriends002_SetPersonaName( struct cppISteamFriends_SteamFriends002_SetPersonaName_params *params )
{
    ((ISteamFriends*)params->linux_side)->SetPersonaName( (const char *)params->pchPersonaName );
}

void cppISteamFriends_SteamFriends002_GetPersonaState( struct cppISteamFriends_SteamFriends002_GetPersonaState_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetPersonaState(  );
}

void cppISteamFriends_SteamFriends002_SetPersonaState( struct cppISteamFriends_SteamFriends002_SetPersonaState_params *params )
{
    ((ISteamFriends*)params->linux_side)->SetPersonaState( (EPersonaState)params->ePersonaState );
}

void cppISteamFriends_SteamFriends002_GetFriendCount( struct cppISteamFriends_SteamFriends002_GetFriendCount_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendCount( (int)params->iFriendFlags );
}

void cppISteamFriends_SteamFriends002_GetFriendByIndex( struct cppISteamFriends_SteamFriends002_GetFriendByIndex_params *params )
{
    *params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendByIndex( (int)params->iFriend, (int)params->iFriendFlags );
}

void cppISteamFriends_SteamFriends002_GetFriendRelationship( struct cppISteamFriends_SteamFriends002_GetFriendRelationship_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendRelationship( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends002_GetFriendPersonaState( struct cppISteamFriends_SteamFriends002_GetFriendPersonaState_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendPersonaState( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends002_GetFriendPersonaName( struct cppISteamFriends_SteamFriends002_GetFriendPersonaName_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendPersonaName( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends002_SetFriendRegValue( struct cppISteamFriends_SteamFriends002_SetFriendRegValue_params *params )
{
    ((ISteamFriends*)params->linux_side)->SetFriendRegValue( (CSteamID)params->steamIDFriend, (const char *)params->pchKey, (const char *)params->pchValue );
}

void cppISteamFriends_SteamFriends002_GetFriendRegValue( struct cppISteamFriends_SteamFriends002_GetFriendRegValue_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendRegValue( (CSteamID)params->steamIDFriend, (const char *)params->pchKey );
}

void cppISteamFriends_SteamFriends002_GetFriendGamePlayed( struct cppISteamFriends_SteamFriends002_GetFriendGamePlayed_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendGamePlayed( (CSteamID)params->steamIDFriend, (uint64 *)params->pulGameID, (uint32 *)params->punGameIP, (uint16 *)params->pusGamePort, (uint16 *)params->pusQueryPort );
}

void cppISteamFriends_SteamFriends002_GetFriendPersonaNameHistory( struct cppISteamFriends_SteamFriends002_GetFriendPersonaNameHistory_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendPersonaNameHistory( (CSteamID)params->steamIDFriend, (int)params->iPersonaName );
}

void cppISteamFriends_SteamFriends002_AddFriend( struct cppISteamFriends_SteamFriends002_AddFriend_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->AddFriend( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends002_RemoveFriend( struct cppISteamFriends_SteamFriends002_RemoveFriend_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->RemoveFriend( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends002_HasFriend( struct cppISteamFriends_SteamFriends002_HasFriend_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->HasFriend( (CSteamID)params->steamIDFriend, (int)params->iFriendFlags );
}

void cppISteamFriends_SteamFriends002_AddFriendByName( struct cppISteamFriends_SteamFriends002_AddFriendByName_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->AddFriendByName( (const char *)params->pchEmailOrAccountName );
}

void cppISteamFriends_SteamFriends002_InviteFriendByEmail( struct cppISteamFriends_SteamFriends002_InviteFriendByEmail_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->InviteFriendByEmail( (const char *)params->pchEmailAccount );
}

void cppISteamFriends_SteamFriends002_GetChatMessage( struct cppISteamFriends_SteamFriends002_GetChatMessage_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetChatMessage( (CSteamID)params->steamIDFriend, (int)params->iChatID, (void *)params->pvData, (int)params->cubData, (EChatEntryType *)params->peChatEntryType );
}

void cppISteamFriends_SteamFriends002_SendMsgToFriend( struct cppISteamFriends_SteamFriends002_SendMsgToFriend_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->SendMsgToFriend( (CSteamID)params->steamIDFriend, (EChatEntryType)params->eChatEntryType, (const void *)params->pvMsgBody, (int)params->cubMsgBody );
}

void cppISteamFriends_SteamFriends002_GetChatIDOfChatHistoryStart( struct cppISteamFriends_SteamFriends002_GetChatIDOfChatHistoryStart_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetChatIDOfChatHistoryStart( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends002_SetChatHistoryStart( struct cppISteamFriends_SteamFriends002_SetChatHistoryStart_params *params )
{
    ((ISteamFriends*)params->linux_side)->SetChatHistoryStart( (CSteamID)params->steamIDFriend, (int)params->iChatID );
}

void cppISteamFriends_SteamFriends002_ClearChatHistory( struct cppISteamFriends_SteamFriends002_ClearChatHistory_params *params )
{
    ((ISteamFriends*)params->linux_side)->ClearChatHistory( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends002_GetClanCount( struct cppISteamFriends_SteamFriends002_GetClanCount_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetClanCount(  );
}

void cppISteamFriends_SteamFriends002_GetClanByIndex( struct cppISteamFriends_SteamFriends002_GetClanByIndex_params *params )
{
    *params->_ret = ((ISteamFriends*)params->linux_side)->GetClanByIndex( (int)params->iClan );
}

void cppISteamFriends_SteamFriends002_GetClanName( struct cppISteamFriends_SteamFriends002_GetClanName_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetClanName( (CSteamID)params->steamIDClan );
}

void cppISteamFriends_SteamFriends002_InviteFriendToClan( struct cppISteamFriends_SteamFriends002_InviteFriendToClan_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->InviteFriendToClan( (CSteamID)params->steamIDFriend, (CSteamID)params->steamIDClan );
}

void cppISteamFriends_SteamFriends002_AcknowledgeInviteToClan( struct cppISteamFriends_SteamFriends002_AcknowledgeInviteToClan_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->AcknowledgeInviteToClan( (CSteamID)params->steamIDClan, (bool)params->bAcceptOrDenyClanInvite );
}

void cppISteamFriends_SteamFriends002_GetFriendCountFromSource( struct cppISteamFriends_SteamFriends002_GetFriendCountFromSource_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendCountFromSource( (CSteamID)params->steamIDSource );
}

void cppISteamFriends_SteamFriends002_GetFriendFromSourceByIndex( struct cppISteamFriends_SteamFriends002_GetFriendFromSourceByIndex_params *params )
{
    *params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendFromSourceByIndex( (CSteamID)params->steamIDSource, (int)params->iFriend );
}

#ifdef __cplusplus
}
#endif
