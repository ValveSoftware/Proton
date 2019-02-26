extern HSteamUser cppISteamUser_SteamUser009_GetHSteamUser(void *);
extern bool cppISteamUser_SteamUser009_BLoggedOn(void *);
extern CSteamID cppISteamUser_SteamUser009_GetSteamID(void *);
extern int cppISteamUser_SteamUser009_InitiateGameConnection(void *, void *, int, CSteamID, CGameID, uint32, uint16, bool);
extern void cppISteamUser_SteamUser009_TerminateGameConnection(void *, uint32, uint16);
extern void cppISteamUser_SteamUser009_TrackAppUsageEvent(void *, CGameID, int, const char *);
extern void cppISteamUser_SteamUser009_RefreshSteam2Login(void *);
