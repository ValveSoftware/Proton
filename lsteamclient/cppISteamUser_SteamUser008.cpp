#include "steam_defs.h"
#include "steamworks_sdk_099y/steam_api.h"
#include "steamclient_private.h"
#include "cppISteamUser_SteamUser008.h"
#ifdef __cplusplus
extern "C" {
#endif
#include "struct_converters_099y.h"
HSteamUser cppISteamUser_SteamUser008_GetHSteamUser(void *linux_side)
{
    return ((ISteamUser*)linux_side)->GetHSteamUser();
}

bool cppISteamUser_SteamUser008_BLoggedOn(void *linux_side)
{
    return ((ISteamUser*)linux_side)->BLoggedOn();
}

CSteamID cppISteamUser_SteamUser008_GetSteamID(void *linux_side)
{
    return ((ISteamUser*)linux_side)->GetSteamID();
}

int cppISteamUser_SteamUser008_InitiateGameConnection(void *linux_side, void * pBlob, int cbMaxBlob, CSteamID steamID, CGameID gameID, uint32 unIPServer, uint16 usPortServer, bool bSecure, void * pvSteam2GetEncryptionKey, int cbSteam2GetEncryptionKey)
{
    return ((ISteamUser*)linux_side)->InitiateGameConnection((void *)pBlob, (int)cbMaxBlob, (CSteamID)steamID, (CGameID)gameID, (uint32)unIPServer, (uint16)usPortServer, (bool)bSecure, (void *)pvSteam2GetEncryptionKey, (int)cbSteam2GetEncryptionKey);
}

void cppISteamUser_SteamUser008_TerminateGameConnection(void *linux_side, uint32 unIPServer, uint16 usPortServer)
{
    ((ISteamUser*)linux_side)->TerminateGameConnection((uint32)unIPServer, (uint16)usPortServer);
}

void cppISteamUser_SteamUser008_TrackAppUsageEvent(void *linux_side, CGameID gameID, int eAppUsageEvent, const char * pchExtraInfo)
{
    ((ISteamUser*)linux_side)->TrackAppUsageEvent((CGameID)gameID, (int)eAppUsageEvent, (const char *)pchExtraInfo);
}

void cppISteamUser_SteamUser008_RefreshSteam2Login(void *linux_side)
{
    ((ISteamUser*)linux_side)->RefreshSteam2Login();
}

#ifdef __cplusplus
}
#endif
