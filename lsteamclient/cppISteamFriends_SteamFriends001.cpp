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
const char * cppISteamFriends_SteamFriends001_GetPersonaName(void *linux_side)
{
    return ((ISteamFriends*)linux_side)->GetPersonaName();
}

void cppISteamFriends_SteamFriends001_SetPersonaName(void *linux_side, const char * pchPersonaName)
{
    ((ISteamFriends*)linux_side)->SetPersonaName((const char *)pchPersonaName);
}

EPersonaState cppISteamFriends_SteamFriends001_GetPersonaState(void *linux_side)
{
    return ((ISteamFriends*)linux_side)->GetPersonaState();
}

void cppISteamFriends_SteamFriends001_SetPersonaState(void *linux_side, EPersonaState ePersonaState)
{
    ((ISteamFriends*)linux_side)->SetPersonaState((EPersonaState)ePersonaState);
}

bool cppISteamFriends_SteamFriends001_AddFriend(void *linux_side, CSteamID steamIDFriend)
{
    return ((ISteamFriends*)linux_side)->AddFriend((CSteamID)steamIDFriend);
}

bool cppISteamFriends_SteamFriends001_RemoveFriend(void *linux_side, CSteamID steamIDFriend)
{
    return ((ISteamFriends*)linux_side)->RemoveFriend((CSteamID)steamIDFriend);
}

bool cppISteamFriends_SteamFriends001_HasFriend(void *linux_side, CSteamID steamIDFriend)
{
    return ((ISteamFriends*)linux_side)->HasFriend((CSteamID)steamIDFriend);
}

EFriendRelationship cppISteamFriends_SteamFriends001_GetFriendRelationship(void *linux_side, CSteamID steamIDFriend)
{
    return ((ISteamFriends*)linux_side)->GetFriendRelationship((CSteamID)steamIDFriend);
}

EPersonaState cppISteamFriends_SteamFriends001_GetFriendPersonaState(void *linux_side, CSteamID steamIDFriend)
{
    return ((ISteamFriends*)linux_side)->GetFriendPersonaState((CSteamID)steamIDFriend);
}

bool cppISteamFriends_SteamFriends001_Deprecated_GetFriendGamePlayed(void *linux_side, CSteamID steamIDFriend, int32 * pnGameID, uint32 * punGameIP, uint16 * pusGamePort)
{
    return ((ISteamFriends*)linux_side)->Deprecated_GetFriendGamePlayed((CSteamID)steamIDFriend, (int32 *)pnGameID, (uint32 *)punGameIP, (uint16 *)pusGamePort);
}

const char * cppISteamFriends_SteamFriends001_GetFriendPersonaName(void *linux_side, CSteamID steamIDFriend)
{
    return ((ISteamFriends*)linux_side)->GetFriendPersonaName((CSteamID)steamIDFriend);
}

int32 cppISteamFriends_SteamFriends001_AddFriendByName(void *linux_side, const char * pchEmailOrAccountName)
{
    return ((ISteamFriends*)linux_side)->AddFriendByName((const char *)pchEmailOrAccountName);
}

int cppISteamFriends_SteamFriends001_GetFriendCount(void *linux_side)
{
    return ((ISteamFriends*)linux_side)->GetFriendCount();
}

CSteamID cppISteamFriends_SteamFriends001_GetFriendByIndex(void *linux_side, int iFriend)
{
    return ((ISteamFriends*)linux_side)->GetFriendByIndex((int)iFriend);
}

void cppISteamFriends_SteamFriends001_SendMsgToFriend(void *linux_side, CSteamID steamIDFriend, EChatEntryType eChatEntryType, const char * pchMsgBody)
{
    ((ISteamFriends*)linux_side)->SendMsgToFriend((CSteamID)steamIDFriend, (EChatEntryType)eChatEntryType, (const char *)pchMsgBody);
}

