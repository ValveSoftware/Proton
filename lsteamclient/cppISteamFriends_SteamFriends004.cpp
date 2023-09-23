#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_102/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_102
#include "struct_converters.h"
#include "cppISteamFriends_SteamFriends004.h"
const char * cppISteamFriends_SteamFriends004_GetPersonaName(void *linux_side)
{
    const char *_ret;
    _ret = ((ISteamFriends*)linux_side)->GetPersonaName();
    return (_ret);
}

void cppISteamFriends_SteamFriends004_SetPersonaName(void *linux_side, const char *pchPersonaName)
{
    ((ISteamFriends*)linux_side)->SetPersonaName((const char *)pchPersonaName);
}

EPersonaState cppISteamFriends_SteamFriends004_GetPersonaState(void *linux_side)
{
    EPersonaState _ret;
    _ret = ((ISteamFriends*)linux_side)->GetPersonaState();
    return (_ret);
}

int cppISteamFriends_SteamFriends004_GetFriendCount(void *linux_side, int iFriendFlags)
{
    int _ret;
    _ret = ((ISteamFriends*)linux_side)->GetFriendCount((int)iFriendFlags);
    return (_ret);
}

CSteamID cppISteamFriends_SteamFriends004_GetFriendByIndex(void *linux_side, int iFriend, int iFriendFlags)
{
    CSteamID _ret;
    _ret = ((ISteamFriends*)linux_side)->GetFriendByIndex((int)iFriend, (int)iFriendFlags);
    return (_ret);
}

EFriendRelationship cppISteamFriends_SteamFriends004_GetFriendRelationship(void *linux_side, CSteamID steamIDFriend)
{
    EFriendRelationship _ret;
    _ret = ((ISteamFriends*)linux_side)->GetFriendRelationship((CSteamID)steamIDFriend);
    return (_ret);
}

EPersonaState cppISteamFriends_SteamFriends004_GetFriendPersonaState(void *linux_side, CSteamID steamIDFriend)
{
    EPersonaState _ret;
    _ret = ((ISteamFriends*)linux_side)->GetFriendPersonaState((CSteamID)steamIDFriend);
    return (_ret);
}

const char * cppISteamFriends_SteamFriends004_GetFriendPersonaName(void *linux_side, CSteamID steamIDFriend)
{
    const char *_ret;
    _ret = ((ISteamFriends*)linux_side)->GetFriendPersonaName((CSteamID)steamIDFriend);
    return (_ret);
}

int cppISteamFriends_SteamFriends004_GetFriendAvatar(void *linux_side, CSteamID steamIDFriend, int eAvatarSize)
{
    int _ret;
    _ret = ((ISteamFriends*)linux_side)->GetFriendAvatar((CSteamID)steamIDFriend, (int)eAvatarSize);
    return (_ret);
}

bool cppISteamFriends_SteamFriends004_GetFriendGamePlayed(void *linux_side, CSteamID steamIDFriend, uint64 *pulGameID, uint32 *punGameIP, uint16 *pusGamePort, uint16 *pusQueryPort)
{
    bool _ret;
    _ret = ((ISteamFriends*)linux_side)->GetFriendGamePlayed((CSteamID)steamIDFriend, (uint64 *)pulGameID, (uint32 *)punGameIP, (uint16 *)pusGamePort, (uint16 *)pusQueryPort);
    return (_ret);
}

const char * cppISteamFriends_SteamFriends004_GetFriendPersonaNameHistory(void *linux_side, CSteamID steamIDFriend, int iPersonaName)
{
    const char *_ret;
    _ret = ((ISteamFriends*)linux_side)->GetFriendPersonaNameHistory((CSteamID)steamIDFriend, (int)iPersonaName);
    return (_ret);
}

bool cppISteamFriends_SteamFriends004_HasFriend(void *linux_side, CSteamID steamIDFriend, int iFriendFlags)
{
    bool _ret;
    _ret = ((ISteamFriends*)linux_side)->HasFriend((CSteamID)steamIDFriend, (int)iFriendFlags);
    return (_ret);
}

int cppISteamFriends_SteamFriends004_GetClanCount(void *linux_side)
{
    int _ret;
    _ret = ((ISteamFriends*)linux_side)->GetClanCount();
    return (_ret);
}

CSteamID cppISteamFriends_SteamFriends004_GetClanByIndex(void *linux_side, int iClan)
{
    CSteamID _ret;
    _ret = ((ISteamFriends*)linux_side)->GetClanByIndex((int)iClan);
    return (_ret);
}

const char * cppISteamFriends_SteamFriends004_GetClanName(void *linux_side, CSteamID steamIDClan)
{
    const char *_ret;
    _ret = ((ISteamFriends*)linux_side)->GetClanName((CSteamID)steamIDClan);
    return (_ret);
}

int cppISteamFriends_SteamFriends004_GetFriendCountFromSource(void *linux_side, CSteamID steamIDSource)
{
    int _ret;
    _ret = ((ISteamFriends*)linux_side)->GetFriendCountFromSource((CSteamID)steamIDSource);
    return (_ret);
}

CSteamID cppISteamFriends_SteamFriends004_GetFriendFromSourceByIndex(void *linux_side, CSteamID steamIDSource, int iFriend)
{
    CSteamID _ret;
    _ret = ((ISteamFriends*)linux_side)->GetFriendFromSourceByIndex((CSteamID)steamIDSource, (int)iFriend);
    return (_ret);
}

bool cppISteamFriends_SteamFriends004_IsUserInSource(void *linux_side, CSteamID steamIDUser, CSteamID steamIDSource)
{
    bool _ret;
    _ret = ((ISteamFriends*)linux_side)->IsUserInSource((CSteamID)steamIDUser, (CSteamID)steamIDSource);
    return (_ret);
}

void cppISteamFriends_SteamFriends004_SetInGameVoiceSpeaking(void *linux_side, CSteamID steamIDUser, bool bSpeaking)
{
    ((ISteamFriends*)linux_side)->SetInGameVoiceSpeaking((CSteamID)steamIDUser, (bool)bSpeaking);
}

void cppISteamFriends_SteamFriends004_ActivateGameOverlay(void *linux_side, const char *pchDialog)
{
    ((ISteamFriends*)linux_side)->ActivateGameOverlay((const char *)pchDialog);
}

#ifdef __cplusplus
}
#endif
