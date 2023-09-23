#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_116/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_116
#include "struct_converters.h"
#include "cppISteamFriends_SteamFriends009.h"
const char * cppISteamFriends_SteamFriends009_GetPersonaName(void *linux_side)
{
    const char *_ret;
    _ret = ((ISteamFriends*)linux_side)->GetPersonaName();
    return (_ret);
}

void cppISteamFriends_SteamFriends009_SetPersonaName(void *linux_side, const char *pchPersonaName)
{
    ((ISteamFriends*)linux_side)->SetPersonaName((const char *)pchPersonaName);
}

EPersonaState cppISteamFriends_SteamFriends009_GetPersonaState(void *linux_side)
{
    EPersonaState _ret;
    _ret = ((ISteamFriends*)linux_side)->GetPersonaState();
    return (_ret);
}

int cppISteamFriends_SteamFriends009_GetFriendCount(void *linux_side, int iFriendFlags)
{
    int _ret;
    _ret = ((ISteamFriends*)linux_side)->GetFriendCount((int)iFriendFlags);
    return (_ret);
}

CSteamID cppISteamFriends_SteamFriends009_GetFriendByIndex(void *linux_side, int iFriend, int iFriendFlags)
{
    CSteamID _ret;
    _ret = ((ISteamFriends*)linux_side)->GetFriendByIndex((int)iFriend, (int)iFriendFlags);
    return (_ret);
}

EFriendRelationship cppISteamFriends_SteamFriends009_GetFriendRelationship(void *linux_side, CSteamID steamIDFriend)
{
    EFriendRelationship _ret;
    _ret = ((ISteamFriends*)linux_side)->GetFriendRelationship((CSteamID)steamIDFriend);
    return (_ret);
}

EPersonaState cppISteamFriends_SteamFriends009_GetFriendPersonaState(void *linux_side, CSteamID steamIDFriend)
{
    EPersonaState _ret;
    _ret = ((ISteamFriends*)linux_side)->GetFriendPersonaState((CSteamID)steamIDFriend);
    return (_ret);
}

const char * cppISteamFriends_SteamFriends009_GetFriendPersonaName(void *linux_side, CSteamID steamIDFriend)
{
    const char *_ret;
    _ret = ((ISteamFriends*)linux_side)->GetFriendPersonaName((CSteamID)steamIDFriend);
    return (_ret);
}

bool cppISteamFriends_SteamFriends009_GetFriendGamePlayed(void *linux_side, CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo)
{
    bool _ret;
    _ret = ((ISteamFriends*)linux_side)->GetFriendGamePlayed((CSteamID)steamIDFriend, (FriendGameInfo_t *)pFriendGameInfo);
    return (_ret);
}

const char * cppISteamFriends_SteamFriends009_GetFriendPersonaNameHistory(void *linux_side, CSteamID steamIDFriend, int iPersonaName)
{
    const char *_ret;
    _ret = ((ISteamFriends*)linux_side)->GetFriendPersonaNameHistory((CSteamID)steamIDFriend, (int)iPersonaName);
    return (_ret);
}

bool cppISteamFriends_SteamFriends009_HasFriend(void *linux_side, CSteamID steamIDFriend, int iFriendFlags)
{
    bool _ret;
    _ret = ((ISteamFriends*)linux_side)->HasFriend((CSteamID)steamIDFriend, (int)iFriendFlags);
    return (_ret);
}

int cppISteamFriends_SteamFriends009_GetClanCount(void *linux_side)
{
    int _ret;
    _ret = ((ISteamFriends*)linux_side)->GetClanCount();
    return (_ret);
}

CSteamID cppISteamFriends_SteamFriends009_GetClanByIndex(void *linux_side, int iClan)
{
    CSteamID _ret;
    _ret = ((ISteamFriends*)linux_side)->GetClanByIndex((int)iClan);
    return (_ret);
}

const char * cppISteamFriends_SteamFriends009_GetClanName(void *linux_side, CSteamID steamIDClan)
{
    const char *_ret;
    _ret = ((ISteamFriends*)linux_side)->GetClanName((CSteamID)steamIDClan);
    return (_ret);
}

const char * cppISteamFriends_SteamFriends009_GetClanTag(void *linux_side, CSteamID steamIDClan)
{
    const char *_ret;
    _ret = ((ISteamFriends*)linux_side)->GetClanTag((CSteamID)steamIDClan);
    return (_ret);
}

