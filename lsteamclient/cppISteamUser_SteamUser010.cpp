#include "steamclient_private.h"
#include "steam_defs.h"
#include "steamworks_sdk_101/steam_api.h"
#include "cppISteamUser_SteamUser010.h"
#ifdef __cplusplus
extern "C" {
#endif
HSteamUser cppISteamUser_SteamUser010_GetHSteamUser(void *linux_side)
{
    return ((ISteamUser*)linux_side)->GetHSteamUser();
}

bool cppISteamUser_SteamUser010_BLoggedOn(void *linux_side)
{
    return ((ISteamUser*)linux_side)->BLoggedOn();
}

CSteamID cppISteamUser_SteamUser010_GetSteamID(void *linux_side)
{
    return ((ISteamUser*)linux_side)->GetSteamID();
}

int cppISteamUser_SteamUser010_InitiateGameConnection(void *linux_side, void * pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    return ((ISteamUser*)linux_side)->InitiateGameConnection((void *)pAuthBlob, (int)cbMaxAuthBlob, (CSteamID)steamIDGameServer, (uint32)unIPServer, (uint16)usPortServer, (bool)bSecure);
}

void cppISteamUser_SteamUser010_TerminateGameConnection(void *linux_side, uint32 unIPServer, uint16 usPortServer)
{
    ((ISteamUser*)linux_side)->TerminateGameConnection((uint32)unIPServer, (uint16)usPortServer);
}

void cppISteamUser_SteamUser010_TrackAppUsageEvent(void *linux_side, CGameID gameID, int eAppUsageEvent, const char * pchExtraInfo)
{
    CGameID lin_gameID;
    win_to_lin_struct_CGameID_101(&gameID, &lin_gameID);
    ((ISteamUser*)linux_side)->TrackAppUsageEvent(lin_gameID, (int)eAppUsageEvent, (const char *)pchExtraInfo);
    lin_to_win_struct_CGameID_101(&lin_gameID, &gameID);
}

#ifdef __cplusplus
}
#endif
