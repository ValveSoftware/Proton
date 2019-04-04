extern HSteamUser cppISteamUser_SteamUser010_GetHSteamUser(void *);
extern bool cppISteamUser_SteamUser010_BLoggedOn(void *);
extern CSteamID cppISteamUser_SteamUser010_GetSteamID(void *);
extern int cppISteamUser_SteamUser010_InitiateGameConnection(void *, void *, int, CSteamID, uint32, uint16, bool);
extern void cppISteamUser_SteamUser010_TerminateGameConnection(void *, uint32, uint16);
extern void cppISteamUser_SteamUser010_TrackAppUsageEvent(void *, CGameID, int, const char *);
