#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_099x/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_099x
#include "struct_converters.h"
#include "cppISteamFriends_SteamFriends001.h"
void cppISteamFriends_SteamFriends001_GetPersonaName( struct cppISteamFriends_SteamFriends001_GetPersonaName_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetPersonaName(  );
}

void cppISteamFriends_SteamFriends001_SetPersonaName( struct cppISteamFriends_SteamFriends001_SetPersonaName_params *params )
{
    ((ISteamFriends*)params->linux_side)->SetPersonaName( (const char *)params->pchPersonaName );
}

void cppISteamFriends_SteamFriends001_GetPersonaState( struct cppISteamFriends_SteamFriends001_GetPersonaState_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetPersonaState(  );
}

void cppISteamFriends_SteamFriends001_SetPersonaState( struct cppISteamFriends_SteamFriends001_SetPersonaState_params *params )
{
    ((ISteamFriends*)params->linux_side)->SetPersonaState( (EPersonaState)params->ePersonaState );
}

void cppISteamFriends_SteamFriends001_AddFriend( struct cppISteamFriends_SteamFriends001_AddFriend_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->AddFriend( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends001_RemoveFriend( struct cppISteamFriends_SteamFriends001_RemoveFriend_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->RemoveFriend( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends001_HasFriend( struct cppISteamFriends_SteamFriends001_HasFriend_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->HasFriend( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends001_GetFriendRelationship( struct cppISteamFriends_SteamFriends001_GetFriendRelationship_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendRelationship( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends001_GetFriendPersonaState( struct cppISteamFriends_SteamFriends001_GetFriendPersonaState_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendPersonaState( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends001_Deprecated_GetFriendGamePlayed( struct cppISteamFriends_SteamFriends001_Deprecated_GetFriendGamePlayed_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->Deprecated_GetFriendGamePlayed( (CSteamID)params->steamIDFriend, (int32 *)params->pnGameID, (uint32 *)params->punGameIP, (uint16 *)params->pusGamePort );
}

void cppISteamFriends_SteamFriends001_GetFriendPersonaName( struct cppISteamFriends_SteamFriends001_GetFriendPersonaName_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendPersonaName( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends001_AddFriendByName( struct cppISteamFriends_SteamFriends001_AddFriendByName_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->AddFriendByName( (const char *)params->pchEmailOrAccountName );
}

void cppISteamFriends_SteamFriends001_GetFriendCount( struct cppISteamFriends_SteamFriends001_GetFriendCount_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendCount(  );
}

void cppISteamFriends_SteamFriends001_GetFriendByIndex( struct cppISteamFriends_SteamFriends001_GetFriendByIndex_params *params )
{
    *params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendByIndex( (int)params->iFriend );
}

void cppISteamFriends_SteamFriends001_SendMsgToFriend( struct cppISteamFriends_SteamFriends001_SendMsgToFriend_params *params )
{
    ((ISteamFriends*)params->linux_side)->SendMsgToFriend( (CSteamID)params->steamIDFriend, (EChatEntryType)params->eChatEntryType, (const char *)params->pchMsgBody );
}

void cppISteamFriends_SteamFriends001_SetFriendRegValue( struct cppISteamFriends_SteamFriends001_SetFriendRegValue_params *params )
{
    ((ISteamFriends*)params->linux_side)->SetFriendRegValue( (CSteamID)params->steamIDFriend, (const char *)params->pchKey, (const char *)params->pchValue );
}

void cppISteamFriends_SteamFriends001_GetFriendRegValue( struct cppISteamFriends_SteamFriends001_GetFriendRegValue_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendRegValue( (CSteamID)params->steamIDFriend, (const char *)params->pchKey );
}

void cppISteamFriends_SteamFriends001_GetFriendPersonaNameHistory( struct cppISteamFriends_SteamFriends001_GetFriendPersonaNameHistory_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendPersonaNameHistory( (CSteamID)params->steamIDFriend, (int)params->iPersonaName );
}

void cppISteamFriends_SteamFriends001_GetChatMessage( struct cppISteamFriends_SteamFriends001_GetChatMessage_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetChatMessage( (CSteamID)params->steamIDFriend, (int)params->iChatID, (void *)params->pvData, (int)params->cubData, (EChatEntryType *)params->peChatEntryType );
}

void cppISteamFriends_SteamFriends001_SendMsgToFriend_2( struct cppISteamFriends_SteamFriends001_SendMsgToFriend_2_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->SendMsgToFriend( (CSteamID)params->steamIDFriend, (EChatEntryType)params->eChatEntryType, (const void *)params->pvMsgBody, (int)params->cubMsgBody );
}

void cppISteamFriends_SteamFriends001_GetChatIDOfChatHistoryStart( struct cppISteamFriends_SteamFriends001_GetChatIDOfChatHistoryStart_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetChatIDOfChatHistoryStart( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends001_SetChatHistoryStart( struct cppISteamFriends_SteamFriends001_SetChatHistoryStart_params *params )
{
    ((ISteamFriends*)params->linux_side)->SetChatHistoryStart( (CSteamID)params->steamIDFriend, (int)params->iChatID );
}

void cppISteamFriends_SteamFriends001_ClearChatHistory( struct cppISteamFriends_SteamFriends001_ClearChatHistory_params *params )
{
    ((ISteamFriends*)params->linux_side)->ClearChatHistory( (CSteamID)params->steamIDFriend );
}

void cppISteamFriends_SteamFriends001_InviteFriendByEmail( struct cppISteamFriends_SteamFriends001_InviteFriendByEmail_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->InviteFriendByEmail( (const char *)params->pchEmailAccount );
}

void cppISteamFriends_SteamFriends001_GetBlockedFriendCount( struct cppISteamFriends_SteamFriends001_GetBlockedFriendCount_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetBlockedFriendCount(  );
}

void cppISteamFriends_SteamFriends001_GetFriendGamePlayed( struct cppISteamFriends_SteamFriends001_GetFriendGamePlayed_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendGamePlayed( (CSteamID)params->steamIDFriend, (uint64 *)params->pulGameID, (uint32 *)params->punGameIP, (uint16 *)params->pusGamePort );
}

void cppISteamFriends_SteamFriends001_GetFriendGamePlayed2( struct cppISteamFriends_SteamFriends001_GetFriendGamePlayed2_params *params )
{
    params->_ret = ((ISteamFriends*)params->linux_side)->GetFriendGamePlayed2( (CSteamID)params->steamIDFriend, (uint64 *)params->pulGameID, (uint32 *)params->punGameIP, (uint16 *)params->pusGamePort, (uint16 *)params->pusQueryPort );
}

#ifdef __cplusplus
}
#endif
