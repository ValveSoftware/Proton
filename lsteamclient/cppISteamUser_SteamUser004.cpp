#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_099u/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_099u
#include "struct_converters.h"
#include "cppISteamUser_SteamUser004.h"
HSteamUser cppISteamUser_SteamUser004_GetHSteamUser(void *linux_side)
{
    HSteamUser _ret;
    _ret = ((ISteamUser*)linux_side)->GetHSteamUser();
    return (_ret);
}

void cppISteamUser_SteamUser004_LogOn(void *linux_side, CSteamID steamID)
{
    ((ISteamUser*)linux_side)->LogOn((CSteamID)steamID);
}

void cppISteamUser_SteamUser004_LogOff(void *linux_side)
{
    ((ISteamUser*)linux_side)->LogOff();
}

bool cppISteamUser_SteamUser004_BLoggedOn(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamUser*)linux_side)->BLoggedOn();
    return (_ret);
}

ELogonState cppISteamUser_SteamUser004_GetLogonState(void *linux_side)
{
    ELogonState _ret;
    _ret = ((ISteamUser*)linux_side)->GetLogonState();
    return (_ret);
}

bool cppISteamUser_SteamUser004_BConnected(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamUser*)linux_side)->BConnected();
    return (_ret);
}

CSteamID cppISteamUser_SteamUser004_GetSteamID(void *linux_side)
{
    CSteamID _ret;
    _ret = ((ISteamUser*)linux_side)->GetSteamID();
    return (_ret);
}

bool cppISteamUser_SteamUser004_IsVACBanned(void *linux_side, int nGameID)
{
    bool _ret;
    _ret = ((ISteamUser*)linux_side)->IsVACBanned((int)nGameID);
    return (_ret);
}

bool cppISteamUser_SteamUser004_RequireShowVACBannedMessage(void *linux_side, int nGameID)
{
    bool _ret;
    _ret = ((ISteamUser*)linux_side)->RequireShowVACBannedMessage((int)nGameID);
    return (_ret);
}

void cppISteamUser_SteamUser004_AcknowledgeVACBanning(void *linux_side, int nGameID)
{
    ((ISteamUser*)linux_side)->AcknowledgeVACBanning((int)nGameID);
}

int cppISteamUser_SteamUser004_NClientGameIDAdd(void *linux_side, int nGameID)
{
    int _ret;
    _ret = ((ISteamUser*)linux_side)->NClientGameIDAdd((int)nGameID);
    return (_ret);
}

void cppISteamUser_SteamUser004_RemoveClientGame(void *linux_side, int nClientGameID)
{
    ((ISteamUser*)linux_side)->RemoveClientGame((int)nClientGameID);
}

void cppISteamUser_SteamUser004_SetClientGameServer(void *linux_side, int nClientGameID, uint32 unIPServer, uint16 usPortServer)
{
    ((ISteamUser*)linux_side)->SetClientGameServer((int)nClientGameID, (uint32)unIPServer, (uint16)usPortServer);
}

void cppISteamUser_SteamUser004_SetSteam2Ticket(void *linux_side, uint8 *pubTicket, int cubTicket)
{
    ((ISteamUser*)linux_side)->SetSteam2Ticket((uint8 *)pubTicket, (int)cubTicket);
}

void cppISteamUser_SteamUser004_AddServerNetAddress(void *linux_side, uint32 unIP, uint16 unPort)
{
    ((ISteamUser*)linux_side)->AddServerNetAddress((uint32)unIP, (uint16)unPort);
}

bool cppISteamUser_SteamUser004_SetEmail(void *linux_side, const char *pchEmail)
{
    bool _ret;
    _ret = ((ISteamUser*)linux_side)->SetEmail((const char *)pchEmail);
    return (_ret);
}

int cppISteamUser_SteamUser004_GetSteamGameConnectToken(void *linux_side, void *pBlob, int cbMaxBlob)
{
    int _ret;
    _ret = ((ISteamUser*)linux_side)->GetSteamGameConnectToken((void *)pBlob, (int)cbMaxBlob);
    return (_ret);
}

bool cppISteamUser_SteamUser004_SetRegistryString(void *linux_side, EConfigSubTree eRegistrySubTree, const char *pchKey, const char *pchValue)
{
    bool _ret;
    _ret = ((ISteamUser*)linux_side)->SetRegistryString((EConfigSubTree)eRegistrySubTree, (const char *)pchKey, (const char *)pchValue);
    return (_ret);
}

bool cppISteamUser_SteamUser004_GetRegistryString(void *linux_side, EConfigSubTree eRegistrySubTree, const char *pchKey, char *pchValue, int cbValue)
{
    bool _ret;
    _ret = ((ISteamUser*)linux_side)->GetRegistryString((EConfigSubTree)eRegistrySubTree, (const char *)pchKey, (char *)pchValue, (int)cbValue);
    return (_ret);
}

bool cppISteamUser_SteamUser004_SetRegistryInt(void *linux_side, EConfigSubTree eRegistrySubTree, const char *pchKey, int iValue)
{
    bool _ret;
    _ret = ((ISteamUser*)linux_side)->SetRegistryInt((EConfigSubTree)eRegistrySubTree, (const char *)pchKey, (int)iValue);
    return (_ret);
}

bool cppISteamUser_SteamUser004_GetRegistryInt(void *linux_side, EConfigSubTree eRegistrySubTree, const char *pchKey, int *piValue)
{
    bool _ret;
    _ret = ((ISteamUser*)linux_side)->GetRegistryInt((EConfigSubTree)eRegistrySubTree, (const char *)pchKey, (int *)piValue);
    return (_ret);
}

int cppISteamUser_SteamUser004_InitiateGameConnection(void *linux_side, void *pBlob, int cbMaxBlob, CSteamID steamID, int nGameAppID, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    int _ret;
    _ret = ((ISteamUser*)linux_side)->InitiateGameConnection((void *)pBlob, (int)cbMaxBlob, (CSteamID)steamID, (int)nGameAppID, (uint32)unIPServer, (uint16)usPortServer, (bool)bSecure);
    return (_ret);
}

void cppISteamUser_SteamUser004_TerminateGameConnection(void *linux_side, uint32 unIPServer, uint16 usPortServer)
{
    ((ISteamUser*)linux_side)->TerminateGameConnection((uint32)unIPServer, (uint16)usPortServer);
}

void cppISteamUser_SteamUser004_SetSelfAsPrimaryChatDestination(void *linux_side)
{
    ((ISteamUser*)linux_side)->SetSelfAsPrimaryChatDestination();
}

bool cppISteamUser_SteamUser004_IsPrimaryChatDestination(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamUser*)linux_side)->IsPrimaryChatDestination();
    return (_ret);
}

void cppISteamUser_SteamUser004_RequestLegacyCDKey(void *linux_side, uint32 iAppID)
{
    ((ISteamUser*)linux_side)->RequestLegacyCDKey((uint32)iAppID);
}

#ifdef __cplusplus
}
#endif
