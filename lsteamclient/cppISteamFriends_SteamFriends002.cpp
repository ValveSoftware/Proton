/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamFriends_SteamFriends002.h"

void cppISteamFriends_SteamFriends002_GetPersonaName( struct cppISteamFriends_SteamFriends002_GetPersonaName_params *params )
{
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    params->_ret = iface->GetPersonaName(  );
}

void cppISteamFriends_SteamFriends002_SetPersonaName( struct cppISteamFriends_SteamFriends002_SetPersonaName_params *params )
{
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    iface->SetPersonaName( params->pchPersonaName );
}

void cppISteamFriends_SteamFriends002_GetPersonaState( struct cppISteamFriends_SteamFriends002_GetPersonaState_params *params )
{
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    params->_ret = iface->GetPersonaState(  );
}

void cppISteamFriends_SteamFriends002_SetPersonaState( struct cppISteamFriends_SteamFriends002_SetPersonaState_params *params )
{
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    iface->SetPersonaState( params->ePersonaState );
}

void cppISteamFriends_SteamFriends002_GetFriendCount( struct cppISteamFriends_SteamFriends002_GetFriendCount_params *params )
{
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    params->_ret = iface->GetFriendCount( params->iFriendFlags );
}

void cppISteamFriends_SteamFriends002_GetFriendByIndex( struct cppISteamFriends_SteamFriends002_GetFriendByIndex_params *params )
{
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    *params->_ret = iface->GetFriendByIndex( params->iFriend, params->iFriendFlags );
}

void cppISteamFriends_SteamFriends002_GetFriendRelationship( struct cppISteamFriends_SteamFriends002_GetFriendRelationship_params *params )
{
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    params->_ret = iface->GetFriendRelationship( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends002_GetFriendPersonaState( struct cppISteamFriends_SteamFriends002_GetFriendPersonaState_params *params )
{
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaState( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends002_GetFriendPersonaName( struct cppISteamFriends_SteamFriends002_GetFriendPersonaName_params *params )
{
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaName( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends002_SetFriendRegValue( struct cppISteamFriends_SteamFriends002_SetFriendRegValue_params *params )
{
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    iface->SetFriendRegValue( params->steamIDFriend, params->pchKey, params->pchValue );
}

void cppISteamFriends_SteamFriends002_GetFriendRegValue( struct cppISteamFriends_SteamFriends002_GetFriendRegValue_params *params )
{
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    params->_ret = iface->GetFriendRegValue( params->steamIDFriend, params->pchKey );
}

void cppISteamFriends_SteamFriends002_GetFriendGamePlayed( struct cppISteamFriends_SteamFriends002_GetFriendGamePlayed_params *params )
{
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    params->_ret = iface->GetFriendGamePlayed( params->steamIDFriend, params->pulGameID, params->punGameIP, params->pusGamePort, params->pusQueryPort );
}

void cppISteamFriends_SteamFriends002_GetFriendPersonaNameHistory( struct cppISteamFriends_SteamFriends002_GetFriendPersonaNameHistory_params *params )
{
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaNameHistory( params->steamIDFriend, params->iPersonaName );
}

void cppISteamFriends_SteamFriends002_AddFriend( struct cppISteamFriends_SteamFriends002_AddFriend_params *params )
{
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    params->_ret = iface->AddFriend( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends002_RemoveFriend( struct cppISteamFriends_SteamFriends002_RemoveFriend_params *params )
{
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    params->_ret = iface->RemoveFriend( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends002_HasFriend( struct cppISteamFriends_SteamFriends002_HasFriend_params *params )
{
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    params->_ret = iface->HasFriend( params->steamIDFriend, params->iFriendFlags );
}

void cppISteamFriends_SteamFriends002_AddFriendByName( struct cppISteamFriends_SteamFriends002_AddFriendByName_params *params )
{
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    params->_ret = iface->AddFriendByName( params->pchEmailOrAccountName );
}

void cppISteamFriends_SteamFriends002_InviteFriendByEmail( struct cppISteamFriends_SteamFriends002_InviteFriendByEmail_params *params )
{
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    params->_ret = iface->InviteFriendByEmail( params->pchEmailAccount );
}

void cppISteamFriends_SteamFriends002_GetChatMessage( struct cppISteamFriends_SteamFriends002_GetChatMessage_params *params )
{
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    params->_ret = iface->GetChatMessage( params->steamIDFriend, params->iChatID, params->pvData, params->cubData, params->peChatEntryType );
}

void cppISteamFriends_SteamFriends002_SendMsgToFriend( struct cppISteamFriends_SteamFriends002_SendMsgToFriend_params *params )
{
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    params->_ret = iface->SendMsgToFriend( params->steamIDFriend, params->eChatEntryType, params->pvMsgBody, params->cubMsgBody );
}

void cppISteamFriends_SteamFriends002_GetChatIDOfChatHistoryStart( struct cppISteamFriends_SteamFriends002_GetChatIDOfChatHistoryStart_params *params )
{
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    params->_ret = iface->GetChatIDOfChatHistoryStart( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends002_SetChatHistoryStart( struct cppISteamFriends_SteamFriends002_SetChatHistoryStart_params *params )
{
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    iface->SetChatHistoryStart( params->steamIDFriend, params->iChatID );
}

void cppISteamFriends_SteamFriends002_ClearChatHistory( struct cppISteamFriends_SteamFriends002_ClearChatHistory_params *params )
{
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    iface->ClearChatHistory( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends002_GetClanCount( struct cppISteamFriends_SteamFriends002_GetClanCount_params *params )
{
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    params->_ret = iface->GetClanCount(  );
}

void cppISteamFriends_SteamFriends002_GetClanByIndex( struct cppISteamFriends_SteamFriends002_GetClanByIndex_params *params )
{
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    *params->_ret = iface->GetClanByIndex( params->iClan );
}

void cppISteamFriends_SteamFriends002_GetClanName( struct cppISteamFriends_SteamFriends002_GetClanName_params *params )
{
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    params->_ret = iface->GetClanName( params->steamIDClan );
}

void cppISteamFriends_SteamFriends002_InviteFriendToClan( struct cppISteamFriends_SteamFriends002_InviteFriendToClan_params *params )
{
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    params->_ret = iface->InviteFriendToClan( params->steamIDFriend, params->steamIDClan );
}

void cppISteamFriends_SteamFriends002_AcknowledgeInviteToClan( struct cppISteamFriends_SteamFriends002_AcknowledgeInviteToClan_params *params )
{
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    params->_ret = iface->AcknowledgeInviteToClan( params->steamIDClan, params->bAcceptOrDenyClanInvite );
}

void cppISteamFriends_SteamFriends002_GetFriendCountFromSource( struct cppISteamFriends_SteamFriends002_GetFriendCountFromSource_params *params )
{
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    params->_ret = iface->GetFriendCountFromSource( params->steamIDSource );
}

void cppISteamFriends_SteamFriends002_GetFriendFromSourceByIndex( struct cppISteamFriends_SteamFriends002_GetFriendFromSourceByIndex_params *params )
{
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    *params->_ret = iface->GetFriendFromSourceByIndex( params->steamIDSource, params->iFriend );
}

