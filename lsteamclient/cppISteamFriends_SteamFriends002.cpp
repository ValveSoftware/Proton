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
const char * cppISteamFriends_SteamFriends002_GetPersonaName(void *linux_side)
{
    return ((ISteamFriends*)linux_side)->GetPersonaName();
}

void cppISteamFriends_SteamFriends002_SetPersonaName(void *linux_side, const char * pchPersonaName)
{
    ((ISteamFriends*)linux_side)->SetPersonaName((const char *)pchPersonaName);
}

EPersonaState cppISteamFriends_SteamFriends002_GetPersonaState(void *linux_side)
{
    return ((ISteamFriends*)linux_side)->GetPersonaState();
}

void cppISteamFriends_SteamFriends002_SetPersonaState(void *linux_side, EPersonaState ePersonaState)
{
    ((ISteamFriends*)linux_side)->SetPersonaState((EPersonaState)ePersonaState);
}

int cppISteamFriends_SteamFriends002_GetFriendCount(void *linux_side, int iFriendFlags)
{
    return ((ISteamFriends*)linux_side)->GetFriendCount((int)iFriendFlags);
}

CSteamID cppISteamFriends_SteamFriends002_GetFriendByIndex(void *linux_side, int iFriend, int iFriendFlags)
{
    return ((ISteamFriends*)linux_side)->GetFriendByIndex((int)iFriend, (int)iFriendFlags);
}

EFriendRelationship cppISteamFriends_SteamFriends002_GetFriendRelationship(void *linux_side, CSteamID steamIDFriend)
{
    return ((ISteamFriends*)linux_side)->GetFriendRelationship((CSteamID)steamIDFriend);
}

EPersonaState cppISteamFriends_SteamFriends002_GetFriendPersonaState(void *linux_side, CSteamID steamIDFriend)
{
    return ((ISteamFriends*)linux_side)->GetFriendPersonaState((CSteamID)steamIDFriend);
}

const char * cppISteamFriends_SteamFriends002_GetFriendPersonaName(void *linux_side, CSteamID steamIDFriend)
{
    return ((ISteamFriends*)linux_side)->GetFriendPersonaName((CSteamID)steamIDFriend);
}

void cppISteamFriends_SteamFriends002_SetFriendRegValue(void *linux_side, CSteamID steamIDFriend, const char * pchKey, const char * pchValue)
{
    ((ISteamFriends*)linux_side)->SetFriendRegValue((CSteamID)steamIDFriend, (const char *)pchKey, (const char *)pchValue);
}

const char * cppISteamFriends_SteamFriends002_GetFriendRegValue(void *linux_side, CSteamID steamIDFriend, const char * pchKey)
{
    return ((ISteamFriends*)linux_side)->GetFriendRegValue((CSteamID)steamIDFriend, (const char *)pchKey);
}

bool cppISteamFriends_SteamFriends002_GetFriendGamePlayed(void *linux_side, CSteamID steamIDFriend, uint64 * pulGameID, uint32 * punGameIP, uint16 * pusGamePort, uint16 * pusQueryPort)
{
    return ((ISteamFriends*)linux_side)->GetFriendGamePlayed((CSteamID)steamIDFriend, (uint64 *)pulGameID, (uint32 *)punGameIP, (uint16 *)pusGamePort, (uint16 *)pusQueryPort);
}

const char * cppISteamFriends_SteamFriends002_GetFriendPersonaNameHistory(void *linux_side, CSteamID steamIDFriend, int iPersonaName)
{
    return ((ISteamFriends*)linux_side)->GetFriendPersonaNameHistory((CSteamID)steamIDFriend, (int)iPersonaName);
}

bool cppISteamFriends_SteamFriends002_AddFriend(void *linux_side, CSteamID steamIDFriend)
{
    return ((ISteamFriends*)linux_side)->AddFriend((CSteamID)steamIDFriend);
}

bool cppISteamFriends_SteamFriends002_RemoveFriend(void *linux_side, CSteamID steamIDFriend)
{
    return ((ISteamFriends*)linux_side)->RemoveFriend((CSteamID)steamIDFriend);
}

