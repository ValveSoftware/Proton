/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamFriends_SteamFriends002_GetPersonaName( void *args )
{
    struct ISteamFriends_SteamFriends002_GetPersonaName_params *params = (struct ISteamFriends_SteamFriends002_GetPersonaName_params *)args;
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    params->_ret = iface->GetPersonaName(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends002_SetPersonaName( void *args )
{
    struct ISteamFriends_SteamFriends002_SetPersonaName_params *params = (struct ISteamFriends_SteamFriends002_SetPersonaName_params *)args;
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    iface->SetPersonaName( params->pchPersonaName );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends002_GetPersonaState( void *args )
{
    struct ISteamFriends_SteamFriends002_GetPersonaState_params *params = (struct ISteamFriends_SteamFriends002_GetPersonaState_params *)args;
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    params->_ret = iface->GetPersonaState(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends002_SetPersonaState( void *args )
{
    struct ISteamFriends_SteamFriends002_SetPersonaState_params *params = (struct ISteamFriends_SteamFriends002_SetPersonaState_params *)args;
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    iface->SetPersonaState( params->ePersonaState );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends002_GetFriendCount( void *args )
{
    struct ISteamFriends_SteamFriends002_GetFriendCount_params *params = (struct ISteamFriends_SteamFriends002_GetFriendCount_params *)args;
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    params->_ret = iface->GetFriendCount( params->iFriendFlags );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends002_GetFriendByIndex( void *args )
{
    struct ISteamFriends_SteamFriends002_GetFriendByIndex_params *params = (struct ISteamFriends_SteamFriends002_GetFriendByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    *params->_ret = iface->GetFriendByIndex( params->iFriend, params->iFriendFlags );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends002_GetFriendRelationship( void *args )
{
    struct ISteamFriends_SteamFriends002_GetFriendRelationship_params *params = (struct ISteamFriends_SteamFriends002_GetFriendRelationship_params *)args;
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    params->_ret = iface->GetFriendRelationship( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends002_GetFriendPersonaState( void *args )
{
    struct ISteamFriends_SteamFriends002_GetFriendPersonaState_params *params = (struct ISteamFriends_SteamFriends002_GetFriendPersonaState_params *)args;
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaState( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends002_GetFriendPersonaName( void *args )
{
    struct ISteamFriends_SteamFriends002_GetFriendPersonaName_params *params = (struct ISteamFriends_SteamFriends002_GetFriendPersonaName_params *)args;
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaName( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends002_SetFriendRegValue( void *args )
{
    struct ISteamFriends_SteamFriends002_SetFriendRegValue_params *params = (struct ISteamFriends_SteamFriends002_SetFriendRegValue_params *)args;
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    iface->SetFriendRegValue( params->steamIDFriend, params->pchKey, params->pchValue );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends002_GetFriendRegValue( void *args )
{
    struct ISteamFriends_SteamFriends002_GetFriendRegValue_params *params = (struct ISteamFriends_SteamFriends002_GetFriendRegValue_params *)args;
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    params->_ret = iface->GetFriendRegValue( params->steamIDFriend, params->pchKey );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends002_GetFriendGamePlayed( void *args )
{
    struct ISteamFriends_SteamFriends002_GetFriendGamePlayed_params *params = (struct ISteamFriends_SteamFriends002_GetFriendGamePlayed_params *)args;
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    params->_ret = iface->GetFriendGamePlayed( params->steamIDFriend, params->pulGameID, params->punGameIP, params->pusGamePort, params->pusQueryPort );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends002_GetFriendPersonaNameHistory( void *args )
{
    struct ISteamFriends_SteamFriends002_GetFriendPersonaNameHistory_params *params = (struct ISteamFriends_SteamFriends002_GetFriendPersonaNameHistory_params *)args;
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaNameHistory( params->steamIDFriend, params->iPersonaName );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends002_AddFriend( void *args )
{
    struct ISteamFriends_SteamFriends002_AddFriend_params *params = (struct ISteamFriends_SteamFriends002_AddFriend_params *)args;
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    params->_ret = iface->AddFriend( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends002_RemoveFriend( void *args )
{
    struct ISteamFriends_SteamFriends002_RemoveFriend_params *params = (struct ISteamFriends_SteamFriends002_RemoveFriend_params *)args;
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    params->_ret = iface->RemoveFriend( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends002_HasFriend( void *args )
{
    struct ISteamFriends_SteamFriends002_HasFriend_params *params = (struct ISteamFriends_SteamFriends002_HasFriend_params *)args;
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    params->_ret = iface->HasFriend( params->steamIDFriend, params->iFriendFlags );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends002_AddFriendByName( void *args )
{
    struct ISteamFriends_SteamFriends002_AddFriendByName_params *params = (struct ISteamFriends_SteamFriends002_AddFriendByName_params *)args;
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    params->_ret = iface->AddFriendByName( params->pchEmailOrAccountName );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends002_InviteFriendByEmail( void *args )
{
    struct ISteamFriends_SteamFriends002_InviteFriendByEmail_params *params = (struct ISteamFriends_SteamFriends002_InviteFriendByEmail_params *)args;
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    params->_ret = iface->InviteFriendByEmail( params->pchEmailAccount );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends002_GetChatMessage( void *args )
{
    struct ISteamFriends_SteamFriends002_GetChatMessage_params *params = (struct ISteamFriends_SteamFriends002_GetChatMessage_params *)args;
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    params->_ret = iface->GetChatMessage( params->steamIDFriend, params->iChatID, params->pvData, params->cubData, params->peChatEntryType );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends002_SendMsgToFriend( void *args )
{
    struct ISteamFriends_SteamFriends002_SendMsgToFriend_params *params = (struct ISteamFriends_SteamFriends002_SendMsgToFriend_params *)args;
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    params->_ret = iface->SendMsgToFriend( params->steamIDFriend, params->eChatEntryType, params->pvMsgBody, params->cubMsgBody );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends002_GetChatIDOfChatHistoryStart( void *args )
{
    struct ISteamFriends_SteamFriends002_GetChatIDOfChatHistoryStart_params *params = (struct ISteamFriends_SteamFriends002_GetChatIDOfChatHistoryStart_params *)args;
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    params->_ret = iface->GetChatIDOfChatHistoryStart( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends002_SetChatHistoryStart( void *args )
{
    struct ISteamFriends_SteamFriends002_SetChatHistoryStart_params *params = (struct ISteamFriends_SteamFriends002_SetChatHistoryStart_params *)args;
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    iface->SetChatHistoryStart( params->steamIDFriend, params->iChatID );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends002_ClearChatHistory( void *args )
{
    struct ISteamFriends_SteamFriends002_ClearChatHistory_params *params = (struct ISteamFriends_SteamFriends002_ClearChatHistory_params *)args;
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    iface->ClearChatHistory( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends002_GetClanCount( void *args )
{
    struct ISteamFriends_SteamFriends002_GetClanCount_params *params = (struct ISteamFriends_SteamFriends002_GetClanCount_params *)args;
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    params->_ret = iface->GetClanCount(  );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends002_GetClanByIndex( void *args )
{
    struct ISteamFriends_SteamFriends002_GetClanByIndex_params *params = (struct ISteamFriends_SteamFriends002_GetClanByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    *params->_ret = iface->GetClanByIndex( params->iClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends002_GetClanName( void *args )
{
    struct ISteamFriends_SteamFriends002_GetClanName_params *params = (struct ISteamFriends_SteamFriends002_GetClanName_params *)args;
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    params->_ret = iface->GetClanName( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends002_InviteFriendToClan( void *args )
{
    struct ISteamFriends_SteamFriends002_InviteFriendToClan_params *params = (struct ISteamFriends_SteamFriends002_InviteFriendToClan_params *)args;
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    params->_ret = iface->InviteFriendToClan( params->steamIDFriend, params->steamIDClan );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends002_AcknowledgeInviteToClan( void *args )
{
    struct ISteamFriends_SteamFriends002_AcknowledgeInviteToClan_params *params = (struct ISteamFriends_SteamFriends002_AcknowledgeInviteToClan_params *)args;
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    params->_ret = iface->AcknowledgeInviteToClan( params->steamIDClan, params->bAcceptOrDenyClanInvite );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends002_GetFriendCountFromSource( void *args )
{
    struct ISteamFriends_SteamFriends002_GetFriendCountFromSource_params *params = (struct ISteamFriends_SteamFriends002_GetFriendCountFromSource_params *)args;
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    params->_ret = iface->GetFriendCountFromSource( params->steamIDSource );
    return 0;
}

NTSTATUS ISteamFriends_SteamFriends002_GetFriendFromSourceByIndex( void *args )
{
    struct ISteamFriends_SteamFriends002_GetFriendFromSourceByIndex_params *params = (struct ISteamFriends_SteamFriends002_GetFriendFromSourceByIndex_params *)args;
    struct u_ISteamFriends_SteamFriends002 *iface = (struct u_ISteamFriends_SteamFriends002 *)params->linux_side;
    *params->_ret = iface->GetFriendFromSourceByIndex( params->steamIDSource, params->iFriend );
    return 0;
}

