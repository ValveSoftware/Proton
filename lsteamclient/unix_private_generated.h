/* This file is auto-generated, do not edit. */

struct u_ISteamClient_SteamClient006
{
#ifdef __cplusplus
    virtual int32_t CreateSteamPipe(  ) = 0;
    virtual bool BReleaseSteamPipe( int32_t ) = 0;
    virtual int32_t CreateGlobalUser( int32_t * ) = 0;
    virtual int32_t ConnectToGlobalUser( int32_t ) = 0;
    virtual int32_t CreateLocalUser( int32_t * ) = 0;
    virtual void ReleaseUser( int32_t, int32_t ) = 0;
    virtual void /*ISteamUser*/ * GetISteamUser( int32_t, int32_t, const char * ) = 0;
    virtual void * GetIVAC( int32_t ) = 0;
    virtual void /*ISteamGameServer*/ * GetISteamGameServer( int32_t, int32_t, const char * ) = 0;
    virtual void SetLocalIPBinding( uint32_t, uint16_t ) = 0;
    virtual const char * GetUniverseName( uint32_t ) = 0;
    virtual void /*ISteamFriends*/ * GetISteamFriends( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUtils*/ * GetISteamUtils( int32_t, const char * ) = 0;
    virtual void * GetISteamBilling( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamMatchmaking*/ * GetISteamMatchmaking( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamApps*/ * GetISteamApps( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamContentServer*/ * GetISteamContentServer( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamMasterServerUpdater*/ * GetISteamMasterServerUpdater( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamMatchmakingServers*/ * GetISteamMatchmakingServers( int32_t, int32_t, const char * ) = 0;
    virtual void RunFrame(  ) = 0;
    virtual uint32_t GetIPCCallCount(  ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUser_SteamUser004
{
#ifdef __cplusplus
    virtual int32_t GetHSteamUser(  ) = 0;
    virtual void LogOn( CSteamID ) = 0;
    virtual void LogOff(  ) = 0;
    virtual bool BLoggedOn(  ) = 0;
    virtual uint32_t GetLogonState(  ) = 0;
    virtual bool BConnected(  ) = 0;
    virtual CSteamID GetSteamID(  ) = 0;
    virtual bool IsVACBanned( int32_t ) = 0;
    virtual bool RequireShowVACBannedMessage( int32_t ) = 0;
    virtual void AcknowledgeVACBanning( int32_t ) = 0;
    virtual int32_t NClientGameIDAdd( int32_t ) = 0;
    virtual void RemoveClientGame( int32_t ) = 0;
    virtual void SetClientGameServer( int32_t, uint32_t, uint16_t ) = 0;
    virtual void SetSteam2Ticket( uint8_t *, int32_t ) = 0;
    virtual void AddServerNetAddress( uint32_t, uint16_t ) = 0;
    virtual bool SetEmail( const char * ) = 0;
    virtual int32_t GetSteamGameConnectToken( void *, int32_t ) = 0;
    virtual bool SetRegistryString( uint32_t, const char *, const char * ) = 0;
    virtual bool GetRegistryString( uint32_t, const char *, char *, int32_t ) = 0;
    virtual bool SetRegistryInt( uint32_t, const char *, int32_t ) = 0;
    virtual bool GetRegistryInt( uint32_t, const char *, int32_t * ) = 0;
    virtual int32_t InitiateGameConnection( void *, int32_t, CSteamID, int32_t, uint32_t, uint16_t, bool ) = 0;
    virtual void TerminateGameConnection( uint32_t, uint16_t ) = 0;
    virtual void SetSelfAsPrimaryChatDestination(  ) = 0;
    virtual bool IsPrimaryChatDestination(  ) = 0;
    virtual void RequestLegacyCDKey( uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamFriends_SteamFriends001
{
#ifdef __cplusplus
    virtual const char * GetPersonaName(  ) = 0;
    virtual void SetPersonaName( const char * ) = 0;
    virtual uint32_t GetPersonaState(  ) = 0;
    virtual void SetPersonaState( uint32_t ) = 0;
    virtual bool AddFriend( CSteamID ) = 0;
    virtual bool RemoveFriend( CSteamID ) = 0;
    virtual bool HasFriend( CSteamID ) = 0;
    virtual uint32_t GetFriendRelationship( CSteamID ) = 0;
    virtual uint32_t GetFriendPersonaState( CSteamID ) = 0;
    virtual bool Deprecated_GetFriendGamePlayed( CSteamID, int32_t *, uint32_t *, uint16_t * ) = 0;
    virtual const char * GetFriendPersonaName( CSteamID ) = 0;
    virtual int32_t AddFriendByName( const char * ) = 0;
    virtual int32_t GetFriendCount(  ) = 0;
    virtual CSteamID GetFriendByIndex( int32_t ) = 0;
    virtual void SendMsgToFriend( CSteamID, uint32_t, const char * ) = 0;
    virtual void SetFriendRegValue( CSteamID, const char *, const char * ) = 0;
    virtual const char * GetFriendRegValue( CSteamID, const char * ) = 0;
    virtual const char * GetFriendPersonaNameHistory( CSteamID, int32_t ) = 0;
    virtual int32_t GetChatMessage( CSteamID, int32_t, void *, int32_t, uint32_t * ) = 0;
    virtual bool SendMsgToFriend( CSteamID, uint32_t, const void *, int32_t ) = 0;
    virtual int32_t GetChatIDOfChatHistoryStart( CSteamID ) = 0;
    virtual void SetChatHistoryStart( CSteamID, int32_t ) = 0;
    virtual void ClearChatHistory( CSteamID ) = 0;
    virtual bool InviteFriendByEmail( const char * ) = 0;
    virtual int32_t GetBlockedFriendCount(  ) = 0;
    virtual bool GetFriendGamePlayed( CSteamID, uint64_t *, uint32_t *, uint16_t * ) = 0;
    virtual bool GetFriendGamePlayed2( CSteamID, uint64_t *, uint32_t *, uint16_t *, uint16_t * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUtils_SteamUtils002
{
#ifdef __cplusplus
    virtual uint32_t GetSecondsSinceAppActive(  ) = 0;
    virtual uint32_t GetSecondsSinceComputerActive(  ) = 0;
    virtual uint32_t GetConnectedUniverse(  ) = 0;
    virtual uint32_t GetServerRealTime(  ) = 0;
    virtual const char * GetIPCountry(  ) = 0;
    virtual bool GetImageSize( int32_t, uint32_t *, uint32_t * ) = 0;
    virtual bool GetImageRGBA( int32_t, uint8_t *, int32_t ) = 0;
    virtual bool GetCSERIPPort( uint32_t *, uint16_t * ) = 0;
    virtual uint8_t GetCurrentBatteryPower(  ) = 0;
    virtual uint32_t GetAppID(  ) = 0;
    virtual void SetOverlayNotificationPosition( uint32_t ) = 0;
    virtual bool IsAPICallCompleted( uint64_t, bool * ) = 0;
    virtual uint32_t GetAPICallFailureReason( uint64_t ) = 0;
    virtual bool GetAPICallResult( uint64_t, void *, int32_t, int32_t, bool * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamMatchmaking_SteamMatchMaking001
{
#ifdef __cplusplus
    virtual int32_t GetFavoriteGameCount(  ) = 0;
    virtual bool GetFavoriteGame( int32_t, uint32_t *, uint32_t *, uint16_t *, uint32_t *, uint32_t * ) = 0;
    virtual int32_t AddFavoriteGame( uint32_t, uint32_t, uint16_t, uint32_t, uint32_t ) = 0;
    virtual bool RemoveFavoriteGame( uint32_t, uint32_t, uint16_t, uint32_t ) = 0;
    virtual bool GetFavoriteGame2( int32_t, uint32_t *, uint32_t *, uint16_t *, uint16_t *, uint32_t *, uint32_t * ) = 0;
    virtual int32_t AddFavoriteGame2( uint32_t, uint32_t, uint16_t, uint16_t, uint32_t, uint32_t ) = 0;
    virtual bool RemoveFavoriteGame2( uint32_t, uint32_t, uint16_t, uint16_t, uint32_t ) = 0;
    virtual void RequestLobbyList( uint64_t, MatchMakingKeyValuePair_t *, uint32_t ) = 0;
    virtual CSteamID GetLobbyByIndex( int32_t ) = 0;
    virtual void CreateLobby( uint64_t, bool ) = 0;
    virtual void JoinLobby( CSteamID ) = 0;
    virtual void LeaveLobby( CSteamID ) = 0;
    virtual bool InviteUserToLobby( CSteamID, CSteamID ) = 0;
    virtual int32_t GetNumLobbyMembers( CSteamID ) = 0;
    virtual CSteamID GetLobbyMemberByIndex( CSteamID, int32_t ) = 0;
    virtual const char * GetLobbyData( CSteamID, const char * ) = 0;
    virtual bool SetLobbyData( CSteamID, const char *, const char * ) = 0;
    virtual const char * GetLobbyMemberData( CSteamID, CSteamID, const char * ) = 0;
    virtual bool SetLobbyMemberData( CSteamID, const char *, const char * ) = 0;
    virtual bool SendLobbyChatMsg( CSteamID, const void *, int32_t ) = 0;
    virtual int32_t GetLobbyChatEntry( CSteamID, int32_t, CSteamID *, void *, int32_t, uint32_t * ) = 0;
    virtual bool RequestLobbyData( CSteamID ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamMatchmakingServers_SteamMatchMakingServers001
{
#ifdef __cplusplus
    virtual void RequestInternetServerList( uint32_t, MatchMakingKeyValuePair_t **, uint32_t, u_ISteamMatchmakingServerListResponse * ) = 0;
    virtual void RequestLANServerList( uint32_t, u_ISteamMatchmakingServerListResponse * ) = 0;
    virtual void RequestFriendsServerList( uint32_t, MatchMakingKeyValuePair_t **, uint32_t, u_ISteamMatchmakingServerListResponse * ) = 0;
    virtual void RequestFavoritesServerList( uint32_t, MatchMakingKeyValuePair_t **, uint32_t, u_ISteamMatchmakingServerListResponse * ) = 0;
    virtual void RequestHistoryServerList( uint32_t, MatchMakingKeyValuePair_t **, uint32_t, u_ISteamMatchmakingServerListResponse * ) = 0;
    virtual void RequestSpectatorServerList( uint32_t, MatchMakingKeyValuePair_t **, uint32_t, u_ISteamMatchmakingServerListResponse * ) = 0;
    virtual gameserveritem_t_105 * GetServerDetails( uint32_t, int32_t ) = 0;
    virtual void CancelQuery( uint32_t ) = 0;
    virtual void RefreshQuery( uint32_t ) = 0;
    virtual bool IsRefreshing( uint32_t ) = 0;
    virtual int32_t GetServerCount( uint32_t ) = 0;
    virtual void RefreshServer( uint32_t, int32_t ) = 0;
    virtual int32_t PingServer( uint32_t, uint16_t, u_ISteamMatchmakingPingResponse * ) = 0;
    virtual int32_t PlayerDetails( uint32_t, uint16_t, u_ISteamMatchmakingPlayersResponse * ) = 0;
    virtual int32_t ServerRules( uint32_t, uint16_t, u_ISteamMatchmakingRulesResponse * ) = 0;
    virtual void CancelServerQuery( int32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001
{
#ifdef __cplusplus
    virtual uint32_t GetNumStats( CGameID ) = 0;
    virtual const char * GetStatName( CGameID, uint32_t ) = 0;
    virtual uint32_t GetStatType( CGameID, const char * ) = 0;
    virtual uint32_t GetNumAchievements( CGameID ) = 0;
    virtual const char * GetAchievementName( CGameID, uint32_t ) = 0;
    virtual uint32_t GetNumGroupAchievements( CGameID ) = 0;
    virtual const char * GetGroupAchievementName( CGameID, uint32_t ) = 0;
    virtual bool RequestCurrentStats( CGameID ) = 0;
    virtual bool GetStat( CGameID, const char *, int32_t * ) = 0;
    virtual bool GetStat( CGameID, const char *, float * ) = 0;
    virtual bool SetStat( CGameID, const char *, int32_t ) = 0;
    virtual bool SetStat( CGameID, const char *, float ) = 0;
    virtual bool UpdateAvgRateStat( CGameID, const char *, float, double ) = 0;
    virtual bool GetAchievement( CGameID, const char *, bool * ) = 0;
    virtual bool GetGroupAchievement( CGameID, const char *, bool * ) = 0;
    virtual bool SetAchievement( CGameID, const char * ) = 0;
    virtual bool SetGroupAchievement( CGameID, const char * ) = 0;
    virtual bool StoreStats( CGameID ) = 0;
    virtual bool ClearAchievement( CGameID, const char * ) = 0;
    virtual bool ClearGroupAchievement( CGameID, const char * ) = 0;
    virtual int32_t GetAchievementIcon( CGameID, const char * ) = 0;
    virtual const char * GetAchievementDisplayAttribute( CGameID, const char *, const char * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION001
{
#ifdef __cplusplus
    virtual int32_t GetAppData( uint32_t, const char *, char *, int32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamNetworking_SteamNetworking001
{
#ifdef __cplusplus
    virtual uint32_t CreateListenSocket( int32_t, uint32_t, uint16_t ) = 0;
    virtual uint32_t CreateP2PConnectionSocket( CSteamID, int32_t, int32_t ) = 0;
    virtual uint32_t CreateConnectionSocket( uint32_t, uint16_t, int32_t ) = 0;
    virtual bool DestroySocket( uint32_t, bool ) = 0;
    virtual bool DestroyListenSocket( uint32_t, bool ) = 0;
    virtual bool SendDataOnSocket( uint32_t, void *, uint32_t, bool ) = 0;
    virtual bool IsDataAvailableOnSocket( uint32_t, uint32_t * ) = 0;
    virtual bool RetrieveDataFromSocket( uint32_t, void *, uint32_t, uint32_t * ) = 0;
    virtual bool IsDataAvailable( uint32_t, uint32_t *, uint32_t * ) = 0;
    virtual bool RetrieveData( uint32_t, void *, uint32_t, uint32_t *, uint32_t * ) = 0;
    virtual bool GetSocketInfo( uint32_t, CSteamID *, int32_t *, uint32_t *, uint16_t * ) = 0;
    virtual bool GetListenSocketInfo( uint32_t, uint32_t *, uint16_t * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamGameServer_SteamGameServer002
{
#ifdef __cplusplus
    virtual void LogOn(  ) = 0;
    virtual void LogOff(  ) = 0;
    virtual bool BLoggedOn(  ) = 0;
    virtual void GSSetSpawnCount( uint32_t ) = 0;
    virtual bool GSGetSteam2GetEncryptionKeyToSendToNewClient( void *, uint32_t *, uint32_t ) = 0;
    virtual bool GSSendSteam2UserConnect( uint32_t, const void *, uint32_t, uint32_t, uint16_t, const void *, uint32_t ) = 0;
    virtual bool GSSendSteam3UserConnect( CSteamID, uint32_t, const void *, uint32_t ) = 0;
    virtual bool GSRemoveUserConnect( uint32_t ) = 0;
    virtual bool GSSendUserDisconnect( CSteamID, uint32_t ) = 0;
    virtual bool GSSendUserStatusResponse( CSteamID, int32_t, int32_t ) = 0;
    virtual bool Obsolete_GSSetStatus( int32_t, uint32_t, int32_t, int32_t, int32_t, int32_t, const char *, const char *, const char *, const char * ) = 0;
    virtual bool GSUpdateStatus( int32_t, int32_t, int32_t, const char *, const char * ) = 0;
    virtual bool BSecure(  ) = 0;
    virtual CSteamID GetSteamID(  ) = 0;
    virtual bool GSSetServerType( int32_t, uint32_t, uint32_t, uint32_t, const char *, const char * ) = 0;
    virtual bool GSSetServerType2( int32_t, uint32_t, uint32_t, uint16_t, uint16_t, uint16_t, const char *, const char *, bool ) = 0;
    virtual bool GSUpdateStatus2( int32_t, int32_t, int32_t, const char *, const char *, const char * ) = 0;
    virtual bool GSCreateUnauthenticatedUser( CSteamID * ) = 0;
    virtual bool GSSetUserData( CSteamID, const char *, uint32_t ) = 0;
    virtual void GSUpdateSpectatorPort( uint16_t ) = 0;
    virtual void GSSetGameType( const char * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001
{
#ifdef __cplusplus
    virtual void SetActive( bool ) = 0;
    virtual void SetHeartbeatInterval( int32_t ) = 0;
    virtual bool HandleIncomingPacket( const void *, int32_t, uint32_t, uint16_t ) = 0;
    virtual int32_t GetNextOutgoingPacket( void *, int32_t, uint32_t *, uint16_t * ) = 0;
    virtual void SetBasicServerData( uint16_t, bool, const char *, const char *, uint16_t, bool, const char * ) = 0;
    virtual void ClearAllKeyValues(  ) = 0;
    virtual void SetKeyValue( const char *, const char * ) = 0;
    virtual void NotifyShutdown(  ) = 0;
    virtual bool WasRestartRequested(  ) = 0;
    virtual void ForceHeartbeat(  ) = 0;
    virtual bool AddMasterServer( const char * ) = 0;
    virtual bool RemoveMasterServer( const char * ) = 0;
    virtual int32_t GetNumMasterServers(  ) = 0;
    virtual int32_t GetMasterServerAddress( int32_t, char *, int32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUser_SteamUser005
{
#ifdef __cplusplus
    virtual int32_t GetHSteamUser(  ) = 0;
    virtual void LogOn( CSteamID ) = 0;
    virtual void LogOff(  ) = 0;
    virtual bool BLoggedOn(  ) = 0;
    virtual uint32_t GetLogonState(  ) = 0;
    virtual bool BConnected(  ) = 0;
    virtual CSteamID GetSteamID(  ) = 0;
    virtual bool IsVACBanned( int32_t ) = 0;
    virtual bool RequireShowVACBannedMessage( int32_t ) = 0;
    virtual void AcknowledgeVACBanning( int32_t ) = 0;
    virtual void SetSteam2Ticket( uint8_t *, int32_t ) = 0;
    virtual void AddServerNetAddress( uint32_t, uint16_t ) = 0;
    virtual bool SetEmail( const char * ) = 0;
    virtual bool SetRegistryString( uint32_t, const char *, const char * ) = 0;
    virtual bool GetRegistryString( uint32_t, const char *, char *, int32_t ) = 0;
    virtual bool SetRegistryInt( uint32_t, const char *, int32_t ) = 0;
    virtual bool GetRegistryInt( uint32_t, const char *, int32_t * ) = 0;
    virtual int32_t InitiateGameConnection( void *, int32_t, CSteamID, CGameID, uint32_t, uint16_t, bool ) = 0;
    virtual void TerminateGameConnection( uint32_t, uint16_t ) = 0;
    virtual void SetSelfAsPrimaryChatDestination(  ) = 0;
    virtual bool IsPrimaryChatDestination(  ) = 0;
    virtual void RequestLegacyCDKey( uint32_t ) = 0;
    virtual bool SendGuestPassByEmail( const char *, uint64_t, bool ) = 0;
    virtual bool SendGuestPassByAccountID( uint32_t, uint64_t, bool ) = 0;
    virtual bool AckGuestPass( const char * ) = 0;
    virtual bool RedeemGuestPass( const char * ) = 0;
    virtual uint32_t GetGuestPassToGiveCount(  ) = 0;
    virtual uint32_t GetGuestPassToRedeemCount(  ) = 0;
    virtual uint32_t GetGuestPassLastUpdateTime(  ) = 0;
    virtual bool GetGuestPassToGiveInfo( uint32_t, uint64_t *, uint32_t *, uint32_t *, uint32_t *, uint32_t *, uint32_t *, char *, int32_t ) = 0;
    virtual bool GetGuestPassToRedeemInfo( uint32_t, uint64_t *, uint32_t *, uint32_t *, uint32_t *, uint32_t *, uint32_t * ) = 0;
    virtual bool GetGuestPassToRedeemSenderAddress( uint32_t, char *, int32_t ) = 0;
    virtual bool GetGuestPassToRedeemSenderName( uint32_t, char *, int32_t ) = 0;
    virtual void AcknowledgeMessageByGID( const char * ) = 0;
    virtual bool SetLanguage( const char * ) = 0;
    virtual void TrackAppUsageEvent( CGameID, int32_t, const char * ) = 0;
    virtual void SetAccountName( const char * ) = 0;
    virtual void SetPassword( const char * ) = 0;
    virtual void SetAccountCreationTime( uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUser_SteamUser006
{
#ifdef __cplusplus
    virtual int32_t GetHSteamUser(  ) = 0;
    virtual void LogOn( CSteamID ) = 0;
    virtual void LogOff(  ) = 0;
    virtual bool BLoggedOn(  ) = 0;
    virtual CSteamID GetSteamID(  ) = 0;
    virtual bool SetRegistryString( uint32_t, const char *, const char * ) = 0;
    virtual bool GetRegistryString( uint32_t, const char *, char *, int32_t ) = 0;
    virtual bool SetRegistryInt( uint32_t, const char *, int32_t ) = 0;
    virtual bool GetRegistryInt( uint32_t, const char *, int32_t * ) = 0;
    virtual int32_t InitiateGameConnection( void *, int32_t, CSteamID, CGameID, uint32_t, uint16_t, bool ) = 0;
    virtual void TerminateGameConnection( uint32_t, uint16_t ) = 0;
    virtual void TrackAppUsageEvent( CGameID, int32_t, const char * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUser_SteamUser007
{
#ifdef __cplusplus
    virtual int32_t GetHSteamUser(  ) = 0;
    virtual void LogOn( CSteamID ) = 0;
    virtual void LogOff(  ) = 0;
    virtual bool BLoggedOn(  ) = 0;
    virtual CSteamID GetSteamID(  ) = 0;
    virtual bool SetRegistryString( uint32_t, const char *, const char * ) = 0;
    virtual bool GetRegistryString( uint32_t, const char *, char *, int32_t ) = 0;
    virtual bool SetRegistryInt( uint32_t, const char *, int32_t ) = 0;
    virtual bool GetRegistryInt( uint32_t, const char *, int32_t * ) = 0;
    virtual int32_t InitiateGameConnection( void *, int32_t, CSteamID, CGameID, uint32_t, uint16_t, bool, void *, int32_t ) = 0;
    virtual void TerminateGameConnection( uint32_t, uint16_t ) = 0;
    virtual void TrackAppUsageEvent( CGameID, int32_t, const char * ) = 0;
    virtual void RefreshSteam2Login(  ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUser_SteamUser008
{
#ifdef __cplusplus
    virtual int32_t GetHSteamUser(  ) = 0;
    virtual bool BLoggedOn(  ) = 0;
    virtual CSteamID GetSteamID(  ) = 0;
    virtual int32_t InitiateGameConnection( void *, int32_t, CSteamID, CGameID *, uint32_t, uint16_t, bool, void *, int32_t ) = 0;
    virtual void TerminateGameConnection( uint32_t, uint16_t ) = 0;
    virtual void TrackAppUsageEvent( CGameID, int32_t, const char * ) = 0;
    virtual void RefreshSteam2Login(  ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamFriends_SteamFriends002
{
#ifdef __cplusplus
    virtual const char * GetPersonaName(  ) = 0;
    virtual void SetPersonaName( const char * ) = 0;
    virtual uint32_t GetPersonaState(  ) = 0;
    virtual void SetPersonaState( uint32_t ) = 0;
    virtual int32_t GetFriendCount( int32_t ) = 0;
    virtual CSteamID GetFriendByIndex( int32_t, int32_t ) = 0;
    virtual uint32_t GetFriendRelationship( CSteamID ) = 0;
    virtual uint32_t GetFriendPersonaState( CSteamID ) = 0;
    virtual const char * GetFriendPersonaName( CSteamID ) = 0;
    virtual void SetFriendRegValue( CSteamID, const char *, const char * ) = 0;
    virtual const char * GetFriendRegValue( CSteamID, const char * ) = 0;
    virtual bool GetFriendGamePlayed( CSteamID, uint64_t *, uint32_t *, uint16_t *, uint16_t * ) = 0;
    virtual const char * GetFriendPersonaNameHistory( CSteamID, int32_t ) = 0;
    virtual bool AddFriend( CSteamID ) = 0;
    virtual bool RemoveFriend( CSteamID ) = 0;
    virtual bool HasFriend( CSteamID, int32_t ) = 0;
    virtual int32_t AddFriendByName( const char * ) = 0;
    virtual bool InviteFriendByEmail( const char * ) = 0;
    virtual int32_t GetChatMessage( CSteamID, int32_t, void *, int32_t, uint32_t * ) = 0;
    virtual bool SendMsgToFriend( CSteamID, uint32_t, const void *, int32_t ) = 0;
    virtual int32_t GetChatIDOfChatHistoryStart( CSteamID ) = 0;
    virtual void SetChatHistoryStart( CSteamID, int32_t ) = 0;
    virtual void ClearChatHistory( CSteamID ) = 0;
    virtual int32_t GetClanCount(  ) = 0;
    virtual CSteamID GetClanByIndex( int32_t ) = 0;
    virtual const char * GetClanName( CSteamID ) = 0;
    virtual bool InviteFriendToClan( CSteamID, CSteamID ) = 0;
    virtual bool AcknowledgeInviteToClan( CSteamID, bool ) = 0;
    virtual int32_t GetFriendCountFromSource( CSteamID ) = 0;
    virtual CSteamID GetFriendFromSourceByIndex( CSteamID, int32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002
{
#ifdef __cplusplus
    virtual uint32_t GetNumStats( CGameID ) = 0;
    virtual const char * GetStatName( CGameID, uint32_t ) = 0;
    virtual uint32_t GetStatType( CGameID, const char * ) = 0;
    virtual uint32_t GetNumAchievements( CGameID ) = 0;
    virtual const char * GetAchievementName( CGameID, uint32_t ) = 0;
    virtual bool RequestCurrentStats( CGameID ) = 0;
    virtual bool GetStat( CGameID, const char *, int32_t * ) = 0;
    virtual bool GetStat( CGameID, const char *, float * ) = 0;
    virtual bool SetStat( CGameID, const char *, int32_t ) = 0;
    virtual bool SetStat( CGameID, const char *, float ) = 0;
    virtual bool UpdateAvgRateStat( CGameID, const char *, float, double ) = 0;
    virtual bool GetAchievement( CGameID, const char *, bool * ) = 0;
    virtual bool SetAchievement( CGameID, const char * ) = 0;
    virtual bool ClearAchievement( CGameID, const char * ) = 0;
    virtual bool StoreStats( CGameID ) = 0;
    virtual int32_t GetAchievementIcon( CGameID, const char * ) = 0;
    virtual const char * GetAchievementDisplayAttribute( CGameID, const char *, const char * ) = 0;
    virtual bool IndicateAchievementProgress( CGameID, const char *, uint32_t, uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamGameServer_SteamGameServer003
{
#ifdef __cplusplus
    virtual void LogOn(  ) = 0;
    virtual void LogOff(  ) = 0;
    virtual bool BLoggedOn(  ) = 0;
    virtual bool BSecure(  ) = 0;
    virtual CSteamID GetSteamID(  ) = 0;
    virtual bool GSGetSteam2GetEncryptionKeyToSendToNewClient( void *, uint32_t *, uint32_t ) = 0;
    virtual bool GSSendUserConnect( uint32_t, uint32_t, uint16_t, const void *, uint32_t ) = 0;
    virtual bool GSRemoveUserConnect( uint32_t ) = 0;
    virtual bool GSSendUserDisconnect( CSteamID, uint32_t ) = 0;
    virtual void GSSetSpawnCount( uint32_t ) = 0;
    virtual bool GSSetServerType( int32_t, uint32_t, uint32_t, uint16_t, uint16_t, uint16_t, const char *, const char *, bool ) = 0;
    virtual bool GSUpdateStatus( int32_t, int32_t, int32_t, const char *, const char *, const char * ) = 0;
    virtual bool GSCreateUnauthenticatedUser( CSteamID * ) = 0;
    virtual bool GSSetUserData( CSteamID, const char *, uint32_t ) = 0;
    virtual void GSUpdateSpectatorPort( uint16_t ) = 0;
    virtual void GSSetGameType( const char * ) = 0;
    virtual bool GSGetUserAchievementStatus( CSteamID, const char * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamClient_SteamClient007
{
#ifdef __cplusplus
    virtual int32_t CreateSteamPipe(  ) = 0;
    virtual bool BReleaseSteamPipe( int32_t ) = 0;
    virtual int32_t ConnectToGlobalUser( int32_t ) = 0;
    virtual int32_t CreateLocalUser( int32_t * ) = 0;
    virtual void ReleaseUser( int32_t, int32_t ) = 0;
    virtual void /*ISteamUser*/ * GetISteamUser( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamGameServer*/ * GetISteamGameServer( int32_t, int32_t, const char * ) = 0;
    virtual void SetLocalIPBinding( uint32_t, uint16_t ) = 0;
    virtual void /*ISteamFriends*/ * GetISteamFriends( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUtils*/ * GetISteamUtils( int32_t, const char * ) = 0;
    virtual void /*ISteamMatchmaking*/ * GetISteamMatchmaking( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamContentServer*/ * GetISteamContentServer( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamMasterServerUpdater*/ * GetISteamMasterServerUpdater( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamMatchmakingServers*/ * GetISteamMatchmakingServers( int32_t, int32_t, const char * ) = 0;
    virtual void * GetISteamGenericInterface( int32_t, int32_t, const char * ) = 0;
    virtual void RunFrame(  ) = 0;
    virtual uint32_t GetIPCCallCount(  ) = 0;
    virtual void /*ISteamUserStats*/ * GetISteamUserStats( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamApps*/ * GetISteamApps( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamNetworking*/ * GetISteamNetworking( int32_t, int32_t, const char * ) = 0;
    virtual void SetWarningMessageHook( void (*U_CDECL )(int32_t, const char *) ) = 0;
    virtual void /*ISteamRemoteStorage*/ * GetISteamRemoteStorage( int32_t, int32_t, const char * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUser_SteamUser009
{
#ifdef __cplusplus
    virtual int32_t GetHSteamUser(  ) = 0;
    virtual bool BLoggedOn(  ) = 0;
    virtual CSteamID GetSteamID(  ) = 0;
    virtual int32_t InitiateGameConnection( void *, int32_t, CSteamID, CGameID, uint32_t, uint16_t, bool ) = 0;
    virtual void TerminateGameConnection( uint32_t, uint16_t ) = 0;
    virtual void TrackAppUsageEvent( CGameID, int32_t, const char * ) = 0;
    virtual void RefreshSteam2Login(  ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamFriends_SteamFriends003
{
#ifdef __cplusplus
    virtual const char * GetPersonaName(  ) = 0;
    virtual void SetPersonaName( const char * ) = 0;
    virtual uint32_t GetPersonaState(  ) = 0;
    virtual int32_t GetFriendCount( int32_t ) = 0;
    virtual CSteamID GetFriendByIndex( int32_t, int32_t ) = 0;
    virtual uint32_t GetFriendRelationship( CSteamID ) = 0;
    virtual uint32_t GetFriendPersonaState( CSteamID ) = 0;
    virtual const char * GetFriendPersonaName( CSteamID ) = 0;
    virtual int32_t GetFriendAvatar( CSteamID ) = 0;
    virtual bool GetFriendGamePlayed( CSteamID, uint64_t *, uint32_t *, uint16_t *, uint16_t * ) = 0;
    virtual const char * GetFriendPersonaNameHistory( CSteamID, int32_t ) = 0;
    virtual bool HasFriend( CSteamID, int32_t ) = 0;
    virtual int32_t GetClanCount(  ) = 0;
    virtual CSteamID GetClanByIndex( int32_t ) = 0;
    virtual const char * GetClanName( CSteamID ) = 0;
    virtual int32_t GetFriendCountFromSource( CSteamID ) = 0;
    virtual CSteamID GetFriendFromSourceByIndex( CSteamID, int32_t ) = 0;
    virtual bool IsUserInSource( CSteamID, CSteamID ) = 0;
    virtual void SetInGameVoiceSpeaking( CSteamID, bool ) = 0;
    virtual void ActivateGameOverlay( const char * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamMatchmaking_SteamMatchMaking002
{
#ifdef __cplusplus
    virtual int32_t GetFavoriteGameCount(  ) = 0;
    virtual bool GetFavoriteGame( int32_t, uint32_t *, uint32_t *, uint16_t *, uint16_t *, uint32_t *, uint32_t * ) = 0;
    virtual int32_t AddFavoriteGame( uint32_t, uint32_t, uint16_t, uint16_t, uint32_t, uint32_t ) = 0;
    virtual bool RemoveFavoriteGame( uint32_t, uint32_t, uint16_t, uint16_t, uint32_t ) = 0;
    virtual void RequestLobbyList(  ) = 0;
    virtual CSteamID GetLobbyByIndex( int32_t ) = 0;
    virtual void CreateLobby( bool ) = 0;
    virtual void JoinLobby( CSteamID ) = 0;
    virtual void LeaveLobby( CSteamID ) = 0;
    virtual bool InviteUserToLobby( CSteamID, CSteamID ) = 0;
    virtual int32_t GetNumLobbyMembers( CSteamID ) = 0;
    virtual CSteamID GetLobbyMemberByIndex( CSteamID, int32_t ) = 0;
    virtual const char * GetLobbyData( CSteamID, const char * ) = 0;
    virtual bool SetLobbyData( CSteamID, const char *, const char * ) = 0;
    virtual const char * GetLobbyMemberData( CSteamID, CSteamID, const char * ) = 0;
    virtual void SetLobbyMemberData( CSteamID, const char *, const char * ) = 0;
    virtual bool SendLobbyChatMsg( CSteamID, const void *, int32_t ) = 0;
    virtual int32_t GetLobbyChatEntry( CSteamID, int32_t, CSteamID *, void *, int32_t, uint32_t * ) = 0;
    virtual bool RequestLobbyData( CSteamID ) = 0;
    virtual void SetLobbyGameServer( CSteamID, uint32_t, uint16_t, CSteamID ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003
{
#ifdef __cplusplus
    virtual bool RequestCurrentStats(  ) = 0;
    virtual bool GetStat( const char *, int32_t * ) = 0;
    virtual bool GetStat( const char *, float * ) = 0;
    virtual bool SetStat( const char *, int32_t ) = 0;
    virtual bool SetStat( const char *, float ) = 0;
    virtual bool UpdateAvgRateStat( const char *, float, double ) = 0;
    virtual bool GetAchievement( const char *, bool * ) = 0;
    virtual bool SetAchievement( const char * ) = 0;
    virtual bool ClearAchievement( const char * ) = 0;
    virtual bool StoreStats(  ) = 0;
    virtual int32_t GetAchievementIcon( const char * ) = 0;
    virtual const char * GetAchievementDisplayAttribute( const char *, const char * ) = 0;
    virtual bool IndicateAchievementProgress( const char *, uint32_t, uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamGameServer_SteamGameServer004
{
#ifdef __cplusplus
    virtual void LogOn(  ) = 0;
    virtual void LogOff(  ) = 0;
    virtual bool BLoggedOn(  ) = 0;
    virtual bool BSecure(  ) = 0;
    virtual CSteamID GetSteamID(  ) = 0;
    virtual void SendUserConnectAndAuthenticate( CSteamID, uint32_t, void *, uint32_t ) = 0;
    virtual CSteamID CreateUnauthenticatedUserConnection(  ) = 0;
    virtual void SendUserDisconnect( CSteamID ) = 0;
    virtual bool BUpdateUserData( CSteamID, const char *, uint32_t ) = 0;
    virtual bool BSetServerType( int32_t, uint32_t, uint32_t, uint16_t, uint16_t, uint16_t, const char *, const char *, bool ) = 0;
    virtual void UpdateServerStatus( int32_t, int32_t, int32_t, const char *, const char *, const char * ) = 0;
    virtual void UpdateSpectatorPort( uint16_t ) = 0;
    virtual void SetGameType( const char * ) = 0;
    virtual bool BGetUserAchievementStatus( CSteamID, const char * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUser_SteamUser010
{
#ifdef __cplusplus
    virtual int32_t GetHSteamUser(  ) = 0;
    virtual bool BLoggedOn(  ) = 0;
    virtual CSteamID GetSteamID(  ) = 0;
    virtual int32_t InitiateGameConnection( void *, int32_t, CSteamID, uint32_t, uint16_t, bool ) = 0;
    virtual void TerminateGameConnection( uint32_t, uint16_t ) = 0;
    virtual void TrackAppUsageEvent( CGameID, int32_t, const char * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION002
{
#ifdef __cplusplus
    virtual bool BIsSubscribed(  ) = 0;
    virtual bool BIsLowViolence(  ) = 0;
    virtual bool BIsCybercafe(  ) = 0;
    virtual bool BIsVACBanned(  ) = 0;
    virtual const char * GetCurrentGameLanguage(  ) = 0;
    virtual const char * GetAvailableGameLanguages(  ) = 0;
    virtual bool BIsSubscribedApp( uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamGameServer_SteamGameServer005
{
#ifdef __cplusplus
    virtual void LogOn(  ) = 0;
    virtual void LogOff(  ) = 0;
    virtual bool BLoggedOn(  ) = 0;
    virtual bool BSecure(  ) = 0;
    virtual CSteamID GetSteamID(  ) = 0;
    virtual bool SendUserConnectAndAuthenticate( uint32_t, const void *, uint32_t, CSteamID * ) = 0;
    virtual CSteamID CreateUnauthenticatedUserConnection(  ) = 0;
    virtual void SendUserDisconnect( CSteamID ) = 0;
    virtual bool BUpdateUserData( CSteamID, const char *, uint32_t ) = 0;
    virtual bool BSetServerType( uint32_t, uint32_t, uint16_t, uint16_t, uint16_t, const char *, const char *, bool ) = 0;
    virtual void UpdateServerStatus( int32_t, int32_t, int32_t, const char *, const char *, const char * ) = 0;
    virtual void UpdateSpectatorPort( uint16_t ) = 0;
    virtual void SetGameType( const char * ) = 0;
    virtual bool BGetUserAchievementStatus( CSteamID, const char * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUser_SteamUser011
{
#ifdef __cplusplus
    virtual int32_t GetHSteamUser(  ) = 0;
    virtual bool BLoggedOn(  ) = 0;
    virtual CSteamID GetSteamID(  ) = 0;
    virtual int32_t InitiateGameConnection( void *, int32_t, CSteamID, uint32_t, uint16_t, bool ) = 0;
    virtual void TerminateGameConnection( uint32_t, uint16_t ) = 0;
    virtual void TrackAppUsageEvent( CGameID, int32_t, const char * ) = 0;
    virtual bool GetUserDataFolder( char *, int32_t ) = 0;
    virtual void StartVoiceRecording(  ) = 0;
    virtual void StopVoiceRecording(  ) = 0;
    virtual uint32_t GetCompressedVoice( void *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t DecompressVoice( void *, uint32_t, void *, uint32_t, uint32_t * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamFriends_SteamFriends004
{
#ifdef __cplusplus
    virtual const char * GetPersonaName(  ) = 0;
    virtual void SetPersonaName( const char * ) = 0;
    virtual uint32_t GetPersonaState(  ) = 0;
    virtual int32_t GetFriendCount( int32_t ) = 0;
    virtual CSteamID GetFriendByIndex( int32_t, int32_t ) = 0;
    virtual uint32_t GetFriendRelationship( CSteamID ) = 0;
    virtual uint32_t GetFriendPersonaState( CSteamID ) = 0;
    virtual const char * GetFriendPersonaName( CSteamID ) = 0;
    virtual int32_t GetFriendAvatar( CSteamID, int32_t ) = 0;
    virtual bool GetFriendGamePlayed( CSteamID, uint64_t *, uint32_t *, uint16_t *, uint16_t * ) = 0;
    virtual const char * GetFriendPersonaNameHistory( CSteamID, int32_t ) = 0;
    virtual bool HasFriend( CSteamID, int32_t ) = 0;
    virtual int32_t GetClanCount(  ) = 0;
    virtual CSteamID GetClanByIndex( int32_t ) = 0;
    virtual const char * GetClanName( CSteamID ) = 0;
    virtual int32_t GetFriendCountFromSource( CSteamID ) = 0;
    virtual CSteamID GetFriendFromSourceByIndex( CSteamID, int32_t ) = 0;
    virtual bool IsUserInSource( CSteamID, CSteamID ) = 0;
    virtual void SetInGameVoiceSpeaking( CSteamID, bool ) = 0;
    virtual void ActivateGameOverlay( const char * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamMatchmaking_SteamMatchMaking003
{
#ifdef __cplusplus
    virtual int32_t GetFavoriteGameCount(  ) = 0;
    virtual bool GetFavoriteGame( int32_t, uint32_t *, uint32_t *, uint16_t *, uint16_t *, uint32_t *, uint32_t * ) = 0;
    virtual int32_t AddFavoriteGame( uint32_t, uint32_t, uint16_t, uint16_t, uint32_t, uint32_t ) = 0;
    virtual bool RemoveFavoriteGame( uint32_t, uint32_t, uint16_t, uint16_t, uint32_t ) = 0;
    virtual void RequestLobbyList(  ) = 0;
    virtual void AddRequestLobbyListFilter( const char *, const char * ) = 0;
    virtual void AddRequestLobbyListNumericalFilter( const char *, int32_t, int32_t ) = 0;
    virtual void AddRequestLobbyListSlotsAvailableFilter(  ) = 0;
    virtual CSteamID GetLobbyByIndex( int32_t ) = 0;
    virtual void CreateLobby( bool ) = 0;
    virtual void JoinLobby( CSteamID ) = 0;
    virtual void LeaveLobby( CSteamID ) = 0;
    virtual bool InviteUserToLobby( CSteamID, CSteamID ) = 0;
    virtual int32_t GetNumLobbyMembers( CSteamID ) = 0;
    virtual CSteamID GetLobbyMemberByIndex( CSteamID, int32_t ) = 0;
    virtual const char * GetLobbyData( CSteamID, const char * ) = 0;
    virtual bool SetLobbyData( CSteamID, const char *, const char * ) = 0;
    virtual const char * GetLobbyMemberData( CSteamID, CSteamID, const char * ) = 0;
    virtual void SetLobbyMemberData( CSteamID, const char *, const char * ) = 0;
    virtual bool SendLobbyChatMsg( CSteamID, const void *, int32_t ) = 0;
    virtual int32_t GetLobbyChatEntry( CSteamID, int32_t, CSteamID *, void *, int32_t, uint32_t * ) = 0;
    virtual bool RequestLobbyData( CSteamID ) = 0;
    virtual void SetLobbyGameServer( CSteamID, uint32_t, uint16_t, CSteamID ) = 0;
    virtual bool GetLobbyGameServer( CSteamID, uint32_t *, uint16_t *, CSteamID * ) = 0;
    virtual bool SetLobbyMemberLimit( CSteamID, int32_t ) = 0;
    virtual int32_t GetLobbyMemberLimit( CSteamID ) = 0;
    virtual void SetLobbyVoiceEnabled( CSteamID, bool ) = 0;
    virtual bool RequestFriendsLobbies(  ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamMatchmaking_SteamMatchMaking004
{
#ifdef __cplusplus
    virtual int32_t GetFavoriteGameCount(  ) = 0;
    virtual bool GetFavoriteGame( int32_t, uint32_t *, uint32_t *, uint16_t *, uint16_t *, uint32_t *, uint32_t * ) = 0;
    virtual int32_t AddFavoriteGame( uint32_t, uint32_t, uint16_t, uint16_t, uint32_t, uint32_t ) = 0;
    virtual bool RemoveFavoriteGame( uint32_t, uint32_t, uint16_t, uint16_t, uint32_t ) = 0;
    virtual void RequestLobbyList(  ) = 0;
    virtual void AddRequestLobbyListFilter( const char *, const char * ) = 0;
    virtual void AddRequestLobbyListNumericalFilter( const char *, int32_t, int32_t ) = 0;
    virtual void AddRequestLobbyListSlotsAvailableFilter(  ) = 0;
    virtual CSteamID GetLobbyByIndex( int32_t ) = 0;
    virtual void CreateLobby( bool ) = 0;
    virtual void JoinLobby( CSteamID ) = 0;
    virtual void LeaveLobby( CSteamID ) = 0;
    virtual bool InviteUserToLobby( CSteamID, CSteamID ) = 0;
    virtual int32_t GetNumLobbyMembers( CSteamID ) = 0;
    virtual CSteamID GetLobbyMemberByIndex( CSteamID, int32_t ) = 0;
    virtual const char * GetLobbyData( CSteamID, const char * ) = 0;
    virtual bool SetLobbyData( CSteamID, const char *, const char * ) = 0;
    virtual const char * GetLobbyMemberData( CSteamID, CSteamID, const char * ) = 0;
    virtual void SetLobbyMemberData( CSteamID, const char *, const char * ) = 0;
    virtual bool SendLobbyChatMsg( CSteamID, const void *, int32_t ) = 0;
    virtual int32_t GetLobbyChatEntry( CSteamID, int32_t, CSteamID *, void *, int32_t, uint32_t * ) = 0;
    virtual bool RequestLobbyData( CSteamID ) = 0;
    virtual void SetLobbyGameServer( CSteamID, uint32_t, uint16_t, CSteamID ) = 0;
    virtual bool GetLobbyGameServer( CSteamID, uint32_t *, uint16_t *, CSteamID * ) = 0;
    virtual bool SetLobbyMemberLimit( CSteamID, int32_t ) = 0;
    virtual int32_t GetLobbyMemberLimit( CSteamID ) = 0;
    virtual bool RequestFriendsLobbies(  ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamFriends_SteamFriends005
{
#ifdef __cplusplus
    virtual const char * GetPersonaName(  ) = 0;
    virtual void SetPersonaName( const char * ) = 0;
    virtual uint32_t GetPersonaState(  ) = 0;
    virtual int32_t GetFriendCount( int32_t ) = 0;
    virtual CSteamID GetFriendByIndex( int32_t, int32_t ) = 0;
    virtual uint32_t GetFriendRelationship( CSteamID ) = 0;
    virtual uint32_t GetFriendPersonaState( CSteamID ) = 0;
    virtual const char * GetFriendPersonaName( CSteamID ) = 0;
    virtual int32_t GetFriendAvatar( CSteamID, int32_t ) = 0;
    virtual bool GetFriendGamePlayed( CSteamID, FriendGameInfo_t * ) = 0;
    virtual const char * GetFriendPersonaNameHistory( CSteamID, int32_t ) = 0;
    virtual bool HasFriend( CSteamID, int32_t ) = 0;
    virtual int32_t GetClanCount(  ) = 0;
    virtual CSteamID GetClanByIndex( int32_t ) = 0;
    virtual const char * GetClanName( CSteamID ) = 0;
    virtual int32_t GetFriendCountFromSource( CSteamID ) = 0;
    virtual CSteamID GetFriendFromSourceByIndex( CSteamID, int32_t ) = 0;
    virtual bool IsUserInSource( CSteamID, CSteamID ) = 0;
    virtual void SetInGameVoiceSpeaking( CSteamID, bool ) = 0;
    virtual void ActivateGameOverlay( const char * ) = 0;
    virtual void ActivateGameOverlayToUser( const char *, CSteamID ) = 0;
    virtual void ActivateGameOverlayToWebPage( const char * ) = 0;
    virtual void ActivateGameOverlayToStore( uint32_t ) = 0;
    virtual void SetPlayedWith( CSteamID ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamMatchmaking_SteamMatchMaking005
{
#ifdef __cplusplus
    virtual int32_t GetFavoriteGameCount(  ) = 0;
    virtual bool GetFavoriteGame( int32_t, uint32_t *, uint32_t *, uint16_t *, uint16_t *, uint32_t *, uint32_t * ) = 0;
    virtual int32_t AddFavoriteGame( uint32_t, uint32_t, uint16_t, uint16_t, uint32_t, uint32_t ) = 0;
    virtual bool RemoveFavoriteGame( uint32_t, uint32_t, uint16_t, uint16_t, uint32_t ) = 0;
    virtual void RequestLobbyList(  ) = 0;
    virtual void AddRequestLobbyListFilter( const char *, const char * ) = 0;
    virtual void AddRequestLobbyListNumericalFilter( const char *, int32_t, int32_t ) = 0;
    virtual void AddRequestLobbyListSlotsAvailableFilter(  ) = 0;
    virtual void AddRequestLobbyListNearValueFilter( const char *, int32_t ) = 0;
    virtual CSteamID GetLobbyByIndex( int32_t ) = 0;
    virtual void CreateLobby( uint32_t ) = 0;
    virtual void JoinLobby( CSteamID ) = 0;
    virtual void LeaveLobby( CSteamID ) = 0;
    virtual bool InviteUserToLobby( CSteamID, CSteamID ) = 0;
    virtual int32_t GetNumLobbyMembers( CSteamID ) = 0;
    virtual CSteamID GetLobbyMemberByIndex( CSteamID, int32_t ) = 0;
    virtual const char * GetLobbyData( CSteamID, const char * ) = 0;
    virtual bool SetLobbyData( CSteamID, const char *, const char * ) = 0;
    virtual const char * GetLobbyMemberData( CSteamID, CSteamID, const char * ) = 0;
    virtual void SetLobbyMemberData( CSteamID, const char *, const char * ) = 0;
    virtual bool SendLobbyChatMsg( CSteamID, const void *, int32_t ) = 0;
    virtual int32_t GetLobbyChatEntry( CSteamID, int32_t, CSteamID *, void *, int32_t, uint32_t * ) = 0;
    virtual bool RequestLobbyData( CSteamID ) = 0;
    virtual void SetLobbyGameServer( CSteamID, uint32_t, uint16_t, CSteamID ) = 0;
    virtual bool GetLobbyGameServer( CSteamID, uint32_t *, uint16_t *, CSteamID * ) = 0;
    virtual bool SetLobbyMemberLimit( CSteamID, int32_t ) = 0;
    virtual int32_t GetLobbyMemberLimit( CSteamID ) = 0;
    virtual bool RequestFriendsLobbies(  ) = 0;
    virtual bool SetLobbyType( CSteamID, uint32_t ) = 0;
    virtual CSteamID GetLobbyOwner( CSteamID ) = 0;
    virtual float GetLobbyDistance( CSteamID ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004
{
#ifdef __cplusplus
    virtual bool RequestCurrentStats(  ) = 0;
    virtual bool GetStat( const char *, int32_t * ) = 0;
    virtual bool GetStat( const char *, float * ) = 0;
    virtual bool SetStat( const char *, int32_t ) = 0;
    virtual bool SetStat( const char *, float ) = 0;
    virtual bool UpdateAvgRateStat( const char *, float, double ) = 0;
    virtual bool GetAchievement( const char *, bool * ) = 0;
    virtual bool SetAchievement( const char * ) = 0;
    virtual bool ClearAchievement( const char * ) = 0;
    virtual bool StoreStats(  ) = 0;
    virtual int32_t GetAchievementIcon( const char * ) = 0;
    virtual const char * GetAchievementDisplayAttribute( const char *, const char * ) = 0;
    virtual bool IndicateAchievementProgress( const char *, uint32_t, uint32_t ) = 0;
    virtual uint64_t RequestUserStats( CSteamID ) = 0;
    virtual bool GetUserStat( CSteamID, const char *, int32_t * ) = 0;
    virtual bool GetUserStat( CSteamID, const char *, float * ) = 0;
    virtual bool GetUserAchievement( CSteamID, const char *, bool * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamNetworking_SteamNetworking002
{
#ifdef __cplusplus
    virtual uint32_t CreateListenSocket( int32_t, uint32_t, uint16_t, bool ) = 0;
    virtual uint32_t CreateP2PConnectionSocket( CSteamID, int32_t, int32_t, bool ) = 0;
    virtual uint32_t CreateConnectionSocket( uint32_t, uint16_t, int32_t ) = 0;
    virtual bool DestroySocket( uint32_t, bool ) = 0;
    virtual bool DestroyListenSocket( uint32_t, bool ) = 0;
    virtual bool SendDataOnSocket( uint32_t, void *, uint32_t, bool ) = 0;
    virtual bool IsDataAvailableOnSocket( uint32_t, uint32_t * ) = 0;
    virtual bool RetrieveDataFromSocket( uint32_t, void *, uint32_t, uint32_t * ) = 0;
    virtual bool IsDataAvailable( uint32_t, uint32_t *, uint32_t * ) = 0;
    virtual bool RetrieveData( uint32_t, void *, uint32_t, uint32_t *, uint32_t * ) = 0;
    virtual bool GetSocketInfo( uint32_t, CSteamID *, int32_t *, uint32_t *, uint16_t * ) = 0;
    virtual bool GetListenSocketInfo( uint32_t, uint32_t *, uint16_t * ) = 0;
    virtual uint32_t GetSocketConnectionType( uint32_t ) = 0;
    virtual int32_t GetMaxPacketSize( uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001
{
#ifdef __cplusplus
    virtual bool FileWrite( const char *, const void *, int32_t ) = 0;
    virtual int32_t GetFileSize( const char * ) = 0;
    virtual int32_t FileRead( const char *, void *, int32_t ) = 0;
    virtual bool FileExists( const char * ) = 0;
    virtual bool FileDelete( const char * ) = 0;
    virtual int32_t GetFileCount(  ) = 0;
    virtual const char * GetFileNameAndSize( int32_t, int32_t * ) = 0;
    virtual bool GetQuota( int32_t *, int32_t * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamGameServer_SteamGameServer008
{
#ifdef __cplusplus
    virtual void LogOn(  ) = 0;
    virtual void LogOff(  ) = 0;
    virtual bool BLoggedOn(  ) = 0;
    virtual bool BSecure(  ) = 0;
    virtual CSteamID GetSteamID(  ) = 0;
    virtual bool SendUserConnectAndAuthenticate( uint32_t, const void *, uint32_t, CSteamID * ) = 0;
    virtual CSteamID CreateUnauthenticatedUserConnection(  ) = 0;
    virtual void SendUserDisconnect( CSteamID ) = 0;
    virtual bool BUpdateUserData( CSteamID, const char *, uint32_t ) = 0;
    virtual bool BSetServerType( uint32_t, uint32_t, uint16_t, uint16_t, uint16_t, const char *, const char *, bool ) = 0;
    virtual void UpdateServerStatus( int32_t, int32_t, int32_t, const char *, const char *, const char * ) = 0;
    virtual void UpdateSpectatorPort( uint16_t ) = 0;
    virtual void SetGameType( const char * ) = 0;
    virtual bool BGetUserAchievementStatus( CSteamID, const char * ) = 0;
    virtual void GetGameplayStats(  ) = 0;
    virtual bool RequestUserGroupStatus( CSteamID, CSteamID ) = 0;
    virtual uint32_t GetPublicIP(  ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamMatchmaking_SteamMatchMaking006
{
#ifdef __cplusplus
    virtual int32_t GetFavoriteGameCount(  ) = 0;
    virtual bool GetFavoriteGame( int32_t, uint32_t *, uint32_t *, uint16_t *, uint16_t *, uint32_t *, uint32_t * ) = 0;
    virtual int32_t AddFavoriteGame( uint32_t, uint32_t, uint16_t, uint16_t, uint32_t, uint32_t ) = 0;
    virtual bool RemoveFavoriteGame( uint32_t, uint32_t, uint16_t, uint16_t, uint32_t ) = 0;
    virtual uint64_t RequestLobbyList(  ) = 0;
    virtual void AddRequestLobbyListFilter( const char *, const char * ) = 0;
    virtual void AddRequestLobbyListNumericalFilter( const char *, int32_t, int32_t ) = 0;
    virtual void AddRequestLobbyListNearValueFilter( const char *, int32_t ) = 0;
    virtual CSteamID GetLobbyByIndex( int32_t ) = 0;
    virtual uint64_t CreateLobby( uint32_t ) = 0;
    virtual uint64_t JoinLobby( CSteamID ) = 0;
    virtual void LeaveLobby( CSteamID ) = 0;
    virtual bool InviteUserToLobby( CSteamID, CSteamID ) = 0;
    virtual int32_t GetNumLobbyMembers( CSteamID ) = 0;
    virtual CSteamID GetLobbyMemberByIndex( CSteamID, int32_t ) = 0;
    virtual const char * GetLobbyData( CSteamID, const char * ) = 0;
    virtual bool SetLobbyData( CSteamID, const char *, const char * ) = 0;
    virtual const char * GetLobbyMemberData( CSteamID, CSteamID, const char * ) = 0;
    virtual void SetLobbyMemberData( CSteamID, const char *, const char * ) = 0;
    virtual bool SendLobbyChatMsg( CSteamID, const void *, int32_t ) = 0;
    virtual int32_t GetLobbyChatEntry( CSteamID, int32_t, CSteamID *, void *, int32_t, uint32_t * ) = 0;
    virtual bool RequestLobbyData( CSteamID ) = 0;
    virtual void SetLobbyGameServer( CSteamID, uint32_t, uint16_t, CSteamID ) = 0;
    virtual bool GetLobbyGameServer( CSteamID, uint32_t *, uint16_t *, CSteamID * ) = 0;
    virtual bool SetLobbyMemberLimit( CSteamID, int32_t ) = 0;
    virtual int32_t GetLobbyMemberLimit( CSteamID ) = 0;
    virtual bool SetLobbyType( CSteamID, uint32_t ) = 0;
    virtual CSteamID GetLobbyOwner( CSteamID ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002
{
#ifdef __cplusplus
    virtual bool FileWrite( const char *, const void *, int32_t ) = 0;
    virtual int32_t GetFileSize( const char * ) = 0;
    virtual int32_t FileRead( const char *, void *, int32_t ) = 0;
    virtual bool FileExists( const char * ) = 0;
    virtual int32_t GetFileCount(  ) = 0;
    virtual const char * GetFileNameAndSize( int32_t, int32_t * ) = 0;
    virtual bool GetQuota( int32_t *, int32_t * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamClient_SteamClient008
{
#ifdef __cplusplus
    virtual int32_t CreateSteamPipe(  ) = 0;
    virtual bool BReleaseSteamPipe( int32_t ) = 0;
    virtual int32_t ConnectToGlobalUser( int32_t ) = 0;
    virtual int32_t CreateLocalUser( int32_t *, uint32_t ) = 0;
    virtual void ReleaseUser( int32_t, int32_t ) = 0;
    virtual void /*ISteamUser*/ * GetISteamUser( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamGameServer*/ * GetISteamGameServer( int32_t, int32_t, const char * ) = 0;
    virtual void SetLocalIPBinding( uint32_t, uint16_t ) = 0;
    virtual void /*ISteamFriends*/ * GetISteamFriends( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUtils*/ * GetISteamUtils( int32_t, const char * ) = 0;
    virtual void /*ISteamMatchmaking*/ * GetISteamMatchmaking( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamMasterServerUpdater*/ * GetISteamMasterServerUpdater( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamMatchmakingServers*/ * GetISteamMatchmakingServers( int32_t, int32_t, const char * ) = 0;
    virtual void * GetISteamGenericInterface( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUserStats*/ * GetISteamUserStats( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamApps*/ * GetISteamApps( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamNetworking*/ * GetISteamNetworking( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamRemoteStorage*/ * GetISteamRemoteStorage( int32_t, int32_t, const char * ) = 0;
    virtual void RunFrame(  ) = 0;
    virtual uint32_t GetIPCCallCount(  ) = 0;
    virtual void SetWarningMessageHook( void (*U_CDECL )(int32_t, const char *) ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUser_SteamUser012
{
#ifdef __cplusplus
    virtual int32_t GetHSteamUser(  ) = 0;
    virtual bool BLoggedOn(  ) = 0;
    virtual CSteamID GetSteamID(  ) = 0;
    virtual int32_t InitiateGameConnection( void *, int32_t, CSteamID, uint32_t, uint16_t, bool ) = 0;
    virtual void TerminateGameConnection( uint32_t, uint16_t ) = 0;
    virtual void TrackAppUsageEvent( CGameID, int32_t, const char * ) = 0;
    virtual bool GetUserDataFolder( char *, int32_t ) = 0;
    virtual void StartVoiceRecording(  ) = 0;
    virtual void StopVoiceRecording(  ) = 0;
    virtual uint32_t GetCompressedVoice( void *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t DecompressVoice( void *, uint32_t, void *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetAuthSessionTicket( void *, int32_t, uint32_t * ) = 0;
    virtual uint32_t BeginAuthSession( const void *, int32_t, CSteamID ) = 0;
    virtual void EndAuthSession( CSteamID ) = 0;
    virtual void CancelAuthTicket( uint32_t ) = 0;
    virtual uint32_t UserHasLicenseForApp( CSteamID, uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUtils_SteamUtils004
{
#ifdef __cplusplus
    virtual uint32_t GetSecondsSinceAppActive(  ) = 0;
    virtual uint32_t GetSecondsSinceComputerActive(  ) = 0;
    virtual uint32_t GetConnectedUniverse(  ) = 0;
    virtual uint32_t GetServerRealTime(  ) = 0;
    virtual const char * GetIPCountry(  ) = 0;
    virtual bool GetImageSize( int32_t, uint32_t *, uint32_t * ) = 0;
    virtual bool GetImageRGBA( int32_t, uint8_t *, int32_t ) = 0;
    virtual bool GetCSERIPPort( uint32_t *, uint16_t * ) = 0;
    virtual uint8_t GetCurrentBatteryPower(  ) = 0;
    virtual uint32_t GetAppID(  ) = 0;
    virtual void SetOverlayNotificationPosition( uint32_t ) = 0;
    virtual bool IsAPICallCompleted( uint64_t, bool * ) = 0;
    virtual uint32_t GetAPICallFailureReason( uint64_t ) = 0;
    virtual bool GetAPICallResult( uint64_t, void *, int32_t, int32_t, bool * ) = 0;
    virtual void RunFrame(  ) = 0;
    virtual uint32_t GetIPCCallCount(  ) = 0;
    virtual void SetWarningMessageHook( void (*U_CDECL )(int32_t, const char *) ) = 0;
    virtual bool IsOverlayEnabled(  ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005
{
#ifdef __cplusplus
    virtual bool RequestCurrentStats(  ) = 0;
    virtual bool GetStat( const char *, int32_t * ) = 0;
    virtual bool GetStat( const char *, float * ) = 0;
    virtual bool SetStat( const char *, int32_t ) = 0;
    virtual bool SetStat( const char *, float ) = 0;
    virtual bool UpdateAvgRateStat( const char *, float, double ) = 0;
    virtual bool GetAchievement( const char *, bool * ) = 0;
    virtual bool SetAchievement( const char * ) = 0;
    virtual bool ClearAchievement( const char * ) = 0;
    virtual bool StoreStats(  ) = 0;
    virtual int32_t GetAchievementIcon( const char * ) = 0;
    virtual const char * GetAchievementDisplayAttribute( const char *, const char * ) = 0;
    virtual bool IndicateAchievementProgress( const char *, uint32_t, uint32_t ) = 0;
    virtual uint64_t RequestUserStats( CSteamID ) = 0;
    virtual bool GetUserStat( CSteamID, const char *, int32_t * ) = 0;
    virtual bool GetUserStat( CSteamID, const char *, float * ) = 0;
    virtual bool GetUserAchievement( CSteamID, const char *, bool * ) = 0;
    virtual bool ResetAllStats( bool ) = 0;
    virtual uint64_t FindOrCreateLeaderboard( const char *, uint32_t, uint32_t ) = 0;
    virtual uint64_t FindLeaderboard( const char * ) = 0;
    virtual const char * GetLeaderboardName( uint64_t ) = 0;
    virtual int32_t GetLeaderboardEntryCount( uint64_t ) = 0;
    virtual uint32_t GetLeaderboardSortMethod( uint64_t ) = 0;
    virtual uint32_t GetLeaderboardDisplayType( uint64_t ) = 0;
    virtual uint64_t DownloadLeaderboardEntries( uint64_t, uint32_t, int32_t, int32_t ) = 0;
    virtual bool GetDownloadedLeaderboardEntry( uint64_t, int32_t, u_LeaderboardEntry_t_104 *, int32_t *, int32_t ) = 0;
    virtual uint64_t UploadLeaderboardScore( uint64_t, int32_t, int32_t *, int32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION003
{
#ifdef __cplusplus
    virtual bool BIsSubscribed(  ) = 0;
    virtual bool BIsLowViolence(  ) = 0;
    virtual bool BIsCybercafe(  ) = 0;
    virtual bool BIsVACBanned(  ) = 0;
    virtual const char * GetCurrentGameLanguage(  ) = 0;
    virtual const char * GetAvailableGameLanguages(  ) = 0;
    virtual bool BIsSubscribedApp( uint32_t ) = 0;
    virtual bool BIsDlcInstalled( uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamMatchmaking_SteamMatchMaking007
{
#ifdef __cplusplus
    virtual int32_t GetFavoriteGameCount(  ) = 0;
    virtual bool GetFavoriteGame( int32_t, uint32_t *, uint32_t *, uint16_t *, uint16_t *, uint32_t *, uint32_t * ) = 0;
    virtual int32_t AddFavoriteGame( uint32_t, uint32_t, uint16_t, uint16_t, uint32_t, uint32_t ) = 0;
    virtual bool RemoveFavoriteGame( uint32_t, uint32_t, uint16_t, uint16_t, uint32_t ) = 0;
    virtual uint64_t RequestLobbyList(  ) = 0;
    virtual void AddRequestLobbyListStringFilter( const char *, const char *, uint32_t ) = 0;
    virtual void AddRequestLobbyListNumericalFilter( const char *, int32_t, uint32_t ) = 0;
    virtual void AddRequestLobbyListNearValueFilter( const char *, int32_t ) = 0;
    virtual void AddRequestLobbyListFilterSlotsAvailable( int32_t ) = 0;
    virtual CSteamID GetLobbyByIndex( int32_t ) = 0;
    virtual uint64_t CreateLobby( uint32_t, int32_t ) = 0;
    virtual uint64_t JoinLobby( CSteamID ) = 0;
    virtual void LeaveLobby( CSteamID ) = 0;
    virtual bool InviteUserToLobby( CSteamID, CSteamID ) = 0;
    virtual int32_t GetNumLobbyMembers( CSteamID ) = 0;
    virtual CSteamID GetLobbyMemberByIndex( CSteamID, int32_t ) = 0;
    virtual const char * GetLobbyData( CSteamID, const char * ) = 0;
    virtual bool SetLobbyData( CSteamID, const char *, const char * ) = 0;
    virtual int32_t GetLobbyDataCount( CSteamID ) = 0;
    virtual bool GetLobbyDataByIndex( CSteamID, int32_t, char *, int32_t, char *, int32_t ) = 0;
    virtual bool DeleteLobbyData( CSteamID, const char * ) = 0;
    virtual const char * GetLobbyMemberData( CSteamID, CSteamID, const char * ) = 0;
    virtual void SetLobbyMemberData( CSteamID, const char *, const char * ) = 0;
    virtual bool SendLobbyChatMsg( CSteamID, const void *, int32_t ) = 0;
    virtual int32_t GetLobbyChatEntry( CSteamID, int32_t, CSteamID *, void *, int32_t, uint32_t * ) = 0;
    virtual bool RequestLobbyData( CSteamID ) = 0;
    virtual void SetLobbyGameServer( CSteamID, uint32_t, uint16_t, CSteamID ) = 0;
    virtual bool GetLobbyGameServer( CSteamID, uint32_t *, uint16_t *, CSteamID * ) = 0;
    virtual bool SetLobbyMemberLimit( CSteamID, int32_t ) = 0;
    virtual int32_t GetLobbyMemberLimit( CSteamID ) = 0;
    virtual bool SetLobbyType( CSteamID, uint32_t ) = 0;
    virtual bool SetLobbyJoinable( CSteamID, bool ) = 0;
    virtual CSteamID GetLobbyOwner( CSteamID ) = 0;
    virtual bool SetLobbyOwner( CSteamID, CSteamID ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006
{
#ifdef __cplusplus
    virtual bool RequestCurrentStats(  ) = 0;
    virtual bool GetStat( const char *, int32_t * ) = 0;
    virtual bool GetStat( const char *, float * ) = 0;
    virtual bool SetStat( const char *, int32_t ) = 0;
    virtual bool SetStat( const char *, float ) = 0;
    virtual bool UpdateAvgRateStat( const char *, float, double ) = 0;
    virtual bool GetAchievement( const char *, bool * ) = 0;
    virtual bool SetAchievement( const char * ) = 0;
    virtual bool ClearAchievement( const char * ) = 0;
    virtual bool StoreStats(  ) = 0;
    virtual int32_t GetAchievementIcon( const char * ) = 0;
    virtual const char * GetAchievementDisplayAttribute( const char *, const char * ) = 0;
    virtual bool IndicateAchievementProgress( const char *, uint32_t, uint32_t ) = 0;
    virtual uint64_t RequestUserStats( CSteamID ) = 0;
    virtual bool GetUserStat( CSteamID, const char *, int32_t * ) = 0;
    virtual bool GetUserStat( CSteamID, const char *, float * ) = 0;
    virtual bool GetUserAchievement( CSteamID, const char *, bool * ) = 0;
    virtual bool ResetAllStats( bool ) = 0;
    virtual uint64_t FindOrCreateLeaderboard( const char *, uint32_t, uint32_t ) = 0;
    virtual uint64_t FindLeaderboard( const char * ) = 0;
    virtual const char * GetLeaderboardName( uint64_t ) = 0;
    virtual int32_t GetLeaderboardEntryCount( uint64_t ) = 0;
    virtual uint32_t GetLeaderboardSortMethod( uint64_t ) = 0;
    virtual uint32_t GetLeaderboardDisplayType( uint64_t ) = 0;
    virtual uint64_t DownloadLeaderboardEntries( uint64_t, uint32_t, int32_t, int32_t ) = 0;
    virtual bool GetDownloadedLeaderboardEntry( uint64_t, int32_t, u_LeaderboardEntry_t_104 *, int32_t *, int32_t ) = 0;
    virtual uint64_t UploadLeaderboardScore( uint64_t, uint32_t, int32_t, const int32_t *, int32_t ) = 0;
    virtual uint64_t GetNumberOfCurrentPlayers(  ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamNetworking_SteamNetworking003
{
#ifdef __cplusplus
    virtual bool SendP2PPacket( CSteamID, const void *, uint32_t, uint32_t ) = 0;
    virtual bool IsP2PPacketAvailable( uint32_t * ) = 0;
    virtual bool ReadP2PPacket( void *, uint32_t, uint32_t *, CSteamID * ) = 0;
    virtual bool AcceptP2PSessionWithUser( CSteamID ) = 0;
    virtual bool CloseP2PSessionWithUser( CSteamID ) = 0;
    virtual bool GetP2PSessionState( CSteamID, P2PSessionState_t * ) = 0;
    virtual uint32_t CreateListenSocket( int32_t, uint32_t, uint16_t, bool ) = 0;
    virtual uint32_t CreateP2PConnectionSocket( CSteamID, int32_t, int32_t, bool ) = 0;
    virtual uint32_t CreateConnectionSocket( uint32_t, uint16_t, int32_t ) = 0;
    virtual bool DestroySocket( uint32_t, bool ) = 0;
    virtual bool DestroyListenSocket( uint32_t, bool ) = 0;
    virtual bool SendDataOnSocket( uint32_t, void *, uint32_t, bool ) = 0;
    virtual bool IsDataAvailableOnSocket( uint32_t, uint32_t * ) = 0;
    virtual bool RetrieveDataFromSocket( uint32_t, void *, uint32_t, uint32_t * ) = 0;
    virtual bool IsDataAvailable( uint32_t, uint32_t *, uint32_t * ) = 0;
    virtual bool RetrieveData( uint32_t, void *, uint32_t, uint32_t *, uint32_t * ) = 0;
    virtual bool GetSocketInfo( uint32_t, CSteamID *, int32_t *, uint32_t *, uint16_t * ) = 0;
    virtual bool GetListenSocketInfo( uint32_t, uint32_t *, uint16_t * ) = 0;
    virtual uint32_t GetSocketConnectionType( uint32_t ) = 0;
    virtual int32_t GetMaxPacketSize( uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamGameServer_SteamGameServer009
{
#ifdef __cplusplus
    virtual void LogOn(  ) = 0;
    virtual void LogOff(  ) = 0;
    virtual bool BLoggedOn(  ) = 0;
    virtual bool BSecure(  ) = 0;
    virtual CSteamID GetSteamID(  ) = 0;
    virtual bool SendUserConnectAndAuthenticate( uint32_t, const void *, uint32_t, CSteamID * ) = 0;
    virtual CSteamID CreateUnauthenticatedUserConnection(  ) = 0;
    virtual void SendUserDisconnect( CSteamID ) = 0;
    virtual bool BUpdateUserData( CSteamID, const char *, uint32_t ) = 0;
    virtual bool BSetServerType( uint32_t, uint32_t, uint16_t, uint16_t, uint16_t, const char *, const char *, bool ) = 0;
    virtual void UpdateServerStatus( int32_t, int32_t, int32_t, const char *, const char *, const char * ) = 0;
    virtual void UpdateSpectatorPort( uint16_t ) = 0;
    virtual void SetGameType( const char * ) = 0;
    virtual bool BGetUserAchievementStatus( CSteamID, const char * ) = 0;
    virtual void GetGameplayStats(  ) = 0;
    virtual bool RequestUserGroupStatus( CSteamID, CSteamID ) = 0;
    virtual uint32_t GetPublicIP(  ) = 0;
    virtual void SetGameData( const char * ) = 0;
    virtual uint32_t UserHasLicenseForApp( CSteamID, uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUser_SteamUser013
{
#ifdef __cplusplus
    virtual int32_t GetHSteamUser(  ) = 0;
    virtual bool BLoggedOn(  ) = 0;
    virtual CSteamID GetSteamID(  ) = 0;
    virtual int32_t InitiateGameConnection( void *, int32_t, CSteamID, uint32_t, uint16_t, bool ) = 0;
    virtual void TerminateGameConnection( uint32_t, uint16_t ) = 0;
    virtual void TrackAppUsageEvent( CGameID, int32_t, const char * ) = 0;
    virtual bool GetUserDataFolder( char *, int32_t ) = 0;
    virtual void StartVoiceRecording(  ) = 0;
    virtual void StopVoiceRecording(  ) = 0;
    virtual uint32_t GetAvailableVoice( uint32_t *, uint32_t * ) = 0;
    virtual uint32_t GetVoice( bool, void *, uint32_t, uint32_t *, bool, void *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t DecompressVoice( const void *, uint32_t, void *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetAuthSessionTicket( void *, int32_t, uint32_t * ) = 0;
    virtual uint32_t BeginAuthSession( const void *, int32_t, CSteamID ) = 0;
    virtual void EndAuthSession( CSteamID ) = 0;
    virtual void CancelAuthTicket( uint32_t ) = 0;
    virtual uint32_t UserHasLicenseForApp( CSteamID, uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamMatchmakingServers_SteamMatchMakingServers002
{
#ifdef __cplusplus
    virtual void * RequestInternetServerList( uint32_t, MatchMakingKeyValuePair_t **, uint32_t, u_ISteamMatchmakingServerListResponse * ) = 0;
    virtual void * RequestLANServerList( uint32_t, u_ISteamMatchmakingServerListResponse * ) = 0;
    virtual void * RequestFriendsServerList( uint32_t, MatchMakingKeyValuePair_t **, uint32_t, u_ISteamMatchmakingServerListResponse * ) = 0;
    virtual void * RequestFavoritesServerList( uint32_t, MatchMakingKeyValuePair_t **, uint32_t, u_ISteamMatchmakingServerListResponse * ) = 0;
    virtual void * RequestHistoryServerList( uint32_t, MatchMakingKeyValuePair_t **, uint32_t, u_ISteamMatchmakingServerListResponse * ) = 0;
    virtual void * RequestSpectatorServerList( uint32_t, MatchMakingKeyValuePair_t **, uint32_t, u_ISteamMatchmakingServerListResponse * ) = 0;
    virtual void ReleaseRequest( void * ) = 0;
    virtual gameserveritem_t_105 * GetServerDetails( void *, int32_t ) = 0;
    virtual void CancelQuery( void * ) = 0;
    virtual void RefreshQuery( void * ) = 0;
    virtual bool IsRefreshing( void * ) = 0;
    virtual int32_t GetServerCount( void * ) = 0;
    virtual void RefreshServer( void *, int32_t ) = 0;
    virtual int32_t PingServer( uint32_t, uint16_t, u_ISteamMatchmakingPingResponse * ) = 0;
    virtual int32_t PlayerDetails( uint32_t, uint16_t, u_ISteamMatchmakingPlayersResponse * ) = 0;
    virtual int32_t ServerRules( uint32_t, uint16_t, u_ISteamMatchmakingRulesResponse * ) = 0;
    virtual void CancelServerQuery( int32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUtils_SteamUtils005
{
#ifdef __cplusplus
    virtual uint32_t GetSecondsSinceAppActive(  ) = 0;
    virtual uint32_t GetSecondsSinceComputerActive(  ) = 0;
    virtual uint32_t GetConnectedUniverse(  ) = 0;
    virtual uint32_t GetServerRealTime(  ) = 0;
    virtual const char * GetIPCountry(  ) = 0;
    virtual bool GetImageSize( int32_t, uint32_t *, uint32_t * ) = 0;
    virtual bool GetImageRGBA( int32_t, uint8_t *, int32_t ) = 0;
    virtual bool GetCSERIPPort( uint32_t *, uint16_t * ) = 0;
    virtual uint8_t GetCurrentBatteryPower(  ) = 0;
    virtual uint32_t GetAppID(  ) = 0;
    virtual void SetOverlayNotificationPosition( uint32_t ) = 0;
    virtual bool IsAPICallCompleted( uint64_t, bool * ) = 0;
    virtual uint32_t GetAPICallFailureReason( uint64_t ) = 0;
    virtual bool GetAPICallResult( uint64_t, void *, int32_t, int32_t, bool * ) = 0;
    virtual void RunFrame(  ) = 0;
    virtual uint32_t GetIPCCallCount(  ) = 0;
    virtual void SetWarningMessageHook( void (*U_CDECL )(int32_t, const char *) ) = 0;
    virtual bool IsOverlayEnabled(  ) = 0;
    virtual bool BOverlayNeedsPresent(  ) = 0;
    virtual uint64_t CheckFileSignature( const char * ) = 0;
    virtual bool ShowGamepadTextInput( uint32_t, uint32_t, const char *, uint32_t ) = 0;
    virtual uint32_t GetEnteredGamepadTextLength(  ) = 0;
    virtual bool GetEnteredGamepadTextInput( char *, uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamClient_SteamClient009
{
#ifdef __cplusplus
    virtual int32_t CreateSteamPipe(  ) = 0;
    virtual bool BReleaseSteamPipe( int32_t ) = 0;
    virtual int32_t ConnectToGlobalUser( int32_t ) = 0;
    virtual int32_t CreateLocalUser( int32_t *, uint32_t ) = 0;
    virtual void ReleaseUser( int32_t, int32_t ) = 0;
    virtual void /*ISteamUser*/ * GetISteamUser( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamGameServer*/ * GetISteamGameServer( int32_t, int32_t, const char * ) = 0;
    virtual void SetLocalIPBinding( uint32_t, uint16_t ) = 0;
    virtual void /*ISteamFriends*/ * GetISteamFriends( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUtils*/ * GetISteamUtils( int32_t, const char * ) = 0;
    virtual void /*ISteamMatchmaking*/ * GetISteamMatchmaking( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamMasterServerUpdater*/ * GetISteamMasterServerUpdater( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamMatchmakingServers*/ * GetISteamMatchmakingServers( int32_t, int32_t, const char * ) = 0;
    virtual void * GetISteamGenericInterface( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUserStats*/ * GetISteamUserStats( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamGameServerStats*/ * GetISteamGameServerStats( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamApps*/ * GetISteamApps( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamNetworking*/ * GetISteamNetworking( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamRemoteStorage*/ * GetISteamRemoteStorage( int32_t, int32_t, const char * ) = 0;
    virtual void RunFrame(  ) = 0;
    virtual uint32_t GetIPCCallCount(  ) = 0;
    virtual void SetWarningMessageHook( void (*U_CDECL )(int32_t, const char *) ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamMatchmaking_SteamMatchMaking008
{
#ifdef __cplusplus
    virtual int32_t GetFavoriteGameCount(  ) = 0;
    virtual bool GetFavoriteGame( int32_t, uint32_t *, uint32_t *, uint16_t *, uint16_t *, uint32_t *, uint32_t * ) = 0;
    virtual int32_t AddFavoriteGame( uint32_t, uint32_t, uint16_t, uint16_t, uint32_t, uint32_t ) = 0;
    virtual bool RemoveFavoriteGame( uint32_t, uint32_t, uint16_t, uint16_t, uint32_t ) = 0;
    virtual uint64_t RequestLobbyList(  ) = 0;
    virtual void AddRequestLobbyListStringFilter( const char *, const char *, uint32_t ) = 0;
    virtual void AddRequestLobbyListNumericalFilter( const char *, int32_t, uint32_t ) = 0;
    virtual void AddRequestLobbyListNearValueFilter( const char *, int32_t ) = 0;
    virtual void AddRequestLobbyListFilterSlotsAvailable( int32_t ) = 0;
    virtual void AddRequestLobbyListDistanceFilter( uint32_t ) = 0;
    virtual void AddRequestLobbyListResultCountFilter( int32_t ) = 0;
    virtual CSteamID GetLobbyByIndex( int32_t ) = 0;
    virtual uint64_t CreateLobby( uint32_t, int32_t ) = 0;
    virtual uint64_t JoinLobby( CSteamID ) = 0;
    virtual void LeaveLobby( CSteamID ) = 0;
    virtual bool InviteUserToLobby( CSteamID, CSteamID ) = 0;
    virtual int32_t GetNumLobbyMembers( CSteamID ) = 0;
    virtual CSteamID GetLobbyMemberByIndex( CSteamID, int32_t ) = 0;
    virtual const char * GetLobbyData( CSteamID, const char * ) = 0;
    virtual bool SetLobbyData( CSteamID, const char *, const char * ) = 0;
    virtual int32_t GetLobbyDataCount( CSteamID ) = 0;
    virtual bool GetLobbyDataByIndex( CSteamID, int32_t, char *, int32_t, char *, int32_t ) = 0;
    virtual bool DeleteLobbyData( CSteamID, const char * ) = 0;
    virtual const char * GetLobbyMemberData( CSteamID, CSteamID, const char * ) = 0;
    virtual void SetLobbyMemberData( CSteamID, const char *, const char * ) = 0;
    virtual bool SendLobbyChatMsg( CSteamID, const void *, int32_t ) = 0;
    virtual int32_t GetLobbyChatEntry( CSteamID, int32_t, CSteamID *, void *, int32_t, uint32_t * ) = 0;
    virtual bool RequestLobbyData( CSteamID ) = 0;
    virtual void SetLobbyGameServer( CSteamID, uint32_t, uint16_t, CSteamID ) = 0;
    virtual bool GetLobbyGameServer( CSteamID, uint32_t *, uint16_t *, CSteamID * ) = 0;
    virtual bool SetLobbyMemberLimit( CSteamID, int32_t ) = 0;
    virtual int32_t GetLobbyMemberLimit( CSteamID ) = 0;
    virtual bool SetLobbyType( CSteamID, uint32_t ) = 0;
    virtual bool SetLobbyJoinable( CSteamID, bool ) = 0;
    virtual CSteamID GetLobbyOwner( CSteamID ) = 0;
    virtual bool SetLobbyOwner( CSteamID, CSteamID ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007
{
#ifdef __cplusplus
    virtual bool RequestCurrentStats(  ) = 0;
    virtual bool GetStat( const char *, int32_t * ) = 0;
    virtual bool GetStat( const char *, float * ) = 0;
    virtual bool SetStat( const char *, int32_t ) = 0;
    virtual bool SetStat( const char *, float ) = 0;
    virtual bool UpdateAvgRateStat( const char *, float, double ) = 0;
    virtual bool GetAchievement( const char *, bool * ) = 0;
    virtual bool SetAchievement( const char * ) = 0;
    virtual bool ClearAchievement( const char * ) = 0;
    virtual bool GetAchievementAndUnlockTime( const char *, bool *, uint32_t * ) = 0;
    virtual bool StoreStats(  ) = 0;
    virtual int32_t GetAchievementIcon( const char * ) = 0;
    virtual const char * GetAchievementDisplayAttribute( const char *, const char * ) = 0;
    virtual bool IndicateAchievementProgress( const char *, uint32_t, uint32_t ) = 0;
    virtual uint64_t RequestUserStats( CSteamID ) = 0;
    virtual bool GetUserStat( CSteamID, const char *, int32_t * ) = 0;
    virtual bool GetUserStat( CSteamID, const char *, float * ) = 0;
    virtual bool GetUserAchievement( CSteamID, const char *, bool * ) = 0;
    virtual bool GetUserAchievementAndUnlockTime( CSteamID, const char *, bool *, uint32_t * ) = 0;
    virtual bool ResetAllStats( bool ) = 0;
    virtual uint64_t FindOrCreateLeaderboard( const char *, uint32_t, uint32_t ) = 0;
    virtual uint64_t FindLeaderboard( const char * ) = 0;
    virtual const char * GetLeaderboardName( uint64_t ) = 0;
    virtual int32_t GetLeaderboardEntryCount( uint64_t ) = 0;
    virtual uint32_t GetLeaderboardSortMethod( uint64_t ) = 0;
    virtual uint32_t GetLeaderboardDisplayType( uint64_t ) = 0;
    virtual uint64_t DownloadLeaderboardEntries( uint64_t, uint32_t, int32_t, int32_t ) = 0;
    virtual bool GetDownloadedLeaderboardEntry( uint64_t, int32_t, u_LeaderboardEntry_t_104 *, int32_t *, int32_t ) = 0;
    virtual uint64_t UploadLeaderboardScore( uint64_t, uint32_t, int32_t, const int32_t *, int32_t ) = 0;
    virtual uint64_t GetNumberOfCurrentPlayers(  ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamGameServer_SteamGameServer010
{
#ifdef __cplusplus
    virtual void LogOn(  ) = 0;
    virtual void LogOff(  ) = 0;
    virtual bool BLoggedOn(  ) = 0;
    virtual bool BSecure(  ) = 0;
    virtual CSteamID GetSteamID(  ) = 0;
    virtual bool SendUserConnectAndAuthenticate( uint32_t, const void *, uint32_t, CSteamID * ) = 0;
    virtual CSteamID CreateUnauthenticatedUserConnection(  ) = 0;
    virtual void SendUserDisconnect( CSteamID ) = 0;
    virtual bool BUpdateUserData( CSteamID, const char *, uint32_t ) = 0;
    virtual bool BSetServerType( uint32_t, uint32_t, uint16_t, uint16_t, uint16_t, const char *, const char *, bool ) = 0;
    virtual void UpdateServerStatus( int32_t, int32_t, int32_t, const char *, const char *, const char * ) = 0;
    virtual void UpdateSpectatorPort( uint16_t ) = 0;
    virtual void SetGameTags( const char * ) = 0;
    virtual void GetGameplayStats(  ) = 0;
    virtual uint64_t GetServerReputation(  ) = 0;
    virtual bool RequestUserGroupStatus( CSteamID, CSteamID ) = 0;
    virtual uint32_t GetPublicIP(  ) = 0;
    virtual void SetGameData( const char * ) = 0;
    virtual uint32_t UserHasLicenseForApp( CSteamID, uint32_t ) = 0;
    virtual uint32_t GetAuthSessionTicket( void *, int32_t, uint32_t * ) = 0;
    virtual uint32_t BeginAuthSession( const void *, int32_t, CSteamID ) = 0;
    virtual void EndAuthSession( CSteamID ) = 0;
    virtual void CancelAuthTicket( uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamGameServerStats_SteamGameServerStats001
{
#ifdef __cplusplus
    virtual uint64_t RequestUserStats( CSteamID ) = 0;
    virtual bool GetUserStat( CSteamID, const char *, int32_t * ) = 0;
    virtual bool GetUserStat( CSteamID, const char *, float * ) = 0;
    virtual bool GetUserAchievement( CSteamID, const char *, bool * ) = 0;
    virtual bool SetUserStat( CSteamID, const char *, int32_t ) = 0;
    virtual bool SetUserStat( CSteamID, const char *, float ) = 0;
    virtual bool UpdateUserAvgRateStat( CSteamID, const char *, float, double ) = 0;
    virtual bool SetUserAchievement( CSteamID, const char * ) = 0;
    virtual bool ClearUserAchievement( CSteamID, const char * ) = 0;
    virtual uint64_t StoreUserStats( CSteamID ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamGameStats_SteamGameStats001
{
#ifdef __cplusplus
    virtual uint64_t GetNewSession( int8_t, uint64_t, int32_t, uint32_t ) = 0;
    virtual uint64_t EndSession( uint64_t, uint32_t, int32_t ) = 0;
    virtual uint32_t AddSessionAttributeInt( uint64_t, const char *, int32_t ) = 0;
    virtual uint32_t AddSessionAttributeString( uint64_t, const char *, const char * ) = 0;
    virtual uint32_t AddSessionAttributeFloat( uint64_t, const char *, float ) = 0;
    virtual uint32_t AddNewRow( uint64_t *, uint64_t, const char * ) = 0;
    virtual uint32_t CommitRow( uint64_t ) = 0;
    virtual uint32_t CommitOutstandingRows( uint64_t ) = 0;
    virtual uint32_t AddRowAttributeInt( uint64_t, const char *, int32_t ) = 0;
    virtual uint32_t AddRowAtributeString( uint64_t, const char *, const char * ) = 0;
    virtual uint32_t AddRowAttributeFloat( uint64_t, const char *, float ) = 0;
    virtual uint32_t AddSessionAttributeInt64( uint64_t, const char *, int64_t ) = 0;
    virtual uint32_t AddRowAttributeInt64( uint64_t, const char *, int64_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamGameCoordinator_SteamGameCoordinator001
{
#ifdef __cplusplus
    virtual uint32_t SendMessage( uint32_t, const void *, uint32_t ) = 0;
    virtual bool IsMessageAvailable( uint32_t * ) = 0;
    virtual uint32_t RetrieveMessage( uint32_t *, void *, uint32_t, uint32_t * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamFriends_SteamFriends006
{
#ifdef __cplusplus
    virtual const char * GetPersonaName(  ) = 0;
    virtual void SetPersonaName( const char * ) = 0;
    virtual uint32_t GetPersonaState(  ) = 0;
    virtual int32_t GetFriendCount( int32_t ) = 0;
    virtual CSteamID GetFriendByIndex( int32_t, int32_t ) = 0;
    virtual uint32_t GetFriendRelationship( CSteamID ) = 0;
    virtual uint32_t GetFriendPersonaState( CSteamID ) = 0;
    virtual const char * GetFriendPersonaName( CSteamID ) = 0;
    virtual int32_t GetFriendAvatar( CSteamID, int32_t ) = 0;
    virtual bool GetFriendGamePlayed( CSteamID, FriendGameInfo_t * ) = 0;
    virtual const char * GetFriendPersonaNameHistory( CSteamID, int32_t ) = 0;
    virtual bool HasFriend( CSteamID, int32_t ) = 0;
    virtual int32_t GetClanCount(  ) = 0;
    virtual CSteamID GetClanByIndex( int32_t ) = 0;
    virtual const char * GetClanName( CSteamID ) = 0;
    virtual const char * GetClanTag( CSteamID ) = 0;
    virtual int32_t GetFriendCountFromSource( CSteamID ) = 0;
    virtual CSteamID GetFriendFromSourceByIndex( CSteamID, int32_t ) = 0;
    virtual bool IsUserInSource( CSteamID, CSteamID ) = 0;
    virtual void SetInGameVoiceSpeaking( CSteamID, bool ) = 0;
    virtual void ActivateGameOverlay( const char * ) = 0;
    virtual void ActivateGameOverlayToUser( const char *, CSteamID ) = 0;
    virtual void ActivateGameOverlayToWebPage( const char * ) = 0;
    virtual void ActivateGameOverlayToStore( uint32_t ) = 0;
    virtual void SetPlayedWith( CSteamID ) = 0;
    virtual void ActivateGameOverlayInviteDialog( CSteamID ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUser_SteamUser014
{
#ifdef __cplusplus
    virtual int32_t GetHSteamUser(  ) = 0;
    virtual bool BLoggedOn(  ) = 0;
    virtual CSteamID GetSteamID(  ) = 0;
    virtual int32_t InitiateGameConnection( void *, int32_t, CSteamID, uint32_t, uint16_t, bool ) = 0;
    virtual void TerminateGameConnection( uint32_t, uint16_t ) = 0;
    virtual void TrackAppUsageEvent( CGameID, int32_t, const char * ) = 0;
    virtual bool GetUserDataFolder( char *, int32_t ) = 0;
    virtual void StartVoiceRecording(  ) = 0;
    virtual void StopVoiceRecording(  ) = 0;
    virtual uint32_t GetAvailableVoice( uint32_t *, uint32_t * ) = 0;
    virtual uint32_t GetVoice( bool, void *, uint32_t, uint32_t *, bool, void *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t DecompressVoice( const void *, uint32_t, void *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetAuthSessionTicket( void *, int32_t, uint32_t * ) = 0;
    virtual uint32_t BeginAuthSession( const void *, int32_t, CSteamID ) = 0;
    virtual void EndAuthSession( CSteamID ) = 0;
    virtual void CancelAuthTicket( uint32_t ) = 0;
    virtual uint32_t UserHasLicenseForApp( CSteamID, uint32_t ) = 0;
    virtual bool BIsBehindNAT(  ) = 0;
    virtual void AdvertiseGame( CSteamID, uint32_t, uint16_t ) = 0;
    virtual uint64_t RequestEncryptedAppTicket( void *, int32_t ) = 0;
    virtual bool GetEncryptedAppTicket( void *, int32_t, uint32_t * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamFriends_SteamFriends007
{
#ifdef __cplusplus
    virtual const char * GetPersonaName(  ) = 0;
    virtual void SetPersonaName( const char * ) = 0;
    virtual uint32_t GetPersonaState(  ) = 0;
    virtual int32_t GetFriendCount( int32_t ) = 0;
    virtual CSteamID GetFriendByIndex( int32_t, int32_t ) = 0;
    virtual uint32_t GetFriendRelationship( CSteamID ) = 0;
    virtual uint32_t GetFriendPersonaState( CSteamID ) = 0;
    virtual const char * GetFriendPersonaName( CSteamID ) = 0;
    virtual bool GetFriendGamePlayed( CSteamID, FriendGameInfo_t * ) = 0;
    virtual const char * GetFriendPersonaNameHistory( CSteamID, int32_t ) = 0;
    virtual bool HasFriend( CSteamID, int32_t ) = 0;
    virtual int32_t GetClanCount(  ) = 0;
    virtual CSteamID GetClanByIndex( int32_t ) = 0;
    virtual const char * GetClanName( CSteamID ) = 0;
    virtual const char * GetClanTag( CSteamID ) = 0;
    virtual int32_t GetFriendCountFromSource( CSteamID ) = 0;
    virtual CSteamID GetFriendFromSourceByIndex( CSteamID, int32_t ) = 0;
    virtual bool IsUserInSource( CSteamID, CSteamID ) = 0;
    virtual void SetInGameVoiceSpeaking( CSteamID, bool ) = 0;
    virtual void ActivateGameOverlay( const char * ) = 0;
    virtual void ActivateGameOverlayToUser( const char *, CSteamID ) = 0;
    virtual void ActivateGameOverlayToWebPage( const char * ) = 0;
    virtual void ActivateGameOverlayToStore( uint32_t ) = 0;
    virtual void SetPlayedWith( CSteamID ) = 0;
    virtual void ActivateGameOverlayInviteDialog( CSteamID ) = 0;
    virtual int32_t GetSmallFriendAvatar( CSteamID ) = 0;
    virtual int32_t GetMediumFriendAvatar( CSteamID ) = 0;
    virtual int32_t GetLargeFriendAvatar( CSteamID ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamNetworking_SteamNetworking004
{
#ifdef __cplusplus
    virtual bool SendP2PPacket( CSteamID, const void *, uint32_t, uint32_t, int32_t ) = 0;
    virtual bool IsP2PPacketAvailable( uint32_t *, int32_t ) = 0;
    virtual bool ReadP2PPacket( void *, uint32_t, uint32_t *, CSteamID *, int32_t ) = 0;
    virtual bool AcceptP2PSessionWithUser( CSteamID ) = 0;
    virtual bool CloseP2PSessionWithUser( CSteamID ) = 0;
    virtual bool GetP2PSessionState( CSteamID, P2PSessionState_t * ) = 0;
    virtual uint32_t CreateListenSocket( int32_t, uint32_t, uint16_t, bool ) = 0;
    virtual uint32_t CreateP2PConnectionSocket( CSteamID, int32_t, int32_t, bool ) = 0;
    virtual uint32_t CreateConnectionSocket( uint32_t, uint16_t, int32_t ) = 0;
    virtual bool DestroySocket( uint32_t, bool ) = 0;
    virtual bool DestroyListenSocket( uint32_t, bool ) = 0;
    virtual bool SendDataOnSocket( uint32_t, void *, uint32_t, bool ) = 0;
    virtual bool IsDataAvailableOnSocket( uint32_t, uint32_t * ) = 0;
    virtual bool RetrieveDataFromSocket( uint32_t, void *, uint32_t, uint32_t * ) = 0;
    virtual bool IsDataAvailable( uint32_t, uint32_t *, uint32_t * ) = 0;
    virtual bool RetrieveData( uint32_t, void *, uint32_t, uint32_t *, uint32_t * ) = 0;
    virtual bool GetSocketInfo( uint32_t, CSteamID *, int32_t *, uint32_t *, uint16_t * ) = 0;
    virtual bool GetListenSocketInfo( uint32_t, uint32_t *, uint16_t * ) = 0;
    virtual uint32_t GetSocketConnectionType( uint32_t ) = 0;
    virtual int32_t GetMaxPacketSize( uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamClient_SteamClient010
{
#ifdef __cplusplus
    virtual int32_t CreateSteamPipe(  ) = 0;
    virtual bool BReleaseSteamPipe( int32_t ) = 0;
    virtual int32_t ConnectToGlobalUser( int32_t ) = 0;
    virtual int32_t CreateLocalUser( int32_t *, uint32_t ) = 0;
    virtual void ReleaseUser( int32_t, int32_t ) = 0;
    virtual void /*ISteamUser*/ * GetISteamUser( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamGameServer*/ * GetISteamGameServer( int32_t, int32_t, const char * ) = 0;
    virtual void SetLocalIPBinding( uint32_t, uint16_t ) = 0;
    virtual void /*ISteamFriends*/ * GetISteamFriends( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUtils*/ * GetISteamUtils( int32_t, const char * ) = 0;
    virtual void /*ISteamMatchmaking*/ * GetISteamMatchmaking( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamMasterServerUpdater*/ * GetISteamMasterServerUpdater( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamMatchmakingServers*/ * GetISteamMatchmakingServers( int32_t, int32_t, const char * ) = 0;
    virtual void * GetISteamGenericInterface( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUserStats*/ * GetISteamUserStats( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamGameServerStats*/ * GetISteamGameServerStats( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamApps*/ * GetISteamApps( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamNetworking*/ * GetISteamNetworking( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamRemoteStorage*/ * GetISteamRemoteStorage( int32_t, int32_t, const char * ) = 0;
    virtual void RunFrame(  ) = 0;
    virtual uint32_t GetIPCCallCount(  ) = 0;
    virtual void SetWarningMessageHook( void (*U_CDECL )(int32_t, const char *) ) = 0;
    virtual bool BShutdownIfAllPipesClosed(  ) = 0;
    virtual void /*ISteamHTTP*/ * GetISteamHTTP( int32_t, int32_t, const char * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamFriends_SteamFriends008
{
#ifdef __cplusplus
    virtual const char * GetPersonaName(  ) = 0;
    virtual void SetPersonaName( const char * ) = 0;
    virtual uint32_t GetPersonaState(  ) = 0;
    virtual int32_t GetFriendCount( int32_t ) = 0;
    virtual CSteamID GetFriendByIndex( int32_t, int32_t ) = 0;
    virtual uint32_t GetFriendRelationship( CSteamID ) = 0;
    virtual uint32_t GetFriendPersonaState( CSteamID ) = 0;
    virtual const char * GetFriendPersonaName( CSteamID ) = 0;
    virtual bool GetFriendGamePlayed( CSteamID, FriendGameInfo_t * ) = 0;
    virtual const char * GetFriendPersonaNameHistory( CSteamID, int32_t ) = 0;
    virtual bool HasFriend( CSteamID, int32_t ) = 0;
    virtual int32_t GetClanCount(  ) = 0;
    virtual CSteamID GetClanByIndex( int32_t ) = 0;
    virtual const char * GetClanName( CSteamID ) = 0;
    virtual const char * GetClanTag( CSteamID ) = 0;
    virtual int32_t GetFriendCountFromSource( CSteamID ) = 0;
    virtual CSteamID GetFriendFromSourceByIndex( CSteamID, int32_t ) = 0;
    virtual bool IsUserInSource( CSteamID, CSteamID ) = 0;
    virtual void SetInGameVoiceSpeaking( CSteamID, bool ) = 0;
    virtual void ActivateGameOverlay( const char * ) = 0;
    virtual void ActivateGameOverlayToUser( const char *, CSteamID ) = 0;
    virtual void ActivateGameOverlayToWebPage( const char * ) = 0;
    virtual void ActivateGameOverlayToStore( uint32_t ) = 0;
    virtual void SetPlayedWith( CSteamID ) = 0;
    virtual void ActivateGameOverlayInviteDialog( CSteamID ) = 0;
    virtual int32_t GetSmallFriendAvatar( CSteamID ) = 0;
    virtual int32_t GetMediumFriendAvatar( CSteamID ) = 0;
    virtual int32_t GetLargeFriendAvatar( CSteamID ) = 0;
    virtual bool RequestUserInformation( CSteamID, bool ) = 0;
    virtual uint64_t RequestClanOfficerList( CSteamID ) = 0;
    virtual CSteamID GetClanOwner( CSteamID ) = 0;
    virtual int32_t GetClanOfficerCount( CSteamID ) = 0;
    virtual CSteamID GetClanOfficerByIndex( CSteamID, int32_t ) = 0;
    virtual uint32_t GetUserRestrictions(  ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003
{
#ifdef __cplusplus
    virtual bool FileWrite( const char *, const void *, int32_t ) = 0;
    virtual int32_t FileRead( const char *, void *, int32_t ) = 0;
    virtual bool FileForget( const char * ) = 0;
    virtual bool FileDelete( const char * ) = 0;
    virtual uint64_t FileShare( const char * ) = 0;
    virtual bool FileExists( const char * ) = 0;
    virtual bool FilePersisted( const char * ) = 0;
    virtual int32_t GetFileSize( const char * ) = 0;
    virtual int64_t GetFileTimestamp( const char * ) = 0;
    virtual int32_t GetFileCount(  ) = 0;
    virtual const char * GetFileNameAndSize( int32_t, int32_t * ) = 0;
    virtual bool GetQuota( int32_t *, int32_t * ) = 0;
    virtual bool IsCloudEnabledForAccount(  ) = 0;
    virtual bool IsCloudEnabledForApp(  ) = 0;
    virtual void SetCloudEnabledForApp( bool ) = 0;
    virtual uint64_t UGCDownload( uint64_t ) = 0;
    virtual bool GetUGCDetails( uint64_t, uint32_t *, char **, int32_t *, CSteamID * ) = 0;
    virtual int32_t UGCRead( uint64_t, void *, int32_t ) = 0;
    virtual int32_t GetCachedUGCCount(  ) = 0;
    virtual uint64_t GetCachedUGCHandle( int32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008
{
#ifdef __cplusplus
    virtual bool RequestCurrentStats(  ) = 0;
    virtual bool GetStat( const char *, int32_t * ) = 0;
    virtual bool GetStat( const char *, float * ) = 0;
    virtual bool SetStat( const char *, int32_t ) = 0;
    virtual bool SetStat( const char *, float ) = 0;
    virtual bool UpdateAvgRateStat( const char *, float, double ) = 0;
    virtual bool GetAchievement( const char *, bool * ) = 0;
    virtual bool SetAchievement( const char * ) = 0;
    virtual bool ClearAchievement( const char * ) = 0;
    virtual bool GetAchievementAndUnlockTime( const char *, bool *, uint32_t * ) = 0;
    virtual bool StoreStats(  ) = 0;
    virtual int32_t GetAchievementIcon( const char * ) = 0;
    virtual const char * GetAchievementDisplayAttribute( const char *, const char * ) = 0;
    virtual bool IndicateAchievementProgress( const char *, uint32_t, uint32_t ) = 0;
    virtual uint64_t RequestUserStats( CSteamID ) = 0;
    virtual bool GetUserStat( CSteamID, const char *, int32_t * ) = 0;
    virtual bool GetUserStat( CSteamID, const char *, float * ) = 0;
    virtual bool GetUserAchievement( CSteamID, const char *, bool * ) = 0;
    virtual bool GetUserAchievementAndUnlockTime( CSteamID, const char *, bool *, uint32_t * ) = 0;
    virtual bool ResetAllStats( bool ) = 0;
    virtual uint64_t FindOrCreateLeaderboard( const char *, uint32_t, uint32_t ) = 0;
    virtual uint64_t FindLeaderboard( const char * ) = 0;
    virtual const char * GetLeaderboardName( uint64_t ) = 0;
    virtual int32_t GetLeaderboardEntryCount( uint64_t ) = 0;
    virtual uint32_t GetLeaderboardSortMethod( uint64_t ) = 0;
    virtual uint32_t GetLeaderboardDisplayType( uint64_t ) = 0;
    virtual uint64_t DownloadLeaderboardEntries( uint64_t, uint32_t, int32_t, int32_t ) = 0;
    virtual bool GetDownloadedLeaderboardEntry( uint64_t, int32_t, u_LeaderboardEntry_t_111x *, int32_t *, int32_t ) = 0;
    virtual uint64_t UploadLeaderboardScore( uint64_t, uint32_t, int32_t, const int32_t *, int32_t ) = 0;
    virtual uint64_t AttachLeaderboardUGC( uint64_t, uint64_t ) = 0;
    virtual uint64_t GetNumberOfCurrentPlayers(  ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004
{
#ifdef __cplusplus
    virtual bool BIsSubscribed(  ) = 0;
    virtual bool BIsLowViolence(  ) = 0;
    virtual bool BIsCybercafe(  ) = 0;
    virtual bool BIsVACBanned(  ) = 0;
    virtual const char * GetCurrentGameLanguage(  ) = 0;
    virtual const char * GetAvailableGameLanguages(  ) = 0;
    virtual bool BIsSubscribedApp( uint32_t ) = 0;
    virtual bool BIsDlcInstalled( uint32_t ) = 0;
    virtual uint32_t GetEarliestPurchaseUnixTime( uint32_t ) = 0;
    virtual bool BIsSubscribedFromFreeWeekend(  ) = 0;
    virtual int32_t GetDLCCount(  ) = 0;
    virtual bool BGetDLCDataByIndex( int32_t, uint32_t *, bool *, char *, int32_t ) = 0;
    virtual void InstallDLC( uint32_t ) = 0;
    virtual void UninstallDLC( uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001
{
#ifdef __cplusplus
    virtual uint32_t GetAppOwnershipTicketData( uint32_t, void *, uint32_t, uint32_t *, uint32_t *, uint32_t *, uint32_t * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004
{
#ifdef __cplusplus
    virtual bool FileWrite( const char *, const void *, int32_t ) = 0;
    virtual int32_t FileRead( const char *, void *, int32_t ) = 0;
    virtual bool FileForget( const char * ) = 0;
    virtual bool FileDelete( const char * ) = 0;
    virtual uint64_t FileShare( const char * ) = 0;
    virtual bool SetSyncPlatforms( const char *, uint32_t ) = 0;
    virtual bool FileExists( const char * ) = 0;
    virtual bool FilePersisted( const char * ) = 0;
    virtual int32_t GetFileSize( const char * ) = 0;
    virtual int64_t GetFileTimestamp( const char * ) = 0;
    virtual uint32_t GetSyncPlatforms( const char * ) = 0;
    virtual int32_t GetFileCount(  ) = 0;
    virtual const char * GetFileNameAndSize( int32_t, int32_t * ) = 0;
    virtual bool GetQuota( int32_t *, int32_t * ) = 0;
    virtual bool IsCloudEnabledForAccount(  ) = 0;
    virtual bool IsCloudEnabledForApp(  ) = 0;
    virtual void SetCloudEnabledForApp( bool ) = 0;
    virtual uint64_t UGCDownload( uint64_t ) = 0;
    virtual bool GetUGCDetails( uint64_t, uint32_t *, char **, int32_t *, CSteamID * ) = 0;
    virtual int32_t UGCRead( uint64_t, void *, int32_t ) = 0;
    virtual int32_t GetCachedUGCCount(  ) = 0;
    virtual uint64_t GetCachedUGCHandle( int32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009
{
#ifdef __cplusplus
    virtual bool RequestCurrentStats(  ) = 0;
    virtual bool GetStat( const char *, int32_t * ) = 0;
    virtual bool GetStat( const char *, float * ) = 0;
    virtual bool SetStat( const char *, int32_t ) = 0;
    virtual bool SetStat( const char *, float ) = 0;
    virtual bool UpdateAvgRateStat( const char *, float, double ) = 0;
    virtual bool GetAchievement( const char *, bool * ) = 0;
    virtual bool SetAchievement( const char * ) = 0;
    virtual bool ClearAchievement( const char * ) = 0;
    virtual bool GetAchievementAndUnlockTime( const char *, bool *, uint32_t * ) = 0;
    virtual bool StoreStats(  ) = 0;
    virtual int32_t GetAchievementIcon( const char * ) = 0;
    virtual const char * GetAchievementDisplayAttribute( const char *, const char * ) = 0;
    virtual bool IndicateAchievementProgress( const char *, uint32_t, uint32_t ) = 0;
    virtual uint64_t RequestUserStats( CSteamID ) = 0;
    virtual bool GetUserStat( CSteamID, const char *, int32_t * ) = 0;
    virtual bool GetUserStat( CSteamID, const char *, float * ) = 0;
    virtual bool GetUserAchievement( CSteamID, const char *, bool * ) = 0;
    virtual bool GetUserAchievementAndUnlockTime( CSteamID, const char *, bool *, uint32_t * ) = 0;
    virtual bool ResetAllStats( bool ) = 0;
    virtual uint64_t FindOrCreateLeaderboard( const char *, uint32_t, uint32_t ) = 0;
    virtual uint64_t FindLeaderboard( const char * ) = 0;
    virtual const char * GetLeaderboardName( uint64_t ) = 0;
    virtual int32_t GetLeaderboardEntryCount( uint64_t ) = 0;
    virtual uint32_t GetLeaderboardSortMethod( uint64_t ) = 0;
    virtual uint32_t GetLeaderboardDisplayType( uint64_t ) = 0;
    virtual uint64_t DownloadLeaderboardEntries( uint64_t, uint32_t, int32_t, int32_t ) = 0;
    virtual uint64_t DownloadLeaderboardEntriesForUsers( uint64_t, CSteamID *, int32_t ) = 0;
    virtual bool GetDownloadedLeaderboardEntry( uint64_t, int32_t, u_LeaderboardEntry_t_111x *, int32_t *, int32_t ) = 0;
    virtual uint64_t UploadLeaderboardScore( uint64_t, uint32_t, int32_t, const int32_t *, int32_t ) = 0;
    virtual uint64_t AttachLeaderboardUGC( uint64_t, uint64_t ) = 0;
    virtual uint64_t GetNumberOfCurrentPlayers(  ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUser_SteamUser015
{
#ifdef __cplusplus
    virtual int32_t GetHSteamUser(  ) = 0;
    virtual bool BLoggedOn(  ) = 0;
    virtual CSteamID GetSteamID(  ) = 0;
    virtual int32_t InitiateGameConnection( void *, int32_t, CSteamID, uint32_t, uint16_t, bool ) = 0;
    virtual void TerminateGameConnection( uint32_t, uint16_t ) = 0;
    virtual void TrackAppUsageEvent( CGameID, int32_t, const char * ) = 0;
    virtual bool GetUserDataFolder( char *, int32_t ) = 0;
    virtual void StartVoiceRecording(  ) = 0;
    virtual void StopVoiceRecording(  ) = 0;
    virtual uint32_t GetAvailableVoice( uint32_t *, uint32_t * ) = 0;
    virtual uint32_t GetVoice( bool, void *, uint32_t, uint32_t *, bool, void *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t DecompressVoice( const void *, uint32_t, void *, uint32_t, uint32_t *, uint32_t ) = 0;
    virtual uint32_t GetVoiceOptimalSampleRate(  ) = 0;
    virtual uint32_t GetAuthSessionTicket( void *, int32_t, uint32_t * ) = 0;
    virtual uint32_t BeginAuthSession( const void *, int32_t, CSteamID ) = 0;
    virtual void EndAuthSession( CSteamID ) = 0;
    virtual void CancelAuthTicket( uint32_t ) = 0;
    virtual uint32_t UserHasLicenseForApp( CSteamID, uint32_t ) = 0;
    virtual bool BIsBehindNAT(  ) = 0;
    virtual void AdvertiseGame( CSteamID, uint32_t, uint16_t ) = 0;
    virtual uint64_t RequestEncryptedAppTicket( void *, int32_t ) = 0;
    virtual bool GetEncryptedAppTicket( void *, int32_t, uint32_t * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamFriends_SteamFriends009
{
#ifdef __cplusplus
    virtual const char * GetPersonaName(  ) = 0;
    virtual void SetPersonaName( const char * ) = 0;
    virtual uint32_t GetPersonaState(  ) = 0;
    virtual int32_t GetFriendCount( int32_t ) = 0;
    virtual CSteamID GetFriendByIndex( int32_t, int32_t ) = 0;
    virtual uint32_t GetFriendRelationship( CSteamID ) = 0;
    virtual uint32_t GetFriendPersonaState( CSteamID ) = 0;
    virtual const char * GetFriendPersonaName( CSteamID ) = 0;
    virtual bool GetFriendGamePlayed( CSteamID, FriendGameInfo_t * ) = 0;
    virtual const char * GetFriendPersonaNameHistory( CSteamID, int32_t ) = 0;
    virtual bool HasFriend( CSteamID, int32_t ) = 0;
    virtual int32_t GetClanCount(  ) = 0;
    virtual CSteamID GetClanByIndex( int32_t ) = 0;
    virtual const char * GetClanName( CSteamID ) = 0;
    virtual const char * GetClanTag( CSteamID ) = 0;
    virtual int32_t GetFriendCountFromSource( CSteamID ) = 0;
    virtual CSteamID GetFriendFromSourceByIndex( CSteamID, int32_t ) = 0;
    virtual bool IsUserInSource( CSteamID, CSteamID ) = 0;
    virtual void SetInGameVoiceSpeaking( CSteamID, bool ) = 0;
    virtual void ActivateGameOverlay( const char * ) = 0;
    virtual void ActivateGameOverlayToUser( const char *, CSteamID ) = 0;
    virtual void ActivateGameOverlayToWebPage( const char * ) = 0;
    virtual void ActivateGameOverlayToStore( uint32_t ) = 0;
    virtual void SetPlayedWith( CSteamID ) = 0;
    virtual void ActivateGameOverlayInviteDialog( CSteamID ) = 0;
    virtual int32_t GetSmallFriendAvatar( CSteamID ) = 0;
    virtual int32_t GetMediumFriendAvatar( CSteamID ) = 0;
    virtual int32_t GetLargeFriendAvatar( CSteamID ) = 0;
    virtual bool RequestUserInformation( CSteamID, bool ) = 0;
    virtual uint64_t RequestClanOfficerList( CSteamID ) = 0;
    virtual CSteamID GetClanOwner( CSteamID ) = 0;
    virtual int32_t GetClanOfficerCount( CSteamID ) = 0;
    virtual CSteamID GetClanOfficerByIndex( CSteamID, int32_t ) = 0;
    virtual uint32_t GetUserRestrictions(  ) = 0;
    virtual bool SetRichPresence( const char *, const char * ) = 0;
    virtual void ClearRichPresence(  ) = 0;
    virtual const char * GetFriendRichPresence( CSteamID, const char * ) = 0;
    virtual int32_t GetFriendRichPresenceKeyCount( CSteamID ) = 0;
    virtual const char * GetFriendRichPresenceKeyByIndex( CSteamID, int32_t ) = 0;
    virtual bool InviteUserToGame( CSteamID, const char * ) = 0;
    virtual int32_t GetCoplayFriendCount(  ) = 0;
    virtual CSteamID GetCoplayFriend( int32_t ) = 0;
    virtual int32_t GetFriendCoplayTime( CSteamID ) = 0;
    virtual uint32_t GetFriendCoplayGame( CSteamID ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamNetworking_SteamNetworking005
{
#ifdef __cplusplus
    virtual bool SendP2PPacket( CSteamID, const void *, uint32_t, uint32_t, int32_t ) = 0;
    virtual bool IsP2PPacketAvailable( uint32_t *, int32_t ) = 0;
    virtual bool ReadP2PPacket( void *, uint32_t, uint32_t *, CSteamID *, int32_t ) = 0;
    virtual bool AcceptP2PSessionWithUser( CSteamID ) = 0;
    virtual bool CloseP2PSessionWithUser( CSteamID ) = 0;
    virtual bool CloseP2PChannelWithUser( CSteamID, int32_t ) = 0;
    virtual bool GetP2PSessionState( CSteamID, P2PSessionState_t * ) = 0;
    virtual bool AllowP2PPacketRelay( bool ) = 0;
    virtual uint32_t CreateListenSocket( int32_t, uint32_t, uint16_t, bool ) = 0;
    virtual uint32_t CreateP2PConnectionSocket( CSteamID, int32_t, int32_t, bool ) = 0;
    virtual uint32_t CreateConnectionSocket( uint32_t, uint16_t, int32_t ) = 0;
    virtual bool DestroySocket( uint32_t, bool ) = 0;
    virtual bool DestroyListenSocket( uint32_t, bool ) = 0;
    virtual bool SendDataOnSocket( uint32_t, void *, uint32_t, bool ) = 0;
    virtual bool IsDataAvailableOnSocket( uint32_t, uint32_t * ) = 0;
    virtual bool RetrieveDataFromSocket( uint32_t, void *, uint32_t, uint32_t * ) = 0;
    virtual bool IsDataAvailable( uint32_t, uint32_t *, uint32_t * ) = 0;
    virtual bool RetrieveData( uint32_t, void *, uint32_t, uint32_t *, uint32_t * ) = 0;
    virtual bool GetSocketInfo( uint32_t, CSteamID *, int32_t *, uint32_t *, uint16_t * ) = 0;
    virtual bool GetListenSocketInfo( uint32_t, uint32_t *, uint16_t * ) = 0;
    virtual uint32_t GetSocketConnectionType( uint32_t ) = 0;
    virtual int32_t GetMaxPacketSize( uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUser_SteamUser016
{
#ifdef __cplusplus
    virtual int32_t GetHSteamUser(  ) = 0;
    virtual bool BLoggedOn(  ) = 0;
    virtual CSteamID GetSteamID(  ) = 0;
    virtual int32_t InitiateGameConnection( void *, int32_t, CSteamID, uint32_t, uint16_t, bool ) = 0;
    virtual void TerminateGameConnection( uint32_t, uint16_t ) = 0;
    virtual void TrackAppUsageEvent( CGameID, int32_t, const char * ) = 0;
    virtual bool GetUserDataFolder( char *, int32_t ) = 0;
    virtual void StartVoiceRecording(  ) = 0;
    virtual void StopVoiceRecording(  ) = 0;
    virtual uint32_t GetAvailableVoice( uint32_t *, uint32_t *, uint32_t ) = 0;
    virtual uint32_t GetVoice( bool, void *, uint32_t, uint32_t *, bool, void *, uint32_t, uint32_t *, uint32_t ) = 0;
    virtual uint32_t DecompressVoice( const void *, uint32_t, void *, uint32_t, uint32_t *, uint32_t ) = 0;
    virtual uint32_t GetVoiceOptimalSampleRate(  ) = 0;
    virtual uint32_t GetAuthSessionTicket( void *, int32_t, uint32_t * ) = 0;
    virtual uint32_t BeginAuthSession( const void *, int32_t, CSteamID ) = 0;
    virtual void EndAuthSession( CSteamID ) = 0;
    virtual void CancelAuthTicket( uint32_t ) = 0;
    virtual uint32_t UserHasLicenseForApp( CSteamID, uint32_t ) = 0;
    virtual bool BIsBehindNAT(  ) = 0;
    virtual void AdvertiseGame( CSteamID, uint32_t, uint16_t ) = 0;
    virtual uint64_t RequestEncryptedAppTicket( void *, int32_t ) = 0;
    virtual bool GetEncryptedAppTicket( void *, int32_t, uint32_t * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010
{
#ifdef __cplusplus
    virtual bool RequestCurrentStats(  ) = 0;
    virtual bool GetStat( const char *, int32_t * ) = 0;
    virtual bool GetStat( const char *, float * ) = 0;
    virtual bool SetStat( const char *, int32_t ) = 0;
    virtual bool SetStat( const char *, float ) = 0;
    virtual bool UpdateAvgRateStat( const char *, float, double ) = 0;
    virtual bool GetAchievement( const char *, bool * ) = 0;
    virtual bool SetAchievement( const char * ) = 0;
    virtual bool ClearAchievement( const char * ) = 0;
    virtual bool GetAchievementAndUnlockTime( const char *, bool *, uint32_t * ) = 0;
    virtual bool StoreStats(  ) = 0;
    virtual int32_t GetAchievementIcon( const char * ) = 0;
    virtual const char * GetAchievementDisplayAttribute( const char *, const char * ) = 0;
    virtual bool IndicateAchievementProgress( const char *, uint32_t, uint32_t ) = 0;
    virtual uint64_t RequestUserStats( CSteamID ) = 0;
    virtual bool GetUserStat( CSteamID, const char *, int32_t * ) = 0;
    virtual bool GetUserStat( CSteamID, const char *, float * ) = 0;
    virtual bool GetUserAchievement( CSteamID, const char *, bool * ) = 0;
    virtual bool GetUserAchievementAndUnlockTime( CSteamID, const char *, bool *, uint32_t * ) = 0;
    virtual bool ResetAllStats( bool ) = 0;
    virtual uint64_t FindOrCreateLeaderboard( const char *, uint32_t, uint32_t ) = 0;
    virtual uint64_t FindLeaderboard( const char * ) = 0;
    virtual const char * GetLeaderboardName( uint64_t ) = 0;
    virtual int32_t GetLeaderboardEntryCount( uint64_t ) = 0;
    virtual uint32_t GetLeaderboardSortMethod( uint64_t ) = 0;
    virtual uint32_t GetLeaderboardDisplayType( uint64_t ) = 0;
    virtual uint64_t DownloadLeaderboardEntries( uint64_t, uint32_t, int32_t, int32_t ) = 0;
    virtual uint64_t DownloadLeaderboardEntriesForUsers( uint64_t, CSteamID *, int32_t ) = 0;
    virtual bool GetDownloadedLeaderboardEntry( uint64_t, int32_t, u_LeaderboardEntry_t_111x *, int32_t *, int32_t ) = 0;
    virtual uint64_t UploadLeaderboardScore( uint64_t, uint32_t, int32_t, const int32_t *, int32_t ) = 0;
    virtual uint64_t AttachLeaderboardUGC( uint64_t, uint64_t ) = 0;
    virtual uint64_t GetNumberOfCurrentPlayers(  ) = 0;
    virtual uint64_t RequestGlobalAchievementPercentages(  ) = 0;
    virtual int32_t GetMostAchievedAchievementInfo( char *, uint32_t, float *, bool * ) = 0;
    virtual int32_t GetNextMostAchievedAchievementInfo( int32_t, char *, uint32_t, float *, bool * ) = 0;
    virtual bool GetAchievementAchievedPercent( const char *, float * ) = 0;
    virtual uint64_t RequestGlobalStats( int32_t ) = 0;
    virtual bool GetGlobalStat( const char *, int64_t * ) = 0;
    virtual bool GetGlobalStat( const char *, double * ) = 0;
    virtual int32_t GetGlobalStatHistory( const char *, int64_t *, uint32_t ) = 0;
    virtual int32_t GetGlobalStatHistory( const char *, double *, uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001
{
#ifdef __cplusplus
    virtual uint32_t CreateHTTPRequest( uint32_t, const char * ) = 0;
    virtual bool SetHTTPRequestContextValue( uint32_t, uint64_t ) = 0;
    virtual bool SetHTTPRequestNetworkActivityTimeout( uint32_t, uint32_t ) = 0;
    virtual bool SetHTTPRequestHeaderValue( uint32_t, const char *, const char * ) = 0;
    virtual bool SetHTTPRequestGetOrPostParameter( uint32_t, const char *, const char * ) = 0;
    virtual bool SendHTTPRequest( uint32_t, uint64_t * ) = 0;
    virtual bool DeferHTTPRequest( uint32_t ) = 0;
    virtual bool PrioritizeHTTPRequest( uint32_t ) = 0;
    virtual bool GetHTTPResponseHeaderSize( uint32_t, const char *, uint32_t * ) = 0;
    virtual bool GetHTTPResponseHeaderValue( uint32_t, const char *, uint8_t *, uint32_t ) = 0;
    virtual bool GetHTTPResponseBodySize( uint32_t, uint32_t * ) = 0;
    virtual bool GetHTTPResponseBodyData( uint32_t, uint8_t *, uint32_t ) = 0;
    virtual bool ReleaseHTTPRequest( uint32_t ) = 0;
    virtual bool GetHTTPDownloadProgressPct( uint32_t, float * ) = 0;
    virtual bool SetHTTPRequestRawPostBody( uint32_t, const char *, uint8_t *, uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamClient_SteamClient011
{
#ifdef __cplusplus
    virtual int32_t CreateSteamPipe(  ) = 0;
    virtual bool BReleaseSteamPipe( int32_t ) = 0;
    virtual int32_t ConnectToGlobalUser( int32_t ) = 0;
    virtual int32_t CreateLocalUser( int32_t *, uint32_t ) = 0;
    virtual void ReleaseUser( int32_t, int32_t ) = 0;
    virtual void /*ISteamUser*/ * GetISteamUser( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamGameServer*/ * GetISteamGameServer( int32_t, int32_t, const char * ) = 0;
    virtual void SetLocalIPBinding( uint32_t, uint16_t ) = 0;
    virtual void /*ISteamFriends*/ * GetISteamFriends( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUtils*/ * GetISteamUtils( int32_t, const char * ) = 0;
    virtual void /*ISteamMatchmaking*/ * GetISteamMatchmaking( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamMasterServerUpdater*/ * GetISteamMasterServerUpdater( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamMatchmakingServers*/ * GetISteamMatchmakingServers( int32_t, int32_t, const char * ) = 0;
    virtual void * GetISteamGenericInterface( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUserStats*/ * GetISteamUserStats( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamGameServerStats*/ * GetISteamGameServerStats( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamApps*/ * GetISteamApps( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamNetworking*/ * GetISteamNetworking( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamRemoteStorage*/ * GetISteamRemoteStorage( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamScreenshots*/ * GetISteamScreenshots( int32_t, int32_t, const char * ) = 0;
    virtual void RunFrame(  ) = 0;
    virtual uint32_t GetIPCCallCount(  ) = 0;
    virtual void SetWarningMessageHook( void (*U_CDECL )(int32_t, const char *) ) = 0;
    virtual bool BShutdownIfAllPipesClosed(  ) = 0;
    virtual void /*ISteamHTTP*/ * GetISteamHTTP( int32_t, int32_t, const char * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001
{
#ifdef __cplusplus
    virtual uint32_t WriteScreenshot( void *, uint32_t, int32_t, int32_t ) = 0;
    virtual uint32_t AddScreenshotToLibrary( const char *, const char *, int32_t, int32_t ) = 0;
    virtual void TriggerScreenshot(  ) = 0;
    virtual void HookScreenshots( bool ) = 0;
    virtual bool SetLocation( uint32_t, const char * ) = 0;
    virtual bool TagUser( uint32_t, CSteamID ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamClient_SteamClient012
{
#ifdef __cplusplus
    virtual int32_t CreateSteamPipe(  ) = 0;
    virtual bool BReleaseSteamPipe( int32_t ) = 0;
    virtual int32_t ConnectToGlobalUser( int32_t ) = 0;
    virtual int32_t CreateLocalUser( int32_t *, uint32_t ) = 0;
    virtual void ReleaseUser( int32_t, int32_t ) = 0;
    virtual void /*ISteamUser*/ * GetISteamUser( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamGameServer*/ * GetISteamGameServer( int32_t, int32_t, const char * ) = 0;
    virtual void SetLocalIPBinding( uint32_t, uint16_t ) = 0;
    virtual void /*ISteamFriends*/ * GetISteamFriends( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUtils*/ * GetISteamUtils( int32_t, const char * ) = 0;
    virtual void /*ISteamMatchmaking*/ * GetISteamMatchmaking( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamMatchmakingServers*/ * GetISteamMatchmakingServers( int32_t, int32_t, const char * ) = 0;
    virtual void * GetISteamGenericInterface( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUserStats*/ * GetISteamUserStats( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamGameServerStats*/ * GetISteamGameServerStats( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamApps*/ * GetISteamApps( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamNetworking*/ * GetISteamNetworking( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamRemoteStorage*/ * GetISteamRemoteStorage( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamScreenshots*/ * GetISteamScreenshots( int32_t, int32_t, const char * ) = 0;
    virtual void RunFrame(  ) = 0;
    virtual uint32_t GetIPCCallCount(  ) = 0;
    virtual void SetWarningMessageHook( void (*U_CDECL )(int32_t, const char *) ) = 0;
    virtual bool BShutdownIfAllPipesClosed(  ) = 0;
    virtual void /*ISteamHTTP*/ * GetISteamHTTP( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUnifiedMessages*/ * GetISteamUnifiedMessages( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamController*/ * GetISteamController( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUGC*/ * GetISteamUGC( int32_t, int32_t, const char * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamFriends_SteamFriends010
{
#ifdef __cplusplus
    virtual const char * GetPersonaName(  ) = 0;
    virtual void SetPersonaName( const char * ) = 0;
    virtual uint32_t GetPersonaState(  ) = 0;
    virtual int32_t GetFriendCount( int32_t ) = 0;
    virtual CSteamID GetFriendByIndex( int32_t, int32_t ) = 0;
    virtual uint32_t GetFriendRelationship( CSteamID ) = 0;
    virtual uint32_t GetFriendPersonaState( CSteamID ) = 0;
    virtual const char * GetFriendPersonaName( CSteamID ) = 0;
    virtual bool GetFriendGamePlayed( CSteamID, FriendGameInfo_t * ) = 0;
    virtual const char * GetFriendPersonaNameHistory( CSteamID, int32_t ) = 0;
    virtual bool HasFriend( CSteamID, int32_t ) = 0;
    virtual int32_t GetClanCount(  ) = 0;
    virtual CSteamID GetClanByIndex( int32_t ) = 0;
    virtual const char * GetClanName( CSteamID ) = 0;
    virtual const char * GetClanTag( CSteamID ) = 0;
    virtual bool GetClanActivityCounts( CSteamID, int32_t *, int32_t *, int32_t * ) = 0;
    virtual uint64_t DownloadClanActivityCounts( CSteamID *, int32_t ) = 0;
    virtual int32_t GetFriendCountFromSource( CSteamID ) = 0;
    virtual CSteamID GetFriendFromSourceByIndex( CSteamID, int32_t ) = 0;
    virtual bool IsUserInSource( CSteamID, CSteamID ) = 0;
    virtual void SetInGameVoiceSpeaking( CSteamID, bool ) = 0;
    virtual void ActivateGameOverlay( const char * ) = 0;
    virtual void ActivateGameOverlayToUser( const char *, CSteamID ) = 0;
    virtual void ActivateGameOverlayToWebPage( const char * ) = 0;
    virtual void ActivateGameOverlayToStore( uint32_t ) = 0;
    virtual void SetPlayedWith( CSteamID ) = 0;
    virtual void ActivateGameOverlayInviteDialog( CSteamID ) = 0;
    virtual int32_t GetSmallFriendAvatar( CSteamID ) = 0;
    virtual int32_t GetMediumFriendAvatar( CSteamID ) = 0;
    virtual int32_t GetLargeFriendAvatar( CSteamID ) = 0;
    virtual bool RequestUserInformation( CSteamID, bool ) = 0;
    virtual uint64_t RequestClanOfficerList( CSteamID ) = 0;
    virtual CSteamID GetClanOwner( CSteamID ) = 0;
    virtual int32_t GetClanOfficerCount( CSteamID ) = 0;
    virtual CSteamID GetClanOfficerByIndex( CSteamID, int32_t ) = 0;
    virtual uint32_t GetUserRestrictions(  ) = 0;
    virtual bool SetRichPresence( const char *, const char * ) = 0;
    virtual void ClearRichPresence(  ) = 0;
    virtual const char * GetFriendRichPresence( CSteamID, const char * ) = 0;
    virtual int32_t GetFriendRichPresenceKeyCount( CSteamID ) = 0;
    virtual const char * GetFriendRichPresenceKeyByIndex( CSteamID, int32_t ) = 0;
    virtual bool InviteUserToGame( CSteamID, const char * ) = 0;
    virtual int32_t GetCoplayFriendCount(  ) = 0;
    virtual CSteamID GetCoplayFriend( int32_t ) = 0;
    virtual int32_t GetFriendCoplayTime( CSteamID ) = 0;
    virtual uint32_t GetFriendCoplayGame( CSteamID ) = 0;
    virtual uint64_t JoinClanChatRoom( CSteamID ) = 0;
    virtual bool LeaveClanChatRoom( CSteamID ) = 0;
    virtual int32_t GetClanChatMemberCount( CSteamID ) = 0;
    virtual CSteamID GetChatMemberByIndex( CSteamID, int32_t ) = 0;
    virtual bool SendClanChatMessage( CSteamID, const char * ) = 0;
    virtual int32_t GetClanChatMessage( CSteamID, int32_t, void *, int32_t, uint32_t *, CSteamID * ) = 0;
    virtual bool IsClanChatAdmin( CSteamID, CSteamID ) = 0;
    virtual bool IsClanChatWindowOpenInSteam( CSteamID ) = 0;
    virtual bool OpenClanChatWindowInSteam( CSteamID ) = 0;
    virtual bool CloseClanChatWindowInSteam( CSteamID ) = 0;
    virtual bool SetListenForFriendsMessages( bool ) = 0;
    virtual bool ReplyToFriendMessage( CSteamID, const char * ) = 0;
    virtual int32_t GetFriendMessage( CSteamID, int32_t, void *, int32_t, uint32_t * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamMatchmaking_SteamMatchMaking009
{
#ifdef __cplusplus
    virtual int32_t GetFavoriteGameCount(  ) = 0;
    virtual bool GetFavoriteGame( int32_t, uint32_t *, uint32_t *, uint16_t *, uint16_t *, uint32_t *, uint32_t * ) = 0;
    virtual int32_t AddFavoriteGame( uint32_t, uint32_t, uint16_t, uint16_t, uint32_t, uint32_t ) = 0;
    virtual bool RemoveFavoriteGame( uint32_t, uint32_t, uint16_t, uint16_t, uint32_t ) = 0;
    virtual uint64_t RequestLobbyList(  ) = 0;
    virtual void AddRequestLobbyListStringFilter( const char *, const char *, uint32_t ) = 0;
    virtual void AddRequestLobbyListNumericalFilter( const char *, int32_t, uint32_t ) = 0;
    virtual void AddRequestLobbyListNearValueFilter( const char *, int32_t ) = 0;
    virtual void AddRequestLobbyListFilterSlotsAvailable( int32_t ) = 0;
    virtual void AddRequestLobbyListDistanceFilter( uint32_t ) = 0;
    virtual void AddRequestLobbyListResultCountFilter( int32_t ) = 0;
    virtual void AddRequestLobbyListCompatibleMembersFilter( CSteamID ) = 0;
    virtual CSteamID GetLobbyByIndex( int32_t ) = 0;
    virtual uint64_t CreateLobby( uint32_t, int32_t ) = 0;
    virtual uint64_t JoinLobby( CSteamID ) = 0;
    virtual void LeaveLobby( CSteamID ) = 0;
    virtual bool InviteUserToLobby( CSteamID, CSteamID ) = 0;
    virtual int32_t GetNumLobbyMembers( CSteamID ) = 0;
    virtual CSteamID GetLobbyMemberByIndex( CSteamID, int32_t ) = 0;
    virtual const char * GetLobbyData( CSteamID, const char * ) = 0;
    virtual bool SetLobbyData( CSteamID, const char *, const char * ) = 0;
    virtual int32_t GetLobbyDataCount( CSteamID ) = 0;
    virtual bool GetLobbyDataByIndex( CSteamID, int32_t, char *, int32_t, char *, int32_t ) = 0;
    virtual bool DeleteLobbyData( CSteamID, const char * ) = 0;
    virtual const char * GetLobbyMemberData( CSteamID, CSteamID, const char * ) = 0;
    virtual void SetLobbyMemberData( CSteamID, const char *, const char * ) = 0;
    virtual bool SendLobbyChatMsg( CSteamID, const void *, int32_t ) = 0;
    virtual int32_t GetLobbyChatEntry( CSteamID, int32_t, CSteamID *, void *, int32_t, uint32_t * ) = 0;
    virtual bool RequestLobbyData( CSteamID ) = 0;
    virtual void SetLobbyGameServer( CSteamID, uint32_t, uint16_t, CSteamID ) = 0;
    virtual bool GetLobbyGameServer( CSteamID, uint32_t *, uint16_t *, CSteamID * ) = 0;
    virtual bool SetLobbyMemberLimit( CSteamID, int32_t ) = 0;
    virtual int32_t GetLobbyMemberLimit( CSteamID ) = 0;
    virtual bool SetLobbyType( CSteamID, uint32_t ) = 0;
    virtual bool SetLobbyJoinable( CSteamID, bool ) = 0;
    virtual CSteamID GetLobbyOwner( CSteamID ) = 0;
    virtual bool SetLobbyOwner( CSteamID, CSteamID ) = 0;
    virtual bool SetLinkedLobby( CSteamID, CSteamID ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005
{
#ifdef __cplusplus
    virtual bool FileWrite( const char *, const void *, int32_t ) = 0;
    virtual int32_t FileRead( const char *, void *, int32_t ) = 0;
    virtual bool FileForget( const char * ) = 0;
    virtual bool FileDelete( const char * ) = 0;
    virtual uint64_t FileShare( const char * ) = 0;
    virtual bool SetSyncPlatforms( const char *, uint32_t ) = 0;
    virtual bool FileExists( const char * ) = 0;
    virtual bool FilePersisted( const char * ) = 0;
    virtual int32_t GetFileSize( const char * ) = 0;
    virtual int64_t GetFileTimestamp( const char * ) = 0;
    virtual uint32_t GetSyncPlatforms( const char * ) = 0;
    virtual int32_t GetFileCount(  ) = 0;
    virtual const char * GetFileNameAndSize( int32_t, int32_t * ) = 0;
    virtual bool GetQuota( int32_t *, int32_t * ) = 0;
    virtual bool IsCloudEnabledForAccount(  ) = 0;
    virtual bool IsCloudEnabledForApp(  ) = 0;
    virtual void SetCloudEnabledForApp( bool ) = 0;
    virtual uint64_t UGCDownload( uint64_t ) = 0;
    virtual bool GetUGCDetails( uint64_t, uint32_t *, char **, int32_t *, CSteamID * ) = 0;
    virtual int32_t UGCRead( uint64_t, void *, int32_t ) = 0;
    virtual int32_t GetCachedUGCCount(  ) = 0;
    virtual uint64_t GetCachedUGCHandle( int32_t ) = 0;
    virtual uint64_t PublishFile( const char *, const char *, uint32_t, const char *, const char *, uint32_t, u_SteamParamStringArray_t * ) = 0;
    virtual uint64_t PublishWorkshopFile( const char *, const char *, uint32_t, const char *, const char *, u_SteamParamStringArray_t * ) = 0;
    virtual uint64_t UpdatePublishedFile( u_RemoteStorageUpdatePublishedFileRequest_t ) = 0;
    virtual uint64_t GetPublishedFileDetails( uint64_t ) = 0;
    virtual uint64_t DeletePublishedFile( uint64_t ) = 0;
    virtual uint64_t EnumerateUserPublishedFiles( uint32_t ) = 0;
    virtual uint64_t SubscribePublishedFile( uint64_t ) = 0;
    virtual uint64_t EnumerateUserSubscribedFiles( uint32_t ) = 0;
    virtual uint64_t UnsubscribePublishedFile( uint64_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamGameServer_SteamGameServer011
{
#ifdef __cplusplus
    virtual bool InitGameServer( uint32_t, uint16_t, uint16_t, uint32_t, uint32_t, const char * ) = 0;
    virtual void SetProduct( const char * ) = 0;
    virtual void SetGameDescription( const char * ) = 0;
    virtual void SetModDir( const char * ) = 0;
    virtual void SetDedicatedServer( bool ) = 0;
    virtual void LogOn( const char *, const char * ) = 0;
    virtual void LogOnAnonymous(  ) = 0;
    virtual void LogOff(  ) = 0;
    virtual bool BLoggedOn(  ) = 0;
    virtual bool BSecure(  ) = 0;
    virtual CSteamID GetSteamID(  ) = 0;
    virtual bool WasRestartRequested(  ) = 0;
    virtual void SetMaxPlayerCount( int32_t ) = 0;
    virtual void SetBotPlayerCount( int32_t ) = 0;
    virtual void SetServerName( const char * ) = 0;
    virtual void SetMapName( const char * ) = 0;
    virtual void SetPasswordProtected( bool ) = 0;
    virtual void SetSpectatorPort( uint16_t ) = 0;
    virtual void SetSpectatorServerName( const char * ) = 0;
    virtual void ClearAllKeyValues(  ) = 0;
    virtual void SetKeyValue( const char *, const char * ) = 0;
    virtual void SetGameTags( const char * ) = 0;
    virtual void SetGameData( const char * ) = 0;
    virtual void SetRegion( const char * ) = 0;
    virtual bool SendUserConnectAndAuthenticate( uint32_t, const void *, uint32_t, CSteamID * ) = 0;
    virtual CSteamID CreateUnauthenticatedUserConnection(  ) = 0;
    virtual void SendUserDisconnect( CSteamID ) = 0;
    virtual bool BUpdateUserData( CSteamID, const char *, uint32_t ) = 0;
    virtual uint32_t GetAuthSessionTicket( void *, int32_t, uint32_t * ) = 0;
    virtual uint32_t BeginAuthSession( const void *, int32_t, CSteamID ) = 0;
    virtual void EndAuthSession( CSteamID ) = 0;
    virtual void CancelAuthTicket( uint32_t ) = 0;
    virtual uint32_t UserHasLicenseForApp( CSteamID, uint32_t ) = 0;
    virtual bool RequestUserGroupStatus( CSteamID, CSteamID ) = 0;
    virtual void GetGameplayStats(  ) = 0;
    virtual uint64_t GetServerReputation(  ) = 0;
    virtual uint32_t GetPublicIP(  ) = 0;
    virtual bool HandleIncomingPacket( const void *, int32_t, uint32_t, uint16_t ) = 0;
    virtual int32_t GetNextOutgoingPacket( void *, int32_t, uint32_t *, uint16_t * ) = 0;
    virtual void EnableHeartbeats( bool ) = 0;
    virtual void SetHeartbeatInterval( int32_t ) = 0;
    virtual void ForceHeartbeat(  ) = 0;
    virtual uint64_t AssociateWithClan( CSteamID ) = 0;
    virtual uint64_t ComputeNewPlayerCompatibility( CSteamID ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamFriends_SteamFriends011
{
#ifdef __cplusplus
    virtual const char * GetPersonaName(  ) = 0;
    virtual void SetPersonaName( const char * ) = 0;
    virtual uint32_t GetPersonaState(  ) = 0;
    virtual int32_t GetFriendCount( int32_t ) = 0;
    virtual CSteamID GetFriendByIndex( int32_t, int32_t ) = 0;
    virtual uint32_t GetFriendRelationship( CSteamID ) = 0;
    virtual uint32_t GetFriendPersonaState( CSteamID ) = 0;
    virtual const char * GetFriendPersonaName( CSteamID ) = 0;
    virtual bool GetFriendGamePlayed( CSteamID, FriendGameInfo_t * ) = 0;
    virtual const char * GetFriendPersonaNameHistory( CSteamID, int32_t ) = 0;
    virtual bool HasFriend( CSteamID, int32_t ) = 0;
    virtual int32_t GetClanCount(  ) = 0;
    virtual CSteamID GetClanByIndex( int32_t ) = 0;
    virtual const char * GetClanName( CSteamID ) = 0;
    virtual const char * GetClanTag( CSteamID ) = 0;
    virtual bool GetClanActivityCounts( CSteamID, int32_t *, int32_t *, int32_t * ) = 0;
    virtual uint64_t DownloadClanActivityCounts( CSteamID *, int32_t ) = 0;
    virtual int32_t GetFriendCountFromSource( CSteamID ) = 0;
    virtual CSteamID GetFriendFromSourceByIndex( CSteamID, int32_t ) = 0;
    virtual bool IsUserInSource( CSteamID, CSteamID ) = 0;
    virtual void SetInGameVoiceSpeaking( CSteamID, bool ) = 0;
    virtual void ActivateGameOverlay( const char * ) = 0;
    virtual void ActivateGameOverlayToUser( const char *, CSteamID ) = 0;
    virtual void ActivateGameOverlayToWebPage( const char * ) = 0;
    virtual void ActivateGameOverlayToStore( uint32_t ) = 0;
    virtual void SetPlayedWith( CSteamID ) = 0;
    virtual void ActivateGameOverlayInviteDialog( CSteamID ) = 0;
    virtual int32_t GetSmallFriendAvatar( CSteamID ) = 0;
    virtual int32_t GetMediumFriendAvatar( CSteamID ) = 0;
    virtual int32_t GetLargeFriendAvatar( CSteamID ) = 0;
    virtual bool RequestUserInformation( CSteamID, bool ) = 0;
    virtual uint64_t RequestClanOfficerList( CSteamID ) = 0;
    virtual CSteamID GetClanOwner( CSteamID ) = 0;
    virtual int32_t GetClanOfficerCount( CSteamID ) = 0;
    virtual CSteamID GetClanOfficerByIndex( CSteamID, int32_t ) = 0;
    virtual uint32_t GetUserRestrictions(  ) = 0;
    virtual bool SetRichPresence( const char *, const char * ) = 0;
    virtual void ClearRichPresence(  ) = 0;
    virtual const char * GetFriendRichPresence( CSteamID, const char * ) = 0;
    virtual int32_t GetFriendRichPresenceKeyCount( CSteamID ) = 0;
    virtual const char * GetFriendRichPresenceKeyByIndex( CSteamID, int32_t ) = 0;
    virtual void RequestFriendRichPresence( CSteamID ) = 0;
    virtual bool InviteUserToGame( CSteamID, const char * ) = 0;
    virtual int32_t GetCoplayFriendCount(  ) = 0;
    virtual CSteamID GetCoplayFriend( int32_t ) = 0;
    virtual int32_t GetFriendCoplayTime( CSteamID ) = 0;
    virtual uint32_t GetFriendCoplayGame( CSteamID ) = 0;
    virtual uint64_t JoinClanChatRoom( CSteamID ) = 0;
    virtual bool LeaveClanChatRoom( CSteamID ) = 0;
    virtual int32_t GetClanChatMemberCount( CSteamID ) = 0;
    virtual CSteamID GetChatMemberByIndex( CSteamID, int32_t ) = 0;
    virtual bool SendClanChatMessage( CSteamID, const char * ) = 0;
    virtual int32_t GetClanChatMessage( CSteamID, int32_t, void *, int32_t, uint32_t *, CSteamID * ) = 0;
    virtual bool IsClanChatAdmin( CSteamID, CSteamID ) = 0;
    virtual bool IsClanChatWindowOpenInSteam( CSteamID ) = 0;
    virtual bool OpenClanChatWindowInSteam( CSteamID ) = 0;
    virtual bool CloseClanChatWindowInSteam( CSteamID ) = 0;
    virtual bool SetListenForFriendsMessages( bool ) = 0;
    virtual bool ReplyToFriendMessage( CSteamID, const char * ) = 0;
    virtual int32_t GetFriendMessage( CSteamID, int32_t, void *, int32_t, uint32_t * ) = 0;
    virtual uint64_t GetFollowerCount( CSteamID ) = 0;
    virtual uint64_t IsFollowing( CSteamID ) = 0;
    virtual uint64_t EnumerateFollowingList( uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006
{
#ifdef __cplusplus
    virtual bool FileWrite( const char *, const void *, int32_t ) = 0;
    virtual int32_t FileRead( const char *, void *, int32_t ) = 0;
    virtual bool FileForget( const char * ) = 0;
    virtual bool FileDelete( const char * ) = 0;
    virtual uint64_t FileShare( const char * ) = 0;
    virtual bool SetSyncPlatforms( const char *, uint32_t ) = 0;
    virtual bool FileExists( const char * ) = 0;
    virtual bool FilePersisted( const char * ) = 0;
    virtual int32_t GetFileSize( const char * ) = 0;
    virtual int64_t GetFileTimestamp( const char * ) = 0;
    virtual uint32_t GetSyncPlatforms( const char * ) = 0;
    virtual int32_t GetFileCount(  ) = 0;
    virtual const char * GetFileNameAndSize( int32_t, int32_t * ) = 0;
    virtual bool GetQuota( int32_t *, int32_t * ) = 0;
    virtual bool IsCloudEnabledForAccount(  ) = 0;
    virtual bool IsCloudEnabledForApp(  ) = 0;
    virtual void SetCloudEnabledForApp( bool ) = 0;
    virtual uint64_t UGCDownload( uint64_t ) = 0;
    virtual bool GetUGCDownloadProgress( uint64_t, int32_t *, int32_t * ) = 0;
    virtual bool GetUGCDetails( uint64_t, uint32_t *, char **, int32_t *, CSteamID * ) = 0;
    virtual int32_t UGCRead( uint64_t, void *, int32_t ) = 0;
    virtual int32_t GetCachedUGCCount(  ) = 0;
    virtual uint64_t GetCachedUGCHandle( int32_t ) = 0;
    virtual uint64_t PublishWorkshopFile( const char *, const char *, uint32_t, const char *, const char *, uint32_t, u_SteamParamStringArray_t *, uint32_t ) = 0;
    virtual uint64_t CreatePublishedFileUpdateRequest( uint64_t ) = 0;
    virtual bool UpdatePublishedFileFile( uint64_t, const char * ) = 0;
    virtual bool UpdatePublishedFilePreviewFile( uint64_t, const char * ) = 0;
    virtual bool UpdatePublishedFileTitle( uint64_t, const char * ) = 0;
    virtual bool UpdatePublishedFileDescription( uint64_t, const char * ) = 0;
    virtual bool UpdatePublishedFileVisibility( uint64_t, uint32_t ) = 0;
    virtual bool UpdatePublishedFileTags( uint64_t, u_SteamParamStringArray_t * ) = 0;
    virtual uint64_t CommitPublishedFileUpdate( uint64_t ) = 0;
    virtual uint64_t GetPublishedFileDetails( uint64_t ) = 0;
    virtual uint64_t DeletePublishedFile( uint64_t ) = 0;
    virtual uint64_t EnumerateUserPublishedFiles( uint32_t ) = 0;
    virtual uint64_t SubscribePublishedFile( uint64_t ) = 0;
    virtual uint64_t EnumerateUserSubscribedFiles( uint32_t ) = 0;
    virtual uint64_t UnsubscribePublishedFile( uint64_t ) = 0;
    virtual bool UpdatePublishedFileSetChangeDescription( uint64_t, const char * ) = 0;
    virtual uint64_t GetPublishedItemVoteDetails( uint64_t ) = 0;
    virtual uint64_t UpdateUserPublishedItemVote( uint64_t, bool ) = 0;
    virtual uint64_t GetUserPublishedItemVoteDetails( uint64_t ) = 0;
    virtual uint64_t EnumerateUserSharedWorkshopFiles( CSteamID, uint32_t, u_SteamParamStringArray_t *, u_SteamParamStringArray_t * ) = 0;
    virtual uint64_t PublishVideo( const char *, const char *, uint32_t, const char *, const char *, uint32_t, u_SteamParamStringArray_t * ) = 0;
    virtual uint64_t SetUserPublishedFileAction( uint64_t, uint32_t ) = 0;
    virtual uint64_t EnumeratePublishedFilesByUserAction( uint32_t, uint32_t ) = 0;
    virtual uint64_t EnumeratePublishedWorkshopFiles( uint32_t, uint32_t, uint32_t, uint32_t, u_SteamParamStringArray_t *, u_SteamParamStringArray_t * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION005
{
#ifdef __cplusplus
    virtual bool BIsSubscribed(  ) = 0;
    virtual bool BIsLowViolence(  ) = 0;
    virtual bool BIsCybercafe(  ) = 0;
    virtual bool BIsVACBanned(  ) = 0;
    virtual const char * GetCurrentGameLanguage(  ) = 0;
    virtual const char * GetAvailableGameLanguages(  ) = 0;
    virtual bool BIsSubscribedApp( uint32_t ) = 0;
    virtual bool BIsDlcInstalled( uint32_t ) = 0;
    virtual uint32_t GetEarliestPurchaseUnixTime( uint32_t ) = 0;
    virtual bool BIsSubscribedFromFreeWeekend(  ) = 0;
    virtual int32_t GetDLCCount(  ) = 0;
    virtual bool BGetDLCDataByIndex( int32_t, uint32_t *, bool *, char *, int32_t ) = 0;
    virtual void InstallDLC( uint32_t ) = 0;
    virtual void UninstallDLC( uint32_t ) = 0;
    virtual void RequestAppProofOfPurchaseKey( uint32_t ) = 0;
    virtual bool GetCurrentBetaName( char *, int32_t ) = 0;
    virtual bool MarkContentCorrupt( bool ) = 0;
    virtual uint32_t GetInstalledDepots( uint32_t *, uint32_t ) = 0;
    virtual uint32_t GetAppInstallDir( uint32_t, char *, uint32_t ) = 0;
    virtual bool BIsAppInstalled( uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamFriends_SteamFriends012
{
#ifdef __cplusplus
    virtual const char * GetPersonaName(  ) = 0;
    virtual uint64_t SetPersonaName( const char * ) = 0;
    virtual uint32_t GetPersonaState(  ) = 0;
    virtual int32_t GetFriendCount( int32_t ) = 0;
    virtual CSteamID GetFriendByIndex( int32_t, int32_t ) = 0;
    virtual uint32_t GetFriendRelationship( CSteamID ) = 0;
    virtual uint32_t GetFriendPersonaState( CSteamID ) = 0;
    virtual const char * GetFriendPersonaName( CSteamID ) = 0;
    virtual bool GetFriendGamePlayed( CSteamID, FriendGameInfo_t * ) = 0;
    virtual const char * GetFriendPersonaNameHistory( CSteamID, int32_t ) = 0;
    virtual bool HasFriend( CSteamID, int32_t ) = 0;
    virtual int32_t GetClanCount(  ) = 0;
    virtual CSteamID GetClanByIndex( int32_t ) = 0;
    virtual const char * GetClanName( CSteamID ) = 0;
    virtual const char * GetClanTag( CSteamID ) = 0;
    virtual bool GetClanActivityCounts( CSteamID, int32_t *, int32_t *, int32_t * ) = 0;
    virtual uint64_t DownloadClanActivityCounts( CSteamID *, int32_t ) = 0;
    virtual int32_t GetFriendCountFromSource( CSteamID ) = 0;
    virtual CSteamID GetFriendFromSourceByIndex( CSteamID, int32_t ) = 0;
    virtual bool IsUserInSource( CSteamID, CSteamID ) = 0;
    virtual void SetInGameVoiceSpeaking( CSteamID, bool ) = 0;
    virtual void ActivateGameOverlay( const char * ) = 0;
    virtual void ActivateGameOverlayToUser( const char *, CSteamID ) = 0;
    virtual void ActivateGameOverlayToWebPage( const char * ) = 0;
    virtual void ActivateGameOverlayToStore( uint32_t ) = 0;
    virtual void SetPlayedWith( CSteamID ) = 0;
    virtual void ActivateGameOverlayInviteDialog( CSteamID ) = 0;
    virtual int32_t GetSmallFriendAvatar( CSteamID ) = 0;
    virtual int32_t GetMediumFriendAvatar( CSteamID ) = 0;
    virtual int32_t GetLargeFriendAvatar( CSteamID ) = 0;
    virtual bool RequestUserInformation( CSteamID, bool ) = 0;
    virtual uint64_t RequestClanOfficerList( CSteamID ) = 0;
    virtual CSteamID GetClanOwner( CSteamID ) = 0;
    virtual int32_t GetClanOfficerCount( CSteamID ) = 0;
    virtual CSteamID GetClanOfficerByIndex( CSteamID, int32_t ) = 0;
    virtual uint32_t GetUserRestrictions(  ) = 0;
    virtual bool SetRichPresence( const char *, const char * ) = 0;
    virtual void ClearRichPresence(  ) = 0;
    virtual const char * GetFriendRichPresence( CSteamID, const char * ) = 0;
    virtual int32_t GetFriendRichPresenceKeyCount( CSteamID ) = 0;
    virtual const char * GetFriendRichPresenceKeyByIndex( CSteamID, int32_t ) = 0;
    virtual void RequestFriendRichPresence( CSteamID ) = 0;
    virtual bool InviteUserToGame( CSteamID, const char * ) = 0;
    virtual int32_t GetCoplayFriendCount(  ) = 0;
    virtual CSteamID GetCoplayFriend( int32_t ) = 0;
    virtual int32_t GetFriendCoplayTime( CSteamID ) = 0;
    virtual uint32_t GetFriendCoplayGame( CSteamID ) = 0;
    virtual uint64_t JoinClanChatRoom( CSteamID ) = 0;
    virtual bool LeaveClanChatRoom( CSteamID ) = 0;
    virtual int32_t GetClanChatMemberCount( CSteamID ) = 0;
    virtual CSteamID GetChatMemberByIndex( CSteamID, int32_t ) = 0;
    virtual bool SendClanChatMessage( CSteamID, const char * ) = 0;
    virtual int32_t GetClanChatMessage( CSteamID, int32_t, void *, int32_t, uint32_t *, CSteamID * ) = 0;
    virtual bool IsClanChatAdmin( CSteamID, CSteamID ) = 0;
    virtual bool IsClanChatWindowOpenInSteam( CSteamID ) = 0;
    virtual bool OpenClanChatWindowInSteam( CSteamID ) = 0;
    virtual bool CloseClanChatWindowInSteam( CSteamID ) = 0;
    virtual bool SetListenForFriendsMessages( bool ) = 0;
    virtual bool ReplyToFriendMessage( CSteamID, const char * ) = 0;
    virtual int32_t GetFriendMessage( CSteamID, int32_t, void *, int32_t, uint32_t * ) = 0;
    virtual uint64_t GetFollowerCount( CSteamID ) = 0;
    virtual uint64_t IsFollowing( CSteamID ) = 0;
    virtual uint64_t EnumerateFollowingList( uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007
{
#ifdef __cplusplus
    virtual bool FileWrite( const char *, const void *, int32_t ) = 0;
    virtual int32_t FileRead( const char *, void *, int32_t ) = 0;
    virtual bool FileForget( const char * ) = 0;
    virtual bool FileDelete( const char * ) = 0;
    virtual uint64_t FileShare( const char * ) = 0;
    virtual bool SetSyncPlatforms( const char *, uint32_t ) = 0;
    virtual bool FileExists( const char * ) = 0;
    virtual bool FilePersisted( const char * ) = 0;
    virtual int32_t GetFileSize( const char * ) = 0;
    virtual int64_t GetFileTimestamp( const char * ) = 0;
    virtual uint32_t GetSyncPlatforms( const char * ) = 0;
    virtual int32_t GetFileCount(  ) = 0;
    virtual const char * GetFileNameAndSize( int32_t, int32_t * ) = 0;
    virtual bool GetQuota( int32_t *, int32_t * ) = 0;
    virtual bool IsCloudEnabledForAccount(  ) = 0;
    virtual bool IsCloudEnabledForApp(  ) = 0;
    virtual void SetCloudEnabledForApp( bool ) = 0;
    virtual uint64_t UGCDownload( uint64_t ) = 0;
    virtual bool GetUGCDownloadProgress( uint64_t, int32_t *, int32_t * ) = 0;
    virtual bool GetUGCDetails( uint64_t, uint32_t *, char **, int32_t *, CSteamID * ) = 0;
    virtual int32_t UGCRead( uint64_t, void *, int32_t ) = 0;
    virtual int32_t GetCachedUGCCount(  ) = 0;
    virtual uint64_t GetCachedUGCHandle( int32_t ) = 0;
    virtual uint64_t PublishWorkshopFile( const char *, const char *, uint32_t, const char *, const char *, uint32_t, u_SteamParamStringArray_t *, uint32_t ) = 0;
    virtual uint64_t CreatePublishedFileUpdateRequest( uint64_t ) = 0;
    virtual bool UpdatePublishedFileFile( uint64_t, const char * ) = 0;
    virtual bool UpdatePublishedFilePreviewFile( uint64_t, const char * ) = 0;
    virtual bool UpdatePublishedFileTitle( uint64_t, const char * ) = 0;
    virtual bool UpdatePublishedFileDescription( uint64_t, const char * ) = 0;
    virtual bool UpdatePublishedFileVisibility( uint64_t, uint32_t ) = 0;
    virtual bool UpdatePublishedFileTags( uint64_t, u_SteamParamStringArray_t * ) = 0;
    virtual uint64_t CommitPublishedFileUpdate( uint64_t ) = 0;
    virtual uint64_t GetPublishedFileDetails( uint64_t ) = 0;
    virtual uint64_t DeletePublishedFile( uint64_t ) = 0;
    virtual uint64_t EnumerateUserPublishedFiles( uint32_t ) = 0;
    virtual uint64_t SubscribePublishedFile( uint64_t ) = 0;
    virtual uint64_t EnumerateUserSubscribedFiles( uint32_t ) = 0;
    virtual uint64_t UnsubscribePublishedFile( uint64_t ) = 0;
    virtual bool UpdatePublishedFileSetChangeDescription( uint64_t, const char * ) = 0;
    virtual uint64_t GetPublishedItemVoteDetails( uint64_t ) = 0;
    virtual uint64_t UpdateUserPublishedItemVote( uint64_t, bool ) = 0;
    virtual uint64_t GetUserPublishedItemVoteDetails( uint64_t ) = 0;
    virtual uint64_t EnumerateUserSharedWorkshopFiles( CSteamID, uint32_t, u_SteamParamStringArray_t *, u_SteamParamStringArray_t * ) = 0;
    virtual uint64_t PublishVideo( uint32_t, const char *, const char *, const char *, uint32_t, const char *, const char *, uint32_t, u_SteamParamStringArray_t * ) = 0;
    virtual uint64_t SetUserPublishedFileAction( uint64_t, uint32_t ) = 0;
    virtual uint64_t EnumeratePublishedFilesByUserAction( uint32_t, uint32_t ) = 0;
    virtual uint64_t EnumeratePublishedWorkshopFiles( uint32_t, uint32_t, uint32_t, uint32_t, u_SteamParamStringArray_t *, u_SteamParamStringArray_t * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011
{
#ifdef __cplusplus
    virtual bool RequestCurrentStats(  ) = 0;
    virtual bool GetStat( const char *, int32_t * ) = 0;
    virtual bool GetStat( const char *, float * ) = 0;
    virtual bool SetStat( const char *, int32_t ) = 0;
    virtual bool SetStat( const char *, float ) = 0;
    virtual bool UpdateAvgRateStat( const char *, float, double ) = 0;
    virtual bool GetAchievement( const char *, bool * ) = 0;
    virtual bool SetAchievement( const char * ) = 0;
    virtual bool ClearAchievement( const char * ) = 0;
    virtual bool GetAchievementAndUnlockTime( const char *, bool *, uint32_t * ) = 0;
    virtual bool StoreStats(  ) = 0;
    virtual int32_t GetAchievementIcon( const char * ) = 0;
    virtual const char * GetAchievementDisplayAttribute( const char *, const char * ) = 0;
    virtual bool IndicateAchievementProgress( const char *, uint32_t, uint32_t ) = 0;
    virtual uint32_t GetNumAchievements(  ) = 0;
    virtual const char * GetAchievementName( uint32_t ) = 0;
    virtual uint64_t RequestUserStats( CSteamID ) = 0;
    virtual bool GetUserStat( CSteamID, const char *, int32_t * ) = 0;
    virtual bool GetUserStat( CSteamID, const char *, float * ) = 0;
    virtual bool GetUserAchievement( CSteamID, const char *, bool * ) = 0;
    virtual bool GetUserAchievementAndUnlockTime( CSteamID, const char *, bool *, uint32_t * ) = 0;
    virtual bool ResetAllStats( bool ) = 0;
    virtual uint64_t FindOrCreateLeaderboard( const char *, uint32_t, uint32_t ) = 0;
    virtual uint64_t FindLeaderboard( const char * ) = 0;
    virtual const char * GetLeaderboardName( uint64_t ) = 0;
    virtual int32_t GetLeaderboardEntryCount( uint64_t ) = 0;
    virtual uint32_t GetLeaderboardSortMethod( uint64_t ) = 0;
    virtual uint32_t GetLeaderboardDisplayType( uint64_t ) = 0;
    virtual uint64_t DownloadLeaderboardEntries( uint64_t, uint32_t, int32_t, int32_t ) = 0;
    virtual uint64_t DownloadLeaderboardEntriesForUsers( uint64_t, CSteamID *, int32_t ) = 0;
    virtual bool GetDownloadedLeaderboardEntry( uint64_t, int32_t, u_LeaderboardEntry_t_123 *, int32_t *, int32_t ) = 0;
    virtual uint64_t UploadLeaderboardScore( uint64_t, uint32_t, int32_t, const int32_t *, int32_t ) = 0;
    virtual uint64_t AttachLeaderboardUGC( uint64_t, uint64_t ) = 0;
    virtual uint64_t GetNumberOfCurrentPlayers(  ) = 0;
    virtual uint64_t RequestGlobalAchievementPercentages(  ) = 0;
    virtual int32_t GetMostAchievedAchievementInfo( char *, uint32_t, float *, bool * ) = 0;
    virtual int32_t GetNextMostAchievedAchievementInfo( int32_t, char *, uint32_t, float *, bool * ) = 0;
    virtual bool GetAchievementAchievedPercent( const char *, float * ) = 0;
    virtual uint64_t RequestGlobalStats( int32_t ) = 0;
    virtual bool GetGlobalStat( const char *, int64_t * ) = 0;
    virtual bool GetGlobalStat( const char *, double * ) = 0;
    virtual int32_t GetGlobalStatHistory( const char *, int64_t *, uint32_t ) = 0;
    virtual int32_t GetGlobalStatHistory( const char *, double *, uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamFriends_SteamFriends013
{
#ifdef __cplusplus
    virtual const char * GetPersonaName(  ) = 0;
    virtual uint64_t SetPersonaName( const char * ) = 0;
    virtual uint32_t GetPersonaState(  ) = 0;
    virtual int32_t GetFriendCount( int32_t ) = 0;
    virtual CSteamID GetFriendByIndex( int32_t, int32_t ) = 0;
    virtual uint32_t GetFriendRelationship( CSteamID ) = 0;
    virtual uint32_t GetFriendPersonaState( CSteamID ) = 0;
    virtual const char * GetFriendPersonaName( CSteamID ) = 0;
    virtual bool GetFriendGamePlayed( CSteamID, FriendGameInfo_t * ) = 0;
    virtual const char * GetFriendPersonaNameHistory( CSteamID, int32_t ) = 0;
    virtual bool HasFriend( CSteamID, int32_t ) = 0;
    virtual int32_t GetClanCount(  ) = 0;
    virtual CSteamID GetClanByIndex( int32_t ) = 0;
    virtual const char * GetClanName( CSteamID ) = 0;
    virtual const char * GetClanTag( CSteamID ) = 0;
    virtual bool GetClanActivityCounts( CSteamID, int32_t *, int32_t *, int32_t * ) = 0;
    virtual uint64_t DownloadClanActivityCounts( CSteamID *, int32_t ) = 0;
    virtual int32_t GetFriendCountFromSource( CSteamID ) = 0;
    virtual CSteamID GetFriendFromSourceByIndex( CSteamID, int32_t ) = 0;
    virtual bool IsUserInSource( CSteamID, CSteamID ) = 0;
    virtual void SetInGameVoiceSpeaking( CSteamID, bool ) = 0;
    virtual void ActivateGameOverlay( const char * ) = 0;
    virtual void ActivateGameOverlayToUser( const char *, CSteamID ) = 0;
    virtual void ActivateGameOverlayToWebPage( const char * ) = 0;
    virtual void ActivateGameOverlayToStore( uint32_t, uint32_t ) = 0;
    virtual void SetPlayedWith( CSteamID ) = 0;
    virtual void ActivateGameOverlayInviteDialog( CSteamID ) = 0;
    virtual int32_t GetSmallFriendAvatar( CSteamID ) = 0;
    virtual int32_t GetMediumFriendAvatar( CSteamID ) = 0;
    virtual int32_t GetLargeFriendAvatar( CSteamID ) = 0;
    virtual bool RequestUserInformation( CSteamID, bool ) = 0;
    virtual uint64_t RequestClanOfficerList( CSteamID ) = 0;
    virtual CSteamID GetClanOwner( CSteamID ) = 0;
    virtual int32_t GetClanOfficerCount( CSteamID ) = 0;
    virtual CSteamID GetClanOfficerByIndex( CSteamID, int32_t ) = 0;
    virtual uint32_t GetUserRestrictions(  ) = 0;
    virtual bool SetRichPresence( const char *, const char * ) = 0;
    virtual void ClearRichPresence(  ) = 0;
    virtual const char * GetFriendRichPresence( CSteamID, const char * ) = 0;
    virtual int32_t GetFriendRichPresenceKeyCount( CSteamID ) = 0;
    virtual const char * GetFriendRichPresenceKeyByIndex( CSteamID, int32_t ) = 0;
    virtual void RequestFriendRichPresence( CSteamID ) = 0;
    virtual bool InviteUserToGame( CSteamID, const char * ) = 0;
    virtual int32_t GetCoplayFriendCount(  ) = 0;
    virtual CSteamID GetCoplayFriend( int32_t ) = 0;
    virtual int32_t GetFriendCoplayTime( CSteamID ) = 0;
    virtual uint32_t GetFriendCoplayGame( CSteamID ) = 0;
    virtual uint64_t JoinClanChatRoom( CSteamID ) = 0;
    virtual bool LeaveClanChatRoom( CSteamID ) = 0;
    virtual int32_t GetClanChatMemberCount( CSteamID ) = 0;
    virtual CSteamID GetChatMemberByIndex( CSteamID, int32_t ) = 0;
    virtual bool SendClanChatMessage( CSteamID, const char * ) = 0;
    virtual int32_t GetClanChatMessage( CSteamID, int32_t, void *, int32_t, uint32_t *, CSteamID * ) = 0;
    virtual bool IsClanChatAdmin( CSteamID, CSteamID ) = 0;
    virtual bool IsClanChatWindowOpenInSteam( CSteamID ) = 0;
    virtual bool OpenClanChatWindowInSteam( CSteamID ) = 0;
    virtual bool CloseClanChatWindowInSteam( CSteamID ) = 0;
    virtual bool SetListenForFriendsMessages( bool ) = 0;
    virtual bool ReplyToFriendMessage( CSteamID, const char * ) = 0;
    virtual int32_t GetFriendMessage( CSteamID, int32_t, void *, int32_t, uint32_t * ) = 0;
    virtual uint64_t GetFollowerCount( CSteamID ) = 0;
    virtual uint64_t IsFollowing( CSteamID ) = 0;
    virtual uint64_t EnumerateFollowingList( uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008
{
#ifdef __cplusplus
    virtual bool FileWrite( const char *, const void *, int32_t ) = 0;
    virtual int32_t FileRead( const char *, void *, int32_t ) = 0;
    virtual bool FileForget( const char * ) = 0;
    virtual bool FileDelete( const char * ) = 0;
    virtual uint64_t FileShare( const char * ) = 0;
    virtual bool SetSyncPlatforms( const char *, uint32_t ) = 0;
    virtual uint64_t FileWriteStreamOpen( const char * ) = 0;
    virtual bool FileWriteStreamWriteChunk( uint64_t, const void *, int32_t ) = 0;
    virtual bool FileWriteStreamClose( uint64_t ) = 0;
    virtual bool FileWriteStreamCancel( uint64_t ) = 0;
    virtual bool FileExists( const char * ) = 0;
    virtual bool FilePersisted( const char * ) = 0;
    virtual int32_t GetFileSize( const char * ) = 0;
    virtual int64_t GetFileTimestamp( const char * ) = 0;
    virtual uint32_t GetSyncPlatforms( const char * ) = 0;
    virtual int32_t GetFileCount(  ) = 0;
    virtual const char * GetFileNameAndSize( int32_t, int32_t * ) = 0;
    virtual bool GetQuota( int32_t *, int32_t * ) = 0;
    virtual bool IsCloudEnabledForAccount(  ) = 0;
    virtual bool IsCloudEnabledForApp(  ) = 0;
    virtual void SetCloudEnabledForApp( bool ) = 0;
    virtual uint64_t UGCDownload( uint64_t ) = 0;
    virtual bool GetUGCDownloadProgress( uint64_t, int32_t *, int32_t * ) = 0;
    virtual bool GetUGCDetails( uint64_t, uint32_t *, char **, int32_t *, CSteamID * ) = 0;
    virtual int32_t UGCRead( uint64_t, void *, int32_t ) = 0;
    virtual int32_t GetCachedUGCCount(  ) = 0;
    virtual uint64_t GetCachedUGCHandle( int32_t ) = 0;
    virtual uint64_t PublishWorkshopFile( const char *, const char *, uint32_t, const char *, const char *, uint32_t, u_SteamParamStringArray_t *, uint32_t ) = 0;
    virtual uint64_t CreatePublishedFileUpdateRequest( uint64_t ) = 0;
    virtual bool UpdatePublishedFileFile( uint64_t, const char * ) = 0;
    virtual bool UpdatePublishedFilePreviewFile( uint64_t, const char * ) = 0;
    virtual bool UpdatePublishedFileTitle( uint64_t, const char * ) = 0;
    virtual bool UpdatePublishedFileDescription( uint64_t, const char * ) = 0;
    virtual bool UpdatePublishedFileVisibility( uint64_t, uint32_t ) = 0;
    virtual bool UpdatePublishedFileTags( uint64_t, u_SteamParamStringArray_t * ) = 0;
    virtual uint64_t CommitPublishedFileUpdate( uint64_t ) = 0;
    virtual uint64_t GetPublishedFileDetails( uint64_t ) = 0;
    virtual uint64_t DeletePublishedFile( uint64_t ) = 0;
    virtual uint64_t EnumerateUserPublishedFiles( uint32_t ) = 0;
    virtual uint64_t SubscribePublishedFile( uint64_t ) = 0;
    virtual uint64_t EnumerateUserSubscribedFiles( uint32_t ) = 0;
    virtual uint64_t UnsubscribePublishedFile( uint64_t ) = 0;
    virtual bool UpdatePublishedFileSetChangeDescription( uint64_t, const char * ) = 0;
    virtual uint64_t GetPublishedItemVoteDetails( uint64_t ) = 0;
    virtual uint64_t UpdateUserPublishedItemVote( uint64_t, bool ) = 0;
    virtual uint64_t GetUserPublishedItemVoteDetails( uint64_t ) = 0;
    virtual uint64_t EnumerateUserSharedWorkshopFiles( CSteamID, uint32_t, u_SteamParamStringArray_t *, u_SteamParamStringArray_t * ) = 0;
    virtual uint64_t PublishVideo( uint32_t, const char *, const char *, const char *, uint32_t, const char *, const char *, uint32_t, u_SteamParamStringArray_t * ) = 0;
    virtual uint64_t SetUserPublishedFileAction( uint64_t, uint32_t ) = 0;
    virtual uint64_t EnumeratePublishedFilesByUserAction( uint32_t, uint32_t ) = 0;
    virtual uint64_t EnumeratePublishedWorkshopFiles( uint32_t, uint32_t, uint32_t, uint32_t, u_SteamParamStringArray_t *, u_SteamParamStringArray_t * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009
{
#ifdef __cplusplus
    virtual bool FileWrite( const char *, const void *, int32_t ) = 0;
    virtual int32_t FileRead( const char *, void *, int32_t ) = 0;
    virtual bool FileForget( const char * ) = 0;
    virtual bool FileDelete( const char * ) = 0;
    virtual uint64_t FileShare( const char * ) = 0;
    virtual bool SetSyncPlatforms( const char *, uint32_t ) = 0;
    virtual uint64_t FileWriteStreamOpen( const char * ) = 0;
    virtual bool FileWriteStreamWriteChunk( uint64_t, const void *, int32_t ) = 0;
    virtual bool FileWriteStreamClose( uint64_t ) = 0;
    virtual bool FileWriteStreamCancel( uint64_t ) = 0;
    virtual bool FileExists( const char * ) = 0;
    virtual bool FilePersisted( const char * ) = 0;
    virtual int32_t GetFileSize( const char * ) = 0;
    virtual int64_t GetFileTimestamp( const char * ) = 0;
    virtual uint32_t GetSyncPlatforms( const char * ) = 0;
    virtual int32_t GetFileCount(  ) = 0;
    virtual const char * GetFileNameAndSize( int32_t, int32_t * ) = 0;
    virtual bool GetQuota( int32_t *, int32_t * ) = 0;
    virtual bool IsCloudEnabledForAccount(  ) = 0;
    virtual bool IsCloudEnabledForApp(  ) = 0;
    virtual void SetCloudEnabledForApp( bool ) = 0;
    virtual uint64_t UGCDownload( uint64_t ) = 0;
    virtual bool GetUGCDownloadProgress( uint64_t, int32_t *, int32_t * ) = 0;
    virtual bool GetUGCDetails( uint64_t, uint32_t *, char **, int32_t *, CSteamID * ) = 0;
    virtual int32_t UGCRead( uint64_t, void *, int32_t, uint32_t ) = 0;
    virtual int32_t GetCachedUGCCount(  ) = 0;
    virtual uint64_t GetCachedUGCHandle( int32_t ) = 0;
    virtual uint64_t PublishWorkshopFile( const char *, const char *, uint32_t, const char *, const char *, uint32_t, u_SteamParamStringArray_t *, uint32_t ) = 0;
    virtual uint64_t CreatePublishedFileUpdateRequest( uint64_t ) = 0;
    virtual bool UpdatePublishedFileFile( uint64_t, const char * ) = 0;
    virtual bool UpdatePublishedFilePreviewFile( uint64_t, const char * ) = 0;
    virtual bool UpdatePublishedFileTitle( uint64_t, const char * ) = 0;
    virtual bool UpdatePublishedFileDescription( uint64_t, const char * ) = 0;
    virtual bool UpdatePublishedFileVisibility( uint64_t, uint32_t ) = 0;
    virtual bool UpdatePublishedFileTags( uint64_t, u_SteamParamStringArray_t * ) = 0;
    virtual uint64_t CommitPublishedFileUpdate( uint64_t ) = 0;
    virtual uint64_t GetPublishedFileDetails( uint64_t ) = 0;
    virtual uint64_t DeletePublishedFile( uint64_t ) = 0;
    virtual uint64_t EnumerateUserPublishedFiles( uint32_t ) = 0;
    virtual uint64_t SubscribePublishedFile( uint64_t ) = 0;
    virtual uint64_t EnumerateUserSubscribedFiles( uint32_t ) = 0;
    virtual uint64_t UnsubscribePublishedFile( uint64_t ) = 0;
    virtual bool UpdatePublishedFileSetChangeDescription( uint64_t, const char * ) = 0;
    virtual uint64_t GetPublishedItemVoteDetails( uint64_t ) = 0;
    virtual uint64_t UpdateUserPublishedItemVote( uint64_t, bool ) = 0;
    virtual uint64_t GetUserPublishedItemVoteDetails( uint64_t ) = 0;
    virtual uint64_t EnumerateUserSharedWorkshopFiles( CSteamID, uint32_t, u_SteamParamStringArray_t *, u_SteamParamStringArray_t * ) = 0;
    virtual uint64_t PublishVideo( uint32_t, const char *, const char *, const char *, uint32_t, const char *, const char *, uint32_t, u_SteamParamStringArray_t * ) = 0;
    virtual uint64_t SetUserPublishedFileAction( uint64_t, uint32_t ) = 0;
    virtual uint64_t EnumeratePublishedFilesByUserAction( uint32_t, uint32_t ) = 0;
    virtual uint64_t EnumeratePublishedWorkshopFiles( uint32_t, uint32_t, uint32_t, uint32_t, u_SteamParamStringArray_t *, u_SteamParamStringArray_t * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002
{
#ifdef __cplusplus
    virtual uint32_t CreateHTTPRequest( uint32_t, const char * ) = 0;
    virtual bool SetHTTPRequestContextValue( uint32_t, uint64_t ) = 0;
    virtual bool SetHTTPRequestNetworkActivityTimeout( uint32_t, uint32_t ) = 0;
    virtual bool SetHTTPRequestHeaderValue( uint32_t, const char *, const char * ) = 0;
    virtual bool SetHTTPRequestGetOrPostParameter( uint32_t, const char *, const char * ) = 0;
    virtual bool SendHTTPRequest( uint32_t, uint64_t * ) = 0;
    virtual bool SendHTTPRequestAndStreamResponse( uint32_t, uint64_t * ) = 0;
    virtual bool DeferHTTPRequest( uint32_t ) = 0;
    virtual bool PrioritizeHTTPRequest( uint32_t ) = 0;
    virtual bool GetHTTPResponseHeaderSize( uint32_t, const char *, uint32_t * ) = 0;
    virtual bool GetHTTPResponseHeaderValue( uint32_t, const char *, uint8_t *, uint32_t ) = 0;
    virtual bool GetHTTPResponseBodySize( uint32_t, uint32_t * ) = 0;
    virtual bool GetHTTPResponseBodyData( uint32_t, uint8_t *, uint32_t ) = 0;
    virtual bool GetHTTPStreamingResponseBodyData( uint32_t, uint32_t, uint8_t *, uint32_t ) = 0;
    virtual bool ReleaseHTTPRequest( uint32_t ) = 0;
    virtual bool GetHTTPDownloadProgressPct( uint32_t, float * ) = 0;
    virtual bool SetHTTPRequestRawPostBody( uint32_t, const char *, uint8_t *, uint32_t ) = 0;
    virtual uint32_t CreateCookieContainer( bool ) = 0;
    virtual bool ReleaseCookieContainer( uint32_t ) = 0;
    virtual bool SetCookie( uint32_t, const char *, const char *, const char * ) = 0;
    virtual bool SetHTTPRequestCookieContainer( uint32_t, uint32_t ) = 0;
    virtual bool SetHTTPRequestUserAgentInfo( uint32_t, const char * ) = 0;
    virtual bool SetHTTPRequestRequiresVerifiedCertificate( uint32_t, bool ) = 0;
    virtual bool SetHTTPRequestAbsoluteTimeoutMS( uint32_t, uint32_t ) = 0;
    virtual bool GetHTTPRequestWasTimedOut( uint32_t, bool * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010
{
#ifdef __cplusplus
    virtual bool FileWrite( const char *, const void *, int32_t ) = 0;
    virtual int32_t FileRead( const char *, void *, int32_t ) = 0;
    virtual bool FileForget( const char * ) = 0;
    virtual bool FileDelete( const char * ) = 0;
    virtual uint64_t FileShare( const char * ) = 0;
    virtual bool SetSyncPlatforms( const char *, uint32_t ) = 0;
    virtual uint64_t FileWriteStreamOpen( const char * ) = 0;
    virtual bool FileWriteStreamWriteChunk( uint64_t, const void *, int32_t ) = 0;
    virtual bool FileWriteStreamClose( uint64_t ) = 0;
    virtual bool FileWriteStreamCancel( uint64_t ) = 0;
    virtual bool FileExists( const char * ) = 0;
    virtual bool FilePersisted( const char * ) = 0;
    virtual int32_t GetFileSize( const char * ) = 0;
    virtual int64_t GetFileTimestamp( const char * ) = 0;
    virtual uint32_t GetSyncPlatforms( const char * ) = 0;
    virtual int32_t GetFileCount(  ) = 0;
    virtual const char * GetFileNameAndSize( int32_t, int32_t * ) = 0;
    virtual bool GetQuota( int32_t *, int32_t * ) = 0;
    virtual bool IsCloudEnabledForAccount(  ) = 0;
    virtual bool IsCloudEnabledForApp(  ) = 0;
    virtual void SetCloudEnabledForApp( bool ) = 0;
    virtual uint64_t UGCDownload( uint64_t, uint32_t ) = 0;
    virtual bool GetUGCDownloadProgress( uint64_t, int32_t *, int32_t * ) = 0;
    virtual bool GetUGCDetails( uint64_t, uint32_t *, char **, int32_t *, CSteamID * ) = 0;
    virtual int32_t UGCRead( uint64_t, void *, int32_t, uint32_t ) = 0;
    virtual int32_t GetCachedUGCCount(  ) = 0;
    virtual uint64_t GetCachedUGCHandle( int32_t ) = 0;
    virtual uint64_t PublishWorkshopFile( const char *, const char *, uint32_t, const char *, const char *, uint32_t, u_SteamParamStringArray_t *, uint32_t ) = 0;
    virtual uint64_t CreatePublishedFileUpdateRequest( uint64_t ) = 0;
    virtual bool UpdatePublishedFileFile( uint64_t, const char * ) = 0;
    virtual bool UpdatePublishedFilePreviewFile( uint64_t, const char * ) = 0;
    virtual bool UpdatePublishedFileTitle( uint64_t, const char * ) = 0;
    virtual bool UpdatePublishedFileDescription( uint64_t, const char * ) = 0;
    virtual bool UpdatePublishedFileVisibility( uint64_t, uint32_t ) = 0;
    virtual bool UpdatePublishedFileTags( uint64_t, u_SteamParamStringArray_t * ) = 0;
    virtual uint64_t CommitPublishedFileUpdate( uint64_t ) = 0;
    virtual uint64_t GetPublishedFileDetails( uint64_t ) = 0;
    virtual uint64_t DeletePublishedFile( uint64_t ) = 0;
    virtual uint64_t EnumerateUserPublishedFiles( uint32_t ) = 0;
    virtual uint64_t SubscribePublishedFile( uint64_t ) = 0;
    virtual uint64_t EnumerateUserSubscribedFiles( uint32_t ) = 0;
    virtual uint64_t UnsubscribePublishedFile( uint64_t ) = 0;
    virtual bool UpdatePublishedFileSetChangeDescription( uint64_t, const char * ) = 0;
    virtual uint64_t GetPublishedItemVoteDetails( uint64_t ) = 0;
    virtual uint64_t UpdateUserPublishedItemVote( uint64_t, bool ) = 0;
    virtual uint64_t GetUserPublishedItemVoteDetails( uint64_t ) = 0;
    virtual uint64_t EnumerateUserSharedWorkshopFiles( CSteamID, uint32_t, u_SteamParamStringArray_t *, u_SteamParamStringArray_t * ) = 0;
    virtual uint64_t PublishVideo( uint32_t, const char *, const char *, const char *, uint32_t, const char *, const char *, uint32_t, u_SteamParamStringArray_t * ) = 0;
    virtual uint64_t SetUserPublishedFileAction( uint64_t, uint32_t ) = 0;
    virtual uint64_t EnumeratePublishedFilesByUserAction( uint32_t, uint32_t ) = 0;
    virtual uint64_t EnumeratePublishedWorkshopFiles( uint32_t, uint32_t, uint32_t, uint32_t, u_SteamParamStringArray_t *, u_SteamParamStringArray_t * ) = 0;
    virtual uint64_t UGCDownloadToLocation( uint64_t, const char *, uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002
{
#ifdef __cplusplus
    virtual uint32_t WriteScreenshot( void *, uint32_t, int32_t, int32_t ) = 0;
    virtual uint32_t AddScreenshotToLibrary( const char *, const char *, int32_t, int32_t ) = 0;
    virtual void TriggerScreenshot(  ) = 0;
    virtual void HookScreenshots( bool ) = 0;
    virtual bool SetLocation( uint32_t, const char * ) = 0;
    virtual bool TagUser( uint32_t, CSteamID ) = 0;
    virtual bool TagPublishedFile( uint32_t, uint64_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001
{
#ifdef __cplusplus
    virtual uint64_t SendMethod( const char *, const void *, uint32_t, uint64_t ) = 0;
    virtual bool GetMethodResponseInfo( uint64_t, uint32_t *, uint32_t * ) = 0;
    virtual bool GetMethodResponseData( uint64_t, void *, uint32_t, bool ) = 0;
    virtual bool ReleaseMethod( uint64_t ) = 0;
    virtual bool SendNotification( const char *, const void *, uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUser_SteamUser017
{
#ifdef __cplusplus
    virtual int32_t GetHSteamUser(  ) = 0;
    virtual bool BLoggedOn(  ) = 0;
    virtual CSteamID GetSteamID(  ) = 0;
    virtual int32_t InitiateGameConnection( void *, int32_t, CSteamID, uint32_t, uint16_t, bool ) = 0;
    virtual void TerminateGameConnection( uint32_t, uint16_t ) = 0;
    virtual void TrackAppUsageEvent( CGameID, int32_t, const char * ) = 0;
    virtual bool GetUserDataFolder( char *, int32_t ) = 0;
    virtual void StartVoiceRecording(  ) = 0;
    virtual void StopVoiceRecording(  ) = 0;
    virtual uint32_t GetAvailableVoice( uint32_t *, uint32_t *, uint32_t ) = 0;
    virtual uint32_t GetVoice( bool, void *, uint32_t, uint32_t *, bool, void *, uint32_t, uint32_t *, uint32_t ) = 0;
    virtual uint32_t DecompressVoice( const void *, uint32_t, void *, uint32_t, uint32_t *, uint32_t ) = 0;
    virtual uint32_t GetVoiceOptimalSampleRate(  ) = 0;
    virtual uint32_t GetAuthSessionTicket( void *, int32_t, uint32_t * ) = 0;
    virtual uint32_t BeginAuthSession( const void *, int32_t, CSteamID ) = 0;
    virtual void EndAuthSession( CSteamID ) = 0;
    virtual void CancelAuthTicket( uint32_t ) = 0;
    virtual uint32_t UserHasLicenseForApp( CSteamID, uint32_t ) = 0;
    virtual bool BIsBehindNAT(  ) = 0;
    virtual void AdvertiseGame( CSteamID, uint32_t, uint16_t ) = 0;
    virtual uint64_t RequestEncryptedAppTicket( void *, int32_t ) = 0;
    virtual bool GetEncryptedAppTicket( void *, int32_t, uint32_t * ) = 0;
    virtual int32_t GetGameBadgeLevel( int32_t, bool ) = 0;
    virtual int32_t GetPlayerSteamLevel(  ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUtils_SteamUtils006
{
#ifdef __cplusplus
    virtual uint32_t GetSecondsSinceAppActive(  ) = 0;
    virtual uint32_t GetSecondsSinceComputerActive(  ) = 0;
    virtual uint32_t GetConnectedUniverse(  ) = 0;
    virtual uint32_t GetServerRealTime(  ) = 0;
    virtual const char * GetIPCountry(  ) = 0;
    virtual bool GetImageSize( int32_t, uint32_t *, uint32_t * ) = 0;
    virtual bool GetImageRGBA( int32_t, uint8_t *, int32_t ) = 0;
    virtual bool GetCSERIPPort( uint32_t *, uint16_t * ) = 0;
    virtual uint8_t GetCurrentBatteryPower(  ) = 0;
    virtual uint32_t GetAppID(  ) = 0;
    virtual void SetOverlayNotificationPosition( uint32_t ) = 0;
    virtual bool IsAPICallCompleted( uint64_t, bool * ) = 0;
    virtual uint32_t GetAPICallFailureReason( uint64_t ) = 0;
    virtual bool GetAPICallResult( uint64_t, void *, int32_t, int32_t, bool * ) = 0;
    virtual void RunFrame(  ) = 0;
    virtual uint32_t GetIPCCallCount(  ) = 0;
    virtual void SetWarningMessageHook( void (*U_CDECL )(int32_t, const char *) ) = 0;
    virtual bool IsOverlayEnabled(  ) = 0;
    virtual bool BOverlayNeedsPresent(  ) = 0;
    virtual uint64_t CheckFileSignature( const char * ) = 0;
    virtual bool ShowGamepadTextInput( uint32_t, uint32_t, const char *, uint32_t ) = 0;
    virtual uint32_t GetEnteredGamepadTextLength(  ) = 0;
    virtual bool GetEnteredGamepadTextInput( char *, uint32_t ) = 0;
    virtual const char * GetSteamUILanguage(  ) = 0;
    virtual bool IsSteamRunningInVR(  ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamController_STEAMCONTROLLER_INTERFACE_VERSION
{
#ifdef __cplusplus
    virtual bool Init( const char * ) = 0;
    virtual bool Shutdown(  ) = 0;
    virtual void RunFrame(  ) = 0;
    virtual bool GetControllerState( uint32_t, SteamControllerState001_t * ) = 0;
    virtual void TriggerHapticPulse( uint32_t, uint32_t, uint16_t ) = 0;
    virtual void SetOverrideMode( const char * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011
{
#ifdef __cplusplus
    virtual bool FileWrite( const char *, const void *, int32_t ) = 0;
    virtual int32_t FileRead( const char *, void *, int32_t ) = 0;
    virtual bool FileForget( const char * ) = 0;
    virtual bool FileDelete( const char * ) = 0;
    virtual uint64_t FileShare( const char * ) = 0;
    virtual bool SetSyncPlatforms( const char *, uint32_t ) = 0;
    virtual uint64_t FileWriteStreamOpen( const char * ) = 0;
    virtual bool FileWriteStreamWriteChunk( uint64_t, const void *, int32_t ) = 0;
    virtual bool FileWriteStreamClose( uint64_t ) = 0;
    virtual bool FileWriteStreamCancel( uint64_t ) = 0;
    virtual bool FileExists( const char * ) = 0;
    virtual bool FilePersisted( const char * ) = 0;
    virtual int32_t GetFileSize( const char * ) = 0;
    virtual int64_t GetFileTimestamp( const char * ) = 0;
    virtual uint32_t GetSyncPlatforms( const char * ) = 0;
    virtual int32_t GetFileCount(  ) = 0;
    virtual const char * GetFileNameAndSize( int32_t, int32_t * ) = 0;
    virtual bool GetQuota( int32_t *, int32_t * ) = 0;
    virtual bool IsCloudEnabledForAccount(  ) = 0;
    virtual bool IsCloudEnabledForApp(  ) = 0;
    virtual void SetCloudEnabledForApp( bool ) = 0;
    virtual uint64_t UGCDownload( uint64_t, uint32_t ) = 0;
    virtual bool GetUGCDownloadProgress( uint64_t, int32_t *, int32_t * ) = 0;
    virtual bool GetUGCDetails( uint64_t, uint32_t *, char **, int32_t *, CSteamID * ) = 0;
    virtual int32_t UGCRead( uint64_t, void *, int32_t, uint32_t ) = 0;
    virtual int32_t GetCachedUGCCount(  ) = 0;
    virtual uint64_t GetCachedUGCHandle( int32_t ) = 0;
    virtual uint64_t PublishWorkshopFile( const char *, const char *, uint32_t, const char *, const char *, uint32_t, u_SteamParamStringArray_t *, uint32_t ) = 0;
    virtual uint64_t CreatePublishedFileUpdateRequest( uint64_t ) = 0;
    virtual bool UpdatePublishedFileFile( uint64_t, const char * ) = 0;
    virtual bool UpdatePublishedFilePreviewFile( uint64_t, const char * ) = 0;
    virtual bool UpdatePublishedFileTitle( uint64_t, const char * ) = 0;
    virtual bool UpdatePublishedFileDescription( uint64_t, const char * ) = 0;
    virtual bool UpdatePublishedFileVisibility( uint64_t, uint32_t ) = 0;
    virtual bool UpdatePublishedFileTags( uint64_t, u_SteamParamStringArray_t * ) = 0;
    virtual uint64_t CommitPublishedFileUpdate( uint64_t ) = 0;
    virtual uint64_t GetPublishedFileDetails( uint64_t, uint32_t ) = 0;
    virtual uint64_t DeletePublishedFile( uint64_t ) = 0;
    virtual uint64_t EnumerateUserPublishedFiles( uint32_t ) = 0;
    virtual uint64_t SubscribePublishedFile( uint64_t ) = 0;
    virtual uint64_t EnumerateUserSubscribedFiles( uint32_t ) = 0;
    virtual uint64_t UnsubscribePublishedFile( uint64_t ) = 0;
    virtual bool UpdatePublishedFileSetChangeDescription( uint64_t, const char * ) = 0;
    virtual uint64_t GetPublishedItemVoteDetails( uint64_t ) = 0;
    virtual uint64_t UpdateUserPublishedItemVote( uint64_t, bool ) = 0;
    virtual uint64_t GetUserPublishedItemVoteDetails( uint64_t ) = 0;
    virtual uint64_t EnumerateUserSharedWorkshopFiles( CSteamID, uint32_t, u_SteamParamStringArray_t *, u_SteamParamStringArray_t * ) = 0;
    virtual uint64_t PublishVideo( uint32_t, const char *, const char *, const char *, uint32_t, const char *, const char *, uint32_t, u_SteamParamStringArray_t * ) = 0;
    virtual uint64_t SetUserPublishedFileAction( uint64_t, uint32_t ) = 0;
    virtual uint64_t EnumeratePublishedFilesByUserAction( uint32_t, uint32_t ) = 0;
    virtual uint64_t EnumeratePublishedWorkshopFiles( uint32_t, uint32_t, uint32_t, uint32_t, u_SteamParamStringArray_t *, u_SteamParamStringArray_t * ) = 0;
    virtual uint64_t UGCDownloadToLocation( uint64_t, const char *, uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamFriends_SteamFriends014
{
#ifdef __cplusplus
    virtual const char * GetPersonaName(  ) = 0;
    virtual uint64_t SetPersonaName( const char * ) = 0;
    virtual uint32_t GetPersonaState(  ) = 0;
    virtual int32_t GetFriendCount( int32_t ) = 0;
    virtual CSteamID GetFriendByIndex( int32_t, int32_t ) = 0;
    virtual uint32_t GetFriendRelationship( CSteamID ) = 0;
    virtual uint32_t GetFriendPersonaState( CSteamID ) = 0;
    virtual const char * GetFriendPersonaName( CSteamID ) = 0;
    virtual bool GetFriendGamePlayed( CSteamID, FriendGameInfo_t * ) = 0;
    virtual const char * GetFriendPersonaNameHistory( CSteamID, int32_t ) = 0;
    virtual const char * GetPlayerNickname( CSteamID ) = 0;
    virtual bool HasFriend( CSteamID, int32_t ) = 0;
    virtual int32_t GetClanCount(  ) = 0;
    virtual CSteamID GetClanByIndex( int32_t ) = 0;
    virtual const char * GetClanName( CSteamID ) = 0;
    virtual const char * GetClanTag( CSteamID ) = 0;
    virtual bool GetClanActivityCounts( CSteamID, int32_t *, int32_t *, int32_t * ) = 0;
    virtual uint64_t DownloadClanActivityCounts( CSteamID *, int32_t ) = 0;
    virtual int32_t GetFriendCountFromSource( CSteamID ) = 0;
    virtual CSteamID GetFriendFromSourceByIndex( CSteamID, int32_t ) = 0;
    virtual bool IsUserInSource( CSteamID, CSteamID ) = 0;
    virtual void SetInGameVoiceSpeaking( CSteamID, bool ) = 0;
    virtual void ActivateGameOverlay( const char * ) = 0;
    virtual void ActivateGameOverlayToUser( const char *, CSteamID ) = 0;
    virtual void ActivateGameOverlayToWebPage( const char * ) = 0;
    virtual void ActivateGameOverlayToStore( uint32_t, uint32_t ) = 0;
    virtual void SetPlayedWith( CSteamID ) = 0;
    virtual void ActivateGameOverlayInviteDialog( CSteamID ) = 0;
    virtual int32_t GetSmallFriendAvatar( CSteamID ) = 0;
    virtual int32_t GetMediumFriendAvatar( CSteamID ) = 0;
    virtual int32_t GetLargeFriendAvatar( CSteamID ) = 0;
    virtual bool RequestUserInformation( CSteamID, bool ) = 0;
    virtual uint64_t RequestClanOfficerList( CSteamID ) = 0;
    virtual CSteamID GetClanOwner( CSteamID ) = 0;
    virtual int32_t GetClanOfficerCount( CSteamID ) = 0;
    virtual CSteamID GetClanOfficerByIndex( CSteamID, int32_t ) = 0;
    virtual uint32_t GetUserRestrictions(  ) = 0;
    virtual bool SetRichPresence( const char *, const char * ) = 0;
    virtual void ClearRichPresence(  ) = 0;
    virtual const char * GetFriendRichPresence( CSteamID, const char * ) = 0;
    virtual int32_t GetFriendRichPresenceKeyCount( CSteamID ) = 0;
    virtual const char * GetFriendRichPresenceKeyByIndex( CSteamID, int32_t ) = 0;
    virtual void RequestFriendRichPresence( CSteamID ) = 0;
    virtual bool InviteUserToGame( CSteamID, const char * ) = 0;
    virtual int32_t GetCoplayFriendCount(  ) = 0;
    virtual CSteamID GetCoplayFriend( int32_t ) = 0;
    virtual int32_t GetFriendCoplayTime( CSteamID ) = 0;
    virtual uint32_t GetFriendCoplayGame( CSteamID ) = 0;
    virtual uint64_t JoinClanChatRoom( CSteamID ) = 0;
    virtual bool LeaveClanChatRoom( CSteamID ) = 0;
    virtual int32_t GetClanChatMemberCount( CSteamID ) = 0;
    virtual CSteamID GetChatMemberByIndex( CSteamID, int32_t ) = 0;
    virtual bool SendClanChatMessage( CSteamID, const char * ) = 0;
    virtual int32_t GetClanChatMessage( CSteamID, int32_t, void *, int32_t, uint32_t *, CSteamID * ) = 0;
    virtual bool IsClanChatAdmin( CSteamID, CSteamID ) = 0;
    virtual bool IsClanChatWindowOpenInSteam( CSteamID ) = 0;
    virtual bool OpenClanChatWindowInSteam( CSteamID ) = 0;
    virtual bool CloseClanChatWindowInSteam( CSteamID ) = 0;
    virtual bool SetListenForFriendsMessages( bool ) = 0;
    virtual bool ReplyToFriendMessage( CSteamID, const char * ) = 0;
    virtual int32_t GetFriendMessage( CSteamID, int32_t, void *, int32_t, uint32_t * ) = 0;
    virtual uint64_t GetFollowerCount( CSteamID ) = 0;
    virtual uint64_t IsFollowing( CSteamID ) = 0;
    virtual uint64_t EnumerateFollowingList( uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012
{
#ifdef __cplusplus
    virtual bool FileWrite( const char *, const void *, int32_t ) = 0;
    virtual int32_t FileRead( const char *, void *, int32_t ) = 0;
    virtual bool FileForget( const char * ) = 0;
    virtual bool FileDelete( const char * ) = 0;
    virtual uint64_t FileShare( const char * ) = 0;
    virtual bool SetSyncPlatforms( const char *, uint32_t ) = 0;
    virtual uint64_t FileWriteStreamOpen( const char * ) = 0;
    virtual bool FileWriteStreamWriteChunk( uint64_t, const void *, int32_t ) = 0;
    virtual bool FileWriteStreamClose( uint64_t ) = 0;
    virtual bool FileWriteStreamCancel( uint64_t ) = 0;
    virtual bool FileExists( const char * ) = 0;
    virtual bool FilePersisted( const char * ) = 0;
    virtual int32_t GetFileSize( const char * ) = 0;
    virtual int64_t GetFileTimestamp( const char * ) = 0;
    virtual uint32_t GetSyncPlatforms( const char * ) = 0;
    virtual int32_t GetFileCount(  ) = 0;
    virtual const char * GetFileNameAndSize( int32_t, int32_t * ) = 0;
    virtual bool GetQuota( int32_t *, int32_t * ) = 0;
    virtual bool IsCloudEnabledForAccount(  ) = 0;
    virtual bool IsCloudEnabledForApp(  ) = 0;
    virtual void SetCloudEnabledForApp( bool ) = 0;
    virtual uint64_t UGCDownload( uint64_t, uint32_t ) = 0;
    virtual bool GetUGCDownloadProgress( uint64_t, int32_t *, int32_t * ) = 0;
    virtual bool GetUGCDetails( uint64_t, uint32_t *, char **, int32_t *, CSteamID * ) = 0;
    virtual int32_t UGCRead( uint64_t, void *, int32_t, uint32_t, uint32_t ) = 0;
    virtual int32_t GetCachedUGCCount(  ) = 0;
    virtual uint64_t GetCachedUGCHandle( int32_t ) = 0;
    virtual uint64_t PublishWorkshopFile( const char *, const char *, uint32_t, const char *, const char *, uint32_t, u_SteamParamStringArray_t *, uint32_t ) = 0;
    virtual uint64_t CreatePublishedFileUpdateRequest( uint64_t ) = 0;
    virtual bool UpdatePublishedFileFile( uint64_t, const char * ) = 0;
    virtual bool UpdatePublishedFilePreviewFile( uint64_t, const char * ) = 0;
    virtual bool UpdatePublishedFileTitle( uint64_t, const char * ) = 0;
    virtual bool UpdatePublishedFileDescription( uint64_t, const char * ) = 0;
    virtual bool UpdatePublishedFileVisibility( uint64_t, uint32_t ) = 0;
    virtual bool UpdatePublishedFileTags( uint64_t, u_SteamParamStringArray_t * ) = 0;
    virtual uint64_t CommitPublishedFileUpdate( uint64_t ) = 0;
    virtual uint64_t GetPublishedFileDetails( uint64_t, uint32_t ) = 0;
    virtual uint64_t DeletePublishedFile( uint64_t ) = 0;
    virtual uint64_t EnumerateUserPublishedFiles( uint32_t ) = 0;
    virtual uint64_t SubscribePublishedFile( uint64_t ) = 0;
    virtual uint64_t EnumerateUserSubscribedFiles( uint32_t ) = 0;
    virtual uint64_t UnsubscribePublishedFile( uint64_t ) = 0;
    virtual bool UpdatePublishedFileSetChangeDescription( uint64_t, const char * ) = 0;
    virtual uint64_t GetPublishedItemVoteDetails( uint64_t ) = 0;
    virtual uint64_t UpdateUserPublishedItemVote( uint64_t, bool ) = 0;
    virtual uint64_t GetUserPublishedItemVoteDetails( uint64_t ) = 0;
    virtual uint64_t EnumerateUserSharedWorkshopFiles( CSteamID, uint32_t, u_SteamParamStringArray_t *, u_SteamParamStringArray_t * ) = 0;
    virtual uint64_t PublishVideo( uint32_t, const char *, const char *, const char *, uint32_t, const char *, const char *, uint32_t, u_SteamParamStringArray_t * ) = 0;
    virtual uint64_t SetUserPublishedFileAction( uint64_t, uint32_t ) = 0;
    virtual uint64_t EnumeratePublishedFilesByUserAction( uint32_t, uint32_t ) = 0;
    virtual uint64_t EnumeratePublishedWorkshopFiles( uint32_t, uint32_t, uint32_t, uint32_t, u_SteamParamStringArray_t *, u_SteamParamStringArray_t * ) = 0;
    virtual uint64_t UGCDownloadToLocation( uint64_t, const char *, uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006
{
#ifdef __cplusplus
    virtual bool BIsSubscribed(  ) = 0;
    virtual bool BIsLowViolence(  ) = 0;
    virtual bool BIsCybercafe(  ) = 0;
    virtual bool BIsVACBanned(  ) = 0;
    virtual const char * GetCurrentGameLanguage(  ) = 0;
    virtual const char * GetAvailableGameLanguages(  ) = 0;
    virtual bool BIsSubscribedApp( uint32_t ) = 0;
    virtual bool BIsDlcInstalled( uint32_t ) = 0;
    virtual uint32_t GetEarliestPurchaseUnixTime( uint32_t ) = 0;
    virtual bool BIsSubscribedFromFreeWeekend(  ) = 0;
    virtual int32_t GetDLCCount(  ) = 0;
    virtual bool BGetDLCDataByIndex( int32_t, uint32_t *, bool *, char *, int32_t ) = 0;
    virtual void InstallDLC( uint32_t ) = 0;
    virtual void UninstallDLC( uint32_t ) = 0;
    virtual void RequestAppProofOfPurchaseKey( uint32_t ) = 0;
    virtual bool GetCurrentBetaName( char *, int32_t ) = 0;
    virtual bool MarkContentCorrupt( bool ) = 0;
    virtual uint32_t GetInstalledDepots( uint32_t, uint32_t *, uint32_t ) = 0;
    virtual uint32_t GetAppInstallDir( uint32_t, char *, uint32_t ) = 0;
    virtual bool BIsAppInstalled( uint32_t ) = 0;
    virtual CSteamID GetAppOwner(  ) = 0;
    virtual const char * GetLaunchQueryParam( const char * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION001
{
#ifdef __cplusplus
    virtual uint64_t CreateQueryUserUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint64_t CreateQueryAllUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint64_t SendQueryUGCRequest( uint64_t ) = 0;
    virtual bool GetQueryUGCResult( uint64_t, uint32_t, u_SteamUGCDetails_t_126 * ) = 0;
    virtual bool ReleaseQueryUGCRequest( uint64_t ) = 0;
    virtual bool AddRequiredTag( uint64_t, const char * ) = 0;
    virtual bool AddExcludedTag( uint64_t, const char * ) = 0;
    virtual bool SetReturnLongDescription( uint64_t, bool ) = 0;
    virtual bool SetReturnTotalOnly( uint64_t, bool ) = 0;
    virtual bool SetCloudFileNameFilter( uint64_t, const char * ) = 0;
    virtual bool SetMatchAnyTag( uint64_t, bool ) = 0;
    virtual bool SetSearchText( uint64_t, const char * ) = 0;
    virtual bool SetRankedByTrendDays( uint64_t, uint32_t ) = 0;
    virtual uint64_t RequestUGCDetails( uint64_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamClient_SteamClient013
{
#ifdef __cplusplus
    virtual int32_t CreateSteamPipe(  ) = 0;
    virtual bool BReleaseSteamPipe( int32_t ) = 0;
    virtual int32_t ConnectToGlobalUser( int32_t ) = 0;
    virtual int32_t CreateLocalUser( int32_t *, uint32_t ) = 0;
    virtual void ReleaseUser( int32_t, int32_t ) = 0;
    virtual void /*ISteamUser*/ * GetISteamUser( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamGameServer*/ * GetISteamGameServer( int32_t, int32_t, const char * ) = 0;
    virtual void SetLocalIPBinding( uint32_t, uint16_t ) = 0;
    virtual void /*ISteamFriends*/ * GetISteamFriends( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUtils*/ * GetISteamUtils( int32_t, const char * ) = 0;
    virtual void /*ISteamMatchmaking*/ * GetISteamMatchmaking( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamMatchmakingServers*/ * GetISteamMatchmakingServers( int32_t, int32_t, const char * ) = 0;
    virtual void * GetISteamGenericInterface( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUserStats*/ * GetISteamUserStats( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamGameServerStats*/ * GetISteamGameServerStats( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamApps*/ * GetISteamApps( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamNetworking*/ * GetISteamNetworking( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamRemoteStorage*/ * GetISteamRemoteStorage( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamScreenshots*/ * GetISteamScreenshots( int32_t, int32_t, const char * ) = 0;
    virtual void RunFrame(  ) = 0;
    virtual uint32_t GetIPCCallCount(  ) = 0;
    virtual void SetWarningMessageHook( void (*U_CDECL )(int32_t, const char *) ) = 0;
    virtual bool BShutdownIfAllPipesClosed(  ) = 0;
    virtual void /*ISteamHTTP*/ * GetISteamHTTP( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUnifiedMessages*/ * GetISteamUnifiedMessages( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamController*/ * GetISteamController( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUGC*/ * GetISteamUGC( int32_t, int32_t, const char * ) = 0;
    virtual void * GetISteamInventory( int32_t, int32_t, const char * ) = 0;
    virtual void * GetISteamVideo( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamAppList*/ * GetISteamAppList( int32_t, int32_t, const char * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUtils_SteamUtils007
{
#ifdef __cplusplus
    virtual uint32_t GetSecondsSinceAppActive(  ) = 0;
    virtual uint32_t GetSecondsSinceComputerActive(  ) = 0;
    virtual uint32_t GetConnectedUniverse(  ) = 0;
    virtual uint32_t GetServerRealTime(  ) = 0;
    virtual const char * GetIPCountry(  ) = 0;
    virtual bool GetImageSize( int32_t, uint32_t *, uint32_t * ) = 0;
    virtual bool GetImageRGBA( int32_t, uint8_t *, int32_t ) = 0;
    virtual bool GetCSERIPPort( uint32_t *, uint16_t * ) = 0;
    virtual uint8_t GetCurrentBatteryPower(  ) = 0;
    virtual uint32_t GetAppID(  ) = 0;
    virtual void SetOverlayNotificationPosition( uint32_t ) = 0;
    virtual bool IsAPICallCompleted( uint64_t, bool * ) = 0;
    virtual uint32_t GetAPICallFailureReason( uint64_t ) = 0;
    virtual bool GetAPICallResult( uint64_t, void *, int32_t, int32_t, bool * ) = 0;
    virtual void RunFrame(  ) = 0;
    virtual uint32_t GetIPCCallCount(  ) = 0;
    virtual void SetWarningMessageHook( void (*U_CDECL )(int32_t, const char *) ) = 0;
    virtual bool IsOverlayEnabled(  ) = 0;
    virtual bool BOverlayNeedsPresent(  ) = 0;
    virtual uint64_t CheckFileSignature( const char * ) = 0;
    virtual bool ShowGamepadTextInput( uint32_t, uint32_t, const char *, uint32_t, const char * ) = 0;
    virtual uint32_t GetEnteredGamepadTextLength(  ) = 0;
    virtual bool GetEnteredGamepadTextInput( char *, uint32_t ) = 0;
    virtual const char * GetSteamUILanguage(  ) = 0;
    virtual bool IsSteamRunningInVR(  ) = 0;
    virtual void SetOverlayNotificationInset( int32_t, int32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001
{
#ifdef __cplusplus
    virtual bool BIsEnabled(  ) = 0;
    virtual bool BIsPlaying(  ) = 0;
    virtual uint32_t GetPlaybackStatus(  ) = 0;
    virtual void Play(  ) = 0;
    virtual void Pause(  ) = 0;
    virtual void PlayPrevious(  ) = 0;
    virtual void PlayNext(  ) = 0;
    virtual void SetVolume( float ) = 0;
    virtual float GetVolume(  ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002
{
#ifdef __cplusplus
    virtual uint64_t CreateQueryUserUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint64_t CreateQueryAllUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint64_t SendQueryUGCRequest( uint64_t ) = 0;
    virtual bool GetQueryUGCResult( uint64_t, uint32_t, u_SteamUGCDetails_t_128x * ) = 0;
    virtual bool ReleaseQueryUGCRequest( uint64_t ) = 0;
    virtual bool AddRequiredTag( uint64_t, const char * ) = 0;
    virtual bool AddExcludedTag( uint64_t, const char * ) = 0;
    virtual bool SetReturnLongDescription( uint64_t, bool ) = 0;
    virtual bool SetReturnTotalOnly( uint64_t, bool ) = 0;
    virtual bool SetAllowCachedResponse( uint64_t, uint32_t ) = 0;
    virtual bool SetCloudFileNameFilter( uint64_t, const char * ) = 0;
    virtual bool SetMatchAnyTag( uint64_t, bool ) = 0;
    virtual bool SetSearchText( uint64_t, const char * ) = 0;
    virtual bool SetRankedByTrendDays( uint64_t, uint32_t ) = 0;
    virtual uint64_t RequestUGCDetails( uint64_t, uint32_t ) = 0;
    virtual uint64_t CreateItem( uint32_t, uint32_t ) = 0;
    virtual uint64_t StartItemUpdate( uint32_t, uint64_t ) = 0;
    virtual bool SetItemTitle( uint64_t, const char * ) = 0;
    virtual bool SetItemDescription( uint64_t, const char * ) = 0;
    virtual bool SetItemVisibility( uint64_t, uint32_t ) = 0;
    virtual bool SetItemTags( uint64_t, const u_SteamParamStringArray_t * ) = 0;
    virtual bool SetItemContent( uint64_t, const char * ) = 0;
    virtual bool SetItemPreview( uint64_t, const char * ) = 0;
    virtual uint64_t SubmitItemUpdate( uint64_t, const char * ) = 0;
    virtual uint32_t GetItemUpdateProgress( uint64_t, uint64_t *, uint64_t * ) = 0;
    virtual uint64_t SubscribeItem( uint64_t ) = 0;
    virtual uint64_t UnsubscribeItem( uint64_t ) = 0;
    virtual uint32_t GetNumSubscribedItems(  ) = 0;
    virtual uint32_t GetSubscribedItems( uint64_t *, uint32_t ) = 0;
    virtual bool GetItemInstallInfo( uint64_t, uint64_t *, char *, uint32_t ) = 0;
    virtual bool GetItemUpdateInfo( uint64_t, bool *, bool *, uint64_t *, uint64_t * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001
{
#ifdef __cplusplus
    virtual uint32_t GetNumInstalledApps(  ) = 0;
    virtual uint32_t GetInstalledApps( uint32_t *, uint32_t ) = 0;
    virtual int32_t GetAppName( uint32_t, char *, int32_t ) = 0;
    virtual int32_t GetAppInstallDir( uint32_t, char *, int32_t ) = 0;
    virtual int32_t GetAppBuildId( uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamGameServer_SteamGameServer012
{
#ifdef __cplusplus
    virtual bool InitGameServer( uint32_t, uint16_t, uint16_t, uint32_t, uint32_t, const char * ) = 0;
    virtual void SetProduct( const char * ) = 0;
    virtual void SetGameDescription( const char * ) = 0;
    virtual void SetModDir( const char * ) = 0;
    virtual void SetDedicatedServer( bool ) = 0;
    virtual void LogOn( const char * ) = 0;
    virtual void LogOnAnonymous(  ) = 0;
    virtual void LogOff(  ) = 0;
    virtual bool BLoggedOn(  ) = 0;
    virtual bool BSecure(  ) = 0;
    virtual CSteamID GetSteamID(  ) = 0;
    virtual bool WasRestartRequested(  ) = 0;
    virtual void SetMaxPlayerCount( int32_t ) = 0;
    virtual void SetBotPlayerCount( int32_t ) = 0;
    virtual void SetServerName( const char * ) = 0;
    virtual void SetMapName( const char * ) = 0;
    virtual void SetPasswordProtected( bool ) = 0;
    virtual void SetSpectatorPort( uint16_t ) = 0;
    virtual void SetSpectatorServerName( const char * ) = 0;
    virtual void ClearAllKeyValues(  ) = 0;
    virtual void SetKeyValue( const char *, const char * ) = 0;
    virtual void SetGameTags( const char * ) = 0;
    virtual void SetGameData( const char * ) = 0;
    virtual void SetRegion( const char * ) = 0;
    virtual bool SendUserConnectAndAuthenticate( uint32_t, const void *, uint32_t, CSteamID * ) = 0;
    virtual CSteamID CreateUnauthenticatedUserConnection(  ) = 0;
    virtual void SendUserDisconnect( CSteamID ) = 0;
    virtual bool BUpdateUserData( CSteamID, const char *, uint32_t ) = 0;
    virtual uint32_t GetAuthSessionTicket( void *, int32_t, uint32_t * ) = 0;
    virtual uint32_t BeginAuthSession( const void *, int32_t, CSteamID ) = 0;
    virtual void EndAuthSession( CSteamID ) = 0;
    virtual void CancelAuthTicket( uint32_t ) = 0;
    virtual uint32_t UserHasLicenseForApp( CSteamID, uint32_t ) = 0;
    virtual bool RequestUserGroupStatus( CSteamID, CSteamID ) = 0;
    virtual void GetGameplayStats(  ) = 0;
    virtual uint64_t GetServerReputation(  ) = 0;
    virtual uint32_t GetPublicIP(  ) = 0;
    virtual bool HandleIncomingPacket( const void *, int32_t, uint32_t, uint16_t ) = 0;
    virtual int32_t GetNextOutgoingPacket( void *, int32_t, uint32_t *, uint16_t * ) = 0;
    virtual void EnableHeartbeats( bool ) = 0;
    virtual void SetHeartbeatInterval( int32_t ) = 0;
    virtual void ForceHeartbeat(  ) = 0;
    virtual uint64_t AssociateWithClan( CSteamID ) = 0;
    virtual uint64_t ComputeNewPlayerCompatibility( CSteamID ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamClient_SteamClient014
{
#ifdef __cplusplus
    virtual int32_t CreateSteamPipe(  ) = 0;
    virtual bool BReleaseSteamPipe( int32_t ) = 0;
    virtual int32_t ConnectToGlobalUser( int32_t ) = 0;
    virtual int32_t CreateLocalUser( int32_t *, uint32_t ) = 0;
    virtual void ReleaseUser( int32_t, int32_t ) = 0;
    virtual void /*ISteamUser*/ * GetISteamUser( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamGameServer*/ * GetISteamGameServer( int32_t, int32_t, const char * ) = 0;
    virtual void SetLocalIPBinding( uint32_t, uint16_t ) = 0;
    virtual void /*ISteamFriends*/ * GetISteamFriends( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUtils*/ * GetISteamUtils( int32_t, const char * ) = 0;
    virtual void /*ISteamMatchmaking*/ * GetISteamMatchmaking( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamMatchmakingServers*/ * GetISteamMatchmakingServers( int32_t, int32_t, const char * ) = 0;
    virtual void * GetISteamGenericInterface( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUserStats*/ * GetISteamUserStats( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamGameServerStats*/ * GetISteamGameServerStats( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamApps*/ * GetISteamApps( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamNetworking*/ * GetISteamNetworking( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamRemoteStorage*/ * GetISteamRemoteStorage( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamScreenshots*/ * GetISteamScreenshots( int32_t, int32_t, const char * ) = 0;
    virtual void RunFrame(  ) = 0;
    virtual uint32_t GetIPCCallCount(  ) = 0;
    virtual void SetWarningMessageHook( void (*U_CDECL )(int32_t, const char *) ) = 0;
    virtual bool BShutdownIfAllPipesClosed(  ) = 0;
    virtual void /*ISteamHTTP*/ * GetISteamHTTP( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUnifiedMessages*/ * GetISteamUnifiedMessages( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamController*/ * GetISteamController( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUGC*/ * GetISteamUGC( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamAppList*/ * GetISteamAppList( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamMusic*/ * GetISteamMusic( int32_t, int32_t, const char * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamClient_SteamClient015
{
#ifdef __cplusplus
    virtual int32_t CreateSteamPipe(  ) = 0;
    virtual bool BReleaseSteamPipe( int32_t ) = 0;
    virtual int32_t ConnectToGlobalUser( int32_t ) = 0;
    virtual int32_t CreateLocalUser( int32_t *, uint32_t ) = 0;
    virtual void ReleaseUser( int32_t, int32_t ) = 0;
    virtual void /*ISteamUser*/ * GetISteamUser( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamGameServer*/ * GetISteamGameServer( int32_t, int32_t, const char * ) = 0;
    virtual void SetLocalIPBinding( uint32_t, uint16_t ) = 0;
    virtual void /*ISteamFriends*/ * GetISteamFriends( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUtils*/ * GetISteamUtils( int32_t, const char * ) = 0;
    virtual void /*ISteamMatchmaking*/ * GetISteamMatchmaking( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamMatchmakingServers*/ * GetISteamMatchmakingServers( int32_t, int32_t, const char * ) = 0;
    virtual void * GetISteamGenericInterface( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUserStats*/ * GetISteamUserStats( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamGameServerStats*/ * GetISteamGameServerStats( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamApps*/ * GetISteamApps( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamNetworking*/ * GetISteamNetworking( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamRemoteStorage*/ * GetISteamRemoteStorage( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamScreenshots*/ * GetISteamScreenshots( int32_t, int32_t, const char * ) = 0;
    virtual void RunFrame(  ) = 0;
    virtual uint32_t GetIPCCallCount(  ) = 0;
    virtual void SetWarningMessageHook( void (*U_CDECL )(int32_t, const char *) ) = 0;
    virtual bool BShutdownIfAllPipesClosed(  ) = 0;
    virtual void /*ISteamHTTP*/ * GetISteamHTTP( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUnifiedMessages*/ * GetISteamUnifiedMessages( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamController*/ * GetISteamController( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUGC*/ * GetISteamUGC( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamAppList*/ * GetISteamAppList( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamMusic*/ * GetISteamMusic( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamMusicRemote*/ * GetISteamMusicRemote( int32_t, int32_t, const char * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001
{
#ifdef __cplusplus
    virtual bool RegisterSteamMusicRemote( const char * ) = 0;
    virtual bool DeregisterSteamMusicRemote(  ) = 0;
    virtual bool BIsCurrentMusicRemote(  ) = 0;
    virtual bool BActivationSuccess( bool ) = 0;
    virtual bool SetDisplayName( const char * ) = 0;
    virtual bool SetPNGIcon_64x64( void *, uint32_t ) = 0;
    virtual bool EnablePlayPrevious( bool ) = 0;
    virtual bool EnablePlayNext( bool ) = 0;
    virtual bool EnableShuffled( bool ) = 0;
    virtual bool EnableLooped( bool ) = 0;
    virtual bool EnableQueue( bool ) = 0;
    virtual bool EnablePlaylists( bool ) = 0;
    virtual bool UpdatePlaybackStatus( uint32_t ) = 0;
    virtual bool UpdateShuffled( bool ) = 0;
    virtual bool UpdateLooped( bool ) = 0;
    virtual bool UpdateVolume( float ) = 0;
    virtual bool CurrentEntryWillChange(  ) = 0;
    virtual bool CurrentEntryIsAvailable( bool ) = 0;
    virtual bool UpdateCurrentEntryText( const char * ) = 0;
    virtual bool UpdateCurrentEntryElapsedSeconds( int32_t ) = 0;
    virtual bool UpdateCurrentEntryCoverArt( void *, uint32_t ) = 0;
    virtual bool CurrentEntryDidChange(  ) = 0;
    virtual bool QueueWillChange(  ) = 0;
    virtual bool ResetQueueEntries(  ) = 0;
    virtual bool SetQueueEntry( int32_t, int32_t, const char * ) = 0;
    virtual bool SetCurrentQueueEntry( int32_t ) = 0;
    virtual bool QueueDidChange(  ) = 0;
    virtual bool PlaylistWillChange(  ) = 0;
    virtual bool ResetPlaylistEntries(  ) = 0;
    virtual bool SetPlaylistEntry( int32_t, int32_t, const char * ) = 0;
    virtual bool SetCurrentPlaylistEntry( int32_t ) = 0;
    virtual bool PlaylistDidChange(  ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamClient_SteamClient016
{
#ifdef __cplusplus
    virtual int32_t CreateSteamPipe(  ) = 0;
    virtual bool BReleaseSteamPipe( int32_t ) = 0;
    virtual int32_t ConnectToGlobalUser( int32_t ) = 0;
    virtual int32_t CreateLocalUser( int32_t *, uint32_t ) = 0;
    virtual void ReleaseUser( int32_t, int32_t ) = 0;
    virtual void /*ISteamUser*/ * GetISteamUser( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamGameServer*/ * GetISteamGameServer( int32_t, int32_t, const char * ) = 0;
    virtual void SetLocalIPBinding( uint32_t, uint16_t ) = 0;
    virtual void /*ISteamFriends*/ * GetISteamFriends( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUtils*/ * GetISteamUtils( int32_t, const char * ) = 0;
    virtual void /*ISteamMatchmaking*/ * GetISteamMatchmaking( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamMatchmakingServers*/ * GetISteamMatchmakingServers( int32_t, int32_t, const char * ) = 0;
    virtual void * GetISteamGenericInterface( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUserStats*/ * GetISteamUserStats( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamGameServerStats*/ * GetISteamGameServerStats( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamApps*/ * GetISteamApps( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamNetworking*/ * GetISteamNetworking( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamRemoteStorage*/ * GetISteamRemoteStorage( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamScreenshots*/ * GetISteamScreenshots( int32_t, int32_t, const char * ) = 0;
    virtual void RunFrame(  ) = 0;
    virtual uint32_t GetIPCCallCount(  ) = 0;
    virtual void SetWarningMessageHook( void (*U_CDECL )(int32_t, const char *) ) = 0;
    virtual bool BShutdownIfAllPipesClosed(  ) = 0;
    virtual void /*ISteamHTTP*/ * GetISteamHTTP( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUnifiedMessages*/ * GetISteamUnifiedMessages( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamController*/ * GetISteamController( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUGC*/ * GetISteamUGC( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamAppList*/ * GetISteamAppList( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamMusic*/ * GetISteamMusic( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamMusicRemote*/ * GetISteamMusicRemote( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamHTMLSurface*/ * GetISteamHTMLSurface( int32_t, int32_t, const char * ) = 0;
    virtual void Set_SteamAPI_CPostAPIResultInProcess( void (*U_STDCALL )(uint64_t, void *, uint32_t, int32_t) ) = 0;
    virtual void Remove_SteamAPI_CPostAPIResultInProcess( void (*U_STDCALL )(uint64_t, void *, uint32_t, int32_t) ) = 0;
    virtual void Set_SteamAPI_CCheckCallbackRegisteredInProcess( uint32_t (*U_STDCALL )(int32_t) ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003
{
#ifdef __cplusplus
    virtual uint64_t CreateQueryUserUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint64_t CreateQueryAllUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint64_t SendQueryUGCRequest( uint64_t ) = 0;
    virtual bool GetQueryUGCResult( uint64_t, uint32_t, u_SteamUGCDetails_t_128x * ) = 0;
    virtual bool ReleaseQueryUGCRequest( uint64_t ) = 0;
    virtual bool AddRequiredTag( uint64_t, const char * ) = 0;
    virtual bool AddExcludedTag( uint64_t, const char * ) = 0;
    virtual bool SetReturnLongDescription( uint64_t, bool ) = 0;
    virtual bool SetReturnTotalOnly( uint64_t, bool ) = 0;
    virtual bool SetAllowCachedResponse( uint64_t, uint32_t ) = 0;
    virtual bool SetCloudFileNameFilter( uint64_t, const char * ) = 0;
    virtual bool SetMatchAnyTag( uint64_t, bool ) = 0;
    virtual bool SetSearchText( uint64_t, const char * ) = 0;
    virtual bool SetRankedByTrendDays( uint64_t, uint32_t ) = 0;
    virtual uint64_t RequestUGCDetails( uint64_t, uint32_t ) = 0;
    virtual uint64_t CreateItem( uint32_t, uint32_t ) = 0;
    virtual uint64_t StartItemUpdate( uint32_t, uint64_t ) = 0;
    virtual bool SetItemTitle( uint64_t, const char * ) = 0;
    virtual bool SetItemDescription( uint64_t, const char * ) = 0;
    virtual bool SetItemVisibility( uint64_t, uint32_t ) = 0;
    virtual bool SetItemTags( uint64_t, const u_SteamParamStringArray_t * ) = 0;
    virtual bool SetItemContent( uint64_t, const char * ) = 0;
    virtual bool SetItemPreview( uint64_t, const char * ) = 0;
    virtual uint64_t SubmitItemUpdate( uint64_t, const char * ) = 0;
    virtual uint32_t GetItemUpdateProgress( uint64_t, uint64_t *, uint64_t * ) = 0;
    virtual uint64_t SubscribeItem( uint64_t ) = 0;
    virtual uint64_t UnsubscribeItem( uint64_t ) = 0;
    virtual uint32_t GetNumSubscribedItems(  ) = 0;
    virtual uint32_t GetSubscribedItems( uint64_t *, uint32_t ) = 0;
    virtual bool GetItemInstallInfo( uint64_t, uint64_t *, char *, uint32_t, bool * ) = 0;
    virtual bool GetItemUpdateInfo( uint64_t, bool *, bool *, uint64_t *, uint64_t * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001
{
#ifdef __cplusplus
    virtual ~u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001(  ) = 0;
    virtual bool Init(  ) = 0;
    virtual bool Shutdown(  ) = 0;
    virtual uint64_t CreateBrowser( const char *, const char * ) = 0;
    virtual void RemoveBrowser( uint32_t ) = 0;
    virtual void LoadURL( uint32_t, const char *, const char * ) = 0;
    virtual void SetSize( uint32_t, uint32_t, uint32_t ) = 0;
    virtual void StopLoad( uint32_t ) = 0;
    virtual void Reload( uint32_t ) = 0;
    virtual void GoBack( uint32_t ) = 0;
    virtual void GoForward( uint32_t ) = 0;
    virtual void AddHeader( uint32_t, const char *, const char * ) = 0;
    virtual void ExecuteJavascript( uint32_t, const char * ) = 0;
    virtual void MouseUp( uint32_t, uint32_t ) = 0;
    virtual void MouseDown( uint32_t, uint32_t ) = 0;
    virtual void MouseDoubleClick( uint32_t, uint32_t ) = 0;
    virtual void MouseMove( uint32_t, int32_t, int32_t ) = 0;
    virtual void MouseWheel( uint32_t, int32_t ) = 0;
    virtual void KeyDown( uint32_t, uint32_t, uint32_t ) = 0;
    virtual void KeyUp( uint32_t, uint32_t, uint32_t ) = 0;
    virtual void KeyChar( uint32_t, uint32_t, uint32_t ) = 0;
    virtual void SetHorizontalScroll( uint32_t, uint32_t ) = 0;
    virtual void SetVerticalScroll( uint32_t, uint32_t ) = 0;
    virtual void SetKeyFocus( uint32_t, bool ) = 0;
    virtual void ViewSource( uint32_t ) = 0;
    virtual void CopyToClipboard( uint32_t ) = 0;
    virtual void PasteFromClipboard( uint32_t ) = 0;
    virtual void Find( uint32_t, const char *, bool, bool ) = 0;
    virtual void StopFind( uint32_t ) = 0;
    virtual void GetLinkAtPosition( uint32_t, int32_t, int32_t ) = 0;
    virtual void AllowStartRequest( uint32_t, bool ) = 0;
    virtual void JSDialogResponse( uint32_t, bool ) = 0;
    virtual void FileLoadDialogResponse( uint32_t, const char ** ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002
{
#ifdef __cplusplus
    virtual ~u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002(  ) = 0;
    virtual bool Init(  ) = 0;
    virtual bool Shutdown(  ) = 0;
    virtual uint64_t CreateBrowser( const char *, const char * ) = 0;
    virtual void RemoveBrowser( uint32_t ) = 0;
    virtual void LoadURL( uint32_t, const char *, const char * ) = 0;
    virtual void SetSize( uint32_t, uint32_t, uint32_t ) = 0;
    virtual void StopLoad( uint32_t ) = 0;
    virtual void Reload( uint32_t ) = 0;
    virtual void GoBack( uint32_t ) = 0;
    virtual void GoForward( uint32_t ) = 0;
    virtual void AddHeader( uint32_t, const char *, const char * ) = 0;
    virtual void ExecuteJavascript( uint32_t, const char * ) = 0;
    virtual void MouseUp( uint32_t, uint32_t ) = 0;
    virtual void MouseDown( uint32_t, uint32_t ) = 0;
    virtual void MouseDoubleClick( uint32_t, uint32_t ) = 0;
    virtual void MouseMove( uint32_t, int32_t, int32_t ) = 0;
    virtual void MouseWheel( uint32_t, int32_t ) = 0;
    virtual void KeyDown( uint32_t, uint32_t, uint32_t ) = 0;
    virtual void KeyUp( uint32_t, uint32_t, uint32_t ) = 0;
    virtual void KeyChar( uint32_t, uint32_t, uint32_t ) = 0;
    virtual void SetHorizontalScroll( uint32_t, uint32_t ) = 0;
    virtual void SetVerticalScroll( uint32_t, uint32_t ) = 0;
    virtual void SetKeyFocus( uint32_t, bool ) = 0;
    virtual void ViewSource( uint32_t ) = 0;
    virtual void CopyToClipboard( uint32_t ) = 0;
    virtual void PasteFromClipboard( uint32_t ) = 0;
    virtual void Find( uint32_t, const char *, bool, bool ) = 0;
    virtual void StopFind( uint32_t ) = 0;
    virtual void GetLinkAtPosition( uint32_t, int32_t, int32_t ) = 0;
    virtual void SetCookie( const char *, const char *, const char *, const char *, uint32_t, bool, bool ) = 0;
    virtual void SetPageScaleFactor( uint32_t, float, int32_t, int32_t ) = 0;
    virtual void AllowStartRequest( uint32_t, bool ) = 0;
    virtual void JSDialogResponse( uint32_t, bool ) = 0;
    virtual void FileLoadDialogResponse( uint32_t, const char ** ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamClient_SteamClient017
{
#ifdef __cplusplus
    virtual int32_t CreateSteamPipe(  ) = 0;
    virtual bool BReleaseSteamPipe( int32_t ) = 0;
    virtual int32_t ConnectToGlobalUser( int32_t ) = 0;
    virtual int32_t CreateLocalUser( int32_t *, uint32_t ) = 0;
    virtual void ReleaseUser( int32_t, int32_t ) = 0;
    virtual void /*ISteamUser*/ * GetISteamUser( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamGameServer*/ * GetISteamGameServer( int32_t, int32_t, const char * ) = 0;
    virtual void SetLocalIPBinding( uint32_t, uint16_t ) = 0;
    virtual void /*ISteamFriends*/ * GetISteamFriends( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUtils*/ * GetISteamUtils( int32_t, const char * ) = 0;
    virtual void /*ISteamMatchmaking*/ * GetISteamMatchmaking( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamMatchmakingServers*/ * GetISteamMatchmakingServers( int32_t, int32_t, const char * ) = 0;
    virtual void * GetISteamGenericInterface( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUserStats*/ * GetISteamUserStats( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamGameServerStats*/ * GetISteamGameServerStats( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamApps*/ * GetISteamApps( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamNetworking*/ * GetISteamNetworking( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamRemoteStorage*/ * GetISteamRemoteStorage( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamScreenshots*/ * GetISteamScreenshots( int32_t, int32_t, const char * ) = 0;
    virtual void RunFrame(  ) = 0;
    virtual uint32_t GetIPCCallCount(  ) = 0;
    virtual void SetWarningMessageHook( void (*U_CDECL )(int32_t, const char *) ) = 0;
    virtual bool BShutdownIfAllPipesClosed(  ) = 0;
    virtual void /*ISteamHTTP*/ * GetISteamHTTP( int32_t, int32_t, const char * ) = 0;
    virtual void * DEPRECATED_GetISteamUnifiedMessages( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamController*/ * GetISteamController( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUGC*/ * GetISteamUGC( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamAppList*/ * GetISteamAppList( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamMusic*/ * GetISteamMusic( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamMusicRemote*/ * GetISteamMusicRemote( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamHTMLSurface*/ * GetISteamHTMLSurface( int32_t, int32_t, const char * ) = 0;
    virtual void DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess( void (*U_STDCALL )(void) ) = 0;
    virtual void DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess( void (*U_STDCALL )(void) ) = 0;
    virtual void Set_SteamAPI_CCheckCallbackRegisteredInProcess( uint32_t (*U_STDCALL )(int32_t) ) = 0;
    virtual void /*ISteamInventory*/ * GetISteamInventory( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamVideo*/ * GetISteamVideo( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamParentalSettings*/ * GetISteamParentalSettings( int32_t, int32_t, const char * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUser_SteamUser018
{
#ifdef __cplusplus
    virtual int32_t GetHSteamUser(  ) = 0;
    virtual bool BLoggedOn(  ) = 0;
    virtual CSteamID GetSteamID(  ) = 0;
    virtual int32_t InitiateGameConnection( void *, int32_t, CSteamID, uint32_t, uint16_t, bool ) = 0;
    virtual void TerminateGameConnection( uint32_t, uint16_t ) = 0;
    virtual void TrackAppUsageEvent( CGameID, int32_t, const char * ) = 0;
    virtual bool GetUserDataFolder( char *, int32_t ) = 0;
    virtual void StartVoiceRecording(  ) = 0;
    virtual void StopVoiceRecording(  ) = 0;
    virtual uint32_t GetAvailableVoice( uint32_t *, uint32_t *, uint32_t ) = 0;
    virtual uint32_t GetVoice( bool, void *, uint32_t, uint32_t *, bool, void *, uint32_t, uint32_t *, uint32_t ) = 0;
    virtual uint32_t DecompressVoice( const void *, uint32_t, void *, uint32_t, uint32_t *, uint32_t ) = 0;
    virtual uint32_t GetVoiceOptimalSampleRate(  ) = 0;
    virtual uint32_t GetAuthSessionTicket( void *, int32_t, uint32_t * ) = 0;
    virtual uint32_t BeginAuthSession( const void *, int32_t, CSteamID ) = 0;
    virtual void EndAuthSession( CSteamID ) = 0;
    virtual void CancelAuthTicket( uint32_t ) = 0;
    virtual uint32_t UserHasLicenseForApp( CSteamID, uint32_t ) = 0;
    virtual bool BIsBehindNAT(  ) = 0;
    virtual void AdvertiseGame( CSteamID, uint32_t, uint16_t ) = 0;
    virtual uint64_t RequestEncryptedAppTicket( void *, int32_t ) = 0;
    virtual bool GetEncryptedAppTicket( void *, int32_t, uint32_t * ) = 0;
    virtual int32_t GetGameBadgeLevel( int32_t, bool ) = 0;
    virtual int32_t GetPlayerSteamLevel(  ) = 0;
    virtual uint64_t RequestStoreAuthURL( const char * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamFriends_SteamFriends015
{
#ifdef __cplusplus
    virtual const char * GetPersonaName(  ) = 0;
    virtual uint64_t SetPersonaName( const char * ) = 0;
    virtual uint32_t GetPersonaState(  ) = 0;
    virtual int32_t GetFriendCount( int32_t ) = 0;
    virtual CSteamID GetFriendByIndex( int32_t, int32_t ) = 0;
    virtual uint32_t GetFriendRelationship( CSteamID ) = 0;
    virtual uint32_t GetFriendPersonaState( CSteamID ) = 0;
    virtual const char * GetFriendPersonaName( CSteamID ) = 0;
    virtual bool GetFriendGamePlayed( CSteamID, FriendGameInfo_t * ) = 0;
    virtual const char * GetFriendPersonaNameHistory( CSteamID, int32_t ) = 0;
    virtual int32_t GetFriendSteamLevel( CSteamID ) = 0;
    virtual const char * GetPlayerNickname( CSteamID ) = 0;
    virtual int32_t GetFriendsGroupCount(  ) = 0;
    virtual int16_t GetFriendsGroupIDByIndex( int32_t ) = 0;
    virtual const char * GetFriendsGroupName( int16_t ) = 0;
    virtual int32_t GetFriendsGroupMembersCount( int16_t ) = 0;
    virtual void GetFriendsGroupMembersList( int16_t, CSteamID *, int32_t ) = 0;
    virtual bool HasFriend( CSteamID, int32_t ) = 0;
    virtual int32_t GetClanCount(  ) = 0;
    virtual CSteamID GetClanByIndex( int32_t ) = 0;
    virtual const char * GetClanName( CSteamID ) = 0;
    virtual const char * GetClanTag( CSteamID ) = 0;
    virtual bool GetClanActivityCounts( CSteamID, int32_t *, int32_t *, int32_t * ) = 0;
    virtual uint64_t DownloadClanActivityCounts( CSteamID *, int32_t ) = 0;
    virtual int32_t GetFriendCountFromSource( CSteamID ) = 0;
    virtual CSteamID GetFriendFromSourceByIndex( CSteamID, int32_t ) = 0;
    virtual bool IsUserInSource( CSteamID, CSteamID ) = 0;
    virtual void SetInGameVoiceSpeaking( CSteamID, bool ) = 0;
    virtual void ActivateGameOverlay( const char * ) = 0;
    virtual void ActivateGameOverlayToUser( const char *, CSteamID ) = 0;
    virtual void ActivateGameOverlayToWebPage( const char * ) = 0;
    virtual void ActivateGameOverlayToStore( uint32_t, uint32_t ) = 0;
    virtual void SetPlayedWith( CSteamID ) = 0;
    virtual void ActivateGameOverlayInviteDialog( CSteamID ) = 0;
    virtual int32_t GetSmallFriendAvatar( CSteamID ) = 0;
    virtual int32_t GetMediumFriendAvatar( CSteamID ) = 0;
    virtual int32_t GetLargeFriendAvatar( CSteamID ) = 0;
    virtual bool RequestUserInformation( CSteamID, bool ) = 0;
    virtual uint64_t RequestClanOfficerList( CSteamID ) = 0;
    virtual CSteamID GetClanOwner( CSteamID ) = 0;
    virtual int32_t GetClanOfficerCount( CSteamID ) = 0;
    virtual CSteamID GetClanOfficerByIndex( CSteamID, int32_t ) = 0;
    virtual uint32_t GetUserRestrictions(  ) = 0;
    virtual bool SetRichPresence( const char *, const char * ) = 0;
    virtual void ClearRichPresence(  ) = 0;
    virtual const char * GetFriendRichPresence( CSteamID, const char * ) = 0;
    virtual int32_t GetFriendRichPresenceKeyCount( CSteamID ) = 0;
    virtual const char * GetFriendRichPresenceKeyByIndex( CSteamID, int32_t ) = 0;
    virtual void RequestFriendRichPresence( CSteamID ) = 0;
    virtual bool InviteUserToGame( CSteamID, const char * ) = 0;
    virtual int32_t GetCoplayFriendCount(  ) = 0;
    virtual CSteamID GetCoplayFriend( int32_t ) = 0;
    virtual int32_t GetFriendCoplayTime( CSteamID ) = 0;
    virtual uint32_t GetFriendCoplayGame( CSteamID ) = 0;
    virtual uint64_t JoinClanChatRoom( CSteamID ) = 0;
    virtual bool LeaveClanChatRoom( CSteamID ) = 0;
    virtual int32_t GetClanChatMemberCount( CSteamID ) = 0;
    virtual CSteamID GetChatMemberByIndex( CSteamID, int32_t ) = 0;
    virtual bool SendClanChatMessage( CSteamID, const char * ) = 0;
    virtual int32_t GetClanChatMessage( CSteamID, int32_t, void *, int32_t, uint32_t *, CSteamID * ) = 0;
    virtual bool IsClanChatAdmin( CSteamID, CSteamID ) = 0;
    virtual bool IsClanChatWindowOpenInSteam( CSteamID ) = 0;
    virtual bool OpenClanChatWindowInSteam( CSteamID ) = 0;
    virtual bool CloseClanChatWindowInSteam( CSteamID ) = 0;
    virtual bool SetListenForFriendsMessages( bool ) = 0;
    virtual bool ReplyToFriendMessage( CSteamID, const char * ) = 0;
    virtual int32_t GetFriendMessage( CSteamID, int32_t, void *, int32_t, uint32_t * ) = 0;
    virtual uint64_t GetFollowerCount( CSteamID ) = 0;
    virtual uint64_t IsFollowing( CSteamID ) = 0;
    virtual uint64_t EnumerateFollowingList( uint32_t ) = 0;
    virtual bool IsClanPublic( CSteamID ) = 0;
    virtual bool IsClanOfficialGameGroup( CSteamID ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION007
{
#ifdef __cplusplus
    virtual bool BIsSubscribed(  ) = 0;
    virtual bool BIsLowViolence(  ) = 0;
    virtual bool BIsCybercafe(  ) = 0;
    virtual bool BIsVACBanned(  ) = 0;
    virtual const char * GetCurrentGameLanguage(  ) = 0;
    virtual const char * GetAvailableGameLanguages(  ) = 0;
    virtual bool BIsSubscribedApp( uint32_t ) = 0;
    virtual bool BIsDlcInstalled( uint32_t ) = 0;
    virtual uint32_t GetEarliestPurchaseUnixTime( uint32_t ) = 0;
    virtual bool BIsSubscribedFromFreeWeekend(  ) = 0;
    virtual int32_t GetDLCCount(  ) = 0;
    virtual bool BGetDLCDataByIndex( int32_t, uint32_t *, bool *, char *, int32_t ) = 0;
    virtual void InstallDLC( uint32_t ) = 0;
    virtual void UninstallDLC( uint32_t ) = 0;
    virtual void RequestAppProofOfPurchaseKey( uint32_t ) = 0;
    virtual bool GetCurrentBetaName( char *, int32_t ) = 0;
    virtual bool MarkContentCorrupt( bool ) = 0;
    virtual uint32_t GetInstalledDepots( uint32_t, uint32_t *, uint32_t ) = 0;
    virtual uint32_t GetAppInstallDir( uint32_t, char *, uint32_t ) = 0;
    virtual bool BIsAppInstalled( uint32_t ) = 0;
    virtual CSteamID GetAppOwner(  ) = 0;
    virtual const char * GetLaunchQueryParam( const char * ) = 0;
    virtual bool GetDlcDownloadProgress( uint32_t, uint64_t *, uint64_t * ) = 0;
    virtual int32_t GetAppBuildId(  ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001
{
#ifdef __cplusplus
    virtual uint32_t GetResultStatus( int32_t ) = 0;
    virtual bool GetResultItems( int32_t, SteamItemDetails_t *, uint32_t * ) = 0;
    virtual uint32_t GetResultTimestamp( int32_t ) = 0;
    virtual bool CheckResultSteamID( int32_t, CSteamID ) = 0;
    virtual void DestroyResult( int32_t ) = 0;
    virtual bool GetAllItems( int32_t * ) = 0;
    virtual bool GetItemsByID( int32_t *, const uint64_t *, uint32_t ) = 0;
    virtual bool SerializeResult( int32_t, void *, uint32_t * ) = 0;
    virtual bool DeserializeResult( int32_t *, const void *, uint32_t, bool ) = 0;
    virtual bool GenerateItems( int32_t *, const int32_t *, const uint32_t *, uint32_t ) = 0;
    virtual bool GrantPromoItems( int32_t * ) = 0;
    virtual bool AddPromoItem( int32_t *, int32_t ) = 0;
    virtual bool AddPromoItems( int32_t *, const int32_t *, uint32_t ) = 0;
    virtual bool ConsumeItem( int32_t *, uint64_t, uint32_t ) = 0;
    virtual bool ExchangeItems( int32_t *, const int32_t *, const uint32_t *, uint32_t, const uint64_t *, const uint32_t *, uint32_t ) = 0;
    virtual bool TransferItemQuantity( int32_t *, uint64_t, uint32_t, uint64_t ) = 0;
    virtual void SendItemDropHeartbeat(  ) = 0;
    virtual bool TriggerItemDrop( int32_t *, int32_t ) = 0;
    virtual bool TradeItems( int32_t *, CSteamID, const uint64_t *, const uint32_t *, uint32_t, const uint64_t *, const uint32_t *, uint32_t ) = 0;
    virtual bool LoadItemDefinitions(  ) = 0;
    virtual bool GetItemDefinitionIDs( int32_t *, uint32_t * ) = 0;
    virtual bool GetItemDefinitionProperty( int32_t, const char *, char *, uint32_t * ) = 0;
    virtual uint64_t RequestEligiblePromoItemDefinitionsIDs( CSteamID ) = 0;
    virtual bool GetEligiblePromoItemDefinitionIDs( CSteamID, int32_t *, uint32_t * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamVideo_STEAMVIDEO_INTERFACE_V001
{
#ifdef __cplusplus
    virtual void GetVideoURL( uint32_t ) = 0;
    virtual bool IsBroadcasting( int32_t * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004
{
#ifdef __cplusplus
    virtual uint64_t CreateQueryUserUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint64_t CreateQueryAllUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint64_t SendQueryUGCRequest( uint64_t ) = 0;
    virtual bool GetQueryUGCResult( uint64_t, uint32_t, u_SteamUGCDetails_t_128x * ) = 0;
    virtual bool ReleaseQueryUGCRequest( uint64_t ) = 0;
    virtual bool AddRequiredTag( uint64_t, const char * ) = 0;
    virtual bool AddExcludedTag( uint64_t, const char * ) = 0;
    virtual bool SetReturnLongDescription( uint64_t, bool ) = 0;
    virtual bool SetReturnTotalOnly( uint64_t, bool ) = 0;
    virtual bool SetAllowCachedResponse( uint64_t, uint32_t ) = 0;
    virtual bool SetCloudFileNameFilter( uint64_t, const char * ) = 0;
    virtual bool SetMatchAnyTag( uint64_t, bool ) = 0;
    virtual bool SetSearchText( uint64_t, const char * ) = 0;
    virtual bool SetRankedByTrendDays( uint64_t, uint32_t ) = 0;
    virtual uint64_t RequestUGCDetails( uint64_t, uint32_t ) = 0;
    virtual uint64_t CreateItem( uint32_t, uint32_t ) = 0;
    virtual uint64_t StartItemUpdate( uint32_t, uint64_t ) = 0;
    virtual bool SetItemTitle( uint64_t, const char * ) = 0;
    virtual bool SetItemDescription( uint64_t, const char * ) = 0;
    virtual bool SetItemVisibility( uint64_t, uint32_t ) = 0;
    virtual bool SetItemTags( uint64_t, const u_SteamParamStringArray_t * ) = 0;
    virtual bool SetItemContent( uint64_t, const char * ) = 0;
    virtual bool SetItemPreview( uint64_t, const char * ) = 0;
    virtual uint64_t SubmitItemUpdate( uint64_t, const char * ) = 0;
    virtual uint32_t GetItemUpdateProgress( uint64_t, uint64_t *, uint64_t * ) = 0;
    virtual uint64_t SubscribeItem( uint64_t ) = 0;
    virtual uint64_t UnsubscribeItem( uint64_t ) = 0;
    virtual uint32_t GetNumSubscribedItems(  ) = 0;
    virtual uint32_t GetSubscribedItems( uint64_t *, uint32_t ) = 0;
    virtual uint32_t GetItemState( uint64_t ) = 0;
    virtual bool GetItemInstallInfo( uint64_t, uint64_t *, char *, uint32_t, uint32_t * ) = 0;
    virtual bool GetItemDownloadInfo( uint64_t, uint64_t *, uint64_t * ) = 0;
    virtual bool DownloadItem( uint64_t, bool ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005
{
#ifdef __cplusplus
    virtual uint64_t CreateQueryUserUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint64_t CreateQueryAllUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint64_t CreateQueryUGCDetailsRequest( uint64_t *, uint32_t ) = 0;
    virtual uint64_t SendQueryUGCRequest( uint64_t ) = 0;
    virtual bool GetQueryUGCResult( uint64_t, uint32_t, u_SteamUGCDetails_t_128x * ) = 0;
    virtual bool GetQueryUGCPreviewURL( uint64_t, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCMetadata( uint64_t, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCChildren( uint64_t, uint32_t, uint64_t *, uint32_t ) = 0;
    virtual bool GetQueryUGCStatistic( uint64_t, uint32_t, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetQueryUGCNumAdditionalPreviews( uint64_t, uint32_t ) = 0;
    virtual bool GetQueryUGCAdditionalPreview( uint64_t, uint32_t, uint32_t, char *, uint32_t, bool * ) = 0;
    virtual bool ReleaseQueryUGCRequest( uint64_t ) = 0;
    virtual bool AddRequiredTag( uint64_t, const char * ) = 0;
    virtual bool AddExcludedTag( uint64_t, const char * ) = 0;
    virtual bool SetReturnLongDescription( uint64_t, bool ) = 0;
    virtual bool SetReturnMetadata( uint64_t, bool ) = 0;
    virtual bool SetReturnChildren( uint64_t, bool ) = 0;
    virtual bool SetReturnAdditionalPreviews( uint64_t, bool ) = 0;
    virtual bool SetReturnTotalOnly( uint64_t, bool ) = 0;
    virtual bool SetAllowCachedResponse( uint64_t, uint32_t ) = 0;
    virtual bool SetCloudFileNameFilter( uint64_t, const char * ) = 0;
    virtual bool SetMatchAnyTag( uint64_t, bool ) = 0;
    virtual bool SetSearchText( uint64_t, const char * ) = 0;
    virtual bool SetRankedByTrendDays( uint64_t, uint32_t ) = 0;
    virtual uint64_t RequestUGCDetails( uint64_t, uint32_t ) = 0;
    virtual uint64_t CreateItem( uint32_t, uint32_t ) = 0;
    virtual uint64_t StartItemUpdate( uint32_t, uint64_t ) = 0;
    virtual bool SetItemTitle( uint64_t, const char * ) = 0;
    virtual bool SetItemDescription( uint64_t, const char * ) = 0;
    virtual bool SetItemMetadata( uint64_t, const char * ) = 0;
    virtual bool SetItemVisibility( uint64_t, uint32_t ) = 0;
    virtual bool SetItemTags( uint64_t, const u_SteamParamStringArray_t * ) = 0;
    virtual bool SetItemContent( uint64_t, const char * ) = 0;
    virtual bool SetItemPreview( uint64_t, const char * ) = 0;
    virtual uint64_t SubmitItemUpdate( uint64_t, const char * ) = 0;
    virtual uint32_t GetItemUpdateProgress( uint64_t, uint64_t *, uint64_t * ) = 0;
    virtual uint64_t AddItemToFavorites( uint32_t, uint64_t ) = 0;
    virtual uint64_t RemoveItemFromFavorites( uint32_t, uint64_t ) = 0;
    virtual uint64_t SubscribeItem( uint64_t ) = 0;
    virtual uint64_t UnsubscribeItem( uint64_t ) = 0;
    virtual uint32_t GetNumSubscribedItems(  ) = 0;
    virtual uint32_t GetSubscribedItems( uint64_t *, uint32_t ) = 0;
    virtual uint32_t GetItemState( uint64_t ) = 0;
    virtual bool GetItemInstallInfo( uint64_t, uint64_t *, char *, uint32_t, uint32_t * ) = 0;
    virtual bool GetItemDownloadInfo( uint64_t, uint64_t *, uint64_t * ) = 0;
    virtual bool DownloadItem( uint64_t, bool ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003
{
#ifdef __cplusplus
    virtual ~u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003(  ) = 0;
    virtual bool Init(  ) = 0;
    virtual bool Shutdown(  ) = 0;
    virtual uint64_t CreateBrowser( const char *, const char * ) = 0;
    virtual void RemoveBrowser( uint32_t ) = 0;
    virtual void LoadURL( uint32_t, const char *, const char * ) = 0;
    virtual void SetSize( uint32_t, uint32_t, uint32_t ) = 0;
    virtual void StopLoad( uint32_t ) = 0;
    virtual void Reload( uint32_t ) = 0;
    virtual void GoBack( uint32_t ) = 0;
    virtual void GoForward( uint32_t ) = 0;
    virtual void AddHeader( uint32_t, const char *, const char * ) = 0;
    virtual void ExecuteJavascript( uint32_t, const char * ) = 0;
    virtual void MouseUp( uint32_t, uint32_t ) = 0;
    virtual void MouseDown( uint32_t, uint32_t ) = 0;
    virtual void MouseDoubleClick( uint32_t, uint32_t ) = 0;
    virtual void MouseMove( uint32_t, int32_t, int32_t ) = 0;
    virtual void MouseWheel( uint32_t, int32_t ) = 0;
    virtual void KeyDown( uint32_t, uint32_t, uint32_t ) = 0;
    virtual void KeyUp( uint32_t, uint32_t, uint32_t ) = 0;
    virtual void KeyChar( uint32_t, uint32_t, uint32_t ) = 0;
    virtual void SetHorizontalScroll( uint32_t, uint32_t ) = 0;
    virtual void SetVerticalScroll( uint32_t, uint32_t ) = 0;
    virtual void SetKeyFocus( uint32_t, bool ) = 0;
    virtual void ViewSource( uint32_t ) = 0;
    virtual void CopyToClipboard( uint32_t ) = 0;
    virtual void PasteFromClipboard( uint32_t ) = 0;
    virtual void Find( uint32_t, const char *, bool, bool ) = 0;
    virtual void StopFind( uint32_t ) = 0;
    virtual void GetLinkAtPosition( uint32_t, int32_t, int32_t ) = 0;
    virtual void SetCookie( const char *, const char *, const char *, const char *, uint32_t, bool, bool ) = 0;
    virtual void SetPageScaleFactor( uint32_t, float, int32_t, int32_t ) = 0;
    virtual void SetBackgroundMode( uint32_t, bool ) = 0;
    virtual void AllowStartRequest( uint32_t, bool ) = 0;
    virtual void JSDialogResponse( uint32_t, bool ) = 0;
    virtual void FileLoadDialogResponse( uint32_t, const char ** ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006
{
#ifdef __cplusplus
    virtual uint64_t CreateQueryUserUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint64_t CreateQueryAllUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint64_t CreateQueryUGCDetailsRequest( uint64_t *, uint32_t ) = 0;
    virtual uint64_t SendQueryUGCRequest( uint64_t ) = 0;
    virtual bool GetQueryUGCResult( uint64_t, uint32_t, u_SteamUGCDetails_t_128x * ) = 0;
    virtual bool GetQueryUGCPreviewURL( uint64_t, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCMetadata( uint64_t, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCChildren( uint64_t, uint32_t, uint64_t *, uint32_t ) = 0;
    virtual bool GetQueryUGCStatistic( uint64_t, uint32_t, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetQueryUGCNumAdditionalPreviews( uint64_t, uint32_t ) = 0;
    virtual bool GetQueryUGCAdditionalPreview( uint64_t, uint32_t, uint32_t, char *, uint32_t, bool * ) = 0;
    virtual bool ReleaseQueryUGCRequest( uint64_t ) = 0;
    virtual bool AddRequiredTag( uint64_t, const char * ) = 0;
    virtual bool AddExcludedTag( uint64_t, const char * ) = 0;
    virtual bool SetReturnLongDescription( uint64_t, bool ) = 0;
    virtual bool SetReturnMetadata( uint64_t, bool ) = 0;
    virtual bool SetReturnChildren( uint64_t, bool ) = 0;
    virtual bool SetReturnAdditionalPreviews( uint64_t, bool ) = 0;
    virtual bool SetReturnTotalOnly( uint64_t, bool ) = 0;
    virtual bool SetLanguage( uint64_t, const char * ) = 0;
    virtual bool SetAllowCachedResponse( uint64_t, uint32_t ) = 0;
    virtual bool SetCloudFileNameFilter( uint64_t, const char * ) = 0;
    virtual bool SetMatchAnyTag( uint64_t, bool ) = 0;
    virtual bool SetSearchText( uint64_t, const char * ) = 0;
    virtual bool SetRankedByTrendDays( uint64_t, uint32_t ) = 0;
    virtual uint64_t RequestUGCDetails( uint64_t, uint32_t ) = 0;
    virtual uint64_t CreateItem( uint32_t, uint32_t ) = 0;
    virtual uint64_t StartItemUpdate( uint32_t, uint64_t ) = 0;
    virtual bool SetItemTitle( uint64_t, const char * ) = 0;
    virtual bool SetItemDescription( uint64_t, const char * ) = 0;
    virtual bool SetItemUpdateLanguage( uint64_t, const char * ) = 0;
    virtual bool SetItemMetadata( uint64_t, const char * ) = 0;
    virtual bool SetItemVisibility( uint64_t, uint32_t ) = 0;
    virtual bool SetItemTags( uint64_t, const u_SteamParamStringArray_t * ) = 0;
    virtual bool SetItemContent( uint64_t, const char * ) = 0;
    virtual bool SetItemPreview( uint64_t, const char * ) = 0;
    virtual uint64_t SubmitItemUpdate( uint64_t, const char * ) = 0;
    virtual uint32_t GetItemUpdateProgress( uint64_t, uint64_t *, uint64_t * ) = 0;
    virtual uint64_t SetUserItemVote( uint64_t, bool ) = 0;
    virtual uint64_t GetUserItemVote( uint64_t ) = 0;
    virtual uint64_t AddItemToFavorites( uint32_t, uint64_t ) = 0;
    virtual uint64_t RemoveItemFromFavorites( uint32_t, uint64_t ) = 0;
    virtual uint64_t SubscribeItem( uint64_t ) = 0;
    virtual uint64_t UnsubscribeItem( uint64_t ) = 0;
    virtual uint32_t GetNumSubscribedItems(  ) = 0;
    virtual uint32_t GetSubscribedItems( uint64_t *, uint32_t ) = 0;
    virtual uint32_t GetItemState( uint64_t ) = 0;
    virtual bool GetItemInstallInfo( uint64_t, uint64_t *, char *, uint32_t, uint32_t * ) = 0;
    virtual bool GetItemDownloadInfo( uint64_t, uint64_t *, uint64_t * ) = 0;
    virtual bool DownloadItem( uint64_t, bool ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION007
{
#ifdef __cplusplus
    virtual uint64_t CreateQueryUserUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint64_t CreateQueryAllUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint64_t CreateQueryUGCDetailsRequest( uint64_t *, uint32_t ) = 0;
    virtual uint64_t SendQueryUGCRequest( uint64_t ) = 0;
    virtual bool GetQueryUGCResult( uint64_t, uint32_t, u_SteamUGCDetails_t_128x * ) = 0;
    virtual bool GetQueryUGCPreviewURL( uint64_t, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCMetadata( uint64_t, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCChildren( uint64_t, uint32_t, uint64_t *, uint32_t ) = 0;
    virtual bool GetQueryUGCStatistic( uint64_t, uint32_t, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetQueryUGCNumAdditionalPreviews( uint64_t, uint32_t ) = 0;
    virtual bool GetQueryUGCAdditionalPreview( uint64_t, uint32_t, uint32_t, char *, uint32_t, bool * ) = 0;
    virtual uint32_t GetQueryUGCNumKeyValueTags( uint64_t, uint32_t ) = 0;
    virtual bool GetQueryUGCKeyValueTag( uint64_t, uint32_t, uint32_t, char *, uint32_t, char *, uint32_t ) = 0;
    virtual bool ReleaseQueryUGCRequest( uint64_t ) = 0;
    virtual bool AddRequiredTag( uint64_t, const char * ) = 0;
    virtual bool AddExcludedTag( uint64_t, const char * ) = 0;
    virtual bool SetReturnKeyValueTags( uint64_t, bool ) = 0;
    virtual bool SetReturnLongDescription( uint64_t, bool ) = 0;
    virtual bool SetReturnMetadata( uint64_t, bool ) = 0;
    virtual bool SetReturnChildren( uint64_t, bool ) = 0;
    virtual bool SetReturnAdditionalPreviews( uint64_t, bool ) = 0;
    virtual bool SetReturnTotalOnly( uint64_t, bool ) = 0;
    virtual bool SetLanguage( uint64_t, const char * ) = 0;
    virtual bool SetAllowCachedResponse( uint64_t, uint32_t ) = 0;
    virtual bool SetCloudFileNameFilter( uint64_t, const char * ) = 0;
    virtual bool SetMatchAnyTag( uint64_t, bool ) = 0;
    virtual bool SetSearchText( uint64_t, const char * ) = 0;
    virtual bool SetRankedByTrendDays( uint64_t, uint32_t ) = 0;
    virtual bool AddRequiredKeyValueTag( uint64_t, const char *, const char * ) = 0;
    virtual uint64_t RequestUGCDetails( uint64_t, uint32_t ) = 0;
    virtual uint64_t CreateItem( uint32_t, uint32_t ) = 0;
    virtual uint64_t StartItemUpdate( uint32_t, uint64_t ) = 0;
    virtual bool SetItemTitle( uint64_t, const char * ) = 0;
    virtual bool SetItemDescription( uint64_t, const char * ) = 0;
    virtual bool SetItemUpdateLanguage( uint64_t, const char * ) = 0;
    virtual bool SetItemMetadata( uint64_t, const char * ) = 0;
    virtual bool SetItemVisibility( uint64_t, uint32_t ) = 0;
    virtual bool SetItemTags( uint64_t, const u_SteamParamStringArray_t * ) = 0;
    virtual bool SetItemContent( uint64_t, const char * ) = 0;
    virtual bool SetItemPreview( uint64_t, const char * ) = 0;
    virtual bool RemoveItemKeyValueTags( uint64_t, const char * ) = 0;
    virtual bool AddItemKeyValueTag( uint64_t, const char *, const char * ) = 0;
    virtual uint64_t SubmitItemUpdate( uint64_t, const char * ) = 0;
    virtual uint32_t GetItemUpdateProgress( uint64_t, uint64_t *, uint64_t * ) = 0;
    virtual uint64_t SetUserItemVote( uint64_t, bool ) = 0;
    virtual uint64_t GetUserItemVote( uint64_t ) = 0;
    virtual uint64_t AddItemToFavorites( uint32_t, uint64_t ) = 0;
    virtual uint64_t RemoveItemFromFavorites( uint32_t, uint64_t ) = 0;
    virtual uint64_t SubscribeItem( uint64_t ) = 0;
    virtual uint64_t UnsubscribeItem( uint64_t ) = 0;
    virtual uint32_t GetNumSubscribedItems(  ) = 0;
    virtual uint32_t GetSubscribedItems( uint64_t *, uint32_t ) = 0;
    virtual uint32_t GetItemState( uint64_t ) = 0;
    virtual bool GetItemInstallInfo( uint64_t, uint64_t *, char *, uint32_t, uint32_t * ) = 0;
    virtual bool GetItemDownloadInfo( uint64_t, uint64_t *, uint64_t * ) = 0;
    virtual bool DownloadItem( uint64_t, bool ) = 0;
    virtual bool BInitWorkshopForGameServer( uint32_t, const char * ) = 0;
    virtual void SuspendDownloads( bool ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013
{
#ifdef __cplusplus
    virtual bool FileWrite( const char *, const void *, int32_t ) = 0;
    virtual int32_t FileRead( const char *, void *, int32_t ) = 0;
    virtual uint64_t FileWriteAsync( const char *, const void *, uint32_t ) = 0;
    virtual uint64_t FileReadAsync( const char *, uint32_t, uint32_t ) = 0;
    virtual bool FileReadAsyncComplete( uint64_t, void *, uint32_t ) = 0;
    virtual bool FileForget( const char * ) = 0;
    virtual bool FileDelete( const char * ) = 0;
    virtual uint64_t FileShare( const char * ) = 0;
    virtual bool SetSyncPlatforms( const char *, uint32_t ) = 0;
    virtual uint64_t FileWriteStreamOpen( const char * ) = 0;
    virtual bool FileWriteStreamWriteChunk( uint64_t, const void *, int32_t ) = 0;
    virtual bool FileWriteStreamClose( uint64_t ) = 0;
    virtual bool FileWriteStreamCancel( uint64_t ) = 0;
    virtual bool FileExists( const char * ) = 0;
    virtual bool FilePersisted( const char * ) = 0;
    virtual int32_t GetFileSize( const char * ) = 0;
    virtual int64_t GetFileTimestamp( const char * ) = 0;
    virtual uint32_t GetSyncPlatforms( const char * ) = 0;
    virtual int32_t GetFileCount(  ) = 0;
    virtual const char * GetFileNameAndSize( int32_t, int32_t * ) = 0;
    virtual bool GetQuota( int32_t *, int32_t * ) = 0;
    virtual bool IsCloudEnabledForAccount(  ) = 0;
    virtual bool IsCloudEnabledForApp(  ) = 0;
    virtual void SetCloudEnabledForApp( bool ) = 0;
    virtual uint64_t UGCDownload( uint64_t, uint32_t ) = 0;
    virtual bool GetUGCDownloadProgress( uint64_t, int32_t *, int32_t * ) = 0;
    virtual bool GetUGCDetails( uint64_t, uint32_t *, char **, int32_t *, CSteamID * ) = 0;
    virtual int32_t UGCRead( uint64_t, void *, int32_t, uint32_t, uint32_t ) = 0;
    virtual int32_t GetCachedUGCCount(  ) = 0;
    virtual uint64_t GetCachedUGCHandle( int32_t ) = 0;
    virtual uint64_t PublishWorkshopFile( const char *, const char *, uint32_t, const char *, const char *, uint32_t, u_SteamParamStringArray_t *, uint32_t ) = 0;
    virtual uint64_t CreatePublishedFileUpdateRequest( uint64_t ) = 0;
    virtual bool UpdatePublishedFileFile( uint64_t, const char * ) = 0;
    virtual bool UpdatePublishedFilePreviewFile( uint64_t, const char * ) = 0;
    virtual bool UpdatePublishedFileTitle( uint64_t, const char * ) = 0;
    virtual bool UpdatePublishedFileDescription( uint64_t, const char * ) = 0;
    virtual bool UpdatePublishedFileVisibility( uint64_t, uint32_t ) = 0;
    virtual bool UpdatePublishedFileTags( uint64_t, u_SteamParamStringArray_t * ) = 0;
    virtual uint64_t CommitPublishedFileUpdate( uint64_t ) = 0;
    virtual uint64_t GetPublishedFileDetails( uint64_t, uint32_t ) = 0;
    virtual uint64_t DeletePublishedFile( uint64_t ) = 0;
    virtual uint64_t EnumerateUserPublishedFiles( uint32_t ) = 0;
    virtual uint64_t SubscribePublishedFile( uint64_t ) = 0;
    virtual uint64_t EnumerateUserSubscribedFiles( uint32_t ) = 0;
    virtual uint64_t UnsubscribePublishedFile( uint64_t ) = 0;
    virtual bool UpdatePublishedFileSetChangeDescription( uint64_t, const char * ) = 0;
    virtual uint64_t GetPublishedItemVoteDetails( uint64_t ) = 0;
    virtual uint64_t UpdateUserPublishedItemVote( uint64_t, bool ) = 0;
    virtual uint64_t GetUserPublishedItemVoteDetails( uint64_t ) = 0;
    virtual uint64_t EnumerateUserSharedWorkshopFiles( CSteamID, uint32_t, u_SteamParamStringArray_t *, u_SteamParamStringArray_t * ) = 0;
    virtual uint64_t PublishVideo( uint32_t, const char *, const char *, const char *, uint32_t, const char *, const char *, uint32_t, u_SteamParamStringArray_t * ) = 0;
    virtual uint64_t SetUserPublishedFileAction( uint64_t, uint32_t ) = 0;
    virtual uint64_t EnumeratePublishedFilesByUserAction( uint32_t, uint32_t ) = 0;
    virtual uint64_t EnumeratePublishedWorkshopFiles( uint32_t, uint32_t, uint32_t, uint32_t, u_SteamParamStringArray_t *, u_SteamParamStringArray_t * ) = 0;
    virtual uint64_t UGCDownloadToLocation( uint64_t, const char *, uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamController_SteamController003
{
#ifdef __cplusplus
    virtual bool Init(  ) = 0;
    virtual bool Shutdown(  ) = 0;
    virtual void RunFrame(  ) = 0;
    virtual int32_t GetConnectedControllers( uint64_t * ) = 0;
    virtual bool ShowBindingPanel( uint64_t ) = 0;
    virtual uint64_t GetActionSetHandle( const char * ) = 0;
    virtual void ActivateActionSet( uint64_t, uint64_t ) = 0;
    virtual uint64_t GetCurrentActionSet( uint64_t ) = 0;
    virtual uint64_t GetDigitalActionHandle( const char * ) = 0;
    virtual ControllerDigitalActionData_t GetDigitalActionData( uint64_t, uint64_t ) = 0;
    virtual int32_t GetDigitalActionOrigins( uint64_t, uint64_t, uint64_t, uint32_t * ) = 0;
    virtual uint64_t GetAnalogActionHandle( const char * ) = 0;
    virtual ControllerAnalogActionData_t GetAnalogActionData( uint64_t, uint64_t ) = 0;
    virtual int32_t GetAnalogActionOrigins( uint64_t, uint64_t, uint64_t, uint32_t * ) = 0;
    virtual void StopAnalogActionMomentum( uint64_t, uint64_t ) = 0;
    virtual void TriggerHapticPulse( uint64_t, uint32_t, uint16_t ) = 0;
    virtual void TriggerRepeatedHapticPulse( uint64_t, uint32_t, uint16_t, uint16_t, uint16_t, uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUser_SteamUser019
{
#ifdef __cplusplus
    virtual int32_t GetHSteamUser(  ) = 0;
    virtual bool BLoggedOn(  ) = 0;
    virtual CSteamID GetSteamID(  ) = 0;
    virtual int32_t InitiateGameConnection( void *, int32_t, CSteamID, uint32_t, uint16_t, bool ) = 0;
    virtual void TerminateGameConnection( uint32_t, uint16_t ) = 0;
    virtual void TrackAppUsageEvent( CGameID, int32_t, const char * ) = 0;
    virtual bool GetUserDataFolder( char *, int32_t ) = 0;
    virtual void StartVoiceRecording(  ) = 0;
    virtual void StopVoiceRecording(  ) = 0;
    virtual uint32_t GetAvailableVoice( uint32_t *, uint32_t *, uint32_t ) = 0;
    virtual uint32_t GetVoice( bool, void *, uint32_t, uint32_t *, bool, void *, uint32_t, uint32_t *, uint32_t ) = 0;
    virtual uint32_t DecompressVoice( const void *, uint32_t, void *, uint32_t, uint32_t *, uint32_t ) = 0;
    virtual uint32_t GetVoiceOptimalSampleRate(  ) = 0;
    virtual uint32_t GetAuthSessionTicket( void *, int32_t, uint32_t * ) = 0;
    virtual uint32_t BeginAuthSession( const void *, int32_t, CSteamID ) = 0;
    virtual void EndAuthSession( CSteamID ) = 0;
    virtual void CancelAuthTicket( uint32_t ) = 0;
    virtual uint32_t UserHasLicenseForApp( CSteamID, uint32_t ) = 0;
    virtual bool BIsBehindNAT(  ) = 0;
    virtual void AdvertiseGame( CSteamID, uint32_t, uint16_t ) = 0;
    virtual uint64_t RequestEncryptedAppTicket( void *, int32_t ) = 0;
    virtual bool GetEncryptedAppTicket( void *, int32_t, uint32_t * ) = 0;
    virtual int32_t GetGameBadgeLevel( int32_t, bool ) = 0;
    virtual int32_t GetPlayerSteamLevel(  ) = 0;
    virtual uint64_t RequestStoreAuthURL( const char * ) = 0;
    virtual bool BIsPhoneVerified(  ) = 0;
    virtual bool BIsTwoFactorEnabled(  ) = 0;
    virtual bool BIsPhoneIdentifying(  ) = 0;
    virtual bool BIsPhoneRequiringVerification(  ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUtils_SteamUtils008
{
#ifdef __cplusplus
    virtual uint32_t GetSecondsSinceAppActive(  ) = 0;
    virtual uint32_t GetSecondsSinceComputerActive(  ) = 0;
    virtual uint32_t GetConnectedUniverse(  ) = 0;
    virtual uint32_t GetServerRealTime(  ) = 0;
    virtual const char * GetIPCountry(  ) = 0;
    virtual bool GetImageSize( int32_t, uint32_t *, uint32_t * ) = 0;
    virtual bool GetImageRGBA( int32_t, uint8_t *, int32_t ) = 0;
    virtual bool GetCSERIPPort( uint32_t *, uint16_t * ) = 0;
    virtual uint8_t GetCurrentBatteryPower(  ) = 0;
    virtual uint32_t GetAppID(  ) = 0;
    virtual void SetOverlayNotificationPosition( uint32_t ) = 0;
    virtual bool IsAPICallCompleted( uint64_t, bool * ) = 0;
    virtual uint32_t GetAPICallFailureReason( uint64_t ) = 0;
    virtual bool GetAPICallResult( uint64_t, void *, int32_t, int32_t, bool * ) = 0;
    virtual void RunFrame(  ) = 0;
    virtual uint32_t GetIPCCallCount(  ) = 0;
    virtual void SetWarningMessageHook( void (*U_CDECL )(int32_t, const char *) ) = 0;
    virtual bool IsOverlayEnabled(  ) = 0;
    virtual bool BOverlayNeedsPresent(  ) = 0;
    virtual uint64_t CheckFileSignature( const char * ) = 0;
    virtual bool ShowGamepadTextInput( uint32_t, uint32_t, const char *, uint32_t, const char * ) = 0;
    virtual uint32_t GetEnteredGamepadTextLength(  ) = 0;
    virtual bool GetEnteredGamepadTextInput( char *, uint32_t ) = 0;
    virtual const char * GetSteamUILanguage(  ) = 0;
    virtual bool IsSteamRunningInVR(  ) = 0;
    virtual void SetOverlayNotificationInset( int32_t, int32_t ) = 0;
    virtual bool IsSteamInBigPictureMode(  ) = 0;
    virtual void StartVRDashboard(  ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008
{
#ifdef __cplusplus
    virtual bool BIsSubscribed(  ) = 0;
    virtual bool BIsLowViolence(  ) = 0;
    virtual bool BIsCybercafe(  ) = 0;
    virtual bool BIsVACBanned(  ) = 0;
    virtual const char * GetCurrentGameLanguage(  ) = 0;
    virtual const char * GetAvailableGameLanguages(  ) = 0;
    virtual bool BIsSubscribedApp( uint32_t ) = 0;
    virtual bool BIsDlcInstalled( uint32_t ) = 0;
    virtual uint32_t GetEarliestPurchaseUnixTime( uint32_t ) = 0;
    virtual bool BIsSubscribedFromFreeWeekend(  ) = 0;
    virtual int32_t GetDLCCount(  ) = 0;
    virtual bool BGetDLCDataByIndex( int32_t, uint32_t *, bool *, char *, int32_t ) = 0;
    virtual void InstallDLC( uint32_t ) = 0;
    virtual void UninstallDLC( uint32_t ) = 0;
    virtual void RequestAppProofOfPurchaseKey( uint32_t ) = 0;
    virtual bool GetCurrentBetaName( char *, int32_t ) = 0;
    virtual bool MarkContentCorrupt( bool ) = 0;
    virtual uint32_t GetInstalledDepots( uint32_t, uint32_t *, uint32_t ) = 0;
    virtual uint32_t GetAppInstallDir( uint32_t, char *, uint32_t ) = 0;
    virtual bool BIsAppInstalled( uint32_t ) = 0;
    virtual CSteamID GetAppOwner(  ) = 0;
    virtual const char * GetLaunchQueryParam( const char * ) = 0;
    virtual bool GetDlcDownloadProgress( uint32_t, uint64_t *, uint64_t * ) = 0;
    virtual int32_t GetAppBuildId(  ) = 0;
    virtual void RequestAllProofOfPurchaseKeys(  ) = 0;
    virtual uint64_t GetFileDetails( const char * ) = 0;
    virtual int32_t GetLaunchCommandLine( char *, int32_t ) = 0;
    virtual bool BIsSubscribedFromFamilySharing(  ) = 0;
    virtual bool BIsTimedTrial( uint32_t *, uint32_t * ) = 0;
    virtual bool SetDlcContext( uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION008
{
#ifdef __cplusplus
    virtual uint64_t CreateQueryUserUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint64_t CreateQueryAllUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint64_t CreateQueryUGCDetailsRequest( uint64_t *, uint32_t ) = 0;
    virtual uint64_t SendQueryUGCRequest( uint64_t ) = 0;
    virtual bool GetQueryUGCResult( uint64_t, uint32_t, u_SteamUGCDetails_t_128x * ) = 0;
    virtual bool GetQueryUGCPreviewURL( uint64_t, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCMetadata( uint64_t, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCChildren( uint64_t, uint32_t, uint64_t *, uint32_t ) = 0;
    virtual bool GetQueryUGCStatistic( uint64_t, uint32_t, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetQueryUGCNumAdditionalPreviews( uint64_t, uint32_t ) = 0;
    virtual bool GetQueryUGCAdditionalPreview( uint64_t, uint32_t, uint32_t, char *, uint32_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetQueryUGCNumKeyValueTags( uint64_t, uint32_t ) = 0;
    virtual bool GetQueryUGCKeyValueTag( uint64_t, uint32_t, uint32_t, char *, uint32_t, char *, uint32_t ) = 0;
    virtual bool ReleaseQueryUGCRequest( uint64_t ) = 0;
    virtual bool AddRequiredTag( uint64_t, const char * ) = 0;
    virtual bool AddExcludedTag( uint64_t, const char * ) = 0;
    virtual bool SetReturnKeyValueTags( uint64_t, bool ) = 0;
    virtual bool SetReturnLongDescription( uint64_t, bool ) = 0;
    virtual bool SetReturnMetadata( uint64_t, bool ) = 0;
    virtual bool SetReturnChildren( uint64_t, bool ) = 0;
    virtual bool SetReturnAdditionalPreviews( uint64_t, bool ) = 0;
    virtual bool SetReturnTotalOnly( uint64_t, bool ) = 0;
    virtual bool SetLanguage( uint64_t, const char * ) = 0;
    virtual bool SetAllowCachedResponse( uint64_t, uint32_t ) = 0;
    virtual bool SetCloudFileNameFilter( uint64_t, const char * ) = 0;
    virtual bool SetMatchAnyTag( uint64_t, bool ) = 0;
    virtual bool SetSearchText( uint64_t, const char * ) = 0;
    virtual bool SetRankedByTrendDays( uint64_t, uint32_t ) = 0;
    virtual bool AddRequiredKeyValueTag( uint64_t, const char *, const char * ) = 0;
    virtual uint64_t RequestUGCDetails( uint64_t, uint32_t ) = 0;
    virtual uint64_t CreateItem( uint32_t, uint32_t ) = 0;
    virtual uint64_t StartItemUpdate( uint32_t, uint64_t ) = 0;
    virtual bool SetItemTitle( uint64_t, const char * ) = 0;
    virtual bool SetItemDescription( uint64_t, const char * ) = 0;
    virtual bool SetItemUpdateLanguage( uint64_t, const char * ) = 0;
    virtual bool SetItemMetadata( uint64_t, const char * ) = 0;
    virtual bool SetItemVisibility( uint64_t, uint32_t ) = 0;
    virtual bool SetItemTags( uint64_t, const u_SteamParamStringArray_t * ) = 0;
    virtual bool SetItemContent( uint64_t, const char * ) = 0;
    virtual bool SetItemPreview( uint64_t, const char * ) = 0;
    virtual bool RemoveItemKeyValueTags( uint64_t, const char * ) = 0;
    virtual bool AddItemKeyValueTag( uint64_t, const char *, const char * ) = 0;
    virtual bool AddItemPreviewFile( uint64_t, const char *, uint32_t ) = 0;
    virtual bool AddItemPreviewVideo( uint64_t, const char * ) = 0;
    virtual bool UpdateItemPreviewFile( uint64_t, uint32_t, const char * ) = 0;
    virtual bool UpdateItemPreviewVideo( uint64_t, uint32_t, const char * ) = 0;
    virtual bool RemoveItemPreview( uint64_t, uint32_t ) = 0;
    virtual uint64_t SubmitItemUpdate( uint64_t, const char * ) = 0;
    virtual uint32_t GetItemUpdateProgress( uint64_t, uint64_t *, uint64_t * ) = 0;
    virtual uint64_t SetUserItemVote( uint64_t, bool ) = 0;
    virtual uint64_t GetUserItemVote( uint64_t ) = 0;
    virtual uint64_t AddItemToFavorites( uint32_t, uint64_t ) = 0;
    virtual uint64_t RemoveItemFromFavorites( uint32_t, uint64_t ) = 0;
    virtual uint64_t SubscribeItem( uint64_t ) = 0;
    virtual uint64_t UnsubscribeItem( uint64_t ) = 0;
    virtual uint32_t GetNumSubscribedItems(  ) = 0;
    virtual uint32_t GetSubscribedItems( uint64_t *, uint32_t ) = 0;
    virtual uint32_t GetItemState( uint64_t ) = 0;
    virtual bool GetItemInstallInfo( uint64_t, uint64_t *, char *, uint32_t, uint32_t * ) = 0;
    virtual bool GetItemDownloadInfo( uint64_t, uint64_t *, uint64_t * ) = 0;
    virtual bool DownloadItem( uint64_t, bool ) = 0;
    virtual bool BInitWorkshopForGameServer( uint32_t, const char * ) = 0;
    virtual void SuspendDownloads( bool ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014
{
#ifdef __cplusplus
    virtual bool FileWrite( const char *, const void *, int32_t ) = 0;
    virtual int32_t FileRead( const char *, void *, int32_t ) = 0;
    virtual uint64_t FileWriteAsync( const char *, const void *, uint32_t ) = 0;
    virtual uint64_t FileReadAsync( const char *, uint32_t, uint32_t ) = 0;
    virtual bool FileReadAsyncComplete( uint64_t, void *, uint32_t ) = 0;
    virtual bool FileForget( const char * ) = 0;
    virtual bool FileDelete( const char * ) = 0;
    virtual uint64_t FileShare( const char * ) = 0;
    virtual bool SetSyncPlatforms( const char *, uint32_t ) = 0;
    virtual uint64_t FileWriteStreamOpen( const char * ) = 0;
    virtual bool FileWriteStreamWriteChunk( uint64_t, const void *, int32_t ) = 0;
    virtual bool FileWriteStreamClose( uint64_t ) = 0;
    virtual bool FileWriteStreamCancel( uint64_t ) = 0;
    virtual bool FileExists( const char * ) = 0;
    virtual bool FilePersisted( const char * ) = 0;
    virtual int32_t GetFileSize( const char * ) = 0;
    virtual int64_t GetFileTimestamp( const char * ) = 0;
    virtual uint32_t GetSyncPlatforms( const char * ) = 0;
    virtual int32_t GetFileCount(  ) = 0;
    virtual const char * GetFileNameAndSize( int32_t, int32_t * ) = 0;
    virtual bool GetQuota( uint64_t *, uint64_t * ) = 0;
    virtual bool IsCloudEnabledForAccount(  ) = 0;
    virtual bool IsCloudEnabledForApp(  ) = 0;
    virtual void SetCloudEnabledForApp( bool ) = 0;
    virtual uint64_t UGCDownload( uint64_t, uint32_t ) = 0;
    virtual bool GetUGCDownloadProgress( uint64_t, int32_t *, int32_t * ) = 0;
    virtual bool GetUGCDetails( uint64_t, uint32_t *, char **, int32_t *, CSteamID * ) = 0;
    virtual int32_t UGCRead( uint64_t, void *, int32_t, uint32_t, uint32_t ) = 0;
    virtual int32_t GetCachedUGCCount(  ) = 0;
    virtual uint64_t GetCachedUGCHandle( int32_t ) = 0;
    virtual uint64_t PublishWorkshopFile( const char *, const char *, uint32_t, const char *, const char *, uint32_t, u_SteamParamStringArray_t *, uint32_t ) = 0;
    virtual uint64_t CreatePublishedFileUpdateRequest( uint64_t ) = 0;
    virtual bool UpdatePublishedFileFile( uint64_t, const char * ) = 0;
    virtual bool UpdatePublishedFilePreviewFile( uint64_t, const char * ) = 0;
    virtual bool UpdatePublishedFileTitle( uint64_t, const char * ) = 0;
    virtual bool UpdatePublishedFileDescription( uint64_t, const char * ) = 0;
    virtual bool UpdatePublishedFileVisibility( uint64_t, uint32_t ) = 0;
    virtual bool UpdatePublishedFileTags( uint64_t, u_SteamParamStringArray_t * ) = 0;
    virtual uint64_t CommitPublishedFileUpdate( uint64_t ) = 0;
    virtual uint64_t GetPublishedFileDetails( uint64_t, uint32_t ) = 0;
    virtual uint64_t DeletePublishedFile( uint64_t ) = 0;
    virtual uint64_t EnumerateUserPublishedFiles( uint32_t ) = 0;
    virtual uint64_t SubscribePublishedFile( uint64_t ) = 0;
    virtual uint64_t EnumerateUserSubscribedFiles( uint32_t ) = 0;
    virtual uint64_t UnsubscribePublishedFile( uint64_t ) = 0;
    virtual bool UpdatePublishedFileSetChangeDescription( uint64_t, const char * ) = 0;
    virtual uint64_t GetPublishedItemVoteDetails( uint64_t ) = 0;
    virtual uint64_t UpdateUserPublishedItemVote( uint64_t, bool ) = 0;
    virtual uint64_t GetUserPublishedItemVoteDetails( uint64_t ) = 0;
    virtual uint64_t EnumerateUserSharedWorkshopFiles( CSteamID, uint32_t, u_SteamParamStringArray_t *, u_SteamParamStringArray_t * ) = 0;
    virtual uint64_t PublishVideo( uint32_t, const char *, const char *, const char *, uint32_t, const char *, const char *, uint32_t, u_SteamParamStringArray_t * ) = 0;
    virtual uint64_t SetUserPublishedFileAction( uint64_t, uint32_t ) = 0;
    virtual uint64_t EnumeratePublishedFilesByUserAction( uint32_t, uint32_t ) = 0;
    virtual uint64_t EnumeratePublishedWorkshopFiles( uint32_t, uint32_t, uint32_t, uint32_t, u_SteamParamStringArray_t *, u_SteamParamStringArray_t * ) = 0;
    virtual uint64_t UGCDownloadToLocation( uint64_t, const char *, uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003
{
#ifdef __cplusplus
    virtual uint32_t WriteScreenshot( void *, uint32_t, int32_t, int32_t ) = 0;
    virtual uint32_t AddScreenshotToLibrary( const char *, const char *, int32_t, int32_t ) = 0;
    virtual void TriggerScreenshot(  ) = 0;
    virtual void HookScreenshots( bool ) = 0;
    virtual bool SetLocation( uint32_t, const char * ) = 0;
    virtual bool TagUser( uint32_t, CSteamID ) = 0;
    virtual bool TagPublishedFile( uint32_t, uint64_t ) = 0;
    virtual bool IsScreenshotsHooked(  ) = 0;
    virtual uint32_t AddVRScreenshotToLibrary( uint32_t, const char *, const char * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamController_SteamController004
{
#ifdef __cplusplus
    virtual bool Init(  ) = 0;
    virtual bool Shutdown(  ) = 0;
    virtual void RunFrame(  ) = 0;
    virtual int32_t GetConnectedControllers( uint64_t * ) = 0;
    virtual bool ShowBindingPanel( uint64_t ) = 0;
    virtual uint64_t GetActionSetHandle( const char * ) = 0;
    virtual void ActivateActionSet( uint64_t, uint64_t ) = 0;
    virtual uint64_t GetCurrentActionSet( uint64_t ) = 0;
    virtual uint64_t GetDigitalActionHandle( const char * ) = 0;
    virtual ControllerDigitalActionData_t GetDigitalActionData( uint64_t, uint64_t ) = 0;
    virtual int32_t GetDigitalActionOrigins( uint64_t, uint64_t, uint64_t, uint32_t * ) = 0;
    virtual uint64_t GetAnalogActionHandle( const char * ) = 0;
    virtual ControllerAnalogActionData_t GetAnalogActionData( uint64_t, uint64_t ) = 0;
    virtual int32_t GetAnalogActionOrigins( uint64_t, uint64_t, uint64_t, uint32_t * ) = 0;
    virtual void StopAnalogActionMomentum( uint64_t, uint64_t ) = 0;
    virtual void TriggerHapticPulse( uint64_t, uint32_t, uint16_t ) = 0;
    virtual void TriggerRepeatedHapticPulse( uint64_t, uint32_t, uint16_t, uint16_t, uint16_t, uint32_t ) = 0;
    virtual int32_t GetGamepadIndexForController( uint64_t ) = 0;
    virtual uint64_t GetControllerForGamepadIndex( int32_t ) = 0;
    virtual ControllerMotionData_t GetMotionData( uint64_t ) = 0;
    virtual bool ShowDigitalActionOrigins( uint64_t, uint64_t, float, float, float ) = 0;
    virtual bool ShowAnalogActionOrigins( uint64_t, uint64_t, float, float, float ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009
{
#ifdef __cplusplus
    virtual uint64_t CreateQueryUserUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint64_t CreateQueryAllUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint64_t CreateQueryUGCDetailsRequest( uint64_t *, uint32_t ) = 0;
    virtual uint64_t SendQueryUGCRequest( uint64_t ) = 0;
    virtual bool GetQueryUGCResult( uint64_t, uint32_t, u_SteamUGCDetails_t_128x * ) = 0;
    virtual bool GetQueryUGCPreviewURL( uint64_t, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCMetadata( uint64_t, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCChildren( uint64_t, uint32_t, uint64_t *, uint32_t ) = 0;
    virtual bool GetQueryUGCStatistic( uint64_t, uint32_t, uint32_t, uint64_t * ) = 0;
    virtual uint32_t GetQueryUGCNumAdditionalPreviews( uint64_t, uint32_t ) = 0;
    virtual bool GetQueryUGCAdditionalPreview( uint64_t, uint32_t, uint32_t, char *, uint32_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetQueryUGCNumKeyValueTags( uint64_t, uint32_t ) = 0;
    virtual bool GetQueryUGCKeyValueTag( uint64_t, uint32_t, uint32_t, char *, uint32_t, char *, uint32_t ) = 0;
    virtual bool ReleaseQueryUGCRequest( uint64_t ) = 0;
    virtual bool AddRequiredTag( uint64_t, const char * ) = 0;
    virtual bool AddExcludedTag( uint64_t, const char * ) = 0;
    virtual bool SetReturnOnlyIDs( uint64_t, bool ) = 0;
    virtual bool SetReturnKeyValueTags( uint64_t, bool ) = 0;
    virtual bool SetReturnLongDescription( uint64_t, bool ) = 0;
    virtual bool SetReturnMetadata( uint64_t, bool ) = 0;
    virtual bool SetReturnChildren( uint64_t, bool ) = 0;
    virtual bool SetReturnAdditionalPreviews( uint64_t, bool ) = 0;
    virtual bool SetReturnTotalOnly( uint64_t, bool ) = 0;
    virtual bool SetLanguage( uint64_t, const char * ) = 0;
    virtual bool SetAllowCachedResponse( uint64_t, uint32_t ) = 0;
    virtual bool SetCloudFileNameFilter( uint64_t, const char * ) = 0;
    virtual bool SetMatchAnyTag( uint64_t, bool ) = 0;
    virtual bool SetSearchText( uint64_t, const char * ) = 0;
    virtual bool SetRankedByTrendDays( uint64_t, uint32_t ) = 0;
    virtual bool AddRequiredKeyValueTag( uint64_t, const char *, const char * ) = 0;
    virtual uint64_t RequestUGCDetails( uint64_t, uint32_t ) = 0;
    virtual uint64_t CreateItem( uint32_t, uint32_t ) = 0;
    virtual uint64_t StartItemUpdate( uint32_t, uint64_t ) = 0;
    virtual bool SetItemTitle( uint64_t, const char * ) = 0;
    virtual bool SetItemDescription( uint64_t, const char * ) = 0;
    virtual bool SetItemUpdateLanguage( uint64_t, const char * ) = 0;
    virtual bool SetItemMetadata( uint64_t, const char * ) = 0;
    virtual bool SetItemVisibility( uint64_t, uint32_t ) = 0;
    virtual bool SetItemTags( uint64_t, const u_SteamParamStringArray_t * ) = 0;
    virtual bool SetItemContent( uint64_t, const char * ) = 0;
    virtual bool SetItemPreview( uint64_t, const char * ) = 0;
    virtual bool RemoveItemKeyValueTags( uint64_t, const char * ) = 0;
    virtual bool AddItemKeyValueTag( uint64_t, const char *, const char * ) = 0;
    virtual bool AddItemPreviewFile( uint64_t, const char *, uint32_t ) = 0;
    virtual bool AddItemPreviewVideo( uint64_t, const char * ) = 0;
    virtual bool UpdateItemPreviewFile( uint64_t, uint32_t, const char * ) = 0;
    virtual bool UpdateItemPreviewVideo( uint64_t, uint32_t, const char * ) = 0;
    virtual bool RemoveItemPreview( uint64_t, uint32_t ) = 0;
    virtual uint64_t SubmitItemUpdate( uint64_t, const char * ) = 0;
    virtual uint32_t GetItemUpdateProgress( uint64_t, uint64_t *, uint64_t * ) = 0;
    virtual uint64_t SetUserItemVote( uint64_t, bool ) = 0;
    virtual uint64_t GetUserItemVote( uint64_t ) = 0;
    virtual uint64_t AddItemToFavorites( uint32_t, uint64_t ) = 0;
    virtual uint64_t RemoveItemFromFavorites( uint32_t, uint64_t ) = 0;
    virtual uint64_t SubscribeItem( uint64_t ) = 0;
    virtual uint64_t UnsubscribeItem( uint64_t ) = 0;
    virtual uint32_t GetNumSubscribedItems(  ) = 0;
    virtual uint32_t GetSubscribedItems( uint64_t *, uint32_t ) = 0;
    virtual uint32_t GetItemState( uint64_t ) = 0;
    virtual bool GetItemInstallInfo( uint64_t, uint64_t *, char *, uint32_t, uint32_t * ) = 0;
    virtual bool GetItemDownloadInfo( uint64_t, uint64_t *, uint64_t * ) = 0;
    virtual bool DownloadItem( uint64_t, bool ) = 0;
    virtual bool BInitWorkshopForGameServer( uint32_t, const char * ) = 0;
    virtual void SuspendDownloads( bool ) = 0;
    virtual uint64_t StartPlaytimeTracking( uint64_t *, uint32_t ) = 0;
    virtual uint64_t StopPlaytimeTracking( uint64_t *, uint32_t ) = 0;
    virtual uint64_t StopPlaytimeTrackingForAllItems(  ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamController_SteamController005
{
#ifdef __cplusplus
    virtual bool Init(  ) = 0;
    virtual bool Shutdown(  ) = 0;
    virtual void RunFrame(  ) = 0;
    virtual int32_t GetConnectedControllers( uint64_t * ) = 0;
    virtual bool ShowBindingPanel( uint64_t ) = 0;
    virtual uint64_t GetActionSetHandle( const char * ) = 0;
    virtual void ActivateActionSet( uint64_t, uint64_t ) = 0;
    virtual uint64_t GetCurrentActionSet( uint64_t ) = 0;
    virtual uint64_t GetDigitalActionHandle( const char * ) = 0;
    virtual ControllerDigitalActionData_t GetDigitalActionData( uint64_t, uint64_t ) = 0;
    virtual int32_t GetDigitalActionOrigins( uint64_t, uint64_t, uint64_t, uint32_t * ) = 0;
    virtual uint64_t GetAnalogActionHandle( const char * ) = 0;
    virtual ControllerAnalogActionData_t GetAnalogActionData( uint64_t, uint64_t ) = 0;
    virtual int32_t GetAnalogActionOrigins( uint64_t, uint64_t, uint64_t, uint32_t * ) = 0;
    virtual void StopAnalogActionMomentum( uint64_t, uint64_t ) = 0;
    virtual void TriggerHapticPulse( uint64_t, uint32_t, uint16_t ) = 0;
    virtual void TriggerRepeatedHapticPulse( uint64_t, uint32_t, uint16_t, uint16_t, uint16_t, uint32_t ) = 0;
    virtual void TriggerVibration( uint64_t, uint16_t, uint16_t ) = 0;
    virtual void SetLEDColor( uint64_t, uint8_t, uint8_t, uint8_t, uint32_t ) = 0;
    virtual int32_t GetGamepadIndexForController( uint64_t ) = 0;
    virtual uint64_t GetControllerForGamepadIndex( int32_t ) = 0;
    virtual ControllerMotionData_t GetMotionData( uint64_t ) = 0;
    virtual bool ShowDigitalActionOrigins( uint64_t, uint64_t, float, float, float ) = 0;
    virtual bool ShowAnalogActionOrigins( uint64_t, uint64_t, float, float, float ) = 0;
    virtual const char * GetStringForActionOrigin( uint32_t ) = 0;
    virtual const char * GetGlyphForActionOrigin( uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUtils_SteamUtils009
{
#ifdef __cplusplus
    virtual uint32_t GetSecondsSinceAppActive(  ) = 0;
    virtual uint32_t GetSecondsSinceComputerActive(  ) = 0;
    virtual uint32_t GetConnectedUniverse(  ) = 0;
    virtual uint32_t GetServerRealTime(  ) = 0;
    virtual const char * GetIPCountry(  ) = 0;
    virtual bool GetImageSize( int32_t, uint32_t *, uint32_t * ) = 0;
    virtual bool GetImageRGBA( int32_t, uint8_t *, int32_t ) = 0;
    virtual bool GetCSERIPPort( uint32_t *, uint16_t * ) = 0;
    virtual uint8_t GetCurrentBatteryPower(  ) = 0;
    virtual uint32_t GetAppID(  ) = 0;
    virtual void SetOverlayNotificationPosition( uint32_t ) = 0;
    virtual bool IsAPICallCompleted( uint64_t, bool * ) = 0;
    virtual uint32_t GetAPICallFailureReason( uint64_t ) = 0;
    virtual bool GetAPICallResult( uint64_t, void *, int32_t, int32_t, bool * ) = 0;
    virtual void RunFrame(  ) = 0;
    virtual uint32_t GetIPCCallCount(  ) = 0;
    virtual void SetWarningMessageHook( void (*U_CDECL )(int32_t, const char *) ) = 0;
    virtual bool IsOverlayEnabled(  ) = 0;
    virtual bool BOverlayNeedsPresent(  ) = 0;
    virtual uint64_t CheckFileSignature( const char * ) = 0;
    virtual bool ShowGamepadTextInput( uint32_t, uint32_t, const char *, uint32_t, const char * ) = 0;
    virtual uint32_t GetEnteredGamepadTextLength(  ) = 0;
    virtual bool GetEnteredGamepadTextInput( char *, uint32_t ) = 0;
    virtual const char * GetSteamUILanguage(  ) = 0;
    virtual bool IsSteamRunningInVR(  ) = 0;
    virtual void SetOverlayNotificationInset( int32_t, int32_t ) = 0;
    virtual bool IsSteamInBigPictureMode(  ) = 0;
    virtual void StartVRDashboard(  ) = 0;
    virtual bool IsVRHeadsetStreamingEnabled(  ) = 0;
    virtual void SetVRHeadsetStreamingEnabled( bool ) = 0;
    virtual bool IsSteamChinaLauncher(  ) = 0;
    virtual bool InitFilterText(  ) = 0;
    virtual int32_t FilterText( char *, uint32_t, const char *, bool ) = 0;
    virtual uint32_t GetIPv6ConnectivityState( uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION010
{
#ifdef __cplusplus
    virtual uint64_t CreateQueryUserUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint64_t CreateQueryAllUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint64_t CreateQueryUGCDetailsRequest( uint64_t *, uint32_t ) = 0;
    virtual uint64_t SendQueryUGCRequest( uint64_t ) = 0;
    virtual bool GetQueryUGCResult( uint64_t, uint32_t, u_SteamUGCDetails_t_128x * ) = 0;
    virtual bool GetQueryUGCPreviewURL( uint64_t, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCMetadata( uint64_t, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCChildren( uint64_t, uint32_t, uint64_t *, uint32_t ) = 0;
    virtual bool GetQueryUGCStatistic( uint64_t, uint32_t, uint32_t, uint64_t * ) = 0;
    virtual uint32_t GetQueryUGCNumAdditionalPreviews( uint64_t, uint32_t ) = 0;
    virtual bool GetQueryUGCAdditionalPreview( uint64_t, uint32_t, uint32_t, char *, uint32_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetQueryUGCNumKeyValueTags( uint64_t, uint32_t ) = 0;
    virtual bool GetQueryUGCKeyValueTag( uint64_t, uint32_t, uint32_t, char *, uint32_t, char *, uint32_t ) = 0;
    virtual bool ReleaseQueryUGCRequest( uint64_t ) = 0;
    virtual bool AddRequiredTag( uint64_t, const char * ) = 0;
    virtual bool AddExcludedTag( uint64_t, const char * ) = 0;
    virtual bool SetReturnOnlyIDs( uint64_t, bool ) = 0;
    virtual bool SetReturnKeyValueTags( uint64_t, bool ) = 0;
    virtual bool SetReturnLongDescription( uint64_t, bool ) = 0;
    virtual bool SetReturnMetadata( uint64_t, bool ) = 0;
    virtual bool SetReturnChildren( uint64_t, bool ) = 0;
    virtual bool SetReturnAdditionalPreviews( uint64_t, bool ) = 0;
    virtual bool SetReturnTotalOnly( uint64_t, bool ) = 0;
    virtual bool SetReturnPlaytimeStats( uint64_t, uint32_t ) = 0;
    virtual bool SetLanguage( uint64_t, const char * ) = 0;
    virtual bool SetAllowCachedResponse( uint64_t, uint32_t ) = 0;
    virtual bool SetCloudFileNameFilter( uint64_t, const char * ) = 0;
    virtual bool SetMatchAnyTag( uint64_t, bool ) = 0;
    virtual bool SetSearchText( uint64_t, const char * ) = 0;
    virtual bool SetRankedByTrendDays( uint64_t, uint32_t ) = 0;
    virtual bool AddRequiredKeyValueTag( uint64_t, const char *, const char * ) = 0;
    virtual uint64_t RequestUGCDetails( uint64_t, uint32_t ) = 0;
    virtual uint64_t CreateItem( uint32_t, uint32_t ) = 0;
    virtual uint64_t StartItemUpdate( uint32_t, uint64_t ) = 0;
    virtual bool SetItemTitle( uint64_t, const char * ) = 0;
    virtual bool SetItemDescription( uint64_t, const char * ) = 0;
    virtual bool SetItemUpdateLanguage( uint64_t, const char * ) = 0;
    virtual bool SetItemMetadata( uint64_t, const char * ) = 0;
    virtual bool SetItemVisibility( uint64_t, uint32_t ) = 0;
    virtual bool SetItemTags( uint64_t, const u_SteamParamStringArray_t * ) = 0;
    virtual bool SetItemContent( uint64_t, const char * ) = 0;
    virtual bool SetItemPreview( uint64_t, const char * ) = 0;
    virtual bool RemoveItemKeyValueTags( uint64_t, const char * ) = 0;
    virtual bool AddItemKeyValueTag( uint64_t, const char *, const char * ) = 0;
    virtual bool AddItemPreviewFile( uint64_t, const char *, uint32_t ) = 0;
    virtual bool AddItemPreviewVideo( uint64_t, const char * ) = 0;
    virtual bool UpdateItemPreviewFile( uint64_t, uint32_t, const char * ) = 0;
    virtual bool UpdateItemPreviewVideo( uint64_t, uint32_t, const char * ) = 0;
    virtual bool RemoveItemPreview( uint64_t, uint32_t ) = 0;
    virtual uint64_t SubmitItemUpdate( uint64_t, const char * ) = 0;
    virtual uint32_t GetItemUpdateProgress( uint64_t, uint64_t *, uint64_t * ) = 0;
    virtual uint64_t SetUserItemVote( uint64_t, bool ) = 0;
    virtual uint64_t GetUserItemVote( uint64_t ) = 0;
    virtual uint64_t AddItemToFavorites( uint32_t, uint64_t ) = 0;
    virtual uint64_t RemoveItemFromFavorites( uint32_t, uint64_t ) = 0;
    virtual uint64_t SubscribeItem( uint64_t ) = 0;
    virtual uint64_t UnsubscribeItem( uint64_t ) = 0;
    virtual uint32_t GetNumSubscribedItems(  ) = 0;
    virtual uint32_t GetSubscribedItems( uint64_t *, uint32_t ) = 0;
    virtual uint32_t GetItemState( uint64_t ) = 0;
    virtual bool GetItemInstallInfo( uint64_t, uint64_t *, char *, uint32_t, uint32_t * ) = 0;
    virtual bool GetItemDownloadInfo( uint64_t, uint64_t *, uint64_t * ) = 0;
    virtual bool DownloadItem( uint64_t, bool ) = 0;
    virtual bool BInitWorkshopForGameServer( uint32_t, const char * ) = 0;
    virtual void SuspendDownloads( bool ) = 0;
    virtual uint64_t StartPlaytimeTracking( uint64_t *, uint32_t ) = 0;
    virtual uint64_t StopPlaytimeTracking( uint64_t *, uint32_t ) = 0;
    virtual uint64_t StopPlaytimeTrackingForAllItems(  ) = 0;
    virtual uint64_t AddDependency( uint64_t, uint64_t ) = 0;
    virtual uint64_t RemoveDependency( uint64_t, uint64_t ) = 0;
    virtual uint64_t AddAppDependency( uint64_t, uint32_t ) = 0;
    virtual uint64_t RemoveAppDependency( uint64_t, uint32_t ) = 0;
    virtual uint64_t GetAppDependencies( uint64_t ) = 0;
    virtual uint64_t DeleteItem( uint64_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002
{
#ifdef __cplusplus
    virtual uint32_t GetResultStatus( int32_t ) = 0;
    virtual bool GetResultItems( int32_t, SteamItemDetails_t *, uint32_t * ) = 0;
    virtual bool GetResultItemProperty( int32_t, uint32_t, const char *, char *, uint32_t * ) = 0;
    virtual uint32_t GetResultTimestamp( int32_t ) = 0;
    virtual bool CheckResultSteamID( int32_t, CSteamID ) = 0;
    virtual void DestroyResult( int32_t ) = 0;
    virtual bool GetAllItems( int32_t * ) = 0;
    virtual bool GetItemsByID( int32_t *, const uint64_t *, uint32_t ) = 0;
    virtual bool SerializeResult( int32_t, void *, uint32_t * ) = 0;
    virtual bool DeserializeResult( int32_t *, const void *, uint32_t, bool ) = 0;
    virtual bool GenerateItems( int32_t *, const int32_t *, const uint32_t *, uint32_t ) = 0;
    virtual bool GrantPromoItems( int32_t * ) = 0;
    virtual bool AddPromoItem( int32_t *, int32_t ) = 0;
    virtual bool AddPromoItems( int32_t *, const int32_t *, uint32_t ) = 0;
    virtual bool ConsumeItem( int32_t *, uint64_t, uint32_t ) = 0;
    virtual bool ExchangeItems( int32_t *, const int32_t *, const uint32_t *, uint32_t, const uint64_t *, const uint32_t *, uint32_t ) = 0;
    virtual bool TransferItemQuantity( int32_t *, uint64_t, uint32_t, uint64_t ) = 0;
    virtual void SendItemDropHeartbeat(  ) = 0;
    virtual bool TriggerItemDrop( int32_t *, int32_t ) = 0;
    virtual bool TradeItems( int32_t *, CSteamID, const uint64_t *, const uint32_t *, uint32_t, const uint64_t *, const uint32_t *, uint32_t ) = 0;
    virtual bool LoadItemDefinitions(  ) = 0;
    virtual bool GetItemDefinitionIDs( int32_t *, uint32_t * ) = 0;
    virtual bool GetItemDefinitionProperty( int32_t, const char *, char *, uint32_t * ) = 0;
    virtual uint64_t RequestEligiblePromoItemDefinitionsIDs( CSteamID ) = 0;
    virtual bool GetEligiblePromoItemDefinitionIDs( CSteamID, int32_t *, uint32_t * ) = 0;
    virtual uint64_t StartPurchase( const int32_t *, const uint32_t *, uint32_t ) = 0;
    virtual uint64_t RequestPrices(  ) = 0;
    virtual uint32_t GetNumItemsWithPrices(  ) = 0;
    virtual bool GetItemsWithPrices( int32_t *, uint64_t *, uint32_t ) = 0;
    virtual bool GetItemPrice( int32_t, uint64_t * ) = 0;
    virtual uint64_t StartUpdateProperties(  ) = 0;
    virtual bool RemoveProperty( uint64_t, uint64_t, const char * ) = 0;
    virtual bool SetProperty( uint64_t, uint64_t, const char *, const char * ) = 0;
    virtual bool SetProperty( uint64_t, uint64_t, const char *, bool ) = 0;
    virtual bool SetProperty( uint64_t, uint64_t, const char *, int64_t ) = 0;
    virtual bool SetProperty( uint64_t, uint64_t, const char *, float ) = 0;
    virtual bool SubmitUpdateProperties( uint64_t, int32_t * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamVideo_STEAMVIDEO_INTERFACE_V002
{
#ifdef __cplusplus
    virtual void GetVideoURL( uint32_t ) = 0;
    virtual bool IsBroadcasting( int32_t * ) = 0;
    virtual void GetOPFSettings( uint32_t ) = 0;
    virtual bool GetOPFStringForApp( uint32_t, char *, int32_t * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004
{
#ifdef __cplusplus
    virtual ~u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004(  ) = 0;
    virtual bool Init(  ) = 0;
    virtual bool Shutdown(  ) = 0;
    virtual uint64_t CreateBrowser( const char *, const char * ) = 0;
    virtual void RemoveBrowser( uint32_t ) = 0;
    virtual void LoadURL( uint32_t, const char *, const char * ) = 0;
    virtual void SetSize( uint32_t, uint32_t, uint32_t ) = 0;
    virtual void StopLoad( uint32_t ) = 0;
    virtual void Reload( uint32_t ) = 0;
    virtual void GoBack( uint32_t ) = 0;
    virtual void GoForward( uint32_t ) = 0;
    virtual void AddHeader( uint32_t, const char *, const char * ) = 0;
    virtual void ExecuteJavascript( uint32_t, const char * ) = 0;
    virtual void MouseUp( uint32_t, uint32_t ) = 0;
    virtual void MouseDown( uint32_t, uint32_t ) = 0;
    virtual void MouseDoubleClick( uint32_t, uint32_t ) = 0;
    virtual void MouseMove( uint32_t, int32_t, int32_t ) = 0;
    virtual void MouseWheel( uint32_t, int32_t ) = 0;
    virtual void KeyDown( uint32_t, uint32_t, uint32_t ) = 0;
    virtual void KeyUp( uint32_t, uint32_t, uint32_t ) = 0;
    virtual void KeyChar( uint32_t, uint32_t, uint32_t ) = 0;
    virtual void SetHorizontalScroll( uint32_t, uint32_t ) = 0;
    virtual void SetVerticalScroll( uint32_t, uint32_t ) = 0;
    virtual void SetKeyFocus( uint32_t, bool ) = 0;
    virtual void ViewSource( uint32_t ) = 0;
    virtual void CopyToClipboard( uint32_t ) = 0;
    virtual void PasteFromClipboard( uint32_t ) = 0;
    virtual void Find( uint32_t, const char *, bool, bool ) = 0;
    virtual void StopFind( uint32_t ) = 0;
    virtual void GetLinkAtPosition( uint32_t, int32_t, int32_t ) = 0;
    virtual void SetCookie( const char *, const char *, const char *, const char *, uint32_t, bool, bool ) = 0;
    virtual void SetPageScaleFactor( uint32_t, float, int32_t, int32_t ) = 0;
    virtual void SetBackgroundMode( uint32_t, bool ) = 0;
    virtual void SetDPIScalingFactor( uint32_t, float ) = 0;
    virtual void AllowStartRequest( uint32_t, bool ) = 0;
    virtual void JSDialogResponse( uint32_t, bool ) = 0;
    virtual void FileLoadDialogResponse( uint32_t, const char ** ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001
{
#ifdef __cplusplus
    virtual bool BIsParentalLockEnabled(  ) = 0;
    virtual bool BIsParentalLockLocked(  ) = 0;
    virtual bool BIsAppBlocked( uint32_t ) = 0;
    virtual bool BIsAppInBlockList( uint32_t ) = 0;
    virtual bool BIsFeatureBlocked( uint32_t ) = 0;
    virtual bool BIsFeatureInBlockList( uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamController_SteamController006
{
#ifdef __cplusplus
    virtual bool Init(  ) = 0;
    virtual bool Shutdown(  ) = 0;
    virtual void RunFrame(  ) = 0;
    virtual int32_t GetConnectedControllers( uint64_t * ) = 0;
    virtual bool ShowBindingPanel( uint64_t ) = 0;
    virtual uint64_t GetActionSetHandle( const char * ) = 0;
    virtual void ActivateActionSet( uint64_t, uint64_t ) = 0;
    virtual uint64_t GetCurrentActionSet( uint64_t ) = 0;
    virtual void ActivateActionSetLayer( uint64_t, uint64_t ) = 0;
    virtual void DeactivateActionSetLayer( uint64_t, uint64_t ) = 0;
    virtual void DeactivateAllActionSetLayers( uint64_t ) = 0;
    virtual int32_t GetActiveActionSetLayers( uint64_t, uint64_t * ) = 0;
    virtual uint64_t GetDigitalActionHandle( const char * ) = 0;
    virtual ControllerDigitalActionData_t GetDigitalActionData( uint64_t, uint64_t ) = 0;
    virtual int32_t GetDigitalActionOrigins( uint64_t, uint64_t, uint64_t, uint32_t * ) = 0;
    virtual uint64_t GetAnalogActionHandle( const char * ) = 0;
    virtual ControllerAnalogActionData_t GetAnalogActionData( uint64_t, uint64_t ) = 0;
    virtual int32_t GetAnalogActionOrigins( uint64_t, uint64_t, uint64_t, uint32_t * ) = 0;
    virtual void StopAnalogActionMomentum( uint64_t, uint64_t ) = 0;
    virtual void TriggerHapticPulse( uint64_t, uint32_t, uint16_t ) = 0;
    virtual void TriggerRepeatedHapticPulse( uint64_t, uint32_t, uint16_t, uint16_t, uint16_t, uint32_t ) = 0;
    virtual void TriggerVibration( uint64_t, uint16_t, uint16_t ) = 0;
    virtual void SetLEDColor( uint64_t, uint8_t, uint8_t, uint8_t, uint32_t ) = 0;
    virtual int32_t GetGamepadIndexForController( uint64_t ) = 0;
    virtual uint64_t GetControllerForGamepadIndex( int32_t ) = 0;
    virtual ControllerMotionData_t GetMotionData( uint64_t ) = 0;
    virtual bool ShowDigitalActionOrigins( uint64_t, uint64_t, float, float, float ) = 0;
    virtual bool ShowAnalogActionOrigins( uint64_t, uint64_t, float, float, float ) = 0;
    virtual const char * GetStringForActionOrigin( uint32_t ) = 0;
    virtual const char * GetGlyphForActionOrigin( uint32_t ) = 0;
    virtual uint32_t GetInputTypeForHandle( uint64_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamClient_SteamClient018
{
#ifdef __cplusplus
    virtual int32_t CreateSteamPipe(  ) = 0;
    virtual bool BReleaseSteamPipe( int32_t ) = 0;
    virtual int32_t ConnectToGlobalUser( int32_t ) = 0;
    virtual int32_t CreateLocalUser( int32_t *, uint32_t ) = 0;
    virtual void ReleaseUser( int32_t, int32_t ) = 0;
    virtual void /*ISteamUser*/ * GetISteamUser( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamGameServer*/ * GetISteamGameServer( int32_t, int32_t, const char * ) = 0;
    virtual void SetLocalIPBinding( uint32_t, uint16_t ) = 0;
    virtual void /*ISteamFriends*/ * GetISteamFriends( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUtils*/ * GetISteamUtils( int32_t, const char * ) = 0;
    virtual void /*ISteamMatchmaking*/ * GetISteamMatchmaking( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamMatchmakingServers*/ * GetISteamMatchmakingServers( int32_t, int32_t, const char * ) = 0;
    virtual void * GetISteamGenericInterface( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUserStats*/ * GetISteamUserStats( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamGameServerStats*/ * GetISteamGameServerStats( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamApps*/ * GetISteamApps( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamNetworking*/ * GetISteamNetworking( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamRemoteStorage*/ * GetISteamRemoteStorage( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamScreenshots*/ * GetISteamScreenshots( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamGameSearch*/ * GetISteamGameSearch( int32_t, int32_t, const char * ) = 0;
    virtual void RunFrame(  ) = 0;
    virtual uint32_t GetIPCCallCount(  ) = 0;
    virtual void SetWarningMessageHook( void (*U_CDECL )(int32_t, const char *) ) = 0;
    virtual bool BShutdownIfAllPipesClosed(  ) = 0;
    virtual void /*ISteamHTTP*/ * GetISteamHTTP( int32_t, int32_t, const char * ) = 0;
    virtual void * DEPRECATED_GetISteamUnifiedMessages( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamController*/ * GetISteamController( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUGC*/ * GetISteamUGC( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamAppList*/ * GetISteamAppList( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamMusic*/ * GetISteamMusic( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamMusicRemote*/ * GetISteamMusicRemote( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamHTMLSurface*/ * GetISteamHTMLSurface( int32_t, int32_t, const char * ) = 0;
    virtual void DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess( void (*U_STDCALL )(void) ) = 0;
    virtual void DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess( void (*U_STDCALL )(void) ) = 0;
    virtual void Set_SteamAPI_CCheckCallbackRegisteredInProcess( uint32_t (*U_STDCALL )(int32_t) ) = 0;
    virtual void /*ISteamInventory*/ * GetISteamInventory( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamVideo*/ * GetISteamVideo( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamParentalSettings*/ * GetISteamParentalSettings( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamInput*/ * GetISteamInput( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamParties*/ * GetISteamParties( int32_t, int32_t, const char * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUser_SteamUser020
{
#ifdef __cplusplus
    virtual int32_t GetHSteamUser(  ) = 0;
    virtual bool BLoggedOn(  ) = 0;
    virtual CSteamID GetSteamID(  ) = 0;
    virtual int32_t InitiateGameConnection( void *, int32_t, CSteamID, uint32_t, uint16_t, bool ) = 0;
    virtual void TerminateGameConnection( uint32_t, uint16_t ) = 0;
    virtual void TrackAppUsageEvent( CGameID, int32_t, const char * ) = 0;
    virtual bool GetUserDataFolder( char *, int32_t ) = 0;
    virtual void StartVoiceRecording(  ) = 0;
    virtual void StopVoiceRecording(  ) = 0;
    virtual uint32_t GetAvailableVoice( uint32_t *, uint32_t *, uint32_t ) = 0;
    virtual uint32_t GetVoice( bool, void *, uint32_t, uint32_t *, bool, void *, uint32_t, uint32_t *, uint32_t ) = 0;
    virtual uint32_t DecompressVoice( const void *, uint32_t, void *, uint32_t, uint32_t *, uint32_t ) = 0;
    virtual uint32_t GetVoiceOptimalSampleRate(  ) = 0;
    virtual uint32_t GetAuthSessionTicket( void *, int32_t, uint32_t * ) = 0;
    virtual uint32_t BeginAuthSession( const void *, int32_t, CSteamID ) = 0;
    virtual void EndAuthSession( CSteamID ) = 0;
    virtual void CancelAuthTicket( uint32_t ) = 0;
    virtual uint32_t UserHasLicenseForApp( CSteamID, uint32_t ) = 0;
    virtual bool BIsBehindNAT(  ) = 0;
    virtual void AdvertiseGame( CSteamID, uint32_t, uint16_t ) = 0;
    virtual uint64_t RequestEncryptedAppTicket( void *, int32_t ) = 0;
    virtual bool GetEncryptedAppTicket( void *, int32_t, uint32_t * ) = 0;
    virtual int32_t GetGameBadgeLevel( int32_t, bool ) = 0;
    virtual int32_t GetPlayerSteamLevel(  ) = 0;
    virtual uint64_t RequestStoreAuthURL( const char * ) = 0;
    virtual bool BIsPhoneVerified(  ) = 0;
    virtual bool BIsTwoFactorEnabled(  ) = 0;
    virtual bool BIsPhoneIdentifying(  ) = 0;
    virtual bool BIsPhoneRequiringVerification(  ) = 0;
    virtual uint64_t GetMarketEligibility(  ) = 0;
    virtual uint64_t GetDurationControl(  ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamFriends_SteamFriends017
{
#ifdef __cplusplus
    virtual const char * GetPersonaName(  ) = 0;
    virtual uint64_t SetPersonaName( const char * ) = 0;
    virtual uint32_t GetPersonaState(  ) = 0;
    virtual int32_t GetFriendCount( int32_t ) = 0;
    virtual CSteamID GetFriendByIndex( int32_t, int32_t ) = 0;
    virtual uint32_t GetFriendRelationship( CSteamID ) = 0;
    virtual uint32_t GetFriendPersonaState( CSteamID ) = 0;
    virtual const char * GetFriendPersonaName( CSteamID ) = 0;
    virtual bool GetFriendGamePlayed( CSteamID, FriendGameInfo_t * ) = 0;
    virtual const char * GetFriendPersonaNameHistory( CSteamID, int32_t ) = 0;
    virtual int32_t GetFriendSteamLevel( CSteamID ) = 0;
    virtual const char * GetPlayerNickname( CSteamID ) = 0;
    virtual int32_t GetFriendsGroupCount(  ) = 0;
    virtual int16_t GetFriendsGroupIDByIndex( int32_t ) = 0;
    virtual const char * GetFriendsGroupName( int16_t ) = 0;
    virtual int32_t GetFriendsGroupMembersCount( int16_t ) = 0;
    virtual void GetFriendsGroupMembersList( int16_t, CSteamID *, int32_t ) = 0;
    virtual bool HasFriend( CSteamID, int32_t ) = 0;
    virtual int32_t GetClanCount(  ) = 0;
    virtual CSteamID GetClanByIndex( int32_t ) = 0;
    virtual const char * GetClanName( CSteamID ) = 0;
    virtual const char * GetClanTag( CSteamID ) = 0;
    virtual bool GetClanActivityCounts( CSteamID, int32_t *, int32_t *, int32_t * ) = 0;
    virtual uint64_t DownloadClanActivityCounts( CSteamID *, int32_t ) = 0;
    virtual int32_t GetFriendCountFromSource( CSteamID ) = 0;
    virtual CSteamID GetFriendFromSourceByIndex( CSteamID, int32_t ) = 0;
    virtual bool IsUserInSource( CSteamID, CSteamID ) = 0;
    virtual void SetInGameVoiceSpeaking( CSteamID, bool ) = 0;
    virtual void ActivateGameOverlay( const char * ) = 0;
    virtual void ActivateGameOverlayToUser( const char *, CSteamID ) = 0;
    virtual void ActivateGameOverlayToWebPage( const char *, uint32_t ) = 0;
    virtual void ActivateGameOverlayToStore( uint32_t, uint32_t ) = 0;
    virtual void SetPlayedWith( CSteamID ) = 0;
    virtual void ActivateGameOverlayInviteDialog( CSteamID ) = 0;
    virtual int32_t GetSmallFriendAvatar( CSteamID ) = 0;
    virtual int32_t GetMediumFriendAvatar( CSteamID ) = 0;
    virtual int32_t GetLargeFriendAvatar( CSteamID ) = 0;
    virtual bool RequestUserInformation( CSteamID, bool ) = 0;
    virtual uint64_t RequestClanOfficerList( CSteamID ) = 0;
    virtual CSteamID GetClanOwner( CSteamID ) = 0;
    virtual int32_t GetClanOfficerCount( CSteamID ) = 0;
    virtual CSteamID GetClanOfficerByIndex( CSteamID, int32_t ) = 0;
    virtual uint32_t GetUserRestrictions(  ) = 0;
    virtual bool SetRichPresence( const char *, const char * ) = 0;
    virtual void ClearRichPresence(  ) = 0;
    virtual const char * GetFriendRichPresence( CSteamID, const char * ) = 0;
    virtual int32_t GetFriendRichPresenceKeyCount( CSteamID ) = 0;
    virtual const char * GetFriendRichPresenceKeyByIndex( CSteamID, int32_t ) = 0;
    virtual void RequestFriendRichPresence( CSteamID ) = 0;
    virtual bool InviteUserToGame( CSteamID, const char * ) = 0;
    virtual int32_t GetCoplayFriendCount(  ) = 0;
    virtual CSteamID GetCoplayFriend( int32_t ) = 0;
    virtual int32_t GetFriendCoplayTime( CSteamID ) = 0;
    virtual uint32_t GetFriendCoplayGame( CSteamID ) = 0;
    virtual uint64_t JoinClanChatRoom( CSteamID ) = 0;
    virtual bool LeaveClanChatRoom( CSteamID ) = 0;
    virtual int32_t GetClanChatMemberCount( CSteamID ) = 0;
    virtual CSteamID GetChatMemberByIndex( CSteamID, int32_t ) = 0;
    virtual bool SendClanChatMessage( CSteamID, const char * ) = 0;
    virtual int32_t GetClanChatMessage( CSteamID, int32_t, void *, int32_t, uint32_t *, CSteamID * ) = 0;
    virtual bool IsClanChatAdmin( CSteamID, CSteamID ) = 0;
    virtual bool IsClanChatWindowOpenInSteam( CSteamID ) = 0;
    virtual bool OpenClanChatWindowInSteam( CSteamID ) = 0;
    virtual bool CloseClanChatWindowInSteam( CSteamID ) = 0;
    virtual bool SetListenForFriendsMessages( bool ) = 0;
    virtual bool ReplyToFriendMessage( CSteamID, const char * ) = 0;
    virtual int32_t GetFriendMessage( CSteamID, int32_t, void *, int32_t, uint32_t * ) = 0;
    virtual uint64_t GetFollowerCount( CSteamID ) = 0;
    virtual uint64_t IsFollowing( CSteamID ) = 0;
    virtual uint64_t EnumerateFollowingList( uint32_t ) = 0;
    virtual bool IsClanPublic( CSteamID ) = 0;
    virtual bool IsClanOfficialGameGroup( CSteamID ) = 0;
    virtual int32_t GetNumChatsWithUnreadPriorityMessages(  ) = 0;
    virtual void ActivateGameOverlayRemotePlayTogetherInviteDialog( CSteamID ) = 0;
    virtual bool RegisterProtocolInOverlayBrowser( const char * ) = 0;
    virtual void ActivateGameOverlayInviteDialogConnectString( const char * ) = 0;
    virtual uint64_t RequestEquippedProfileItems( CSteamID ) = 0;
    virtual bool BHasEquippedProfileItem( CSteamID, uint32_t ) = 0;
    virtual const char * GetProfileItemPropertyString( CSteamID, uint32_t, uint32_t ) = 0;
    virtual uint32_t GetProfileItemPropertyUint( CSteamID, uint32_t, uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamGameSearch_SteamMatchGameSearch001
{
#ifdef __cplusplus
    virtual uint32_t AddGameSearchParams( const char *, const char * ) = 0;
    virtual uint32_t SearchForGameWithLobby( CSteamID, int32_t, int32_t ) = 0;
    virtual uint32_t SearchForGameSolo( int32_t, int32_t ) = 0;
    virtual uint32_t AcceptGame(  ) = 0;
    virtual uint32_t DeclineGame(  ) = 0;
    virtual uint32_t RetrieveConnectionDetails( CSteamID, char *, int32_t ) = 0;
    virtual uint32_t EndGameSearch(  ) = 0;
    virtual uint32_t SetGameHostParams( const char *, const char * ) = 0;
    virtual uint32_t SetConnectionDetails( const char *, int32_t ) = 0;
    virtual uint32_t RequestPlayersForGame( int32_t, int32_t, int32_t ) = 0;
    virtual uint32_t HostConfirmGameStart( uint64_t ) = 0;
    virtual uint32_t CancelRequestPlayersForGame(  ) = 0;
    virtual uint32_t SubmitPlayerResult( uint64_t, CSteamID, uint32_t ) = 0;
    virtual uint32_t EndGame( uint64_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamParties_SteamParties002
{
#ifdef __cplusplus
    virtual uint32_t GetNumActiveBeacons(  ) = 0;
    virtual uint64_t GetBeaconByIndex( uint32_t ) = 0;
    virtual bool GetBeaconDetails( uint64_t, CSteamID *, u_SteamPartyBeaconLocation_t *, char *, int32_t ) = 0;
    virtual uint64_t JoinParty( uint64_t ) = 0;
    virtual bool GetNumAvailableBeaconLocations( uint32_t * ) = 0;
    virtual bool GetAvailableBeaconLocations( u_SteamPartyBeaconLocation_t *, uint32_t ) = 0;
    virtual uint64_t CreateBeacon( uint32_t, u_SteamPartyBeaconLocation_t *, const char *, const char * ) = 0;
    virtual void OnReservationCompleted( uint64_t, CSteamID ) = 0;
    virtual void CancelReservation( uint64_t, CSteamID ) = 0;
    virtual uint64_t ChangeNumOpenSlots( uint64_t, uint32_t ) = 0;
    virtual bool DestroyBeacon( uint64_t ) = 0;
    virtual bool GetBeaconLocationData( u_SteamPartyBeaconLocation_t, uint32_t, char *, int32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003
{
#ifdef __cplusplus
    virtual uint32_t CreateHTTPRequest( uint32_t, const char * ) = 0;
    virtual bool SetHTTPRequestContextValue( uint32_t, uint64_t ) = 0;
    virtual bool SetHTTPRequestNetworkActivityTimeout( uint32_t, uint32_t ) = 0;
    virtual bool SetHTTPRequestHeaderValue( uint32_t, const char *, const char * ) = 0;
    virtual bool SetHTTPRequestGetOrPostParameter( uint32_t, const char *, const char * ) = 0;
    virtual bool SendHTTPRequest( uint32_t, uint64_t * ) = 0;
    virtual bool SendHTTPRequestAndStreamResponse( uint32_t, uint64_t * ) = 0;
    virtual bool DeferHTTPRequest( uint32_t ) = 0;
    virtual bool PrioritizeHTTPRequest( uint32_t ) = 0;
    virtual bool GetHTTPResponseHeaderSize( uint32_t, const char *, uint32_t * ) = 0;
    virtual bool GetHTTPResponseHeaderValue( uint32_t, const char *, uint8_t *, uint32_t ) = 0;
    virtual bool GetHTTPResponseBodySize( uint32_t, uint32_t * ) = 0;
    virtual bool GetHTTPResponseBodyData( uint32_t, uint8_t *, uint32_t ) = 0;
    virtual bool GetHTTPStreamingResponseBodyData( uint32_t, uint32_t, uint8_t *, uint32_t ) = 0;
    virtual bool ReleaseHTTPRequest( uint32_t ) = 0;
    virtual bool GetHTTPDownloadProgressPct( uint32_t, float * ) = 0;
    virtual bool SetHTTPRequestRawPostBody( uint32_t, const char *, uint8_t *, uint32_t ) = 0;
    virtual uint32_t CreateCookieContainer( bool ) = 0;
    virtual bool ReleaseCookieContainer( uint32_t ) = 0;
    virtual bool SetCookie( uint32_t, const char *, const char *, const char * ) = 0;
    virtual bool SetHTTPRequestCookieContainer( uint32_t, uint32_t ) = 0;
    virtual bool SetHTTPRequestUserAgentInfo( uint32_t, const char * ) = 0;
    virtual bool SetHTTPRequestRequiresVerifiedCertificate( uint32_t, bool ) = 0;
    virtual bool SetHTTPRequestAbsoluteTimeoutMS( uint32_t, uint32_t ) = 0;
    virtual bool GetHTTPRequestWasTimedOut( uint32_t, bool * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamInput_SteamInput001
{
#ifdef __cplusplus
    virtual bool Init(  ) = 0;
    virtual bool Shutdown(  ) = 0;
    virtual void RunFrame(  ) = 0;
    virtual int32_t GetConnectedControllers( uint64_t * ) = 0;
    virtual uint64_t GetActionSetHandle( const char * ) = 0;
    virtual void ActivateActionSet( uint64_t, uint64_t ) = 0;
    virtual uint64_t GetCurrentActionSet( uint64_t ) = 0;
    virtual void ActivateActionSetLayer( uint64_t, uint64_t ) = 0;
    virtual void DeactivateActionSetLayer( uint64_t, uint64_t ) = 0;
    virtual void DeactivateAllActionSetLayers( uint64_t ) = 0;
    virtual int32_t GetActiveActionSetLayers( uint64_t, uint64_t * ) = 0;
    virtual uint64_t GetDigitalActionHandle( const char * ) = 0;
    virtual InputDigitalActionData_t GetDigitalActionData( uint64_t, uint64_t ) = 0;
    virtual int32_t GetDigitalActionOrigins( uint64_t, uint64_t, uint64_t, uint32_t * ) = 0;
    virtual uint64_t GetAnalogActionHandle( const char * ) = 0;
    virtual InputAnalogActionData_t GetAnalogActionData( uint64_t, uint64_t ) = 0;
    virtual int32_t GetAnalogActionOrigins( uint64_t, uint64_t, uint64_t, uint32_t * ) = 0;
    virtual const char * GetGlyphForActionOrigin( uint32_t ) = 0;
    virtual const char * GetStringForActionOrigin( uint32_t ) = 0;
    virtual void StopAnalogActionMomentum( uint64_t, uint64_t ) = 0;
    virtual InputMotionData_t GetMotionData( uint64_t ) = 0;
    virtual void TriggerVibration( uint64_t, uint16_t, uint16_t ) = 0;
    virtual void SetLEDColor( uint64_t, uint8_t, uint8_t, uint8_t, uint32_t ) = 0;
    virtual void TriggerHapticPulse( uint64_t, uint32_t, uint16_t ) = 0;
    virtual void TriggerRepeatedHapticPulse( uint64_t, uint32_t, uint16_t, uint16_t, uint16_t, uint32_t ) = 0;
    virtual bool ShowBindingPanel( uint64_t ) = 0;
    virtual uint32_t GetInputTypeForHandle( uint64_t ) = 0;
    virtual uint64_t GetControllerForGamepadIndex( int32_t ) = 0;
    virtual int32_t GetGamepadIndexForController( uint64_t ) = 0;
    virtual const char * GetStringForXboxOrigin( uint32_t ) = 0;
    virtual const char * GetGlyphForXboxOrigin( uint32_t ) = 0;
    virtual uint32_t GetActionOriginFromXboxOrigin( uint64_t, uint32_t ) = 0;
    virtual uint32_t TranslateActionOrigin( uint32_t, uint32_t ) = 0;
    virtual bool GetDeviceBindingRevision( uint64_t, int32_t *, int32_t * ) = 0;
    virtual uint32_t GetRemotePlaySessionID( uint64_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamController_SteamController007
{
#ifdef __cplusplus
    virtual bool Init(  ) = 0;
    virtual bool Shutdown(  ) = 0;
    virtual void RunFrame(  ) = 0;
    virtual int32_t GetConnectedControllers( uint64_t * ) = 0;
    virtual uint64_t GetActionSetHandle( const char * ) = 0;
    virtual void ActivateActionSet( uint64_t, uint64_t ) = 0;
    virtual uint64_t GetCurrentActionSet( uint64_t ) = 0;
    virtual void ActivateActionSetLayer( uint64_t, uint64_t ) = 0;
    virtual void DeactivateActionSetLayer( uint64_t, uint64_t ) = 0;
    virtual void DeactivateAllActionSetLayers( uint64_t ) = 0;
    virtual int32_t GetActiveActionSetLayers( uint64_t, uint64_t * ) = 0;
    virtual uint64_t GetDigitalActionHandle( const char * ) = 0;
    virtual InputDigitalActionData_t GetDigitalActionData( uint64_t, uint64_t ) = 0;
    virtual int32_t GetDigitalActionOrigins( uint64_t, uint64_t, uint64_t, uint32_t * ) = 0;
    virtual uint64_t GetAnalogActionHandle( const char * ) = 0;
    virtual InputAnalogActionData_t GetAnalogActionData( uint64_t, uint64_t ) = 0;
    virtual int32_t GetAnalogActionOrigins( uint64_t, uint64_t, uint64_t, uint32_t * ) = 0;
    virtual const char * GetGlyphForActionOrigin( uint32_t ) = 0;
    virtual const char * GetStringForActionOrigin( uint32_t ) = 0;
    virtual void StopAnalogActionMomentum( uint64_t, uint64_t ) = 0;
    virtual InputMotionData_t GetMotionData( uint64_t ) = 0;
    virtual void TriggerHapticPulse( uint64_t, uint32_t, uint16_t ) = 0;
    virtual void TriggerRepeatedHapticPulse( uint64_t, uint32_t, uint16_t, uint16_t, uint16_t, uint32_t ) = 0;
    virtual void TriggerVibration( uint64_t, uint16_t, uint16_t ) = 0;
    virtual void SetLEDColor( uint64_t, uint8_t, uint8_t, uint8_t, uint32_t ) = 0;
    virtual bool ShowBindingPanel( uint64_t ) = 0;
    virtual uint32_t GetInputTypeForHandle( uint64_t ) = 0;
    virtual uint64_t GetControllerForGamepadIndex( int32_t ) = 0;
    virtual int32_t GetGamepadIndexForController( uint64_t ) = 0;
    virtual const char * GetStringForXboxOrigin( uint32_t ) = 0;
    virtual const char * GetGlyphForXboxOrigin( uint32_t ) = 0;
    virtual uint32_t GetActionOriginFromXboxOrigin( uint64_t, uint32_t ) = 0;
    virtual uint32_t TranslateActionOrigin( uint32_t, uint32_t ) = 0;
    virtual bool GetControllerBindingRevision( uint64_t, int32_t *, int32_t * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012
{
#ifdef __cplusplus
    virtual uint64_t CreateQueryUserUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint64_t CreateQueryAllUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint64_t CreateQueryAllUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, const char * ) = 0;
    virtual uint64_t CreateQueryUGCDetailsRequest( uint64_t *, uint32_t ) = 0;
    virtual uint64_t SendQueryUGCRequest( uint64_t ) = 0;
    virtual bool GetQueryUGCResult( uint64_t, uint32_t, u_SteamUGCDetails_t_128x * ) = 0;
    virtual bool GetQueryUGCPreviewURL( uint64_t, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCMetadata( uint64_t, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCChildren( uint64_t, uint32_t, uint64_t *, uint32_t ) = 0;
    virtual bool GetQueryUGCStatistic( uint64_t, uint32_t, uint32_t, uint64_t * ) = 0;
    virtual uint32_t GetQueryUGCNumAdditionalPreviews( uint64_t, uint32_t ) = 0;
    virtual bool GetQueryUGCAdditionalPreview( uint64_t, uint32_t, uint32_t, char *, uint32_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetQueryUGCNumKeyValueTags( uint64_t, uint32_t ) = 0;
    virtual bool GetQueryUGCKeyValueTag( uint64_t, uint32_t, uint32_t, char *, uint32_t, char *, uint32_t ) = 0;
    virtual bool ReleaseQueryUGCRequest( uint64_t ) = 0;
    virtual bool AddRequiredTag( uint64_t, const char * ) = 0;
    virtual bool AddExcludedTag( uint64_t, const char * ) = 0;
    virtual bool SetReturnOnlyIDs( uint64_t, bool ) = 0;
    virtual bool SetReturnKeyValueTags( uint64_t, bool ) = 0;
    virtual bool SetReturnLongDescription( uint64_t, bool ) = 0;
    virtual bool SetReturnMetadata( uint64_t, bool ) = 0;
    virtual bool SetReturnChildren( uint64_t, bool ) = 0;
    virtual bool SetReturnAdditionalPreviews( uint64_t, bool ) = 0;
    virtual bool SetReturnTotalOnly( uint64_t, bool ) = 0;
    virtual bool SetReturnPlaytimeStats( uint64_t, uint32_t ) = 0;
    virtual bool SetLanguage( uint64_t, const char * ) = 0;
    virtual bool SetAllowCachedResponse( uint64_t, uint32_t ) = 0;
    virtual bool SetCloudFileNameFilter( uint64_t, const char * ) = 0;
    virtual bool SetMatchAnyTag( uint64_t, bool ) = 0;
    virtual bool SetSearchText( uint64_t, const char * ) = 0;
    virtual bool SetRankedByTrendDays( uint64_t, uint32_t ) = 0;
    virtual bool AddRequiredKeyValueTag( uint64_t, const char *, const char * ) = 0;
    virtual uint64_t RequestUGCDetails( uint64_t, uint32_t ) = 0;
    virtual uint64_t CreateItem( uint32_t, uint32_t ) = 0;
    virtual uint64_t StartItemUpdate( uint32_t, uint64_t ) = 0;
    virtual bool SetItemTitle( uint64_t, const char * ) = 0;
    virtual bool SetItemDescription( uint64_t, const char * ) = 0;
    virtual bool SetItemUpdateLanguage( uint64_t, const char * ) = 0;
    virtual bool SetItemMetadata( uint64_t, const char * ) = 0;
    virtual bool SetItemVisibility( uint64_t, uint32_t ) = 0;
    virtual bool SetItemTags( uint64_t, const u_SteamParamStringArray_t * ) = 0;
    virtual bool SetItemContent( uint64_t, const char * ) = 0;
    virtual bool SetItemPreview( uint64_t, const char * ) = 0;
    virtual bool SetAllowLegacyUpload( uint64_t, bool ) = 0;
    virtual bool RemoveItemKeyValueTags( uint64_t, const char * ) = 0;
    virtual bool AddItemKeyValueTag( uint64_t, const char *, const char * ) = 0;
    virtual bool AddItemPreviewFile( uint64_t, const char *, uint32_t ) = 0;
    virtual bool AddItemPreviewVideo( uint64_t, const char * ) = 0;
    virtual bool UpdateItemPreviewFile( uint64_t, uint32_t, const char * ) = 0;
    virtual bool UpdateItemPreviewVideo( uint64_t, uint32_t, const char * ) = 0;
    virtual bool RemoveItemPreview( uint64_t, uint32_t ) = 0;
    virtual uint64_t SubmitItemUpdate( uint64_t, const char * ) = 0;
    virtual uint32_t GetItemUpdateProgress( uint64_t, uint64_t *, uint64_t * ) = 0;
    virtual uint64_t SetUserItemVote( uint64_t, bool ) = 0;
    virtual uint64_t GetUserItemVote( uint64_t ) = 0;
    virtual uint64_t AddItemToFavorites( uint32_t, uint64_t ) = 0;
    virtual uint64_t RemoveItemFromFavorites( uint32_t, uint64_t ) = 0;
    virtual uint64_t SubscribeItem( uint64_t ) = 0;
    virtual uint64_t UnsubscribeItem( uint64_t ) = 0;
    virtual uint32_t GetNumSubscribedItems(  ) = 0;
    virtual uint32_t GetSubscribedItems( uint64_t *, uint32_t ) = 0;
    virtual uint32_t GetItemState( uint64_t ) = 0;
    virtual bool GetItemInstallInfo( uint64_t, uint64_t *, char *, uint32_t, uint32_t * ) = 0;
    virtual bool GetItemDownloadInfo( uint64_t, uint64_t *, uint64_t * ) = 0;
    virtual bool DownloadItem( uint64_t, bool ) = 0;
    virtual bool BInitWorkshopForGameServer( uint32_t, const char * ) = 0;
    virtual void SuspendDownloads( bool ) = 0;
    virtual uint64_t StartPlaytimeTracking( uint64_t *, uint32_t ) = 0;
    virtual uint64_t StopPlaytimeTracking( uint64_t *, uint32_t ) = 0;
    virtual uint64_t StopPlaytimeTrackingForAllItems(  ) = 0;
    virtual uint64_t AddDependency( uint64_t, uint64_t ) = 0;
    virtual uint64_t RemoveDependency( uint64_t, uint64_t ) = 0;
    virtual uint64_t AddAppDependency( uint64_t, uint32_t ) = 0;
    virtual uint64_t RemoveAppDependency( uint64_t, uint32_t ) = 0;
    virtual uint64_t GetAppDependencies( uint64_t ) = 0;
    virtual uint64_t DeleteItem( uint64_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005
{
#ifdef __cplusplus
    virtual ~u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005(  ) = 0;
    virtual bool Init(  ) = 0;
    virtual bool Shutdown(  ) = 0;
    virtual uint64_t CreateBrowser( const char *, const char * ) = 0;
    virtual void RemoveBrowser( uint32_t ) = 0;
    virtual void LoadURL( uint32_t, const char *, const char * ) = 0;
    virtual void SetSize( uint32_t, uint32_t, uint32_t ) = 0;
    virtual void StopLoad( uint32_t ) = 0;
    virtual void Reload( uint32_t ) = 0;
    virtual void GoBack( uint32_t ) = 0;
    virtual void GoForward( uint32_t ) = 0;
    virtual void AddHeader( uint32_t, const char *, const char * ) = 0;
    virtual void ExecuteJavascript( uint32_t, const char * ) = 0;
    virtual void MouseUp( uint32_t, uint32_t ) = 0;
    virtual void MouseDown( uint32_t, uint32_t ) = 0;
    virtual void MouseDoubleClick( uint32_t, uint32_t ) = 0;
    virtual void MouseMove( uint32_t, int32_t, int32_t ) = 0;
    virtual void MouseWheel( uint32_t, int32_t ) = 0;
    virtual void KeyDown( uint32_t, uint32_t, uint32_t, bool ) = 0;
    virtual void KeyUp( uint32_t, uint32_t, uint32_t ) = 0;
    virtual void KeyChar( uint32_t, uint32_t, uint32_t ) = 0;
    virtual void SetHorizontalScroll( uint32_t, uint32_t ) = 0;
    virtual void SetVerticalScroll( uint32_t, uint32_t ) = 0;
    virtual void SetKeyFocus( uint32_t, bool ) = 0;
    virtual void ViewSource( uint32_t ) = 0;
    virtual void CopyToClipboard( uint32_t ) = 0;
    virtual void PasteFromClipboard( uint32_t ) = 0;
    virtual void Find( uint32_t, const char *, bool, bool ) = 0;
    virtual void StopFind( uint32_t ) = 0;
    virtual void GetLinkAtPosition( uint32_t, int32_t, int32_t ) = 0;
    virtual void SetCookie( const char *, const char *, const char *, const char *, uint32_t, bool, bool ) = 0;
    virtual void SetPageScaleFactor( uint32_t, float, int32_t, int32_t ) = 0;
    virtual void SetBackgroundMode( uint32_t, bool ) = 0;
    virtual void SetDPIScalingFactor( uint32_t, float ) = 0;
    virtual void OpenDeveloperTools( uint32_t ) = 0;
    virtual void AllowStartRequest( uint32_t, bool ) = 0;
    virtual void JSDialogResponse( uint32_t, bool ) = 0;
    virtual void FileLoadDialogResponse( uint32_t, const char ** ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003
{
#ifdef __cplusplus
    virtual uint32_t GetResultStatus( int32_t ) = 0;
    virtual bool GetResultItems( int32_t, SteamItemDetails_t *, uint32_t * ) = 0;
    virtual bool GetResultItemProperty( int32_t, uint32_t, const char *, char *, uint32_t * ) = 0;
    virtual uint32_t GetResultTimestamp( int32_t ) = 0;
    virtual bool CheckResultSteamID( int32_t, CSteamID ) = 0;
    virtual void DestroyResult( int32_t ) = 0;
    virtual bool GetAllItems( int32_t * ) = 0;
    virtual bool GetItemsByID( int32_t *, const uint64_t *, uint32_t ) = 0;
    virtual bool SerializeResult( int32_t, void *, uint32_t * ) = 0;
    virtual bool DeserializeResult( int32_t *, const void *, uint32_t, bool ) = 0;
    virtual bool GenerateItems( int32_t *, const int32_t *, const uint32_t *, uint32_t ) = 0;
    virtual bool GrantPromoItems( int32_t * ) = 0;
    virtual bool AddPromoItem( int32_t *, int32_t ) = 0;
    virtual bool AddPromoItems( int32_t *, const int32_t *, uint32_t ) = 0;
    virtual bool ConsumeItem( int32_t *, uint64_t, uint32_t ) = 0;
    virtual bool ExchangeItems( int32_t *, const int32_t *, const uint32_t *, uint32_t, const uint64_t *, const uint32_t *, uint32_t ) = 0;
    virtual bool TransferItemQuantity( int32_t *, uint64_t, uint32_t, uint64_t ) = 0;
    virtual void SendItemDropHeartbeat(  ) = 0;
    virtual bool TriggerItemDrop( int32_t *, int32_t ) = 0;
    virtual bool TradeItems( int32_t *, CSteamID, const uint64_t *, const uint32_t *, uint32_t, const uint64_t *, const uint32_t *, uint32_t ) = 0;
    virtual bool LoadItemDefinitions(  ) = 0;
    virtual bool GetItemDefinitionIDs( int32_t *, uint32_t * ) = 0;
    virtual bool GetItemDefinitionProperty( int32_t, const char *, char *, uint32_t * ) = 0;
    virtual uint64_t RequestEligiblePromoItemDefinitionsIDs( CSteamID ) = 0;
    virtual bool GetEligiblePromoItemDefinitionIDs( CSteamID, int32_t *, uint32_t * ) = 0;
    virtual uint64_t StartPurchase( const int32_t *, const uint32_t *, uint32_t ) = 0;
    virtual uint64_t RequestPrices(  ) = 0;
    virtual uint32_t GetNumItemsWithPrices(  ) = 0;
    virtual bool GetItemsWithPrices( int32_t *, uint64_t *, uint64_t *, uint32_t ) = 0;
    virtual bool GetItemPrice( int32_t, uint64_t *, uint64_t * ) = 0;
    virtual uint64_t StartUpdateProperties(  ) = 0;
    virtual bool RemoveProperty( uint64_t, uint64_t, const char * ) = 0;
    virtual bool SetProperty( uint64_t, uint64_t, const char *, const char * ) = 0;
    virtual bool SetProperty( uint64_t, uint64_t, const char *, bool ) = 0;
    virtual bool SetProperty( uint64_t, uint64_t, const char *, int64_t ) = 0;
    virtual bool SetProperty( uint64_t, uint64_t, const char *, float ) = 0;
    virtual bool SubmitUpdateProperties( uint64_t, int32_t * ) = 0;
    virtual bool InspectItem( int32_t *, const char * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002
{
#ifdef __cplusplus
    virtual void SendP2PRendezvous( CSteamID, uint32_t, const void *, uint32_t ) = 0;
    virtual void SendP2PConnectionFailure( CSteamID, uint32_t, uint32_t, const char * ) = 0;
    virtual uint64_t GetCertAsync(  ) = 0;
    virtual int32_t GetNetworkConfigJSON( void *, uint32_t ) = 0;
    virtual void CacheRelayTicket( const void *, uint32_t ) = 0;
    virtual uint32_t GetCachedRelayTicketCount(  ) = 0;
    virtual int32_t GetCachedRelayTicket( uint32_t, void *, uint32_t ) = 0;
    virtual void PostConnectionStateMsg( const void *, uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003
{
#ifdef __cplusplus
    virtual void SendP2PRendezvous( CSteamID, uint32_t, const void *, uint32_t ) = 0;
    virtual void SendP2PConnectionFailure( CSteamID, uint32_t, uint32_t, const char * ) = 0;
    virtual uint64_t GetCertAsync(  ) = 0;
    virtual int32_t GetNetworkConfigJSON( void *, uint32_t, const char * ) = 0;
    virtual void CacheRelayTicket( const void *, uint32_t ) = 0;
    virtual uint32_t GetCachedRelayTicketCount(  ) = 0;
    virtual int32_t GetCachedRelayTicket( uint32_t, void *, uint32_t ) = 0;
    virtual void PostConnectionStateMsg( const void *, uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamNetworkingSockets_SteamNetworkingSockets002
{
#ifdef __cplusplus
    virtual uint32_t CreateListenSocketIP( const SteamNetworkingIPAddr * ) = 0;
    virtual uint32_t ConnectByIPAddress( const SteamNetworkingIPAddr * ) = 0;
    virtual uint32_t CreateListenSocketP2P( int32_t ) = 0;
    virtual uint32_t ConnectP2P( const SteamNetworkingIdentity_144 *, int32_t ) = 0;
    virtual uint32_t AcceptConnection( uint32_t ) = 0;
    virtual bool CloseConnection( uint32_t, int32_t, const char *, bool ) = 0;
    virtual bool CloseListenSocket( uint32_t ) = 0;
    virtual bool SetConnectionUserData( uint32_t, int64_t ) = 0;
    virtual int64_t GetConnectionUserData( uint32_t ) = 0;
    virtual void SetConnectionName( uint32_t, const char * ) = 0;
    virtual bool GetConnectionName( uint32_t, char *, int32_t ) = 0;
    virtual uint32_t SendMessageToConnection( uint32_t, const void *, uint32_t, int32_t ) = 0;
    virtual uint32_t FlushMessagesOnConnection( uint32_t ) = 0;
    virtual int32_t ReceiveMessagesOnConnection( uint32_t, u_SteamNetworkingMessage_t_144 **, int32_t ) = 0;
    virtual int32_t ReceiveMessagesOnListenSocket( uint32_t, u_SteamNetworkingMessage_t_144 **, int32_t ) = 0;
    virtual bool GetConnectionInfo( uint32_t, SteamNetConnectionInfo_t_144 * ) = 0;
    virtual bool GetQuickConnectionStatus( uint32_t, SteamNetworkingQuickConnectionStatus * ) = 0;
    virtual int32_t GetDetailedConnectionStatus( uint32_t, char *, int32_t ) = 0;
    virtual bool GetListenSocketAddress( uint32_t, SteamNetworkingIPAddr * ) = 0;
    virtual bool CreateSocketPair( uint32_t *, uint32_t *, bool, const SteamNetworkingIdentity_144 *, const SteamNetworkingIdentity_144 * ) = 0;
    virtual bool GetIdentity( SteamNetworkingIdentity_144 * ) = 0;
    virtual bool ReceivedRelayAuthTicket( const void *, int32_t, SteamDatagramRelayAuthTicket * ) = 0;
    virtual int32_t FindRelayAuthTicketForServer( const SteamNetworkingIdentity_144 *, int32_t, SteamDatagramRelayAuthTicket * ) = 0;
    virtual uint32_t ConnectToHostedDedicatedServer( const SteamNetworkingIdentity_144 *, int32_t ) = 0;
    virtual uint16_t GetHostedDedicatedServerPort(  ) = 0;
    virtual uint32_t GetHostedDedicatedServerPOPID(  ) = 0;
    virtual bool GetHostedDedicatedServerAddress( SteamDatagramHostedAddress * ) = 0;
    virtual uint32_t CreateHostedDedicatedServerListenSocket( int32_t ) = 0;
    virtual ~u_ISteamNetworkingSockets_SteamNetworkingSockets002(  ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamNetworkingUtils_SteamNetworkingUtils001
{
#ifdef __cplusplus
    virtual float GetLocalPingLocation( SteamNetworkPingLocation_t * ) = 0;
    virtual int32_t EstimatePingTimeBetweenTwoLocations( const SteamNetworkPingLocation_t *, const SteamNetworkPingLocation_t * ) = 0;
    virtual int32_t EstimatePingTimeFromLocalHost( const SteamNetworkPingLocation_t * ) = 0;
    virtual void ConvertPingLocationToString( const SteamNetworkPingLocation_t *, char *, int32_t ) = 0;
    virtual bool ParsePingLocationString( const char *, SteamNetworkPingLocation_t * ) = 0;
    virtual bool CheckPingDataUpToDate( float ) = 0;
    virtual bool IsPingMeasurementInProgress(  ) = 0;
    virtual int32_t GetPingToDataCenter( uint32_t, uint32_t * ) = 0;
    virtual int32_t GetDirectPingToPOP( uint32_t ) = 0;
    virtual int32_t GetPOPCount(  ) = 0;
    virtual int32_t GetPOPList( uint32_t *, int32_t ) = 0;
    virtual int64_t GetLocalTimestamp(  ) = 0;
    virtual void SetDebugOutputFunction( uint32_t, void (*U_STDCALL )(uint32_t, const char *) ) = 0;
    virtual bool SetConfigValue( uint32_t, uint32_t, int32_t, uint32_t, const void * ) = 0;
    virtual uint32_t GetConfigValue( uint32_t, uint32_t, int32_t, uint32_t *, void *, uint32_t * ) = 0;
    virtual bool GetConfigValueInfo( uint32_t, const char **, uint32_t *, uint32_t *, uint32_t * ) = 0;
    virtual uint32_t GetFirstConfigValue(  ) = 0;
    virtual void SteamNetworkingIPAddr_ToString( const SteamNetworkingIPAddr *, char *, uint32_t, bool ) = 0;
    virtual bool SteamNetworkingIPAddr_ParseString( SteamNetworkingIPAddr *, const char * ) = 0;
    virtual void SteamNetworkingIdentity_ToString( const SteamNetworkingIdentity_144 *, char *, uint32_t ) = 0;
    virtual bool SteamNetworkingIdentity_ParseString( SteamNetworkingIdentity_144 *, const char * ) = 0;
    virtual ~u_ISteamNetworkingUtils_SteamNetworkingUtils001(  ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION013
{
#ifdef __cplusplus
    virtual uint64_t CreateQueryUserUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint64_t CreateQueryAllUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint64_t CreateQueryAllUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, const char * ) = 0;
    virtual uint64_t CreateQueryUGCDetailsRequest( uint64_t *, uint32_t ) = 0;
    virtual uint64_t SendQueryUGCRequest( uint64_t ) = 0;
    virtual bool GetQueryUGCResult( uint64_t, uint32_t, u_SteamUGCDetails_t_128x * ) = 0;
    virtual bool GetQueryUGCPreviewURL( uint64_t, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCMetadata( uint64_t, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCChildren( uint64_t, uint32_t, uint64_t *, uint32_t ) = 0;
    virtual bool GetQueryUGCStatistic( uint64_t, uint32_t, uint32_t, uint64_t * ) = 0;
    virtual uint32_t GetQueryUGCNumAdditionalPreviews( uint64_t, uint32_t ) = 0;
    virtual bool GetQueryUGCAdditionalPreview( uint64_t, uint32_t, uint32_t, char *, uint32_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetQueryUGCNumKeyValueTags( uint64_t, uint32_t ) = 0;
    virtual bool GetQueryUGCKeyValueTag( uint64_t, uint32_t, uint32_t, char *, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCKeyValueTag( uint64_t, uint32_t, const char *, char *, uint32_t ) = 0;
    virtual bool ReleaseQueryUGCRequest( uint64_t ) = 0;
    virtual bool AddRequiredTag( uint64_t, const char * ) = 0;
    virtual bool AddExcludedTag( uint64_t, const char * ) = 0;
    virtual bool SetReturnOnlyIDs( uint64_t, bool ) = 0;
    virtual bool SetReturnKeyValueTags( uint64_t, bool ) = 0;
    virtual bool SetReturnLongDescription( uint64_t, bool ) = 0;
    virtual bool SetReturnMetadata( uint64_t, bool ) = 0;
    virtual bool SetReturnChildren( uint64_t, bool ) = 0;
    virtual bool SetReturnAdditionalPreviews( uint64_t, bool ) = 0;
    virtual bool SetReturnTotalOnly( uint64_t, bool ) = 0;
    virtual bool SetReturnPlaytimeStats( uint64_t, uint32_t ) = 0;
    virtual bool SetLanguage( uint64_t, const char * ) = 0;
    virtual bool SetAllowCachedResponse( uint64_t, uint32_t ) = 0;
    virtual bool SetCloudFileNameFilter( uint64_t, const char * ) = 0;
    virtual bool SetMatchAnyTag( uint64_t, bool ) = 0;
    virtual bool SetSearchText( uint64_t, const char * ) = 0;
    virtual bool SetRankedByTrendDays( uint64_t, uint32_t ) = 0;
    virtual bool AddRequiredKeyValueTag( uint64_t, const char *, const char * ) = 0;
    virtual uint64_t RequestUGCDetails( uint64_t, uint32_t ) = 0;
    virtual uint64_t CreateItem( uint32_t, uint32_t ) = 0;
    virtual uint64_t StartItemUpdate( uint32_t, uint64_t ) = 0;
    virtual bool SetItemTitle( uint64_t, const char * ) = 0;
    virtual bool SetItemDescription( uint64_t, const char * ) = 0;
    virtual bool SetItemUpdateLanguage( uint64_t, const char * ) = 0;
    virtual bool SetItemMetadata( uint64_t, const char * ) = 0;
    virtual bool SetItemVisibility( uint64_t, uint32_t ) = 0;
    virtual bool SetItemTags( uint64_t, const u_SteamParamStringArray_t * ) = 0;
    virtual bool SetItemContent( uint64_t, const char * ) = 0;
    virtual bool SetItemPreview( uint64_t, const char * ) = 0;
    virtual bool SetAllowLegacyUpload( uint64_t, bool ) = 0;
    virtual bool RemoveAllItemKeyValueTags( uint64_t ) = 0;
    virtual bool RemoveItemKeyValueTags( uint64_t, const char * ) = 0;
    virtual bool AddItemKeyValueTag( uint64_t, const char *, const char * ) = 0;
    virtual bool AddItemPreviewFile( uint64_t, const char *, uint32_t ) = 0;
    virtual bool AddItemPreviewVideo( uint64_t, const char * ) = 0;
    virtual bool UpdateItemPreviewFile( uint64_t, uint32_t, const char * ) = 0;
    virtual bool UpdateItemPreviewVideo( uint64_t, uint32_t, const char * ) = 0;
    virtual bool RemoveItemPreview( uint64_t, uint32_t ) = 0;
    virtual uint64_t SubmitItemUpdate( uint64_t, const char * ) = 0;
    virtual uint32_t GetItemUpdateProgress( uint64_t, uint64_t *, uint64_t * ) = 0;
    virtual uint64_t SetUserItemVote( uint64_t, bool ) = 0;
    virtual uint64_t GetUserItemVote( uint64_t ) = 0;
    virtual uint64_t AddItemToFavorites( uint32_t, uint64_t ) = 0;
    virtual uint64_t RemoveItemFromFavorites( uint32_t, uint64_t ) = 0;
    virtual uint64_t SubscribeItem( uint64_t ) = 0;
    virtual uint64_t UnsubscribeItem( uint64_t ) = 0;
    virtual uint32_t GetNumSubscribedItems(  ) = 0;
    virtual uint32_t GetSubscribedItems( uint64_t *, uint32_t ) = 0;
    virtual uint32_t GetItemState( uint64_t ) = 0;
    virtual bool GetItemInstallInfo( uint64_t, uint64_t *, char *, uint32_t, uint32_t * ) = 0;
    virtual bool GetItemDownloadInfo( uint64_t, uint64_t *, uint64_t * ) = 0;
    virtual bool DownloadItem( uint64_t, bool ) = 0;
    virtual bool BInitWorkshopForGameServer( uint32_t, const char * ) = 0;
    virtual void SuspendDownloads( bool ) = 0;
    virtual uint64_t StartPlaytimeTracking( uint64_t *, uint32_t ) = 0;
    virtual uint64_t StopPlaytimeTracking( uint64_t *, uint32_t ) = 0;
    virtual uint64_t StopPlaytimeTrackingForAllItems(  ) = 0;
    virtual uint64_t AddDependency( uint64_t, uint64_t ) = 0;
    virtual uint64_t RemoveDependency( uint64_t, uint64_t ) = 0;
    virtual uint64_t AddAppDependency( uint64_t, uint32_t ) = 0;
    virtual uint64_t RemoveAppDependency( uint64_t, uint32_t ) = 0;
    virtual uint64_t GetAppDependencies( uint64_t ) = 0;
    virtual uint64_t DeleteItem( uint64_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamNetworkingSockets_SteamNetworkingSockets004
{
#ifdef __cplusplus
    virtual uint32_t CreateListenSocketIP( const SteamNetworkingIPAddr * ) = 0;
    virtual uint32_t ConnectByIPAddress( const SteamNetworkingIPAddr * ) = 0;
    virtual uint32_t CreateListenSocketP2P( int32_t ) = 0;
    virtual uint32_t ConnectP2P( const SteamNetworkingIdentity_144 *, int32_t ) = 0;
    virtual uint32_t AcceptConnection( uint32_t ) = 0;
    virtual bool CloseConnection( uint32_t, int32_t, const char *, bool ) = 0;
    virtual bool CloseListenSocket( uint32_t ) = 0;
    virtual bool SetConnectionUserData( uint32_t, int64_t ) = 0;
    virtual int64_t GetConnectionUserData( uint32_t ) = 0;
    virtual void SetConnectionName( uint32_t, const char * ) = 0;
    virtual bool GetConnectionName( uint32_t, char *, int32_t ) = 0;
    virtual uint32_t SendMessageToConnection( uint32_t, const void *, uint32_t, int32_t ) = 0;
    virtual uint32_t FlushMessagesOnConnection( uint32_t ) = 0;
    virtual int32_t ReceiveMessagesOnConnection( uint32_t, u_SteamNetworkingMessage_t_144 **, int32_t ) = 0;
    virtual int32_t ReceiveMessagesOnListenSocket( uint32_t, u_SteamNetworkingMessage_t_144 **, int32_t ) = 0;
    virtual bool GetConnectionInfo( uint32_t, SteamNetConnectionInfo_t_144 * ) = 0;
    virtual bool GetQuickConnectionStatus( uint32_t, SteamNetworkingQuickConnectionStatus * ) = 0;
    virtual int32_t GetDetailedConnectionStatus( uint32_t, char *, int32_t ) = 0;
    virtual bool GetListenSocketAddress( uint32_t, SteamNetworkingIPAddr * ) = 0;
    virtual bool CreateSocketPair( uint32_t *, uint32_t *, bool, const SteamNetworkingIdentity_144 *, const SteamNetworkingIdentity_144 * ) = 0;
    virtual bool GetIdentity( SteamNetworkingIdentity_144 * ) = 0;
    virtual uint32_t InitAuthentication(  ) = 0;
    virtual uint32_t GetAuthenticationStatus( SteamNetAuthenticationStatus_t * ) = 0;
    virtual bool ReceivedRelayAuthTicket( const void *, int32_t, SteamDatagramRelayAuthTicket * ) = 0;
    virtual int32_t FindRelayAuthTicketForServer( const SteamNetworkingIdentity_144 *, int32_t, SteamDatagramRelayAuthTicket * ) = 0;
    virtual uint32_t ConnectToHostedDedicatedServer( const SteamNetworkingIdentity_144 *, int32_t ) = 0;
    virtual uint16_t GetHostedDedicatedServerPort(  ) = 0;
    virtual uint32_t GetHostedDedicatedServerPOPID(  ) = 0;
    virtual uint32_t GetHostedDedicatedServerAddress( SteamDatagramHostedAddress * ) = 0;
    virtual uint32_t CreateHostedDedicatedServerListenSocket( int32_t ) = 0;
    virtual uint32_t GetGameCoordinatorServerLogin( SteamDatagramGameCoordinatorServerLogin *, int32_t *, void * ) = 0;
    virtual ~u_ISteamNetworkingSockets_SteamNetworkingSockets004(  ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamNetworkingUtils_SteamNetworkingUtils002
{
#ifdef __cplusplus
    virtual uint32_t GetRelayNetworkStatus( SteamRelayNetworkStatus_t * ) = 0;
    virtual float GetLocalPingLocation( SteamNetworkPingLocation_t * ) = 0;
    virtual int32_t EstimatePingTimeBetweenTwoLocations( const SteamNetworkPingLocation_t *, const SteamNetworkPingLocation_t * ) = 0;
    virtual int32_t EstimatePingTimeFromLocalHost( const SteamNetworkPingLocation_t * ) = 0;
    virtual void ConvertPingLocationToString( const SteamNetworkPingLocation_t *, char *, int32_t ) = 0;
    virtual bool ParsePingLocationString( const char *, SteamNetworkPingLocation_t * ) = 0;
    virtual bool CheckPingDataUpToDate( float ) = 0;
    virtual int32_t GetPingToDataCenter( uint32_t, uint32_t * ) = 0;
    virtual int32_t GetDirectPingToPOP( uint32_t ) = 0;
    virtual int32_t GetPOPCount(  ) = 0;
    virtual int32_t GetPOPList( uint32_t *, int32_t ) = 0;
    virtual int64_t GetLocalTimestamp(  ) = 0;
    virtual void SetDebugOutputFunction( uint32_t, void (*U_STDCALL )(uint32_t, const char *) ) = 0;
    virtual bool SetConfigValue( uint32_t, uint32_t, int32_t, uint32_t, const void * ) = 0;
    virtual uint32_t GetConfigValue( uint32_t, uint32_t, int32_t, uint32_t *, void *, uint32_t * ) = 0;
    virtual bool GetConfigValueInfo( uint32_t, const char **, uint32_t *, uint32_t *, uint32_t * ) = 0;
    virtual uint32_t GetFirstConfigValue(  ) = 0;
    virtual void SteamNetworkingIPAddr_ToString( const SteamNetworkingIPAddr *, char *, uint32_t, bool ) = 0;
    virtual bool SteamNetworkingIPAddr_ParseString( SteamNetworkingIPAddr *, const char * ) = 0;
    virtual void SteamNetworkingIdentity_ToString( const SteamNetworkingIdentity_144 *, char *, uint32_t ) = 0;
    virtual bool SteamNetworkingIdentity_ParseString( SteamNetworkingIdentity_144 *, const char * ) = 0;
    virtual ~u_ISteamNetworkingUtils_SteamNetworkingUtils002(  ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamClient_SteamClient019
{
#ifdef __cplusplus
    virtual int32_t CreateSteamPipe(  ) = 0;
    virtual bool BReleaseSteamPipe( int32_t ) = 0;
    virtual int32_t ConnectToGlobalUser( int32_t ) = 0;
    virtual int32_t CreateLocalUser( int32_t *, uint32_t ) = 0;
    virtual void ReleaseUser( int32_t, int32_t ) = 0;
    virtual void /*ISteamUser*/ * GetISteamUser( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamGameServer*/ * GetISteamGameServer( int32_t, int32_t, const char * ) = 0;
    virtual void SetLocalIPBinding( uint32_t, uint16_t ) = 0;
    virtual void /*ISteamFriends*/ * GetISteamFriends( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUtils*/ * GetISteamUtils( int32_t, const char * ) = 0;
    virtual void /*ISteamMatchmaking*/ * GetISteamMatchmaking( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamMatchmakingServers*/ * GetISteamMatchmakingServers( int32_t, int32_t, const char * ) = 0;
    virtual void * GetISteamGenericInterface( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUserStats*/ * GetISteamUserStats( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamGameServerStats*/ * GetISteamGameServerStats( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamApps*/ * GetISteamApps( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamNetworking*/ * GetISteamNetworking( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamRemoteStorage*/ * GetISteamRemoteStorage( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamScreenshots*/ * GetISteamScreenshots( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamGameSearch*/ * GetISteamGameSearch( int32_t, int32_t, const char * ) = 0;
    virtual void RunFrame(  ) = 0;
    virtual uint32_t GetIPCCallCount(  ) = 0;
    virtual void SetWarningMessageHook( void (*U_CDECL )(int32_t, const char *) ) = 0;
    virtual bool BShutdownIfAllPipesClosed(  ) = 0;
    virtual void /*ISteamHTTP*/ * GetISteamHTTP( int32_t, int32_t, const char * ) = 0;
    virtual void * DEPRECATED_GetISteamUnifiedMessages( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamController*/ * GetISteamController( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUGC*/ * GetISteamUGC( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamAppList*/ * GetISteamAppList( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamMusic*/ * GetISteamMusic( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamMusicRemote*/ * GetISteamMusicRemote( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamHTMLSurface*/ * GetISteamHTMLSurface( int32_t, int32_t, const char * ) = 0;
    virtual void DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess( void (*U_STDCALL )(void) ) = 0;
    virtual void DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess( void (*U_STDCALL )(void) ) = 0;
    virtual void Set_SteamAPI_CCheckCallbackRegisteredInProcess( uint32_t (*U_STDCALL )(int32_t) ) = 0;
    virtual void /*ISteamInventory*/ * GetISteamInventory( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamVideo*/ * GetISteamVideo( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamParentalSettings*/ * GetISteamParentalSettings( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamInput*/ * GetISteamInput( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamParties*/ * GetISteamParties( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamRemotePlay*/ * GetISteamRemotePlay( int32_t, int32_t, const char * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001
{
#ifdef __cplusplus
    virtual uint32_t GetSessionCount(  ) = 0;
    virtual uint32_t GetSessionID( int32_t ) = 0;
    virtual CSteamID GetSessionSteamID( uint32_t ) = 0;
    virtual const char * GetSessionClientName( uint32_t ) = 0;
    virtual uint32_t GetSessionClientFormFactor( uint32_t ) = 0;
    virtual bool BGetSessionClientResolution( uint32_t, int32_t *, int32_t * ) = 0;
    virtual bool BSendRemotePlayTogetherInvite( CSteamID ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamClient_SteamClient020
{
#ifdef __cplusplus
    virtual int32_t CreateSteamPipe(  ) = 0;
    virtual bool BReleaseSteamPipe( int32_t ) = 0;
    virtual int32_t ConnectToGlobalUser( int32_t ) = 0;
    virtual int32_t CreateLocalUser( int32_t *, uint32_t ) = 0;
    virtual void ReleaseUser( int32_t, int32_t ) = 0;
    virtual void /*ISteamUser*/ * GetISteamUser( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamGameServer*/ * GetISteamGameServer( int32_t, int32_t, const char * ) = 0;
    virtual void SetLocalIPBinding( const SteamIPAddress_t *, uint16_t ) = 0;
    virtual void /*ISteamFriends*/ * GetISteamFriends( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUtils*/ * GetISteamUtils( int32_t, const char * ) = 0;
    virtual void /*ISteamMatchmaking*/ * GetISteamMatchmaking( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamMatchmakingServers*/ * GetISteamMatchmakingServers( int32_t, int32_t, const char * ) = 0;
    virtual void * GetISteamGenericInterface( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUserStats*/ * GetISteamUserStats( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamGameServerStats*/ * GetISteamGameServerStats( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamApps*/ * GetISteamApps( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamNetworking*/ * GetISteamNetworking( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamRemoteStorage*/ * GetISteamRemoteStorage( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamScreenshots*/ * GetISteamScreenshots( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamGameSearch*/ * GetISteamGameSearch( int32_t, int32_t, const char * ) = 0;
    virtual void RunFrame(  ) = 0;
    virtual uint32_t GetIPCCallCount(  ) = 0;
    virtual void SetWarningMessageHook( void (*U_CDECL )(int32_t, const char *) ) = 0;
    virtual bool BShutdownIfAllPipesClosed(  ) = 0;
    virtual void /*ISteamHTTP*/ * GetISteamHTTP( int32_t, int32_t, const char * ) = 0;
    virtual void * DEPRECATED_GetISteamUnifiedMessages( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamController*/ * GetISteamController( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUGC*/ * GetISteamUGC( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamAppList*/ * GetISteamAppList( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamMusic*/ * GetISteamMusic( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamMusicRemote*/ * GetISteamMusicRemote( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamHTMLSurface*/ * GetISteamHTMLSurface( int32_t, int32_t, const char * ) = 0;
    virtual void DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess( void (*U_STDCALL )(void) ) = 0;
    virtual void DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess( void (*U_STDCALL )(void) ) = 0;
    virtual void Set_SteamAPI_CCheckCallbackRegisteredInProcess( uint32_t (*U_CDECL )(int32_t) ) = 0;
    virtual void /*ISteamInventory*/ * GetISteamInventory( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamVideo*/ * GetISteamVideo( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamParentalSettings*/ * GetISteamParentalSettings( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamInput*/ * GetISteamInput( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamParties*/ * GetISteamParties( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamRemotePlay*/ * GetISteamRemotePlay( int32_t, int32_t, const char * ) = 0;
    virtual void DestroyAllInterfaces(  ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamNetworking_SteamNetworking006
{
#ifdef __cplusplus
    virtual bool SendP2PPacket( CSteamID, const void *, uint32_t, uint32_t, int32_t ) = 0;
    virtual bool IsP2PPacketAvailable( uint32_t *, int32_t ) = 0;
    virtual bool ReadP2PPacket( void *, uint32_t, uint32_t *, CSteamID *, int32_t ) = 0;
    virtual bool AcceptP2PSessionWithUser( CSteamID ) = 0;
    virtual bool CloseP2PSessionWithUser( CSteamID ) = 0;
    virtual bool CloseP2PChannelWithUser( CSteamID, int32_t ) = 0;
    virtual bool GetP2PSessionState( CSteamID, P2PSessionState_t * ) = 0;
    virtual bool AllowP2PPacketRelay( bool ) = 0;
    virtual uint32_t CreateListenSocket( int32_t, SteamIPAddress_t, uint16_t, bool ) = 0;
    virtual uint32_t CreateP2PConnectionSocket( CSteamID, int32_t, int32_t, bool ) = 0;
    virtual uint32_t CreateConnectionSocket( SteamIPAddress_t, uint16_t, int32_t ) = 0;
    virtual bool DestroySocket( uint32_t, bool ) = 0;
    virtual bool DestroyListenSocket( uint32_t, bool ) = 0;
    virtual bool SendDataOnSocket( uint32_t, void *, uint32_t, bool ) = 0;
    virtual bool IsDataAvailableOnSocket( uint32_t, uint32_t * ) = 0;
    virtual bool RetrieveDataFromSocket( uint32_t, void *, uint32_t, uint32_t * ) = 0;
    virtual bool IsDataAvailable( uint32_t, uint32_t *, uint32_t * ) = 0;
    virtual bool RetrieveData( uint32_t, void *, uint32_t, uint32_t *, uint32_t * ) = 0;
    virtual bool GetSocketInfo( uint32_t, CSteamID *, int32_t *, SteamIPAddress_t *, uint16_t * ) = 0;
    virtual bool GetListenSocketInfo( uint32_t, SteamIPAddress_t *, uint16_t * ) = 0;
    virtual uint32_t GetSocketConnectionType( uint32_t ) = 0;
    virtual int32_t GetMaxPacketSize( uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION014
{
#ifdef __cplusplus
    virtual uint64_t CreateQueryUserUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint64_t CreateQueryAllUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint64_t CreateQueryAllUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, const char * ) = 0;
    virtual uint64_t CreateQueryUGCDetailsRequest( uint64_t *, uint32_t ) = 0;
    virtual uint64_t SendQueryUGCRequest( uint64_t ) = 0;
    virtual bool GetQueryUGCResult( uint64_t, uint32_t, u_SteamUGCDetails_t_128x * ) = 0;
    virtual bool GetQueryUGCPreviewURL( uint64_t, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCMetadata( uint64_t, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCChildren( uint64_t, uint32_t, uint64_t *, uint32_t ) = 0;
    virtual bool GetQueryUGCStatistic( uint64_t, uint32_t, uint32_t, uint64_t * ) = 0;
    virtual uint32_t GetQueryUGCNumAdditionalPreviews( uint64_t, uint32_t ) = 0;
    virtual bool GetQueryUGCAdditionalPreview( uint64_t, uint32_t, uint32_t, char *, uint32_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetQueryUGCNumKeyValueTags( uint64_t, uint32_t ) = 0;
    virtual bool GetQueryUGCKeyValueTag( uint64_t, uint32_t, uint32_t, char *, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCKeyValueTag( uint64_t, uint32_t, const char *, char *, uint32_t ) = 0;
    virtual bool ReleaseQueryUGCRequest( uint64_t ) = 0;
    virtual bool AddRequiredTag( uint64_t, const char * ) = 0;
    virtual bool AddRequiredTagGroup( uint64_t, const u_SteamParamStringArray_t * ) = 0;
    virtual bool AddExcludedTag( uint64_t, const char * ) = 0;
    virtual bool SetReturnOnlyIDs( uint64_t, bool ) = 0;
    virtual bool SetReturnKeyValueTags( uint64_t, bool ) = 0;
    virtual bool SetReturnLongDescription( uint64_t, bool ) = 0;
    virtual bool SetReturnMetadata( uint64_t, bool ) = 0;
    virtual bool SetReturnChildren( uint64_t, bool ) = 0;
    virtual bool SetReturnAdditionalPreviews( uint64_t, bool ) = 0;
    virtual bool SetReturnTotalOnly( uint64_t, bool ) = 0;
    virtual bool SetReturnPlaytimeStats( uint64_t, uint32_t ) = 0;
    virtual bool SetLanguage( uint64_t, const char * ) = 0;
    virtual bool SetAllowCachedResponse( uint64_t, uint32_t ) = 0;
    virtual bool SetCloudFileNameFilter( uint64_t, const char * ) = 0;
    virtual bool SetMatchAnyTag( uint64_t, bool ) = 0;
    virtual bool SetSearchText( uint64_t, const char * ) = 0;
    virtual bool SetRankedByTrendDays( uint64_t, uint32_t ) = 0;
    virtual bool AddRequiredKeyValueTag( uint64_t, const char *, const char * ) = 0;
    virtual uint64_t RequestUGCDetails( uint64_t, uint32_t ) = 0;
    virtual uint64_t CreateItem( uint32_t, uint32_t ) = 0;
    virtual uint64_t StartItemUpdate( uint32_t, uint64_t ) = 0;
    virtual bool SetItemTitle( uint64_t, const char * ) = 0;
    virtual bool SetItemDescription( uint64_t, const char * ) = 0;
    virtual bool SetItemUpdateLanguage( uint64_t, const char * ) = 0;
    virtual bool SetItemMetadata( uint64_t, const char * ) = 0;
    virtual bool SetItemVisibility( uint64_t, uint32_t ) = 0;
    virtual bool SetItemTags( uint64_t, const u_SteamParamStringArray_t * ) = 0;
    virtual bool SetItemContent( uint64_t, const char * ) = 0;
    virtual bool SetItemPreview( uint64_t, const char * ) = 0;
    virtual bool SetAllowLegacyUpload( uint64_t, bool ) = 0;
    virtual bool RemoveAllItemKeyValueTags( uint64_t ) = 0;
    virtual bool RemoveItemKeyValueTags( uint64_t, const char * ) = 0;
    virtual bool AddItemKeyValueTag( uint64_t, const char *, const char * ) = 0;
    virtual bool AddItemPreviewFile( uint64_t, const char *, uint32_t ) = 0;
    virtual bool AddItemPreviewVideo( uint64_t, const char * ) = 0;
    virtual bool UpdateItemPreviewFile( uint64_t, uint32_t, const char * ) = 0;
    virtual bool UpdateItemPreviewVideo( uint64_t, uint32_t, const char * ) = 0;
    virtual bool RemoveItemPreview( uint64_t, uint32_t ) = 0;
    virtual uint64_t SubmitItemUpdate( uint64_t, const char * ) = 0;
    virtual uint32_t GetItemUpdateProgress( uint64_t, uint64_t *, uint64_t * ) = 0;
    virtual uint64_t SetUserItemVote( uint64_t, bool ) = 0;
    virtual uint64_t GetUserItemVote( uint64_t ) = 0;
    virtual uint64_t AddItemToFavorites( uint32_t, uint64_t ) = 0;
    virtual uint64_t RemoveItemFromFavorites( uint32_t, uint64_t ) = 0;
    virtual uint64_t SubscribeItem( uint64_t ) = 0;
    virtual uint64_t UnsubscribeItem( uint64_t ) = 0;
    virtual uint32_t GetNumSubscribedItems(  ) = 0;
    virtual uint32_t GetSubscribedItems( uint64_t *, uint32_t ) = 0;
    virtual uint32_t GetItemState( uint64_t ) = 0;
    virtual bool GetItemInstallInfo( uint64_t, uint64_t *, char *, uint32_t, uint32_t * ) = 0;
    virtual bool GetItemDownloadInfo( uint64_t, uint64_t *, uint64_t * ) = 0;
    virtual bool DownloadItem( uint64_t, bool ) = 0;
    virtual bool BInitWorkshopForGameServer( uint32_t, const char * ) = 0;
    virtual void SuspendDownloads( bool ) = 0;
    virtual uint64_t StartPlaytimeTracking( uint64_t *, uint32_t ) = 0;
    virtual uint64_t StopPlaytimeTracking( uint64_t *, uint32_t ) = 0;
    virtual uint64_t StopPlaytimeTrackingForAllItems(  ) = 0;
    virtual uint64_t AddDependency( uint64_t, uint64_t ) = 0;
    virtual uint64_t RemoveDependency( uint64_t, uint64_t ) = 0;
    virtual uint64_t AddAppDependency( uint64_t, uint32_t ) = 0;
    virtual uint64_t RemoveAppDependency( uint64_t, uint32_t ) = 0;
    virtual uint64_t GetAppDependencies( uint64_t ) = 0;
    virtual uint64_t DeleteItem( uint64_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamGameServer_SteamGameServer013
{
#ifdef __cplusplus
    virtual bool InitGameServer( uint32_t, uint16_t, uint16_t, uint32_t, uint32_t, const char * ) = 0;
    virtual void SetProduct( const char * ) = 0;
    virtual void SetGameDescription( const char * ) = 0;
    virtual void SetModDir( const char * ) = 0;
    virtual void SetDedicatedServer( bool ) = 0;
    virtual void LogOn( const char * ) = 0;
    virtual void LogOnAnonymous(  ) = 0;
    virtual void LogOff(  ) = 0;
    virtual bool BLoggedOn(  ) = 0;
    virtual bool BSecure(  ) = 0;
    virtual CSteamID GetSteamID(  ) = 0;
    virtual bool WasRestartRequested(  ) = 0;
    virtual void SetMaxPlayerCount( int32_t ) = 0;
    virtual void SetBotPlayerCount( int32_t ) = 0;
    virtual void SetServerName( const char * ) = 0;
    virtual void SetMapName( const char * ) = 0;
    virtual void SetPasswordProtected( bool ) = 0;
    virtual void SetSpectatorPort( uint16_t ) = 0;
    virtual void SetSpectatorServerName( const char * ) = 0;
    virtual void ClearAllKeyValues(  ) = 0;
    virtual void SetKeyValue( const char *, const char * ) = 0;
    virtual void SetGameTags( const char * ) = 0;
    virtual void SetGameData( const char * ) = 0;
    virtual void SetRegion( const char * ) = 0;
    virtual bool SendUserConnectAndAuthenticate( uint32_t, const void *, uint32_t, CSteamID * ) = 0;
    virtual CSteamID CreateUnauthenticatedUserConnection(  ) = 0;
    virtual void SendUserDisconnect( CSteamID ) = 0;
    virtual bool BUpdateUserData( CSteamID, const char *, uint32_t ) = 0;
    virtual uint32_t GetAuthSessionTicket( void *, int32_t, uint32_t * ) = 0;
    virtual uint32_t BeginAuthSession( const void *, int32_t, CSteamID ) = 0;
    virtual void EndAuthSession( CSteamID ) = 0;
    virtual void CancelAuthTicket( uint32_t ) = 0;
    virtual uint32_t UserHasLicenseForApp( CSteamID, uint32_t ) = 0;
    virtual bool RequestUserGroupStatus( CSteamID, CSteamID ) = 0;
    virtual void GetGameplayStats(  ) = 0;
    virtual uint64_t GetServerReputation(  ) = 0;
    virtual SteamIPAddress_t GetPublicIP(  ) = 0;
    virtual bool HandleIncomingPacket( const void *, int32_t, uint32_t, uint16_t ) = 0;
    virtual int32_t GetNextOutgoingPacket( void *, int32_t, uint32_t *, uint16_t * ) = 0;
    virtual void EnableHeartbeats( bool ) = 0;
    virtual void SetHeartbeatInterval( int32_t ) = 0;
    virtual void ForceHeartbeat(  ) = 0;
    virtual uint64_t AssociateWithClan( CSteamID ) = 0;
    virtual uint64_t ComputeNewPlayerCompatibility( CSteamID ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamNetworkingSockets_SteamNetworkingSockets006
{
#ifdef __cplusplus
    virtual uint32_t CreateListenSocketIP( const SteamNetworkingIPAddr *, int32_t, const SteamNetworkingConfigValue_t * ) = 0;
    virtual uint32_t ConnectByIPAddress( const SteamNetworkingIPAddr *, int32_t, const SteamNetworkingConfigValue_t * ) = 0;
    virtual uint32_t CreateListenSocketP2P( int32_t, int32_t, const SteamNetworkingConfigValue_t * ) = 0;
    virtual uint32_t ConnectP2P( const SteamNetworkingIdentity_144 *, int32_t, int32_t, const SteamNetworkingConfigValue_t * ) = 0;
    virtual uint32_t AcceptConnection( uint32_t ) = 0;
    virtual bool CloseConnection( uint32_t, int32_t, const char *, bool ) = 0;
    virtual bool CloseListenSocket( uint32_t ) = 0;
    virtual bool SetConnectionUserData( uint32_t, int64_t ) = 0;
    virtual int64_t GetConnectionUserData( uint32_t ) = 0;
    virtual void SetConnectionName( uint32_t, const char * ) = 0;
    virtual bool GetConnectionName( uint32_t, char *, int32_t ) = 0;
    virtual uint32_t SendMessageToConnection( uint32_t, const void *, uint32_t, int32_t, int64_t * ) = 0;
    virtual void SendMessages( int32_t, u_SteamNetworkingMessage_t_147 **, int64_t * ) = 0;
    virtual uint32_t FlushMessagesOnConnection( uint32_t ) = 0;
    virtual int32_t ReceiveMessagesOnConnection( uint32_t, u_SteamNetworkingMessage_t_147 **, int32_t ) = 0;
    virtual int32_t ReceiveMessagesOnListenSocket( uint32_t, u_SteamNetworkingMessage_t_147 **, int32_t ) = 0;
    virtual bool GetConnectionInfo( uint32_t, SteamNetConnectionInfo_t_144 * ) = 0;
    virtual bool GetQuickConnectionStatus( uint32_t, SteamNetworkingQuickConnectionStatus * ) = 0;
    virtual int32_t GetDetailedConnectionStatus( uint32_t, char *, int32_t ) = 0;
    virtual bool GetListenSocketAddress( uint32_t, SteamNetworkingIPAddr * ) = 0;
    virtual bool CreateSocketPair( uint32_t *, uint32_t *, bool, const SteamNetworkingIdentity_144 *, const SteamNetworkingIdentity_144 * ) = 0;
    virtual bool GetIdentity( SteamNetworkingIdentity_144 * ) = 0;
    virtual uint32_t InitAuthentication(  ) = 0;
    virtual uint32_t GetAuthenticationStatus( SteamNetAuthenticationStatus_t * ) = 0;
    virtual bool ReceivedRelayAuthTicket( const void *, int32_t, SteamDatagramRelayAuthTicket * ) = 0;
    virtual int32_t FindRelayAuthTicketForServer( const SteamNetworkingIdentity_144 *, int32_t, SteamDatagramRelayAuthTicket * ) = 0;
    virtual uint32_t ConnectToHostedDedicatedServer( const SteamNetworkingIdentity_144 *, int32_t, int32_t, const SteamNetworkingConfigValue_t * ) = 0;
    virtual uint16_t GetHostedDedicatedServerPort(  ) = 0;
    virtual uint32_t GetHostedDedicatedServerPOPID(  ) = 0;
    virtual uint32_t GetHostedDedicatedServerAddress( SteamDatagramHostedAddress * ) = 0;
    virtual uint32_t CreateHostedDedicatedServerListenSocket( int32_t, int32_t, const SteamNetworkingConfigValue_t * ) = 0;
    virtual uint32_t GetGameCoordinatorServerLogin( SteamDatagramGameCoordinatorServerLogin *, int32_t *, void * ) = 0;
    virtual uint32_t ConnectP2PCustomSignaling( u_ISteamNetworkingConnectionCustomSignaling *, const SteamNetworkingIdentity_144 *, int32_t, const SteamNetworkingConfigValue_t * ) = 0;
    virtual bool ReceivedP2PCustomSignal( const void *, int32_t, u_ISteamNetworkingCustomSignalingRecvContext * ) = 0;
    virtual ~u_ISteamNetworkingSockets_SteamNetworkingSockets006(  ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamNetworkingUtils_SteamNetworkingUtils003
{
#ifdef __cplusplus
    virtual u_SteamNetworkingMessage_t_147 * AllocateMessage( int32_t ) = 0;
    virtual uint32_t GetRelayNetworkStatus( SteamRelayNetworkStatus_t * ) = 0;
    virtual float GetLocalPingLocation( SteamNetworkPingLocation_t * ) = 0;
    virtual int32_t EstimatePingTimeBetweenTwoLocations( const SteamNetworkPingLocation_t *, const SteamNetworkPingLocation_t * ) = 0;
    virtual int32_t EstimatePingTimeFromLocalHost( const SteamNetworkPingLocation_t * ) = 0;
    virtual void ConvertPingLocationToString( const SteamNetworkPingLocation_t *, char *, int32_t ) = 0;
    virtual bool ParsePingLocationString( const char *, SteamNetworkPingLocation_t * ) = 0;
    virtual bool CheckPingDataUpToDate( float ) = 0;
    virtual int32_t GetPingToDataCenter( uint32_t, uint32_t * ) = 0;
    virtual int32_t GetDirectPingToPOP( uint32_t ) = 0;
    virtual int32_t GetPOPCount(  ) = 0;
    virtual int32_t GetPOPList( uint32_t *, int32_t ) = 0;
    virtual int64_t GetLocalTimestamp(  ) = 0;
    virtual void SetDebugOutputFunction( uint32_t, void (*U_STDCALL )(uint32_t, const char *) ) = 0;
    virtual bool SetConfigValue( uint32_t, uint32_t, int32_t, uint32_t, const void * ) = 0;
    virtual uint32_t GetConfigValue( uint32_t, uint32_t, int32_t, uint32_t *, void *, uint32_t * ) = 0;
    virtual bool GetConfigValueInfo( uint32_t, const char **, uint32_t *, uint32_t *, uint32_t * ) = 0;
    virtual uint32_t GetFirstConfigValue(  ) = 0;
    virtual void SteamNetworkingIPAddr_ToString( const SteamNetworkingIPAddr *, char *, uint32_t, bool ) = 0;
    virtual bool SteamNetworkingIPAddr_ParseString( SteamNetworkingIPAddr *, const char * ) = 0;
    virtual void SteamNetworkingIdentity_ToString( const SteamNetworkingIdentity_144 *, char *, uint32_t ) = 0;
    virtual bool SteamNetworkingIdentity_ParseString( SteamNetworkingIdentity_144 *, const char * ) = 0;
    virtual ~u_ISteamNetworkingUtils_SteamNetworkingUtils003(  ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamNetworkingSockets_SteamNetworkingSockets008
{
#ifdef __cplusplus
    virtual uint32_t CreateListenSocketIP( const SteamNetworkingIPAddr *, int32_t, const SteamNetworkingConfigValue_t * ) = 0;
    virtual uint32_t ConnectByIPAddress( const SteamNetworkingIPAddr *, int32_t, const SteamNetworkingConfigValue_t * ) = 0;
    virtual uint32_t CreateListenSocketP2P( int32_t, int32_t, const SteamNetworkingConfigValue_t * ) = 0;
    virtual uint32_t ConnectP2P( const SteamNetworkingIdentity_144 *, int32_t, int32_t, const SteamNetworkingConfigValue_t * ) = 0;
    virtual uint32_t AcceptConnection( uint32_t ) = 0;
    virtual bool CloseConnection( uint32_t, int32_t, const char *, bool ) = 0;
    virtual bool CloseListenSocket( uint32_t ) = 0;
    virtual bool SetConnectionUserData( uint32_t, int64_t ) = 0;
    virtual int64_t GetConnectionUserData( uint32_t ) = 0;
    virtual void SetConnectionName( uint32_t, const char * ) = 0;
    virtual bool GetConnectionName( uint32_t, char *, int32_t ) = 0;
    virtual uint32_t SendMessageToConnection( uint32_t, const void *, uint32_t, int32_t, int64_t * ) = 0;
    virtual void SendMessages( int32_t, u_SteamNetworkingMessage_t_147 *const *, int64_t * ) = 0;
    virtual uint32_t FlushMessagesOnConnection( uint32_t ) = 0;
    virtual int32_t ReceiveMessagesOnConnection( uint32_t, u_SteamNetworkingMessage_t_147 **, int32_t ) = 0;
    virtual bool GetConnectionInfo( uint32_t, SteamNetConnectionInfo_t_144 * ) = 0;
    virtual bool GetQuickConnectionStatus( uint32_t, SteamNetworkingQuickConnectionStatus * ) = 0;
    virtual int32_t GetDetailedConnectionStatus( uint32_t, char *, int32_t ) = 0;
    virtual bool GetListenSocketAddress( uint32_t, SteamNetworkingIPAddr * ) = 0;
    virtual bool CreateSocketPair( uint32_t *, uint32_t *, bool, const SteamNetworkingIdentity_144 *, const SteamNetworkingIdentity_144 * ) = 0;
    virtual bool GetIdentity( SteamNetworkingIdentity_144 * ) = 0;
    virtual uint32_t InitAuthentication(  ) = 0;
    virtual uint32_t GetAuthenticationStatus( SteamNetAuthenticationStatus_t * ) = 0;
    virtual uint32_t CreatePollGroup(  ) = 0;
    virtual bool DestroyPollGroup( uint32_t ) = 0;
    virtual bool SetConnectionPollGroup( uint32_t, uint32_t ) = 0;
    virtual int32_t ReceiveMessagesOnPollGroup( uint32_t, u_SteamNetworkingMessage_t_147 **, int32_t ) = 0;
    virtual bool ReceivedRelayAuthTicket( const void *, int32_t, SteamDatagramRelayAuthTicket * ) = 0;
    virtual int32_t FindRelayAuthTicketForServer( const SteamNetworkingIdentity_144 *, int32_t, SteamDatagramRelayAuthTicket * ) = 0;
    virtual uint32_t ConnectToHostedDedicatedServer( const SteamNetworkingIdentity_144 *, int32_t, int32_t, const SteamNetworkingConfigValue_t * ) = 0;
    virtual uint16_t GetHostedDedicatedServerPort(  ) = 0;
    virtual uint32_t GetHostedDedicatedServerPOPID(  ) = 0;
    virtual uint32_t GetHostedDedicatedServerAddress( SteamDatagramHostedAddress * ) = 0;
    virtual uint32_t CreateHostedDedicatedServerListenSocket( int32_t, int32_t, const SteamNetworkingConfigValue_t * ) = 0;
    virtual uint32_t GetGameCoordinatorServerLogin( SteamDatagramGameCoordinatorServerLogin *, int32_t *, void * ) = 0;
    virtual uint32_t ConnectP2PCustomSignaling( u_ISteamNetworkingConnectionCustomSignaling *, const SteamNetworkingIdentity_144 *, int32_t, const SteamNetworkingConfigValue_t * ) = 0;
    virtual bool ReceivedP2PCustomSignal( const void *, int32_t, u_ISteamNetworkingCustomSignalingRecvContext * ) = 0;
    virtual bool GetCertificateRequest( int32_t *, void *, char (*)[1024] ) = 0;
    virtual bool SetCertificate( const void *, int32_t, char (*)[1024] ) = 0;
    virtual ~u_ISteamNetworkingSockets_SteamNetworkingSockets008(  ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUser_SteamUser021
{
#ifdef __cplusplus
    virtual int32_t GetHSteamUser(  ) = 0;
    virtual bool BLoggedOn(  ) = 0;
    virtual CSteamID GetSteamID(  ) = 0;
    virtual int32_t InitiateGameConnection_DEPRECATED( void *, int32_t, CSteamID, uint32_t, uint16_t, bool ) = 0;
    virtual void TerminateGameConnection_DEPRECATED( uint32_t, uint16_t ) = 0;
    virtual void TrackAppUsageEvent( CGameID, int32_t, const char * ) = 0;
    virtual bool GetUserDataFolder( char *, int32_t ) = 0;
    virtual void StartVoiceRecording(  ) = 0;
    virtual void StopVoiceRecording(  ) = 0;
    virtual uint32_t GetAvailableVoice( uint32_t *, uint32_t *, uint32_t ) = 0;
    virtual uint32_t GetVoice( bool, void *, uint32_t, uint32_t *, bool, void *, uint32_t, uint32_t *, uint32_t ) = 0;
    virtual uint32_t DecompressVoice( const void *, uint32_t, void *, uint32_t, uint32_t *, uint32_t ) = 0;
    virtual uint32_t GetVoiceOptimalSampleRate(  ) = 0;
    virtual uint32_t GetAuthSessionTicket( void *, int32_t, uint32_t * ) = 0;
    virtual uint32_t BeginAuthSession( const void *, int32_t, CSteamID ) = 0;
    virtual void EndAuthSession( CSteamID ) = 0;
    virtual void CancelAuthTicket( uint32_t ) = 0;
    virtual uint32_t UserHasLicenseForApp( CSteamID, uint32_t ) = 0;
    virtual bool BIsBehindNAT(  ) = 0;
    virtual void AdvertiseGame( CSteamID, uint32_t, uint16_t ) = 0;
    virtual uint64_t RequestEncryptedAppTicket( void *, int32_t ) = 0;
    virtual bool GetEncryptedAppTicket( void *, int32_t, uint32_t * ) = 0;
    virtual int32_t GetGameBadgeLevel( int32_t, bool ) = 0;
    virtual int32_t GetPlayerSteamLevel(  ) = 0;
    virtual uint64_t RequestStoreAuthURL( const char * ) = 0;
    virtual bool BIsPhoneVerified(  ) = 0;
    virtual bool BIsTwoFactorEnabled(  ) = 0;
    virtual bool BIsPhoneIdentifying(  ) = 0;
    virtual bool BIsPhoneRequiringVerification(  ) = 0;
    virtual uint64_t GetMarketEligibility(  ) = 0;
    virtual uint64_t GetDurationControl(  ) = 0;
    virtual bool BSetDurationControlOnlineState( uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012
{
#ifdef __cplusplus
    virtual bool RequestCurrentStats(  ) = 0;
    virtual bool GetStat( const char *, int32_t * ) = 0;
    virtual bool GetStat( const char *, float * ) = 0;
    virtual bool SetStat( const char *, int32_t ) = 0;
    virtual bool SetStat( const char *, float ) = 0;
    virtual bool UpdateAvgRateStat( const char *, float, double ) = 0;
    virtual bool GetAchievement( const char *, bool * ) = 0;
    virtual bool SetAchievement( const char * ) = 0;
    virtual bool ClearAchievement( const char * ) = 0;
    virtual bool GetAchievementAndUnlockTime( const char *, bool *, uint32_t * ) = 0;
    virtual bool StoreStats(  ) = 0;
    virtual int32_t GetAchievementIcon( const char * ) = 0;
    virtual const char * GetAchievementDisplayAttribute( const char *, const char * ) = 0;
    virtual bool IndicateAchievementProgress( const char *, uint32_t, uint32_t ) = 0;
    virtual uint32_t GetNumAchievements(  ) = 0;
    virtual const char * GetAchievementName( uint32_t ) = 0;
    virtual uint64_t RequestUserStats( CSteamID ) = 0;
    virtual bool GetUserStat( CSteamID, const char *, int32_t * ) = 0;
    virtual bool GetUserStat( CSteamID, const char *, float * ) = 0;
    virtual bool GetUserAchievement( CSteamID, const char *, bool * ) = 0;
    virtual bool GetUserAchievementAndUnlockTime( CSteamID, const char *, bool *, uint32_t * ) = 0;
    virtual bool ResetAllStats( bool ) = 0;
    virtual uint64_t FindOrCreateLeaderboard( const char *, uint32_t, uint32_t ) = 0;
    virtual uint64_t FindLeaderboard( const char * ) = 0;
    virtual const char * GetLeaderboardName( uint64_t ) = 0;
    virtual int32_t GetLeaderboardEntryCount( uint64_t ) = 0;
    virtual uint32_t GetLeaderboardSortMethod( uint64_t ) = 0;
    virtual uint32_t GetLeaderboardDisplayType( uint64_t ) = 0;
    virtual uint64_t DownloadLeaderboardEntries( uint64_t, uint32_t, int32_t, int32_t ) = 0;
    virtual uint64_t DownloadLeaderboardEntriesForUsers( uint64_t, CSteamID *, int32_t ) = 0;
    virtual bool GetDownloadedLeaderboardEntry( uint64_t, int32_t, u_LeaderboardEntry_t_123 *, int32_t *, int32_t ) = 0;
    virtual uint64_t UploadLeaderboardScore( uint64_t, uint32_t, int32_t, const int32_t *, int32_t ) = 0;
    virtual uint64_t AttachLeaderboardUGC( uint64_t, uint64_t ) = 0;
    virtual uint64_t GetNumberOfCurrentPlayers(  ) = 0;
    virtual uint64_t RequestGlobalAchievementPercentages(  ) = 0;
    virtual int32_t GetMostAchievedAchievementInfo( char *, uint32_t, float *, bool * ) = 0;
    virtual int32_t GetNextMostAchievedAchievementInfo( int32_t, char *, uint32_t, float *, bool * ) = 0;
    virtual bool GetAchievementAchievedPercent( const char *, float * ) = 0;
    virtual uint64_t RequestGlobalStats( int32_t ) = 0;
    virtual bool GetGlobalStat( const char *, int64_t * ) = 0;
    virtual bool GetGlobalStat( const char *, double * ) = 0;
    virtual int32_t GetGlobalStatHistory( const char *, int64_t *, uint32_t ) = 0;
    virtual int32_t GetGlobalStatHistory( const char *, double *, uint32_t ) = 0;
    virtual bool GetAchievementProgressLimits( const char *, int32_t *, int32_t * ) = 0;
    virtual bool GetAchievementProgressLimits( const char *, float *, float * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUtils_SteamUtils010
{
#ifdef __cplusplus
    virtual uint32_t GetSecondsSinceAppActive(  ) = 0;
    virtual uint32_t GetSecondsSinceComputerActive(  ) = 0;
    virtual uint32_t GetConnectedUniverse(  ) = 0;
    virtual uint32_t GetServerRealTime(  ) = 0;
    virtual const char * GetIPCountry(  ) = 0;
    virtual bool GetImageSize( int32_t, uint32_t *, uint32_t * ) = 0;
    virtual bool GetImageRGBA( int32_t, uint8_t *, int32_t ) = 0;
    virtual bool GetCSERIPPort( uint32_t *, uint16_t * ) = 0;
    virtual uint8_t GetCurrentBatteryPower(  ) = 0;
    virtual uint32_t GetAppID(  ) = 0;
    virtual void SetOverlayNotificationPosition( uint32_t ) = 0;
    virtual bool IsAPICallCompleted( uint64_t, bool * ) = 0;
    virtual uint32_t GetAPICallFailureReason( uint64_t ) = 0;
    virtual bool GetAPICallResult( uint64_t, void *, int32_t, int32_t, bool * ) = 0;
    virtual void RunFrame(  ) = 0;
    virtual uint32_t GetIPCCallCount(  ) = 0;
    virtual void SetWarningMessageHook( void (*U_CDECL )(int32_t, const char *) ) = 0;
    virtual bool IsOverlayEnabled(  ) = 0;
    virtual bool BOverlayNeedsPresent(  ) = 0;
    virtual uint64_t CheckFileSignature( const char * ) = 0;
    virtual bool ShowGamepadTextInput( uint32_t, uint32_t, const char *, uint32_t, const char * ) = 0;
    virtual uint32_t GetEnteredGamepadTextLength(  ) = 0;
    virtual bool GetEnteredGamepadTextInput( char *, uint32_t ) = 0;
    virtual const char * GetSteamUILanguage(  ) = 0;
    virtual bool IsSteamRunningInVR(  ) = 0;
    virtual void SetOverlayNotificationInset( int32_t, int32_t ) = 0;
    virtual bool IsSteamInBigPictureMode(  ) = 0;
    virtual void StartVRDashboard(  ) = 0;
    virtual bool IsVRHeadsetStreamingEnabled(  ) = 0;
    virtual void SetVRHeadsetStreamingEnabled( bool ) = 0;
    virtual bool IsSteamChinaLauncher(  ) = 0;
    virtual bool InitFilterText( uint32_t ) = 0;
    virtual int32_t FilterText( uint32_t, CSteamID, const char *, char *, uint32_t ) = 0;
    virtual uint32_t GetIPv6ConnectivityState( uint32_t ) = 0;
    virtual bool IsSteamRunningOnSteamDeck(  ) = 0;
    virtual bool ShowFloatingGamepadTextInput( uint32_t, int32_t, int32_t, int32_t, int32_t ) = 0;
    virtual void SetGameLauncherMode( bool ) = 0;
    virtual bool DismissFloatingGamepadTextInput(  ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamNetworkingMessages_SteamNetworkingMessages002
{
#ifdef __cplusplus
    virtual uint32_t SendMessageToUser( const SteamNetworkingIdentity_144 *, const void *, uint32_t, int32_t, int32_t ) = 0;
    virtual int32_t ReceiveMessagesOnChannel( int32_t, u_SteamNetworkingMessage_t_153a **, int32_t ) = 0;
    virtual bool AcceptSessionWithUser( const SteamNetworkingIdentity_144 * ) = 0;
    virtual bool CloseSessionWithUser( const SteamNetworkingIdentity_144 * ) = 0;
    virtual bool CloseChannelWithUser( const SteamNetworkingIdentity_144 *, int32_t ) = 0;
    virtual uint32_t GetSessionConnectionInfo( const SteamNetworkingIdentity_144 *, SteamNetConnectionInfo_t_153a *, SteamNetConnectionRealTimeStatus_t * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamNetworkingSockets_SteamNetworkingSockets009
{
#ifdef __cplusplus
    virtual uint32_t CreateListenSocketIP( const SteamNetworkingIPAddr *, int32_t, const SteamNetworkingConfigValue_t * ) = 0;
    virtual uint32_t ConnectByIPAddress( const SteamNetworkingIPAddr *, int32_t, const SteamNetworkingConfigValue_t * ) = 0;
    virtual uint32_t CreateListenSocketP2P( int32_t, int32_t, const SteamNetworkingConfigValue_t * ) = 0;
    virtual uint32_t ConnectP2P( const SteamNetworkingIdentity_144 *, int32_t, int32_t, const SteamNetworkingConfigValue_t * ) = 0;
    virtual uint32_t AcceptConnection( uint32_t ) = 0;
    virtual bool CloseConnection( uint32_t, int32_t, const char *, bool ) = 0;
    virtual bool CloseListenSocket( uint32_t ) = 0;
    virtual bool SetConnectionUserData( uint32_t, int64_t ) = 0;
    virtual int64_t GetConnectionUserData( uint32_t ) = 0;
    virtual void SetConnectionName( uint32_t, const char * ) = 0;
    virtual bool GetConnectionName( uint32_t, char *, int32_t ) = 0;
    virtual uint32_t SendMessageToConnection( uint32_t, const void *, uint32_t, int32_t, int64_t * ) = 0;
    virtual void SendMessages( int32_t, u_SteamNetworkingMessage_t_147 *const *, int64_t * ) = 0;
    virtual uint32_t FlushMessagesOnConnection( uint32_t ) = 0;
    virtual int32_t ReceiveMessagesOnConnection( uint32_t, u_SteamNetworkingMessage_t_147 **, int32_t ) = 0;
    virtual bool GetConnectionInfo( uint32_t, SteamNetConnectionInfo_t_144 * ) = 0;
    virtual bool GetQuickConnectionStatus( uint32_t, SteamNetworkingQuickConnectionStatus * ) = 0;
    virtual int32_t GetDetailedConnectionStatus( uint32_t, char *, int32_t ) = 0;
    virtual bool GetListenSocketAddress( uint32_t, SteamNetworkingIPAddr * ) = 0;
    virtual bool CreateSocketPair( uint32_t *, uint32_t *, bool, const SteamNetworkingIdentity_144 *, const SteamNetworkingIdentity_144 * ) = 0;
    virtual bool GetIdentity( SteamNetworkingIdentity_144 * ) = 0;
    virtual uint32_t InitAuthentication(  ) = 0;
    virtual uint32_t GetAuthenticationStatus( SteamNetAuthenticationStatus_t * ) = 0;
    virtual uint32_t CreatePollGroup(  ) = 0;
    virtual bool DestroyPollGroup( uint32_t ) = 0;
    virtual bool SetConnectionPollGroup( uint32_t, uint32_t ) = 0;
    virtual int32_t ReceiveMessagesOnPollGroup( uint32_t, u_SteamNetworkingMessage_t_147 **, int32_t ) = 0;
    virtual bool ReceivedRelayAuthTicket( const void *, int32_t, SteamDatagramRelayAuthTicket * ) = 0;
    virtual int32_t FindRelayAuthTicketForServer( const SteamNetworkingIdentity_144 *, int32_t, SteamDatagramRelayAuthTicket * ) = 0;
    virtual uint32_t ConnectToHostedDedicatedServer( const SteamNetworkingIdentity_144 *, int32_t, int32_t, const SteamNetworkingConfigValue_t * ) = 0;
    virtual uint16_t GetHostedDedicatedServerPort(  ) = 0;
    virtual uint32_t GetHostedDedicatedServerPOPID(  ) = 0;
    virtual uint32_t GetHostedDedicatedServerAddress( SteamDatagramHostedAddress * ) = 0;
    virtual uint32_t CreateHostedDedicatedServerListenSocket( int32_t, int32_t, const SteamNetworkingConfigValue_t * ) = 0;
    virtual uint32_t GetGameCoordinatorServerLogin( SteamDatagramGameCoordinatorServerLogin *, int32_t *, void * ) = 0;
    virtual uint32_t ConnectP2PCustomSignaling( void /*ISteamNetworkingConnectionSignaling*/ *, const SteamNetworkingIdentity_144 *, int32_t, int32_t, const SteamNetworkingConfigValue_t * ) = 0;
    virtual bool ReceivedP2PCustomSignal( const void *, int32_t, void /*ISteamNetworkingSignalingRecvContext*/ * ) = 0;
    virtual bool GetCertificateRequest( int32_t *, void *, char (*)[1024] ) = 0;
    virtual bool SetCertificate( const void *, int32_t, char (*)[1024] ) = 0;
    virtual void RunCallbacks(  ) = 0;
    virtual ~u_ISteamNetworkingSockets_SteamNetworkingSockets009(  ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamInput_SteamInput002
{
#ifdef __cplusplus
    virtual bool Init(  ) = 0;
    virtual bool Shutdown(  ) = 0;
    virtual void RunFrame(  ) = 0;
    virtual int32_t GetConnectedControllers( uint64_t * ) = 0;
    virtual uint64_t GetActionSetHandle( const char * ) = 0;
    virtual void ActivateActionSet( uint64_t, uint64_t ) = 0;
    virtual uint64_t GetCurrentActionSet( uint64_t ) = 0;
    virtual void ActivateActionSetLayer( uint64_t, uint64_t ) = 0;
    virtual void DeactivateActionSetLayer( uint64_t, uint64_t ) = 0;
    virtual void DeactivateAllActionSetLayers( uint64_t ) = 0;
    virtual int32_t GetActiveActionSetLayers( uint64_t, uint64_t * ) = 0;
    virtual uint64_t GetDigitalActionHandle( const char * ) = 0;
    virtual InputDigitalActionData_t GetDigitalActionData( uint64_t, uint64_t ) = 0;
    virtual int32_t GetDigitalActionOrigins( uint64_t, uint64_t, uint64_t, uint32_t * ) = 0;
    virtual uint64_t GetAnalogActionHandle( const char * ) = 0;
    virtual InputAnalogActionData_t GetAnalogActionData( uint64_t, uint64_t ) = 0;
    virtual int32_t GetAnalogActionOrigins( uint64_t, uint64_t, uint64_t, uint32_t * ) = 0;
    virtual const char * GetGlyphForActionOrigin( uint32_t ) = 0;
    virtual const char * GetStringForActionOrigin( uint32_t ) = 0;
    virtual void StopAnalogActionMomentum( uint64_t, uint64_t ) = 0;
    virtual InputMotionData_t GetMotionData( uint64_t ) = 0;
    virtual void TriggerVibration( uint64_t, uint16_t, uint16_t ) = 0;
    virtual void SetLEDColor( uint64_t, uint8_t, uint8_t, uint8_t, uint32_t ) = 0;
    virtual void TriggerHapticPulse( uint64_t, uint32_t, uint16_t ) = 0;
    virtual void TriggerRepeatedHapticPulse( uint64_t, uint32_t, uint16_t, uint16_t, uint16_t, uint32_t ) = 0;
    virtual bool ShowBindingPanel( uint64_t ) = 0;
    virtual uint32_t GetInputTypeForHandle( uint64_t ) = 0;
    virtual uint64_t GetControllerForGamepadIndex( int32_t ) = 0;
    virtual int32_t GetGamepadIndexForController( uint64_t ) = 0;
    virtual const char * GetStringForXboxOrigin( uint32_t ) = 0;
    virtual const char * GetGlyphForXboxOrigin( uint32_t ) = 0;
    virtual uint32_t GetActionOriginFromXboxOrigin( uint64_t, uint32_t ) = 0;
    virtual uint32_t TranslateActionOrigin( uint32_t, uint32_t ) = 0;
    virtual bool GetDeviceBindingRevision( uint64_t, int32_t *, int32_t * ) = 0;
    virtual uint32_t GetRemotePlaySessionID( uint64_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamController_SteamController008
{
#ifdef __cplusplus
    virtual bool Init(  ) = 0;
    virtual bool Shutdown(  ) = 0;
    virtual void RunFrame(  ) = 0;
    virtual int32_t GetConnectedControllers( uint64_t * ) = 0;
    virtual uint64_t GetActionSetHandle( const char * ) = 0;
    virtual void ActivateActionSet( uint64_t, uint64_t ) = 0;
    virtual uint64_t GetCurrentActionSet( uint64_t ) = 0;
    virtual void ActivateActionSetLayer( uint64_t, uint64_t ) = 0;
    virtual void DeactivateActionSetLayer( uint64_t, uint64_t ) = 0;
    virtual void DeactivateAllActionSetLayers( uint64_t ) = 0;
    virtual int32_t GetActiveActionSetLayers( uint64_t, uint64_t * ) = 0;
    virtual uint64_t GetDigitalActionHandle( const char * ) = 0;
    virtual InputDigitalActionData_t GetDigitalActionData( uint64_t, uint64_t ) = 0;
    virtual int32_t GetDigitalActionOrigins( uint64_t, uint64_t, uint64_t, uint32_t * ) = 0;
    virtual uint64_t GetAnalogActionHandle( const char * ) = 0;
    virtual InputAnalogActionData_t GetAnalogActionData( uint64_t, uint64_t ) = 0;
    virtual int32_t GetAnalogActionOrigins( uint64_t, uint64_t, uint64_t, uint32_t * ) = 0;
    virtual const char * GetGlyphForActionOrigin( uint32_t ) = 0;
    virtual const char * GetStringForActionOrigin( uint32_t ) = 0;
    virtual void StopAnalogActionMomentum( uint64_t, uint64_t ) = 0;
    virtual InputMotionData_t GetMotionData( uint64_t ) = 0;
    virtual void TriggerHapticPulse( uint64_t, uint32_t, uint16_t ) = 0;
    virtual void TriggerRepeatedHapticPulse( uint64_t, uint32_t, uint16_t, uint16_t, uint16_t, uint32_t ) = 0;
    virtual void TriggerVibration( uint64_t, uint16_t, uint16_t ) = 0;
    virtual void SetLEDColor( uint64_t, uint8_t, uint8_t, uint8_t, uint32_t ) = 0;
    virtual bool ShowBindingPanel( uint64_t ) = 0;
    virtual uint32_t GetInputTypeForHandle( uint64_t ) = 0;
    virtual uint64_t GetControllerForGamepadIndex( int32_t ) = 0;
    virtual int32_t GetGamepadIndexForController( uint64_t ) = 0;
    virtual const char * GetStringForXboxOrigin( uint32_t ) = 0;
    virtual const char * GetGlyphForXboxOrigin( uint32_t ) = 0;
    virtual uint32_t GetActionOriginFromXboxOrigin( uint64_t, uint32_t ) = 0;
    virtual uint32_t TranslateActionOrigin( uint32_t, uint32_t ) = 0;
    virtual bool GetControllerBindingRevision( uint64_t, int32_t *, int32_t * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015
{
#ifdef __cplusplus
    virtual uint64_t CreateQueryUserUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint64_t CreateQueryAllUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint64_t CreateQueryAllUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, const char * ) = 0;
    virtual uint64_t CreateQueryUGCDetailsRequest( uint64_t *, uint32_t ) = 0;
    virtual uint64_t SendQueryUGCRequest( uint64_t ) = 0;
    virtual bool GetQueryUGCResult( uint64_t, uint32_t, u_SteamUGCDetails_t_128x * ) = 0;
    virtual uint32_t GetQueryUGCNumTags( uint64_t, uint32_t ) = 0;
    virtual bool GetQueryUGCTag( uint64_t, uint32_t, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCTagDisplayName( uint64_t, uint32_t, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCPreviewURL( uint64_t, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCMetadata( uint64_t, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCChildren( uint64_t, uint32_t, uint64_t *, uint32_t ) = 0;
    virtual bool GetQueryUGCStatistic( uint64_t, uint32_t, uint32_t, uint64_t * ) = 0;
    virtual uint32_t GetQueryUGCNumAdditionalPreviews( uint64_t, uint32_t ) = 0;
    virtual bool GetQueryUGCAdditionalPreview( uint64_t, uint32_t, uint32_t, char *, uint32_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetQueryUGCNumKeyValueTags( uint64_t, uint32_t ) = 0;
    virtual bool GetQueryUGCKeyValueTag( uint64_t, uint32_t, uint32_t, char *, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCKeyValueTag( uint64_t, uint32_t, const char *, char *, uint32_t ) = 0;
    virtual bool ReleaseQueryUGCRequest( uint64_t ) = 0;
    virtual bool AddRequiredTag( uint64_t, const char * ) = 0;
    virtual bool AddRequiredTagGroup( uint64_t, const u_SteamParamStringArray_t * ) = 0;
    virtual bool AddExcludedTag( uint64_t, const char * ) = 0;
    virtual bool SetReturnOnlyIDs( uint64_t, bool ) = 0;
    virtual bool SetReturnKeyValueTags( uint64_t, bool ) = 0;
    virtual bool SetReturnLongDescription( uint64_t, bool ) = 0;
    virtual bool SetReturnMetadata( uint64_t, bool ) = 0;
    virtual bool SetReturnChildren( uint64_t, bool ) = 0;
    virtual bool SetReturnAdditionalPreviews( uint64_t, bool ) = 0;
    virtual bool SetReturnTotalOnly( uint64_t, bool ) = 0;
    virtual bool SetReturnPlaytimeStats( uint64_t, uint32_t ) = 0;
    virtual bool SetLanguage( uint64_t, const char * ) = 0;
    virtual bool SetAllowCachedResponse( uint64_t, uint32_t ) = 0;
    virtual bool SetCloudFileNameFilter( uint64_t, const char * ) = 0;
    virtual bool SetMatchAnyTag( uint64_t, bool ) = 0;
    virtual bool SetSearchText( uint64_t, const char * ) = 0;
    virtual bool SetRankedByTrendDays( uint64_t, uint32_t ) = 0;
    virtual bool AddRequiredKeyValueTag( uint64_t, const char *, const char * ) = 0;
    virtual uint64_t RequestUGCDetails( uint64_t, uint32_t ) = 0;
    virtual uint64_t CreateItem( uint32_t, uint32_t ) = 0;
    virtual uint64_t StartItemUpdate( uint32_t, uint64_t ) = 0;
    virtual bool SetItemTitle( uint64_t, const char * ) = 0;
    virtual bool SetItemDescription( uint64_t, const char * ) = 0;
    virtual bool SetItemUpdateLanguage( uint64_t, const char * ) = 0;
    virtual bool SetItemMetadata( uint64_t, const char * ) = 0;
    virtual bool SetItemVisibility( uint64_t, uint32_t ) = 0;
    virtual bool SetItemTags( uint64_t, const u_SteamParamStringArray_t * ) = 0;
    virtual bool SetItemContent( uint64_t, const char * ) = 0;
    virtual bool SetItemPreview( uint64_t, const char * ) = 0;
    virtual bool SetAllowLegacyUpload( uint64_t, bool ) = 0;
    virtual bool RemoveAllItemKeyValueTags( uint64_t ) = 0;
    virtual bool RemoveItemKeyValueTags( uint64_t, const char * ) = 0;
    virtual bool AddItemKeyValueTag( uint64_t, const char *, const char * ) = 0;
    virtual bool AddItemPreviewFile( uint64_t, const char *, uint32_t ) = 0;
    virtual bool AddItemPreviewVideo( uint64_t, const char * ) = 0;
    virtual bool UpdateItemPreviewFile( uint64_t, uint32_t, const char * ) = 0;
    virtual bool UpdateItemPreviewVideo( uint64_t, uint32_t, const char * ) = 0;
    virtual bool RemoveItemPreview( uint64_t, uint32_t ) = 0;
    virtual uint64_t SubmitItemUpdate( uint64_t, const char * ) = 0;
    virtual uint32_t GetItemUpdateProgress( uint64_t, uint64_t *, uint64_t * ) = 0;
    virtual uint64_t SetUserItemVote( uint64_t, bool ) = 0;
    virtual uint64_t GetUserItemVote( uint64_t ) = 0;
    virtual uint64_t AddItemToFavorites( uint32_t, uint64_t ) = 0;
    virtual uint64_t RemoveItemFromFavorites( uint32_t, uint64_t ) = 0;
    virtual uint64_t SubscribeItem( uint64_t ) = 0;
    virtual uint64_t UnsubscribeItem( uint64_t ) = 0;
    virtual uint32_t GetNumSubscribedItems(  ) = 0;
    virtual uint32_t GetSubscribedItems( uint64_t *, uint32_t ) = 0;
    virtual uint32_t GetItemState( uint64_t ) = 0;
    virtual bool GetItemInstallInfo( uint64_t, uint64_t *, char *, uint32_t, uint32_t * ) = 0;
    virtual bool GetItemDownloadInfo( uint64_t, uint64_t *, uint64_t * ) = 0;
    virtual bool DownloadItem( uint64_t, bool ) = 0;
    virtual bool BInitWorkshopForGameServer( uint32_t, const char * ) = 0;
    virtual void SuspendDownloads( bool ) = 0;
    virtual uint64_t StartPlaytimeTracking( uint64_t *, uint32_t ) = 0;
    virtual uint64_t StopPlaytimeTracking( uint64_t *, uint32_t ) = 0;
    virtual uint64_t StopPlaytimeTrackingForAllItems(  ) = 0;
    virtual uint64_t AddDependency( uint64_t, uint64_t ) = 0;
    virtual uint64_t RemoveDependency( uint64_t, uint64_t ) = 0;
    virtual uint64_t AddAppDependency( uint64_t, uint32_t ) = 0;
    virtual uint64_t RemoveAppDependency( uint64_t, uint32_t ) = 0;
    virtual uint64_t GetAppDependencies( uint64_t ) = 0;
    virtual uint64_t DeleteItem( uint64_t ) = 0;
    virtual bool ShowWorkshopEULA(  ) = 0;
    virtual uint64_t GetWorkshopEULAStatus(  ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016
{
#ifdef __cplusplus
    virtual bool FileWrite( const char *, const void *, int32_t ) = 0;
    virtual int32_t FileRead( const char *, void *, int32_t ) = 0;
    virtual uint64_t FileWriteAsync( const char *, const void *, uint32_t ) = 0;
    virtual uint64_t FileReadAsync( const char *, uint32_t, uint32_t ) = 0;
    virtual bool FileReadAsyncComplete( uint64_t, void *, uint32_t ) = 0;
    virtual bool FileForget( const char * ) = 0;
    virtual bool FileDelete( const char * ) = 0;
    virtual uint64_t FileShare( const char * ) = 0;
    virtual bool SetSyncPlatforms( const char *, uint32_t ) = 0;
    virtual uint64_t FileWriteStreamOpen( const char * ) = 0;
    virtual bool FileWriteStreamWriteChunk( uint64_t, const void *, int32_t ) = 0;
    virtual bool FileWriteStreamClose( uint64_t ) = 0;
    virtual bool FileWriteStreamCancel( uint64_t ) = 0;
    virtual bool FileExists( const char * ) = 0;
    virtual bool FilePersisted( const char * ) = 0;
    virtual int32_t GetFileSize( const char * ) = 0;
    virtual int64_t GetFileTimestamp( const char * ) = 0;
    virtual uint32_t GetSyncPlatforms( const char * ) = 0;
    virtual int32_t GetFileCount(  ) = 0;
    virtual const char * GetFileNameAndSize( int32_t, int32_t * ) = 0;
    virtual bool GetQuota( uint64_t *, uint64_t * ) = 0;
    virtual bool IsCloudEnabledForAccount(  ) = 0;
    virtual bool IsCloudEnabledForApp(  ) = 0;
    virtual void SetCloudEnabledForApp( bool ) = 0;
    virtual uint64_t UGCDownload( uint64_t, uint32_t ) = 0;
    virtual bool GetUGCDownloadProgress( uint64_t, int32_t *, int32_t * ) = 0;
    virtual bool GetUGCDetails( uint64_t, uint32_t *, char **, int32_t *, CSteamID * ) = 0;
    virtual int32_t UGCRead( uint64_t, void *, int32_t, uint32_t, uint32_t ) = 0;
    virtual int32_t GetCachedUGCCount(  ) = 0;
    virtual uint64_t GetCachedUGCHandle( int32_t ) = 0;
    virtual uint64_t PublishWorkshopFile( const char *, const char *, uint32_t, const char *, const char *, uint32_t, u_SteamParamStringArray_t *, uint32_t ) = 0;
    virtual uint64_t CreatePublishedFileUpdateRequest( uint64_t ) = 0;
    virtual bool UpdatePublishedFileFile( uint64_t, const char * ) = 0;
    virtual bool UpdatePublishedFilePreviewFile( uint64_t, const char * ) = 0;
    virtual bool UpdatePublishedFileTitle( uint64_t, const char * ) = 0;
    virtual bool UpdatePublishedFileDescription( uint64_t, const char * ) = 0;
    virtual bool UpdatePublishedFileVisibility( uint64_t, uint32_t ) = 0;
    virtual bool UpdatePublishedFileTags( uint64_t, u_SteamParamStringArray_t * ) = 0;
    virtual uint64_t CommitPublishedFileUpdate( uint64_t ) = 0;
    virtual uint64_t GetPublishedFileDetails( uint64_t, uint32_t ) = 0;
    virtual uint64_t DeletePublishedFile( uint64_t ) = 0;
    virtual uint64_t EnumerateUserPublishedFiles( uint32_t ) = 0;
    virtual uint64_t SubscribePublishedFile( uint64_t ) = 0;
    virtual uint64_t EnumerateUserSubscribedFiles( uint32_t ) = 0;
    virtual uint64_t UnsubscribePublishedFile( uint64_t ) = 0;
    virtual bool UpdatePublishedFileSetChangeDescription( uint64_t, const char * ) = 0;
    virtual uint64_t GetPublishedItemVoteDetails( uint64_t ) = 0;
    virtual uint64_t UpdateUserPublishedItemVote( uint64_t, bool ) = 0;
    virtual uint64_t GetUserPublishedItemVoteDetails( uint64_t ) = 0;
    virtual uint64_t EnumerateUserSharedWorkshopFiles( CSteamID, uint32_t, u_SteamParamStringArray_t *, u_SteamParamStringArray_t * ) = 0;
    virtual uint64_t PublishVideo( uint32_t, const char *, const char *, const char *, uint32_t, const char *, const char *, uint32_t, u_SteamParamStringArray_t * ) = 0;
    virtual uint64_t SetUserPublishedFileAction( uint64_t, uint32_t ) = 0;
    virtual uint64_t EnumeratePublishedFilesByUserAction( uint32_t, uint32_t ) = 0;
    virtual uint64_t EnumeratePublishedWorkshopFiles( uint32_t, uint32_t, uint32_t, uint32_t, u_SteamParamStringArray_t *, u_SteamParamStringArray_t * ) = 0;
    virtual uint64_t UGCDownloadToLocation( uint64_t, const char *, uint32_t ) = 0;
    virtual int32_t GetLocalFileChangeCount(  ) = 0;
    virtual const char * GetLocalFileChange( int32_t, uint32_t *, uint32_t * ) = 0;
    virtual bool BeginFileWriteBatch(  ) = 0;
    virtual bool EndFileWriteBatch(  ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamInput_SteamInput005
{
#ifdef __cplusplus
    virtual bool Init( bool ) = 0;
    virtual bool Shutdown(  ) = 0;
    virtual bool SetInputActionManifestFilePath( const char * ) = 0;
    virtual void RunFrame( bool ) = 0;
    virtual bool BWaitForData( bool, uint32_t ) = 0;
    virtual bool BNewDataAvailable(  ) = 0;
    virtual int32_t GetConnectedControllers( uint64_t * ) = 0;
    virtual void EnableDeviceCallbacks(  ) = 0;
    virtual void EnableActionEventCallbacks( void (*U_STDCALL )(SteamInputActionEvent_t *) ) = 0;
    virtual uint64_t GetActionSetHandle( const char * ) = 0;
    virtual void ActivateActionSet( uint64_t, uint64_t ) = 0;
    virtual uint64_t GetCurrentActionSet( uint64_t ) = 0;
    virtual void ActivateActionSetLayer( uint64_t, uint64_t ) = 0;
    virtual void DeactivateActionSetLayer( uint64_t, uint64_t ) = 0;
    virtual void DeactivateAllActionSetLayers( uint64_t ) = 0;
    virtual int32_t GetActiveActionSetLayers( uint64_t, uint64_t * ) = 0;
    virtual uint64_t GetDigitalActionHandle( const char * ) = 0;
    virtual InputDigitalActionData_t GetDigitalActionData( uint64_t, uint64_t ) = 0;
    virtual int32_t GetDigitalActionOrigins( uint64_t, uint64_t, uint64_t, uint32_t * ) = 0;
    virtual const char * GetStringForDigitalActionName( uint64_t ) = 0;
    virtual uint64_t GetAnalogActionHandle( const char * ) = 0;
    virtual InputAnalogActionData_t GetAnalogActionData( uint64_t, uint64_t ) = 0;
    virtual int32_t GetAnalogActionOrigins( uint64_t, uint64_t, uint64_t, uint32_t * ) = 0;
    virtual const char * GetGlyphPNGForActionOrigin( uint32_t, uint32_t, uint32_t ) = 0;
    virtual const char * GetGlyphSVGForActionOrigin( uint32_t, uint32_t ) = 0;
    virtual const char * GetGlyphForActionOrigin_Legacy( uint32_t ) = 0;
    virtual const char * GetStringForActionOrigin( uint32_t ) = 0;
    virtual const char * GetStringForAnalogActionName( uint64_t ) = 0;
    virtual void StopAnalogActionMomentum( uint64_t, uint64_t ) = 0;
    virtual InputMotionData_t GetMotionData( uint64_t ) = 0;
    virtual void TriggerVibration( uint64_t, uint16_t, uint16_t ) = 0;
    virtual void TriggerVibrationExtended( uint64_t, uint16_t, uint16_t, uint16_t, uint16_t ) = 0;
    virtual void TriggerSimpleHapticEvent( uint64_t, uint32_t, uint8_t, char, uint8_t, char ) = 0;
    virtual void SetLEDColor( uint64_t, uint8_t, uint8_t, uint8_t, uint32_t ) = 0;
    virtual void Legacy_TriggerHapticPulse( uint64_t, uint32_t, uint16_t ) = 0;
    virtual void Legacy_TriggerRepeatedHapticPulse( uint64_t, uint32_t, uint16_t, uint16_t, uint16_t, uint32_t ) = 0;
    virtual bool ShowBindingPanel( uint64_t ) = 0;
    virtual uint32_t GetInputTypeForHandle( uint64_t ) = 0;
    virtual uint64_t GetControllerForGamepadIndex( int32_t ) = 0;
    virtual int32_t GetGamepadIndexForController( uint64_t ) = 0;
    virtual const char * GetStringForXboxOrigin( uint32_t ) = 0;
    virtual const char * GetGlyphForXboxOrigin( uint32_t ) = 0;
    virtual uint32_t GetActionOriginFromXboxOrigin( uint64_t, uint32_t ) = 0;
    virtual uint32_t TranslateActionOrigin( uint32_t, uint32_t ) = 0;
    virtual bool GetDeviceBindingRevision( uint64_t, int32_t *, int32_t * ) = 0;
    virtual uint32_t GetRemotePlaySessionID( uint64_t ) = 0;
    virtual uint16_t GetSessionInputConfigurationSettings(  ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamGameServer_SteamGameServer014
{
#ifdef __cplusplus
    virtual bool InitGameServer( uint32_t, uint16_t, uint16_t, uint32_t, uint32_t, const char * ) = 0;
    virtual void SetProduct( const char * ) = 0;
    virtual void SetGameDescription( const char * ) = 0;
    virtual void SetModDir( const char * ) = 0;
    virtual void SetDedicatedServer( bool ) = 0;
    virtual void LogOn( const char * ) = 0;
    virtual void LogOnAnonymous(  ) = 0;
    virtual void LogOff(  ) = 0;
    virtual bool BLoggedOn(  ) = 0;
    virtual bool BSecure(  ) = 0;
    virtual CSteamID GetSteamID(  ) = 0;
    virtual bool WasRestartRequested(  ) = 0;
    virtual void SetMaxPlayerCount( int32_t ) = 0;
    virtual void SetBotPlayerCount( int32_t ) = 0;
    virtual void SetServerName( const char * ) = 0;
    virtual void SetMapName( const char * ) = 0;
    virtual void SetPasswordProtected( bool ) = 0;
    virtual void SetSpectatorPort( uint16_t ) = 0;
    virtual void SetSpectatorServerName( const char * ) = 0;
    virtual void ClearAllKeyValues(  ) = 0;
    virtual void SetKeyValue( const char *, const char * ) = 0;
    virtual void SetGameTags( const char * ) = 0;
    virtual void SetGameData( const char * ) = 0;
    virtual void SetRegion( const char * ) = 0;
    virtual void SetAdvertiseServerActive( bool ) = 0;
    virtual uint32_t GetAuthSessionTicket( void *, int32_t, uint32_t * ) = 0;
    virtual uint32_t BeginAuthSession( const void *, int32_t, CSteamID ) = 0;
    virtual void EndAuthSession( CSteamID ) = 0;
    virtual void CancelAuthTicket( uint32_t ) = 0;
    virtual uint32_t UserHasLicenseForApp( CSteamID, uint32_t ) = 0;
    virtual bool RequestUserGroupStatus( CSteamID, CSteamID ) = 0;
    virtual void GetGameplayStats(  ) = 0;
    virtual uint64_t GetServerReputation(  ) = 0;
    virtual SteamIPAddress_t GetPublicIP(  ) = 0;
    virtual bool HandleIncomingPacket( const void *, int32_t, uint32_t, uint16_t ) = 0;
    virtual int32_t GetNextOutgoingPacket( void *, int32_t, uint32_t *, uint16_t * ) = 0;
    virtual uint64_t AssociateWithClan( CSteamID ) = 0;
    virtual uint64_t ComputeNewPlayerCompatibility( CSteamID ) = 0;
    virtual bool SendUserConnectAndAuthenticate_DEPRECATED( uint32_t, const void *, uint32_t, CSteamID * ) = 0;
    virtual CSteamID CreateUnauthenticatedUserConnection(  ) = 0;
    virtual void SendUserDisconnect_DEPRECATED( CSteamID ) = 0;
    virtual bool BUpdateUserData( CSteamID, const char *, uint32_t ) = 0;
    virtual void SetMasterServerHeartbeatInterval_DEPRECATED( int32_t ) = 0;
    virtual void ForceMasterServerHeartbeat_DEPRECATED(  ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamInput_SteamInput006
{
#ifdef __cplusplus
    virtual bool Init( bool ) = 0;
    virtual bool Shutdown(  ) = 0;
    virtual bool SetInputActionManifestFilePath( const char * ) = 0;
    virtual void RunFrame( bool ) = 0;
    virtual bool BWaitForData( bool, uint32_t ) = 0;
    virtual bool BNewDataAvailable(  ) = 0;
    virtual int32_t GetConnectedControllers( uint64_t * ) = 0;
    virtual void EnableDeviceCallbacks(  ) = 0;
    virtual void EnableActionEventCallbacks( void (*U_STDCALL )(SteamInputActionEvent_t *) ) = 0;
    virtual uint64_t GetActionSetHandle( const char * ) = 0;
    virtual void ActivateActionSet( uint64_t, uint64_t ) = 0;
    virtual uint64_t GetCurrentActionSet( uint64_t ) = 0;
    virtual void ActivateActionSetLayer( uint64_t, uint64_t ) = 0;
    virtual void DeactivateActionSetLayer( uint64_t, uint64_t ) = 0;
    virtual void DeactivateAllActionSetLayers( uint64_t ) = 0;
    virtual int32_t GetActiveActionSetLayers( uint64_t, uint64_t * ) = 0;
    virtual uint64_t GetDigitalActionHandle( const char * ) = 0;
    virtual InputDigitalActionData_t GetDigitalActionData( uint64_t, uint64_t ) = 0;
    virtual int32_t GetDigitalActionOrigins( uint64_t, uint64_t, uint64_t, uint32_t * ) = 0;
    virtual const char * GetStringForDigitalActionName( uint64_t ) = 0;
    virtual uint64_t GetAnalogActionHandle( const char * ) = 0;
    virtual InputAnalogActionData_t GetAnalogActionData( uint64_t, uint64_t ) = 0;
    virtual int32_t GetAnalogActionOrigins( uint64_t, uint64_t, uint64_t, uint32_t * ) = 0;
    virtual const char * GetGlyphPNGForActionOrigin( uint32_t, uint32_t, uint32_t ) = 0;
    virtual const char * GetGlyphSVGForActionOrigin( uint32_t, uint32_t ) = 0;
    virtual const char * GetGlyphForActionOrigin_Legacy( uint32_t ) = 0;
    virtual const char * GetStringForActionOrigin( uint32_t ) = 0;
    virtual const char * GetStringForAnalogActionName( uint64_t ) = 0;
    virtual void StopAnalogActionMomentum( uint64_t, uint64_t ) = 0;
    virtual InputMotionData_t GetMotionData( uint64_t ) = 0;
    virtual void TriggerVibration( uint64_t, uint16_t, uint16_t ) = 0;
    virtual void TriggerVibrationExtended( uint64_t, uint16_t, uint16_t, uint16_t, uint16_t ) = 0;
    virtual void TriggerSimpleHapticEvent( uint64_t, uint32_t, uint8_t, char, uint8_t, char ) = 0;
    virtual void SetLEDColor( uint64_t, uint8_t, uint8_t, uint8_t, uint32_t ) = 0;
    virtual void Legacy_TriggerHapticPulse( uint64_t, uint32_t, uint16_t ) = 0;
    virtual void Legacy_TriggerRepeatedHapticPulse( uint64_t, uint32_t, uint16_t, uint16_t, uint16_t, uint32_t ) = 0;
    virtual bool ShowBindingPanel( uint64_t ) = 0;
    virtual uint32_t GetInputTypeForHandle( uint64_t ) = 0;
    virtual uint64_t GetControllerForGamepadIndex( int32_t ) = 0;
    virtual int32_t GetGamepadIndexForController( uint64_t ) = 0;
    virtual const char * GetStringForXboxOrigin( uint32_t ) = 0;
    virtual const char * GetGlyphForXboxOrigin( uint32_t ) = 0;
    virtual uint32_t GetActionOriginFromXboxOrigin( uint64_t, uint32_t ) = 0;
    virtual uint32_t TranslateActionOrigin( uint32_t, uint32_t ) = 0;
    virtual bool GetDeviceBindingRevision( uint64_t, int32_t *, int32_t * ) = 0;
    virtual uint32_t GetRemotePlaySessionID( uint64_t ) = 0;
    virtual uint16_t GetSessionInputConfigurationSettings(  ) = 0;
    virtual void SetDualSenseTriggerEffect( uint64_t, const ScePadTriggerEffectParam * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016
{
#ifdef __cplusplus
    virtual uint64_t CreateQueryUserUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint64_t CreateQueryAllUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint64_t CreateQueryAllUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, const char * ) = 0;
    virtual uint64_t CreateQueryUGCDetailsRequest( uint64_t *, uint32_t ) = 0;
    virtual uint64_t SendQueryUGCRequest( uint64_t ) = 0;
    virtual bool GetQueryUGCResult( uint64_t, uint32_t, u_SteamUGCDetails_t_128x * ) = 0;
    virtual uint32_t GetQueryUGCNumTags( uint64_t, uint32_t ) = 0;
    virtual bool GetQueryUGCTag( uint64_t, uint32_t, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCTagDisplayName( uint64_t, uint32_t, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCPreviewURL( uint64_t, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCMetadata( uint64_t, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCChildren( uint64_t, uint32_t, uint64_t *, uint32_t ) = 0;
    virtual bool GetQueryUGCStatistic( uint64_t, uint32_t, uint32_t, uint64_t * ) = 0;
    virtual uint32_t GetQueryUGCNumAdditionalPreviews( uint64_t, uint32_t ) = 0;
    virtual bool GetQueryUGCAdditionalPreview( uint64_t, uint32_t, uint32_t, char *, uint32_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetQueryUGCNumKeyValueTags( uint64_t, uint32_t ) = 0;
    virtual bool GetQueryUGCKeyValueTag( uint64_t, uint32_t, uint32_t, char *, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCKeyValueTag( uint64_t, uint32_t, const char *, char *, uint32_t ) = 0;
    virtual bool ReleaseQueryUGCRequest( uint64_t ) = 0;
    virtual bool AddRequiredTag( uint64_t, const char * ) = 0;
    virtual bool AddRequiredTagGroup( uint64_t, const u_SteamParamStringArray_t * ) = 0;
    virtual bool AddExcludedTag( uint64_t, const char * ) = 0;
    virtual bool SetReturnOnlyIDs( uint64_t, bool ) = 0;
    virtual bool SetReturnKeyValueTags( uint64_t, bool ) = 0;
    virtual bool SetReturnLongDescription( uint64_t, bool ) = 0;
    virtual bool SetReturnMetadata( uint64_t, bool ) = 0;
    virtual bool SetReturnChildren( uint64_t, bool ) = 0;
    virtual bool SetReturnAdditionalPreviews( uint64_t, bool ) = 0;
    virtual bool SetReturnTotalOnly( uint64_t, bool ) = 0;
    virtual bool SetReturnPlaytimeStats( uint64_t, uint32_t ) = 0;
    virtual bool SetLanguage( uint64_t, const char * ) = 0;
    virtual bool SetAllowCachedResponse( uint64_t, uint32_t ) = 0;
    virtual bool SetCloudFileNameFilter( uint64_t, const char * ) = 0;
    virtual bool SetMatchAnyTag( uint64_t, bool ) = 0;
    virtual bool SetSearchText( uint64_t, const char * ) = 0;
    virtual bool SetRankedByTrendDays( uint64_t, uint32_t ) = 0;
    virtual bool SetTimeCreatedDateRange( uint64_t, uint32_t, uint32_t ) = 0;
    virtual bool SetTimeUpdatedDateRange( uint64_t, uint32_t, uint32_t ) = 0;
    virtual bool AddRequiredKeyValueTag( uint64_t, const char *, const char * ) = 0;
    virtual uint64_t RequestUGCDetails( uint64_t, uint32_t ) = 0;
    virtual uint64_t CreateItem( uint32_t, uint32_t ) = 0;
    virtual uint64_t StartItemUpdate( uint32_t, uint64_t ) = 0;
    virtual bool SetItemTitle( uint64_t, const char * ) = 0;
    virtual bool SetItemDescription( uint64_t, const char * ) = 0;
    virtual bool SetItemUpdateLanguage( uint64_t, const char * ) = 0;
    virtual bool SetItemMetadata( uint64_t, const char * ) = 0;
    virtual bool SetItemVisibility( uint64_t, uint32_t ) = 0;
    virtual bool SetItemTags( uint64_t, const u_SteamParamStringArray_t * ) = 0;
    virtual bool SetItemContent( uint64_t, const char * ) = 0;
    virtual bool SetItemPreview( uint64_t, const char * ) = 0;
    virtual bool SetAllowLegacyUpload( uint64_t, bool ) = 0;
    virtual bool RemoveAllItemKeyValueTags( uint64_t ) = 0;
    virtual bool RemoveItemKeyValueTags( uint64_t, const char * ) = 0;
    virtual bool AddItemKeyValueTag( uint64_t, const char *, const char * ) = 0;
    virtual bool AddItemPreviewFile( uint64_t, const char *, uint32_t ) = 0;
    virtual bool AddItemPreviewVideo( uint64_t, const char * ) = 0;
    virtual bool UpdateItemPreviewFile( uint64_t, uint32_t, const char * ) = 0;
    virtual bool UpdateItemPreviewVideo( uint64_t, uint32_t, const char * ) = 0;
    virtual bool RemoveItemPreview( uint64_t, uint32_t ) = 0;
    virtual uint64_t SubmitItemUpdate( uint64_t, const char * ) = 0;
    virtual uint32_t GetItemUpdateProgress( uint64_t, uint64_t *, uint64_t * ) = 0;
    virtual uint64_t SetUserItemVote( uint64_t, bool ) = 0;
    virtual uint64_t GetUserItemVote( uint64_t ) = 0;
    virtual uint64_t AddItemToFavorites( uint32_t, uint64_t ) = 0;
    virtual uint64_t RemoveItemFromFavorites( uint32_t, uint64_t ) = 0;
    virtual uint64_t SubscribeItem( uint64_t ) = 0;
    virtual uint64_t UnsubscribeItem( uint64_t ) = 0;
    virtual uint32_t GetNumSubscribedItems(  ) = 0;
    virtual uint32_t GetSubscribedItems( uint64_t *, uint32_t ) = 0;
    virtual uint32_t GetItemState( uint64_t ) = 0;
    virtual bool GetItemInstallInfo( uint64_t, uint64_t *, char *, uint32_t, uint32_t * ) = 0;
    virtual bool GetItemDownloadInfo( uint64_t, uint64_t *, uint64_t * ) = 0;
    virtual bool DownloadItem( uint64_t, bool ) = 0;
    virtual bool BInitWorkshopForGameServer( uint32_t, const char * ) = 0;
    virtual void SuspendDownloads( bool ) = 0;
    virtual uint64_t StartPlaytimeTracking( uint64_t *, uint32_t ) = 0;
    virtual uint64_t StopPlaytimeTracking( uint64_t *, uint32_t ) = 0;
    virtual uint64_t StopPlaytimeTrackingForAllItems(  ) = 0;
    virtual uint64_t AddDependency( uint64_t, uint64_t ) = 0;
    virtual uint64_t RemoveDependency( uint64_t, uint64_t ) = 0;
    virtual uint64_t AddAppDependency( uint64_t, uint32_t ) = 0;
    virtual uint64_t RemoveAppDependency( uint64_t, uint32_t ) = 0;
    virtual uint64_t GetAppDependencies( uint64_t ) = 0;
    virtual uint64_t DeleteItem( uint64_t ) = 0;
    virtual bool ShowWorkshopEULA(  ) = 0;
    virtual uint64_t GetWorkshopEULAStatus(  ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamNetworkingSockets_SteamNetworkingSockets012
{
#ifdef __cplusplus
    virtual uint32_t CreateListenSocketIP( const SteamNetworkingIPAddr *, int32_t, const SteamNetworkingConfigValue_t * ) = 0;
    virtual uint32_t ConnectByIPAddress( const SteamNetworkingIPAddr *, int32_t, const SteamNetworkingConfigValue_t * ) = 0;
    virtual uint32_t CreateListenSocketP2P( int32_t, int32_t, const SteamNetworkingConfigValue_t * ) = 0;
    virtual uint32_t ConnectP2P( const SteamNetworkingIdentity_144 *, int32_t, int32_t, const SteamNetworkingConfigValue_t * ) = 0;
    virtual uint32_t AcceptConnection( uint32_t ) = 0;
    virtual bool CloseConnection( uint32_t, int32_t, const char *, bool ) = 0;
    virtual bool CloseListenSocket( uint32_t ) = 0;
    virtual bool SetConnectionUserData( uint32_t, int64_t ) = 0;
    virtual int64_t GetConnectionUserData( uint32_t ) = 0;
    virtual void SetConnectionName( uint32_t, const char * ) = 0;
    virtual bool GetConnectionName( uint32_t, char *, int32_t ) = 0;
    virtual uint32_t SendMessageToConnection( uint32_t, const void *, uint32_t, int32_t, int64_t * ) = 0;
    virtual void SendMessages( int32_t, u_SteamNetworkingMessage_t_153a *const *, int64_t * ) = 0;
    virtual uint32_t FlushMessagesOnConnection( uint32_t ) = 0;
    virtual int32_t ReceiveMessagesOnConnection( uint32_t, u_SteamNetworkingMessage_t_153a **, int32_t ) = 0;
    virtual bool GetConnectionInfo( uint32_t, SteamNetConnectionInfo_t_153a * ) = 0;
    virtual uint32_t GetConnectionRealTimeStatus( uint32_t, SteamNetConnectionRealTimeStatus_t *, int32_t, SteamNetConnectionRealTimeLaneStatus_t * ) = 0;
    virtual int32_t GetDetailedConnectionStatus( uint32_t, char *, int32_t ) = 0;
    virtual bool GetListenSocketAddress( uint32_t, SteamNetworkingIPAddr * ) = 0;
    virtual bool CreateSocketPair( uint32_t *, uint32_t *, bool, const SteamNetworkingIdentity_144 *, const SteamNetworkingIdentity_144 * ) = 0;
    virtual uint32_t ConfigureConnectionLanes( uint32_t, int32_t, const int32_t *, const uint16_t * ) = 0;
    virtual bool GetIdentity( SteamNetworkingIdentity_144 * ) = 0;
    virtual uint32_t InitAuthentication(  ) = 0;
    virtual uint32_t GetAuthenticationStatus( SteamNetAuthenticationStatus_t * ) = 0;
    virtual uint32_t CreatePollGroup(  ) = 0;
    virtual bool DestroyPollGroup( uint32_t ) = 0;
    virtual bool SetConnectionPollGroup( uint32_t, uint32_t ) = 0;
    virtual int32_t ReceiveMessagesOnPollGroup( uint32_t, u_SteamNetworkingMessage_t_153a **, int32_t ) = 0;
    virtual bool ReceivedRelayAuthTicket( const void *, int32_t, SteamDatagramRelayAuthTicket * ) = 0;
    virtual int32_t FindRelayAuthTicketForServer( const SteamNetworkingIdentity_144 *, int32_t, SteamDatagramRelayAuthTicket * ) = 0;
    virtual uint32_t ConnectToHostedDedicatedServer( const SteamNetworkingIdentity_144 *, int32_t, int32_t, const SteamNetworkingConfigValue_t * ) = 0;
    virtual uint16_t GetHostedDedicatedServerPort(  ) = 0;
    virtual uint32_t GetHostedDedicatedServerPOPID(  ) = 0;
    virtual uint32_t GetHostedDedicatedServerAddress( SteamDatagramHostedAddress * ) = 0;
    virtual uint32_t CreateHostedDedicatedServerListenSocket( int32_t, int32_t, const SteamNetworkingConfigValue_t * ) = 0;
    virtual uint32_t GetGameCoordinatorServerLogin( SteamDatagramGameCoordinatorServerLogin *, int32_t *, void * ) = 0;
    virtual uint32_t ConnectP2PCustomSignaling( void /*ISteamNetworkingConnectionSignaling*/ *, const SteamNetworkingIdentity_144 *, int32_t, int32_t, const SteamNetworkingConfigValue_t * ) = 0;
    virtual bool ReceivedP2PCustomSignal( const void *, int32_t, void /*ISteamNetworkingSignalingRecvContext*/ * ) = 0;
    virtual bool GetCertificateRequest( int32_t *, void *, char (*)[1024] ) = 0;
    virtual bool SetCertificate( const void *, int32_t, char (*)[1024] ) = 0;
    virtual void ResetIdentity( const SteamNetworkingIdentity_144 * ) = 0;
    virtual void RunCallbacks(  ) = 0;
    virtual bool BeginAsyncRequestFakeIP( int32_t ) = 0;
    virtual void GetFakeIP( int32_t, SteamNetworkingFakeIPResult_t * ) = 0;
    virtual uint32_t CreateListenSocketP2PFakeIP( int32_t, int32_t, const SteamNetworkingConfigValue_t * ) = 0;
    virtual uint32_t GetRemoteFakeIPForConnection( uint32_t, SteamNetworkingIPAddr * ) = 0;
    virtual void /*ISteamNetworkingFakeUDPPort*/ * CreateFakeUDPPort( int32_t ) = 0;
    virtual ~u_ISteamNetworkingSockets_SteamNetworkingSockets012(  ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamNetworkingUtils_SteamNetworkingUtils004
{
#ifdef __cplusplus
    virtual u_SteamNetworkingMessage_t_153a * AllocateMessage( int32_t ) = 0;
    virtual uint32_t GetRelayNetworkStatus( SteamRelayNetworkStatus_t * ) = 0;
    virtual float GetLocalPingLocation( SteamNetworkPingLocation_t * ) = 0;
    virtual int32_t EstimatePingTimeBetweenTwoLocations( const SteamNetworkPingLocation_t *, const SteamNetworkPingLocation_t * ) = 0;
    virtual int32_t EstimatePingTimeFromLocalHost( const SteamNetworkPingLocation_t * ) = 0;
    virtual void ConvertPingLocationToString( const SteamNetworkPingLocation_t *, char *, int32_t ) = 0;
    virtual bool ParsePingLocationString( const char *, SteamNetworkPingLocation_t * ) = 0;
    virtual bool CheckPingDataUpToDate( float ) = 0;
    virtual int32_t GetPingToDataCenter( uint32_t, uint32_t * ) = 0;
    virtual int32_t GetDirectPingToPOP( uint32_t ) = 0;
    virtual int32_t GetPOPCount(  ) = 0;
    virtual int32_t GetPOPList( uint32_t *, int32_t ) = 0;
    virtual int64_t GetLocalTimestamp(  ) = 0;
    virtual void SetDebugOutputFunction( uint32_t, void (*U_STDCALL )(uint32_t, const char *) ) = 0;
    virtual uint32_t GetIPv4FakeIPType( uint32_t ) = 0;
    virtual uint32_t GetRealIdentityForFakeIP( const SteamNetworkingIPAddr *, SteamNetworkingIdentity_144 * ) = 0;
    virtual bool SetConfigValue( uint32_t, uint32_t, int32_t, uint32_t, const void * ) = 0;
    virtual uint32_t GetConfigValue( uint32_t, uint32_t, int32_t, uint32_t *, void *, uint32_t * ) = 0;
    virtual const char * GetConfigValueInfo( uint32_t, uint32_t *, uint32_t * ) = 0;
    virtual uint32_t IterateGenericEditableConfigValues( uint32_t, bool ) = 0;
    virtual void SteamNetworkingIPAddr_ToString( const SteamNetworkingIPAddr *, char *, uint32_t, bool ) = 0;
    virtual bool SteamNetworkingIPAddr_ParseString( SteamNetworkingIPAddr *, const char * ) = 0;
    virtual uint32_t SteamNetworkingIPAddr_GetFakeIPType( const SteamNetworkingIPAddr * ) = 0;
    virtual void SteamNetworkingIdentity_ToString( const SteamNetworkingIdentity_144 *, char *, uint32_t ) = 0;
    virtual bool SteamNetworkingIdentity_ParseString( SteamNetworkingIdentity_144 *, const char * ) = 0;
    virtual ~u_ISteamNetworkingUtils_SteamNetworkingUtils004(  ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001
{
#ifdef __cplusplus
    virtual void DestroyFakeUDPPort(  ) = 0;
    virtual uint32_t SendMessageToFakeIP( const SteamNetworkingIPAddr *, const void *, uint32_t, int32_t ) = 0;
    virtual int32_t ReceiveMessages( u_SteamNetworkingMessage_t_153a **, int32_t ) = 0;
    virtual void ScheduleCleanup( const SteamNetworkingIPAddr * ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUser_SteamUser022
{
#ifdef __cplusplus
    virtual int32_t GetHSteamUser(  ) = 0;
    virtual bool BLoggedOn(  ) = 0;
    virtual CSteamID GetSteamID(  ) = 0;
    virtual int32_t InitiateGameConnection_DEPRECATED( void *, int32_t, CSteamID, uint32_t, uint16_t, bool ) = 0;
    virtual void TerminateGameConnection_DEPRECATED( uint32_t, uint16_t ) = 0;
    virtual void TrackAppUsageEvent( CGameID, int32_t, const char * ) = 0;
    virtual bool GetUserDataFolder( char *, int32_t ) = 0;
    virtual void StartVoiceRecording(  ) = 0;
    virtual void StopVoiceRecording(  ) = 0;
    virtual uint32_t GetAvailableVoice( uint32_t *, uint32_t *, uint32_t ) = 0;
    virtual uint32_t GetVoice( bool, void *, uint32_t, uint32_t *, bool, void *, uint32_t, uint32_t *, uint32_t ) = 0;
    virtual uint32_t DecompressVoice( const void *, uint32_t, void *, uint32_t, uint32_t *, uint32_t ) = 0;
    virtual uint32_t GetVoiceOptimalSampleRate(  ) = 0;
    virtual uint32_t GetAuthSessionTicket( void *, int32_t, uint32_t *, const SteamNetworkingIdentity_144 * ) = 0;
    virtual uint32_t BeginAuthSession( const void *, int32_t, CSteamID ) = 0;
    virtual void EndAuthSession( CSteamID ) = 0;
    virtual void CancelAuthTicket( uint32_t ) = 0;
    virtual uint32_t UserHasLicenseForApp( CSteamID, uint32_t ) = 0;
    virtual bool BIsBehindNAT(  ) = 0;
    virtual void AdvertiseGame( CSteamID, uint32_t, uint16_t ) = 0;
    virtual uint64_t RequestEncryptedAppTicket( void *, int32_t ) = 0;
    virtual bool GetEncryptedAppTicket( void *, int32_t, uint32_t * ) = 0;
    virtual int32_t GetGameBadgeLevel( int32_t, bool ) = 0;
    virtual int32_t GetPlayerSteamLevel(  ) = 0;
    virtual uint64_t RequestStoreAuthURL( const char * ) = 0;
    virtual bool BIsPhoneVerified(  ) = 0;
    virtual bool BIsTwoFactorEnabled(  ) = 0;
    virtual bool BIsPhoneIdentifying(  ) = 0;
    virtual bool BIsPhoneRequiringVerification(  ) = 0;
    virtual uint64_t GetMarketEligibility(  ) = 0;
    virtual uint64_t GetDurationControl(  ) = 0;
    virtual bool BSetDurationControlOnlineState( uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION017
{
#ifdef __cplusplus
    virtual uint64_t CreateQueryUserUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint64_t CreateQueryAllUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint64_t CreateQueryAllUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, const char * ) = 0;
    virtual uint64_t CreateQueryUGCDetailsRequest( uint64_t *, uint32_t ) = 0;
    virtual uint64_t SendQueryUGCRequest( uint64_t ) = 0;
    virtual bool GetQueryUGCResult( uint64_t, uint32_t, u_SteamUGCDetails_t_128x * ) = 0;
    virtual uint32_t GetQueryUGCNumTags( uint64_t, uint32_t ) = 0;
    virtual bool GetQueryUGCTag( uint64_t, uint32_t, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCTagDisplayName( uint64_t, uint32_t, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCPreviewURL( uint64_t, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCMetadata( uint64_t, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCChildren( uint64_t, uint32_t, uint64_t *, uint32_t ) = 0;
    virtual bool GetQueryUGCStatistic( uint64_t, uint32_t, uint32_t, uint64_t * ) = 0;
    virtual uint32_t GetQueryUGCNumAdditionalPreviews( uint64_t, uint32_t ) = 0;
    virtual bool GetQueryUGCAdditionalPreview( uint64_t, uint32_t, uint32_t, char *, uint32_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetQueryUGCNumKeyValueTags( uint64_t, uint32_t ) = 0;
    virtual bool GetQueryUGCKeyValueTag( uint64_t, uint32_t, uint32_t, char *, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCKeyValueTag( uint64_t, uint32_t, const char *, char *, uint32_t ) = 0;
    virtual uint32_t GetQueryUGCContentDescriptors( uint64_t, uint32_t, uint32_t *, uint32_t ) = 0;
    virtual bool ReleaseQueryUGCRequest( uint64_t ) = 0;
    virtual bool AddRequiredTag( uint64_t, const char * ) = 0;
    virtual bool AddRequiredTagGroup( uint64_t, const u_SteamParamStringArray_t * ) = 0;
    virtual bool AddExcludedTag( uint64_t, const char * ) = 0;
    virtual bool SetReturnOnlyIDs( uint64_t, bool ) = 0;
    virtual bool SetReturnKeyValueTags( uint64_t, bool ) = 0;
    virtual bool SetReturnLongDescription( uint64_t, bool ) = 0;
    virtual bool SetReturnMetadata( uint64_t, bool ) = 0;
    virtual bool SetReturnChildren( uint64_t, bool ) = 0;
    virtual bool SetReturnAdditionalPreviews( uint64_t, bool ) = 0;
    virtual bool SetReturnTotalOnly( uint64_t, bool ) = 0;
    virtual bool SetReturnPlaytimeStats( uint64_t, uint32_t ) = 0;
    virtual bool SetLanguage( uint64_t, const char * ) = 0;
    virtual bool SetAllowCachedResponse( uint64_t, uint32_t ) = 0;
    virtual bool SetCloudFileNameFilter( uint64_t, const char * ) = 0;
    virtual bool SetMatchAnyTag( uint64_t, bool ) = 0;
    virtual bool SetSearchText( uint64_t, const char * ) = 0;
    virtual bool SetRankedByTrendDays( uint64_t, uint32_t ) = 0;
    virtual bool SetTimeCreatedDateRange( uint64_t, uint32_t, uint32_t ) = 0;
    virtual bool SetTimeUpdatedDateRange( uint64_t, uint32_t, uint32_t ) = 0;
    virtual bool AddRequiredKeyValueTag( uint64_t, const char *, const char * ) = 0;
    virtual uint64_t RequestUGCDetails( uint64_t, uint32_t ) = 0;
    virtual uint64_t CreateItem( uint32_t, uint32_t ) = 0;
    virtual uint64_t StartItemUpdate( uint32_t, uint64_t ) = 0;
    virtual bool SetItemTitle( uint64_t, const char * ) = 0;
    virtual bool SetItemDescription( uint64_t, const char * ) = 0;
    virtual bool SetItemUpdateLanguage( uint64_t, const char * ) = 0;
    virtual bool SetItemMetadata( uint64_t, const char * ) = 0;
    virtual bool SetItemVisibility( uint64_t, uint32_t ) = 0;
    virtual bool SetItemTags( uint64_t, const u_SteamParamStringArray_t * ) = 0;
    virtual bool SetItemContent( uint64_t, const char * ) = 0;
    virtual bool SetItemPreview( uint64_t, const char * ) = 0;
    virtual bool SetAllowLegacyUpload( uint64_t, bool ) = 0;
    virtual bool RemoveAllItemKeyValueTags( uint64_t ) = 0;
    virtual bool RemoveItemKeyValueTags( uint64_t, const char * ) = 0;
    virtual bool AddItemKeyValueTag( uint64_t, const char *, const char * ) = 0;
    virtual bool AddItemPreviewFile( uint64_t, const char *, uint32_t ) = 0;
    virtual bool AddItemPreviewVideo( uint64_t, const char * ) = 0;
    virtual bool UpdateItemPreviewFile( uint64_t, uint32_t, const char * ) = 0;
    virtual bool UpdateItemPreviewVideo( uint64_t, uint32_t, const char * ) = 0;
    virtual bool RemoveItemPreview( uint64_t, uint32_t ) = 0;
    virtual bool AddContentDescriptor( uint64_t, uint32_t ) = 0;
    virtual bool RemoveContentDescriptor( uint64_t, uint32_t ) = 0;
    virtual uint64_t SubmitItemUpdate( uint64_t, const char * ) = 0;
    virtual uint32_t GetItemUpdateProgress( uint64_t, uint64_t *, uint64_t * ) = 0;
    virtual uint64_t SetUserItemVote( uint64_t, bool ) = 0;
    virtual uint64_t GetUserItemVote( uint64_t ) = 0;
    virtual uint64_t AddItemToFavorites( uint32_t, uint64_t ) = 0;
    virtual uint64_t RemoveItemFromFavorites( uint32_t, uint64_t ) = 0;
    virtual uint64_t SubscribeItem( uint64_t ) = 0;
    virtual uint64_t UnsubscribeItem( uint64_t ) = 0;
    virtual uint32_t GetNumSubscribedItems(  ) = 0;
    virtual uint32_t GetSubscribedItems( uint64_t *, uint32_t ) = 0;
    virtual uint32_t GetItemState( uint64_t ) = 0;
    virtual bool GetItemInstallInfo( uint64_t, uint64_t *, char *, uint32_t, uint32_t * ) = 0;
    virtual bool GetItemDownloadInfo( uint64_t, uint64_t *, uint64_t * ) = 0;
    virtual bool DownloadItem( uint64_t, bool ) = 0;
    virtual bool BInitWorkshopForGameServer( uint32_t, const char * ) = 0;
    virtual void SuspendDownloads( bool ) = 0;
    virtual uint64_t StartPlaytimeTracking( uint64_t *, uint32_t ) = 0;
    virtual uint64_t StopPlaytimeTracking( uint64_t *, uint32_t ) = 0;
    virtual uint64_t StopPlaytimeTrackingForAllItems(  ) = 0;
    virtual uint64_t AddDependency( uint64_t, uint64_t ) = 0;
    virtual uint64_t RemoveDependency( uint64_t, uint64_t ) = 0;
    virtual uint64_t AddAppDependency( uint64_t, uint32_t ) = 0;
    virtual uint64_t RemoveAppDependency( uint64_t, uint32_t ) = 0;
    virtual uint64_t GetAppDependencies( uint64_t ) = 0;
    virtual uint64_t DeleteItem( uint64_t ) = 0;
    virtual bool ShowWorkshopEULA(  ) = 0;
    virtual uint64_t GetWorkshopEULAStatus(  ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamGameServer_SteamGameServer015
{
#ifdef __cplusplus
    virtual bool InitGameServer( uint32_t, uint16_t, uint16_t, uint32_t, uint32_t, const char * ) = 0;
    virtual void SetProduct( const char * ) = 0;
    virtual void SetGameDescription( const char * ) = 0;
    virtual void SetModDir( const char * ) = 0;
    virtual void SetDedicatedServer( bool ) = 0;
    virtual void LogOn( const char * ) = 0;
    virtual void LogOnAnonymous(  ) = 0;
    virtual void LogOff(  ) = 0;
    virtual bool BLoggedOn(  ) = 0;
    virtual bool BSecure(  ) = 0;
    virtual CSteamID GetSteamID(  ) = 0;
    virtual bool WasRestartRequested(  ) = 0;
    virtual void SetMaxPlayerCount( int32_t ) = 0;
    virtual void SetBotPlayerCount( int32_t ) = 0;
    virtual void SetServerName( const char * ) = 0;
    virtual void SetMapName( const char * ) = 0;
    virtual void SetPasswordProtected( bool ) = 0;
    virtual void SetSpectatorPort( uint16_t ) = 0;
    virtual void SetSpectatorServerName( const char * ) = 0;
    virtual void ClearAllKeyValues(  ) = 0;
    virtual void SetKeyValue( const char *, const char * ) = 0;
    virtual void SetGameTags( const char * ) = 0;
    virtual void SetGameData( const char * ) = 0;
    virtual void SetRegion( const char * ) = 0;
    virtual void SetAdvertiseServerActive( bool ) = 0;
    virtual uint32_t GetAuthSessionTicket( void *, int32_t, uint32_t *, const SteamNetworkingIdentity_144 * ) = 0;
    virtual uint32_t BeginAuthSession( const void *, int32_t, CSteamID ) = 0;
    virtual void EndAuthSession( CSteamID ) = 0;
    virtual void CancelAuthTicket( uint32_t ) = 0;
    virtual uint32_t UserHasLicenseForApp( CSteamID, uint32_t ) = 0;
    virtual bool RequestUserGroupStatus( CSteamID, CSteamID ) = 0;
    virtual void GetGameplayStats(  ) = 0;
    virtual uint64_t GetServerReputation(  ) = 0;
    virtual SteamIPAddress_t GetPublicIP(  ) = 0;
    virtual bool HandleIncomingPacket( const void *, int32_t, uint32_t, uint16_t ) = 0;
    virtual int32_t GetNextOutgoingPacket( void *, int32_t, uint32_t *, uint16_t * ) = 0;
    virtual uint64_t AssociateWithClan( CSteamID ) = 0;
    virtual uint64_t ComputeNewPlayerCompatibility( CSteamID ) = 0;
    virtual bool SendUserConnectAndAuthenticate_DEPRECATED( uint32_t, const void *, uint32_t, CSteamID * ) = 0;
    virtual CSteamID CreateUnauthenticatedUserConnection(  ) = 0;
    virtual void SendUserDisconnect_DEPRECATED( CSteamID ) = 0;
    virtual bool BUpdateUserData( CSteamID, const char *, uint32_t ) = 0;
    virtual void SetMasterServerHeartbeatInterval_DEPRECATED( int32_t ) = 0;
    virtual void ForceMasterServerHeartbeat_DEPRECATED(  ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUser_SteamUser023
{
#ifdef __cplusplus
    virtual int32_t GetHSteamUser(  ) = 0;
    virtual bool BLoggedOn(  ) = 0;
    virtual CSteamID GetSteamID(  ) = 0;
    virtual int32_t InitiateGameConnection_DEPRECATED( void *, int32_t, CSteamID, uint32_t, uint16_t, bool ) = 0;
    virtual void TerminateGameConnection_DEPRECATED( uint32_t, uint16_t ) = 0;
    virtual void TrackAppUsageEvent( CGameID, int32_t, const char * ) = 0;
    virtual bool GetUserDataFolder( char *, int32_t ) = 0;
    virtual void StartVoiceRecording(  ) = 0;
    virtual void StopVoiceRecording(  ) = 0;
    virtual uint32_t GetAvailableVoice( uint32_t *, uint32_t *, uint32_t ) = 0;
    virtual uint32_t GetVoice( bool, void *, uint32_t, uint32_t *, bool, void *, uint32_t, uint32_t *, uint32_t ) = 0;
    virtual uint32_t DecompressVoice( const void *, uint32_t, void *, uint32_t, uint32_t *, uint32_t ) = 0;
    virtual uint32_t GetVoiceOptimalSampleRate(  ) = 0;
    virtual uint32_t GetAuthSessionTicket( void *, int32_t, uint32_t *, const SteamNetworkingIdentity_144 * ) = 0;
    virtual uint32_t GetAuthTicketForWebApi( const char * ) = 0;
    virtual uint32_t BeginAuthSession( const void *, int32_t, CSteamID ) = 0;
    virtual void EndAuthSession( CSteamID ) = 0;
    virtual void CancelAuthTicket( uint32_t ) = 0;
    virtual uint32_t UserHasLicenseForApp( CSteamID, uint32_t ) = 0;
    virtual bool BIsBehindNAT(  ) = 0;
    virtual void AdvertiseGame( CSteamID, uint32_t, uint16_t ) = 0;
    virtual uint64_t RequestEncryptedAppTicket( void *, int32_t ) = 0;
    virtual bool GetEncryptedAppTicket( void *, int32_t, uint32_t * ) = 0;
    virtual int32_t GetGameBadgeLevel( int32_t, bool ) = 0;
    virtual int32_t GetPlayerSteamLevel(  ) = 0;
    virtual uint64_t RequestStoreAuthURL( const char * ) = 0;
    virtual bool BIsPhoneVerified(  ) = 0;
    virtual bool BIsTwoFactorEnabled(  ) = 0;
    virtual bool BIsPhoneIdentifying(  ) = 0;
    virtual bool BIsPhoneRequiringVerification(  ) = 0;
    virtual uint64_t GetMarketEligibility(  ) = 0;
    virtual uint64_t GetDurationControl(  ) = 0;
    virtual bool BSetDurationControlOnlineState( uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION018
{
#ifdef __cplusplus
    virtual uint64_t CreateQueryUserUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint64_t CreateQueryAllUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint64_t CreateQueryAllUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, const char * ) = 0;
    virtual uint64_t CreateQueryUGCDetailsRequest( uint64_t *, uint32_t ) = 0;
    virtual uint64_t SendQueryUGCRequest( uint64_t ) = 0;
    virtual bool GetQueryUGCResult( uint64_t, uint32_t, u_SteamUGCDetails_t_128x * ) = 0;
    virtual uint32_t GetQueryUGCNumTags( uint64_t, uint32_t ) = 0;
    virtual bool GetQueryUGCTag( uint64_t, uint32_t, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCTagDisplayName( uint64_t, uint32_t, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCPreviewURL( uint64_t, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCMetadata( uint64_t, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCChildren( uint64_t, uint32_t, uint64_t *, uint32_t ) = 0;
    virtual bool GetQueryUGCStatistic( uint64_t, uint32_t, uint32_t, uint64_t * ) = 0;
    virtual uint32_t GetQueryUGCNumAdditionalPreviews( uint64_t, uint32_t ) = 0;
    virtual bool GetQueryUGCAdditionalPreview( uint64_t, uint32_t, uint32_t, char *, uint32_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetQueryUGCNumKeyValueTags( uint64_t, uint32_t ) = 0;
    virtual bool GetQueryUGCKeyValueTag( uint64_t, uint32_t, uint32_t, char *, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCKeyValueTag( uint64_t, uint32_t, const char *, char *, uint32_t ) = 0;
    virtual uint32_t GetQueryUGCContentDescriptors( uint64_t, uint32_t, uint32_t *, uint32_t ) = 0;
    virtual bool ReleaseQueryUGCRequest( uint64_t ) = 0;
    virtual bool AddRequiredTag( uint64_t, const char * ) = 0;
    virtual bool AddRequiredTagGroup( uint64_t, const u_SteamParamStringArray_t * ) = 0;
    virtual bool AddExcludedTag( uint64_t, const char * ) = 0;
    virtual bool SetReturnOnlyIDs( uint64_t, bool ) = 0;
    virtual bool SetReturnKeyValueTags( uint64_t, bool ) = 0;
    virtual bool SetReturnLongDescription( uint64_t, bool ) = 0;
    virtual bool SetReturnMetadata( uint64_t, bool ) = 0;
    virtual bool SetReturnChildren( uint64_t, bool ) = 0;
    virtual bool SetReturnAdditionalPreviews( uint64_t, bool ) = 0;
    virtual bool SetReturnTotalOnly( uint64_t, bool ) = 0;
    virtual bool SetReturnPlaytimeStats( uint64_t, uint32_t ) = 0;
    virtual bool SetLanguage( uint64_t, const char * ) = 0;
    virtual bool SetAllowCachedResponse( uint64_t, uint32_t ) = 0;
    virtual bool SetCloudFileNameFilter( uint64_t, const char * ) = 0;
    virtual bool SetMatchAnyTag( uint64_t, bool ) = 0;
    virtual bool SetSearchText( uint64_t, const char * ) = 0;
    virtual bool SetRankedByTrendDays( uint64_t, uint32_t ) = 0;
    virtual bool SetTimeCreatedDateRange( uint64_t, uint32_t, uint32_t ) = 0;
    virtual bool SetTimeUpdatedDateRange( uint64_t, uint32_t, uint32_t ) = 0;
    virtual bool AddRequiredKeyValueTag( uint64_t, const char *, const char * ) = 0;
    virtual uint64_t RequestUGCDetails( uint64_t, uint32_t ) = 0;
    virtual uint64_t CreateItem( uint32_t, uint32_t ) = 0;
    virtual uint64_t StartItemUpdate( uint32_t, uint64_t ) = 0;
    virtual bool SetItemTitle( uint64_t, const char * ) = 0;
    virtual bool SetItemDescription( uint64_t, const char * ) = 0;
    virtual bool SetItemUpdateLanguage( uint64_t, const char * ) = 0;
    virtual bool SetItemMetadata( uint64_t, const char * ) = 0;
    virtual bool SetItemVisibility( uint64_t, uint32_t ) = 0;
    virtual bool SetItemTags( uint64_t, const u_SteamParamStringArray_t *, bool ) = 0;
    virtual bool SetItemContent( uint64_t, const char * ) = 0;
    virtual bool SetItemPreview( uint64_t, const char * ) = 0;
    virtual bool SetAllowLegacyUpload( uint64_t, bool ) = 0;
    virtual bool RemoveAllItemKeyValueTags( uint64_t ) = 0;
    virtual bool RemoveItemKeyValueTags( uint64_t, const char * ) = 0;
    virtual bool AddItemKeyValueTag( uint64_t, const char *, const char * ) = 0;
    virtual bool AddItemPreviewFile( uint64_t, const char *, uint32_t ) = 0;
    virtual bool AddItemPreviewVideo( uint64_t, const char * ) = 0;
    virtual bool UpdateItemPreviewFile( uint64_t, uint32_t, const char * ) = 0;
    virtual bool UpdateItemPreviewVideo( uint64_t, uint32_t, const char * ) = 0;
    virtual bool RemoveItemPreview( uint64_t, uint32_t ) = 0;
    virtual bool AddContentDescriptor( uint64_t, uint32_t ) = 0;
    virtual bool RemoveContentDescriptor( uint64_t, uint32_t ) = 0;
    virtual uint64_t SubmitItemUpdate( uint64_t, const char * ) = 0;
    virtual uint32_t GetItemUpdateProgress( uint64_t, uint64_t *, uint64_t * ) = 0;
    virtual uint64_t SetUserItemVote( uint64_t, bool ) = 0;
    virtual uint64_t GetUserItemVote( uint64_t ) = 0;
    virtual uint64_t AddItemToFavorites( uint32_t, uint64_t ) = 0;
    virtual uint64_t RemoveItemFromFavorites( uint32_t, uint64_t ) = 0;
    virtual uint64_t SubscribeItem( uint64_t ) = 0;
    virtual uint64_t UnsubscribeItem( uint64_t ) = 0;
    virtual uint32_t GetNumSubscribedItems(  ) = 0;
    virtual uint32_t GetSubscribedItems( uint64_t *, uint32_t ) = 0;
    virtual uint32_t GetItemState( uint64_t ) = 0;
    virtual bool GetItemInstallInfo( uint64_t, uint64_t *, char *, uint32_t, uint32_t * ) = 0;
    virtual bool GetItemDownloadInfo( uint64_t, uint64_t *, uint64_t * ) = 0;
    virtual bool DownloadItem( uint64_t, bool ) = 0;
    virtual bool BInitWorkshopForGameServer( uint32_t, const char * ) = 0;
    virtual void SuspendDownloads( bool ) = 0;
    virtual uint64_t StartPlaytimeTracking( uint64_t *, uint32_t ) = 0;
    virtual uint64_t StopPlaytimeTracking( uint64_t *, uint32_t ) = 0;
    virtual uint64_t StopPlaytimeTrackingForAllItems(  ) = 0;
    virtual uint64_t AddDependency( uint64_t, uint64_t ) = 0;
    virtual uint64_t RemoveDependency( uint64_t, uint64_t ) = 0;
    virtual uint64_t AddAppDependency( uint64_t, uint32_t ) = 0;
    virtual uint64_t RemoveAppDependency( uint64_t, uint32_t ) = 0;
    virtual uint64_t GetAppDependencies( uint64_t ) = 0;
    virtual uint64_t DeleteItem( uint64_t ) = 0;
    virtual bool ShowWorkshopEULA(  ) = 0;
    virtual uint64_t GetWorkshopEULAStatus(  ) = 0;
    virtual uint32_t GetUserContentDescriptorPreferences( uint32_t *, uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002
{
#ifdef __cplusplus
    virtual uint32_t GetSessionCount(  ) = 0;
    virtual uint32_t GetSessionID( int32_t ) = 0;
    virtual CSteamID GetSessionSteamID( uint32_t ) = 0;
    virtual const char * GetSessionClientName( uint32_t ) = 0;
    virtual uint32_t GetSessionClientFormFactor( uint32_t ) = 0;
    virtual bool BGetSessionClientResolution( uint32_t, int32_t *, int32_t * ) = 0;
    virtual bool BStartRemotePlayTogether( bool ) = 0;
    virtual bool BSendRemotePlayTogetherInvite( CSteamID ) = 0;
#endif /* __cplusplus */
};