int cppISteamFriends_SteamFriends009_GetFriendCountFromSource(void *linux_side, CSteamID steamIDSource)
{
    int _ret;
    _ret = ((ISteamFriends*)linux_side)->GetFriendCountFromSource((CSteamID)steamIDSource);
    return (_ret);
}

CSteamID cppISteamFriends_SteamFriends009_GetFriendFromSourceByIndex(void *linux_side, CSteamID steamIDSource, int iFriend)
{
    CSteamID _ret;
    _ret = ((ISteamFriends*)linux_side)->GetFriendFromSourceByIndex((CSteamID)steamIDSource, (int)iFriend);
    return (_ret);
}

bool cppISteamFriends_SteamFriends009_IsUserInSource(void *linux_side, CSteamID steamIDUser, CSteamID steamIDSource)
{
    bool _ret;
    _ret = ((ISteamFriends*)linux_side)->IsUserInSource((CSteamID)steamIDUser, (CSteamID)steamIDSource);
    return (_ret);
}

void cppISteamFriends_SteamFriends009_SetInGameVoiceSpeaking(void *linux_side, CSteamID steamIDUser, bool bSpeaking)
{
    ((ISteamFriends*)linux_side)->SetInGameVoiceSpeaking((CSteamID)steamIDUser, (bool)bSpeaking);
}

void cppISteamFriends_SteamFriends009_ActivateGameOverlay(void *linux_side, const char *pchDialog)
{
    ((ISteamFriends*)linux_side)->ActivateGameOverlay((const char *)pchDialog);
}

void cppISteamFriends_SteamFriends009_ActivateGameOverlayToUser(void *linux_side, const char *pchDialog, CSteamID steamID)
{
    ((ISteamFriends*)linux_side)->ActivateGameOverlayToUser((const char *)pchDialog, (CSteamID)steamID);
}

void cppISteamFriends_SteamFriends009_ActivateGameOverlayToWebPage(void *linux_side, const char *pchURL)
{
    ((ISteamFriends*)linux_side)->ActivateGameOverlayToWebPage((const char *)pchURL);
}

void cppISteamFriends_SteamFriends009_ActivateGameOverlayToStore(void *linux_side, AppId_t nAppID)
{
    ((ISteamFriends*)linux_side)->ActivateGameOverlayToStore((AppId_t)nAppID);
}

void cppISteamFriends_SteamFriends009_SetPlayedWith(void *linux_side, CSteamID steamIDUserPlayedWith)
{
    ((ISteamFriends*)linux_side)->SetPlayedWith((CSteamID)steamIDUserPlayedWith);
}

void cppISteamFriends_SteamFriends009_ActivateGameOverlayInviteDialog(void *linux_side, CSteamID steamIDLobby)
{
    ((ISteamFriends*)linux_side)->ActivateGameOverlayInviteDialog((CSteamID)steamIDLobby);
}

int cppISteamFriends_SteamFriends009_GetSmallFriendAvatar(void *linux_side, CSteamID steamIDFriend)
{
    int _ret;
    _ret = ((ISteamFriends*)linux_side)->GetSmallFriendAvatar((CSteamID)steamIDFriend);
    return (_ret);
}

int cppISteamFriends_SteamFriends009_GetMediumFriendAvatar(void *linux_side, CSteamID steamIDFriend)
{
    int _ret;
    _ret = ((ISteamFriends*)linux_side)->GetMediumFriendAvatar((CSteamID)steamIDFriend);
    return (_ret);
}

int cppISteamFriends_SteamFriends009_GetLargeFriendAvatar(void *linux_side, CSteamID steamIDFriend)
{
    int _ret;
    _ret = ((ISteamFriends*)linux_side)->GetLargeFriendAvatar((CSteamID)steamIDFriend);
    return (_ret);
}

bool cppISteamFriends_SteamFriends009_RequestUserInformation(void *linux_side, CSteamID steamIDUser, bool bRequireNameOnly)
{
    bool _ret;
    _ret = ((ISteamFriends*)linux_side)->RequestUserInformation((CSteamID)steamIDUser, (bool)bRequireNameOnly);
    return (_ret);
}

SteamAPICall_t cppISteamFriends_SteamFriends009_RequestClanOfficerList(void *linux_side, CSteamID steamIDClan)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamFriends*)linux_side)->RequestClanOfficerList((CSteamID)steamIDClan);
    return (_ret);
}

