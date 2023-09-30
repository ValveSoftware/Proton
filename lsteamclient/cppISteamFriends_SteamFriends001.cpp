/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamFriends_SteamFriends001.h"

void cppISteamFriends_SteamFriends001_GetPersonaName( struct cppISteamFriends_SteamFriends001_GetPersonaName_params *params )
{
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->GetPersonaName(  );
}

void cppISteamFriends_SteamFriends001_SetPersonaName( struct cppISteamFriends_SteamFriends001_SetPersonaName_params *params )
{
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    iface->SetPersonaName( params->pchPersonaName );
}

void cppISteamFriends_SteamFriends001_GetPersonaState( struct cppISteamFriends_SteamFriends001_GetPersonaState_params *params )
{
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->GetPersonaState(  );
}

void cppISteamFriends_SteamFriends001_SetPersonaState( struct cppISteamFriends_SteamFriends001_SetPersonaState_params *params )
{
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    iface->SetPersonaState( params->ePersonaState );
}

void cppISteamFriends_SteamFriends001_AddFriend( struct cppISteamFriends_SteamFriends001_AddFriend_params *params )
{
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->AddFriend( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends001_RemoveFriend( struct cppISteamFriends_SteamFriends001_RemoveFriend_params *params )
{
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->RemoveFriend( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends001_HasFriend( struct cppISteamFriends_SteamFriends001_HasFriend_params *params )
{
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->HasFriend( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends001_GetFriendRelationship( struct cppISteamFriends_SteamFriends001_GetFriendRelationship_params *params )
{
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->GetFriendRelationship( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends001_GetFriendPersonaState( struct cppISteamFriends_SteamFriends001_GetFriendPersonaState_params *params )
{
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaState( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends001_Deprecated_GetFriendGamePlayed( struct cppISteamFriends_SteamFriends001_Deprecated_GetFriendGamePlayed_params *params )
{
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->Deprecated_GetFriendGamePlayed( params->steamIDFriend, params->pnGameID, params->punGameIP, params->pusGamePort );
}

void cppISteamFriends_SteamFriends001_GetFriendPersonaName( struct cppISteamFriends_SteamFriends001_GetFriendPersonaName_params *params )
{
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaName( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends001_AddFriendByName( struct cppISteamFriends_SteamFriends001_AddFriendByName_params *params )
{
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->AddFriendByName( params->pchEmailOrAccountName );
}

void cppISteamFriends_SteamFriends001_GetFriendCount( struct cppISteamFriends_SteamFriends001_GetFriendCount_params *params )
{
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->GetFriendCount(  );
}

void cppISteamFriends_SteamFriends001_GetFriendByIndex( struct cppISteamFriends_SteamFriends001_GetFriendByIndex_params *params )
{
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    *params->_ret = iface->GetFriendByIndex( params->iFriend );
}

void cppISteamFriends_SteamFriends001_SendMsgToFriend( struct cppISteamFriends_SteamFriends001_SendMsgToFriend_params *params )
{
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    iface->SendMsgToFriend( params->steamIDFriend, params->eChatEntryType, params->pchMsgBody );
}

void cppISteamFriends_SteamFriends001_SetFriendRegValue( struct cppISteamFriends_SteamFriends001_SetFriendRegValue_params *params )
{
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    iface->SetFriendRegValue( params->steamIDFriend, params->pchKey, params->pchValue );
}

void cppISteamFriends_SteamFriends001_GetFriendRegValue( struct cppISteamFriends_SteamFriends001_GetFriendRegValue_params *params )
{
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->GetFriendRegValue( params->steamIDFriend, params->pchKey );
}

void cppISteamFriends_SteamFriends001_GetFriendPersonaNameHistory( struct cppISteamFriends_SteamFriends001_GetFriendPersonaNameHistory_params *params )
{
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaNameHistory( params->steamIDFriend, params->iPersonaName );
}

void cppISteamFriends_SteamFriends001_GetChatMessage( struct cppISteamFriends_SteamFriends001_GetChatMessage_params *params )
{
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->GetChatMessage( params->steamIDFriend, params->iChatID, params->pvData, params->cubData, params->peChatEntryType );
}

void cppISteamFriends_SteamFriends001_SendMsgToFriend_2( struct cppISteamFriends_SteamFriends001_SendMsgToFriend_2_params *params )
{
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->SendMsgToFriend( params->steamIDFriend, params->eChatEntryType, params->pvMsgBody, params->cubMsgBody );
}

void cppISteamFriends_SteamFriends001_GetChatIDOfChatHistoryStart( struct cppISteamFriends_SteamFriends001_GetChatIDOfChatHistoryStart_params *params )
{
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->GetChatIDOfChatHistoryStart( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends001_SetChatHistoryStart( struct cppISteamFriends_SteamFriends001_SetChatHistoryStart_params *params )
{
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    iface->SetChatHistoryStart( params->steamIDFriend, params->iChatID );
}

void cppISteamFriends_SteamFriends001_ClearChatHistory( struct cppISteamFriends_SteamFriends001_ClearChatHistory_params *params )
{
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    iface->ClearChatHistory( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends001_InviteFriendByEmail( struct cppISteamFriends_SteamFriends001_InviteFriendByEmail_params *params )
{
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->InviteFriendByEmail( params->pchEmailAccount );
}

void cppISteamFriends_SteamFriends001_GetBlockedFriendCount( struct cppISteamFriends_SteamFriends001_GetBlockedFriendCount_params *params )
{
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->GetBlockedFriendCount(  );
}

void cppISteamFriends_SteamFriends001_GetFriendGamePlayed( struct cppISteamFriends_SteamFriends001_GetFriendGamePlayed_params *params )
{
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->GetFriendGamePlayed( params->steamIDFriend, params->pulGameID, params->punGameIP, params->pusGamePort );
}

void cppISteamFriends_SteamFriends001_GetFriendGamePlayed2( struct cppISteamFriends_SteamFriends001_GetFriendGamePlayed2_params *params )
{
    struct u_ISteamFriends_SteamFriends001 *iface = (struct u_ISteamFriends_SteamFriends001 *)params->linux_side;
    params->_ret = iface->GetFriendGamePlayed2( params->steamIDFriend, params->pulGameID, params->punGameIP, params->pusGamePort, params->pusQueryPort );
}