bool cppISteamFriends_SteamFriends002_HasFriend(void *linux_side, CSteamID steamIDFriend, int iFriendFlags)
{
    return ((ISteamFriends*)linux_side)->HasFriend((CSteamID)steamIDFriend, (int)iFriendFlags);
}

int32 cppISteamFriends_SteamFriends002_AddFriendByName(void *linux_side, const char * pchEmailOrAccountName)
{
    return ((ISteamFriends*)linux_side)->AddFriendByName((const char *)pchEmailOrAccountName);
}

bool cppISteamFriends_SteamFriends002_InviteFriendByEmail(void *linux_side, const char * pchEmailAccount)
{
    return ((ISteamFriends*)linux_side)->InviteFriendByEmail((const char *)pchEmailAccount);
}

int cppISteamFriends_SteamFriends002_GetChatMessage(void *linux_side, CSteamID steamIDFriend, int iChatID, void * pvData, int cubData, EChatEntryType * peChatEntryType)
{
    return ((ISteamFriends*)linux_side)->GetChatMessage((CSteamID)steamIDFriend, (int)iChatID, (void *)pvData, (int)cubData, (EChatEntryType *)peChatEntryType);
}

bool cppISteamFriends_SteamFriends002_SendMsgToFriend(void *linux_side, CSteamID steamIDFriend, EChatEntryType eChatEntryType, const void * pvMsgBody, int cubMsgBody)
{
    return ((ISteamFriends*)linux_side)->SendMsgToFriend((CSteamID)steamIDFriend, (EChatEntryType)eChatEntryType, (const void *)pvMsgBody, (int)cubMsgBody);
}

int cppISteamFriends_SteamFriends002_GetChatIDOfChatHistoryStart(void *linux_side, CSteamID steamIDFriend)
{
    return ((ISteamFriends*)linux_side)->GetChatIDOfChatHistoryStart((CSteamID)steamIDFriend);
}

void cppISteamFriends_SteamFriends002_SetChatHistoryStart(void *linux_side, CSteamID steamIDFriend, int iChatID)
{
    ((ISteamFriends*)linux_side)->SetChatHistoryStart((CSteamID)steamIDFriend, (int)iChatID);
}

void cppISteamFriends_SteamFriends002_ClearChatHistory(void *linux_side, CSteamID steamIDFriend)
{
    ((ISteamFriends*)linux_side)->ClearChatHistory((CSteamID)steamIDFriend);
}

int cppISteamFriends_SteamFriends002_GetClanCount(void *linux_side)
{
    return ((ISteamFriends*)linux_side)->GetClanCount();
}

CSteamID cppISteamFriends_SteamFriends002_GetClanByIndex(void *linux_side, int iClan)
{
    return ((ISteamFriends*)linux_side)->GetClanByIndex((int)iClan);
}

const char * cppISteamFriends_SteamFriends002_GetClanName(void *linux_side, CSteamID steamIDClan)
{
    return ((ISteamFriends*)linux_side)->GetClanName((CSteamID)steamIDClan);
}

bool cppISteamFriends_SteamFriends002_InviteFriendToClan(void *linux_side, CSteamID steamIDFriend, CSteamID steamIDClan)
{
    return ((ISteamFriends*)linux_side)->InviteFriendToClan((CSteamID)steamIDFriend, (CSteamID)steamIDClan);
}

bool cppISteamFriends_SteamFriends002_AcknowledgeInviteToClan(void *linux_side, CSteamID steamIDClan, bool bAcceptOrDenyClanInvite)
{
    return ((ISteamFriends*)linux_side)->AcknowledgeInviteToClan((CSteamID)steamIDClan, (bool)bAcceptOrDenyClanInvite);
}

int cppISteamFriends_SteamFriends002_GetFriendCountFromSource(void *linux_side, CSteamID steamIDSource)
{
    return ((ISteamFriends*)linux_side)->GetFriendCountFromSource((CSteamID)steamIDSource);
}

CSteamID cppISteamFriends_SteamFriends002_GetFriendFromSourceByIndex(void *linux_side, CSteamID steamIDSource, int iFriend)
{
    return ((ISteamFriends*)linux_side)->GetFriendFromSourceByIndex((CSteamID)steamIDSource, (int)iFriend);
}

#ifdef __cplusplus
}
#endif
