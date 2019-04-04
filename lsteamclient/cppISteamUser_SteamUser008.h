extern HSteamUser cppISteamUser_SteamUser008_GetHSteamUser(void *);
extern bool cppISteamUser_SteamUser008_BLoggedOn(void *);
extern CSteamID cppISteamUser_SteamUser008_GetSteamID(void *);
extern int cppISteamUser_SteamUser008_InitiateGameConnection(void *, void *, int, CSteamID, CGameID, uint32, uint16, bool, void *, int);
extern void cppISteamUser_SteamUser008_TerminateGameConnection(void *, uint32, uint16);
extern void cppISteamUser_SteamUser008_TrackAppUsageEvent(void *, CGameID, int, const char *);
extern void cppISteamUser_SteamUser008_RefreshSteam2Login(void *);
