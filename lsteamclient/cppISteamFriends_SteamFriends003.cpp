#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_101/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_101
#include "struct_converters.h"
#include "cppISteamFriends_SteamFriends003.h"
const char * cppISteamFriends_SteamFriends003_GetPersonaName(void *linux_side)
{
    return ((ISteamFriends*)linux_side)->GetPersonaName();
}

void cppISteamFriends_SteamFriends003_SetPersonaName(void *linux_side, const char * pchPersonaName)
{
    ((ISteamFriends*)linux_side)->SetPersonaName((const char *)pchPersonaName);
}

EPersonaState cppISteamFriends_SteamFriends003_GetPersonaState(void *linux_side)
{
    return ((ISteamFriends*)linux_side)->GetPersonaState();
}

int cppISteamFriends_SteamFriends003_GetFriendCount(void *linux_side, int iFriendFlags)
{
    return ((ISteamFriends*)linux_side)->GetFriendCount((int)iFriendFlags);
}

CSteamID cppISteamFriends_SteamFriends003_GetFriendByIndex(void *linux_side, int iFriend, int iFriendFlags)
{
    return ((ISteamFriends*)linux_side)->GetFriendByIndex((int)iFriend, (int)iFriendFlags);
}

EFriendRelationship cppISteamFriends_SteamFriends003_GetFriendRelationship(void *linux_side, CSteamID steamIDFriend)
{
    return ((ISteamFriends*)linux_side)->GetFriendRelationship((CSteamID)steamIDFriend);
}

EPersonaState cppISteamFriends_SteamFriends003_GetFriendPersonaState(void *linux_side, CSteamID steamIDFriend)
{
    return ((ISteamFriends*)linux_side)->GetFriendPersonaState((CSteamID)steamIDFriend);
}

const char * cppISteamFriends_SteamFriends003_GetFriendPersonaName(void *linux_side, CSteamID steamIDFriend)
{
    return ((ISteamFriends*)linux_side)->GetFriendPersonaName((CSteamID)steamIDFriend);
}

int cppISteamFriends_SteamFriends003_GetFriendAvatar(void *linux_side, CSteamID steamIDFriend)
{
    return ((ISteamFriends*)linux_side)->GetFriendAvatar((CSteamID)steamIDFriend);
}

bool cppISteamFriends_SteamFriends003_GetFriendGamePlayed(void *linux_side, CSteamID steamIDFriend, uint64 * pulGameID, uint32 * punGameIP, uint16 * pusGamePort, uint16 * pusQueryPort)
{
    return ((ISteamFriends*)linux_side)->GetFriendGamePlayed((CSteamID)steamIDFriend, (uint64 *)pulGameID, (uint32 *)punGameIP, (uint16 *)pusGamePort, (uint16 *)pusQueryPort);
}

const char * cppISteamFriends_SteamFriends003_GetFriendPersonaNameHistory(void *linux_side, CSteamID steamIDFriend, int iPersonaName)
{
    return ((ISteamFriends*)linux_side)->GetFriendPersonaNameHistory((CSteamID)steamIDFriend, (int)iPersonaName);
}

bool cppISteamFriends_SteamFriends003_HasFriend(void *linux_side, CSteamID steamIDFriend, int iFriendFlags)
{
    return ((ISteamFriends*)linux_side)->HasFriend((CSteamID)steamIDFriend, (int)iFriendFlags);
}

int cppISteamFriends_SteamFriends003_GetClanCount(void *linux_side)
{
    return ((ISteamFriends*)linux_side)->GetClanCount();
}

CSteamID cppISteamFriends_SteamFriends003_GetClanByIndex(void *linux_side, int iClan)
{
    return ((ISteamFriends*)linux_side)->GetClanByIndex((int)iClan);
}

const char * cppISteamFriends_SteamFriends003_GetClanName(void *linux_side, CSteamID steamIDClan)
{
    return ((ISteamFriends*)linux_side)->GetClanName((CSteamID)steamIDClan);
}

int cppISteamFriends_SteamFriends003_GetFriendCountFromSource(void *linux_side, CSteamID steamIDSource)
{
    return ((ISteamFriends*)linux_side)->GetFriendCountFromSource((CSteamID)steamIDSource);
}

CSteamID cppISteamFriends_SteamFriends003_GetFriendFromSourceByIndex(void *linux_side, CSteamID steamIDSource, int iFriend)
{
    return ((ISteamFriends*)linux_side)->GetFriendFromSourceByIndex((CSteamID)steamIDSource, (int)iFriend);
}

bool cppISteamFriends_SteamFriends003_IsUserInSource(void *linux_side, CSteamID steamIDUser, CSteamID steamIDSource)
{
    return ((ISteamFriends*)linux_side)->IsUserInSource((CSteamID)steamIDUser, (CSteamID)steamIDSource);
}

void cppISteamFriends_SteamFriends003_SetInGameVoiceSpeaking(void *linux_side, CSteamID steamIDUser, bool bSpeaking)
{
    ((ISteamFriends*)linux_side)->SetInGameVoiceSpeaking((CSteamID)steamIDUser, (bool)bSpeaking);
}

void cppISteamFriends_SteamFriends003_ActivateGameOverlay(void *linux_side, const char * pchDialog)
{
    ((ISteamFriends*)linux_side)->ActivateGameOverlay((const char *)pchDialog);
}

#ifdef __cplusplus
}
#endif
