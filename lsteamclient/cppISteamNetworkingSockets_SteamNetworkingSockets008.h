extern HSteamListenSocket cppISteamNetworkingSockets_SteamNetworkingSockets008_CreateListenSocketIP( void *, const SteamNetworkingIPAddr *, int, const SteamNetworkingConfigValue_t * );
extern HSteamNetConnection cppISteamNetworkingSockets_SteamNetworkingSockets008_ConnectByIPAddress( void *, const SteamNetworkingIPAddr *, int, const SteamNetworkingConfigValue_t * );
extern HSteamListenSocket cppISteamNetworkingSockets_SteamNetworkingSockets008_CreateListenSocketP2P( void *, int, int, const SteamNetworkingConfigValue_t * );
extern HSteamNetConnection cppISteamNetworkingSockets_SteamNetworkingSockets008_ConnectP2P( void *, const SteamNetworkingIdentity *, int, int, const SteamNetworkingConfigValue_t * );
extern EResult cppISteamNetworkingSockets_SteamNetworkingSockets008_AcceptConnection( void *, HSteamNetConnection );
extern bool cppISteamNetworkingSockets_SteamNetworkingSockets008_CloseConnection( void *, HSteamNetConnection, int, const char *, bool );
extern bool cppISteamNetworkingSockets_SteamNetworkingSockets008_CloseListenSocket( void *, HSteamListenSocket );
extern bool cppISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionUserData( void *, HSteamNetConnection, int64 );
extern int64 cppISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionUserData( void *, HSteamNetConnection );
extern void cppISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionName( void *, HSteamNetConnection, const char * );
extern bool cppISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionName( void *, HSteamNetConnection, char *, int );
extern EResult cppISteamNetworkingSockets_SteamNetworkingSockets008_SendMessageToConnection( void *, HSteamNetConnection, const void *, uint32, int, int64 * );
extern void cppISteamNetworkingSockets_SteamNetworkingSockets008_SendMessages( void *, int nMessages, winSteamNetworkingMessage_t_148a *const *, int64 * );
extern EResult cppISteamNetworkingSockets_SteamNetworkingSockets008_FlushMessagesOnConnection( void *, HSteamNetConnection );
extern int cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnConnection( void *, HSteamNetConnection, winSteamNetworkingMessage_t_148a **, int );
extern bool cppISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionInfo( void *, HSteamNetConnection, SteamNetConnectionInfo_t * );
extern bool cppISteamNetworkingSockets_SteamNetworkingSockets008_GetQuickConnectionStatus( void *, HSteamNetConnection, SteamNetworkingQuickConnectionStatus * );
extern int cppISteamNetworkingSockets_SteamNetworkingSockets008_GetDetailedConnectionStatus( void *, HSteamNetConnection, char *, int );
extern bool cppISteamNetworkingSockets_SteamNetworkingSockets008_GetListenSocketAddress( void *, HSteamListenSocket, SteamNetworkingIPAddr * );
extern bool cppISteamNetworkingSockets_SteamNetworkingSockets008_CreateSocketPair(void *, HSteamNetConnection *, HSteamNetConnection *, bool, const SteamNetworkingIdentity *, const SteamNetworkingIdentity *);
extern bool cppISteamNetworkingSockets_SteamNetworkingSockets008_GetIdentity( void *, SteamNetworkingIdentity * );
extern ESteamNetworkingAvailability cppISteamNetworkingSockets_SteamNetworkingSockets008_InitAuthentication( void * );
extern ESteamNetworkingAvailability cppISteamNetworkingSockets_SteamNetworkingSockets008_GetAuthenticationStatus( void *, SteamNetAuthenticationStatus_t * );
extern bool cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceivedRelayAuthTicket( void *, const void *, int, SteamDatagramRelayAuthTicket * );
extern int cppISteamNetworkingSockets_SteamNetworkingSockets008_FindRelayAuthTicketForServer( void *, const SteamNetworkingIdentity *, int, SteamDatagramRelayAuthTicket * );
extern HSteamNetConnection cppISteamNetworkingSockets_SteamNetworkingSockets008_ConnectToHostedDedicatedServer( void *, const SteamNetworkingIdentity *, int, int, const SteamNetworkingConfigValue_t * );
extern uint16 cppISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerPort( void * );
extern SteamNetworkingPOPID cppISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerPOPID( void * );
extern EResult cppISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerAddress( void *, SteamDatagramHostedAddress * );
extern HSteamListenSocket cppISteamNetworkingSockets_SteamNetworkingSockets008_CreateHostedDedicatedServerListenSocket( void *, int, int, const SteamNetworkingConfigValue_t * );
extern EResult cppISteamNetworkingSockets_SteamNetworkingSockets008_GetGameCoordinatorServerLogin( void *, SteamDatagramGameCoordinatorServerLogin *, int *, void * );
extern HSteamNetConnection cppISteamNetworkingSockets_SteamNetworkingSockets008_ConnectP2PCustomSignaling( void *, ISteamNetworkingConnectionCustomSignaling *, const SteamNetworkingIdentity *, int, const SteamNetworkingConfigValue_t * );
extern bool cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceivedP2PCustomSignal( void *, const void *, int, ISteamNetworkingCustomSignalingRecvContext * );

// Removed methods
//extern int cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnListenSocket(void *, HSteamListenSocket, winSteamNetworkingMessage_t_148a **, int);

// New methods
extern bool cppISteamNetworkingSockets_SteamNetworkingSockets008_GetCertificateRequest( void *, int *, void *, SteamNetworkingErrMsg * );
extern bool cppISteamNetworkingSockets_SteamNetworkingSockets008_SetCertificate( void *, const void *, int, SteamNetworkingErrMsg * );
extern HSteamNetPollGroup cppISteamNetworkingSockets_SteamNetworkingSockets008_CreatePollGroup( void * );
extern bool cppISteamNetworkingSockets_SteamNetworkingSockets008_DestroyPollGroup( void *, HSteamNetPollGroup );
extern bool cppISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionPollGroup( void *, HSteamNetConnection, HSteamNetPollGroup );
extern int cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnPollGroup( void *, HSteamNetPollGroup, winSteamNetworkingMessage_t_148a **, int );