void cppISteamFriends_SteamFriends001_SetFriendRegValue(void *linux_side, CSteamID steamIDFriend, const char * pchKey, const char * pchValue)
{
    ((ISteamFriends*)linux_side)->SetFriendRegValue((CSteamID)steamIDFriend, (const char *)pchKey, (const char *)pchValue);
}

const char * cppISteamFriends_SteamFriends001_GetFriendRegValue(void *linux_side, CSteamID steamIDFriend, const char * pchKey)
{
    return ((ISteamFriends*)linux_side)->GetFriendRegValue((CSteamID)steamIDFriend, (const char *)pchKey);
}

const char * cppISteamFriends_SteamFriends001_GetFriendPersonaNameHistory(void *linux_side, CSteamID steamIDFriend, int iPersonaName)
{
    return ((ISteamFriends*)linux_side)->GetFriendPersonaNameHistory((CSteamID)steamIDFriend, (int)iPersonaName);
}

int cppISteamFriends_SteamFriends001_GetChatMessage(void *linux_side, CSteamID steamIDFriend, int iChatID, void * pvData, int cubData, EChatEntryType * peChatEntryType)
{
    return ((ISteamFriends*)linux_side)->GetChatMessage((CSteamID)steamIDFriend, (int)iChatID, (void *)pvData, (int)cubData, (EChatEntryType *)peChatEntryType);
}

bool cppISteamFriends_SteamFriends001_SendMsgToFriend_2(void *linux_side, CSteamID steamIDFriend, EChatEntryType eChatEntryType, const void * pvMsgBody, int cubMsgBody)
{
    return ((ISteamFriends*)linux_side)->SendMsgToFriend((CSteamID)steamIDFriend, (EChatEntryType)eChatEntryType, (const void *)pvMsgBody, (int)cubMsgBody);
}

int cppISteamFriends_SteamFriends001_GetChatIDOfChatHistoryStart(void *linux_side, CSteamID steamIDFriend)
{
    return ((ISteamFriends*)linux_side)->GetChatIDOfChatHistoryStart((CSteamID)steamIDFriend);
}

void cppISteamFriends_SteamFriends001_SetChatHistoryStart(void *linux_side, CSteamID steamIDFriend, int iChatID)
{
    ((ISteamFriends*)linux_side)->SetChatHistoryStart((CSteamID)steamIDFriend, (int)iChatID);
}

void cppISteamFriends_SteamFriends001_ClearChatHistory(void *linux_side, CSteamID steamIDFriend)
{
    ((ISteamFriends*)linux_side)->ClearChatHistory((CSteamID)steamIDFriend);
}

bool cppISteamFriends_SteamFriends001_InviteFriendByEmail(void *linux_side, const char * pchEmailAccount)
{
    return ((ISteamFriends*)linux_side)->InviteFriendByEmail((const char *)pchEmailAccount);
}

int cppISteamFriends_SteamFriends001_GetBlockedFriendCount(void *linux_side)
{
    return ((ISteamFriends*)linux_side)->GetBlockedFriendCount();
}

bool cppISteamFriends_SteamFriends001_GetFriendGamePlayed(void *linux_side, CSteamID steamIDFriend, uint64 * pulGameID, uint32 * punGameIP, uint16 * pusGamePort)
{
    return ((ISteamFriends*)linux_side)->GetFriendGamePlayed((CSteamID)steamIDFriend, (uint64 *)pulGameID, (uint32 *)punGameIP, (uint16 *)pusGamePort);
}

bool cppISteamFriends_SteamFriends001_GetFriendGamePlayed2(void *linux_side, CSteamID steamIDFriend, uint64 * pulGameID, uint32 * punGameIP, uint16 * pusGamePort, uint16 * pusQueryPort)
{
    return ((ISteamFriends*)linux_side)->GetFriendGamePlayed2((CSteamID)steamIDFriend, (uint64 *)pulGameID, (uint32 *)punGameIP, (uint16 *)pusGamePort, (uint16 *)pusQueryPort);
}

#ifdef __cplusplus
}
#endif
