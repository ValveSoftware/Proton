extern EResult cppISteamNetworkingMessages_SteamNetworkingMessages002_SendMessageToUser(void *, const SteamNetworkingIdentity *, const void *, uint32, int, int);
extern int cppISteamNetworkingMessages_SteamNetworkingMessages002_ReceiveMessagesOnChannel(void *, int, winSteamNetworkingMessage_t_157 **, int);
extern bool cppISteamNetworkingMessages_SteamNetworkingMessages002_AcceptSessionWithUser(void *, const SteamNetworkingIdentity *);
extern bool cppISteamNetworkingMessages_SteamNetworkingMessages002_CloseSessionWithUser(void *, const SteamNetworkingIdentity *);
extern bool cppISteamNetworkingMessages_SteamNetworkingMessages002_CloseChannelWithUser(void *, const SteamNetworkingIdentity *, int);
extern ESteamNetworkingConnectionState cppISteamNetworkingMessages_SteamNetworkingMessages002_GetSessionConnectionInfo(void *, const SteamNetworkingIdentity *, SteamNetConnectionInfo_t *, SteamNetConnectionRealTimeStatus_t *);
