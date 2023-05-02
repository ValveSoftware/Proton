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
#include "cppISteamUser_SteamUser007.h"
HSteamUser cppISteamUser_SteamUser007_GetHSteamUser(void *linux_side)
{
    return ((ISteamUser*)linux_side)->GetHSteamUser();
}

void cppISteamUser_SteamUser007_LogOn(void *linux_side, CSteamID steamID)
{
    ((ISteamUser*)linux_side)->LogOn((CSteamID)steamID);
}

void cppISteamUser_SteamUser007_LogOff(void *linux_side)
{
    ((ISteamUser*)linux_side)->LogOff();
}

bool cppISteamUser_SteamUser007_BLoggedOn(void *linux_side)
{
    return ((ISteamUser*)linux_side)->BLoggedOn();
}

CSteamID cppISteamUser_SteamUser007_GetSteamID(void *linux_side)
{
    return ((ISteamUser*)linux_side)->GetSteamID();
}

bool cppISteamUser_SteamUser007_SetRegistryString(void *linux_side, EConfigSubTree eRegistrySubTree, const char * pchKey, const char * pchValue)
{
    return ((ISteamUser*)linux_side)->SetRegistryString((EConfigSubTree)eRegistrySubTree, (const char *)pchKey, (const char *)pchValue);
}

bool cppISteamUser_SteamUser007_GetRegistryString(void *linux_side, EConfigSubTree eRegistrySubTree, const char * pchKey, char * pchValue, int cbValue)
{
    return ((ISteamUser*)linux_side)->GetRegistryString((EConfigSubTree)eRegistrySubTree, (const char *)pchKey, (char *)pchValue, (int)cbValue);
}

bool cppISteamUser_SteamUser007_SetRegistryInt(void *linux_side, EConfigSubTree eRegistrySubTree, const char * pchKey, int iValue)
{
    return ((ISteamUser*)linux_side)->SetRegistryInt((EConfigSubTree)eRegistrySubTree, (const char *)pchKey, (int)iValue);
}

bool cppISteamUser_SteamUser007_GetRegistryInt(void *linux_side, EConfigSubTree eRegistrySubTree, const char * pchKey, int * piValue)
{
    return ((ISteamUser*)linux_side)->GetRegistryInt((EConfigSubTree)eRegistrySubTree, (const char *)pchKey, (int *)piValue);
}

int cppISteamUser_SteamUser007_InitiateGameConnection(void *linux_side, void * pBlob, int cbMaxBlob, CSteamID steamID, CGameID gameID, uint32 unIPServer, uint16 usPortServer, bool bSecure, void * pvSteam2GetEncryptionKey, int cbSteam2GetEncryptionKey)
{
    return ((ISteamUser*)linux_side)->InitiateGameConnection((void *)pBlob, (int)cbMaxBlob, (CSteamID)steamID, (CGameID)gameID, (uint32)unIPServer, (uint16)usPortServer, (bool)bSecure, (void *)pvSteam2GetEncryptionKey, (int)cbSteam2GetEncryptionKey);
}

void cppISteamUser_SteamUser007_TerminateGameConnection(void *linux_side, uint32 unIPServer, uint16 usPortServer)
{
    ((ISteamUser*)linux_side)->TerminateGameConnection((uint32)unIPServer, (uint16)usPortServer);
}

void cppISteamUser_SteamUser007_TrackAppUsageEvent(void *linux_side, CGameID gameID, int eAppUsageEvent, const char * pchExtraInfo)
{
    ((ISteamUser*)linux_side)->TrackAppUsageEvent((CGameID)gameID, (int)eAppUsageEvent, (const char *)pchExtraInfo);
}

void cppISteamUser_SteamUser007_RefreshSteam2Login(void *linux_side)
{
    ((ISteamUser*)linux_side)->RefreshSteam2Login();
}

#ifdef __cplusplus
}
#endif