CSteamID cppISteamFriends_SteamFriends009_GetClanOwner(void *linux_side, CSteamID steamIDClan)
{
    CSteamID _ret;
    _ret = ((ISteamFriends*)linux_side)->GetClanOwner((CSteamID)steamIDClan);
    return (_ret);
}

int cppISteamFriends_SteamFriends009_GetClanOfficerCount(void *linux_side, CSteamID steamIDClan)
{
    int _ret;
    _ret = ((ISteamFriends*)linux_side)->GetClanOfficerCount((CSteamID)steamIDClan);
    return (_ret);
}

CSteamID cppISteamFriends_SteamFriends009_GetClanOfficerByIndex(void *linux_side, CSteamID steamIDClan, int iOfficer)
{
    CSteamID _ret;
    _ret = ((ISteamFriends*)linux_side)->GetClanOfficerByIndex((CSteamID)steamIDClan, (int)iOfficer);
    return (_ret);
}

uint32 cppISteamFriends_SteamFriends009_GetUserRestrictions(void *linux_side)
{
    uint32 _ret;
    _ret = ((ISteamFriends*)linux_side)->GetUserRestrictions();
    return (_ret);
}

bool cppISteamFriends_SteamFriends009_SetRichPresence(void *linux_side, const char *pchKey, const char *pchValue)
{
    bool _ret;
    _ret = ((ISteamFriends*)linux_side)->SetRichPresence((const char *)pchKey, (const char *)pchValue);
    return (_ret);
}

void cppISteamFriends_SteamFriends009_ClearRichPresence(void *linux_side)
{
    ((ISteamFriends*)linux_side)->ClearRichPresence();
}

const char * cppISteamFriends_SteamFriends009_GetFriendRichPresence(void *linux_side, CSteamID steamIDFriend, const char *pchKey)
{
    const char *_ret;
    _ret = ((ISteamFriends*)linux_side)->GetFriendRichPresence((CSteamID)steamIDFriend, (const char *)pchKey);
    return (_ret);
}

int cppISteamFriends_SteamFriends009_GetFriendRichPresenceKeyCount(void *linux_side, CSteamID steamIDFriend)
{
    int _ret;
    _ret = ((ISteamFriends*)linux_side)->GetFriendRichPresenceKeyCount((CSteamID)steamIDFriend);
    return (_ret);
}

const char * cppISteamFriends_SteamFriends009_GetFriendRichPresenceKeyByIndex(void *linux_side, CSteamID steamIDFriend, int iKey)
{
    const char *_ret;
    _ret = ((ISteamFriends*)linux_side)->GetFriendRichPresenceKeyByIndex((CSteamID)steamIDFriend, (int)iKey);
    return (_ret);
}

bool cppISteamFriends_SteamFriends009_InviteUserToGame(void *linux_side, CSteamID steamIDFriend, const char *pchConnectString)
{
    bool _ret;
    _ret = ((ISteamFriends*)linux_side)->InviteUserToGame((CSteamID)steamIDFriend, (const char *)pchConnectString);
    return (_ret);
}

int cppISteamFriends_SteamFriends009_GetCoplayFriendCount(void *linux_side)
{
    int _ret;
    _ret = ((ISteamFriends*)linux_side)->GetCoplayFriendCount();
    return (_ret);
}

CSteamID cppISteamFriends_SteamFriends009_GetCoplayFriend(void *linux_side, int iCoplayFriend)
{
    CSteamID _ret;
    _ret = ((ISteamFriends*)linux_side)->GetCoplayFriend((int)iCoplayFriend);
    return (_ret);
}

int cppISteamFriends_SteamFriends009_GetFriendCoplayTime(void *linux_side, CSteamID steamIDFriend)
{
    int _ret;
    _ret = ((ISteamFriends*)linux_side)->GetFriendCoplayTime((CSteamID)steamIDFriend);
    return (_ret);
}

AppId_t cppISteamFriends_SteamFriends009_GetFriendCoplayGame(void *linux_side, CSteamID steamIDFriend)
{
    AppId_t _ret;
    _ret = ((ISteamFriends*)linux_side)->GetFriendCoplayGame((CSteamID)steamIDFriend);
    return (_ret);
}

#ifdef __cplusplus
}
#endif
