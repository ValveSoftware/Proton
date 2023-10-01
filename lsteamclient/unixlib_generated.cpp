/* This file is auto-generated, do not edit. */

#include "unix_private.h"

C_ASSERT( sizeof(SteamNetworkingIPAddr) >= 18 );
C_ASSERT( offsetof(SteamNetworkingIPAddr, data) == 0 );
C_ASSERT( sizeof(SteamNetworkingIPAddr().data) >= 16 );
C_ASSERT( offsetof(SteamNetworkingIPAddr, m_port) == 16 );
C_ASSERT( sizeof(SteamNetworkingIPAddr().m_port) >= 2 );

C_ASSERT( sizeof(SteamNetworkingIdentity_144) >= 136 );
C_ASSERT( offsetof(SteamNetworkingIdentity_144, m_eType) == 0 );
C_ASSERT( sizeof(SteamNetworkingIdentity_144().m_eType) >= 4 );
C_ASSERT( offsetof(SteamNetworkingIdentity_144, m_cbSize) == 4 );
C_ASSERT( sizeof(SteamNetworkingIdentity_144().m_cbSize) >= 4 );
C_ASSERT( offsetof(SteamNetworkingIdentity_144, data) == 8 );
C_ASSERT( sizeof(SteamNetworkingIdentity_144().data) >= 128 );

C_ASSERT( sizeof(SteamNetworkingIdentity_151) >= 8 );
C_ASSERT( offsetof(SteamNetworkingIdentity_151, m_eType) == 0 );
C_ASSERT( sizeof(SteamNetworkingIdentity_151().m_eType) >= 4 );
C_ASSERT( offsetof(SteamNetworkingIdentity_151, m_cbSize) == 4 );
C_ASSERT( sizeof(SteamNetworkingIdentity_151().m_cbSize) >= 4 );

C_ASSERT( sizeof(SteamNetConnectionInfo_t_153a) >= 696 );
C_ASSERT( offsetof(SteamNetConnectionInfo_t_153a, m_identityRemote) == 0 );
C_ASSERT( sizeof(SteamNetConnectionInfo_t_153a().m_identityRemote) >= 136 );
C_ASSERT( offsetof(SteamNetConnectionInfo_t_153a, m_nUserData) == 136 );
C_ASSERT( sizeof(SteamNetConnectionInfo_t_153a().m_nUserData) >= 8 );
C_ASSERT( offsetof(SteamNetConnectionInfo_t_153a, m_hListenSocket) == 144 );
C_ASSERT( sizeof(SteamNetConnectionInfo_t_153a().m_hListenSocket) >= 4 );
C_ASSERT( offsetof(SteamNetConnectionInfo_t_153a, m_addrRemote) == 148 );
C_ASSERT( sizeof(SteamNetConnectionInfo_t_153a().m_addrRemote) >= 18 );
C_ASSERT( offsetof(SteamNetConnectionInfo_t_153a, m__pad1) == 166 );
C_ASSERT( sizeof(SteamNetConnectionInfo_t_153a().m__pad1) >= 2 );
C_ASSERT( offsetof(SteamNetConnectionInfo_t_153a, m_idPOPRemote) == 168 );
C_ASSERT( sizeof(SteamNetConnectionInfo_t_153a().m_idPOPRemote) >= 4 );
C_ASSERT( offsetof(SteamNetConnectionInfo_t_153a, m_idPOPRelay) == 172 );
C_ASSERT( sizeof(SteamNetConnectionInfo_t_153a().m_idPOPRelay) >= 4 );
C_ASSERT( offsetof(SteamNetConnectionInfo_t_153a, m_eState) == 176 );
C_ASSERT( sizeof(SteamNetConnectionInfo_t_153a().m_eState) >= 4 );
C_ASSERT( offsetof(SteamNetConnectionInfo_t_153a, m_eEndReason) == 180 );
C_ASSERT( sizeof(SteamNetConnectionInfo_t_153a().m_eEndReason) >= 4 );
C_ASSERT( offsetof(SteamNetConnectionInfo_t_153a, m_szEndDebug) == 184 );
C_ASSERT( sizeof(SteamNetConnectionInfo_t_153a().m_szEndDebug) >= 128 );
C_ASSERT( offsetof(SteamNetConnectionInfo_t_153a, m_szConnectionDescription) == 312 );
C_ASSERT( sizeof(SteamNetConnectionInfo_t_153a().m_szConnectionDescription) >= 128 );
C_ASSERT( offsetof(SteamNetConnectionInfo_t_153a, m_nFlags) == 440 );
C_ASSERT( sizeof(SteamNetConnectionInfo_t_153a().m_nFlags) >= 4 );
C_ASSERT( offsetof(SteamNetConnectionInfo_t_153a, reserved) == 444 );
C_ASSERT( sizeof(SteamNetConnectionInfo_t_153a().reserved) >= 252 );

C_ASSERT( sizeof(SteamNetConnectionInfo_t_144) >= 696 );
C_ASSERT( offsetof(SteamNetConnectionInfo_t_144, m_identityRemote) == 0 );
C_ASSERT( sizeof(SteamNetConnectionInfo_t_144().m_identityRemote) >= 136 );
C_ASSERT( offsetof(SteamNetConnectionInfo_t_144, m_nUserData) == 136 );
C_ASSERT( sizeof(SteamNetConnectionInfo_t_144().m_nUserData) >= 8 );
C_ASSERT( offsetof(SteamNetConnectionInfo_t_144, m_hListenSocket) == 144 );
C_ASSERT( sizeof(SteamNetConnectionInfo_t_144().m_hListenSocket) >= 4 );
C_ASSERT( offsetof(SteamNetConnectionInfo_t_144, m_addrRemote) == 148 );
C_ASSERT( sizeof(SteamNetConnectionInfo_t_144().m_addrRemote) >= 18 );
C_ASSERT( offsetof(SteamNetConnectionInfo_t_144, m__pad1) == 166 );
C_ASSERT( sizeof(SteamNetConnectionInfo_t_144().m__pad1) >= 2 );
C_ASSERT( offsetof(SteamNetConnectionInfo_t_144, m_idPOPRemote) == 168 );
C_ASSERT( sizeof(SteamNetConnectionInfo_t_144().m_idPOPRemote) >= 4 );
C_ASSERT( offsetof(SteamNetConnectionInfo_t_144, m_idPOPRelay) == 172 );
C_ASSERT( sizeof(SteamNetConnectionInfo_t_144().m_idPOPRelay) >= 4 );
C_ASSERT( offsetof(SteamNetConnectionInfo_t_144, m_eState) == 176 );
C_ASSERT( sizeof(SteamNetConnectionInfo_t_144().m_eState) >= 4 );
C_ASSERT( offsetof(SteamNetConnectionInfo_t_144, m_eEndReason) == 180 );
C_ASSERT( sizeof(SteamNetConnectionInfo_t_144().m_eEndReason) >= 4 );
C_ASSERT( offsetof(SteamNetConnectionInfo_t_144, m_szEndDebug) == 184 );
C_ASSERT( sizeof(SteamNetConnectionInfo_t_144().m_szEndDebug) >= 128 );
C_ASSERT( offsetof(SteamNetConnectionInfo_t_144, m_szConnectionDescription) == 312 );
C_ASSERT( sizeof(SteamNetConnectionInfo_t_144().m_szConnectionDescription) >= 128 );
C_ASSERT( offsetof(SteamNetConnectionInfo_t_144, reserved) == 440 );
C_ASSERT( sizeof(SteamNetConnectionInfo_t_144().reserved) >= 256 );

C_ASSERT( sizeof(SteamNetConnectionInfo_t_151) >= 568 );
C_ASSERT( offsetof(SteamNetConnectionInfo_t_151, m_identityRemote) == 0 );
C_ASSERT( sizeof(SteamNetConnectionInfo_t_151().m_identityRemote) >= 8 );
C_ASSERT( offsetof(SteamNetConnectionInfo_t_151, m_nUserData) == 8 );
C_ASSERT( sizeof(SteamNetConnectionInfo_t_151().m_nUserData) >= 8 );
C_ASSERT( offsetof(SteamNetConnectionInfo_t_151, m_hListenSocket) == 16 );
C_ASSERT( sizeof(SteamNetConnectionInfo_t_151().m_hListenSocket) >= 4 );
C_ASSERT( offsetof(SteamNetConnectionInfo_t_151, m_addrRemote) == 20 );
C_ASSERT( sizeof(SteamNetConnectionInfo_t_151().m_addrRemote) >= 18 );
C_ASSERT( offsetof(SteamNetConnectionInfo_t_151, m__pad1) == 38 );
C_ASSERT( sizeof(SteamNetConnectionInfo_t_151().m__pad1) >= 2 );
C_ASSERT( offsetof(SteamNetConnectionInfo_t_151, m_idPOPRemote) == 40 );
C_ASSERT( sizeof(SteamNetConnectionInfo_t_151().m_idPOPRemote) >= 4 );
C_ASSERT( offsetof(SteamNetConnectionInfo_t_151, m_idPOPRelay) == 44 );
C_ASSERT( sizeof(SteamNetConnectionInfo_t_151().m_idPOPRelay) >= 4 );
C_ASSERT( offsetof(SteamNetConnectionInfo_t_151, m_eState) == 48 );
C_ASSERT( sizeof(SteamNetConnectionInfo_t_151().m_eState) >= 4 );
C_ASSERT( offsetof(SteamNetConnectionInfo_t_151, m_eEndReason) == 52 );
C_ASSERT( sizeof(SteamNetConnectionInfo_t_151().m_eEndReason) >= 4 );
C_ASSERT( offsetof(SteamNetConnectionInfo_t_151, m_szEndDebug) == 56 );
C_ASSERT( sizeof(SteamNetConnectionInfo_t_151().m_szEndDebug) >= 128 );
C_ASSERT( offsetof(SteamNetConnectionInfo_t_151, m_szConnectionDescription) == 184 );
C_ASSERT( sizeof(SteamNetConnectionInfo_t_151().m_szConnectionDescription) >= 128 );
C_ASSERT( offsetof(SteamNetConnectionInfo_t_151, reserved) == 312 );
C_ASSERT( sizeof(SteamNetConnectionInfo_t_151().reserved) >= 256 );

C_ASSERT( sizeof(servernetadr_t) >= 8 );
C_ASSERT( offsetof(servernetadr_t, m_usConnectionPort) == 0 );
C_ASSERT( sizeof(servernetadr_t().m_usConnectionPort) >= 2 );
C_ASSERT( offsetof(servernetadr_t, m_usQueryPort) == 2 );
C_ASSERT( sizeof(servernetadr_t().m_usQueryPort) >= 2 );
C_ASSERT( offsetof(servernetadr_t, m_unIP) == 4 );
C_ASSERT( sizeof(servernetadr_t().m_unIP) >= 4 );

C_ASSERT( sizeof(ActiveBeaconsUpdated_t) >= 1 );

C_ASSERT( sizeof(AppDataChanged_t) >= 8 );
C_ASSERT( offsetof(AppDataChanged_t, m_nAppID) == 0 );
C_ASSERT( sizeof(AppDataChanged_t().m_nAppID) >= 4 );
C_ASSERT( offsetof(AppDataChanged_t, m_bBySteamUI) == 4 );
C_ASSERT( sizeof(AppDataChanged_t().m_bBySteamUI) >= 1 );
C_ASSERT( offsetof(AppDataChanged_t, m_bCDDBUpdate) == 5 );
C_ASSERT( sizeof(AppDataChanged_t().m_bCDDBUpdate) >= 1 );

C_ASSERT( sizeof(AppProofOfPurchaseKeyResponse_t_137) >= 252 );
C_ASSERT( offsetof(AppProofOfPurchaseKeyResponse_t_137, m_eResult) == 0 );
C_ASSERT( sizeof(AppProofOfPurchaseKeyResponse_t_137().m_eResult) >= 4 );
C_ASSERT( offsetof(AppProofOfPurchaseKeyResponse_t_137, m_nAppID) == 4 );
C_ASSERT( sizeof(AppProofOfPurchaseKeyResponse_t_137().m_nAppID) >= 4 );
C_ASSERT( offsetof(AppProofOfPurchaseKeyResponse_t_137, m_cchKeyLength) == 8 );
C_ASSERT( sizeof(AppProofOfPurchaseKeyResponse_t_137().m_cchKeyLength) >= 4 );
C_ASSERT( offsetof(AppProofOfPurchaseKeyResponse_t_137, m_rgchKey) == 12 );
C_ASSERT( sizeof(AppProofOfPurchaseKeyResponse_t_137().m_rgchKey) >= 240 );

C_ASSERT( sizeof(AppProofOfPurchaseKeyResponse_t_118) >= 72 );
C_ASSERT( offsetof(AppProofOfPurchaseKeyResponse_t_118, m_eResult) == 0 );
C_ASSERT( sizeof(AppProofOfPurchaseKeyResponse_t_118().m_eResult) >= 4 );
C_ASSERT( offsetof(AppProofOfPurchaseKeyResponse_t_118, m_nAppID) == 4 );
C_ASSERT( sizeof(AppProofOfPurchaseKeyResponse_t_118().m_nAppID) >= 4 );
C_ASSERT( offsetof(AppProofOfPurchaseKeyResponse_t_118, m_rgchKey) == 8 );
C_ASSERT( sizeof(AppProofOfPurchaseKeyResponse_t_118().m_rgchKey) >= 64 );

C_ASSERT( sizeof(AppResumingFromSuspend_t) >= 1 );

C_ASSERT( sizeof(AssociateWithClanResult_t) >= 4 );
C_ASSERT( offsetof(AssociateWithClanResult_t, m_eResult) == 0 );
C_ASSERT( sizeof(AssociateWithClanResult_t().m_eResult) >= 4 );

C_ASSERT( sizeof(AvailableBeaconLocationsUpdated_t) >= 1 );

C_ASSERT( sizeof(AvatarImageLoaded_t) >= 20 );
C_ASSERT( offsetof(AvatarImageLoaded_t, m_steamID) == 0 );
C_ASSERT( sizeof(AvatarImageLoaded_t().m_steamID) >= 8 );
C_ASSERT( offsetof(AvatarImageLoaded_t, m_iImage) == 8 );
C_ASSERT( sizeof(AvatarImageLoaded_t().m_iImage) >= 4 );
C_ASSERT( offsetof(AvatarImageLoaded_t, m_iWide) == 12 );
C_ASSERT( sizeof(AvatarImageLoaded_t().m_iWide) >= 4 );
C_ASSERT( offsetof(AvatarImageLoaded_t, m_iTall) == 16 );
C_ASSERT( sizeof(AvatarImageLoaded_t().m_iTall) >= 4 );

C_ASSERT( sizeof(BroadcastUploadStart_t) >= 1 );

C_ASSERT( sizeof(BroadcastUploadStop_t) >= 4 );
C_ASSERT( offsetof(BroadcastUploadStop_t, m_eResult) == 0 );
C_ASSERT( sizeof(BroadcastUploadStop_t().m_eResult) >= 4 );

C_ASSERT( sizeof(CallbackPipeFailure_t) >= 1 );

C_ASSERT( sizeof(ChangeNumOpenSlotsCallback_t) >= 4 );
C_ASSERT( offsetof(ChangeNumOpenSlotsCallback_t, m_eResult) == 0 );
C_ASSERT( sizeof(ChangeNumOpenSlotsCallback_t().m_eResult) >= 4 );

C_ASSERT( sizeof(CheckFileSignature_t) >= 4 );
C_ASSERT( offsetof(CheckFileSignature_t, m_eCheckFileSignature) == 0 );
C_ASSERT( sizeof(CheckFileSignature_t().m_eCheckFileSignature) >= 4 );

C_ASSERT( sizeof(ClanOfficerListResponse_t) >= 16 );
C_ASSERT( offsetof(ClanOfficerListResponse_t, m_steamIDClan) == 0 );
C_ASSERT( sizeof(ClanOfficerListResponse_t().m_steamIDClan) >= 8 );
C_ASSERT( offsetof(ClanOfficerListResponse_t, m_cOfficers) == 8 );
C_ASSERT( sizeof(ClanOfficerListResponse_t().m_cOfficers) >= 4 );
C_ASSERT( offsetof(ClanOfficerListResponse_t, m_bSuccess) == 12 );
C_ASSERT( sizeof(ClanOfficerListResponse_t().m_bSuccess) >= 1 );

C_ASSERT( sizeof(ClientGameServerDeny_t) >= 16 );
C_ASSERT( offsetof(ClientGameServerDeny_t, m_uAppID) == 0 );
C_ASSERT( sizeof(ClientGameServerDeny_t().m_uAppID) >= 4 );
C_ASSERT( offsetof(ClientGameServerDeny_t, m_unGameServerIP) == 4 );
C_ASSERT( sizeof(ClientGameServerDeny_t().m_unGameServerIP) >= 4 );
C_ASSERT( offsetof(ClientGameServerDeny_t, m_usGameServerPort) == 8 );
C_ASSERT( sizeof(ClientGameServerDeny_t().m_usGameServerPort) >= 2 );
C_ASSERT( offsetof(ClientGameServerDeny_t, m_bSecure) == 10 );
C_ASSERT( sizeof(ClientGameServerDeny_t().m_bSecure) >= 2 );
C_ASSERT( offsetof(ClientGameServerDeny_t, m_uReason) == 12 );
C_ASSERT( sizeof(ClientGameServerDeny_t().m_uReason) >= 4 );

C_ASSERT( sizeof(ComputeNewPlayerCompatibilityResult_t_119) >= 24 );
C_ASSERT( offsetof(ComputeNewPlayerCompatibilityResult_t_119, m_eResult) == 0 );
C_ASSERT( sizeof(ComputeNewPlayerCompatibilityResult_t_119().m_eResult) >= 4 );
C_ASSERT( offsetof(ComputeNewPlayerCompatibilityResult_t_119, m_cPlayersThatDontLikeCandidate) == 4 );
C_ASSERT( sizeof(ComputeNewPlayerCompatibilityResult_t_119().m_cPlayersThatDontLikeCandidate) >= 4 );
C_ASSERT( offsetof(ComputeNewPlayerCompatibilityResult_t_119, m_cPlayersThatCandidateDoesntLike) == 8 );
C_ASSERT( sizeof(ComputeNewPlayerCompatibilityResult_t_119().m_cPlayersThatCandidateDoesntLike) >= 4 );
C_ASSERT( offsetof(ComputeNewPlayerCompatibilityResult_t_119, m_cClanPlayersThatDontLikeCandidate) == 12 );
C_ASSERT( sizeof(ComputeNewPlayerCompatibilityResult_t_119().m_cClanPlayersThatDontLikeCandidate) >= 4 );
C_ASSERT( offsetof(ComputeNewPlayerCompatibilityResult_t_119, m_SteamIDCandidate) == 16 );
C_ASSERT( sizeof(ComputeNewPlayerCompatibilityResult_t_119().m_SteamIDCandidate) >= 8 );

C_ASSERT( sizeof(ComputeNewPlayerCompatibilityResult_t_116x) >= 16 );
C_ASSERT( offsetof(ComputeNewPlayerCompatibilityResult_t_116x, m_eResult) == 0 );
C_ASSERT( sizeof(ComputeNewPlayerCompatibilityResult_t_116x().m_eResult) >= 4 );
C_ASSERT( offsetof(ComputeNewPlayerCompatibilityResult_t_116x, m_cPlayersThatDontLikeCandidate) == 4 );
C_ASSERT( sizeof(ComputeNewPlayerCompatibilityResult_t_116x().m_cPlayersThatDontLikeCandidate) >= 4 );
C_ASSERT( offsetof(ComputeNewPlayerCompatibilityResult_t_116x, m_cPlayersThatCandidateDoesntLike) == 8 );
C_ASSERT( sizeof(ComputeNewPlayerCompatibilityResult_t_116x().m_cPlayersThatCandidateDoesntLike) >= 4 );
C_ASSERT( offsetof(ComputeNewPlayerCompatibilityResult_t_116x, m_cClanPlayersThatDontLikeCandidate) == 12 );
C_ASSERT( sizeof(ComputeNewPlayerCompatibilityResult_t_116x().m_cClanPlayersThatDontLikeCandidate) >= 4 );

C_ASSERT( sizeof(ControllerAnalogActionData_t) >= 13 );
C_ASSERT( offsetof(ControllerAnalogActionData_t, eMode) == 0 );
C_ASSERT( sizeof(ControllerAnalogActionData_t().eMode) >= 4 );
C_ASSERT( offsetof(ControllerAnalogActionData_t, x) == 4 );
C_ASSERT( sizeof(ControllerAnalogActionData_t().x) >= 4 );
C_ASSERT( offsetof(ControllerAnalogActionData_t, y) == 8 );
C_ASSERT( sizeof(ControllerAnalogActionData_t().y) >= 4 );
C_ASSERT( offsetof(ControllerAnalogActionData_t, bActive) == 12 );
C_ASSERT( sizeof(ControllerAnalogActionData_t().bActive) >= 1 );

C_ASSERT( sizeof(ControllerDigitalActionData_t) >= 2 );
C_ASSERT( offsetof(ControllerDigitalActionData_t, bState) == 0 );
C_ASSERT( sizeof(ControllerDigitalActionData_t().bState) >= 1 );
C_ASSERT( offsetof(ControllerDigitalActionData_t, bActive) == 1 );
C_ASSERT( sizeof(ControllerDigitalActionData_t().bActive) >= 1 );

C_ASSERT( sizeof(ControllerMotionData_t) >= 40 );
C_ASSERT( offsetof(ControllerMotionData_t, rotQuatX) == 0 );
C_ASSERT( sizeof(ControllerMotionData_t().rotQuatX) >= 4 );
C_ASSERT( offsetof(ControllerMotionData_t, rotQuatY) == 4 );
C_ASSERT( sizeof(ControllerMotionData_t().rotQuatY) >= 4 );
C_ASSERT( offsetof(ControllerMotionData_t, rotQuatZ) == 8 );
C_ASSERT( sizeof(ControllerMotionData_t().rotQuatZ) >= 4 );
C_ASSERT( offsetof(ControllerMotionData_t, rotQuatW) == 12 );
C_ASSERT( sizeof(ControllerMotionData_t().rotQuatW) >= 4 );
C_ASSERT( offsetof(ControllerMotionData_t, posAccelX) == 16 );
C_ASSERT( sizeof(ControllerMotionData_t().posAccelX) >= 4 );
C_ASSERT( offsetof(ControllerMotionData_t, posAccelY) == 20 );
C_ASSERT( sizeof(ControllerMotionData_t().posAccelY) >= 4 );
C_ASSERT( offsetof(ControllerMotionData_t, posAccelZ) == 24 );
C_ASSERT( sizeof(ControllerMotionData_t().posAccelZ) >= 4 );
C_ASSERT( offsetof(ControllerMotionData_t, rotVelX) == 28 );
C_ASSERT( sizeof(ControllerMotionData_t().rotVelX) >= 4 );
C_ASSERT( offsetof(ControllerMotionData_t, rotVelY) == 32 );
C_ASSERT( sizeof(ControllerMotionData_t().rotVelY) >= 4 );
C_ASSERT( offsetof(ControllerMotionData_t, rotVelZ) == 36 );
C_ASSERT( sizeof(ControllerMotionData_t().rotVelZ) >= 4 );

C_ASSERT( sizeof(DlcInstalled_t) >= 4 );
C_ASSERT( offsetof(DlcInstalled_t, m_nAppID) == 0 );
C_ASSERT( sizeof(DlcInstalled_t().m_nAppID) >= 4 );

C_ASSERT( sizeof(DownloadClanActivityCountsResult_t) >= 1 );
C_ASSERT( offsetof(DownloadClanActivityCountsResult_t, m_bSuccess) == 0 );
C_ASSERT( sizeof(DownloadClanActivityCountsResult_t().m_bSuccess) >= 1 );

C_ASSERT( sizeof(DurationControl_t_147) >= 32 );
C_ASSERT( offsetof(DurationControl_t_147, m_eResult) == 0 );
C_ASSERT( sizeof(DurationControl_t_147().m_eResult) >= 4 );
C_ASSERT( offsetof(DurationControl_t_147, m_appid) == 4 );
C_ASSERT( sizeof(DurationControl_t_147().m_appid) >= 4 );
C_ASSERT( offsetof(DurationControl_t_147, m_bApplicable) == 8 );
C_ASSERT( sizeof(DurationControl_t_147().m_bApplicable) >= 1 );
C_ASSERT( offsetof(DurationControl_t_147, m_csecsLast5h) == 12 );
C_ASSERT( sizeof(DurationControl_t_147().m_csecsLast5h) >= 4 );
C_ASSERT( offsetof(DurationControl_t_147, m_progress) == 16 );
C_ASSERT( sizeof(DurationControl_t_147().m_progress) >= 4 );
C_ASSERT( offsetof(DurationControl_t_147, m_notification) == 20 );
C_ASSERT( sizeof(DurationControl_t_147().m_notification) >= 4 );
C_ASSERT( offsetof(DurationControl_t_147, m_csecsToday) == 24 );
C_ASSERT( sizeof(DurationControl_t_147().m_csecsToday) >= 4 );
C_ASSERT( offsetof(DurationControl_t_147, m_csecsRemaining) == 28 );
C_ASSERT( sizeof(DurationControl_t_147().m_csecsRemaining) >= 4 );

C_ASSERT( sizeof(DurationControl_t_145) >= 24 );
C_ASSERT( offsetof(DurationControl_t_145, m_eResult) == 0 );
C_ASSERT( sizeof(DurationControl_t_145().m_eResult) >= 4 );
C_ASSERT( offsetof(DurationControl_t_145, m_appid) == 4 );
C_ASSERT( sizeof(DurationControl_t_145().m_appid) >= 4 );
C_ASSERT( offsetof(DurationControl_t_145, m_bApplicable) == 8 );
C_ASSERT( sizeof(DurationControl_t_145().m_bApplicable) >= 1 );
C_ASSERT( offsetof(DurationControl_t_145, m_csecsLast5h) == 12 );
C_ASSERT( sizeof(DurationControl_t_145().m_csecsLast5h) >= 4 );
C_ASSERT( offsetof(DurationControl_t_145, m_progress) == 16 );
C_ASSERT( sizeof(DurationControl_t_145().m_progress) >= 4 );
C_ASSERT( offsetof(DurationControl_t_145, m_notification) == 20 );
C_ASSERT( sizeof(DurationControl_t_145().m_notification) >= 4 );

C_ASSERT( sizeof(EncryptedAppTicketResponse_t) >= 4 );
C_ASSERT( offsetof(EncryptedAppTicketResponse_t, m_eResult) == 0 );
C_ASSERT( sizeof(EncryptedAppTicketResponse_t().m_eResult) >= 4 );

C_ASSERT( sizeof(EquippedProfileItemsChanged_t) >= 8 );
C_ASSERT( offsetof(EquippedProfileItemsChanged_t, m_steamID) == 0 );
C_ASSERT( sizeof(EquippedProfileItemsChanged_t().m_steamID) >= 8 );

C_ASSERT( sizeof(EquippedProfileItems_t) >= 20 );
C_ASSERT( offsetof(EquippedProfileItems_t, m_eResult) == 0 );
C_ASSERT( sizeof(EquippedProfileItems_t().m_eResult) >= 4 );
C_ASSERT( offsetof(EquippedProfileItems_t, m_steamID) == 4 );
C_ASSERT( sizeof(EquippedProfileItems_t().m_steamID) >= 8 );
C_ASSERT( offsetof(EquippedProfileItems_t, m_bHasAnimatedAvatar) == 12 );
C_ASSERT( sizeof(EquippedProfileItems_t().m_bHasAnimatedAvatar) >= 1 );
C_ASSERT( offsetof(EquippedProfileItems_t, m_bHasAvatarFrame) == 13 );
C_ASSERT( sizeof(EquippedProfileItems_t().m_bHasAvatarFrame) >= 1 );
C_ASSERT( offsetof(EquippedProfileItems_t, m_bHasProfileModifier) == 14 );
C_ASSERT( sizeof(EquippedProfileItems_t().m_bHasProfileModifier) >= 1 );
C_ASSERT( offsetof(EquippedProfileItems_t, m_bHasProfileBackground) == 15 );
C_ASSERT( sizeof(EquippedProfileItems_t().m_bHasProfileBackground) >= 1 );
C_ASSERT( offsetof(EquippedProfileItems_t, m_bHasMiniProfileBackground) == 16 );
C_ASSERT( sizeof(EquippedProfileItems_t().m_bHasMiniProfileBackground) >= 1 );

C_ASSERT( sizeof(FavoritesListAccountsUpdated_t) >= 4 );
C_ASSERT( offsetof(FavoritesListAccountsUpdated_t, m_eResult) == 0 );
C_ASSERT( sizeof(FavoritesListAccountsUpdated_t().m_eResult) >= 4 );

C_ASSERT( sizeof(FavoritesListChanged_t_128x) >= 28 );
C_ASSERT( offsetof(FavoritesListChanged_t_128x, m_nIP) == 0 );
C_ASSERT( sizeof(FavoritesListChanged_t_128x().m_nIP) >= 4 );
C_ASSERT( offsetof(FavoritesListChanged_t_128x, m_nQueryPort) == 4 );
C_ASSERT( sizeof(FavoritesListChanged_t_128x().m_nQueryPort) >= 4 );
C_ASSERT( offsetof(FavoritesListChanged_t_128x, m_nConnPort) == 8 );
C_ASSERT( sizeof(FavoritesListChanged_t_128x().m_nConnPort) >= 4 );
C_ASSERT( offsetof(FavoritesListChanged_t_128x, m_nAppID) == 12 );
C_ASSERT( sizeof(FavoritesListChanged_t_128x().m_nAppID) >= 4 );
C_ASSERT( offsetof(FavoritesListChanged_t_128x, m_nFlags) == 16 );
C_ASSERT( sizeof(FavoritesListChanged_t_128x().m_nFlags) >= 4 );
C_ASSERT( offsetof(FavoritesListChanged_t_128x, m_bAdd) == 20 );
C_ASSERT( sizeof(FavoritesListChanged_t_128x().m_bAdd) >= 1 );
C_ASSERT( offsetof(FavoritesListChanged_t_128x, m_unAccountId) == 24 );
C_ASSERT( sizeof(FavoritesListChanged_t_128x().m_unAccountId) >= 4 );

C_ASSERT( sizeof(FavoritesListChanged_t_099u) >= 24 );
C_ASSERT( offsetof(FavoritesListChanged_t_099u, m_nIP) == 0 );
C_ASSERT( sizeof(FavoritesListChanged_t_099u().m_nIP) >= 4 );
C_ASSERT( offsetof(FavoritesListChanged_t_099u, m_nQueryPort) == 4 );
C_ASSERT( sizeof(FavoritesListChanged_t_099u().m_nQueryPort) >= 4 );
C_ASSERT( offsetof(FavoritesListChanged_t_099u, m_nConnPort) == 8 );
C_ASSERT( sizeof(FavoritesListChanged_t_099u().m_nConnPort) >= 4 );
C_ASSERT( offsetof(FavoritesListChanged_t_099u, m_nAppID) == 12 );
C_ASSERT( sizeof(FavoritesListChanged_t_099u().m_nAppID) >= 4 );
C_ASSERT( offsetof(FavoritesListChanged_t_099u, m_nFlags) == 16 );
C_ASSERT( sizeof(FavoritesListChanged_t_099u().m_nFlags) >= 4 );
C_ASSERT( offsetof(FavoritesListChanged_t_099u, m_bAdd) == 20 );
C_ASSERT( sizeof(FavoritesListChanged_t_099u().m_bAdd) >= 1 );

C_ASSERT( sizeof(FilterTextDictionaryChanged_t) >= 4 );
C_ASSERT( offsetof(FilterTextDictionaryChanged_t, m_eLanguage) == 0 );
C_ASSERT( sizeof(FilterTextDictionaryChanged_t().m_eLanguage) >= 4 );

C_ASSERT( sizeof(FloatingGamepadTextInputDismissed_t) >= 1 );

C_ASSERT( sizeof(FriendGameInfo_t) >= 24 );
C_ASSERT( offsetof(FriendGameInfo_t, m_gameID) == 0 );
C_ASSERT( sizeof(FriendGameInfo_t().m_gameID) >= 8 );
C_ASSERT( offsetof(FriendGameInfo_t, m_unGameIP) == 8 );
C_ASSERT( sizeof(FriendGameInfo_t().m_unGameIP) >= 4 );
C_ASSERT( offsetof(FriendGameInfo_t, m_usGamePort) == 12 );
C_ASSERT( sizeof(FriendGameInfo_t().m_usGamePort) >= 2 );
C_ASSERT( offsetof(FriendGameInfo_t, m_usQueryPort) == 14 );
C_ASSERT( sizeof(FriendGameInfo_t().m_usQueryPort) >= 2 );
C_ASSERT( offsetof(FriendGameInfo_t, m_steamIDLobby) == 16 );
C_ASSERT( sizeof(FriendGameInfo_t().m_steamIDLobby) >= 8 );

C_ASSERT( sizeof(FriendRichPresenceUpdate_t) >= 12 );
C_ASSERT( offsetof(FriendRichPresenceUpdate_t, m_steamIDFriend) == 0 );
C_ASSERT( sizeof(FriendRichPresenceUpdate_t().m_steamIDFriend) >= 8 );
C_ASSERT( offsetof(FriendRichPresenceUpdate_t, m_nAppID) == 8 );
C_ASSERT( sizeof(FriendRichPresenceUpdate_t().m_nAppID) >= 4 );

C_ASSERT( sizeof(FriendSessionStateInfo_t) >= 8 );
C_ASSERT( offsetof(FriendSessionStateInfo_t, m_uiOnlineSessionInstances) == 0 );
C_ASSERT( sizeof(FriendSessionStateInfo_t().m_uiOnlineSessionInstances) >= 4 );
C_ASSERT( offsetof(FriendSessionStateInfo_t, m_uiPublishedToFriendsSessionInstance) == 4 );
C_ASSERT( sizeof(FriendSessionStateInfo_t().m_uiPublishedToFriendsSessionInstance) >= 1 );

C_ASSERT( sizeof(FriendsEnumerateFollowingList_t) >= 412 );
C_ASSERT( offsetof(FriendsEnumerateFollowingList_t, m_eResult) == 0 );
C_ASSERT( sizeof(FriendsEnumerateFollowingList_t().m_eResult) >= 4 );
C_ASSERT( offsetof(FriendsEnumerateFollowingList_t, m_rgSteamID) == 4 );
C_ASSERT( sizeof(FriendsEnumerateFollowingList_t().m_rgSteamID) >= 400 );
C_ASSERT( offsetof(FriendsEnumerateFollowingList_t, m_nResultsReturned) == 404 );
C_ASSERT( sizeof(FriendsEnumerateFollowingList_t().m_nResultsReturned) >= 4 );
C_ASSERT( offsetof(FriendsEnumerateFollowingList_t, m_nTotalResultCount) == 408 );
C_ASSERT( sizeof(FriendsEnumerateFollowingList_t().m_nTotalResultCount) >= 4 );

C_ASSERT( sizeof(FriendsGetFollowerCount_t) >= 16 );
C_ASSERT( offsetof(FriendsGetFollowerCount_t, m_eResult) == 0 );
C_ASSERT( sizeof(FriendsGetFollowerCount_t().m_eResult) >= 4 );
C_ASSERT( offsetof(FriendsGetFollowerCount_t, m_steamID) == 4 );
C_ASSERT( sizeof(FriendsGetFollowerCount_t().m_steamID) >= 8 );
C_ASSERT( offsetof(FriendsGetFollowerCount_t, m_nCount) == 12 );
C_ASSERT( sizeof(FriendsGetFollowerCount_t().m_nCount) >= 4 );

C_ASSERT( sizeof(FriendsIsFollowing_t) >= 16 );
C_ASSERT( offsetof(FriendsIsFollowing_t, m_eResult) == 0 );
C_ASSERT( sizeof(FriendsIsFollowing_t().m_eResult) >= 4 );
C_ASSERT( offsetof(FriendsIsFollowing_t, m_steamID) == 4 );
C_ASSERT( sizeof(FriendsIsFollowing_t().m_steamID) >= 8 );
C_ASSERT( offsetof(FriendsIsFollowing_t, m_bIsFollowing) == 12 );
C_ASSERT( sizeof(FriendsIsFollowing_t().m_bIsFollowing) >= 1 );

C_ASSERT( sizeof(GCMessageAvailable_t) >= 4 );
C_ASSERT( offsetof(GCMessageAvailable_t, m_nMessageSize) == 0 );
C_ASSERT( sizeof(GCMessageAvailable_t().m_nMessageSize) >= 4 );

C_ASSERT( sizeof(GCMessageFailed_t) >= 1 );

C_ASSERT( sizeof(GSClientAchievementStatus_t) >= 144 );
C_ASSERT( offsetof(GSClientAchievementStatus_t, m_SteamID) == 0 );
C_ASSERT( sizeof(GSClientAchievementStatus_t().m_SteamID) >= 8 );
C_ASSERT( offsetof(GSClientAchievementStatus_t, m_pchAchievement) == 8 );
C_ASSERT( sizeof(GSClientAchievementStatus_t().m_pchAchievement) >= 128 );
C_ASSERT( offsetof(GSClientAchievementStatus_t, m_bUnlocked) == 136 );
C_ASSERT( sizeof(GSClientAchievementStatus_t().m_bUnlocked) >= 1 );

C_ASSERT( sizeof(GSClientApprove_t_126) >= 16 );
C_ASSERT( offsetof(GSClientApprove_t_126, m_SteamID) == 0 );
C_ASSERT( sizeof(GSClientApprove_t_126().m_SteamID) >= 8 );
C_ASSERT( offsetof(GSClientApprove_t_126, m_OwnerSteamID) == 8 );
C_ASSERT( sizeof(GSClientApprove_t_126().m_OwnerSteamID) >= 8 );

C_ASSERT( sizeof(GSClientApprove_t_099u) >= 8 );
C_ASSERT( offsetof(GSClientApprove_t_099u, m_SteamID) == 0 );
C_ASSERT( sizeof(GSClientApprove_t_099u().m_SteamID) >= 8 );

C_ASSERT( sizeof(GSClientDeny_t) >= 140 );
C_ASSERT( offsetof(GSClientDeny_t, m_SteamID) == 0 );
C_ASSERT( sizeof(GSClientDeny_t().m_SteamID) >= 8 );
C_ASSERT( offsetof(GSClientDeny_t, m_eDenyReason) == 8 );
C_ASSERT( sizeof(GSClientDeny_t().m_eDenyReason) >= 4 );
C_ASSERT( offsetof(GSClientDeny_t, m_rgchOptionalText) == 12 );
C_ASSERT( sizeof(GSClientDeny_t().m_rgchOptionalText) >= 128 );

C_ASSERT( sizeof(GSClientGroupStatus_t) >= 18 );
C_ASSERT( offsetof(GSClientGroupStatus_t, m_SteamIDUser) == 0 );
C_ASSERT( sizeof(GSClientGroupStatus_t().m_SteamIDUser) >= 8 );
C_ASSERT( offsetof(GSClientGroupStatus_t, m_SteamIDGroup) == 8 );
C_ASSERT( sizeof(GSClientGroupStatus_t().m_SteamIDGroup) >= 8 );
C_ASSERT( offsetof(GSClientGroupStatus_t, m_bMember) == 16 );
C_ASSERT( sizeof(GSClientGroupStatus_t().m_bMember) >= 1 );
C_ASSERT( offsetof(GSClientGroupStatus_t, m_bOfficer) == 17 );
C_ASSERT( sizeof(GSClientGroupStatus_t().m_bOfficer) >= 1 );

C_ASSERT( sizeof(GSClientKick_t) >= 12 );
C_ASSERT( offsetof(GSClientKick_t, m_SteamID) == 0 );
C_ASSERT( sizeof(GSClientKick_t().m_SteamID) >= 8 );
C_ASSERT( offsetof(GSClientKick_t, m_eDenyReason) == 8 );
C_ASSERT( sizeof(GSClientKick_t().m_eDenyReason) >= 4 );

C_ASSERT( sizeof(GSGameplayStats_t) >= 16 );
C_ASSERT( offsetof(GSGameplayStats_t, m_eResult) == 0 );
C_ASSERT( sizeof(GSGameplayStats_t().m_eResult) >= 4 );
C_ASSERT( offsetof(GSGameplayStats_t, m_nRank) == 4 );
C_ASSERT( sizeof(GSGameplayStats_t().m_nRank) >= 4 );
C_ASSERT( offsetof(GSGameplayStats_t, m_unTotalConnects) == 8 );
C_ASSERT( sizeof(GSGameplayStats_t().m_unTotalConnects) >= 4 );
C_ASSERT( offsetof(GSGameplayStats_t, m_unTotalMinutesPlayed) == 12 );
C_ASSERT( sizeof(GSGameplayStats_t().m_unTotalMinutesPlayed) >= 4 );

C_ASSERT( sizeof(GSPolicyResponse_t) >= 1 );
C_ASSERT( offsetof(GSPolicyResponse_t, m_bSecure) == 0 );
C_ASSERT( sizeof(GSPolicyResponse_t().m_bSecure) >= 1 );

C_ASSERT( sizeof(GSStatsReceived_t) >= 12 );
C_ASSERT( offsetof(GSStatsReceived_t, m_eResult) == 0 );
C_ASSERT( sizeof(GSStatsReceived_t().m_eResult) >= 4 );
C_ASSERT( offsetof(GSStatsReceived_t, m_steamIDUser) == 4 );
C_ASSERT( sizeof(GSStatsReceived_t().m_steamIDUser) >= 8 );

C_ASSERT( sizeof(GSStatsStored_t) >= 12 );
C_ASSERT( offsetof(GSStatsStored_t, m_eResult) == 0 );
C_ASSERT( sizeof(GSStatsStored_t().m_eResult) >= 4 );
C_ASSERT( offsetof(GSStatsStored_t, m_steamIDUser) == 4 );
C_ASSERT( sizeof(GSStatsStored_t().m_steamIDUser) >= 8 );

C_ASSERT( sizeof(GSStatsUnloaded_t) >= 8 );
C_ASSERT( offsetof(GSStatsUnloaded_t, m_steamIDUser) == 0 );
C_ASSERT( sizeof(GSStatsUnloaded_t().m_steamIDUser) >= 8 );

C_ASSERT( sizeof(GameConnectedChatJoin_t) >= 16 );
C_ASSERT( offsetof(GameConnectedChatJoin_t, m_steamIDClanChat) == 0 );
C_ASSERT( sizeof(GameConnectedChatJoin_t().m_steamIDClanChat) >= 8 );
C_ASSERT( offsetof(GameConnectedChatJoin_t, m_steamIDUser) == 8 );
C_ASSERT( sizeof(GameConnectedChatJoin_t().m_steamIDUser) >= 8 );

C_ASSERT( sizeof(GameConnectedChatLeave_t) >= 18 );
C_ASSERT( offsetof(GameConnectedChatLeave_t, m_steamIDClanChat) == 0 );
C_ASSERT( sizeof(GameConnectedChatLeave_t().m_steamIDClanChat) >= 8 );
C_ASSERT( offsetof(GameConnectedChatLeave_t, m_steamIDUser) == 8 );
C_ASSERT( sizeof(GameConnectedChatLeave_t().m_steamIDUser) >= 8 );
C_ASSERT( offsetof(GameConnectedChatLeave_t, m_bKicked) == 16 );
C_ASSERT( sizeof(GameConnectedChatLeave_t().m_bKicked) >= 1 );
C_ASSERT( offsetof(GameConnectedChatLeave_t, m_bDropped) == 17 );
C_ASSERT( sizeof(GameConnectedChatLeave_t().m_bDropped) >= 1 );

C_ASSERT( sizeof(GameConnectedClanChatMsg_t) >= 20 );
C_ASSERT( offsetof(GameConnectedClanChatMsg_t, m_steamIDClanChat) == 0 );
C_ASSERT( sizeof(GameConnectedClanChatMsg_t().m_steamIDClanChat) >= 8 );
C_ASSERT( offsetof(GameConnectedClanChatMsg_t, m_steamIDUser) == 8 );
C_ASSERT( sizeof(GameConnectedClanChatMsg_t().m_steamIDUser) >= 8 );
C_ASSERT( offsetof(GameConnectedClanChatMsg_t, m_iMessageID) == 16 );
C_ASSERT( sizeof(GameConnectedClanChatMsg_t().m_iMessageID) >= 4 );

C_ASSERT( sizeof(GameConnectedFriendChatMsg_t) >= 12 );
C_ASSERT( offsetof(GameConnectedFriendChatMsg_t, m_steamIDUser) == 0 );
C_ASSERT( sizeof(GameConnectedFriendChatMsg_t().m_steamIDUser) >= 8 );
C_ASSERT( offsetof(GameConnectedFriendChatMsg_t, m_iMessageID) == 8 );
C_ASSERT( sizeof(GameConnectedFriendChatMsg_t().m_iMessageID) >= 4 );

C_ASSERT( sizeof(GameLobbyJoinRequested_t) >= 16 );
C_ASSERT( offsetof(GameLobbyJoinRequested_t, m_steamIDLobby) == 0 );
C_ASSERT( sizeof(GameLobbyJoinRequested_t().m_steamIDLobby) >= 8 );
C_ASSERT( offsetof(GameLobbyJoinRequested_t, m_steamIDFriend) == 8 );
C_ASSERT( sizeof(GameLobbyJoinRequested_t().m_steamIDFriend) >= 8 );

C_ASSERT( sizeof(GameOverlayActivated_t_158) >= 12 );
C_ASSERT( offsetof(GameOverlayActivated_t_158, m_bActive) == 0 );
C_ASSERT( sizeof(GameOverlayActivated_t_158().m_bActive) >= 1 );
C_ASSERT( offsetof(GameOverlayActivated_t_158, m_bUserInitiated) == 1 );
C_ASSERT( sizeof(GameOverlayActivated_t_158().m_bUserInitiated) >= 1 );
C_ASSERT( offsetof(GameOverlayActivated_t_158, m_nAppID) == 4 );
C_ASSERT( sizeof(GameOverlayActivated_t_158().m_nAppID) >= 4 );
C_ASSERT( offsetof(GameOverlayActivated_t_158, m_dwOverlayPID) == 8 );
C_ASSERT( sizeof(GameOverlayActivated_t_158().m_dwOverlayPID) >= 4 );

C_ASSERT( sizeof(GameOverlayActivated_t_156) >= 8 );
C_ASSERT( offsetof(GameOverlayActivated_t_156, m_bActive) == 0 );
C_ASSERT( sizeof(GameOverlayActivated_t_156().m_bActive) >= 1 );
C_ASSERT( offsetof(GameOverlayActivated_t_156, m_bUserInitiated) == 1 );
C_ASSERT( sizeof(GameOverlayActivated_t_156().m_bUserInitiated) >= 1 );
C_ASSERT( offsetof(GameOverlayActivated_t_156, m_nAppID) == 4 );
C_ASSERT( sizeof(GameOverlayActivated_t_156().m_nAppID) >= 4 );

C_ASSERT( sizeof(GameOverlayActivated_t_099u) >= 1 );
C_ASSERT( offsetof(GameOverlayActivated_t_099u, m_bActive) == 0 );
C_ASSERT( sizeof(GameOverlayActivated_t_099u().m_bActive) >= 1 );

C_ASSERT( sizeof(GameRichPresenceJoinRequested_t) >= 264 );
C_ASSERT( offsetof(GameRichPresenceJoinRequested_t, m_steamIDFriend) == 0 );
C_ASSERT( sizeof(GameRichPresenceJoinRequested_t().m_steamIDFriend) >= 8 );
C_ASSERT( offsetof(GameRichPresenceJoinRequested_t, m_rgchConnect) == 8 );
C_ASSERT( sizeof(GameRichPresenceJoinRequested_t().m_rgchConnect) >= 256 );

C_ASSERT( sizeof(GameServerChangeRequested_t) >= 128 );
C_ASSERT( offsetof(GameServerChangeRequested_t, m_rgchServer) == 0 );
C_ASSERT( sizeof(GameServerChangeRequested_t().m_rgchServer) >= 64 );
C_ASSERT( offsetof(GameServerChangeRequested_t, m_rgchPassword) == 64 );
C_ASSERT( sizeof(GameServerChangeRequested_t().m_rgchPassword) >= 64 );

C_ASSERT( sizeof(GameStatsSessionClosed_t) >= 16 );
C_ASSERT( offsetof(GameStatsSessionClosed_t, m_ulSessionID) == 0 );
C_ASSERT( sizeof(GameStatsSessionClosed_t().m_ulSessionID) >= 8 );
C_ASSERT( offsetof(GameStatsSessionClosed_t, m_eResult) == 8 );
C_ASSERT( sizeof(GameStatsSessionClosed_t().m_eResult) >= 4 );

C_ASSERT( sizeof(GameStatsSessionIssued_t) >= 16 );
C_ASSERT( offsetof(GameStatsSessionIssued_t, m_ulSessionID) == 0 );
C_ASSERT( sizeof(GameStatsSessionIssued_t().m_ulSessionID) >= 8 );
C_ASSERT( offsetof(GameStatsSessionIssued_t, m_eResult) == 8 );
C_ASSERT( sizeof(GameStatsSessionIssued_t().m_eResult) >= 4 );
C_ASSERT( offsetof(GameStatsSessionIssued_t, m_bCollectingAny) == 12 );
C_ASSERT( sizeof(GameStatsSessionIssued_t().m_bCollectingAny) >= 1 );
C_ASSERT( offsetof(GameStatsSessionIssued_t, m_bCollectingDetails) == 13 );
C_ASSERT( sizeof(GameStatsSessionIssued_t().m_bCollectingDetails) >= 1 );

C_ASSERT( sizeof(GameWebCallback_t) >= 256 );
C_ASSERT( offsetof(GameWebCallback_t, m_szURL) == 0 );
C_ASSERT( sizeof(GameWebCallback_t().m_szURL) >= 256 );

C_ASSERT( sizeof(GamepadTextInputDismissed_t_156) >= 12 );
C_ASSERT( offsetof(GamepadTextInputDismissed_t_156, m_bSubmitted) == 0 );
C_ASSERT( sizeof(GamepadTextInputDismissed_t_156().m_bSubmitted) >= 1 );
C_ASSERT( offsetof(GamepadTextInputDismissed_t_156, m_unSubmittedText) == 4 );
C_ASSERT( sizeof(GamepadTextInputDismissed_t_156().m_unSubmittedText) >= 4 );
C_ASSERT( offsetof(GamepadTextInputDismissed_t_156, m_unAppID) == 8 );
C_ASSERT( sizeof(GamepadTextInputDismissed_t_156().m_unAppID) >= 4 );

C_ASSERT( sizeof(GamepadTextInputDismissed_t_121) >= 8 );
C_ASSERT( offsetof(GamepadTextInputDismissed_t_121, m_bSubmitted) == 0 );
C_ASSERT( sizeof(GamepadTextInputDismissed_t_121().m_bSubmitted) >= 1 );
C_ASSERT( offsetof(GamepadTextInputDismissed_t_121, m_unSubmittedText) == 4 );
C_ASSERT( sizeof(GamepadTextInputDismissed_t_121().m_unSubmittedText) >= 4 );

C_ASSERT( sizeof(GetAuthSessionTicketResponse_t) >= 8 );
C_ASSERT( offsetof(GetAuthSessionTicketResponse_t, m_hAuthTicket) == 0 );
C_ASSERT( sizeof(GetAuthSessionTicketResponse_t().m_hAuthTicket) >= 4 );
C_ASSERT( offsetof(GetAuthSessionTicketResponse_t, m_eResult) == 4 );
C_ASSERT( sizeof(GetAuthSessionTicketResponse_t().m_eResult) >= 4 );

C_ASSERT( sizeof(GetOPFSettingsResult_t) >= 8 );
C_ASSERT( offsetof(GetOPFSettingsResult_t, m_eResult) == 0 );
C_ASSERT( sizeof(GetOPFSettingsResult_t().m_eResult) >= 4 );
C_ASSERT( offsetof(GetOPFSettingsResult_t, m_unVideoAppID) == 4 );
C_ASSERT( sizeof(GetOPFSettingsResult_t().m_unVideoAppID) >= 4 );

C_ASSERT( sizeof(GetTicketForWebApiResponse_t) >= 2572 );
C_ASSERT( offsetof(GetTicketForWebApiResponse_t, m_hAuthTicket) == 0 );
C_ASSERT( sizeof(GetTicketForWebApiResponse_t().m_hAuthTicket) >= 4 );
C_ASSERT( offsetof(GetTicketForWebApiResponse_t, m_eResult) == 4 );
C_ASSERT( sizeof(GetTicketForWebApiResponse_t().m_eResult) >= 4 );
C_ASSERT( offsetof(GetTicketForWebApiResponse_t, m_cubTicket) == 8 );
C_ASSERT( sizeof(GetTicketForWebApiResponse_t().m_cubTicket) >= 4 );
C_ASSERT( offsetof(GetTicketForWebApiResponse_t, m_rgubTicket) == 12 );
C_ASSERT( sizeof(GetTicketForWebApiResponse_t().m_rgubTicket) >= 2560 );

C_ASSERT( sizeof(GetUserItemVoteResult_t) >= 16 );
C_ASSERT( offsetof(GetUserItemVoteResult_t, m_nPublishedFileId) == 0 );
C_ASSERT( sizeof(GetUserItemVoteResult_t().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(GetUserItemVoteResult_t, m_eResult) == 8 );
C_ASSERT( sizeof(GetUserItemVoteResult_t().m_eResult) >= 4 );
C_ASSERT( offsetof(GetUserItemVoteResult_t, m_bVotedUp) == 12 );
C_ASSERT( sizeof(GetUserItemVoteResult_t().m_bVotedUp) >= 1 );
C_ASSERT( offsetof(GetUserItemVoteResult_t, m_bVotedDown) == 13 );
C_ASSERT( sizeof(GetUserItemVoteResult_t().m_bVotedDown) >= 1 );
C_ASSERT( offsetof(GetUserItemVoteResult_t, m_bVoteSkipped) == 14 );
C_ASSERT( sizeof(GetUserItemVoteResult_t().m_bVoteSkipped) >= 1 );

C_ASSERT( sizeof(GetVideoURLResult_t) >= 264 );
C_ASSERT( offsetof(GetVideoURLResult_t, m_eResult) == 0 );
C_ASSERT( sizeof(GetVideoURLResult_t().m_eResult) >= 4 );
C_ASSERT( offsetof(GetVideoURLResult_t, m_unVideoAppID) == 4 );
C_ASSERT( sizeof(GetVideoURLResult_t().m_unVideoAppID) >= 4 );
C_ASSERT( offsetof(GetVideoURLResult_t, m_rgchURL) == 8 );
C_ASSERT( sizeof(GetVideoURLResult_t().m_rgchURL) >= 256 );

C_ASSERT( sizeof(GlobalAchievementPercentagesReady_t) >= 16 );
C_ASSERT( offsetof(GlobalAchievementPercentagesReady_t, m_nGameID) == 0 );
C_ASSERT( sizeof(GlobalAchievementPercentagesReady_t().m_nGameID) >= 8 );
C_ASSERT( offsetof(GlobalAchievementPercentagesReady_t, m_eResult) == 8 );
C_ASSERT( sizeof(GlobalAchievementPercentagesReady_t().m_eResult) >= 4 );

C_ASSERT( sizeof(GlobalStatsReceived_t) >= 16 );
C_ASSERT( offsetof(GlobalStatsReceived_t, m_nGameID) == 0 );
C_ASSERT( sizeof(GlobalStatsReceived_t().m_nGameID) >= 8 );
C_ASSERT( offsetof(GlobalStatsReceived_t, m_eResult) == 8 );
C_ASSERT( sizeof(GlobalStatsReceived_t().m_eResult) >= 4 );

C_ASSERT( sizeof(HTML_BrowserReady_t) >= 4 );
C_ASSERT( offsetof(HTML_BrowserReady_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(HTML_BrowserReady_t().unBrowserHandle) >= 4 );

C_ASSERT( sizeof(HTML_BrowserRestarted_t) >= 8 );
C_ASSERT( offsetof(HTML_BrowserRestarted_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(HTML_BrowserRestarted_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(HTML_BrowserRestarted_t, unOldBrowserHandle) == 4 );
C_ASSERT( sizeof(HTML_BrowserRestarted_t().unOldBrowserHandle) >= 4 );

C_ASSERT( sizeof(HTML_CanGoBackAndForward_t) >= 8 );
C_ASSERT( offsetof(HTML_CanGoBackAndForward_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(HTML_CanGoBackAndForward_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(HTML_CanGoBackAndForward_t, bCanGoBack) == 4 );
C_ASSERT( sizeof(HTML_CanGoBackAndForward_t().bCanGoBack) >= 1 );
C_ASSERT( offsetof(HTML_CanGoBackAndForward_t, bCanGoForward) == 5 );
C_ASSERT( sizeof(HTML_CanGoBackAndForward_t().bCanGoForward) >= 1 );

C_ASSERT( sizeof(HTML_CloseBrowser_t) >= 4 );
C_ASSERT( offsetof(HTML_CloseBrowser_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(HTML_CloseBrowser_t().unBrowserHandle) >= 4 );

C_ASSERT( sizeof(HTML_HidePopup_t) >= 4 );
C_ASSERT( offsetof(HTML_HidePopup_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(HTML_HidePopup_t().unBrowserHandle) >= 4 );

C_ASSERT( sizeof(HTML_HideToolTip_t) >= 4 );
C_ASSERT( offsetof(HTML_HideToolTip_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(HTML_HideToolTip_t().unBrowserHandle) >= 4 );

C_ASSERT( sizeof(HTML_HorizontalScroll_t) >= 24 );
C_ASSERT( offsetof(HTML_HorizontalScroll_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(HTML_HorizontalScroll_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(HTML_HorizontalScroll_t, unScrollMax) == 4 );
C_ASSERT( sizeof(HTML_HorizontalScroll_t().unScrollMax) >= 4 );
C_ASSERT( offsetof(HTML_HorizontalScroll_t, unScrollCurrent) == 8 );
C_ASSERT( sizeof(HTML_HorizontalScroll_t().unScrollCurrent) >= 4 );
C_ASSERT( offsetof(HTML_HorizontalScroll_t, flPageScale) == 12 );
C_ASSERT( sizeof(HTML_HorizontalScroll_t().flPageScale) >= 4 );
C_ASSERT( offsetof(HTML_HorizontalScroll_t, bVisible) == 16 );
C_ASSERT( sizeof(HTML_HorizontalScroll_t().bVisible) >= 1 );
C_ASSERT( offsetof(HTML_HorizontalScroll_t, unPageSize) == 20 );
C_ASSERT( sizeof(HTML_HorizontalScroll_t().unPageSize) >= 4 );

C_ASSERT( sizeof(HTML_SearchResults_t) >= 12 );
C_ASSERT( offsetof(HTML_SearchResults_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(HTML_SearchResults_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(HTML_SearchResults_t, unResults) == 4 );
C_ASSERT( sizeof(HTML_SearchResults_t().unResults) >= 4 );
C_ASSERT( offsetof(HTML_SearchResults_t, unCurrentMatch) == 8 );
C_ASSERT( sizeof(HTML_SearchResults_t().unCurrentMatch) >= 4 );

C_ASSERT( sizeof(HTML_SetCursor_t) >= 8 );
C_ASSERT( offsetof(HTML_SetCursor_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(HTML_SetCursor_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(HTML_SetCursor_t, eMouseCursor) == 4 );
C_ASSERT( sizeof(HTML_SetCursor_t().eMouseCursor) >= 4 );

C_ASSERT( sizeof(HTML_ShowPopup_t) >= 4 );
C_ASSERT( offsetof(HTML_ShowPopup_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(HTML_ShowPopup_t().unBrowserHandle) >= 4 );

C_ASSERT( sizeof(HTML_SizePopup_t) >= 20 );
C_ASSERT( offsetof(HTML_SizePopup_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(HTML_SizePopup_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(HTML_SizePopup_t, unX) == 4 );
C_ASSERT( sizeof(HTML_SizePopup_t().unX) >= 4 );
C_ASSERT( offsetof(HTML_SizePopup_t, unY) == 8 );
C_ASSERT( sizeof(HTML_SizePopup_t().unY) >= 4 );
C_ASSERT( offsetof(HTML_SizePopup_t, unWide) == 12 );
C_ASSERT( sizeof(HTML_SizePopup_t().unWide) >= 4 );
C_ASSERT( offsetof(HTML_SizePopup_t, unTall) == 16 );
C_ASSERT( sizeof(HTML_SizePopup_t().unTall) >= 4 );

C_ASSERT( sizeof(HTML_VerticalScroll_t) >= 24 );
C_ASSERT( offsetof(HTML_VerticalScroll_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(HTML_VerticalScroll_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(HTML_VerticalScroll_t, unScrollMax) == 4 );
C_ASSERT( sizeof(HTML_VerticalScroll_t().unScrollMax) >= 4 );
C_ASSERT( offsetof(HTML_VerticalScroll_t, unScrollCurrent) == 8 );
C_ASSERT( sizeof(HTML_VerticalScroll_t().unScrollCurrent) >= 4 );
C_ASSERT( offsetof(HTML_VerticalScroll_t, flPageScale) == 12 );
C_ASSERT( sizeof(HTML_VerticalScroll_t().flPageScale) >= 4 );
C_ASSERT( offsetof(HTML_VerticalScroll_t, bVisible) == 16 );
C_ASSERT( sizeof(HTML_VerticalScroll_t().bVisible) >= 1 );
C_ASSERT( offsetof(HTML_VerticalScroll_t, unPageSize) == 20 );
C_ASSERT( sizeof(HTML_VerticalScroll_t().unPageSize) >= 4 );

C_ASSERT( sizeof(IPCFailure_t) >= 1 );
C_ASSERT( offsetof(IPCFailure_t, m_eFailureType) == 0 );
C_ASSERT( sizeof(IPCFailure_t().m_eFailureType) >= 1 );

C_ASSERT( sizeof(IPCountry_t) >= 1 );

C_ASSERT( sizeof(InputAnalogActionData_t) >= 13 );
C_ASSERT( offsetof(InputAnalogActionData_t, eMode) == 0 );
C_ASSERT( sizeof(InputAnalogActionData_t().eMode) >= 4 );
C_ASSERT( offsetof(InputAnalogActionData_t, x) == 4 );
C_ASSERT( sizeof(InputAnalogActionData_t().x) >= 4 );
C_ASSERT( offsetof(InputAnalogActionData_t, y) == 8 );
C_ASSERT( sizeof(InputAnalogActionData_t().y) >= 4 );
C_ASSERT( offsetof(InputAnalogActionData_t, bActive) == 12 );
C_ASSERT( sizeof(InputAnalogActionData_t().bActive) >= 1 );

C_ASSERT( sizeof(InputDigitalActionData_t) >= 2 );
C_ASSERT( offsetof(InputDigitalActionData_t, bState) == 0 );
C_ASSERT( sizeof(InputDigitalActionData_t().bState) >= 1 );
C_ASSERT( offsetof(InputDigitalActionData_t, bActive) == 1 );
C_ASSERT( sizeof(InputDigitalActionData_t().bActive) >= 1 );

C_ASSERT( sizeof(InputMotionDataV2_t) >= 72 );
C_ASSERT( offsetof(InputMotionDataV2_t, driftCorrectedQuatX) == 0 );
C_ASSERT( sizeof(InputMotionDataV2_t().driftCorrectedQuatX) >= 4 );
C_ASSERT( offsetof(InputMotionDataV2_t, driftCorrectedQuatY) == 4 );
C_ASSERT( sizeof(InputMotionDataV2_t().driftCorrectedQuatY) >= 4 );
C_ASSERT( offsetof(InputMotionDataV2_t, driftCorrectedQuatZ) == 8 );
C_ASSERT( sizeof(InputMotionDataV2_t().driftCorrectedQuatZ) >= 4 );
C_ASSERT( offsetof(InputMotionDataV2_t, driftCorrectedQuatW) == 12 );
C_ASSERT( sizeof(InputMotionDataV2_t().driftCorrectedQuatW) >= 4 );
C_ASSERT( offsetof(InputMotionDataV2_t, sensorFusionQuatX) == 16 );
C_ASSERT( sizeof(InputMotionDataV2_t().sensorFusionQuatX) >= 4 );
C_ASSERT( offsetof(InputMotionDataV2_t, sensorFusionQuatY) == 20 );
C_ASSERT( sizeof(InputMotionDataV2_t().sensorFusionQuatY) >= 4 );
C_ASSERT( offsetof(InputMotionDataV2_t, sensorFusionQuatZ) == 24 );
C_ASSERT( sizeof(InputMotionDataV2_t().sensorFusionQuatZ) >= 4 );
C_ASSERT( offsetof(InputMotionDataV2_t, sensorFusionQuatW) == 28 );
C_ASSERT( sizeof(InputMotionDataV2_t().sensorFusionQuatW) >= 4 );
C_ASSERT( offsetof(InputMotionDataV2_t, deferredSensorFusionQuatX) == 32 );
C_ASSERT( sizeof(InputMotionDataV2_t().deferredSensorFusionQuatX) >= 4 );
C_ASSERT( offsetof(InputMotionDataV2_t, deferredSensorFusionQuatY) == 36 );
C_ASSERT( sizeof(InputMotionDataV2_t().deferredSensorFusionQuatY) >= 4 );
C_ASSERT( offsetof(InputMotionDataV2_t, deferredSensorFusionQuatZ) == 40 );
C_ASSERT( sizeof(InputMotionDataV2_t().deferredSensorFusionQuatZ) >= 4 );
C_ASSERT( offsetof(InputMotionDataV2_t, deferredSensorFusionQuatW) == 44 );
C_ASSERT( sizeof(InputMotionDataV2_t().deferredSensorFusionQuatW) >= 4 );
C_ASSERT( offsetof(InputMotionDataV2_t, gravityX) == 48 );
C_ASSERT( sizeof(InputMotionDataV2_t().gravityX) >= 4 );
C_ASSERT( offsetof(InputMotionDataV2_t, gravityY) == 52 );
C_ASSERT( sizeof(InputMotionDataV2_t().gravityY) >= 4 );
C_ASSERT( offsetof(InputMotionDataV2_t, gravityZ) == 56 );
C_ASSERT( sizeof(InputMotionDataV2_t().gravityZ) >= 4 );
C_ASSERT( offsetof(InputMotionDataV2_t, degreesPerSecondX) == 60 );
C_ASSERT( sizeof(InputMotionDataV2_t().degreesPerSecondX) >= 4 );
C_ASSERT( offsetof(InputMotionDataV2_t, degreesPerSecondY) == 64 );
C_ASSERT( sizeof(InputMotionDataV2_t().degreesPerSecondY) >= 4 );
C_ASSERT( offsetof(InputMotionDataV2_t, degreesPerSecondZ) == 68 );
C_ASSERT( sizeof(InputMotionDataV2_t().degreesPerSecondZ) >= 4 );

C_ASSERT( sizeof(InputMotionData_t) >= 40 );
C_ASSERT( offsetof(InputMotionData_t, rotQuatX) == 0 );
C_ASSERT( sizeof(InputMotionData_t().rotQuatX) >= 4 );
C_ASSERT( offsetof(InputMotionData_t, rotQuatY) == 4 );
C_ASSERT( sizeof(InputMotionData_t().rotQuatY) >= 4 );
C_ASSERT( offsetof(InputMotionData_t, rotQuatZ) == 8 );
C_ASSERT( sizeof(InputMotionData_t().rotQuatZ) >= 4 );
C_ASSERT( offsetof(InputMotionData_t, rotQuatW) == 12 );
C_ASSERT( sizeof(InputMotionData_t().rotQuatW) >= 4 );
C_ASSERT( offsetof(InputMotionData_t, posAccelX) == 16 );
C_ASSERT( sizeof(InputMotionData_t().posAccelX) >= 4 );
C_ASSERT( offsetof(InputMotionData_t, posAccelY) == 20 );
C_ASSERT( sizeof(InputMotionData_t().posAccelY) >= 4 );
C_ASSERT( offsetof(InputMotionData_t, posAccelZ) == 24 );
C_ASSERT( sizeof(InputMotionData_t().posAccelZ) >= 4 );
C_ASSERT( offsetof(InputMotionData_t, rotVelX) == 28 );
C_ASSERT( sizeof(InputMotionData_t().rotVelX) >= 4 );
C_ASSERT( offsetof(InputMotionData_t, rotVelY) == 32 );
C_ASSERT( sizeof(InputMotionData_t().rotVelY) >= 4 );
C_ASSERT( offsetof(InputMotionData_t, rotVelZ) == 36 );
C_ASSERT( sizeof(InputMotionData_t().rotVelZ) >= 4 );

C_ASSERT( sizeof(JoinClanChatRoomCompletionResult_t) >= 12 );
C_ASSERT( offsetof(JoinClanChatRoomCompletionResult_t, m_steamIDClanChat) == 0 );
C_ASSERT( sizeof(JoinClanChatRoomCompletionResult_t().m_steamIDClanChat) >= 8 );
C_ASSERT( offsetof(JoinClanChatRoomCompletionResult_t, m_eChatRoomEnterResponse) == 8 );
C_ASSERT( sizeof(JoinClanChatRoomCompletionResult_t().m_eChatRoomEnterResponse) >= 4 );

C_ASSERT( sizeof(LeaderboardFindResult_t) >= 16 );
C_ASSERT( offsetof(LeaderboardFindResult_t, m_hSteamLeaderboard) == 0 );
C_ASSERT( sizeof(LeaderboardFindResult_t().m_hSteamLeaderboard) >= 8 );
C_ASSERT( offsetof(LeaderboardFindResult_t, m_bLeaderboardFound) == 8 );
C_ASSERT( sizeof(LeaderboardFindResult_t().m_bLeaderboardFound) >= 1 );

C_ASSERT( sizeof(LeaderboardScoresDownloaded_t) >= 24 );
C_ASSERT( offsetof(LeaderboardScoresDownloaded_t, m_hSteamLeaderboard) == 0 );
C_ASSERT( sizeof(LeaderboardScoresDownloaded_t().m_hSteamLeaderboard) >= 8 );
C_ASSERT( offsetof(LeaderboardScoresDownloaded_t, m_hSteamLeaderboardEntries) == 8 );
C_ASSERT( sizeof(LeaderboardScoresDownloaded_t().m_hSteamLeaderboardEntries) >= 8 );
C_ASSERT( offsetof(LeaderboardScoresDownloaded_t, m_cEntryCount) == 16 );
C_ASSERT( sizeof(LeaderboardScoresDownloaded_t().m_cEntryCount) >= 4 );

C_ASSERT( sizeof(LicensesUpdated_t) >= 1 );

C_ASSERT( sizeof(LobbyChatMsg_t) >= 24 );
C_ASSERT( offsetof(LobbyChatMsg_t, m_ulSteamIDLobby) == 0 );
C_ASSERT( sizeof(LobbyChatMsg_t().m_ulSteamIDLobby) >= 8 );
C_ASSERT( offsetof(LobbyChatMsg_t, m_ulSteamIDUser) == 8 );
C_ASSERT( sizeof(LobbyChatMsg_t().m_ulSteamIDUser) >= 8 );
C_ASSERT( offsetof(LobbyChatMsg_t, m_eChatEntryType) == 16 );
C_ASSERT( sizeof(LobbyChatMsg_t().m_eChatEntryType) >= 1 );
C_ASSERT( offsetof(LobbyChatMsg_t, m_iChatID) == 20 );
C_ASSERT( sizeof(LobbyChatMsg_t().m_iChatID) >= 4 );

C_ASSERT( sizeof(LobbyChatUpdate_t) >= 32 );
C_ASSERT( offsetof(LobbyChatUpdate_t, m_ulSteamIDLobby) == 0 );
C_ASSERT( sizeof(LobbyChatUpdate_t().m_ulSteamIDLobby) >= 8 );
C_ASSERT( offsetof(LobbyChatUpdate_t, m_ulSteamIDUserChanged) == 8 );
C_ASSERT( sizeof(LobbyChatUpdate_t().m_ulSteamIDUserChanged) >= 8 );
C_ASSERT( offsetof(LobbyChatUpdate_t, m_ulSteamIDMakingChange) == 16 );
C_ASSERT( sizeof(LobbyChatUpdate_t().m_ulSteamIDMakingChange) >= 8 );
C_ASSERT( offsetof(LobbyChatUpdate_t, m_rgfChatMemberStateChange) == 24 );
C_ASSERT( sizeof(LobbyChatUpdate_t().m_rgfChatMemberStateChange) >= 4 );

C_ASSERT( sizeof(LobbyClosing_t) >= 8 );
C_ASSERT( offsetof(LobbyClosing_t, m_ulSteamIDLobby) == 0 );
C_ASSERT( sizeof(LobbyClosing_t().m_ulSteamIDLobby) >= 8 );

C_ASSERT( sizeof(LobbyDataUpdate_t_111x) >= 24 );
C_ASSERT( offsetof(LobbyDataUpdate_t_111x, m_ulSteamIDLobby) == 0 );
C_ASSERT( sizeof(LobbyDataUpdate_t_111x().m_ulSteamIDLobby) >= 8 );
C_ASSERT( offsetof(LobbyDataUpdate_t_111x, m_ulSteamIDMember) == 8 );
C_ASSERT( sizeof(LobbyDataUpdate_t_111x().m_ulSteamIDMember) >= 8 );
C_ASSERT( offsetof(LobbyDataUpdate_t_111x, m_bSuccess) == 16 );
C_ASSERT( sizeof(LobbyDataUpdate_t_111x().m_bSuccess) >= 1 );

C_ASSERT( sizeof(LobbyDataUpdate_t_099u) >= 16 );
C_ASSERT( offsetof(LobbyDataUpdate_t_099u, m_ulSteamIDLobby) == 0 );
C_ASSERT( sizeof(LobbyDataUpdate_t_099u().m_ulSteamIDLobby) >= 8 );
C_ASSERT( offsetof(LobbyDataUpdate_t_099u, m_ulSteamIDMember) == 8 );
C_ASSERT( sizeof(LobbyDataUpdate_t_099u().m_ulSteamIDMember) >= 8 );

C_ASSERT( sizeof(LobbyEnter_t) >= 24 );
C_ASSERT( offsetof(LobbyEnter_t, m_ulSteamIDLobby) == 0 );
C_ASSERT( sizeof(LobbyEnter_t().m_ulSteamIDLobby) >= 8 );
C_ASSERT( offsetof(LobbyEnter_t, m_rgfChatPermissions) == 8 );
C_ASSERT( sizeof(LobbyEnter_t().m_rgfChatPermissions) >= 4 );
C_ASSERT( offsetof(LobbyEnter_t, m_bLocked) == 12 );
C_ASSERT( sizeof(LobbyEnter_t().m_bLocked) >= 1 );
C_ASSERT( offsetof(LobbyEnter_t, m_EChatRoomEnterResponse) == 16 );
C_ASSERT( sizeof(LobbyEnter_t().m_EChatRoomEnterResponse) >= 4 );

C_ASSERT( sizeof(LobbyGameCreated_t) >= 24 );
C_ASSERT( offsetof(LobbyGameCreated_t, m_ulSteamIDLobby) == 0 );
C_ASSERT( sizeof(LobbyGameCreated_t().m_ulSteamIDLobby) >= 8 );
C_ASSERT( offsetof(LobbyGameCreated_t, m_ulSteamIDGameServer) == 8 );
C_ASSERT( sizeof(LobbyGameCreated_t().m_ulSteamIDGameServer) >= 8 );
C_ASSERT( offsetof(LobbyGameCreated_t, m_unIP) == 16 );
C_ASSERT( sizeof(LobbyGameCreated_t().m_unIP) >= 4 );
C_ASSERT( offsetof(LobbyGameCreated_t, m_usPort) == 20 );
C_ASSERT( sizeof(LobbyGameCreated_t().m_usPort) >= 2 );

C_ASSERT( sizeof(LobbyInvite_t_112x) >= 24 );
C_ASSERT( offsetof(LobbyInvite_t_112x, m_ulSteamIDUser) == 0 );
C_ASSERT( sizeof(LobbyInvite_t_112x().m_ulSteamIDUser) >= 8 );
C_ASSERT( offsetof(LobbyInvite_t_112x, m_ulSteamIDLobby) == 8 );
C_ASSERT( sizeof(LobbyInvite_t_112x().m_ulSteamIDLobby) >= 8 );
C_ASSERT( offsetof(LobbyInvite_t_112x, m_ulGameID) == 16 );
C_ASSERT( sizeof(LobbyInvite_t_112x().m_ulGameID) >= 8 );

C_ASSERT( sizeof(LobbyInvite_t_099u) >= 16 );
C_ASSERT( offsetof(LobbyInvite_t_099u, m_ulSteamIDUser) == 0 );
C_ASSERT( sizeof(LobbyInvite_t_099u().m_ulSteamIDUser) >= 8 );
C_ASSERT( offsetof(LobbyInvite_t_099u, m_ulSteamIDLobby) == 8 );
C_ASSERT( sizeof(LobbyInvite_t_099u().m_ulSteamIDLobby) >= 8 );

C_ASSERT( sizeof(LobbyKicked_t_106) >= 24 );
C_ASSERT( offsetof(LobbyKicked_t_106, m_ulSteamIDLobby) == 0 );
C_ASSERT( sizeof(LobbyKicked_t_106().m_ulSteamIDLobby) >= 8 );
C_ASSERT( offsetof(LobbyKicked_t_106, m_ulSteamIDAdmin) == 8 );
C_ASSERT( sizeof(LobbyKicked_t_106().m_ulSteamIDAdmin) >= 8 );
C_ASSERT( offsetof(LobbyKicked_t_106, m_bKickedDueToDisconnect) == 16 );
C_ASSERT( sizeof(LobbyKicked_t_106().m_bKickedDueToDisconnect) >= 1 );

C_ASSERT( sizeof(LobbyKicked_t_099u) >= 16 );
C_ASSERT( offsetof(LobbyKicked_t_099u, m_ulSteamIDLobby) == 0 );
C_ASSERT( sizeof(LobbyKicked_t_099u().m_ulSteamIDLobby) >= 8 );
C_ASSERT( offsetof(LobbyKicked_t_099u, m_ulSteamIDAdmin) == 8 );
C_ASSERT( sizeof(LobbyKicked_t_099u().m_ulSteamIDAdmin) >= 8 );

C_ASSERT( sizeof(LobbyMatchList_t) >= 4 );
C_ASSERT( offsetof(LobbyMatchList_t, m_nLobbiesMatching) == 0 );
C_ASSERT( sizeof(LobbyMatchList_t().m_nLobbiesMatching) >= 4 );

C_ASSERT( sizeof(LowBatteryPower_t) >= 1 );
C_ASSERT( offsetof(LowBatteryPower_t, m_nMinutesBatteryLeft) == 0 );
C_ASSERT( sizeof(LowBatteryPower_t().m_nMinutesBatteryLeft) >= 1 );

C_ASSERT( sizeof(MarketEligibilityResponse_t) >= 20 );
C_ASSERT( offsetof(MarketEligibilityResponse_t, m_bAllowed) == 0 );
C_ASSERT( sizeof(MarketEligibilityResponse_t().m_bAllowed) >= 1 );
C_ASSERT( offsetof(MarketEligibilityResponse_t, m_eNotAllowedReason) == 4 );
C_ASSERT( sizeof(MarketEligibilityResponse_t().m_eNotAllowedReason) >= 4 );
C_ASSERT( offsetof(MarketEligibilityResponse_t, m_rtAllowedAtTime) == 8 );
C_ASSERT( sizeof(MarketEligibilityResponse_t().m_rtAllowedAtTime) >= 4 );
C_ASSERT( offsetof(MarketEligibilityResponse_t, m_cdaySteamGuardRequiredDays) == 12 );
C_ASSERT( sizeof(MarketEligibilityResponse_t().m_cdaySteamGuardRequiredDays) >= 4 );
C_ASSERT( offsetof(MarketEligibilityResponse_t, m_cdayNewDeviceCooldown) == 16 );
C_ASSERT( sizeof(MarketEligibilityResponse_t().m_cdayNewDeviceCooldown) >= 4 );

C_ASSERT( sizeof(MatchMakingKeyValuePair_t) >= 512 );
C_ASSERT( offsetof(MatchMakingKeyValuePair_t, m_szKey) == 0 );
C_ASSERT( sizeof(MatchMakingKeyValuePair_t().m_szKey) >= 256 );
C_ASSERT( offsetof(MatchMakingKeyValuePair_t, m_szValue) == 256 );
C_ASSERT( sizeof(MatchMakingKeyValuePair_t().m_szValue) >= 256 );

C_ASSERT( sizeof(MusicPlayerRemoteToFront_t) >= 1 );

C_ASSERT( sizeof(MusicPlayerRemoteWillActivate_t) >= 1 );

C_ASSERT( sizeof(MusicPlayerRemoteWillDeactivate_t) >= 1 );

C_ASSERT( sizeof(MusicPlayerSelectsPlaylistEntry_t) >= 4 );
C_ASSERT( offsetof(MusicPlayerSelectsPlaylistEntry_t, nID) == 0 );
C_ASSERT( sizeof(MusicPlayerSelectsPlaylistEntry_t().nID) >= 4 );

C_ASSERT( sizeof(MusicPlayerSelectsQueueEntry_t) >= 4 );
C_ASSERT( offsetof(MusicPlayerSelectsQueueEntry_t, nID) == 0 );
C_ASSERT( sizeof(MusicPlayerSelectsQueueEntry_t().nID) >= 4 );

C_ASSERT( sizeof(MusicPlayerWantsLooped_t) >= 1 );
C_ASSERT( offsetof(MusicPlayerWantsLooped_t, m_bLooped) == 0 );
C_ASSERT( sizeof(MusicPlayerWantsLooped_t().m_bLooped) >= 1 );

C_ASSERT( sizeof(MusicPlayerWantsPause_t) >= 1 );

C_ASSERT( sizeof(MusicPlayerWantsPlayNext_t) >= 1 );

C_ASSERT( sizeof(MusicPlayerWantsPlayPrevious_t) >= 1 );

C_ASSERT( sizeof(MusicPlayerWantsPlay_t) >= 1 );

C_ASSERT( sizeof(MusicPlayerWantsPlayingRepeatStatus_t) >= 4 );
C_ASSERT( offsetof(MusicPlayerWantsPlayingRepeatStatus_t, m_nPlayingRepeatStatus) == 0 );
C_ASSERT( sizeof(MusicPlayerWantsPlayingRepeatStatus_t().m_nPlayingRepeatStatus) >= 4 );

C_ASSERT( sizeof(MusicPlayerWantsShuffled_t) >= 1 );
C_ASSERT( offsetof(MusicPlayerWantsShuffled_t, m_bShuffled) == 0 );
C_ASSERT( sizeof(MusicPlayerWantsShuffled_t().m_bShuffled) >= 1 );

C_ASSERT( sizeof(MusicPlayerWantsVolume_t) >= 4 );
C_ASSERT( offsetof(MusicPlayerWantsVolume_t, m_flNewVolume) == 0 );
C_ASSERT( sizeof(MusicPlayerWantsVolume_t().m_flNewVolume) >= 4 );

C_ASSERT( sizeof(MusicPlayerWillQuit_t) >= 1 );

C_ASSERT( sizeof(NameHistoryResponse_t) >= 8 );
C_ASSERT( offsetof(NameHistoryResponse_t, m_cSuccessfulLookups) == 0 );
C_ASSERT( sizeof(NameHistoryResponse_t().m_cSuccessfulLookups) >= 4 );
C_ASSERT( offsetof(NameHistoryResponse_t, m_cFailedLookups) == 4 );
C_ASSERT( sizeof(NameHistoryResponse_t().m_cFailedLookups) >= 4 );

C_ASSERT( sizeof(NewLaunchQueryParameters_t) >= 1 );

C_ASSERT( sizeof(NewUrlLaunchParameters_t) >= 1 );

C_ASSERT( sizeof(NumberOfCurrentPlayers_t) >= 8 );
C_ASSERT( offsetof(NumberOfCurrentPlayers_t, m_bSuccess) == 0 );
C_ASSERT( sizeof(NumberOfCurrentPlayers_t().m_bSuccess) >= 1 );
C_ASSERT( offsetof(NumberOfCurrentPlayers_t, m_cPlayers) == 4 );
C_ASSERT( sizeof(NumberOfCurrentPlayers_t().m_cPlayers) >= 4 );

C_ASSERT( sizeof(OverlayBrowserProtocolNavigation_t) >= 1024 );
C_ASSERT( offsetof(OverlayBrowserProtocolNavigation_t, rgchURI) == 0 );
C_ASSERT( sizeof(OverlayBrowserProtocolNavigation_t().rgchURI) >= 1024 );

C_ASSERT( sizeof(P2PSessionConnectFail_t) >= 9 );
C_ASSERT( offsetof(P2PSessionConnectFail_t, m_steamIDRemote) == 0 );
C_ASSERT( sizeof(P2PSessionConnectFail_t().m_steamIDRemote) >= 8 );
C_ASSERT( offsetof(P2PSessionConnectFail_t, m_eP2PSessionError) == 8 );
C_ASSERT( sizeof(P2PSessionConnectFail_t().m_eP2PSessionError) >= 1 );

C_ASSERT( sizeof(P2PSessionRequest_t) >= 8 );
C_ASSERT( offsetof(P2PSessionRequest_t, m_steamIDRemote) == 0 );
C_ASSERT( sizeof(P2PSessionRequest_t().m_steamIDRemote) >= 8 );

C_ASSERT( sizeof(P2PSessionState_t) >= 20 );
C_ASSERT( offsetof(P2PSessionState_t, m_bConnectionActive) == 0 );
C_ASSERT( sizeof(P2PSessionState_t().m_bConnectionActive) >= 1 );
C_ASSERT( offsetof(P2PSessionState_t, m_bConnecting) == 1 );
C_ASSERT( sizeof(P2PSessionState_t().m_bConnecting) >= 1 );
C_ASSERT( offsetof(P2PSessionState_t, m_eP2PSessionError) == 2 );
C_ASSERT( sizeof(P2PSessionState_t().m_eP2PSessionError) >= 1 );
C_ASSERT( offsetof(P2PSessionState_t, m_bUsingRelay) == 3 );
C_ASSERT( sizeof(P2PSessionState_t().m_bUsingRelay) >= 1 );
C_ASSERT( offsetof(P2PSessionState_t, m_nBytesQueuedForSend) == 4 );
C_ASSERT( sizeof(P2PSessionState_t().m_nBytesQueuedForSend) >= 4 );
C_ASSERT( offsetof(P2PSessionState_t, m_nPacketsQueuedForSend) == 8 );
C_ASSERT( sizeof(P2PSessionState_t().m_nPacketsQueuedForSend) >= 4 );
C_ASSERT( offsetof(P2PSessionState_t, m_nRemoteIP) == 12 );
C_ASSERT( sizeof(P2PSessionState_t().m_nRemoteIP) >= 4 );
C_ASSERT( offsetof(P2PSessionState_t, m_nRemotePort) == 16 );
C_ASSERT( sizeof(P2PSessionState_t().m_nRemotePort) >= 2 );

C_ASSERT( sizeof(PSNGameBootInviteResult_t) >= 9 );
C_ASSERT( offsetof(PSNGameBootInviteResult_t, m_bGameBootInviteExists) == 0 );
C_ASSERT( sizeof(PSNGameBootInviteResult_t().m_bGameBootInviteExists) >= 1 );
C_ASSERT( offsetof(PSNGameBootInviteResult_t, m_steamIDLobby) == 1 );
C_ASSERT( sizeof(PSNGameBootInviteResult_t().m_steamIDLobby) >= 8 );

C_ASSERT( sizeof(PersonaStateChange_t) >= 16 );
C_ASSERT( offsetof(PersonaStateChange_t, m_ulSteamID) == 0 );
C_ASSERT( sizeof(PersonaStateChange_t().m_ulSteamID) >= 8 );
C_ASSERT( offsetof(PersonaStateChange_t, m_nChangeFlags) == 8 );
C_ASSERT( sizeof(PersonaStateChange_t().m_nChangeFlags) >= 4 );

C_ASSERT( sizeof(PlaybackStatusHasChanged_t) >= 1 );

C_ASSERT( sizeof(RegisterActivationCodeResponse_t) >= 8 );
C_ASSERT( offsetof(RegisterActivationCodeResponse_t, m_eResult) == 0 );
C_ASSERT( sizeof(RegisterActivationCodeResponse_t().m_eResult) >= 4 );
C_ASSERT( offsetof(RegisterActivationCodeResponse_t, m_unPackageRegistered) == 4 );
C_ASSERT( sizeof(RegisterActivationCodeResponse_t().m_unPackageRegistered) >= 4 );

C_ASSERT( sizeof(RemoteStorageAppSyncStatusCheck_t) >= 8 );
C_ASSERT( offsetof(RemoteStorageAppSyncStatusCheck_t, m_nAppID) == 0 );
C_ASSERT( sizeof(RemoteStorageAppSyncStatusCheck_t().m_nAppID) >= 4 );
C_ASSERT( offsetof(RemoteStorageAppSyncStatusCheck_t, m_eResult) == 4 );
C_ASSERT( sizeof(RemoteStorageAppSyncStatusCheck_t().m_eResult) >= 4 );

C_ASSERT( sizeof(RemoteStorageAppSyncedClient_t) >= 12 );
C_ASSERT( offsetof(RemoteStorageAppSyncedClient_t, m_nAppID) == 0 );
C_ASSERT( sizeof(RemoteStorageAppSyncedClient_t().m_nAppID) >= 4 );
C_ASSERT( offsetof(RemoteStorageAppSyncedClient_t, m_eResult) == 4 );
C_ASSERT( sizeof(RemoteStorageAppSyncedClient_t().m_eResult) >= 4 );
C_ASSERT( offsetof(RemoteStorageAppSyncedClient_t, m_unNumDownloads) == 8 );
C_ASSERT( sizeof(RemoteStorageAppSyncedClient_t().m_unNumDownloads) >= 4 );

C_ASSERT( sizeof(RemoteStorageAppSyncedServer_t) >= 12 );
C_ASSERT( offsetof(RemoteStorageAppSyncedServer_t, m_nAppID) == 0 );
C_ASSERT( sizeof(RemoteStorageAppSyncedServer_t().m_nAppID) >= 4 );
C_ASSERT( offsetof(RemoteStorageAppSyncedServer_t, m_eResult) == 4 );
C_ASSERT( sizeof(RemoteStorageAppSyncedServer_t().m_eResult) >= 4 );
C_ASSERT( offsetof(RemoteStorageAppSyncedServer_t, m_unNumUploads) == 8 );
C_ASSERT( sizeof(RemoteStorageAppSyncedServer_t().m_unNumUploads) >= 4 );

C_ASSERT( sizeof(RemoteStorageConflictResolution_t) >= 8 );
C_ASSERT( offsetof(RemoteStorageConflictResolution_t, m_nAppID) == 0 );
C_ASSERT( sizeof(RemoteStorageConflictResolution_t().m_nAppID) >= 4 );
C_ASSERT( offsetof(RemoteStorageConflictResolution_t, m_eResult) == 4 );
C_ASSERT( sizeof(RemoteStorageConflictResolution_t().m_eResult) >= 4 );

C_ASSERT( sizeof(RemoteStorageEnumeratePublishedFilesByUserActionResult_t) >= 616 );
C_ASSERT( offsetof(RemoteStorageEnumeratePublishedFilesByUserActionResult_t, m_eResult) == 0 );
C_ASSERT( sizeof(RemoteStorageEnumeratePublishedFilesByUserActionResult_t().m_eResult) >= 4 );
C_ASSERT( offsetof(RemoteStorageEnumeratePublishedFilesByUserActionResult_t, m_eAction) == 4 );
C_ASSERT( sizeof(RemoteStorageEnumeratePublishedFilesByUserActionResult_t().m_eAction) >= 4 );
C_ASSERT( offsetof(RemoteStorageEnumeratePublishedFilesByUserActionResult_t, m_nResultsReturned) == 8 );
C_ASSERT( sizeof(RemoteStorageEnumeratePublishedFilesByUserActionResult_t().m_nResultsReturned) >= 4 );
C_ASSERT( offsetof(RemoteStorageEnumeratePublishedFilesByUserActionResult_t, m_nTotalResultCount) == 12 );
C_ASSERT( sizeof(RemoteStorageEnumeratePublishedFilesByUserActionResult_t().m_nTotalResultCount) >= 4 );
C_ASSERT( offsetof(RemoteStorageEnumeratePublishedFilesByUserActionResult_t, m_rgPublishedFileId) == 16 );
C_ASSERT( sizeof(RemoteStorageEnumeratePublishedFilesByUserActionResult_t().m_rgPublishedFileId) >= 400 );
C_ASSERT( offsetof(RemoteStorageEnumeratePublishedFilesByUserActionResult_t, m_rgRTimeUpdated) == 416 );
C_ASSERT( sizeof(RemoteStorageEnumeratePublishedFilesByUserActionResult_t().m_rgRTimeUpdated) >= 200 );

C_ASSERT( sizeof(RemoteStorageFileReadAsyncComplete_t) >= 24 );
C_ASSERT( offsetof(RemoteStorageFileReadAsyncComplete_t, m_hFileReadAsync) == 0 );
C_ASSERT( sizeof(RemoteStorageFileReadAsyncComplete_t().m_hFileReadAsync) >= 8 );
C_ASSERT( offsetof(RemoteStorageFileReadAsyncComplete_t, m_eResult) == 8 );
C_ASSERT( sizeof(RemoteStorageFileReadAsyncComplete_t().m_eResult) >= 4 );
C_ASSERT( offsetof(RemoteStorageFileReadAsyncComplete_t, m_nOffset) == 12 );
C_ASSERT( sizeof(RemoteStorageFileReadAsyncComplete_t().m_nOffset) >= 4 );
C_ASSERT( offsetof(RemoteStorageFileReadAsyncComplete_t, m_cubRead) == 16 );
C_ASSERT( sizeof(RemoteStorageFileReadAsyncComplete_t().m_cubRead) >= 4 );

C_ASSERT( sizeof(RemoteStorageFileWriteAsyncComplete_t) >= 4 );
C_ASSERT( offsetof(RemoteStorageFileWriteAsyncComplete_t, m_eResult) == 0 );
C_ASSERT( sizeof(RemoteStorageFileWriteAsyncComplete_t().m_eResult) >= 4 );

C_ASSERT( sizeof(RemoteStorageLocalFileChange_t) >= 1 );

C_ASSERT( sizeof(RemoteStoragePublishFileProgress_t) >= 16 );
C_ASSERT( offsetof(RemoteStoragePublishFileProgress_t, m_dPercentFile) == 0 );
C_ASSERT( sizeof(RemoteStoragePublishFileProgress_t().m_dPercentFile) >= 8 );
C_ASSERT( offsetof(RemoteStoragePublishFileProgress_t, m_bPreview) == 8 );
C_ASSERT( sizeof(RemoteStoragePublishFileProgress_t().m_bPreview) >= 1 );

C_ASSERT( sizeof(RemoteStoragePublishedFileDeleted_t) >= 16 );
C_ASSERT( offsetof(RemoteStoragePublishedFileDeleted_t, m_nPublishedFileId) == 0 );
C_ASSERT( sizeof(RemoteStoragePublishedFileDeleted_t().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(RemoteStoragePublishedFileDeleted_t, m_nAppID) == 8 );
C_ASSERT( sizeof(RemoteStoragePublishedFileDeleted_t().m_nAppID) >= 4 );

C_ASSERT( sizeof(RemoteStoragePublishedFileSubscribed_t) >= 16 );
C_ASSERT( offsetof(RemoteStoragePublishedFileSubscribed_t, m_nPublishedFileId) == 0 );
C_ASSERT( sizeof(RemoteStoragePublishedFileSubscribed_t().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(RemoteStoragePublishedFileSubscribed_t, m_nAppID) == 8 );
C_ASSERT( sizeof(RemoteStoragePublishedFileSubscribed_t().m_nAppID) >= 4 );

C_ASSERT( sizeof(RemoteStoragePublishedFileUnsubscribed_t) >= 16 );
C_ASSERT( offsetof(RemoteStoragePublishedFileUnsubscribed_t, m_nPublishedFileId) == 0 );
C_ASSERT( sizeof(RemoteStoragePublishedFileUnsubscribed_t().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(RemoteStoragePublishedFileUnsubscribed_t, m_nAppID) == 8 );
C_ASSERT( sizeof(RemoteStoragePublishedFileUnsubscribed_t().m_nAppID) >= 4 );

C_ASSERT( sizeof(RequestFriendsLobbiesResponse_t) >= 24 );
C_ASSERT( offsetof(RequestFriendsLobbiesResponse_t, m_ulSteamIDFriend) == 0 );
C_ASSERT( sizeof(RequestFriendsLobbiesResponse_t().m_ulSteamIDFriend) >= 8 );
C_ASSERT( offsetof(RequestFriendsLobbiesResponse_t, m_ulSteamIDLobby) == 8 );
C_ASSERT( sizeof(RequestFriendsLobbiesResponse_t().m_ulSteamIDLobby) >= 8 );
C_ASSERT( offsetof(RequestFriendsLobbiesResponse_t, m_cResultIndex) == 16 );
C_ASSERT( sizeof(RequestFriendsLobbiesResponse_t().m_cResultIndex) >= 4 );
C_ASSERT( offsetof(RequestFriendsLobbiesResponse_t, m_cResultsTotal) == 20 );
C_ASSERT( sizeof(RequestFriendsLobbiesResponse_t().m_cResultsTotal) >= 4 );

C_ASSERT( sizeof(ReservationNotificationCallback_t) >= 16 );
C_ASSERT( offsetof(ReservationNotificationCallback_t, m_ulBeaconID) == 0 );
C_ASSERT( sizeof(ReservationNotificationCallback_t().m_ulBeaconID) >= 8 );
C_ASSERT( offsetof(ReservationNotificationCallback_t, m_steamIDJoiner) == 8 );
C_ASSERT( sizeof(ReservationNotificationCallback_t().m_steamIDJoiner) >= 8 );

C_ASSERT( sizeof(ScreenshotReady_t) >= 8 );
C_ASSERT( offsetof(ScreenshotReady_t, m_hLocal) == 0 );
C_ASSERT( sizeof(ScreenshotReady_t().m_hLocal) >= 4 );
C_ASSERT( offsetof(ScreenshotReady_t, m_eResult) == 4 );
C_ASSERT( sizeof(ScreenshotReady_t().m_eResult) >= 4 );

C_ASSERT( sizeof(ScreenshotRequested_t) >= 1 );

C_ASSERT( sizeof(SearchForGameProgressCallback_t) >= 40 );
C_ASSERT( offsetof(SearchForGameProgressCallback_t, m_ullSearchID) == 0 );
C_ASSERT( sizeof(SearchForGameProgressCallback_t().m_ullSearchID) >= 8 );
C_ASSERT( offsetof(SearchForGameProgressCallback_t, m_eResult) == 8 );
C_ASSERT( sizeof(SearchForGameProgressCallback_t().m_eResult) >= 4 );
C_ASSERT( offsetof(SearchForGameProgressCallback_t, m_lobbyID) == 12 );
C_ASSERT( sizeof(SearchForGameProgressCallback_t().m_lobbyID) >= 8 );
C_ASSERT( offsetof(SearchForGameProgressCallback_t, m_steamIDEndedSearch) == 20 );
C_ASSERT( sizeof(SearchForGameProgressCallback_t().m_steamIDEndedSearch) >= 8 );
C_ASSERT( offsetof(SearchForGameProgressCallback_t, m_nSecondsRemainingEstimate) == 28 );
C_ASSERT( sizeof(SearchForGameProgressCallback_t().m_nSecondsRemainingEstimate) >= 4 );
C_ASSERT( offsetof(SearchForGameProgressCallback_t, m_cPlayersSearching) == 32 );
C_ASSERT( sizeof(SearchForGameProgressCallback_t().m_cPlayersSearching) >= 4 );

C_ASSERT( sizeof(SearchForGameResultCallback_t) >= 32 );
C_ASSERT( offsetof(SearchForGameResultCallback_t, m_ullSearchID) == 0 );
C_ASSERT( sizeof(SearchForGameResultCallback_t().m_ullSearchID) >= 8 );
C_ASSERT( offsetof(SearchForGameResultCallback_t, m_eResult) == 8 );
C_ASSERT( sizeof(SearchForGameResultCallback_t().m_eResult) >= 4 );
C_ASSERT( offsetof(SearchForGameResultCallback_t, m_nCountPlayersInGame) == 12 );
C_ASSERT( sizeof(SearchForGameResultCallback_t().m_nCountPlayersInGame) >= 4 );
C_ASSERT( offsetof(SearchForGameResultCallback_t, m_nCountAcceptedGame) == 16 );
C_ASSERT( sizeof(SearchForGameResultCallback_t().m_nCountAcceptedGame) >= 4 );
C_ASSERT( offsetof(SearchForGameResultCallback_t, m_steamIDHost) == 20 );
C_ASSERT( sizeof(SearchForGameResultCallback_t().m_steamIDHost) >= 8 );
C_ASSERT( offsetof(SearchForGameResultCallback_t, m_bFinalCallback) == 28 );
C_ASSERT( sizeof(SearchForGameResultCallback_t().m_bFinalCallback) >= 1 );

C_ASSERT( sizeof(SetPersonaNameResponse_t) >= 8 );
C_ASSERT( offsetof(SetPersonaNameResponse_t, m_bSuccess) == 0 );
C_ASSERT( sizeof(SetPersonaNameResponse_t().m_bSuccess) >= 1 );
C_ASSERT( offsetof(SetPersonaNameResponse_t, m_bLocalSuccess) == 1 );
C_ASSERT( sizeof(SetPersonaNameResponse_t().m_bLocalSuccess) >= 1 );
C_ASSERT( offsetof(SetPersonaNameResponse_t, m_result) == 4 );
C_ASSERT( sizeof(SetPersonaNameResponse_t().m_result) >= 4 );

C_ASSERT( sizeof(SetUserItemVoteResult_t) >= 16 );
C_ASSERT( offsetof(SetUserItemVoteResult_t, m_nPublishedFileId) == 0 );
C_ASSERT( sizeof(SetUserItemVoteResult_t().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(SetUserItemVoteResult_t, m_eResult) == 8 );
C_ASSERT( sizeof(SetUserItemVoteResult_t().m_eResult) >= 4 );
C_ASSERT( offsetof(SetUserItemVoteResult_t, m_bVoteUp) == 12 );
C_ASSERT( sizeof(SetUserItemVoteResult_t().m_bVoteUp) >= 1 );

C_ASSERT( sizeof(SocketStatusCallback_t) >= 20 );
C_ASSERT( offsetof(SocketStatusCallback_t, m_hSocket) == 0 );
C_ASSERT( sizeof(SocketStatusCallback_t().m_hSocket) >= 4 );
C_ASSERT( offsetof(SocketStatusCallback_t, m_hListenSocket) == 4 );
C_ASSERT( sizeof(SocketStatusCallback_t().m_hListenSocket) >= 4 );
C_ASSERT( offsetof(SocketStatusCallback_t, m_steamIDRemote) == 8 );
C_ASSERT( sizeof(SocketStatusCallback_t().m_steamIDRemote) >= 8 );
C_ASSERT( offsetof(SocketStatusCallback_t, m_eSNetSocketState) == 16 );
C_ASSERT( sizeof(SocketStatusCallback_t().m_eSNetSocketState) >= 4 );

C_ASSERT( sizeof(StartPlaytimeTrackingResult_t) >= 4 );
C_ASSERT( offsetof(StartPlaytimeTrackingResult_t, m_eResult) == 0 );
C_ASSERT( sizeof(StartPlaytimeTrackingResult_t().m_eResult) >= 4 );

C_ASSERT( sizeof(SteamAPICallCompleted_t_137) >= 16 );
C_ASSERT( offsetof(SteamAPICallCompleted_t_137, m_hAsyncCall) == 0 );
C_ASSERT( sizeof(SteamAPICallCompleted_t_137().m_hAsyncCall) >= 8 );
C_ASSERT( offsetof(SteamAPICallCompleted_t_137, m_iCallback) == 8 );
C_ASSERT( sizeof(SteamAPICallCompleted_t_137().m_iCallback) >= 4 );
C_ASSERT( offsetof(SteamAPICallCompleted_t_137, m_cubParam) == 12 );
C_ASSERT( sizeof(SteamAPICallCompleted_t_137().m_cubParam) >= 4 );

C_ASSERT( sizeof(SteamAPICallCompleted_t_102x) >= 8 );
C_ASSERT( offsetof(SteamAPICallCompleted_t_102x, m_hAsyncCall) == 0 );
C_ASSERT( sizeof(SteamAPICallCompleted_t_102x().m_hAsyncCall) >= 8 );

C_ASSERT( sizeof(SteamAppInstalled_t_152) >= 8 );
C_ASSERT( offsetof(SteamAppInstalled_t_152, m_nAppID) == 0 );
C_ASSERT( sizeof(SteamAppInstalled_t_152().m_nAppID) >= 4 );
C_ASSERT( offsetof(SteamAppInstalled_t_152, m_iInstallFolderIndex) == 4 );
C_ASSERT( sizeof(SteamAppInstalled_t_152().m_iInstallFolderIndex) >= 4 );

C_ASSERT( sizeof(SteamAppInstalled_t_128x) >= 4 );
C_ASSERT( offsetof(SteamAppInstalled_t_128x, m_nAppID) == 0 );
C_ASSERT( sizeof(SteamAppInstalled_t_128x().m_nAppID) >= 4 );

C_ASSERT( sizeof(SteamAppUninstalled_t_152) >= 8 );
C_ASSERT( offsetof(SteamAppUninstalled_t_152, m_nAppID) == 0 );
C_ASSERT( sizeof(SteamAppUninstalled_t_152().m_nAppID) >= 4 );
C_ASSERT( offsetof(SteamAppUninstalled_t_152, m_iInstallFolderIndex) == 4 );
C_ASSERT( sizeof(SteamAppUninstalled_t_152().m_iInstallFolderIndex) >= 4 );

C_ASSERT( sizeof(SteamAppUninstalled_t_128x) >= 4 );
C_ASSERT( offsetof(SteamAppUninstalled_t_128x, m_nAppID) == 0 );
C_ASSERT( sizeof(SteamAppUninstalled_t_128x().m_nAppID) >= 4 );

C_ASSERT( sizeof(SteamCallback_t) >= 1 );

C_ASSERT( sizeof(SteamControllerState001_t) >= 20 );
C_ASSERT( offsetof(SteamControllerState001_t, unPacketNum) == 0 );
C_ASSERT( sizeof(SteamControllerState001_t().unPacketNum) >= 4 );
C_ASSERT( offsetof(SteamControllerState001_t, ulButtons) == 4 );
C_ASSERT( sizeof(SteamControllerState001_t().ulButtons) >= 8 );
C_ASSERT( offsetof(SteamControllerState001_t, sLeftPadX) == 12 );
C_ASSERT( sizeof(SteamControllerState001_t().sLeftPadX) >= 2 );
C_ASSERT( offsetof(SteamControllerState001_t, sLeftPadY) == 14 );
C_ASSERT( sizeof(SteamControllerState001_t().sLeftPadY) >= 2 );
C_ASSERT( offsetof(SteamControllerState001_t, sRightPadX) == 16 );
C_ASSERT( sizeof(SteamControllerState001_t().sRightPadX) >= 2 );
C_ASSERT( offsetof(SteamControllerState001_t, sRightPadY) == 18 );
C_ASSERT( sizeof(SteamControllerState001_t().sRightPadY) >= 2 );

C_ASSERT( sizeof(SteamControllerState_t) >= 20 );
C_ASSERT( offsetof(SteamControllerState_t, unPacketNum) == 0 );
C_ASSERT( sizeof(SteamControllerState_t().unPacketNum) >= 4 );
C_ASSERT( offsetof(SteamControllerState_t, ulButtons) == 4 );
C_ASSERT( sizeof(SteamControllerState_t().ulButtons) >= 8 );
C_ASSERT( offsetof(SteamControllerState_t, sLeftPadX) == 12 );
C_ASSERT( sizeof(SteamControllerState_t().sLeftPadX) >= 2 );
C_ASSERT( offsetof(SteamControllerState_t, sLeftPadY) == 14 );
C_ASSERT( sizeof(SteamControllerState_t().sLeftPadY) >= 2 );
C_ASSERT( offsetof(SteamControllerState_t, sRightPadX) == 16 );
C_ASSERT( sizeof(SteamControllerState_t().sRightPadX) >= 2 );
C_ASSERT( offsetof(SteamControllerState_t, sRightPadY) == 18 );
C_ASSERT( sizeof(SteamControllerState_t().sRightPadY) >= 2 );

C_ASSERT( sizeof(SteamInputActionEvent_t) >= 33 );
C_ASSERT( offsetof(SteamInputActionEvent_t, controllerHandle) == 0 );
C_ASSERT( sizeof(SteamInputActionEvent_t().controllerHandle) >= 8 );
C_ASSERT( offsetof(SteamInputActionEvent_t, eEventType) == 8 );
C_ASSERT( sizeof(SteamInputActionEvent_t().eEventType) >= 4 );
C_ASSERT( offsetof(SteamInputActionEvent_t, x) == 12 );
C_ASSERT( sizeof(SteamInputActionEvent_t().x) >= 21 );

C_ASSERT( sizeof(SteamInputDeviceConnected_t) >= 8 );
C_ASSERT( offsetof(SteamInputDeviceConnected_t, m_ulConnectedDeviceHandle) == 0 );
C_ASSERT( sizeof(SteamInputDeviceConnected_t().m_ulConnectedDeviceHandle) >= 8 );

C_ASSERT( sizeof(SteamInputDeviceDisconnected_t) >= 8 );
C_ASSERT( offsetof(SteamInputDeviceDisconnected_t, m_ulDisconnectedDeviceHandle) == 0 );
C_ASSERT( sizeof(SteamInputDeviceDisconnected_t().m_ulDisconnectedDeviceHandle) >= 8 );

C_ASSERT( sizeof(SteamInventoryDefinitionUpdate_t) >= 1 );

C_ASSERT( sizeof(SteamInventoryEligiblePromoItemDefIDs_t) >= 20 );
C_ASSERT( offsetof(SteamInventoryEligiblePromoItemDefIDs_t, m_result) == 0 );
C_ASSERT( sizeof(SteamInventoryEligiblePromoItemDefIDs_t().m_result) >= 4 );
C_ASSERT( offsetof(SteamInventoryEligiblePromoItemDefIDs_t, m_steamID) == 4 );
C_ASSERT( sizeof(SteamInventoryEligiblePromoItemDefIDs_t().m_steamID) >= 8 );
C_ASSERT( offsetof(SteamInventoryEligiblePromoItemDefIDs_t, m_numEligiblePromoItemDefs) == 12 );
C_ASSERT( sizeof(SteamInventoryEligiblePromoItemDefIDs_t().m_numEligiblePromoItemDefs) >= 4 );
C_ASSERT( offsetof(SteamInventoryEligiblePromoItemDefIDs_t, m_bCachedData) == 16 );
C_ASSERT( sizeof(SteamInventoryEligiblePromoItemDefIDs_t().m_bCachedData) >= 1 );

C_ASSERT( sizeof(SteamInventoryFullUpdate_t) >= 4 );
C_ASSERT( offsetof(SteamInventoryFullUpdate_t, m_handle) == 0 );
C_ASSERT( sizeof(SteamInventoryFullUpdate_t().m_handle) >= 4 );

C_ASSERT( sizeof(SteamInventoryRequestPricesResult_t) >= 8 );
C_ASSERT( offsetof(SteamInventoryRequestPricesResult_t, m_result) == 0 );
C_ASSERT( sizeof(SteamInventoryRequestPricesResult_t().m_result) >= 4 );
C_ASSERT( offsetof(SteamInventoryRequestPricesResult_t, m_rgchCurrency) == 4 );
C_ASSERT( sizeof(SteamInventoryRequestPricesResult_t().m_rgchCurrency) >= 4 );

C_ASSERT( sizeof(SteamInventoryResultReady_t) >= 8 );
C_ASSERT( offsetof(SteamInventoryResultReady_t, m_handle) == 0 );
C_ASSERT( sizeof(SteamInventoryResultReady_t().m_handle) >= 4 );
C_ASSERT( offsetof(SteamInventoryResultReady_t, m_result) == 4 );
C_ASSERT( sizeof(SteamInventoryResultReady_t().m_result) >= 4 );

C_ASSERT( sizeof(SteamItemDetails_t) >= 16 );
C_ASSERT( offsetof(SteamItemDetails_t, m_itemId) == 0 );
C_ASSERT( sizeof(SteamItemDetails_t().m_itemId) >= 8 );
C_ASSERT( offsetof(SteamItemDetails_t, m_iDefinition) == 8 );
C_ASSERT( sizeof(SteamItemDetails_t().m_iDefinition) >= 4 );
C_ASSERT( offsetof(SteamItemDetails_t, m_unQuantity) == 12 );
C_ASSERT( sizeof(SteamItemDetails_t().m_unQuantity) >= 2 );
C_ASSERT( offsetof(SteamItemDetails_t, m_unFlags) == 14 );
C_ASSERT( sizeof(SteamItemDetails_t().m_unFlags) >= 2 );

C_ASSERT( sizeof(SteamNetAuthenticationStatus_t) >= 260 );
C_ASSERT( offsetof(SteamNetAuthenticationStatus_t, m_eAvail) == 0 );
C_ASSERT( sizeof(SteamNetAuthenticationStatus_t().m_eAvail) >= 4 );
C_ASSERT( offsetof(SteamNetAuthenticationStatus_t, m_debugMsg) == 4 );
C_ASSERT( sizeof(SteamNetAuthenticationStatus_t().m_debugMsg) >= 256 );

C_ASSERT( sizeof(SteamNetConnectionRealTimeLaneStatus_t) >= 64 );
C_ASSERT( offsetof(SteamNetConnectionRealTimeLaneStatus_t, m_cbPendingUnreliable) == 0 );
C_ASSERT( sizeof(SteamNetConnectionRealTimeLaneStatus_t().m_cbPendingUnreliable) >= 4 );
C_ASSERT( offsetof(SteamNetConnectionRealTimeLaneStatus_t, m_cbPendingReliable) == 4 );
C_ASSERT( sizeof(SteamNetConnectionRealTimeLaneStatus_t().m_cbPendingReliable) >= 4 );
C_ASSERT( offsetof(SteamNetConnectionRealTimeLaneStatus_t, m_cbSentUnackedReliable) == 8 );
C_ASSERT( sizeof(SteamNetConnectionRealTimeLaneStatus_t().m_cbSentUnackedReliable) >= 4 );
C_ASSERT( offsetof(SteamNetConnectionRealTimeLaneStatus_t, _reservePad1) == 12 );
C_ASSERT( sizeof(SteamNetConnectionRealTimeLaneStatus_t()._reservePad1) >= 4 );
C_ASSERT( offsetof(SteamNetConnectionRealTimeLaneStatus_t, m_usecQueueTime) == 16 );
C_ASSERT( sizeof(SteamNetConnectionRealTimeLaneStatus_t().m_usecQueueTime) >= 8 );
C_ASSERT( offsetof(SteamNetConnectionRealTimeLaneStatus_t, reserved) == 24 );
C_ASSERT( sizeof(SteamNetConnectionRealTimeLaneStatus_t().reserved) >= 40 );

C_ASSERT( sizeof(SteamNetConnectionRealTimeStatus_t) >= 120 );
C_ASSERT( offsetof(SteamNetConnectionRealTimeStatus_t, m_eState) == 0 );
C_ASSERT( sizeof(SteamNetConnectionRealTimeStatus_t().m_eState) >= 4 );
C_ASSERT( offsetof(SteamNetConnectionRealTimeStatus_t, m_nPing) == 4 );
C_ASSERT( sizeof(SteamNetConnectionRealTimeStatus_t().m_nPing) >= 4 );
C_ASSERT( offsetof(SteamNetConnectionRealTimeStatus_t, m_flConnectionQualityLocal) == 8 );
C_ASSERT( sizeof(SteamNetConnectionRealTimeStatus_t().m_flConnectionQualityLocal) >= 4 );
C_ASSERT( offsetof(SteamNetConnectionRealTimeStatus_t, m_flConnectionQualityRemote) == 12 );
C_ASSERT( sizeof(SteamNetConnectionRealTimeStatus_t().m_flConnectionQualityRemote) >= 4 );
C_ASSERT( offsetof(SteamNetConnectionRealTimeStatus_t, m_flOutPacketsPerSec) == 16 );
C_ASSERT( sizeof(SteamNetConnectionRealTimeStatus_t().m_flOutPacketsPerSec) >= 4 );
C_ASSERT( offsetof(SteamNetConnectionRealTimeStatus_t, m_flOutBytesPerSec) == 20 );
C_ASSERT( sizeof(SteamNetConnectionRealTimeStatus_t().m_flOutBytesPerSec) >= 4 );
C_ASSERT( offsetof(SteamNetConnectionRealTimeStatus_t, m_flInPacketsPerSec) == 24 );
C_ASSERT( sizeof(SteamNetConnectionRealTimeStatus_t().m_flInPacketsPerSec) >= 4 );
C_ASSERT( offsetof(SteamNetConnectionRealTimeStatus_t, m_flInBytesPerSec) == 28 );
C_ASSERT( sizeof(SteamNetConnectionRealTimeStatus_t().m_flInBytesPerSec) >= 4 );
C_ASSERT( offsetof(SteamNetConnectionRealTimeStatus_t, m_nSendRateBytesPerSecond) == 32 );
C_ASSERT( sizeof(SteamNetConnectionRealTimeStatus_t().m_nSendRateBytesPerSecond) >= 4 );
C_ASSERT( offsetof(SteamNetConnectionRealTimeStatus_t, m_cbPendingUnreliable) == 36 );
C_ASSERT( sizeof(SteamNetConnectionRealTimeStatus_t().m_cbPendingUnreliable) >= 4 );
C_ASSERT( offsetof(SteamNetConnectionRealTimeStatus_t, m_cbPendingReliable) == 40 );
C_ASSERT( sizeof(SteamNetConnectionRealTimeStatus_t().m_cbPendingReliable) >= 4 );
C_ASSERT( offsetof(SteamNetConnectionRealTimeStatus_t, m_cbSentUnackedReliable) == 44 );
C_ASSERT( sizeof(SteamNetConnectionRealTimeStatus_t().m_cbSentUnackedReliable) >= 4 );
C_ASSERT( offsetof(SteamNetConnectionRealTimeStatus_t, m_usecQueueTime) == 48 );
C_ASSERT( sizeof(SteamNetConnectionRealTimeStatus_t().m_usecQueueTime) >= 8 );
C_ASSERT( offsetof(SteamNetConnectionRealTimeStatus_t, reserved) == 56 );
C_ASSERT( sizeof(SteamNetConnectionRealTimeStatus_t().reserved) >= 64 );

C_ASSERT( sizeof(SteamNetworkPingLocation_t) >= 512 );
C_ASSERT( offsetof(SteamNetworkPingLocation_t, m_data) == 0 );
C_ASSERT( sizeof(SteamNetworkPingLocation_t().m_data) >= 512 );

C_ASSERT( sizeof(SteamNetworkingConfigValue_t) >= 16 );
C_ASSERT( offsetof(SteamNetworkingConfigValue_t, m_eValue) == 0 );
C_ASSERT( sizeof(SteamNetworkingConfigValue_t().m_eValue) >= 4 );
C_ASSERT( offsetof(SteamNetworkingConfigValue_t, m_eDataType) == 4 );
C_ASSERT( sizeof(SteamNetworkingConfigValue_t().m_eDataType) >= 4 );
C_ASSERT( offsetof(SteamNetworkingConfigValue_t, m_val) == 8 );
C_ASSERT( sizeof(SteamNetworkingConfigValue_t().m_val) >= 8 );

C_ASSERT( sizeof(SteamNetworkingFakeIPResult_t) >= 160 );
C_ASSERT( offsetof(SteamNetworkingFakeIPResult_t, m_eResult) == 0 );
C_ASSERT( sizeof(SteamNetworkingFakeIPResult_t().m_eResult) >= 4 );
C_ASSERT( offsetof(SteamNetworkingFakeIPResult_t, m_identity) == 4 );
C_ASSERT( sizeof(SteamNetworkingFakeIPResult_t().m_identity) >= 136 );
C_ASSERT( offsetof(SteamNetworkingFakeIPResult_t, m_unIP) == 140 );
C_ASSERT( sizeof(SteamNetworkingFakeIPResult_t().m_unIP) >= 4 );
C_ASSERT( offsetof(SteamNetworkingFakeIPResult_t, m_unPorts) == 144 );
C_ASSERT( sizeof(SteamNetworkingFakeIPResult_t().m_unPorts) >= 16 );

C_ASSERT( sizeof(SteamNetworkingMessagesSessionFailed_t_153a) >= 696 );
C_ASSERT( offsetof(SteamNetworkingMessagesSessionFailed_t_153a, m_info) == 0 );
C_ASSERT( sizeof(SteamNetworkingMessagesSessionFailed_t_153a().m_info) >= 696 );

C_ASSERT( sizeof(SteamNetworkingMessagesSessionFailed_t_150) >= 696 );
C_ASSERT( offsetof(SteamNetworkingMessagesSessionFailed_t_150, m_info) == 0 );
C_ASSERT( sizeof(SteamNetworkingMessagesSessionFailed_t_150().m_info) >= 696 );

C_ASSERT( sizeof(SteamNetworkingMessagesSessionFailed_t_151) >= 568 );
C_ASSERT( offsetof(SteamNetworkingMessagesSessionFailed_t_151, m_info) == 0 );
C_ASSERT( sizeof(SteamNetworkingMessagesSessionFailed_t_151().m_info) >= 568 );

C_ASSERT( sizeof(SteamNetworkingMessagesSessionRequest_t_150) >= 136 );
C_ASSERT( offsetof(SteamNetworkingMessagesSessionRequest_t_150, m_identityRemote) == 0 );
C_ASSERT( sizeof(SteamNetworkingMessagesSessionRequest_t_150().m_identityRemote) >= 136 );

C_ASSERT( sizeof(SteamNetworkingMessagesSessionRequest_t_151) >= 8 );
C_ASSERT( offsetof(SteamNetworkingMessagesSessionRequest_t_151, m_identityRemote) == 0 );
C_ASSERT( sizeof(SteamNetworkingMessagesSessionRequest_t_151().m_identityRemote) >= 8 );

C_ASSERT( sizeof(SteamNetworkingPOPIDRender) >= 8 );
C_ASSERT( offsetof(SteamNetworkingPOPIDRender, buf) == 0 );
C_ASSERT( sizeof(SteamNetworkingPOPIDRender().buf) >= 8 );

C_ASSERT( sizeof(SteamNetworkingQuickConnectionStatus) >= 120 );
C_ASSERT( offsetof(SteamNetworkingQuickConnectionStatus, m_eState) == 0 );
C_ASSERT( sizeof(SteamNetworkingQuickConnectionStatus().m_eState) >= 4 );
C_ASSERT( offsetof(SteamNetworkingQuickConnectionStatus, m_nPing) == 4 );
C_ASSERT( sizeof(SteamNetworkingQuickConnectionStatus().m_nPing) >= 4 );
C_ASSERT( offsetof(SteamNetworkingQuickConnectionStatus, m_flConnectionQualityLocal) == 8 );
C_ASSERT( sizeof(SteamNetworkingQuickConnectionStatus().m_flConnectionQualityLocal) >= 4 );
C_ASSERT( offsetof(SteamNetworkingQuickConnectionStatus, m_flConnectionQualityRemote) == 12 );
C_ASSERT( sizeof(SteamNetworkingQuickConnectionStatus().m_flConnectionQualityRemote) >= 4 );
C_ASSERT( offsetof(SteamNetworkingQuickConnectionStatus, m_flOutPacketsPerSec) == 16 );
C_ASSERT( sizeof(SteamNetworkingQuickConnectionStatus().m_flOutPacketsPerSec) >= 4 );
C_ASSERT( offsetof(SteamNetworkingQuickConnectionStatus, m_flOutBytesPerSec) == 20 );
C_ASSERT( sizeof(SteamNetworkingQuickConnectionStatus().m_flOutBytesPerSec) >= 4 );
C_ASSERT( offsetof(SteamNetworkingQuickConnectionStatus, m_flInPacketsPerSec) == 24 );
C_ASSERT( sizeof(SteamNetworkingQuickConnectionStatus().m_flInPacketsPerSec) >= 4 );
C_ASSERT( offsetof(SteamNetworkingQuickConnectionStatus, m_flInBytesPerSec) == 28 );
C_ASSERT( sizeof(SteamNetworkingQuickConnectionStatus().m_flInBytesPerSec) >= 4 );
C_ASSERT( offsetof(SteamNetworkingQuickConnectionStatus, m_nSendRateBytesPerSecond) == 32 );
C_ASSERT( sizeof(SteamNetworkingQuickConnectionStatus().m_nSendRateBytesPerSecond) >= 4 );
C_ASSERT( offsetof(SteamNetworkingQuickConnectionStatus, m_cbPendingUnreliable) == 36 );
C_ASSERT( sizeof(SteamNetworkingQuickConnectionStatus().m_cbPendingUnreliable) >= 4 );
C_ASSERT( offsetof(SteamNetworkingQuickConnectionStatus, m_cbPendingReliable) == 40 );
C_ASSERT( sizeof(SteamNetworkingQuickConnectionStatus().m_cbPendingReliable) >= 4 );
C_ASSERT( offsetof(SteamNetworkingQuickConnectionStatus, m_cbSentUnackedReliable) == 44 );
C_ASSERT( sizeof(SteamNetworkingQuickConnectionStatus().m_cbSentUnackedReliable) >= 4 );
C_ASSERT( offsetof(SteamNetworkingQuickConnectionStatus, m_usecQueueTime) == 48 );
C_ASSERT( sizeof(SteamNetworkingQuickConnectionStatus().m_usecQueueTime) >= 8 );
C_ASSERT( offsetof(SteamNetworkingQuickConnectionStatus, reserved) == 56 );
C_ASSERT( sizeof(SteamNetworkingQuickConnectionStatus().reserved) >= 64 );

C_ASSERT( sizeof(SteamParentalSettingsChanged_t) >= 1 );

C_ASSERT( sizeof(SteamRelayNetworkStatus_t) >= 272 );
C_ASSERT( offsetof(SteamRelayNetworkStatus_t, m_eAvail) == 0 );
C_ASSERT( sizeof(SteamRelayNetworkStatus_t().m_eAvail) >= 4 );
C_ASSERT( offsetof(SteamRelayNetworkStatus_t, m_bPingMeasurementInProgress) == 4 );
C_ASSERT( sizeof(SteamRelayNetworkStatus_t().m_bPingMeasurementInProgress) >= 4 );
C_ASSERT( offsetof(SteamRelayNetworkStatus_t, m_eAvailNetworkConfig) == 8 );
C_ASSERT( sizeof(SteamRelayNetworkStatus_t().m_eAvailNetworkConfig) >= 4 );
C_ASSERT( offsetof(SteamRelayNetworkStatus_t, m_eAvailAnyRelay) == 12 );
C_ASSERT( sizeof(SteamRelayNetworkStatus_t().m_eAvailAnyRelay) >= 4 );
C_ASSERT( offsetof(SteamRelayNetworkStatus_t, m_debugMsg) == 16 );
C_ASSERT( sizeof(SteamRelayNetworkStatus_t().m_debugMsg) >= 256 );

C_ASSERT( sizeof(SteamRemotePlaySessionConnected_t) >= 4 );
C_ASSERT( offsetof(SteamRemotePlaySessionConnected_t, m_unSessionID) == 0 );
C_ASSERT( sizeof(SteamRemotePlaySessionConnected_t().m_unSessionID) >= 4 );

C_ASSERT( sizeof(SteamRemotePlaySessionDisconnected_t) >= 4 );
C_ASSERT( offsetof(SteamRemotePlaySessionDisconnected_t, m_unSessionID) == 0 );
C_ASSERT( sizeof(SteamRemotePlaySessionDisconnected_t().m_unSessionID) >= 4 );

C_ASSERT( sizeof(SteamRemotePlayTogetherGuestInvite_t) >= 1024 );
C_ASSERT( offsetof(SteamRemotePlayTogetherGuestInvite_t, m_szConnectURL) == 0 );
C_ASSERT( sizeof(SteamRemotePlayTogetherGuestInvite_t().m_szConnectURL) >= 1024 );

C_ASSERT( sizeof(SteamServerConnectFailure_t_135) >= 8 );
C_ASSERT( offsetof(SteamServerConnectFailure_t_135, m_eResult) == 0 );
C_ASSERT( sizeof(SteamServerConnectFailure_t_135().m_eResult) >= 4 );
C_ASSERT( offsetof(SteamServerConnectFailure_t_135, m_bStillRetrying) == 4 );
C_ASSERT( sizeof(SteamServerConnectFailure_t_135().m_bStillRetrying) >= 1 );

C_ASSERT( sizeof(SteamServerConnectFailure_t_099u) >= 4 );
C_ASSERT( offsetof(SteamServerConnectFailure_t_099u, m_eResult) == 0 );
C_ASSERT( sizeof(SteamServerConnectFailure_t_099u().m_eResult) >= 4 );

C_ASSERT( sizeof(SteamServersConnected_t) >= 1 );

C_ASSERT( sizeof(SteamServersDisconnected_t) >= 4 );
C_ASSERT( offsetof(SteamServersDisconnected_t, m_eResult) == 0 );
C_ASSERT( sizeof(SteamServersDisconnected_t().m_eResult) >= 4 );

C_ASSERT( sizeof(SteamShutdown_t) >= 1 );

C_ASSERT( sizeof(SteamUGCQueryCompleted_t_143) >= 280 );
C_ASSERT( offsetof(SteamUGCQueryCompleted_t_143, m_handle) == 0 );
C_ASSERT( sizeof(SteamUGCQueryCompleted_t_143().m_handle) >= 8 );
C_ASSERT( offsetof(SteamUGCQueryCompleted_t_143, m_eResult) == 8 );
C_ASSERT( sizeof(SteamUGCQueryCompleted_t_143().m_eResult) >= 4 );
C_ASSERT( offsetof(SteamUGCQueryCompleted_t_143, m_unNumResultsReturned) == 12 );
C_ASSERT( sizeof(SteamUGCQueryCompleted_t_143().m_unNumResultsReturned) >= 4 );
C_ASSERT( offsetof(SteamUGCQueryCompleted_t_143, m_unTotalMatchingResults) == 16 );
C_ASSERT( sizeof(SteamUGCQueryCompleted_t_143().m_unTotalMatchingResults) >= 4 );
C_ASSERT( offsetof(SteamUGCQueryCompleted_t_143, m_bCachedData) == 20 );
C_ASSERT( sizeof(SteamUGCQueryCompleted_t_143().m_bCachedData) >= 1 );
C_ASSERT( offsetof(SteamUGCQueryCompleted_t_143, m_rgchNextCursor) == 21 );
C_ASSERT( sizeof(SteamUGCQueryCompleted_t_143().m_rgchNextCursor) >= 256 );

C_ASSERT( sizeof(SteamUGCQueryCompleted_t_128x) >= 24 );
C_ASSERT( offsetof(SteamUGCQueryCompleted_t_128x, m_handle) == 0 );
C_ASSERT( sizeof(SteamUGCQueryCompleted_t_128x().m_handle) >= 8 );
C_ASSERT( offsetof(SteamUGCQueryCompleted_t_128x, m_eResult) == 8 );
C_ASSERT( sizeof(SteamUGCQueryCompleted_t_128x().m_eResult) >= 4 );
C_ASSERT( offsetof(SteamUGCQueryCompleted_t_128x, m_unNumResultsReturned) == 12 );
C_ASSERT( sizeof(SteamUGCQueryCompleted_t_128x().m_unNumResultsReturned) >= 4 );
C_ASSERT( offsetof(SteamUGCQueryCompleted_t_128x, m_unTotalMatchingResults) == 16 );
C_ASSERT( sizeof(SteamUGCQueryCompleted_t_128x().m_unTotalMatchingResults) >= 4 );
C_ASSERT( offsetof(SteamUGCQueryCompleted_t_128x, m_bCachedData) == 20 );
C_ASSERT( sizeof(SteamUGCQueryCompleted_t_128x().m_bCachedData) >= 1 );

C_ASSERT( sizeof(SteamUGCQueryCompleted_t_126) >= 24 );
C_ASSERT( offsetof(SteamUGCQueryCompleted_t_126, m_handle) == 0 );
C_ASSERT( sizeof(SteamUGCQueryCompleted_t_126().m_handle) >= 8 );
C_ASSERT( offsetof(SteamUGCQueryCompleted_t_126, m_eResult) == 8 );
C_ASSERT( sizeof(SteamUGCQueryCompleted_t_126().m_eResult) >= 4 );
C_ASSERT( offsetof(SteamUGCQueryCompleted_t_126, m_unNumResultsReturned) == 12 );
C_ASSERT( sizeof(SteamUGCQueryCompleted_t_126().m_unNumResultsReturned) >= 4 );
C_ASSERT( offsetof(SteamUGCQueryCompleted_t_126, m_unTotalMatchingResults) == 16 );
C_ASSERT( sizeof(SteamUGCQueryCompleted_t_126().m_unTotalMatchingResults) >= 4 );

C_ASSERT( sizeof(SteamUnifiedMessagesSendMethodResult_t) >= 24 );
C_ASSERT( offsetof(SteamUnifiedMessagesSendMethodResult_t, m_hHandle) == 0 );
C_ASSERT( sizeof(SteamUnifiedMessagesSendMethodResult_t().m_hHandle) >= 8 );
C_ASSERT( offsetof(SteamUnifiedMessagesSendMethodResult_t, m_unContext) == 8 );
C_ASSERT( sizeof(SteamUnifiedMessagesSendMethodResult_t().m_unContext) >= 8 );
C_ASSERT( offsetof(SteamUnifiedMessagesSendMethodResult_t, m_eResult) == 16 );
C_ASSERT( sizeof(SteamUnifiedMessagesSendMethodResult_t().m_eResult) >= 4 );
C_ASSERT( offsetof(SteamUnifiedMessagesSendMethodResult_t, m_unResponseSize) == 20 );
C_ASSERT( sizeof(SteamUnifiedMessagesSendMethodResult_t().m_unResponseSize) >= 4 );

C_ASSERT( sizeof(StopPlaytimeTrackingResult_t) >= 4 );
C_ASSERT( offsetof(StopPlaytimeTrackingResult_t, m_eResult) == 0 );
C_ASSERT( sizeof(StopPlaytimeTrackingResult_t().m_eResult) >= 4 );

C_ASSERT( sizeof(StoreAuthURLResponse_t) >= 512 );
C_ASSERT( offsetof(StoreAuthURLResponse_t, m_szURL) == 0 );
C_ASSERT( sizeof(StoreAuthURLResponse_t().m_szURL) >= 512 );

C_ASSERT( sizeof(SubmitItemUpdateResult_t_141) >= 16 );
C_ASSERT( offsetof(SubmitItemUpdateResult_t_141, m_eResult) == 0 );
C_ASSERT( sizeof(SubmitItemUpdateResult_t_141().m_eResult) >= 4 );
C_ASSERT( offsetof(SubmitItemUpdateResult_t_141, m_bUserNeedsToAcceptWorkshopLegalAgreement) == 4 );
C_ASSERT( sizeof(SubmitItemUpdateResult_t_141().m_bUserNeedsToAcceptWorkshopLegalAgreement) >= 1 );
C_ASSERT( offsetof(SubmitItemUpdateResult_t_141, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(SubmitItemUpdateResult_t_141().m_nPublishedFileId) >= 8 );

C_ASSERT( sizeof(SubmitItemUpdateResult_t_130) >= 8 );
C_ASSERT( offsetof(SubmitItemUpdateResult_t_130, m_eResult) == 0 );
C_ASSERT( sizeof(SubmitItemUpdateResult_t_130().m_eResult) >= 4 );
C_ASSERT( offsetof(SubmitItemUpdateResult_t_130, m_bUserNeedsToAcceptWorkshopLegalAgreement) == 4 );
C_ASSERT( sizeof(SubmitItemUpdateResult_t_130().m_bUserNeedsToAcceptWorkshopLegalAgreement) >= 1 );

C_ASSERT( sizeof(TimedTrialStatus_t) >= 16 );
C_ASSERT( offsetof(TimedTrialStatus_t, m_unAppID) == 0 );
C_ASSERT( sizeof(TimedTrialStatus_t().m_unAppID) >= 4 );
C_ASSERT( offsetof(TimedTrialStatus_t, m_bIsOffline) == 4 );
C_ASSERT( sizeof(TimedTrialStatus_t().m_bIsOffline) >= 1 );
C_ASSERT( offsetof(TimedTrialStatus_t, m_unSecondsAllowed) == 8 );
C_ASSERT( sizeof(TimedTrialStatus_t().m_unSecondsAllowed) >= 4 );
C_ASSERT( offsetof(TimedTrialStatus_t, m_unSecondsPlayed) == 12 );
C_ASSERT( sizeof(TimedTrialStatus_t().m_unSecondsPlayed) >= 4 );

C_ASSERT( sizeof(UnreadChatMessagesChanged_t) >= 1 );

C_ASSERT( sizeof(UserAchievementIconFetched_t) >= 144 );
C_ASSERT( offsetof(UserAchievementIconFetched_t, m_nGameID) == 0 );
C_ASSERT( sizeof(UserAchievementIconFetched_t().m_nGameID) >= 8 );
C_ASSERT( offsetof(UserAchievementIconFetched_t, m_rgchAchievementName) == 8 );
C_ASSERT( sizeof(UserAchievementIconFetched_t().m_rgchAchievementName) >= 128 );
C_ASSERT( offsetof(UserAchievementIconFetched_t, m_bAchieved) == 136 );
C_ASSERT( sizeof(UserAchievementIconFetched_t().m_bAchieved) >= 1 );
C_ASSERT( offsetof(UserAchievementIconFetched_t, m_nIconHandle) == 140 );
C_ASSERT( sizeof(UserAchievementIconFetched_t().m_nIconHandle) >= 4 );

C_ASSERT( sizeof(UserAchievementStored_t) >= 152 );
C_ASSERT( offsetof(UserAchievementStored_t, m_nGameID) == 0 );
C_ASSERT( sizeof(UserAchievementStored_t().m_nGameID) >= 8 );
C_ASSERT( offsetof(UserAchievementStored_t, m_bGroupAchievement) == 8 );
C_ASSERT( sizeof(UserAchievementStored_t().m_bGroupAchievement) >= 1 );
C_ASSERT( offsetof(UserAchievementStored_t, m_rgchAchievementName) == 9 );
C_ASSERT( sizeof(UserAchievementStored_t().m_rgchAchievementName) >= 128 );
C_ASSERT( offsetof(UserAchievementStored_t, m_nCurProgress) == 140 );
C_ASSERT( sizeof(UserAchievementStored_t().m_nCurProgress) >= 4 );
C_ASSERT( offsetof(UserAchievementStored_t, m_nMaxProgress) == 144 );
C_ASSERT( sizeof(UserAchievementStored_t().m_nMaxProgress) >= 4 );

C_ASSERT( sizeof(UserFavoriteItemsListChanged_t) >= 16 );
C_ASSERT( offsetof(UserFavoriteItemsListChanged_t, m_nPublishedFileId) == 0 );
C_ASSERT( sizeof(UserFavoriteItemsListChanged_t().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(UserFavoriteItemsListChanged_t, m_eResult) == 8 );
C_ASSERT( sizeof(UserFavoriteItemsListChanged_t().m_eResult) >= 4 );
C_ASSERT( offsetof(UserFavoriteItemsListChanged_t, m_bWasAddRequest) == 12 );
C_ASSERT( sizeof(UserFavoriteItemsListChanged_t().m_bWasAddRequest) >= 1 );

C_ASSERT( sizeof(UserStatsReceived_t_102x) >= 24 );
C_ASSERT( offsetof(UserStatsReceived_t_102x, m_nGameID) == 0 );
C_ASSERT( sizeof(UserStatsReceived_t_102x().m_nGameID) >= 8 );
C_ASSERT( offsetof(UserStatsReceived_t_102x, m_eResult) == 8 );
C_ASSERT( sizeof(UserStatsReceived_t_102x().m_eResult) >= 4 );
C_ASSERT( offsetof(UserStatsReceived_t_102x, m_steamIDUser) == 12 );
C_ASSERT( sizeof(UserStatsReceived_t_102x().m_steamIDUser) >= 8 );

C_ASSERT( sizeof(UserStatsReceived_t_099u) >= 16 );
C_ASSERT( offsetof(UserStatsReceived_t_099u, m_nGameID) == 0 );
C_ASSERT( sizeof(UserStatsReceived_t_099u().m_nGameID) >= 8 );
C_ASSERT( offsetof(UserStatsReceived_t_099u, m_eResult) == 8 );
C_ASSERT( sizeof(UserStatsReceived_t_099u().m_eResult) >= 4 );

C_ASSERT( sizeof(UserStatsStored_t) >= 16 );
C_ASSERT( offsetof(UserStatsStored_t, m_nGameID) == 0 );
C_ASSERT( sizeof(UserStatsStored_t().m_nGameID) >= 8 );
C_ASSERT( offsetof(UserStatsStored_t, m_eResult) == 8 );
C_ASSERT( sizeof(UserStatsStored_t().m_eResult) >= 4 );

C_ASSERT( sizeof(UserStatsUnloaded_t) >= 8 );
C_ASSERT( offsetof(UserStatsUnloaded_t, m_steamIDUser) == 0 );
C_ASSERT( sizeof(UserStatsUnloaded_t().m_steamIDUser) >= 8 );

C_ASSERT( sizeof(UserSubscribedItemsListChanged_t) >= 4 );
C_ASSERT( offsetof(UserSubscribedItemsListChanged_t, m_nAppID) == 0 );
C_ASSERT( sizeof(UserSubscribedItemsListChanged_t().m_nAppID) >= 4 );

C_ASSERT( sizeof(ValidateAuthTicketResponse_t_126) >= 20 );
C_ASSERT( offsetof(ValidateAuthTicketResponse_t_126, m_SteamID) == 0 );
C_ASSERT( sizeof(ValidateAuthTicketResponse_t_126().m_SteamID) >= 8 );
C_ASSERT( offsetof(ValidateAuthTicketResponse_t_126, m_eAuthSessionResponse) == 8 );
C_ASSERT( sizeof(ValidateAuthTicketResponse_t_126().m_eAuthSessionResponse) >= 4 );
C_ASSERT( offsetof(ValidateAuthTicketResponse_t_126, m_OwnerSteamID) == 12 );
C_ASSERT( sizeof(ValidateAuthTicketResponse_t_126().m_OwnerSteamID) >= 8 );

C_ASSERT( sizeof(ValidateAuthTicketResponse_t_104) >= 12 );
C_ASSERT( offsetof(ValidateAuthTicketResponse_t_104, m_SteamID) == 0 );
C_ASSERT( sizeof(ValidateAuthTicketResponse_t_104().m_SteamID) >= 8 );
C_ASSERT( offsetof(ValidateAuthTicketResponse_t_104, m_eAuthSessionResponse) == 8 );
C_ASSERT( sizeof(ValidateAuthTicketResponse_t_104().m_eAuthSessionResponse) >= 4 );

C_ASSERT( sizeof(VolumeHasChanged_t) >= 4 );
C_ASSERT( offsetof(VolumeHasChanged_t, m_flNewVolume) == 0 );
C_ASSERT( sizeof(VolumeHasChanged_t().m_flNewVolume) >= 4 );

C_ASSERT( sizeof(WorkshopEULAStatus_t) >= 20 );
C_ASSERT( offsetof(WorkshopEULAStatus_t, m_eResult) == 0 );
C_ASSERT( sizeof(WorkshopEULAStatus_t().m_eResult) >= 4 );
C_ASSERT( offsetof(WorkshopEULAStatus_t, m_nAppID) == 4 );
C_ASSERT( sizeof(WorkshopEULAStatus_t().m_nAppID) >= 4 );
C_ASSERT( offsetof(WorkshopEULAStatus_t, m_unVersion) == 8 );
C_ASSERT( sizeof(WorkshopEULAStatus_t().m_unVersion) >= 4 );
C_ASSERT( offsetof(WorkshopEULAStatus_t, m_rtAction) == 12 );
C_ASSERT( sizeof(WorkshopEULAStatus_t().m_rtAction) >= 4 );
C_ASSERT( offsetof(WorkshopEULAStatus_t, m_bAccepted) == 16 );
C_ASSERT( sizeof(WorkshopEULAStatus_t().m_bAccepted) >= 1 );
C_ASSERT( offsetof(WorkshopEULAStatus_t, m_bNeedsAction) == 17 );
C_ASSERT( sizeof(WorkshopEULAStatus_t().m_bNeedsAction) >= 1 );

C_ASSERT( sizeof(gameserveritem_t_105) >= 372 );
C_ASSERT( offsetof(gameserveritem_t_105, m_NetAdr) == 0 );
C_ASSERT( sizeof(gameserveritem_t_105().m_NetAdr) >= 8 );
C_ASSERT( offsetof(gameserveritem_t_105, m_nPing) == 8 );
C_ASSERT( sizeof(gameserveritem_t_105().m_nPing) >= 4 );
C_ASSERT( offsetof(gameserveritem_t_105, m_bHadSuccessfulResponse) == 12 );
C_ASSERT( sizeof(gameserveritem_t_105().m_bHadSuccessfulResponse) >= 1 );
C_ASSERT( offsetof(gameserveritem_t_105, m_bDoNotRefresh) == 13 );
C_ASSERT( sizeof(gameserveritem_t_105().m_bDoNotRefresh) >= 1 );
C_ASSERT( offsetof(gameserveritem_t_105, m_szGameDir) == 14 );
C_ASSERT( sizeof(gameserveritem_t_105().m_szGameDir) >= 32 );
C_ASSERT( offsetof(gameserveritem_t_105, m_szMap) == 46 );
C_ASSERT( sizeof(gameserveritem_t_105().m_szMap) >= 32 );
C_ASSERT( offsetof(gameserveritem_t_105, m_szGameDescription) == 78 );
C_ASSERT( sizeof(gameserveritem_t_105().m_szGameDescription) >= 64 );
C_ASSERT( offsetof(gameserveritem_t_105, m_nAppID) == 144 );
C_ASSERT( sizeof(gameserveritem_t_105().m_nAppID) >= 4 );
C_ASSERT( offsetof(gameserveritem_t_105, m_nPlayers) == 148 );
C_ASSERT( sizeof(gameserveritem_t_105().m_nPlayers) >= 4 );
C_ASSERT( offsetof(gameserveritem_t_105, m_nMaxPlayers) == 152 );
C_ASSERT( sizeof(gameserveritem_t_105().m_nMaxPlayers) >= 4 );
C_ASSERT( offsetof(gameserveritem_t_105, m_nBotPlayers) == 156 );
C_ASSERT( sizeof(gameserveritem_t_105().m_nBotPlayers) >= 4 );
C_ASSERT( offsetof(gameserveritem_t_105, m_bPassword) == 160 );
C_ASSERT( sizeof(gameserveritem_t_105().m_bPassword) >= 1 );
C_ASSERT( offsetof(gameserveritem_t_105, m_bSecure) == 161 );
C_ASSERT( sizeof(gameserveritem_t_105().m_bSecure) >= 1 );
C_ASSERT( offsetof(gameserveritem_t_105, m_ulTimeLastPlayed) == 164 );
C_ASSERT( sizeof(gameserveritem_t_105().m_ulTimeLastPlayed) >= 4 );
C_ASSERT( offsetof(gameserveritem_t_105, m_nServerVersion) == 168 );
C_ASSERT( sizeof(gameserveritem_t_105().m_nServerVersion) >= 4 );
C_ASSERT( offsetof(gameserveritem_t_105, m_szServerName) == 172 );
C_ASSERT( sizeof(gameserveritem_t_105().m_szServerName) >= 64 );
C_ASSERT( offsetof(gameserveritem_t_105, m_szGameTags) == 236 );
C_ASSERT( sizeof(gameserveritem_t_105().m_szGameTags) >= 128 );
C_ASSERT( offsetof(gameserveritem_t_105, m_steamID) == 364 );
C_ASSERT( sizeof(gameserveritem_t_105().m_steamID) >= 8 );

C_ASSERT( sizeof(gameserveritem_t_099u) >= 364 );
C_ASSERT( offsetof(gameserveritem_t_099u, m_NetAdr) == 0 );
C_ASSERT( sizeof(gameserveritem_t_099u().m_NetAdr) >= 8 );
C_ASSERT( offsetof(gameserveritem_t_099u, m_nPing) == 8 );
C_ASSERT( sizeof(gameserveritem_t_099u().m_nPing) >= 4 );
C_ASSERT( offsetof(gameserveritem_t_099u, m_bHadSuccessfulResponse) == 12 );
C_ASSERT( sizeof(gameserveritem_t_099u().m_bHadSuccessfulResponse) >= 1 );
C_ASSERT( offsetof(gameserveritem_t_099u, m_bDoNotRefresh) == 13 );
C_ASSERT( sizeof(gameserveritem_t_099u().m_bDoNotRefresh) >= 1 );
C_ASSERT( offsetof(gameserveritem_t_099u, m_szGameDir) == 14 );
C_ASSERT( sizeof(gameserveritem_t_099u().m_szGameDir) >= 32 );
C_ASSERT( offsetof(gameserveritem_t_099u, m_szMap) == 46 );
C_ASSERT( sizeof(gameserveritem_t_099u().m_szMap) >= 32 );
C_ASSERT( offsetof(gameserveritem_t_099u, m_szGameDescription) == 78 );
C_ASSERT( sizeof(gameserveritem_t_099u().m_szGameDescription) >= 64 );
C_ASSERT( offsetof(gameserveritem_t_099u, m_nAppID) == 144 );
C_ASSERT( sizeof(gameserveritem_t_099u().m_nAppID) >= 4 );
C_ASSERT( offsetof(gameserveritem_t_099u, m_nPlayers) == 148 );
C_ASSERT( sizeof(gameserveritem_t_099u().m_nPlayers) >= 4 );
C_ASSERT( offsetof(gameserveritem_t_099u, m_nMaxPlayers) == 152 );
C_ASSERT( sizeof(gameserveritem_t_099u().m_nMaxPlayers) >= 4 );
C_ASSERT( offsetof(gameserveritem_t_099u, m_nBotPlayers) == 156 );
C_ASSERT( sizeof(gameserveritem_t_099u().m_nBotPlayers) >= 4 );
C_ASSERT( offsetof(gameserveritem_t_099u, m_bPassword) == 160 );
C_ASSERT( sizeof(gameserveritem_t_099u().m_bPassword) >= 1 );
C_ASSERT( offsetof(gameserveritem_t_099u, m_bSecure) == 161 );
C_ASSERT( sizeof(gameserveritem_t_099u().m_bSecure) >= 1 );
C_ASSERT( offsetof(gameserveritem_t_099u, m_ulTimeLastPlayed) == 164 );
C_ASSERT( sizeof(gameserveritem_t_099u().m_ulTimeLastPlayed) >= 4 );
C_ASSERT( offsetof(gameserveritem_t_099u, m_nServerVersion) == 168 );
C_ASSERT( sizeof(gameserveritem_t_099u().m_nServerVersion) >= 4 );
C_ASSERT( offsetof(gameserveritem_t_099u, m_szServerName) == 172 );
C_ASSERT( sizeof(gameserveritem_t_099u().m_szServerName) >= 64 );
C_ASSERT( offsetof(gameserveritem_t_099u, m_szGameTags) == 236 );
C_ASSERT( sizeof(gameserveritem_t_099u().m_szGameTags) >= 128 );

C_ASSERT( sizeof(w64_SteamUGCDetails_t_128x) >= 9776 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_128x, m_nPublishedFileId) == 0 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_128x().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_128x, m_eResult) == 8 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_128x().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_128x, m_eFileType) == 12 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_128x().m_eFileType) >= 4 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_128x, m_nCreatorAppID) == 16 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_128x().m_nCreatorAppID) >= 4 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_128x, m_nConsumerAppID) == 20 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_128x().m_nConsumerAppID) >= 4 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_128x, m_rgchTitle) == 24 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_128x().m_rgchTitle) >= 129 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_128x, m_rgchDescription) == 153 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_128x().m_rgchDescription) >= 8000 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_128x, m_ulSteamIDOwner) == 8160 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_128x().m_ulSteamIDOwner) >= 8 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_128x, m_rtimeCreated) == 8168 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_128x().m_rtimeCreated) >= 4 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_128x, m_rtimeUpdated) == 8172 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_128x().m_rtimeUpdated) >= 4 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_128x, m_rtimeAddedToUserList) == 8176 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_128x().m_rtimeAddedToUserList) >= 4 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_128x, m_eVisibility) == 8180 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_128x().m_eVisibility) >= 4 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_128x, m_bBanned) == 8184 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_128x().m_bBanned) >= 1 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_128x, m_bAcceptedForUse) == 8185 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_128x().m_bAcceptedForUse) >= 1 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_128x, m_bTagsTruncated) == 8186 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_128x().m_bTagsTruncated) >= 1 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_128x, m_rgchTags) == 8187 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_128x().m_rgchTags) >= 1025 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_128x, m_hFile) == 9216 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_128x().m_hFile) >= 8 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_128x, m_hPreviewFile) == 9224 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_128x().m_hPreviewFile) >= 8 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_128x, m_pchFileName) == 9232 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_128x().m_pchFileName) >= 260 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_128x, m_nFileSize) == 9492 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_128x().m_nFileSize) >= 4 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_128x, m_nPreviewFileSize) == 9496 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_128x().m_nPreviewFileSize) >= 4 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_128x, m_rgchURL) == 9500 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_128x().m_rgchURL) >= 256 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_128x, m_unVotesUp) == 9756 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_128x().m_unVotesUp) >= 4 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_128x, m_unVotesDown) == 9760 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_128x().m_unVotesDown) >= 4 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_128x, m_flScore) == 9764 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_128x().m_flScore) >= 4 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_128x, m_unNumChildren) == 9768 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_128x().m_unNumChildren) >= 4 );

C_ASSERT( sizeof(u64_SteamUGCDetails_t_128x) >= 9764 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_128x, m_nPublishedFileId) == 0 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_128x().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_128x, m_eResult) == 8 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_128x().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_128x, m_eFileType) == 12 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_128x().m_eFileType) >= 4 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_128x, m_nCreatorAppID) == 16 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_128x().m_nCreatorAppID) >= 4 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_128x, m_nConsumerAppID) == 20 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_128x().m_nConsumerAppID) >= 4 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_128x, m_rgchTitle) == 24 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_128x().m_rgchTitle) >= 129 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_128x, m_rgchDescription) == 153 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_128x().m_rgchDescription) >= 8000 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_128x, m_ulSteamIDOwner) == 8156 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_128x().m_ulSteamIDOwner) >= 8 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_128x, m_rtimeCreated) == 8164 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_128x().m_rtimeCreated) >= 4 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_128x, m_rtimeUpdated) == 8168 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_128x().m_rtimeUpdated) >= 4 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_128x, m_rtimeAddedToUserList) == 8172 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_128x().m_rtimeAddedToUserList) >= 4 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_128x, m_eVisibility) == 8176 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_128x().m_eVisibility) >= 4 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_128x, m_bBanned) == 8180 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_128x().m_bBanned) >= 1 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_128x, m_bAcceptedForUse) == 8181 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_128x().m_bAcceptedForUse) >= 1 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_128x, m_bTagsTruncated) == 8182 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_128x().m_bTagsTruncated) >= 1 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_128x, m_rgchTags) == 8183 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_128x().m_rgchTags) >= 1025 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_128x, m_hFile) == 9208 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_128x().m_hFile) >= 8 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_128x, m_hPreviewFile) == 9216 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_128x().m_hPreviewFile) >= 8 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_128x, m_pchFileName) == 9224 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_128x().m_pchFileName) >= 260 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_128x, m_nFileSize) == 9484 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_128x().m_nFileSize) >= 4 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_128x, m_nPreviewFileSize) == 9488 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_128x().m_nPreviewFileSize) >= 4 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_128x, m_rgchURL) == 9492 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_128x().m_rgchURL) >= 256 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_128x, m_unVotesUp) == 9748 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_128x().m_unVotesUp) >= 4 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_128x, m_unVotesDown) == 9752 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_128x().m_unVotesDown) >= 4 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_128x, m_flScore) == 9756 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_128x().m_flScore) >= 4 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_128x, m_unNumChildren) == 9760 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_128x().m_unNumChildren) >= 4 );

C_ASSERT( sizeof(w32_SteamUGCDetails_t_128x) >= 9776 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_128x, m_nPublishedFileId) == 0 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_128x().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_128x, m_eResult) == 8 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_128x().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_128x, m_eFileType) == 12 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_128x().m_eFileType) >= 4 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_128x, m_nCreatorAppID) == 16 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_128x().m_nCreatorAppID) >= 4 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_128x, m_nConsumerAppID) == 20 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_128x().m_nConsumerAppID) >= 4 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_128x, m_rgchTitle) == 24 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_128x().m_rgchTitle) >= 129 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_128x, m_rgchDescription) == 153 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_128x().m_rgchDescription) >= 8000 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_128x, m_ulSteamIDOwner) == 8160 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_128x().m_ulSteamIDOwner) >= 8 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_128x, m_rtimeCreated) == 8168 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_128x().m_rtimeCreated) >= 4 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_128x, m_rtimeUpdated) == 8172 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_128x().m_rtimeUpdated) >= 4 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_128x, m_rtimeAddedToUserList) == 8176 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_128x().m_rtimeAddedToUserList) >= 4 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_128x, m_eVisibility) == 8180 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_128x().m_eVisibility) >= 4 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_128x, m_bBanned) == 8184 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_128x().m_bBanned) >= 1 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_128x, m_bAcceptedForUse) == 8185 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_128x().m_bAcceptedForUse) >= 1 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_128x, m_bTagsTruncated) == 8186 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_128x().m_bTagsTruncated) >= 1 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_128x, m_rgchTags) == 8187 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_128x().m_rgchTags) >= 1025 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_128x, m_hFile) == 9216 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_128x().m_hFile) >= 8 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_128x, m_hPreviewFile) == 9224 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_128x().m_hPreviewFile) >= 8 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_128x, m_pchFileName) == 9232 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_128x().m_pchFileName) >= 260 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_128x, m_nFileSize) == 9492 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_128x().m_nFileSize) >= 4 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_128x, m_nPreviewFileSize) == 9496 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_128x().m_nPreviewFileSize) >= 4 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_128x, m_rgchURL) == 9500 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_128x().m_rgchURL) >= 256 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_128x, m_unVotesUp) == 9756 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_128x().m_unVotesUp) >= 4 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_128x, m_unVotesDown) == 9760 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_128x().m_unVotesDown) >= 4 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_128x, m_flScore) == 9764 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_128x().m_flScore) >= 4 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_128x, m_unNumChildren) == 9768 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_128x().m_unNumChildren) >= 4 );

C_ASSERT( sizeof(u32_SteamUGCDetails_t_128x) >= 9764 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_128x, m_nPublishedFileId) == 0 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_128x().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_128x, m_eResult) == 8 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_128x().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_128x, m_eFileType) == 12 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_128x().m_eFileType) >= 4 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_128x, m_nCreatorAppID) == 16 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_128x().m_nCreatorAppID) >= 4 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_128x, m_nConsumerAppID) == 20 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_128x().m_nConsumerAppID) >= 4 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_128x, m_rgchTitle) == 24 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_128x().m_rgchTitle) >= 129 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_128x, m_rgchDescription) == 153 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_128x().m_rgchDescription) >= 8000 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_128x, m_ulSteamIDOwner) == 8156 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_128x().m_ulSteamIDOwner) >= 8 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_128x, m_rtimeCreated) == 8164 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_128x().m_rtimeCreated) >= 4 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_128x, m_rtimeUpdated) == 8168 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_128x().m_rtimeUpdated) >= 4 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_128x, m_rtimeAddedToUserList) == 8172 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_128x().m_rtimeAddedToUserList) >= 4 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_128x, m_eVisibility) == 8176 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_128x().m_eVisibility) >= 4 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_128x, m_bBanned) == 8180 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_128x().m_bBanned) >= 1 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_128x, m_bAcceptedForUse) == 8181 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_128x().m_bAcceptedForUse) >= 1 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_128x, m_bTagsTruncated) == 8182 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_128x().m_bTagsTruncated) >= 1 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_128x, m_rgchTags) == 8183 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_128x().m_rgchTags) >= 1025 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_128x, m_hFile) == 9208 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_128x().m_hFile) >= 8 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_128x, m_hPreviewFile) == 9216 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_128x().m_hPreviewFile) >= 8 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_128x, m_pchFileName) == 9224 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_128x().m_pchFileName) >= 260 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_128x, m_nFileSize) == 9484 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_128x().m_nFileSize) >= 4 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_128x, m_nPreviewFileSize) == 9488 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_128x().m_nPreviewFileSize) >= 4 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_128x, m_rgchURL) == 9492 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_128x().m_rgchURL) >= 256 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_128x, m_unVotesUp) == 9748 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_128x().m_unVotesUp) >= 4 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_128x, m_unVotesDown) == 9752 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_128x().m_unVotesDown) >= 4 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_128x, m_flScore) == 9756 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_128x().m_flScore) >= 4 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_128x, m_unNumChildren) == 9760 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_128x().m_unNumChildren) >= 4 );

C_ASSERT( sizeof(w64_SteamUGCDetails_t_126) >= 9768 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_126, m_nPublishedFileId) == 0 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_126().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_126, m_eResult) == 8 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_126().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_126, m_eFileType) == 12 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_126().m_eFileType) >= 4 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_126, m_nCreatorAppID) == 16 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_126().m_nCreatorAppID) >= 4 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_126, m_nConsumerAppID) == 20 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_126().m_nConsumerAppID) >= 4 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_126, m_rgchTitle) == 24 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_126().m_rgchTitle) >= 129 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_126, m_rgchDescription) == 153 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_126().m_rgchDescription) >= 8000 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_126, m_ulSteamIDOwner) == 8160 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_126().m_ulSteamIDOwner) >= 8 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_126, m_rtimeCreated) == 8168 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_126().m_rtimeCreated) >= 4 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_126, m_rtimeUpdated) == 8172 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_126().m_rtimeUpdated) >= 4 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_126, m_rtimeAddedToUserList) == 8176 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_126().m_rtimeAddedToUserList) >= 4 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_126, m_eVisibility) == 8180 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_126().m_eVisibility) >= 4 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_126, m_bBanned) == 8184 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_126().m_bBanned) >= 1 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_126, m_bAcceptedForUse) == 8185 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_126().m_bAcceptedForUse) >= 1 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_126, m_bTagsTruncated) == 8186 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_126().m_bTagsTruncated) >= 1 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_126, m_rgchTags) == 8187 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_126().m_rgchTags) >= 1025 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_126, m_hFile) == 9216 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_126().m_hFile) >= 8 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_126, m_hPreviewFile) == 9224 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_126().m_hPreviewFile) >= 8 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_126, m_pchFileName) == 9232 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_126().m_pchFileName) >= 260 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_126, m_nFileSize) == 9492 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_126().m_nFileSize) >= 4 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_126, m_nPreviewFileSize) == 9496 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_126().m_nPreviewFileSize) >= 4 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_126, m_rgchURL) == 9500 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_126().m_rgchURL) >= 256 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_126, m_unVotesUp) == 9756 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_126().m_unVotesUp) >= 4 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_126, m_unVotesDown) == 9760 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_126().m_unVotesDown) >= 4 );
C_ASSERT( offsetof(w64_SteamUGCDetails_t_126, m_flScore) == 9764 );
C_ASSERT( sizeof(w64_SteamUGCDetails_t_126().m_flScore) >= 4 );

C_ASSERT( sizeof(u64_SteamUGCDetails_t_126) >= 9760 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_126, m_nPublishedFileId) == 0 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_126().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_126, m_eResult) == 8 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_126().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_126, m_eFileType) == 12 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_126().m_eFileType) >= 4 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_126, m_nCreatorAppID) == 16 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_126().m_nCreatorAppID) >= 4 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_126, m_nConsumerAppID) == 20 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_126().m_nConsumerAppID) >= 4 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_126, m_rgchTitle) == 24 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_126().m_rgchTitle) >= 129 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_126, m_rgchDescription) == 153 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_126().m_rgchDescription) >= 8000 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_126, m_ulSteamIDOwner) == 8156 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_126().m_ulSteamIDOwner) >= 8 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_126, m_rtimeCreated) == 8164 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_126().m_rtimeCreated) >= 4 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_126, m_rtimeUpdated) == 8168 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_126().m_rtimeUpdated) >= 4 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_126, m_rtimeAddedToUserList) == 8172 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_126().m_rtimeAddedToUserList) >= 4 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_126, m_eVisibility) == 8176 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_126().m_eVisibility) >= 4 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_126, m_bBanned) == 8180 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_126().m_bBanned) >= 1 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_126, m_bAcceptedForUse) == 8181 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_126().m_bAcceptedForUse) >= 1 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_126, m_bTagsTruncated) == 8182 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_126().m_bTagsTruncated) >= 1 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_126, m_rgchTags) == 8183 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_126().m_rgchTags) >= 1025 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_126, m_hFile) == 9208 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_126().m_hFile) >= 8 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_126, m_hPreviewFile) == 9216 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_126().m_hPreviewFile) >= 8 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_126, m_pchFileName) == 9224 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_126().m_pchFileName) >= 260 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_126, m_nFileSize) == 9484 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_126().m_nFileSize) >= 4 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_126, m_nPreviewFileSize) == 9488 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_126().m_nPreviewFileSize) >= 4 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_126, m_rgchURL) == 9492 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_126().m_rgchURL) >= 256 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_126, m_unVotesUp) == 9748 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_126().m_unVotesUp) >= 4 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_126, m_unVotesDown) == 9752 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_126().m_unVotesDown) >= 4 );
C_ASSERT( offsetof(u64_SteamUGCDetails_t_126, m_flScore) == 9756 );
C_ASSERT( sizeof(u64_SteamUGCDetails_t_126().m_flScore) >= 4 );

C_ASSERT( sizeof(w32_SteamUGCDetails_t_126) >= 9768 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_126, m_nPublishedFileId) == 0 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_126().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_126, m_eResult) == 8 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_126().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_126, m_eFileType) == 12 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_126().m_eFileType) >= 4 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_126, m_nCreatorAppID) == 16 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_126().m_nCreatorAppID) >= 4 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_126, m_nConsumerAppID) == 20 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_126().m_nConsumerAppID) >= 4 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_126, m_rgchTitle) == 24 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_126().m_rgchTitle) >= 129 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_126, m_rgchDescription) == 153 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_126().m_rgchDescription) >= 8000 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_126, m_ulSteamIDOwner) == 8160 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_126().m_ulSteamIDOwner) >= 8 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_126, m_rtimeCreated) == 8168 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_126().m_rtimeCreated) >= 4 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_126, m_rtimeUpdated) == 8172 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_126().m_rtimeUpdated) >= 4 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_126, m_rtimeAddedToUserList) == 8176 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_126().m_rtimeAddedToUserList) >= 4 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_126, m_eVisibility) == 8180 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_126().m_eVisibility) >= 4 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_126, m_bBanned) == 8184 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_126().m_bBanned) >= 1 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_126, m_bAcceptedForUse) == 8185 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_126().m_bAcceptedForUse) >= 1 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_126, m_bTagsTruncated) == 8186 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_126().m_bTagsTruncated) >= 1 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_126, m_rgchTags) == 8187 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_126().m_rgchTags) >= 1025 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_126, m_hFile) == 9216 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_126().m_hFile) >= 8 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_126, m_hPreviewFile) == 9224 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_126().m_hPreviewFile) >= 8 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_126, m_pchFileName) == 9232 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_126().m_pchFileName) >= 260 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_126, m_nFileSize) == 9492 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_126().m_nFileSize) >= 4 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_126, m_nPreviewFileSize) == 9496 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_126().m_nPreviewFileSize) >= 4 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_126, m_rgchURL) == 9500 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_126().m_rgchURL) >= 256 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_126, m_unVotesUp) == 9756 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_126().m_unVotesUp) >= 4 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_126, m_unVotesDown) == 9760 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_126().m_unVotesDown) >= 4 );
C_ASSERT( offsetof(w32_SteamUGCDetails_t_126, m_flScore) == 9764 );
C_ASSERT( sizeof(w32_SteamUGCDetails_t_126().m_flScore) >= 4 );

C_ASSERT( sizeof(u32_SteamUGCDetails_t_126) >= 9760 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_126, m_nPublishedFileId) == 0 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_126().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_126, m_eResult) == 8 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_126().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_126, m_eFileType) == 12 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_126().m_eFileType) >= 4 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_126, m_nCreatorAppID) == 16 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_126().m_nCreatorAppID) >= 4 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_126, m_nConsumerAppID) == 20 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_126().m_nConsumerAppID) >= 4 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_126, m_rgchTitle) == 24 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_126().m_rgchTitle) >= 129 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_126, m_rgchDescription) == 153 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_126().m_rgchDescription) >= 8000 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_126, m_ulSteamIDOwner) == 8156 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_126().m_ulSteamIDOwner) >= 8 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_126, m_rtimeCreated) == 8164 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_126().m_rtimeCreated) >= 4 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_126, m_rtimeUpdated) == 8168 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_126().m_rtimeUpdated) >= 4 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_126, m_rtimeAddedToUserList) == 8172 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_126().m_rtimeAddedToUserList) >= 4 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_126, m_eVisibility) == 8176 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_126().m_eVisibility) >= 4 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_126, m_bBanned) == 8180 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_126().m_bBanned) >= 1 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_126, m_bAcceptedForUse) == 8181 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_126().m_bAcceptedForUse) >= 1 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_126, m_bTagsTruncated) == 8182 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_126().m_bTagsTruncated) >= 1 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_126, m_rgchTags) == 8183 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_126().m_rgchTags) >= 1025 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_126, m_hFile) == 9208 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_126().m_hFile) >= 8 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_126, m_hPreviewFile) == 9216 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_126().m_hPreviewFile) >= 8 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_126, m_pchFileName) == 9224 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_126().m_pchFileName) >= 260 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_126, m_nFileSize) == 9484 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_126().m_nFileSize) >= 4 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_126, m_nPreviewFileSize) == 9488 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_126().m_nPreviewFileSize) >= 4 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_126, m_rgchURL) == 9492 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_126().m_rgchURL) >= 256 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_126, m_unVotesUp) == 9748 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_126().m_unVotesUp) >= 4 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_126, m_unVotesDown) == 9752 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_126().m_unVotesDown) >= 4 );
C_ASSERT( offsetof(u32_SteamUGCDetails_t_126, m_flScore) == 9756 );
C_ASSERT( sizeof(u32_SteamUGCDetails_t_126().m_flScore) >= 4 );

#ifdef __x86_64__
w64_SteamUGCDetails_t_128x::operator u64_SteamUGCDetails_t_128x() const
{
    u64_SteamUGCDetails_t_128x ret;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_eResult = this->m_eResult;
    ret.m_eFileType = this->m_eFileType;
    ret.m_nCreatorAppID = this->m_nCreatorAppID;
    ret.m_nConsumerAppID = this->m_nConsumerAppID;
    ret.m_rgchTitle = this->m_rgchTitle;
    ret.m_rgchDescription = this->m_rgchDescription;
    ret.m_ulSteamIDOwner = this->m_ulSteamIDOwner;
    ret.m_rtimeCreated = this->m_rtimeCreated;
    ret.m_rtimeUpdated = this->m_rtimeUpdated;
    ret.m_rtimeAddedToUserList = this->m_rtimeAddedToUserList;
    ret.m_eVisibility = this->m_eVisibility;
    ret.m_bBanned = this->m_bBanned;
    ret.m_bAcceptedForUse = this->m_bAcceptedForUse;
    ret.m_bTagsTruncated = this->m_bTagsTruncated;
    ret.m_rgchTags = this->m_rgchTags;
    ret.m_hFile = this->m_hFile;
    ret.m_hPreviewFile = this->m_hPreviewFile;
    ret.m_pchFileName = this->m_pchFileName;
    ret.m_nFileSize = this->m_nFileSize;
    ret.m_nPreviewFileSize = this->m_nPreviewFileSize;
    ret.m_rgchURL = this->m_rgchURL;
    ret.m_unVotesUp = this->m_unVotesUp;
    ret.m_unVotesDown = this->m_unVotesDown;
    ret.m_flScore = this->m_flScore;
    ret.m_unNumChildren = this->m_unNumChildren;
    return ret;
}

u64_SteamUGCDetails_t_128x::operator w64_SteamUGCDetails_t_128x() const
{
    w64_SteamUGCDetails_t_128x ret;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_eResult = this->m_eResult;
    ret.m_eFileType = this->m_eFileType;
    ret.m_nCreatorAppID = this->m_nCreatorAppID;
    ret.m_nConsumerAppID = this->m_nConsumerAppID;
    ret.m_rgchTitle = this->m_rgchTitle;
    ret.m_rgchDescription = this->m_rgchDescription;
    ret.m_ulSteamIDOwner = this->m_ulSteamIDOwner;
    ret.m_rtimeCreated = this->m_rtimeCreated;
    ret.m_rtimeUpdated = this->m_rtimeUpdated;
    ret.m_rtimeAddedToUserList = this->m_rtimeAddedToUserList;
    ret.m_eVisibility = this->m_eVisibility;
    ret.m_bBanned = this->m_bBanned;
    ret.m_bAcceptedForUse = this->m_bAcceptedForUse;
    ret.m_bTagsTruncated = this->m_bTagsTruncated;
    ret.m_rgchTags = this->m_rgchTags;
    ret.m_hFile = this->m_hFile;
    ret.m_hPreviewFile = this->m_hPreviewFile;
    ret.m_pchFileName = this->m_pchFileName;
    ret.m_nFileSize = this->m_nFileSize;
    ret.m_nPreviewFileSize = this->m_nPreviewFileSize;
    ret.m_rgchURL = this->m_rgchURL;
    ret.m_unVotesUp = this->m_unVotesUp;
    ret.m_unVotesDown = this->m_unVotesDown;
    ret.m_flScore = this->m_flScore;
    ret.m_unNumChildren = this->m_unNumChildren;
    return ret;
}
#endif

#ifdef __i386__
w32_SteamUGCDetails_t_128x::operator u32_SteamUGCDetails_t_128x() const
{
    u32_SteamUGCDetails_t_128x ret;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_eResult = this->m_eResult;
    ret.m_eFileType = this->m_eFileType;
    ret.m_nCreatorAppID = this->m_nCreatorAppID;
    ret.m_nConsumerAppID = this->m_nConsumerAppID;
    ret.m_rgchTitle = this->m_rgchTitle;
    ret.m_rgchDescription = this->m_rgchDescription;
    ret.m_ulSteamIDOwner = this->m_ulSteamIDOwner;
    ret.m_rtimeCreated = this->m_rtimeCreated;
    ret.m_rtimeUpdated = this->m_rtimeUpdated;
    ret.m_rtimeAddedToUserList = this->m_rtimeAddedToUserList;
    ret.m_eVisibility = this->m_eVisibility;
    ret.m_bBanned = this->m_bBanned;
    ret.m_bAcceptedForUse = this->m_bAcceptedForUse;
    ret.m_bTagsTruncated = this->m_bTagsTruncated;
    ret.m_rgchTags = this->m_rgchTags;
    ret.m_hFile = this->m_hFile;
    ret.m_hPreviewFile = this->m_hPreviewFile;
    ret.m_pchFileName = this->m_pchFileName;
    ret.m_nFileSize = this->m_nFileSize;
    ret.m_nPreviewFileSize = this->m_nPreviewFileSize;
    ret.m_rgchURL = this->m_rgchURL;
    ret.m_unVotesUp = this->m_unVotesUp;
    ret.m_unVotesDown = this->m_unVotesDown;
    ret.m_flScore = this->m_flScore;
    ret.m_unNumChildren = this->m_unNumChildren;
    return ret;
}

u32_SteamUGCDetails_t_128x::operator w32_SteamUGCDetails_t_128x() const
{
    w32_SteamUGCDetails_t_128x ret;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_eResult = this->m_eResult;
    ret.m_eFileType = this->m_eFileType;
    ret.m_nCreatorAppID = this->m_nCreatorAppID;
    ret.m_nConsumerAppID = this->m_nConsumerAppID;
    ret.m_rgchTitle = this->m_rgchTitle;
    ret.m_rgchDescription = this->m_rgchDescription;
    ret.m_ulSteamIDOwner = this->m_ulSteamIDOwner;
    ret.m_rtimeCreated = this->m_rtimeCreated;
    ret.m_rtimeUpdated = this->m_rtimeUpdated;
    ret.m_rtimeAddedToUserList = this->m_rtimeAddedToUserList;
    ret.m_eVisibility = this->m_eVisibility;
    ret.m_bBanned = this->m_bBanned;
    ret.m_bAcceptedForUse = this->m_bAcceptedForUse;
    ret.m_bTagsTruncated = this->m_bTagsTruncated;
    ret.m_rgchTags = this->m_rgchTags;
    ret.m_hFile = this->m_hFile;
    ret.m_hPreviewFile = this->m_hPreviewFile;
    ret.m_pchFileName = this->m_pchFileName;
    ret.m_nFileSize = this->m_nFileSize;
    ret.m_nPreviewFileSize = this->m_nPreviewFileSize;
    ret.m_rgchURL = this->m_rgchURL;
    ret.m_unVotesUp = this->m_unVotesUp;
    ret.m_unVotesDown = this->m_unVotesDown;
    ret.m_flScore = this->m_flScore;
    ret.m_unNumChildren = this->m_unNumChildren;
    return ret;
}
#endif

#ifdef __x86_64__
w64_SteamUGCDetails_t_126::operator u64_SteamUGCDetails_t_126() const
{
    u64_SteamUGCDetails_t_126 ret;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_eResult = this->m_eResult;
    ret.m_eFileType = this->m_eFileType;
    ret.m_nCreatorAppID = this->m_nCreatorAppID;
    ret.m_nConsumerAppID = this->m_nConsumerAppID;
    ret.m_rgchTitle = this->m_rgchTitle;
    ret.m_rgchDescription = this->m_rgchDescription;
    ret.m_ulSteamIDOwner = this->m_ulSteamIDOwner;
    ret.m_rtimeCreated = this->m_rtimeCreated;
    ret.m_rtimeUpdated = this->m_rtimeUpdated;
    ret.m_rtimeAddedToUserList = this->m_rtimeAddedToUserList;
    ret.m_eVisibility = this->m_eVisibility;
    ret.m_bBanned = this->m_bBanned;
    ret.m_bAcceptedForUse = this->m_bAcceptedForUse;
    ret.m_bTagsTruncated = this->m_bTagsTruncated;
    ret.m_rgchTags = this->m_rgchTags;
    ret.m_hFile = this->m_hFile;
    ret.m_hPreviewFile = this->m_hPreviewFile;
    ret.m_pchFileName = this->m_pchFileName;
    ret.m_nFileSize = this->m_nFileSize;
    ret.m_nPreviewFileSize = this->m_nPreviewFileSize;
    ret.m_rgchURL = this->m_rgchURL;
    ret.m_unVotesUp = this->m_unVotesUp;
    ret.m_unVotesDown = this->m_unVotesDown;
    ret.m_flScore = this->m_flScore;
    return ret;
}

u64_SteamUGCDetails_t_126::operator w64_SteamUGCDetails_t_126() const
{
    w64_SteamUGCDetails_t_126 ret;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_eResult = this->m_eResult;
    ret.m_eFileType = this->m_eFileType;
    ret.m_nCreatorAppID = this->m_nCreatorAppID;
    ret.m_nConsumerAppID = this->m_nConsumerAppID;
    ret.m_rgchTitle = this->m_rgchTitle;
    ret.m_rgchDescription = this->m_rgchDescription;
    ret.m_ulSteamIDOwner = this->m_ulSteamIDOwner;
    ret.m_rtimeCreated = this->m_rtimeCreated;
    ret.m_rtimeUpdated = this->m_rtimeUpdated;
    ret.m_rtimeAddedToUserList = this->m_rtimeAddedToUserList;
    ret.m_eVisibility = this->m_eVisibility;
    ret.m_bBanned = this->m_bBanned;
    ret.m_bAcceptedForUse = this->m_bAcceptedForUse;
    ret.m_bTagsTruncated = this->m_bTagsTruncated;
    ret.m_rgchTags = this->m_rgchTags;
    ret.m_hFile = this->m_hFile;
    ret.m_hPreviewFile = this->m_hPreviewFile;
    ret.m_pchFileName = this->m_pchFileName;
    ret.m_nFileSize = this->m_nFileSize;
    ret.m_nPreviewFileSize = this->m_nPreviewFileSize;
    ret.m_rgchURL = this->m_rgchURL;
    ret.m_unVotesUp = this->m_unVotesUp;
    ret.m_unVotesDown = this->m_unVotesDown;
    ret.m_flScore = this->m_flScore;
    return ret;
}
#endif

#ifdef __i386__
w32_SteamUGCDetails_t_126::operator u32_SteamUGCDetails_t_126() const
{
    u32_SteamUGCDetails_t_126 ret;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_eResult = this->m_eResult;
    ret.m_eFileType = this->m_eFileType;
    ret.m_nCreatorAppID = this->m_nCreatorAppID;
    ret.m_nConsumerAppID = this->m_nConsumerAppID;
    ret.m_rgchTitle = this->m_rgchTitle;
    ret.m_rgchDescription = this->m_rgchDescription;
    ret.m_ulSteamIDOwner = this->m_ulSteamIDOwner;
    ret.m_rtimeCreated = this->m_rtimeCreated;
    ret.m_rtimeUpdated = this->m_rtimeUpdated;
    ret.m_rtimeAddedToUserList = this->m_rtimeAddedToUserList;
    ret.m_eVisibility = this->m_eVisibility;
    ret.m_bBanned = this->m_bBanned;
    ret.m_bAcceptedForUse = this->m_bAcceptedForUse;
    ret.m_bTagsTruncated = this->m_bTagsTruncated;
    ret.m_rgchTags = this->m_rgchTags;
    ret.m_hFile = this->m_hFile;
    ret.m_hPreviewFile = this->m_hPreviewFile;
    ret.m_pchFileName = this->m_pchFileName;
    ret.m_nFileSize = this->m_nFileSize;
    ret.m_nPreviewFileSize = this->m_nPreviewFileSize;
    ret.m_rgchURL = this->m_rgchURL;
    ret.m_unVotesUp = this->m_unVotesUp;
    ret.m_unVotesDown = this->m_unVotesDown;
    ret.m_flScore = this->m_flScore;
    return ret;
}

u32_SteamUGCDetails_t_126::operator w32_SteamUGCDetails_t_126() const
{
    w32_SteamUGCDetails_t_126 ret;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_eResult = this->m_eResult;
    ret.m_eFileType = this->m_eFileType;
    ret.m_nCreatorAppID = this->m_nCreatorAppID;
    ret.m_nConsumerAppID = this->m_nConsumerAppID;
    ret.m_rgchTitle = this->m_rgchTitle;
    ret.m_rgchDescription = this->m_rgchDescription;
    ret.m_ulSteamIDOwner = this->m_ulSteamIDOwner;
    ret.m_rtimeCreated = this->m_rtimeCreated;
    ret.m_rtimeUpdated = this->m_rtimeUpdated;
    ret.m_rtimeAddedToUserList = this->m_rtimeAddedToUserList;
    ret.m_eVisibility = this->m_eVisibility;
    ret.m_bBanned = this->m_bBanned;
    ret.m_bAcceptedForUse = this->m_bAcceptedForUse;
    ret.m_bTagsTruncated = this->m_bTagsTruncated;
    ret.m_rgchTags = this->m_rgchTags;
    ret.m_hFile = this->m_hFile;
    ret.m_hPreviewFile = this->m_hPreviewFile;
    ret.m_pchFileName = this->m_pchFileName;
    ret.m_nFileSize = this->m_nFileSize;
    ret.m_nPreviewFileSize = this->m_nPreviewFileSize;
    ret.m_rgchURL = this->m_rgchURL;
    ret.m_unVotesUp = this->m_unVotesUp;
    ret.m_unVotesDown = this->m_unVotesDown;
    ret.m_flScore = this->m_flScore;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_AddAppDependencyResult_t) >= 24 );
C_ASSERT( offsetof(w64_AddAppDependencyResult_t, m_eResult) == 0 );
C_ASSERT( sizeof(w64_AddAppDependencyResult_t().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_AddAppDependencyResult_t, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w64_AddAppDependencyResult_t().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(w64_AddAppDependencyResult_t, m_nAppID) == 16 );
C_ASSERT( sizeof(w64_AddAppDependencyResult_t().m_nAppID) >= 4 );

C_ASSERT( sizeof(u64_AddAppDependencyResult_t) >= 16 );
C_ASSERT( offsetof(u64_AddAppDependencyResult_t, m_eResult) == 0 );
C_ASSERT( sizeof(u64_AddAppDependencyResult_t().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_AddAppDependencyResult_t, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u64_AddAppDependencyResult_t().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(u64_AddAppDependencyResult_t, m_nAppID) == 12 );
C_ASSERT( sizeof(u64_AddAppDependencyResult_t().m_nAppID) >= 4 );

C_ASSERT( sizeof(w32_AddAppDependencyResult_t) >= 24 );
C_ASSERT( offsetof(w32_AddAppDependencyResult_t, m_eResult) == 0 );
C_ASSERT( sizeof(w32_AddAppDependencyResult_t().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_AddAppDependencyResult_t, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w32_AddAppDependencyResult_t().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(w32_AddAppDependencyResult_t, m_nAppID) == 16 );
C_ASSERT( sizeof(w32_AddAppDependencyResult_t().m_nAppID) >= 4 );

C_ASSERT( sizeof(u32_AddAppDependencyResult_t) >= 16 );
C_ASSERT( offsetof(u32_AddAppDependencyResult_t, m_eResult) == 0 );
C_ASSERT( sizeof(u32_AddAppDependencyResult_t().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_AddAppDependencyResult_t, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u32_AddAppDependencyResult_t().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(u32_AddAppDependencyResult_t, m_nAppID) == 12 );
C_ASSERT( sizeof(u32_AddAppDependencyResult_t().m_nAppID) >= 4 );

#ifdef __x86_64__
w64_AddAppDependencyResult_t::operator u64_AddAppDependencyResult_t() const
{
    u64_AddAppDependencyResult_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_nAppID = this->m_nAppID;
    return ret;
}

u64_AddAppDependencyResult_t::operator w64_AddAppDependencyResult_t() const
{
    w64_AddAppDependencyResult_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_nAppID = this->m_nAppID;
    return ret;
}
#endif

#ifdef __i386__
w32_AddAppDependencyResult_t::operator u32_AddAppDependencyResult_t() const
{
    u32_AddAppDependencyResult_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_nAppID = this->m_nAppID;
    return ret;
}

u32_AddAppDependencyResult_t::operator w32_AddAppDependencyResult_t() const
{
    w32_AddAppDependencyResult_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_nAppID = this->m_nAppID;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_AddUGCDependencyResult_t) >= 24 );
C_ASSERT( offsetof(w64_AddUGCDependencyResult_t, m_eResult) == 0 );
C_ASSERT( sizeof(w64_AddUGCDependencyResult_t().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_AddUGCDependencyResult_t, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w64_AddUGCDependencyResult_t().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(w64_AddUGCDependencyResult_t, m_nChildPublishedFileId) == 16 );
C_ASSERT( sizeof(w64_AddUGCDependencyResult_t().m_nChildPublishedFileId) >= 8 );

C_ASSERT( sizeof(u64_AddUGCDependencyResult_t) >= 20 );
C_ASSERT( offsetof(u64_AddUGCDependencyResult_t, m_eResult) == 0 );
C_ASSERT( sizeof(u64_AddUGCDependencyResult_t().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_AddUGCDependencyResult_t, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u64_AddUGCDependencyResult_t().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(u64_AddUGCDependencyResult_t, m_nChildPublishedFileId) == 12 );
C_ASSERT( sizeof(u64_AddUGCDependencyResult_t().m_nChildPublishedFileId) >= 8 );

C_ASSERT( sizeof(w32_AddUGCDependencyResult_t) >= 24 );
C_ASSERT( offsetof(w32_AddUGCDependencyResult_t, m_eResult) == 0 );
C_ASSERT( sizeof(w32_AddUGCDependencyResult_t().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_AddUGCDependencyResult_t, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w32_AddUGCDependencyResult_t().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(w32_AddUGCDependencyResult_t, m_nChildPublishedFileId) == 16 );
C_ASSERT( sizeof(w32_AddUGCDependencyResult_t().m_nChildPublishedFileId) >= 8 );

C_ASSERT( sizeof(u32_AddUGCDependencyResult_t) >= 20 );
C_ASSERT( offsetof(u32_AddUGCDependencyResult_t, m_eResult) == 0 );
C_ASSERT( sizeof(u32_AddUGCDependencyResult_t().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_AddUGCDependencyResult_t, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u32_AddUGCDependencyResult_t().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(u32_AddUGCDependencyResult_t, m_nChildPublishedFileId) == 12 );
C_ASSERT( sizeof(u32_AddUGCDependencyResult_t().m_nChildPublishedFileId) >= 8 );

#ifdef __x86_64__
w64_AddUGCDependencyResult_t::operator u64_AddUGCDependencyResult_t() const
{
    u64_AddUGCDependencyResult_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_nChildPublishedFileId = this->m_nChildPublishedFileId;
    return ret;
}

u64_AddUGCDependencyResult_t::operator w64_AddUGCDependencyResult_t() const
{
    w64_AddUGCDependencyResult_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_nChildPublishedFileId = this->m_nChildPublishedFileId;
    return ret;
}
#endif

#ifdef __i386__
w32_AddUGCDependencyResult_t::operator u32_AddUGCDependencyResult_t() const
{
    u32_AddUGCDependencyResult_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_nChildPublishedFileId = this->m_nChildPublishedFileId;
    return ret;
}

u32_AddUGCDependencyResult_t::operator w32_AddUGCDependencyResult_t() const
{
    w32_AddUGCDependencyResult_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_nChildPublishedFileId = this->m_nChildPublishedFileId;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_CSteamAPIContext_143) >= 184 );
C_ASSERT( offsetof(w64_CSteamAPIContext_143, m_pSteamClient) == 0 );
C_ASSERT( sizeof(w64_CSteamAPIContext_143().m_pSteamClient) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_143, m_pSteamUser) == 8 );
C_ASSERT( sizeof(w64_CSteamAPIContext_143().m_pSteamUser) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_143, m_pSteamFriends) == 16 );
C_ASSERT( sizeof(w64_CSteamAPIContext_143().m_pSteamFriends) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_143, m_pSteamUtils) == 24 );
C_ASSERT( sizeof(w64_CSteamAPIContext_143().m_pSteamUtils) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_143, m_pSteamMatchmaking) == 32 );
C_ASSERT( sizeof(w64_CSteamAPIContext_143().m_pSteamMatchmaking) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_143, m_pSteamGameSearch) == 40 );
C_ASSERT( sizeof(w64_CSteamAPIContext_143().m_pSteamGameSearch) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_143, m_pSteamUserStats) == 48 );
C_ASSERT( sizeof(w64_CSteamAPIContext_143().m_pSteamUserStats) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_143, m_pSteamApps) == 56 );
C_ASSERT( sizeof(w64_CSteamAPIContext_143().m_pSteamApps) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_143, m_pSteamMatchmakingServers) == 64 );
C_ASSERT( sizeof(w64_CSteamAPIContext_143().m_pSteamMatchmakingServers) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_143, m_pSteamNetworking) == 72 );
C_ASSERT( sizeof(w64_CSteamAPIContext_143().m_pSteamNetworking) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_143, m_pSteamRemoteStorage) == 80 );
C_ASSERT( sizeof(w64_CSteamAPIContext_143().m_pSteamRemoteStorage) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_143, m_pSteamScreenshots) == 88 );
C_ASSERT( sizeof(w64_CSteamAPIContext_143().m_pSteamScreenshots) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_143, m_pSteamHTTP) == 96 );
C_ASSERT( sizeof(w64_CSteamAPIContext_143().m_pSteamHTTP) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_143, m_pController) == 104 );
C_ASSERT( sizeof(w64_CSteamAPIContext_143().m_pController) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_143, m_pSteamUGC) == 112 );
C_ASSERT( sizeof(w64_CSteamAPIContext_143().m_pSteamUGC) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_143, m_pSteamAppList) == 120 );
C_ASSERT( sizeof(w64_CSteamAPIContext_143().m_pSteamAppList) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_143, m_pSteamMusic) == 128 );
C_ASSERT( sizeof(w64_CSteamAPIContext_143().m_pSteamMusic) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_143, m_pSteamMusicRemote) == 136 );
C_ASSERT( sizeof(w64_CSteamAPIContext_143().m_pSteamMusicRemote) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_143, m_pSteamHTMLSurface) == 144 );
C_ASSERT( sizeof(w64_CSteamAPIContext_143().m_pSteamHTMLSurface) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_143, m_pSteamInventory) == 152 );
C_ASSERT( sizeof(w64_CSteamAPIContext_143().m_pSteamInventory) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_143, m_pSteamVideo) == 160 );
C_ASSERT( sizeof(w64_CSteamAPIContext_143().m_pSteamVideo) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_143, m_pSteamParentalSettings) == 168 );
C_ASSERT( sizeof(w64_CSteamAPIContext_143().m_pSteamParentalSettings) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_143, m_pSteamInput) == 176 );
C_ASSERT( sizeof(w64_CSteamAPIContext_143().m_pSteamInput) >= 8 );

C_ASSERT( sizeof(u64_CSteamAPIContext_143) >= 184 );
C_ASSERT( offsetof(u64_CSteamAPIContext_143, m_pSteamClient) == 0 );
C_ASSERT( sizeof(u64_CSteamAPIContext_143().m_pSteamClient) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_143, m_pSteamUser) == 8 );
C_ASSERT( sizeof(u64_CSteamAPIContext_143().m_pSteamUser) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_143, m_pSteamFriends) == 16 );
C_ASSERT( sizeof(u64_CSteamAPIContext_143().m_pSteamFriends) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_143, m_pSteamUtils) == 24 );
C_ASSERT( sizeof(u64_CSteamAPIContext_143().m_pSteamUtils) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_143, m_pSteamMatchmaking) == 32 );
C_ASSERT( sizeof(u64_CSteamAPIContext_143().m_pSteamMatchmaking) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_143, m_pSteamGameSearch) == 40 );
C_ASSERT( sizeof(u64_CSteamAPIContext_143().m_pSteamGameSearch) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_143, m_pSteamUserStats) == 48 );
C_ASSERT( sizeof(u64_CSteamAPIContext_143().m_pSteamUserStats) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_143, m_pSteamApps) == 56 );
C_ASSERT( sizeof(u64_CSteamAPIContext_143().m_pSteamApps) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_143, m_pSteamMatchmakingServers) == 64 );
C_ASSERT( sizeof(u64_CSteamAPIContext_143().m_pSteamMatchmakingServers) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_143, m_pSteamNetworking) == 72 );
C_ASSERT( sizeof(u64_CSteamAPIContext_143().m_pSteamNetworking) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_143, m_pSteamRemoteStorage) == 80 );
C_ASSERT( sizeof(u64_CSteamAPIContext_143().m_pSteamRemoteStorage) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_143, m_pSteamScreenshots) == 88 );
C_ASSERT( sizeof(u64_CSteamAPIContext_143().m_pSteamScreenshots) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_143, m_pSteamHTTP) == 96 );
C_ASSERT( sizeof(u64_CSteamAPIContext_143().m_pSteamHTTP) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_143, m_pController) == 104 );
C_ASSERT( sizeof(u64_CSteamAPIContext_143().m_pController) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_143, m_pSteamUGC) == 112 );
C_ASSERT( sizeof(u64_CSteamAPIContext_143().m_pSteamUGC) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_143, m_pSteamAppList) == 120 );
C_ASSERT( sizeof(u64_CSteamAPIContext_143().m_pSteamAppList) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_143, m_pSteamMusic) == 128 );
C_ASSERT( sizeof(u64_CSteamAPIContext_143().m_pSteamMusic) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_143, m_pSteamMusicRemote) == 136 );
C_ASSERT( sizeof(u64_CSteamAPIContext_143().m_pSteamMusicRemote) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_143, m_pSteamHTMLSurface) == 144 );
C_ASSERT( sizeof(u64_CSteamAPIContext_143().m_pSteamHTMLSurface) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_143, m_pSteamInventory) == 152 );
C_ASSERT( sizeof(u64_CSteamAPIContext_143().m_pSteamInventory) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_143, m_pSteamVideo) == 160 );
C_ASSERT( sizeof(u64_CSteamAPIContext_143().m_pSteamVideo) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_143, m_pSteamParentalSettings) == 168 );
C_ASSERT( sizeof(u64_CSteamAPIContext_143().m_pSteamParentalSettings) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_143, m_pSteamInput) == 176 );
C_ASSERT( sizeof(u64_CSteamAPIContext_143().m_pSteamInput) >= 8 );

C_ASSERT( sizeof(w32_CSteamAPIContext_143) >= 92 );
C_ASSERT( offsetof(w32_CSteamAPIContext_143, m_pSteamClient) == 0 );
C_ASSERT( sizeof(w32_CSteamAPIContext_143().m_pSteamClient) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_143, m_pSteamUser) == 4 );
C_ASSERT( sizeof(w32_CSteamAPIContext_143().m_pSteamUser) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_143, m_pSteamFriends) == 8 );
C_ASSERT( sizeof(w32_CSteamAPIContext_143().m_pSteamFriends) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_143, m_pSteamUtils) == 12 );
C_ASSERT( sizeof(w32_CSteamAPIContext_143().m_pSteamUtils) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_143, m_pSteamMatchmaking) == 16 );
C_ASSERT( sizeof(w32_CSteamAPIContext_143().m_pSteamMatchmaking) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_143, m_pSteamGameSearch) == 20 );
C_ASSERT( sizeof(w32_CSteamAPIContext_143().m_pSteamGameSearch) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_143, m_pSteamUserStats) == 24 );
C_ASSERT( sizeof(w32_CSteamAPIContext_143().m_pSteamUserStats) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_143, m_pSteamApps) == 28 );
C_ASSERT( sizeof(w32_CSteamAPIContext_143().m_pSteamApps) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_143, m_pSteamMatchmakingServers) == 32 );
C_ASSERT( sizeof(w32_CSteamAPIContext_143().m_pSteamMatchmakingServers) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_143, m_pSteamNetworking) == 36 );
C_ASSERT( sizeof(w32_CSteamAPIContext_143().m_pSteamNetworking) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_143, m_pSteamRemoteStorage) == 40 );
C_ASSERT( sizeof(w32_CSteamAPIContext_143().m_pSteamRemoteStorage) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_143, m_pSteamScreenshots) == 44 );
C_ASSERT( sizeof(w32_CSteamAPIContext_143().m_pSteamScreenshots) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_143, m_pSteamHTTP) == 48 );
C_ASSERT( sizeof(w32_CSteamAPIContext_143().m_pSteamHTTP) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_143, m_pController) == 52 );
C_ASSERT( sizeof(w32_CSteamAPIContext_143().m_pController) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_143, m_pSteamUGC) == 56 );
C_ASSERT( sizeof(w32_CSteamAPIContext_143().m_pSteamUGC) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_143, m_pSteamAppList) == 60 );
C_ASSERT( sizeof(w32_CSteamAPIContext_143().m_pSteamAppList) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_143, m_pSteamMusic) == 64 );
C_ASSERT( sizeof(w32_CSteamAPIContext_143().m_pSteamMusic) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_143, m_pSteamMusicRemote) == 68 );
C_ASSERT( sizeof(w32_CSteamAPIContext_143().m_pSteamMusicRemote) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_143, m_pSteamHTMLSurface) == 72 );
C_ASSERT( sizeof(w32_CSteamAPIContext_143().m_pSteamHTMLSurface) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_143, m_pSteamInventory) == 76 );
C_ASSERT( sizeof(w32_CSteamAPIContext_143().m_pSteamInventory) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_143, m_pSteamVideo) == 80 );
C_ASSERT( sizeof(w32_CSteamAPIContext_143().m_pSteamVideo) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_143, m_pSteamParentalSettings) == 84 );
C_ASSERT( sizeof(w32_CSteamAPIContext_143().m_pSteamParentalSettings) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_143, m_pSteamInput) == 88 );
C_ASSERT( sizeof(w32_CSteamAPIContext_143().m_pSteamInput) >= 4 );

C_ASSERT( sizeof(u32_CSteamAPIContext_143) >= 92 );
C_ASSERT( offsetof(u32_CSteamAPIContext_143, m_pSteamClient) == 0 );
C_ASSERT( sizeof(u32_CSteamAPIContext_143().m_pSteamClient) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_143, m_pSteamUser) == 4 );
C_ASSERT( sizeof(u32_CSteamAPIContext_143().m_pSteamUser) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_143, m_pSteamFriends) == 8 );
C_ASSERT( sizeof(u32_CSteamAPIContext_143().m_pSteamFriends) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_143, m_pSteamUtils) == 12 );
C_ASSERT( sizeof(u32_CSteamAPIContext_143().m_pSteamUtils) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_143, m_pSteamMatchmaking) == 16 );
C_ASSERT( sizeof(u32_CSteamAPIContext_143().m_pSteamMatchmaking) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_143, m_pSteamGameSearch) == 20 );
C_ASSERT( sizeof(u32_CSteamAPIContext_143().m_pSteamGameSearch) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_143, m_pSteamUserStats) == 24 );
C_ASSERT( sizeof(u32_CSteamAPIContext_143().m_pSteamUserStats) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_143, m_pSteamApps) == 28 );
C_ASSERT( sizeof(u32_CSteamAPIContext_143().m_pSteamApps) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_143, m_pSteamMatchmakingServers) == 32 );
C_ASSERT( sizeof(u32_CSteamAPIContext_143().m_pSteamMatchmakingServers) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_143, m_pSteamNetworking) == 36 );
C_ASSERT( sizeof(u32_CSteamAPIContext_143().m_pSteamNetworking) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_143, m_pSteamRemoteStorage) == 40 );
C_ASSERT( sizeof(u32_CSteamAPIContext_143().m_pSteamRemoteStorage) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_143, m_pSteamScreenshots) == 44 );
C_ASSERT( sizeof(u32_CSteamAPIContext_143().m_pSteamScreenshots) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_143, m_pSteamHTTP) == 48 );
C_ASSERT( sizeof(u32_CSteamAPIContext_143().m_pSteamHTTP) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_143, m_pController) == 52 );
C_ASSERT( sizeof(u32_CSteamAPIContext_143().m_pController) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_143, m_pSteamUGC) == 56 );
C_ASSERT( sizeof(u32_CSteamAPIContext_143().m_pSteamUGC) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_143, m_pSteamAppList) == 60 );
C_ASSERT( sizeof(u32_CSteamAPIContext_143().m_pSteamAppList) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_143, m_pSteamMusic) == 64 );
C_ASSERT( sizeof(u32_CSteamAPIContext_143().m_pSteamMusic) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_143, m_pSteamMusicRemote) == 68 );
C_ASSERT( sizeof(u32_CSteamAPIContext_143().m_pSteamMusicRemote) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_143, m_pSteamHTMLSurface) == 72 );
C_ASSERT( sizeof(u32_CSteamAPIContext_143().m_pSteamHTMLSurface) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_143, m_pSteamInventory) == 76 );
C_ASSERT( sizeof(u32_CSteamAPIContext_143().m_pSteamInventory) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_143, m_pSteamVideo) == 80 );
C_ASSERT( sizeof(u32_CSteamAPIContext_143().m_pSteamVideo) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_143, m_pSteamParentalSettings) == 84 );
C_ASSERT( sizeof(u32_CSteamAPIContext_143().m_pSteamParentalSettings) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_143, m_pSteamInput) == 88 );
C_ASSERT( sizeof(u32_CSteamAPIContext_143().m_pSteamInput) >= 4 );

C_ASSERT( sizeof(w64_CSteamAPIContext_145) >= 192 );
C_ASSERT( offsetof(w64_CSteamAPIContext_145, m_pSteamClient) == 0 );
C_ASSERT( sizeof(w64_CSteamAPIContext_145().m_pSteamClient) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_145, m_pSteamUser) == 8 );
C_ASSERT( sizeof(w64_CSteamAPIContext_145().m_pSteamUser) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_145, m_pSteamFriends) == 16 );
C_ASSERT( sizeof(w64_CSteamAPIContext_145().m_pSteamFriends) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_145, m_pSteamUtils) == 24 );
C_ASSERT( sizeof(w64_CSteamAPIContext_145().m_pSteamUtils) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_145, m_pSteamMatchmaking) == 32 );
C_ASSERT( sizeof(w64_CSteamAPIContext_145().m_pSteamMatchmaking) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_145, m_pSteamGameSearch) == 40 );
C_ASSERT( sizeof(w64_CSteamAPIContext_145().m_pSteamGameSearch) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_145, m_pSteamUserStats) == 48 );
C_ASSERT( sizeof(w64_CSteamAPIContext_145().m_pSteamUserStats) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_145, m_pSteamApps) == 56 );
C_ASSERT( sizeof(w64_CSteamAPIContext_145().m_pSteamApps) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_145, m_pSteamMatchmakingServers) == 64 );
C_ASSERT( sizeof(w64_CSteamAPIContext_145().m_pSteamMatchmakingServers) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_145, m_pSteamNetworking) == 72 );
C_ASSERT( sizeof(w64_CSteamAPIContext_145().m_pSteamNetworking) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_145, m_pSteamRemoteStorage) == 80 );
C_ASSERT( sizeof(w64_CSteamAPIContext_145().m_pSteamRemoteStorage) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_145, m_pSteamScreenshots) == 88 );
C_ASSERT( sizeof(w64_CSteamAPIContext_145().m_pSteamScreenshots) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_145, m_pSteamHTTP) == 96 );
C_ASSERT( sizeof(w64_CSteamAPIContext_145().m_pSteamHTTP) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_145, m_pController) == 104 );
C_ASSERT( sizeof(w64_CSteamAPIContext_145().m_pController) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_145, m_pSteamUGC) == 112 );
C_ASSERT( sizeof(w64_CSteamAPIContext_145().m_pSteamUGC) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_145, m_pSteamAppList) == 120 );
C_ASSERT( sizeof(w64_CSteamAPIContext_145().m_pSteamAppList) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_145, m_pSteamMusic) == 128 );
C_ASSERT( sizeof(w64_CSteamAPIContext_145().m_pSteamMusic) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_145, m_pSteamMusicRemote) == 136 );
C_ASSERT( sizeof(w64_CSteamAPIContext_145().m_pSteamMusicRemote) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_145, m_pSteamHTMLSurface) == 144 );
C_ASSERT( sizeof(w64_CSteamAPIContext_145().m_pSteamHTMLSurface) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_145, m_pSteamInventory) == 152 );
C_ASSERT( sizeof(w64_CSteamAPIContext_145().m_pSteamInventory) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_145, m_pSteamVideo) == 160 );
C_ASSERT( sizeof(w64_CSteamAPIContext_145().m_pSteamVideo) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_145, m_pSteamTV) == 168 );
C_ASSERT( sizeof(w64_CSteamAPIContext_145().m_pSteamTV) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_145, m_pSteamParentalSettings) == 176 );
C_ASSERT( sizeof(w64_CSteamAPIContext_145().m_pSteamParentalSettings) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_145, m_pSteamInput) == 184 );
C_ASSERT( sizeof(w64_CSteamAPIContext_145().m_pSteamInput) >= 8 );

C_ASSERT( sizeof(u64_CSteamAPIContext_145) >= 192 );
C_ASSERT( offsetof(u64_CSteamAPIContext_145, m_pSteamClient) == 0 );
C_ASSERT( sizeof(u64_CSteamAPIContext_145().m_pSteamClient) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_145, m_pSteamUser) == 8 );
C_ASSERT( sizeof(u64_CSteamAPIContext_145().m_pSteamUser) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_145, m_pSteamFriends) == 16 );
C_ASSERT( sizeof(u64_CSteamAPIContext_145().m_pSteamFriends) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_145, m_pSteamUtils) == 24 );
C_ASSERT( sizeof(u64_CSteamAPIContext_145().m_pSteamUtils) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_145, m_pSteamMatchmaking) == 32 );
C_ASSERT( sizeof(u64_CSteamAPIContext_145().m_pSteamMatchmaking) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_145, m_pSteamGameSearch) == 40 );
C_ASSERT( sizeof(u64_CSteamAPIContext_145().m_pSteamGameSearch) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_145, m_pSteamUserStats) == 48 );
C_ASSERT( sizeof(u64_CSteamAPIContext_145().m_pSteamUserStats) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_145, m_pSteamApps) == 56 );
C_ASSERT( sizeof(u64_CSteamAPIContext_145().m_pSteamApps) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_145, m_pSteamMatchmakingServers) == 64 );
C_ASSERT( sizeof(u64_CSteamAPIContext_145().m_pSteamMatchmakingServers) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_145, m_pSteamNetworking) == 72 );
C_ASSERT( sizeof(u64_CSteamAPIContext_145().m_pSteamNetworking) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_145, m_pSteamRemoteStorage) == 80 );
C_ASSERT( sizeof(u64_CSteamAPIContext_145().m_pSteamRemoteStorage) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_145, m_pSteamScreenshots) == 88 );
C_ASSERT( sizeof(u64_CSteamAPIContext_145().m_pSteamScreenshots) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_145, m_pSteamHTTP) == 96 );
C_ASSERT( sizeof(u64_CSteamAPIContext_145().m_pSteamHTTP) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_145, m_pController) == 104 );
C_ASSERT( sizeof(u64_CSteamAPIContext_145().m_pController) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_145, m_pSteamUGC) == 112 );
C_ASSERT( sizeof(u64_CSteamAPIContext_145().m_pSteamUGC) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_145, m_pSteamAppList) == 120 );
C_ASSERT( sizeof(u64_CSteamAPIContext_145().m_pSteamAppList) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_145, m_pSteamMusic) == 128 );
C_ASSERT( sizeof(u64_CSteamAPIContext_145().m_pSteamMusic) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_145, m_pSteamMusicRemote) == 136 );
C_ASSERT( sizeof(u64_CSteamAPIContext_145().m_pSteamMusicRemote) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_145, m_pSteamHTMLSurface) == 144 );
C_ASSERT( sizeof(u64_CSteamAPIContext_145().m_pSteamHTMLSurface) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_145, m_pSteamInventory) == 152 );
C_ASSERT( sizeof(u64_CSteamAPIContext_145().m_pSteamInventory) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_145, m_pSteamVideo) == 160 );
C_ASSERT( sizeof(u64_CSteamAPIContext_145().m_pSteamVideo) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_145, m_pSteamTV) == 168 );
C_ASSERT( sizeof(u64_CSteamAPIContext_145().m_pSteamTV) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_145, m_pSteamParentalSettings) == 176 );
C_ASSERT( sizeof(u64_CSteamAPIContext_145().m_pSteamParentalSettings) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_145, m_pSteamInput) == 184 );
C_ASSERT( sizeof(u64_CSteamAPIContext_145().m_pSteamInput) >= 8 );

C_ASSERT( sizeof(w32_CSteamAPIContext_145) >= 96 );
C_ASSERT( offsetof(w32_CSteamAPIContext_145, m_pSteamClient) == 0 );
C_ASSERT( sizeof(w32_CSteamAPIContext_145().m_pSteamClient) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_145, m_pSteamUser) == 4 );
C_ASSERT( sizeof(w32_CSteamAPIContext_145().m_pSteamUser) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_145, m_pSteamFriends) == 8 );
C_ASSERT( sizeof(w32_CSteamAPIContext_145().m_pSteamFriends) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_145, m_pSteamUtils) == 12 );
C_ASSERT( sizeof(w32_CSteamAPIContext_145().m_pSteamUtils) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_145, m_pSteamMatchmaking) == 16 );
C_ASSERT( sizeof(w32_CSteamAPIContext_145().m_pSteamMatchmaking) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_145, m_pSteamGameSearch) == 20 );
C_ASSERT( sizeof(w32_CSteamAPIContext_145().m_pSteamGameSearch) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_145, m_pSteamUserStats) == 24 );
C_ASSERT( sizeof(w32_CSteamAPIContext_145().m_pSteamUserStats) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_145, m_pSteamApps) == 28 );
C_ASSERT( sizeof(w32_CSteamAPIContext_145().m_pSteamApps) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_145, m_pSteamMatchmakingServers) == 32 );
C_ASSERT( sizeof(w32_CSteamAPIContext_145().m_pSteamMatchmakingServers) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_145, m_pSteamNetworking) == 36 );
C_ASSERT( sizeof(w32_CSteamAPIContext_145().m_pSteamNetworking) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_145, m_pSteamRemoteStorage) == 40 );
C_ASSERT( sizeof(w32_CSteamAPIContext_145().m_pSteamRemoteStorage) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_145, m_pSteamScreenshots) == 44 );
C_ASSERT( sizeof(w32_CSteamAPIContext_145().m_pSteamScreenshots) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_145, m_pSteamHTTP) == 48 );
C_ASSERT( sizeof(w32_CSteamAPIContext_145().m_pSteamHTTP) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_145, m_pController) == 52 );
C_ASSERT( sizeof(w32_CSteamAPIContext_145().m_pController) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_145, m_pSteamUGC) == 56 );
C_ASSERT( sizeof(w32_CSteamAPIContext_145().m_pSteamUGC) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_145, m_pSteamAppList) == 60 );
C_ASSERT( sizeof(w32_CSteamAPIContext_145().m_pSteamAppList) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_145, m_pSteamMusic) == 64 );
C_ASSERT( sizeof(w32_CSteamAPIContext_145().m_pSteamMusic) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_145, m_pSteamMusicRemote) == 68 );
C_ASSERT( sizeof(w32_CSteamAPIContext_145().m_pSteamMusicRemote) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_145, m_pSteamHTMLSurface) == 72 );
C_ASSERT( sizeof(w32_CSteamAPIContext_145().m_pSteamHTMLSurface) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_145, m_pSteamInventory) == 76 );
C_ASSERT( sizeof(w32_CSteamAPIContext_145().m_pSteamInventory) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_145, m_pSteamVideo) == 80 );
C_ASSERT( sizeof(w32_CSteamAPIContext_145().m_pSteamVideo) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_145, m_pSteamTV) == 84 );
C_ASSERT( sizeof(w32_CSteamAPIContext_145().m_pSteamTV) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_145, m_pSteamParentalSettings) == 88 );
C_ASSERT( sizeof(w32_CSteamAPIContext_145().m_pSteamParentalSettings) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_145, m_pSteamInput) == 92 );
C_ASSERT( sizeof(w32_CSteamAPIContext_145().m_pSteamInput) >= 4 );

C_ASSERT( sizeof(u32_CSteamAPIContext_145) >= 96 );
C_ASSERT( offsetof(u32_CSteamAPIContext_145, m_pSteamClient) == 0 );
C_ASSERT( sizeof(u32_CSteamAPIContext_145().m_pSteamClient) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_145, m_pSteamUser) == 4 );
C_ASSERT( sizeof(u32_CSteamAPIContext_145().m_pSteamUser) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_145, m_pSteamFriends) == 8 );
C_ASSERT( sizeof(u32_CSteamAPIContext_145().m_pSteamFriends) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_145, m_pSteamUtils) == 12 );
C_ASSERT( sizeof(u32_CSteamAPIContext_145().m_pSteamUtils) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_145, m_pSteamMatchmaking) == 16 );
C_ASSERT( sizeof(u32_CSteamAPIContext_145().m_pSteamMatchmaking) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_145, m_pSteamGameSearch) == 20 );
C_ASSERT( sizeof(u32_CSteamAPIContext_145().m_pSteamGameSearch) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_145, m_pSteamUserStats) == 24 );
C_ASSERT( sizeof(u32_CSteamAPIContext_145().m_pSteamUserStats) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_145, m_pSteamApps) == 28 );
C_ASSERT( sizeof(u32_CSteamAPIContext_145().m_pSteamApps) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_145, m_pSteamMatchmakingServers) == 32 );
C_ASSERT( sizeof(u32_CSteamAPIContext_145().m_pSteamMatchmakingServers) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_145, m_pSteamNetworking) == 36 );
C_ASSERT( sizeof(u32_CSteamAPIContext_145().m_pSteamNetworking) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_145, m_pSteamRemoteStorage) == 40 );
C_ASSERT( sizeof(u32_CSteamAPIContext_145().m_pSteamRemoteStorage) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_145, m_pSteamScreenshots) == 44 );
C_ASSERT( sizeof(u32_CSteamAPIContext_145().m_pSteamScreenshots) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_145, m_pSteamHTTP) == 48 );
C_ASSERT( sizeof(u32_CSteamAPIContext_145().m_pSteamHTTP) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_145, m_pController) == 52 );
C_ASSERT( sizeof(u32_CSteamAPIContext_145().m_pController) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_145, m_pSteamUGC) == 56 );
C_ASSERT( sizeof(u32_CSteamAPIContext_145().m_pSteamUGC) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_145, m_pSteamAppList) == 60 );
C_ASSERT( sizeof(u32_CSteamAPIContext_145().m_pSteamAppList) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_145, m_pSteamMusic) == 64 );
C_ASSERT( sizeof(u32_CSteamAPIContext_145().m_pSteamMusic) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_145, m_pSteamMusicRemote) == 68 );
C_ASSERT( sizeof(u32_CSteamAPIContext_145().m_pSteamMusicRemote) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_145, m_pSteamHTMLSurface) == 72 );
C_ASSERT( sizeof(u32_CSteamAPIContext_145().m_pSteamHTMLSurface) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_145, m_pSteamInventory) == 76 );
C_ASSERT( sizeof(u32_CSteamAPIContext_145().m_pSteamInventory) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_145, m_pSteamVideo) == 80 );
C_ASSERT( sizeof(u32_CSteamAPIContext_145().m_pSteamVideo) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_145, m_pSteamTV) == 84 );
C_ASSERT( sizeof(u32_CSteamAPIContext_145().m_pSteamTV) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_145, m_pSteamParentalSettings) == 88 );
C_ASSERT( sizeof(u32_CSteamAPIContext_145().m_pSteamParentalSettings) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_145, m_pSteamInput) == 92 );
C_ASSERT( sizeof(u32_CSteamAPIContext_145().m_pSteamInput) >= 4 );

C_ASSERT( sizeof(w64_CSteamAPIContext_137) >= 168 );
C_ASSERT( offsetof(w64_CSteamAPIContext_137, m_pSteamClient) == 0 );
C_ASSERT( sizeof(w64_CSteamAPIContext_137().m_pSteamClient) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_137, m_pSteamUser) == 8 );
C_ASSERT( sizeof(w64_CSteamAPIContext_137().m_pSteamUser) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_137, m_pSteamFriends) == 16 );
C_ASSERT( sizeof(w64_CSteamAPIContext_137().m_pSteamFriends) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_137, m_pSteamUtils) == 24 );
C_ASSERT( sizeof(w64_CSteamAPIContext_137().m_pSteamUtils) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_137, m_pSteamMatchmaking) == 32 );
C_ASSERT( sizeof(w64_CSteamAPIContext_137().m_pSteamMatchmaking) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_137, m_pSteamUserStats) == 40 );
C_ASSERT( sizeof(w64_CSteamAPIContext_137().m_pSteamUserStats) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_137, m_pSteamApps) == 48 );
C_ASSERT( sizeof(w64_CSteamAPIContext_137().m_pSteamApps) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_137, m_pSteamMatchmakingServers) == 56 );
C_ASSERT( sizeof(w64_CSteamAPIContext_137().m_pSteamMatchmakingServers) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_137, m_pSteamNetworking) == 64 );
C_ASSERT( sizeof(w64_CSteamAPIContext_137().m_pSteamNetworking) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_137, m_pSteamRemoteStorage) == 72 );
C_ASSERT( sizeof(w64_CSteamAPIContext_137().m_pSteamRemoteStorage) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_137, m_pSteamScreenshots) == 80 );
C_ASSERT( sizeof(w64_CSteamAPIContext_137().m_pSteamScreenshots) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_137, m_pSteamHTTP) == 88 );
C_ASSERT( sizeof(w64_CSteamAPIContext_137().m_pSteamHTTP) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_137, m_pController) == 96 );
C_ASSERT( sizeof(w64_CSteamAPIContext_137().m_pController) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_137, m_pSteamUGC) == 104 );
C_ASSERT( sizeof(w64_CSteamAPIContext_137().m_pSteamUGC) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_137, m_pSteamAppList) == 112 );
C_ASSERT( sizeof(w64_CSteamAPIContext_137().m_pSteamAppList) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_137, m_pSteamMusic) == 120 );
C_ASSERT( sizeof(w64_CSteamAPIContext_137().m_pSteamMusic) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_137, m_pSteamMusicRemote) == 128 );
C_ASSERT( sizeof(w64_CSteamAPIContext_137().m_pSteamMusicRemote) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_137, m_pSteamHTMLSurface) == 136 );
C_ASSERT( sizeof(w64_CSteamAPIContext_137().m_pSteamHTMLSurface) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_137, m_pSteamInventory) == 144 );
C_ASSERT( sizeof(w64_CSteamAPIContext_137().m_pSteamInventory) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_137, m_pSteamVideo) == 152 );
C_ASSERT( sizeof(w64_CSteamAPIContext_137().m_pSteamVideo) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_137, m_pSteamParentalSettings) == 160 );
C_ASSERT( sizeof(w64_CSteamAPIContext_137().m_pSteamParentalSettings) >= 8 );

C_ASSERT( sizeof(u64_CSteamAPIContext_137) >= 168 );
C_ASSERT( offsetof(u64_CSteamAPIContext_137, m_pSteamClient) == 0 );
C_ASSERT( sizeof(u64_CSteamAPIContext_137().m_pSteamClient) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_137, m_pSteamUser) == 8 );
C_ASSERT( sizeof(u64_CSteamAPIContext_137().m_pSteamUser) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_137, m_pSteamFriends) == 16 );
C_ASSERT( sizeof(u64_CSteamAPIContext_137().m_pSteamFriends) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_137, m_pSteamUtils) == 24 );
C_ASSERT( sizeof(u64_CSteamAPIContext_137().m_pSteamUtils) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_137, m_pSteamMatchmaking) == 32 );
C_ASSERT( sizeof(u64_CSteamAPIContext_137().m_pSteamMatchmaking) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_137, m_pSteamUserStats) == 40 );
C_ASSERT( sizeof(u64_CSteamAPIContext_137().m_pSteamUserStats) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_137, m_pSteamApps) == 48 );
C_ASSERT( sizeof(u64_CSteamAPIContext_137().m_pSteamApps) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_137, m_pSteamMatchmakingServers) == 56 );
C_ASSERT( sizeof(u64_CSteamAPIContext_137().m_pSteamMatchmakingServers) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_137, m_pSteamNetworking) == 64 );
C_ASSERT( sizeof(u64_CSteamAPIContext_137().m_pSteamNetworking) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_137, m_pSteamRemoteStorage) == 72 );
C_ASSERT( sizeof(u64_CSteamAPIContext_137().m_pSteamRemoteStorage) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_137, m_pSteamScreenshots) == 80 );
C_ASSERT( sizeof(u64_CSteamAPIContext_137().m_pSteamScreenshots) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_137, m_pSteamHTTP) == 88 );
C_ASSERT( sizeof(u64_CSteamAPIContext_137().m_pSteamHTTP) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_137, m_pController) == 96 );
C_ASSERT( sizeof(u64_CSteamAPIContext_137().m_pController) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_137, m_pSteamUGC) == 104 );
C_ASSERT( sizeof(u64_CSteamAPIContext_137().m_pSteamUGC) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_137, m_pSteamAppList) == 112 );
C_ASSERT( sizeof(u64_CSteamAPIContext_137().m_pSteamAppList) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_137, m_pSteamMusic) == 120 );
C_ASSERT( sizeof(u64_CSteamAPIContext_137().m_pSteamMusic) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_137, m_pSteamMusicRemote) == 128 );
C_ASSERT( sizeof(u64_CSteamAPIContext_137().m_pSteamMusicRemote) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_137, m_pSteamHTMLSurface) == 136 );
C_ASSERT( sizeof(u64_CSteamAPIContext_137().m_pSteamHTMLSurface) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_137, m_pSteamInventory) == 144 );
C_ASSERT( sizeof(u64_CSteamAPIContext_137().m_pSteamInventory) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_137, m_pSteamVideo) == 152 );
C_ASSERT( sizeof(u64_CSteamAPIContext_137().m_pSteamVideo) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_137, m_pSteamParentalSettings) == 160 );
C_ASSERT( sizeof(u64_CSteamAPIContext_137().m_pSteamParentalSettings) >= 8 );

C_ASSERT( sizeof(w32_CSteamAPIContext_137) >= 84 );
C_ASSERT( offsetof(w32_CSteamAPIContext_137, m_pSteamClient) == 0 );
C_ASSERT( sizeof(w32_CSteamAPIContext_137().m_pSteamClient) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_137, m_pSteamUser) == 4 );
C_ASSERT( sizeof(w32_CSteamAPIContext_137().m_pSteamUser) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_137, m_pSteamFriends) == 8 );
C_ASSERT( sizeof(w32_CSteamAPIContext_137().m_pSteamFriends) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_137, m_pSteamUtils) == 12 );
C_ASSERT( sizeof(w32_CSteamAPIContext_137().m_pSteamUtils) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_137, m_pSteamMatchmaking) == 16 );
C_ASSERT( sizeof(w32_CSteamAPIContext_137().m_pSteamMatchmaking) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_137, m_pSteamUserStats) == 20 );
C_ASSERT( sizeof(w32_CSteamAPIContext_137().m_pSteamUserStats) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_137, m_pSteamApps) == 24 );
C_ASSERT( sizeof(w32_CSteamAPIContext_137().m_pSteamApps) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_137, m_pSteamMatchmakingServers) == 28 );
C_ASSERT( sizeof(w32_CSteamAPIContext_137().m_pSteamMatchmakingServers) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_137, m_pSteamNetworking) == 32 );
C_ASSERT( sizeof(w32_CSteamAPIContext_137().m_pSteamNetworking) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_137, m_pSteamRemoteStorage) == 36 );
C_ASSERT( sizeof(w32_CSteamAPIContext_137().m_pSteamRemoteStorage) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_137, m_pSteamScreenshots) == 40 );
C_ASSERT( sizeof(w32_CSteamAPIContext_137().m_pSteamScreenshots) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_137, m_pSteamHTTP) == 44 );
C_ASSERT( sizeof(w32_CSteamAPIContext_137().m_pSteamHTTP) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_137, m_pController) == 48 );
C_ASSERT( sizeof(w32_CSteamAPIContext_137().m_pController) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_137, m_pSteamUGC) == 52 );
C_ASSERT( sizeof(w32_CSteamAPIContext_137().m_pSteamUGC) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_137, m_pSteamAppList) == 56 );
C_ASSERT( sizeof(w32_CSteamAPIContext_137().m_pSteamAppList) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_137, m_pSteamMusic) == 60 );
C_ASSERT( sizeof(w32_CSteamAPIContext_137().m_pSteamMusic) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_137, m_pSteamMusicRemote) == 64 );
C_ASSERT( sizeof(w32_CSteamAPIContext_137().m_pSteamMusicRemote) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_137, m_pSteamHTMLSurface) == 68 );
C_ASSERT( sizeof(w32_CSteamAPIContext_137().m_pSteamHTMLSurface) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_137, m_pSteamInventory) == 72 );
C_ASSERT( sizeof(w32_CSteamAPIContext_137().m_pSteamInventory) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_137, m_pSteamVideo) == 76 );
C_ASSERT( sizeof(w32_CSteamAPIContext_137().m_pSteamVideo) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_137, m_pSteamParentalSettings) == 80 );
C_ASSERT( sizeof(w32_CSteamAPIContext_137().m_pSteamParentalSettings) >= 4 );

C_ASSERT( sizeof(u32_CSteamAPIContext_137) >= 84 );
C_ASSERT( offsetof(u32_CSteamAPIContext_137, m_pSteamClient) == 0 );
C_ASSERT( sizeof(u32_CSteamAPIContext_137().m_pSteamClient) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_137, m_pSteamUser) == 4 );
C_ASSERT( sizeof(u32_CSteamAPIContext_137().m_pSteamUser) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_137, m_pSteamFriends) == 8 );
C_ASSERT( sizeof(u32_CSteamAPIContext_137().m_pSteamFriends) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_137, m_pSteamUtils) == 12 );
C_ASSERT( sizeof(u32_CSteamAPIContext_137().m_pSteamUtils) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_137, m_pSteamMatchmaking) == 16 );
C_ASSERT( sizeof(u32_CSteamAPIContext_137().m_pSteamMatchmaking) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_137, m_pSteamUserStats) == 20 );
C_ASSERT( sizeof(u32_CSteamAPIContext_137().m_pSteamUserStats) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_137, m_pSteamApps) == 24 );
C_ASSERT( sizeof(u32_CSteamAPIContext_137().m_pSteamApps) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_137, m_pSteamMatchmakingServers) == 28 );
C_ASSERT( sizeof(u32_CSteamAPIContext_137().m_pSteamMatchmakingServers) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_137, m_pSteamNetworking) == 32 );
C_ASSERT( sizeof(u32_CSteamAPIContext_137().m_pSteamNetworking) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_137, m_pSteamRemoteStorage) == 36 );
C_ASSERT( sizeof(u32_CSteamAPIContext_137().m_pSteamRemoteStorage) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_137, m_pSteamScreenshots) == 40 );
C_ASSERT( sizeof(u32_CSteamAPIContext_137().m_pSteamScreenshots) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_137, m_pSteamHTTP) == 44 );
C_ASSERT( sizeof(u32_CSteamAPIContext_137().m_pSteamHTTP) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_137, m_pController) == 48 );
C_ASSERT( sizeof(u32_CSteamAPIContext_137().m_pController) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_137, m_pSteamUGC) == 52 );
C_ASSERT( sizeof(u32_CSteamAPIContext_137().m_pSteamUGC) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_137, m_pSteamAppList) == 56 );
C_ASSERT( sizeof(u32_CSteamAPIContext_137().m_pSteamAppList) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_137, m_pSteamMusic) == 60 );
C_ASSERT( sizeof(u32_CSteamAPIContext_137().m_pSteamMusic) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_137, m_pSteamMusicRemote) == 64 );
C_ASSERT( sizeof(u32_CSteamAPIContext_137().m_pSteamMusicRemote) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_137, m_pSteamHTMLSurface) == 68 );
C_ASSERT( sizeof(u32_CSteamAPIContext_137().m_pSteamHTMLSurface) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_137, m_pSteamInventory) == 72 );
C_ASSERT( sizeof(u32_CSteamAPIContext_137().m_pSteamInventory) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_137, m_pSteamVideo) == 76 );
C_ASSERT( sizeof(u32_CSteamAPIContext_137().m_pSteamVideo) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_137, m_pSteamParentalSettings) == 80 );
C_ASSERT( sizeof(u32_CSteamAPIContext_137().m_pSteamParentalSettings) >= 4 );

C_ASSERT( sizeof(w64_CSteamAPIContext_141) >= 176 );
C_ASSERT( offsetof(w64_CSteamAPIContext_141, m_pSteamClient) == 0 );
C_ASSERT( sizeof(w64_CSteamAPIContext_141().m_pSteamClient) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_141, m_pSteamUser) == 8 );
C_ASSERT( sizeof(w64_CSteamAPIContext_141().m_pSteamUser) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_141, m_pSteamFriends) == 16 );
C_ASSERT( sizeof(w64_CSteamAPIContext_141().m_pSteamFriends) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_141, m_pSteamUtils) == 24 );
C_ASSERT( sizeof(w64_CSteamAPIContext_141().m_pSteamUtils) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_141, m_pSteamMatchmaking) == 32 );
C_ASSERT( sizeof(w64_CSteamAPIContext_141().m_pSteamMatchmaking) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_141, m_pSteamUserStats) == 40 );
C_ASSERT( sizeof(w64_CSteamAPIContext_141().m_pSteamUserStats) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_141, m_pSteamApps) == 48 );
C_ASSERT( sizeof(w64_CSteamAPIContext_141().m_pSteamApps) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_141, m_pSteamMatchmakingServers) == 56 );
C_ASSERT( sizeof(w64_CSteamAPIContext_141().m_pSteamMatchmakingServers) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_141, m_pSteamNetworking) == 64 );
C_ASSERT( sizeof(w64_CSteamAPIContext_141().m_pSteamNetworking) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_141, m_pSteamRemoteStorage) == 72 );
C_ASSERT( sizeof(w64_CSteamAPIContext_141().m_pSteamRemoteStorage) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_141, m_pSteamScreenshots) == 80 );
C_ASSERT( sizeof(w64_CSteamAPIContext_141().m_pSteamScreenshots) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_141, m_pSteamHTTP) == 88 );
C_ASSERT( sizeof(w64_CSteamAPIContext_141().m_pSteamHTTP) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_141, m_pSteamUnifiedMessages) == 96 );
C_ASSERT( sizeof(w64_CSteamAPIContext_141().m_pSteamUnifiedMessages) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_141, m_pController) == 104 );
C_ASSERT( sizeof(w64_CSteamAPIContext_141().m_pController) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_141, m_pSteamUGC) == 112 );
C_ASSERT( sizeof(w64_CSteamAPIContext_141().m_pSteamUGC) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_141, m_pSteamAppList) == 120 );
C_ASSERT( sizeof(w64_CSteamAPIContext_141().m_pSteamAppList) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_141, m_pSteamMusic) == 128 );
C_ASSERT( sizeof(w64_CSteamAPIContext_141().m_pSteamMusic) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_141, m_pSteamMusicRemote) == 136 );
C_ASSERT( sizeof(w64_CSteamAPIContext_141().m_pSteamMusicRemote) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_141, m_pSteamHTMLSurface) == 144 );
C_ASSERT( sizeof(w64_CSteamAPIContext_141().m_pSteamHTMLSurface) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_141, m_pSteamInventory) == 152 );
C_ASSERT( sizeof(w64_CSteamAPIContext_141().m_pSteamInventory) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_141, m_pSteamVideo) == 160 );
C_ASSERT( sizeof(w64_CSteamAPIContext_141().m_pSteamVideo) >= 8 );
C_ASSERT( offsetof(w64_CSteamAPIContext_141, m_pSteamParentalSettings) == 168 );
C_ASSERT( sizeof(w64_CSteamAPIContext_141().m_pSteamParentalSettings) >= 8 );

C_ASSERT( sizeof(u64_CSteamAPIContext_141) >= 176 );
C_ASSERT( offsetof(u64_CSteamAPIContext_141, m_pSteamClient) == 0 );
C_ASSERT( sizeof(u64_CSteamAPIContext_141().m_pSteamClient) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_141, m_pSteamUser) == 8 );
C_ASSERT( sizeof(u64_CSteamAPIContext_141().m_pSteamUser) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_141, m_pSteamFriends) == 16 );
C_ASSERT( sizeof(u64_CSteamAPIContext_141().m_pSteamFriends) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_141, m_pSteamUtils) == 24 );
C_ASSERT( sizeof(u64_CSteamAPIContext_141().m_pSteamUtils) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_141, m_pSteamMatchmaking) == 32 );
C_ASSERT( sizeof(u64_CSteamAPIContext_141().m_pSteamMatchmaking) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_141, m_pSteamUserStats) == 40 );
C_ASSERT( sizeof(u64_CSteamAPIContext_141().m_pSteamUserStats) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_141, m_pSteamApps) == 48 );
C_ASSERT( sizeof(u64_CSteamAPIContext_141().m_pSteamApps) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_141, m_pSteamMatchmakingServers) == 56 );
C_ASSERT( sizeof(u64_CSteamAPIContext_141().m_pSteamMatchmakingServers) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_141, m_pSteamNetworking) == 64 );
C_ASSERT( sizeof(u64_CSteamAPIContext_141().m_pSteamNetworking) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_141, m_pSteamRemoteStorage) == 72 );
C_ASSERT( sizeof(u64_CSteamAPIContext_141().m_pSteamRemoteStorage) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_141, m_pSteamScreenshots) == 80 );
C_ASSERT( sizeof(u64_CSteamAPIContext_141().m_pSteamScreenshots) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_141, m_pSteamHTTP) == 88 );
C_ASSERT( sizeof(u64_CSteamAPIContext_141().m_pSteamHTTP) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_141, m_pSteamUnifiedMessages) == 96 );
C_ASSERT( sizeof(u64_CSteamAPIContext_141().m_pSteamUnifiedMessages) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_141, m_pController) == 104 );
C_ASSERT( sizeof(u64_CSteamAPIContext_141().m_pController) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_141, m_pSteamUGC) == 112 );
C_ASSERT( sizeof(u64_CSteamAPIContext_141().m_pSteamUGC) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_141, m_pSteamAppList) == 120 );
C_ASSERT( sizeof(u64_CSteamAPIContext_141().m_pSteamAppList) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_141, m_pSteamMusic) == 128 );
C_ASSERT( sizeof(u64_CSteamAPIContext_141().m_pSteamMusic) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_141, m_pSteamMusicRemote) == 136 );
C_ASSERT( sizeof(u64_CSteamAPIContext_141().m_pSteamMusicRemote) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_141, m_pSteamHTMLSurface) == 144 );
C_ASSERT( sizeof(u64_CSteamAPIContext_141().m_pSteamHTMLSurface) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_141, m_pSteamInventory) == 152 );
C_ASSERT( sizeof(u64_CSteamAPIContext_141().m_pSteamInventory) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_141, m_pSteamVideo) == 160 );
C_ASSERT( sizeof(u64_CSteamAPIContext_141().m_pSteamVideo) >= 8 );
C_ASSERT( offsetof(u64_CSteamAPIContext_141, m_pSteamParentalSettings) == 168 );
C_ASSERT( sizeof(u64_CSteamAPIContext_141().m_pSteamParentalSettings) >= 8 );

C_ASSERT( sizeof(w32_CSteamAPIContext_141) >= 88 );
C_ASSERT( offsetof(w32_CSteamAPIContext_141, m_pSteamClient) == 0 );
C_ASSERT( sizeof(w32_CSteamAPIContext_141().m_pSteamClient) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_141, m_pSteamUser) == 4 );
C_ASSERT( sizeof(w32_CSteamAPIContext_141().m_pSteamUser) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_141, m_pSteamFriends) == 8 );
C_ASSERT( sizeof(w32_CSteamAPIContext_141().m_pSteamFriends) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_141, m_pSteamUtils) == 12 );
C_ASSERT( sizeof(w32_CSteamAPIContext_141().m_pSteamUtils) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_141, m_pSteamMatchmaking) == 16 );
C_ASSERT( sizeof(w32_CSteamAPIContext_141().m_pSteamMatchmaking) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_141, m_pSteamUserStats) == 20 );
C_ASSERT( sizeof(w32_CSteamAPIContext_141().m_pSteamUserStats) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_141, m_pSteamApps) == 24 );
C_ASSERT( sizeof(w32_CSteamAPIContext_141().m_pSteamApps) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_141, m_pSteamMatchmakingServers) == 28 );
C_ASSERT( sizeof(w32_CSteamAPIContext_141().m_pSteamMatchmakingServers) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_141, m_pSteamNetworking) == 32 );
C_ASSERT( sizeof(w32_CSteamAPIContext_141().m_pSteamNetworking) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_141, m_pSteamRemoteStorage) == 36 );
C_ASSERT( sizeof(w32_CSteamAPIContext_141().m_pSteamRemoteStorage) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_141, m_pSteamScreenshots) == 40 );
C_ASSERT( sizeof(w32_CSteamAPIContext_141().m_pSteamScreenshots) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_141, m_pSteamHTTP) == 44 );
C_ASSERT( sizeof(w32_CSteamAPIContext_141().m_pSteamHTTP) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_141, m_pSteamUnifiedMessages) == 48 );
C_ASSERT( sizeof(w32_CSteamAPIContext_141().m_pSteamUnifiedMessages) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_141, m_pController) == 52 );
C_ASSERT( sizeof(w32_CSteamAPIContext_141().m_pController) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_141, m_pSteamUGC) == 56 );
C_ASSERT( sizeof(w32_CSteamAPIContext_141().m_pSteamUGC) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_141, m_pSteamAppList) == 60 );
C_ASSERT( sizeof(w32_CSteamAPIContext_141().m_pSteamAppList) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_141, m_pSteamMusic) == 64 );
C_ASSERT( sizeof(w32_CSteamAPIContext_141().m_pSteamMusic) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_141, m_pSteamMusicRemote) == 68 );
C_ASSERT( sizeof(w32_CSteamAPIContext_141().m_pSteamMusicRemote) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_141, m_pSteamHTMLSurface) == 72 );
C_ASSERT( sizeof(w32_CSteamAPIContext_141().m_pSteamHTMLSurface) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_141, m_pSteamInventory) == 76 );
C_ASSERT( sizeof(w32_CSteamAPIContext_141().m_pSteamInventory) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_141, m_pSteamVideo) == 80 );
C_ASSERT( sizeof(w32_CSteamAPIContext_141().m_pSteamVideo) >= 4 );
C_ASSERT( offsetof(w32_CSteamAPIContext_141, m_pSteamParentalSettings) == 84 );
C_ASSERT( sizeof(w32_CSteamAPIContext_141().m_pSteamParentalSettings) >= 4 );

C_ASSERT( sizeof(u32_CSteamAPIContext_141) >= 88 );
C_ASSERT( offsetof(u32_CSteamAPIContext_141, m_pSteamClient) == 0 );
C_ASSERT( sizeof(u32_CSteamAPIContext_141().m_pSteamClient) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_141, m_pSteamUser) == 4 );
C_ASSERT( sizeof(u32_CSteamAPIContext_141().m_pSteamUser) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_141, m_pSteamFriends) == 8 );
C_ASSERT( sizeof(u32_CSteamAPIContext_141().m_pSteamFriends) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_141, m_pSteamUtils) == 12 );
C_ASSERT( sizeof(u32_CSteamAPIContext_141().m_pSteamUtils) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_141, m_pSteamMatchmaking) == 16 );
C_ASSERT( sizeof(u32_CSteamAPIContext_141().m_pSteamMatchmaking) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_141, m_pSteamUserStats) == 20 );
C_ASSERT( sizeof(u32_CSteamAPIContext_141().m_pSteamUserStats) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_141, m_pSteamApps) == 24 );
C_ASSERT( sizeof(u32_CSteamAPIContext_141().m_pSteamApps) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_141, m_pSteamMatchmakingServers) == 28 );
C_ASSERT( sizeof(u32_CSteamAPIContext_141().m_pSteamMatchmakingServers) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_141, m_pSteamNetworking) == 32 );
C_ASSERT( sizeof(u32_CSteamAPIContext_141().m_pSteamNetworking) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_141, m_pSteamRemoteStorage) == 36 );
C_ASSERT( sizeof(u32_CSteamAPIContext_141().m_pSteamRemoteStorage) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_141, m_pSteamScreenshots) == 40 );
C_ASSERT( sizeof(u32_CSteamAPIContext_141().m_pSteamScreenshots) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_141, m_pSteamHTTP) == 44 );
C_ASSERT( sizeof(u32_CSteamAPIContext_141().m_pSteamHTTP) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_141, m_pSteamUnifiedMessages) == 48 );
C_ASSERT( sizeof(u32_CSteamAPIContext_141().m_pSteamUnifiedMessages) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_141, m_pController) == 52 );
C_ASSERT( sizeof(u32_CSteamAPIContext_141().m_pController) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_141, m_pSteamUGC) == 56 );
C_ASSERT( sizeof(u32_CSteamAPIContext_141().m_pSteamUGC) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_141, m_pSteamAppList) == 60 );
C_ASSERT( sizeof(u32_CSteamAPIContext_141().m_pSteamAppList) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_141, m_pSteamMusic) == 64 );
C_ASSERT( sizeof(u32_CSteamAPIContext_141().m_pSteamMusic) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_141, m_pSteamMusicRemote) == 68 );
C_ASSERT( sizeof(u32_CSteamAPIContext_141().m_pSteamMusicRemote) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_141, m_pSteamHTMLSurface) == 72 );
C_ASSERT( sizeof(u32_CSteamAPIContext_141().m_pSteamHTMLSurface) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_141, m_pSteamInventory) == 76 );
C_ASSERT( sizeof(u32_CSteamAPIContext_141().m_pSteamInventory) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_141, m_pSteamVideo) == 80 );
C_ASSERT( sizeof(u32_CSteamAPIContext_141().m_pSteamVideo) >= 4 );
C_ASSERT( offsetof(u32_CSteamAPIContext_141, m_pSteamParentalSettings) == 84 );
C_ASSERT( sizeof(u32_CSteamAPIContext_141().m_pSteamParentalSettings) >= 4 );

C_ASSERT( sizeof(w64_CSteamGameServerAPIContext_152) >= 64 );
C_ASSERT( offsetof(w64_CSteamGameServerAPIContext_152, m_pSteamClient) == 0 );
C_ASSERT( sizeof(w64_CSteamGameServerAPIContext_152().m_pSteamClient) >= 8 );
C_ASSERT( offsetof(w64_CSteamGameServerAPIContext_152, m_pSteamGameServer) == 8 );
C_ASSERT( sizeof(w64_CSteamGameServerAPIContext_152().m_pSteamGameServer) >= 8 );
C_ASSERT( offsetof(w64_CSteamGameServerAPIContext_152, m_pSteamGameServerUtils) == 16 );
C_ASSERT( sizeof(w64_CSteamGameServerAPIContext_152().m_pSteamGameServerUtils) >= 8 );
C_ASSERT( offsetof(w64_CSteamGameServerAPIContext_152, m_pSteamGameServerNetworking) == 24 );
C_ASSERT( sizeof(w64_CSteamGameServerAPIContext_152().m_pSteamGameServerNetworking) >= 8 );
C_ASSERT( offsetof(w64_CSteamGameServerAPIContext_152, m_pSteamGameServerStats) == 32 );
C_ASSERT( sizeof(w64_CSteamGameServerAPIContext_152().m_pSteamGameServerStats) >= 8 );
C_ASSERT( offsetof(w64_CSteamGameServerAPIContext_152, m_pSteamHTTP) == 40 );
C_ASSERT( sizeof(w64_CSteamGameServerAPIContext_152().m_pSteamHTTP) >= 8 );
C_ASSERT( offsetof(w64_CSteamGameServerAPIContext_152, m_pSteamInventory) == 48 );
C_ASSERT( sizeof(w64_CSteamGameServerAPIContext_152().m_pSteamInventory) >= 8 );
C_ASSERT( offsetof(w64_CSteamGameServerAPIContext_152, m_pSteamUGC) == 56 );
C_ASSERT( sizeof(w64_CSteamGameServerAPIContext_152().m_pSteamUGC) >= 8 );

C_ASSERT( sizeof(u64_CSteamGameServerAPIContext_152) >= 64 );
C_ASSERT( offsetof(u64_CSteamGameServerAPIContext_152, m_pSteamClient) == 0 );
C_ASSERT( sizeof(u64_CSteamGameServerAPIContext_152().m_pSteamClient) >= 8 );
C_ASSERT( offsetof(u64_CSteamGameServerAPIContext_152, m_pSteamGameServer) == 8 );
C_ASSERT( sizeof(u64_CSteamGameServerAPIContext_152().m_pSteamGameServer) >= 8 );
C_ASSERT( offsetof(u64_CSteamGameServerAPIContext_152, m_pSteamGameServerUtils) == 16 );
C_ASSERT( sizeof(u64_CSteamGameServerAPIContext_152().m_pSteamGameServerUtils) >= 8 );
C_ASSERT( offsetof(u64_CSteamGameServerAPIContext_152, m_pSteamGameServerNetworking) == 24 );
C_ASSERT( sizeof(u64_CSteamGameServerAPIContext_152().m_pSteamGameServerNetworking) >= 8 );
C_ASSERT( offsetof(u64_CSteamGameServerAPIContext_152, m_pSteamGameServerStats) == 32 );
C_ASSERT( sizeof(u64_CSteamGameServerAPIContext_152().m_pSteamGameServerStats) >= 8 );
C_ASSERT( offsetof(u64_CSteamGameServerAPIContext_152, m_pSteamHTTP) == 40 );
C_ASSERT( sizeof(u64_CSteamGameServerAPIContext_152().m_pSteamHTTP) >= 8 );
C_ASSERT( offsetof(u64_CSteamGameServerAPIContext_152, m_pSteamInventory) == 48 );
C_ASSERT( sizeof(u64_CSteamGameServerAPIContext_152().m_pSteamInventory) >= 8 );
C_ASSERT( offsetof(u64_CSteamGameServerAPIContext_152, m_pSteamUGC) == 56 );
C_ASSERT( sizeof(u64_CSteamGameServerAPIContext_152().m_pSteamUGC) >= 8 );

C_ASSERT( sizeof(w32_CSteamGameServerAPIContext_152) >= 32 );
C_ASSERT( offsetof(w32_CSteamGameServerAPIContext_152, m_pSteamClient) == 0 );
C_ASSERT( sizeof(w32_CSteamGameServerAPIContext_152().m_pSteamClient) >= 4 );
C_ASSERT( offsetof(w32_CSteamGameServerAPIContext_152, m_pSteamGameServer) == 4 );
C_ASSERT( sizeof(w32_CSteamGameServerAPIContext_152().m_pSteamGameServer) >= 4 );
C_ASSERT( offsetof(w32_CSteamGameServerAPIContext_152, m_pSteamGameServerUtils) == 8 );
C_ASSERT( sizeof(w32_CSteamGameServerAPIContext_152().m_pSteamGameServerUtils) >= 4 );
C_ASSERT( offsetof(w32_CSteamGameServerAPIContext_152, m_pSteamGameServerNetworking) == 12 );
C_ASSERT( sizeof(w32_CSteamGameServerAPIContext_152().m_pSteamGameServerNetworking) >= 4 );
C_ASSERT( offsetof(w32_CSteamGameServerAPIContext_152, m_pSteamGameServerStats) == 16 );
C_ASSERT( sizeof(w32_CSteamGameServerAPIContext_152().m_pSteamGameServerStats) >= 4 );
C_ASSERT( offsetof(w32_CSteamGameServerAPIContext_152, m_pSteamHTTP) == 20 );
C_ASSERT( sizeof(w32_CSteamGameServerAPIContext_152().m_pSteamHTTP) >= 4 );
C_ASSERT( offsetof(w32_CSteamGameServerAPIContext_152, m_pSteamInventory) == 24 );
C_ASSERT( sizeof(w32_CSteamGameServerAPIContext_152().m_pSteamInventory) >= 4 );
C_ASSERT( offsetof(w32_CSteamGameServerAPIContext_152, m_pSteamUGC) == 28 );
C_ASSERT( sizeof(w32_CSteamGameServerAPIContext_152().m_pSteamUGC) >= 4 );

C_ASSERT( sizeof(u32_CSteamGameServerAPIContext_152) >= 32 );
C_ASSERT( offsetof(u32_CSteamGameServerAPIContext_152, m_pSteamClient) == 0 );
C_ASSERT( sizeof(u32_CSteamGameServerAPIContext_152().m_pSteamClient) >= 4 );
C_ASSERT( offsetof(u32_CSteamGameServerAPIContext_152, m_pSteamGameServer) == 4 );
C_ASSERT( sizeof(u32_CSteamGameServerAPIContext_152().m_pSteamGameServer) >= 4 );
C_ASSERT( offsetof(u32_CSteamGameServerAPIContext_152, m_pSteamGameServerUtils) == 8 );
C_ASSERT( sizeof(u32_CSteamGameServerAPIContext_152().m_pSteamGameServerUtils) >= 4 );
C_ASSERT( offsetof(u32_CSteamGameServerAPIContext_152, m_pSteamGameServerNetworking) == 12 );
C_ASSERT( sizeof(u32_CSteamGameServerAPIContext_152().m_pSteamGameServerNetworking) >= 4 );
C_ASSERT( offsetof(u32_CSteamGameServerAPIContext_152, m_pSteamGameServerStats) == 16 );
C_ASSERT( sizeof(u32_CSteamGameServerAPIContext_152().m_pSteamGameServerStats) >= 4 );
C_ASSERT( offsetof(u32_CSteamGameServerAPIContext_152, m_pSteamHTTP) == 20 );
C_ASSERT( sizeof(u32_CSteamGameServerAPIContext_152().m_pSteamHTTP) >= 4 );
C_ASSERT( offsetof(u32_CSteamGameServerAPIContext_152, m_pSteamInventory) == 24 );
C_ASSERT( sizeof(u32_CSteamGameServerAPIContext_152().m_pSteamInventory) >= 4 );
C_ASSERT( offsetof(u32_CSteamGameServerAPIContext_152, m_pSteamUGC) == 28 );
C_ASSERT( sizeof(u32_CSteamGameServerAPIContext_152().m_pSteamUGC) >= 4 );

C_ASSERT( sizeof(w64_CSteamGameServerAPIContext_143) >= 72 );
C_ASSERT( offsetof(w64_CSteamGameServerAPIContext_143, m_pSteamClient) == 0 );
C_ASSERT( sizeof(w64_CSteamGameServerAPIContext_143().m_pSteamClient) >= 8 );
C_ASSERT( offsetof(w64_CSteamGameServerAPIContext_143, m_pSteamGameServer) == 8 );
C_ASSERT( sizeof(w64_CSteamGameServerAPIContext_143().m_pSteamGameServer) >= 8 );
C_ASSERT( offsetof(w64_CSteamGameServerAPIContext_143, m_pSteamGameServerUtils) == 16 );
C_ASSERT( sizeof(w64_CSteamGameServerAPIContext_143().m_pSteamGameServerUtils) >= 8 );
C_ASSERT( offsetof(w64_CSteamGameServerAPIContext_143, m_pSteamGameServerNetworking) == 24 );
C_ASSERT( sizeof(w64_CSteamGameServerAPIContext_143().m_pSteamGameServerNetworking) >= 8 );
C_ASSERT( offsetof(w64_CSteamGameServerAPIContext_143, m_pSteamGameServerStats) == 32 );
C_ASSERT( sizeof(w64_CSteamGameServerAPIContext_143().m_pSteamGameServerStats) >= 8 );
C_ASSERT( offsetof(w64_CSteamGameServerAPIContext_143, m_pSteamHTTP) == 40 );
C_ASSERT( sizeof(w64_CSteamGameServerAPIContext_143().m_pSteamHTTP) >= 8 );
C_ASSERT( offsetof(w64_CSteamGameServerAPIContext_143, m_pSteamInventory) == 48 );
C_ASSERT( sizeof(w64_CSteamGameServerAPIContext_143().m_pSteamInventory) >= 8 );
C_ASSERT( offsetof(w64_CSteamGameServerAPIContext_143, m_pSteamUGC) == 56 );
C_ASSERT( sizeof(w64_CSteamGameServerAPIContext_143().m_pSteamUGC) >= 8 );
C_ASSERT( offsetof(w64_CSteamGameServerAPIContext_143, m_pSteamApps) == 64 );
C_ASSERT( sizeof(w64_CSteamGameServerAPIContext_143().m_pSteamApps) >= 8 );

C_ASSERT( sizeof(u64_CSteamGameServerAPIContext_143) >= 72 );
C_ASSERT( offsetof(u64_CSteamGameServerAPIContext_143, m_pSteamClient) == 0 );
C_ASSERT( sizeof(u64_CSteamGameServerAPIContext_143().m_pSteamClient) >= 8 );
C_ASSERT( offsetof(u64_CSteamGameServerAPIContext_143, m_pSteamGameServer) == 8 );
C_ASSERT( sizeof(u64_CSteamGameServerAPIContext_143().m_pSteamGameServer) >= 8 );
C_ASSERT( offsetof(u64_CSteamGameServerAPIContext_143, m_pSteamGameServerUtils) == 16 );
C_ASSERT( sizeof(u64_CSteamGameServerAPIContext_143().m_pSteamGameServerUtils) >= 8 );
C_ASSERT( offsetof(u64_CSteamGameServerAPIContext_143, m_pSteamGameServerNetworking) == 24 );
C_ASSERT( sizeof(u64_CSteamGameServerAPIContext_143().m_pSteamGameServerNetworking) >= 8 );
C_ASSERT( offsetof(u64_CSteamGameServerAPIContext_143, m_pSteamGameServerStats) == 32 );
C_ASSERT( sizeof(u64_CSteamGameServerAPIContext_143().m_pSteamGameServerStats) >= 8 );
C_ASSERT( offsetof(u64_CSteamGameServerAPIContext_143, m_pSteamHTTP) == 40 );
C_ASSERT( sizeof(u64_CSteamGameServerAPIContext_143().m_pSteamHTTP) >= 8 );
C_ASSERT( offsetof(u64_CSteamGameServerAPIContext_143, m_pSteamInventory) == 48 );
C_ASSERT( sizeof(u64_CSteamGameServerAPIContext_143().m_pSteamInventory) >= 8 );
C_ASSERT( offsetof(u64_CSteamGameServerAPIContext_143, m_pSteamUGC) == 56 );
C_ASSERT( sizeof(u64_CSteamGameServerAPIContext_143().m_pSteamUGC) >= 8 );
C_ASSERT( offsetof(u64_CSteamGameServerAPIContext_143, m_pSteamApps) == 64 );
C_ASSERT( sizeof(u64_CSteamGameServerAPIContext_143().m_pSteamApps) >= 8 );

C_ASSERT( sizeof(w32_CSteamGameServerAPIContext_143) >= 36 );
C_ASSERT( offsetof(w32_CSteamGameServerAPIContext_143, m_pSteamClient) == 0 );
C_ASSERT( sizeof(w32_CSteamGameServerAPIContext_143().m_pSteamClient) >= 4 );
C_ASSERT( offsetof(w32_CSteamGameServerAPIContext_143, m_pSteamGameServer) == 4 );
C_ASSERT( sizeof(w32_CSteamGameServerAPIContext_143().m_pSteamGameServer) >= 4 );
C_ASSERT( offsetof(w32_CSteamGameServerAPIContext_143, m_pSteamGameServerUtils) == 8 );
C_ASSERT( sizeof(w32_CSteamGameServerAPIContext_143().m_pSteamGameServerUtils) >= 4 );
C_ASSERT( offsetof(w32_CSteamGameServerAPIContext_143, m_pSteamGameServerNetworking) == 12 );
C_ASSERT( sizeof(w32_CSteamGameServerAPIContext_143().m_pSteamGameServerNetworking) >= 4 );
C_ASSERT( offsetof(w32_CSteamGameServerAPIContext_143, m_pSteamGameServerStats) == 16 );
C_ASSERT( sizeof(w32_CSteamGameServerAPIContext_143().m_pSteamGameServerStats) >= 4 );
C_ASSERT( offsetof(w32_CSteamGameServerAPIContext_143, m_pSteamHTTP) == 20 );
C_ASSERT( sizeof(w32_CSteamGameServerAPIContext_143().m_pSteamHTTP) >= 4 );
C_ASSERT( offsetof(w32_CSteamGameServerAPIContext_143, m_pSteamInventory) == 24 );
C_ASSERT( sizeof(w32_CSteamGameServerAPIContext_143().m_pSteamInventory) >= 4 );
C_ASSERT( offsetof(w32_CSteamGameServerAPIContext_143, m_pSteamUGC) == 28 );
C_ASSERT( sizeof(w32_CSteamGameServerAPIContext_143().m_pSteamUGC) >= 4 );
C_ASSERT( offsetof(w32_CSteamGameServerAPIContext_143, m_pSteamApps) == 32 );
C_ASSERT( sizeof(w32_CSteamGameServerAPIContext_143().m_pSteamApps) >= 4 );

C_ASSERT( sizeof(u32_CSteamGameServerAPIContext_143) >= 36 );
C_ASSERT( offsetof(u32_CSteamGameServerAPIContext_143, m_pSteamClient) == 0 );
C_ASSERT( sizeof(u32_CSteamGameServerAPIContext_143().m_pSteamClient) >= 4 );
C_ASSERT( offsetof(u32_CSteamGameServerAPIContext_143, m_pSteamGameServer) == 4 );
C_ASSERT( sizeof(u32_CSteamGameServerAPIContext_143().m_pSteamGameServer) >= 4 );
C_ASSERT( offsetof(u32_CSteamGameServerAPIContext_143, m_pSteamGameServerUtils) == 8 );
C_ASSERT( sizeof(u32_CSteamGameServerAPIContext_143().m_pSteamGameServerUtils) >= 4 );
C_ASSERT( offsetof(u32_CSteamGameServerAPIContext_143, m_pSteamGameServerNetworking) == 12 );
C_ASSERT( sizeof(u32_CSteamGameServerAPIContext_143().m_pSteamGameServerNetworking) >= 4 );
C_ASSERT( offsetof(u32_CSteamGameServerAPIContext_143, m_pSteamGameServerStats) == 16 );
C_ASSERT( sizeof(u32_CSteamGameServerAPIContext_143().m_pSteamGameServerStats) >= 4 );
C_ASSERT( offsetof(u32_CSteamGameServerAPIContext_143, m_pSteamHTTP) == 20 );
C_ASSERT( sizeof(u32_CSteamGameServerAPIContext_143().m_pSteamHTTP) >= 4 );
C_ASSERT( offsetof(u32_CSteamGameServerAPIContext_143, m_pSteamInventory) == 24 );
C_ASSERT( sizeof(u32_CSteamGameServerAPIContext_143().m_pSteamInventory) >= 4 );
C_ASSERT( offsetof(u32_CSteamGameServerAPIContext_143, m_pSteamUGC) == 28 );
C_ASSERT( sizeof(u32_CSteamGameServerAPIContext_143().m_pSteamUGC) >= 4 );
C_ASSERT( offsetof(u32_CSteamGameServerAPIContext_143, m_pSteamApps) == 32 );
C_ASSERT( sizeof(u32_CSteamGameServerAPIContext_143().m_pSteamApps) >= 4 );

C_ASSERT( sizeof(w64_CallbackMsg_t) >= 24 );
C_ASSERT( offsetof(w64_CallbackMsg_t, m_hSteamUser) == 0 );
C_ASSERT( sizeof(w64_CallbackMsg_t().m_hSteamUser) >= 4 );
C_ASSERT( offsetof(w64_CallbackMsg_t, m_iCallback) == 4 );
C_ASSERT( sizeof(w64_CallbackMsg_t().m_iCallback) >= 4 );
C_ASSERT( offsetof(w64_CallbackMsg_t, m_pubParam) == 8 );
C_ASSERT( sizeof(w64_CallbackMsg_t().m_pubParam) >= 8 );
C_ASSERT( offsetof(w64_CallbackMsg_t, m_cubParam) == 16 );
C_ASSERT( sizeof(w64_CallbackMsg_t().m_cubParam) >= 4 );

C_ASSERT( sizeof(u64_CallbackMsg_t) >= 20 );
C_ASSERT( offsetof(u64_CallbackMsg_t, m_hSteamUser) == 0 );
C_ASSERT( sizeof(u64_CallbackMsg_t().m_hSteamUser) >= 4 );
C_ASSERT( offsetof(u64_CallbackMsg_t, m_iCallback) == 4 );
C_ASSERT( sizeof(u64_CallbackMsg_t().m_iCallback) >= 4 );
C_ASSERT( offsetof(u64_CallbackMsg_t, m_pubParam) == 8 );
C_ASSERT( sizeof(u64_CallbackMsg_t().m_pubParam) >= 8 );
C_ASSERT( offsetof(u64_CallbackMsg_t, m_cubParam) == 16 );
C_ASSERT( sizeof(u64_CallbackMsg_t().m_cubParam) >= 4 );

C_ASSERT( sizeof(w32_CallbackMsg_t) >= 16 );
C_ASSERT( offsetof(w32_CallbackMsg_t, m_hSteamUser) == 0 );
C_ASSERT( sizeof(w32_CallbackMsg_t().m_hSteamUser) >= 4 );
C_ASSERT( offsetof(w32_CallbackMsg_t, m_iCallback) == 4 );
C_ASSERT( sizeof(w32_CallbackMsg_t().m_iCallback) >= 4 );
C_ASSERT( offsetof(w32_CallbackMsg_t, m_pubParam) == 8 );
C_ASSERT( sizeof(w32_CallbackMsg_t().m_pubParam) >= 4 );
C_ASSERT( offsetof(w32_CallbackMsg_t, m_cubParam) == 12 );
C_ASSERT( sizeof(w32_CallbackMsg_t().m_cubParam) >= 4 );

C_ASSERT( sizeof(u32_CallbackMsg_t) >= 16 );
C_ASSERT( offsetof(u32_CallbackMsg_t, m_hSteamUser) == 0 );
C_ASSERT( sizeof(u32_CallbackMsg_t().m_hSteamUser) >= 4 );
C_ASSERT( offsetof(u32_CallbackMsg_t, m_iCallback) == 4 );
C_ASSERT( sizeof(u32_CallbackMsg_t().m_iCallback) >= 4 );
C_ASSERT( offsetof(u32_CallbackMsg_t, m_pubParam) == 8 );
C_ASSERT( sizeof(u32_CallbackMsg_t().m_pubParam) >= 4 );
C_ASSERT( offsetof(u32_CallbackMsg_t, m_cubParam) == 12 );
C_ASSERT( sizeof(u32_CallbackMsg_t().m_cubParam) >= 4 );

C_ASSERT( sizeof(w64_CreateBeaconCallback_t) >= 16 );
C_ASSERT( offsetof(w64_CreateBeaconCallback_t, m_eResult) == 0 );
C_ASSERT( sizeof(w64_CreateBeaconCallback_t().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_CreateBeaconCallback_t, m_ulBeaconID) == 8 );
C_ASSERT( sizeof(w64_CreateBeaconCallback_t().m_ulBeaconID) >= 8 );

C_ASSERT( sizeof(u64_CreateBeaconCallback_t) >= 12 );
C_ASSERT( offsetof(u64_CreateBeaconCallback_t, m_eResult) == 0 );
C_ASSERT( sizeof(u64_CreateBeaconCallback_t().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_CreateBeaconCallback_t, m_ulBeaconID) == 4 );
C_ASSERT( sizeof(u64_CreateBeaconCallback_t().m_ulBeaconID) >= 8 );

C_ASSERT( sizeof(w32_CreateBeaconCallback_t) >= 16 );
C_ASSERT( offsetof(w32_CreateBeaconCallback_t, m_eResult) == 0 );
C_ASSERT( sizeof(w32_CreateBeaconCallback_t().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_CreateBeaconCallback_t, m_ulBeaconID) == 8 );
C_ASSERT( sizeof(w32_CreateBeaconCallback_t().m_ulBeaconID) >= 8 );

C_ASSERT( sizeof(u32_CreateBeaconCallback_t) >= 12 );
C_ASSERT( offsetof(u32_CreateBeaconCallback_t, m_eResult) == 0 );
C_ASSERT( sizeof(u32_CreateBeaconCallback_t().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_CreateBeaconCallback_t, m_ulBeaconID) == 4 );
C_ASSERT( sizeof(u32_CreateBeaconCallback_t().m_ulBeaconID) >= 8 );

#ifdef __x86_64__
w64_CreateBeaconCallback_t::operator u64_CreateBeaconCallback_t() const
{
    u64_CreateBeaconCallback_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_ulBeaconID = this->m_ulBeaconID;
    return ret;
}

u64_CreateBeaconCallback_t::operator w64_CreateBeaconCallback_t() const
{
    w64_CreateBeaconCallback_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_ulBeaconID = this->m_ulBeaconID;
    return ret;
}
#endif

#ifdef __i386__
w32_CreateBeaconCallback_t::operator u32_CreateBeaconCallback_t() const
{
    u32_CreateBeaconCallback_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_ulBeaconID = this->m_ulBeaconID;
    return ret;
}

u32_CreateBeaconCallback_t::operator w32_CreateBeaconCallback_t() const
{
    w32_CreateBeaconCallback_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_ulBeaconID = this->m_ulBeaconID;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_CreateItemResult_t) >= 24 );
C_ASSERT( offsetof(w64_CreateItemResult_t, m_eResult) == 0 );
C_ASSERT( sizeof(w64_CreateItemResult_t().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_CreateItemResult_t, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w64_CreateItemResult_t().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(w64_CreateItemResult_t, m_bUserNeedsToAcceptWorkshopLegalAgreement) == 16 );
C_ASSERT( sizeof(w64_CreateItemResult_t().m_bUserNeedsToAcceptWorkshopLegalAgreement) >= 1 );

C_ASSERT( sizeof(u64_CreateItemResult_t) >= 16 );
C_ASSERT( offsetof(u64_CreateItemResult_t, m_eResult) == 0 );
C_ASSERT( sizeof(u64_CreateItemResult_t().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_CreateItemResult_t, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u64_CreateItemResult_t().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(u64_CreateItemResult_t, m_bUserNeedsToAcceptWorkshopLegalAgreement) == 12 );
C_ASSERT( sizeof(u64_CreateItemResult_t().m_bUserNeedsToAcceptWorkshopLegalAgreement) >= 1 );

C_ASSERT( sizeof(w32_CreateItemResult_t) >= 24 );
C_ASSERT( offsetof(w32_CreateItemResult_t, m_eResult) == 0 );
C_ASSERT( sizeof(w32_CreateItemResult_t().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_CreateItemResult_t, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w32_CreateItemResult_t().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(w32_CreateItemResult_t, m_bUserNeedsToAcceptWorkshopLegalAgreement) == 16 );
C_ASSERT( sizeof(w32_CreateItemResult_t().m_bUserNeedsToAcceptWorkshopLegalAgreement) >= 1 );

C_ASSERT( sizeof(u32_CreateItemResult_t) >= 16 );
C_ASSERT( offsetof(u32_CreateItemResult_t, m_eResult) == 0 );
C_ASSERT( sizeof(u32_CreateItemResult_t().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_CreateItemResult_t, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u32_CreateItemResult_t().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(u32_CreateItemResult_t, m_bUserNeedsToAcceptWorkshopLegalAgreement) == 12 );
C_ASSERT( sizeof(u32_CreateItemResult_t().m_bUserNeedsToAcceptWorkshopLegalAgreement) >= 1 );

#ifdef __x86_64__
w64_CreateItemResult_t::operator u64_CreateItemResult_t() const
{
    u64_CreateItemResult_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_bUserNeedsToAcceptWorkshopLegalAgreement = this->m_bUserNeedsToAcceptWorkshopLegalAgreement;
    return ret;
}

u64_CreateItemResult_t::operator w64_CreateItemResult_t() const
{
    w64_CreateItemResult_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_bUserNeedsToAcceptWorkshopLegalAgreement = this->m_bUserNeedsToAcceptWorkshopLegalAgreement;
    return ret;
}
#endif

#ifdef __i386__
w32_CreateItemResult_t::operator u32_CreateItemResult_t() const
{
    u32_CreateItemResult_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_bUserNeedsToAcceptWorkshopLegalAgreement = this->m_bUserNeedsToAcceptWorkshopLegalAgreement;
    return ret;
}

u32_CreateItemResult_t::operator w32_CreateItemResult_t() const
{
    w32_CreateItemResult_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_bUserNeedsToAcceptWorkshopLegalAgreement = this->m_bUserNeedsToAcceptWorkshopLegalAgreement;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_DeleteItemResult_t) >= 16 );
C_ASSERT( offsetof(w64_DeleteItemResult_t, m_eResult) == 0 );
C_ASSERT( sizeof(w64_DeleteItemResult_t().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_DeleteItemResult_t, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w64_DeleteItemResult_t().m_nPublishedFileId) >= 8 );

C_ASSERT( sizeof(u64_DeleteItemResult_t) >= 12 );
C_ASSERT( offsetof(u64_DeleteItemResult_t, m_eResult) == 0 );
C_ASSERT( sizeof(u64_DeleteItemResult_t().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_DeleteItemResult_t, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u64_DeleteItemResult_t().m_nPublishedFileId) >= 8 );

C_ASSERT( sizeof(w32_DeleteItemResult_t) >= 16 );
C_ASSERT( offsetof(w32_DeleteItemResult_t, m_eResult) == 0 );
C_ASSERT( sizeof(w32_DeleteItemResult_t().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_DeleteItemResult_t, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w32_DeleteItemResult_t().m_nPublishedFileId) >= 8 );

C_ASSERT( sizeof(u32_DeleteItemResult_t) >= 12 );
C_ASSERT( offsetof(u32_DeleteItemResult_t, m_eResult) == 0 );
C_ASSERT( sizeof(u32_DeleteItemResult_t().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_DeleteItemResult_t, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u32_DeleteItemResult_t().m_nPublishedFileId) >= 8 );

#ifdef __x86_64__
w64_DeleteItemResult_t::operator u64_DeleteItemResult_t() const
{
    u64_DeleteItemResult_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    return ret;
}

u64_DeleteItemResult_t::operator w64_DeleteItemResult_t() const
{
    w64_DeleteItemResult_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    return ret;
}
#endif

#ifdef __i386__
w32_DeleteItemResult_t::operator u32_DeleteItemResult_t() const
{
    u32_DeleteItemResult_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    return ret;
}

u32_DeleteItemResult_t::operator w32_DeleteItemResult_t() const
{
    w32_DeleteItemResult_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_DownloadItemResult_t) >= 24 );
C_ASSERT( offsetof(w64_DownloadItemResult_t, m_unAppID) == 0 );
C_ASSERT( sizeof(w64_DownloadItemResult_t().m_unAppID) >= 4 );
C_ASSERT( offsetof(w64_DownloadItemResult_t, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w64_DownloadItemResult_t().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(w64_DownloadItemResult_t, m_eResult) == 16 );
C_ASSERT( sizeof(w64_DownloadItemResult_t().m_eResult) >= 4 );

C_ASSERT( sizeof(u64_DownloadItemResult_t) >= 16 );
C_ASSERT( offsetof(u64_DownloadItemResult_t, m_unAppID) == 0 );
C_ASSERT( sizeof(u64_DownloadItemResult_t().m_unAppID) >= 4 );
C_ASSERT( offsetof(u64_DownloadItemResult_t, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u64_DownloadItemResult_t().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(u64_DownloadItemResult_t, m_eResult) == 12 );
C_ASSERT( sizeof(u64_DownloadItemResult_t().m_eResult) >= 4 );

C_ASSERT( sizeof(w32_DownloadItemResult_t) >= 24 );
C_ASSERT( offsetof(w32_DownloadItemResult_t, m_unAppID) == 0 );
C_ASSERT( sizeof(w32_DownloadItemResult_t().m_unAppID) >= 4 );
C_ASSERT( offsetof(w32_DownloadItemResult_t, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w32_DownloadItemResult_t().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(w32_DownloadItemResult_t, m_eResult) == 16 );
C_ASSERT( sizeof(w32_DownloadItemResult_t().m_eResult) >= 4 );

C_ASSERT( sizeof(u32_DownloadItemResult_t) >= 16 );
C_ASSERT( offsetof(u32_DownloadItemResult_t, m_unAppID) == 0 );
C_ASSERT( sizeof(u32_DownloadItemResult_t().m_unAppID) >= 4 );
C_ASSERT( offsetof(u32_DownloadItemResult_t, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u32_DownloadItemResult_t().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(u32_DownloadItemResult_t, m_eResult) == 12 );
C_ASSERT( sizeof(u32_DownloadItemResult_t().m_eResult) >= 4 );

#ifdef __x86_64__
w64_DownloadItemResult_t::operator u64_DownloadItemResult_t() const
{
    u64_DownloadItemResult_t ret;
    ret.m_unAppID = this->m_unAppID;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_eResult = this->m_eResult;
    return ret;
}

u64_DownloadItemResult_t::operator w64_DownloadItemResult_t() const
{
    w64_DownloadItemResult_t ret;
    ret.m_unAppID = this->m_unAppID;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_eResult = this->m_eResult;
    return ret;
}
#endif

#ifdef __i386__
w32_DownloadItemResult_t::operator u32_DownloadItemResult_t() const
{
    u32_DownloadItemResult_t ret;
    ret.m_unAppID = this->m_unAppID;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_eResult = this->m_eResult;
    return ret;
}

u32_DownloadItemResult_t::operator w32_DownloadItemResult_t() const
{
    w32_DownloadItemResult_t ret;
    ret.m_unAppID = this->m_unAppID;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_eResult = this->m_eResult;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_EndGameResultCallback_t) >= 16 );
C_ASSERT( offsetof(w64_EndGameResultCallback_t, m_eResult) == 0 );
C_ASSERT( sizeof(w64_EndGameResultCallback_t().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_EndGameResultCallback_t, ullUniqueGameID) == 8 );
C_ASSERT( sizeof(w64_EndGameResultCallback_t().ullUniqueGameID) >= 8 );

C_ASSERT( sizeof(u64_EndGameResultCallback_t) >= 12 );
C_ASSERT( offsetof(u64_EndGameResultCallback_t, m_eResult) == 0 );
C_ASSERT( sizeof(u64_EndGameResultCallback_t().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_EndGameResultCallback_t, ullUniqueGameID) == 4 );
C_ASSERT( sizeof(u64_EndGameResultCallback_t().ullUniqueGameID) >= 8 );

C_ASSERT( sizeof(w32_EndGameResultCallback_t) >= 16 );
C_ASSERT( offsetof(w32_EndGameResultCallback_t, m_eResult) == 0 );
C_ASSERT( sizeof(w32_EndGameResultCallback_t().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_EndGameResultCallback_t, ullUniqueGameID) == 8 );
C_ASSERT( sizeof(w32_EndGameResultCallback_t().ullUniqueGameID) >= 8 );

C_ASSERT( sizeof(u32_EndGameResultCallback_t) >= 12 );
C_ASSERT( offsetof(u32_EndGameResultCallback_t, m_eResult) == 0 );
C_ASSERT( sizeof(u32_EndGameResultCallback_t().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_EndGameResultCallback_t, ullUniqueGameID) == 4 );
C_ASSERT( sizeof(u32_EndGameResultCallback_t().ullUniqueGameID) >= 8 );

#ifdef __x86_64__
w64_EndGameResultCallback_t::operator u64_EndGameResultCallback_t() const
{
    u64_EndGameResultCallback_t ret;
    ret.m_eResult = this->m_eResult;
    ret.ullUniqueGameID = this->ullUniqueGameID;
    return ret;
}

u64_EndGameResultCallback_t::operator w64_EndGameResultCallback_t() const
{
    w64_EndGameResultCallback_t ret;
    ret.m_eResult = this->m_eResult;
    ret.ullUniqueGameID = this->ullUniqueGameID;
    return ret;
}
#endif

#ifdef __i386__
w32_EndGameResultCallback_t::operator u32_EndGameResultCallback_t() const
{
    u32_EndGameResultCallback_t ret;
    ret.m_eResult = this->m_eResult;
    ret.ullUniqueGameID = this->ullUniqueGameID;
    return ret;
}

u32_EndGameResultCallback_t::operator w32_EndGameResultCallback_t() const
{
    w32_EndGameResultCallback_t ret;
    ret.m_eResult = this->m_eResult;
    ret.ullUniqueGameID = this->ullUniqueGameID;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_FileDetailsResult_t) >= 40 );
C_ASSERT( offsetof(w64_FileDetailsResult_t, m_eResult) == 0 );
C_ASSERT( sizeof(w64_FileDetailsResult_t().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_FileDetailsResult_t, m_ulFileSize) == 8 );
C_ASSERT( sizeof(w64_FileDetailsResult_t().m_ulFileSize) >= 8 );
C_ASSERT( offsetof(w64_FileDetailsResult_t, m_FileSHA) == 16 );
C_ASSERT( sizeof(w64_FileDetailsResult_t().m_FileSHA) >= 20 );
C_ASSERT( offsetof(w64_FileDetailsResult_t, m_unFlags) == 36 );
C_ASSERT( sizeof(w64_FileDetailsResult_t().m_unFlags) >= 4 );

C_ASSERT( sizeof(u64_FileDetailsResult_t) >= 36 );
C_ASSERT( offsetof(u64_FileDetailsResult_t, m_eResult) == 0 );
C_ASSERT( sizeof(u64_FileDetailsResult_t().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_FileDetailsResult_t, m_ulFileSize) == 4 );
C_ASSERT( sizeof(u64_FileDetailsResult_t().m_ulFileSize) >= 8 );
C_ASSERT( offsetof(u64_FileDetailsResult_t, m_FileSHA) == 12 );
C_ASSERT( sizeof(u64_FileDetailsResult_t().m_FileSHA) >= 20 );
C_ASSERT( offsetof(u64_FileDetailsResult_t, m_unFlags) == 32 );
C_ASSERT( sizeof(u64_FileDetailsResult_t().m_unFlags) >= 4 );

C_ASSERT( sizeof(w32_FileDetailsResult_t) >= 40 );
C_ASSERT( offsetof(w32_FileDetailsResult_t, m_eResult) == 0 );
C_ASSERT( sizeof(w32_FileDetailsResult_t().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_FileDetailsResult_t, m_ulFileSize) == 8 );
C_ASSERT( sizeof(w32_FileDetailsResult_t().m_ulFileSize) >= 8 );
C_ASSERT( offsetof(w32_FileDetailsResult_t, m_FileSHA) == 16 );
C_ASSERT( sizeof(w32_FileDetailsResult_t().m_FileSHA) >= 20 );
C_ASSERT( offsetof(w32_FileDetailsResult_t, m_unFlags) == 36 );
C_ASSERT( sizeof(w32_FileDetailsResult_t().m_unFlags) >= 4 );

C_ASSERT( sizeof(u32_FileDetailsResult_t) >= 36 );
C_ASSERT( offsetof(u32_FileDetailsResult_t, m_eResult) == 0 );
C_ASSERT( sizeof(u32_FileDetailsResult_t().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_FileDetailsResult_t, m_ulFileSize) == 4 );
C_ASSERT( sizeof(u32_FileDetailsResult_t().m_ulFileSize) >= 8 );
C_ASSERT( offsetof(u32_FileDetailsResult_t, m_FileSHA) == 12 );
C_ASSERT( sizeof(u32_FileDetailsResult_t().m_FileSHA) >= 20 );
C_ASSERT( offsetof(u32_FileDetailsResult_t, m_unFlags) == 32 );
C_ASSERT( sizeof(u32_FileDetailsResult_t().m_unFlags) >= 4 );

#ifdef __x86_64__
w64_FileDetailsResult_t::operator u64_FileDetailsResult_t() const
{
    u64_FileDetailsResult_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_ulFileSize = this->m_ulFileSize;
    ret.m_FileSHA = this->m_FileSHA;
    ret.m_unFlags = this->m_unFlags;
    return ret;
}

u64_FileDetailsResult_t::operator w64_FileDetailsResult_t() const
{
    w64_FileDetailsResult_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_ulFileSize = this->m_ulFileSize;
    ret.m_FileSHA = this->m_FileSHA;
    ret.m_unFlags = this->m_unFlags;
    return ret;
}
#endif

#ifdef __i386__
w32_FileDetailsResult_t::operator u32_FileDetailsResult_t() const
{
    u32_FileDetailsResult_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_ulFileSize = this->m_ulFileSize;
    ret.m_FileSHA = this->m_FileSHA;
    ret.m_unFlags = this->m_unFlags;
    return ret;
}

u32_FileDetailsResult_t::operator w32_FileDetailsResult_t() const
{
    w32_FileDetailsResult_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_ulFileSize = this->m_ulFileSize;
    ret.m_FileSHA = this->m_FileSHA;
    ret.m_unFlags = this->m_unFlags;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_GSReputation_t_123) >= 40 );
C_ASSERT( offsetof(w64_GSReputation_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(w64_GSReputation_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_GSReputation_t_123, m_unReputationScore) == 4 );
C_ASSERT( sizeof(w64_GSReputation_t_123().m_unReputationScore) >= 4 );
C_ASSERT( offsetof(w64_GSReputation_t_123, m_bBanned) == 8 );
C_ASSERT( sizeof(w64_GSReputation_t_123().m_bBanned) >= 1 );
C_ASSERT( offsetof(w64_GSReputation_t_123, m_unBannedIP) == 12 );
C_ASSERT( sizeof(w64_GSReputation_t_123().m_unBannedIP) >= 4 );
C_ASSERT( offsetof(w64_GSReputation_t_123, m_usBannedPort) == 16 );
C_ASSERT( sizeof(w64_GSReputation_t_123().m_usBannedPort) >= 2 );
C_ASSERT( offsetof(w64_GSReputation_t_123, m_ulBannedGameID) == 24 );
C_ASSERT( sizeof(w64_GSReputation_t_123().m_ulBannedGameID) >= 8 );
C_ASSERT( offsetof(w64_GSReputation_t_123, m_unBanExpires) == 32 );
C_ASSERT( sizeof(w64_GSReputation_t_123().m_unBanExpires) >= 4 );

C_ASSERT( sizeof(u64_GSReputation_t_123) >= 32 );
C_ASSERT( offsetof(u64_GSReputation_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(u64_GSReputation_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_GSReputation_t_123, m_unReputationScore) == 4 );
C_ASSERT( sizeof(u64_GSReputation_t_123().m_unReputationScore) >= 4 );
C_ASSERT( offsetof(u64_GSReputation_t_123, m_bBanned) == 8 );
C_ASSERT( sizeof(u64_GSReputation_t_123().m_bBanned) >= 1 );
C_ASSERT( offsetof(u64_GSReputation_t_123, m_unBannedIP) == 12 );
C_ASSERT( sizeof(u64_GSReputation_t_123().m_unBannedIP) >= 4 );
C_ASSERT( offsetof(u64_GSReputation_t_123, m_usBannedPort) == 16 );
C_ASSERT( sizeof(u64_GSReputation_t_123().m_usBannedPort) >= 2 );
C_ASSERT( offsetof(u64_GSReputation_t_123, m_ulBannedGameID) == 20 );
C_ASSERT( sizeof(u64_GSReputation_t_123().m_ulBannedGameID) >= 8 );
C_ASSERT( offsetof(u64_GSReputation_t_123, m_unBanExpires) == 28 );
C_ASSERT( sizeof(u64_GSReputation_t_123().m_unBanExpires) >= 4 );

C_ASSERT( sizeof(w32_GSReputation_t_123) >= 40 );
C_ASSERT( offsetof(w32_GSReputation_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(w32_GSReputation_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_GSReputation_t_123, m_unReputationScore) == 4 );
C_ASSERT( sizeof(w32_GSReputation_t_123().m_unReputationScore) >= 4 );
C_ASSERT( offsetof(w32_GSReputation_t_123, m_bBanned) == 8 );
C_ASSERT( sizeof(w32_GSReputation_t_123().m_bBanned) >= 1 );
C_ASSERT( offsetof(w32_GSReputation_t_123, m_unBannedIP) == 12 );
C_ASSERT( sizeof(w32_GSReputation_t_123().m_unBannedIP) >= 4 );
C_ASSERT( offsetof(w32_GSReputation_t_123, m_usBannedPort) == 16 );
C_ASSERT( sizeof(w32_GSReputation_t_123().m_usBannedPort) >= 2 );
C_ASSERT( offsetof(w32_GSReputation_t_123, m_ulBannedGameID) == 24 );
C_ASSERT( sizeof(w32_GSReputation_t_123().m_ulBannedGameID) >= 8 );
C_ASSERT( offsetof(w32_GSReputation_t_123, m_unBanExpires) == 32 );
C_ASSERT( sizeof(w32_GSReputation_t_123().m_unBanExpires) >= 4 );

C_ASSERT( sizeof(u32_GSReputation_t_123) >= 32 );
C_ASSERT( offsetof(u32_GSReputation_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(u32_GSReputation_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_GSReputation_t_123, m_unReputationScore) == 4 );
C_ASSERT( sizeof(u32_GSReputation_t_123().m_unReputationScore) >= 4 );
C_ASSERT( offsetof(u32_GSReputation_t_123, m_bBanned) == 8 );
C_ASSERT( sizeof(u32_GSReputation_t_123().m_bBanned) >= 1 );
C_ASSERT( offsetof(u32_GSReputation_t_123, m_unBannedIP) == 12 );
C_ASSERT( sizeof(u32_GSReputation_t_123().m_unBannedIP) >= 4 );
C_ASSERT( offsetof(u32_GSReputation_t_123, m_usBannedPort) == 16 );
C_ASSERT( sizeof(u32_GSReputation_t_123().m_usBannedPort) >= 2 );
C_ASSERT( offsetof(u32_GSReputation_t_123, m_ulBannedGameID) == 20 );
C_ASSERT( sizeof(u32_GSReputation_t_123().m_ulBannedGameID) >= 8 );
C_ASSERT( offsetof(u32_GSReputation_t_123, m_unBanExpires) == 28 );
C_ASSERT( sizeof(u32_GSReputation_t_123().m_unBanExpires) >= 4 );

C_ASSERT( sizeof(w64_GSReputation_t_108) >= 40 );
C_ASSERT( offsetof(w64_GSReputation_t_108, m_eResult) == 0 );
C_ASSERT( sizeof(w64_GSReputation_t_108().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_GSReputation_t_108, m_unReputationScore) == 4 );
C_ASSERT( sizeof(w64_GSReputation_t_108().m_unReputationScore) >= 4 );
C_ASSERT( offsetof(w64_GSReputation_t_108, m_bBanned) == 8 );
C_ASSERT( sizeof(w64_GSReputation_t_108().m_bBanned) >= 1 );
C_ASSERT( offsetof(w64_GSReputation_t_108, m_unBannedIP) == 12 );
C_ASSERT( sizeof(w64_GSReputation_t_108().m_unBannedIP) >= 4 );
C_ASSERT( offsetof(w64_GSReputation_t_108, m_usBannedPort) == 16 );
C_ASSERT( sizeof(w64_GSReputation_t_108().m_usBannedPort) >= 2 );
C_ASSERT( offsetof(w64_GSReputation_t_108, m_ulBannedGameID) == 24 );
C_ASSERT( sizeof(w64_GSReputation_t_108().m_ulBannedGameID) >= 8 );
C_ASSERT( offsetof(w64_GSReputation_t_108, m_unBanExpires) == 32 );
C_ASSERT( sizeof(w64_GSReputation_t_108().m_unBanExpires) >= 4 );

C_ASSERT( sizeof(u64_GSReputation_t_108) >= 40 );
C_ASSERT( offsetof(u64_GSReputation_t_108, m_eResult) == 0 );
C_ASSERT( sizeof(u64_GSReputation_t_108().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_GSReputation_t_108, m_unReputationScore) == 4 );
C_ASSERT( sizeof(u64_GSReputation_t_108().m_unReputationScore) >= 4 );
C_ASSERT( offsetof(u64_GSReputation_t_108, m_bBanned) == 8 );
C_ASSERT( sizeof(u64_GSReputation_t_108().m_bBanned) >= 1 );
C_ASSERT( offsetof(u64_GSReputation_t_108, m_unBannedIP) == 12 );
C_ASSERT( sizeof(u64_GSReputation_t_108().m_unBannedIP) >= 4 );
C_ASSERT( offsetof(u64_GSReputation_t_108, m_usBannedPort) == 16 );
C_ASSERT( sizeof(u64_GSReputation_t_108().m_usBannedPort) >= 2 );
C_ASSERT( offsetof(u64_GSReputation_t_108, m_ulBannedGameID) == 24 );
C_ASSERT( sizeof(u64_GSReputation_t_108().m_ulBannedGameID) >= 8 );
C_ASSERT( offsetof(u64_GSReputation_t_108, m_unBanExpires) == 32 );
C_ASSERT( sizeof(u64_GSReputation_t_108().m_unBanExpires) >= 4 );

C_ASSERT( sizeof(w32_GSReputation_t_108) >= 40 );
C_ASSERT( offsetof(w32_GSReputation_t_108, m_eResult) == 0 );
C_ASSERT( sizeof(w32_GSReputation_t_108().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_GSReputation_t_108, m_unReputationScore) == 4 );
C_ASSERT( sizeof(w32_GSReputation_t_108().m_unReputationScore) >= 4 );
C_ASSERT( offsetof(w32_GSReputation_t_108, m_bBanned) == 8 );
C_ASSERT( sizeof(w32_GSReputation_t_108().m_bBanned) >= 1 );
C_ASSERT( offsetof(w32_GSReputation_t_108, m_unBannedIP) == 12 );
C_ASSERT( sizeof(w32_GSReputation_t_108().m_unBannedIP) >= 4 );
C_ASSERT( offsetof(w32_GSReputation_t_108, m_usBannedPort) == 16 );
C_ASSERT( sizeof(w32_GSReputation_t_108().m_usBannedPort) >= 2 );
C_ASSERT( offsetof(w32_GSReputation_t_108, m_ulBannedGameID) == 24 );
C_ASSERT( sizeof(w32_GSReputation_t_108().m_ulBannedGameID) >= 8 );
C_ASSERT( offsetof(w32_GSReputation_t_108, m_unBanExpires) == 32 );
C_ASSERT( sizeof(w32_GSReputation_t_108().m_unBanExpires) >= 4 );

C_ASSERT( sizeof(u32_GSReputation_t_108) >= 32 );
C_ASSERT( offsetof(u32_GSReputation_t_108, m_eResult) == 0 );
C_ASSERT( sizeof(u32_GSReputation_t_108().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_GSReputation_t_108, m_unReputationScore) == 4 );
C_ASSERT( sizeof(u32_GSReputation_t_108().m_unReputationScore) >= 4 );
C_ASSERT( offsetof(u32_GSReputation_t_108, m_bBanned) == 8 );
C_ASSERT( sizeof(u32_GSReputation_t_108().m_bBanned) >= 1 );
C_ASSERT( offsetof(u32_GSReputation_t_108, m_unBannedIP) == 12 );
C_ASSERT( sizeof(u32_GSReputation_t_108().m_unBannedIP) >= 4 );
C_ASSERT( offsetof(u32_GSReputation_t_108, m_usBannedPort) == 16 );
C_ASSERT( sizeof(u32_GSReputation_t_108().m_usBannedPort) >= 2 );
C_ASSERT( offsetof(u32_GSReputation_t_108, m_ulBannedGameID) == 20 );
C_ASSERT( sizeof(u32_GSReputation_t_108().m_ulBannedGameID) >= 8 );
C_ASSERT( offsetof(u32_GSReputation_t_108, m_unBanExpires) == 28 );
C_ASSERT( sizeof(u32_GSReputation_t_108().m_unBanExpires) >= 4 );

#ifdef __x86_64__
w64_GSReputation_t_123::operator u64_GSReputation_t_123() const
{
    u64_GSReputation_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_unReputationScore = this->m_unReputationScore;
    ret.m_bBanned = this->m_bBanned;
    ret.m_unBannedIP = this->m_unBannedIP;
    ret.m_usBannedPort = this->m_usBannedPort;
    ret.m_ulBannedGameID = this->m_ulBannedGameID;
    ret.m_unBanExpires = this->m_unBanExpires;
    return ret;
}

u64_GSReputation_t_123::operator w64_GSReputation_t_123() const
{
    w64_GSReputation_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_unReputationScore = this->m_unReputationScore;
    ret.m_bBanned = this->m_bBanned;
    ret.m_unBannedIP = this->m_unBannedIP;
    ret.m_usBannedPort = this->m_usBannedPort;
    ret.m_ulBannedGameID = this->m_ulBannedGameID;
    ret.m_unBanExpires = this->m_unBanExpires;
    return ret;
}
#endif

#ifdef __i386__
w32_GSReputation_t_123::operator u32_GSReputation_t_123() const
{
    u32_GSReputation_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_unReputationScore = this->m_unReputationScore;
    ret.m_bBanned = this->m_bBanned;
    ret.m_unBannedIP = this->m_unBannedIP;
    ret.m_usBannedPort = this->m_usBannedPort;
    ret.m_ulBannedGameID = this->m_ulBannedGameID;
    ret.m_unBanExpires = this->m_unBanExpires;
    return ret;
}

u32_GSReputation_t_123::operator w32_GSReputation_t_123() const
{
    w32_GSReputation_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_unReputationScore = this->m_unReputationScore;
    ret.m_bBanned = this->m_bBanned;
    ret.m_unBannedIP = this->m_unBannedIP;
    ret.m_usBannedPort = this->m_usBannedPort;
    ret.m_ulBannedGameID = this->m_ulBannedGameID;
    ret.m_unBanExpires = this->m_unBanExpires;
    return ret;
}
#endif

#ifdef __i386__
w32_GSReputation_t_108::operator u32_GSReputation_t_108() const
{
    u32_GSReputation_t_108 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_unReputationScore = this->m_unReputationScore;
    ret.m_bBanned = this->m_bBanned;
    ret.m_unBannedIP = this->m_unBannedIP;
    ret.m_usBannedPort = this->m_usBannedPort;
    ret.m_ulBannedGameID = this->m_ulBannedGameID;
    ret.m_unBanExpires = this->m_unBanExpires;
    return ret;
}

u32_GSReputation_t_108::operator w32_GSReputation_t_108() const
{
    w32_GSReputation_t_108 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_unReputationScore = this->m_unReputationScore;
    ret.m_bBanned = this->m_bBanned;
    ret.m_unBannedIP = this->m_unBannedIP;
    ret.m_usBannedPort = this->m_usBannedPort;
    ret.m_ulBannedGameID = this->m_ulBannedGameID;
    ret.m_unBanExpires = this->m_unBanExpires;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_GetAppDependenciesResult_t) >= 152 );
C_ASSERT( offsetof(w64_GetAppDependenciesResult_t, m_eResult) == 0 );
C_ASSERT( sizeof(w64_GetAppDependenciesResult_t().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_GetAppDependenciesResult_t, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w64_GetAppDependenciesResult_t().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(w64_GetAppDependenciesResult_t, m_rgAppIDs) == 16 );
C_ASSERT( sizeof(w64_GetAppDependenciesResult_t().m_rgAppIDs) >= 128 );
C_ASSERT( offsetof(w64_GetAppDependenciesResult_t, m_nNumAppDependencies) == 144 );
C_ASSERT( sizeof(w64_GetAppDependenciesResult_t().m_nNumAppDependencies) >= 4 );
C_ASSERT( offsetof(w64_GetAppDependenciesResult_t, m_nTotalNumAppDependencies) == 148 );
C_ASSERT( sizeof(w64_GetAppDependenciesResult_t().m_nTotalNumAppDependencies) >= 4 );

C_ASSERT( sizeof(u64_GetAppDependenciesResult_t) >= 148 );
C_ASSERT( offsetof(u64_GetAppDependenciesResult_t, m_eResult) == 0 );
C_ASSERT( sizeof(u64_GetAppDependenciesResult_t().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_GetAppDependenciesResult_t, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u64_GetAppDependenciesResult_t().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(u64_GetAppDependenciesResult_t, m_rgAppIDs) == 12 );
C_ASSERT( sizeof(u64_GetAppDependenciesResult_t().m_rgAppIDs) >= 128 );
C_ASSERT( offsetof(u64_GetAppDependenciesResult_t, m_nNumAppDependencies) == 140 );
C_ASSERT( sizeof(u64_GetAppDependenciesResult_t().m_nNumAppDependencies) >= 4 );
C_ASSERT( offsetof(u64_GetAppDependenciesResult_t, m_nTotalNumAppDependencies) == 144 );
C_ASSERT( sizeof(u64_GetAppDependenciesResult_t().m_nTotalNumAppDependencies) >= 4 );

C_ASSERT( sizeof(w32_GetAppDependenciesResult_t) >= 152 );
C_ASSERT( offsetof(w32_GetAppDependenciesResult_t, m_eResult) == 0 );
C_ASSERT( sizeof(w32_GetAppDependenciesResult_t().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_GetAppDependenciesResult_t, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w32_GetAppDependenciesResult_t().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(w32_GetAppDependenciesResult_t, m_rgAppIDs) == 16 );
C_ASSERT( sizeof(w32_GetAppDependenciesResult_t().m_rgAppIDs) >= 128 );
C_ASSERT( offsetof(w32_GetAppDependenciesResult_t, m_nNumAppDependencies) == 144 );
C_ASSERT( sizeof(w32_GetAppDependenciesResult_t().m_nNumAppDependencies) >= 4 );
C_ASSERT( offsetof(w32_GetAppDependenciesResult_t, m_nTotalNumAppDependencies) == 148 );
C_ASSERT( sizeof(w32_GetAppDependenciesResult_t().m_nTotalNumAppDependencies) >= 4 );

C_ASSERT( sizeof(u32_GetAppDependenciesResult_t) >= 148 );
C_ASSERT( offsetof(u32_GetAppDependenciesResult_t, m_eResult) == 0 );
C_ASSERT( sizeof(u32_GetAppDependenciesResult_t().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_GetAppDependenciesResult_t, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u32_GetAppDependenciesResult_t().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(u32_GetAppDependenciesResult_t, m_rgAppIDs) == 12 );
C_ASSERT( sizeof(u32_GetAppDependenciesResult_t().m_rgAppIDs) >= 128 );
C_ASSERT( offsetof(u32_GetAppDependenciesResult_t, m_nNumAppDependencies) == 140 );
C_ASSERT( sizeof(u32_GetAppDependenciesResult_t().m_nNumAppDependencies) >= 4 );
C_ASSERT( offsetof(u32_GetAppDependenciesResult_t, m_nTotalNumAppDependencies) == 144 );
C_ASSERT( sizeof(u32_GetAppDependenciesResult_t().m_nTotalNumAppDependencies) >= 4 );

#ifdef __x86_64__
w64_GetAppDependenciesResult_t::operator u64_GetAppDependenciesResult_t() const
{
    u64_GetAppDependenciesResult_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_rgAppIDs = this->m_rgAppIDs;
    ret.m_nNumAppDependencies = this->m_nNumAppDependencies;
    ret.m_nTotalNumAppDependencies = this->m_nTotalNumAppDependencies;
    return ret;
}

u64_GetAppDependenciesResult_t::operator w64_GetAppDependenciesResult_t() const
{
    w64_GetAppDependenciesResult_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_rgAppIDs = this->m_rgAppIDs;
    ret.m_nNumAppDependencies = this->m_nNumAppDependencies;
    ret.m_nTotalNumAppDependencies = this->m_nTotalNumAppDependencies;
    return ret;
}
#endif

#ifdef __i386__
w32_GetAppDependenciesResult_t::operator u32_GetAppDependenciesResult_t() const
{
    u32_GetAppDependenciesResult_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_rgAppIDs = this->m_rgAppIDs;
    ret.m_nNumAppDependencies = this->m_nNumAppDependencies;
    ret.m_nTotalNumAppDependencies = this->m_nTotalNumAppDependencies;
    return ret;
}

u32_GetAppDependenciesResult_t::operator w32_GetAppDependenciesResult_t() const
{
    w32_GetAppDependenciesResult_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_rgAppIDs = this->m_rgAppIDs;
    ret.m_nNumAppDependencies = this->m_nNumAppDependencies;
    ret.m_nTotalNumAppDependencies = this->m_nTotalNumAppDependencies;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_HTML_ChangedTitle_t) >= 16 );
C_ASSERT( offsetof(w64_HTML_ChangedTitle_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(w64_HTML_ChangedTitle_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(w64_HTML_ChangedTitle_t, pchTitle) == 8 );
C_ASSERT( sizeof(w64_HTML_ChangedTitle_t().pchTitle) >= 8 );

C_ASSERT( sizeof(u64_HTML_ChangedTitle_t) >= 12 );
C_ASSERT( offsetof(u64_HTML_ChangedTitle_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(u64_HTML_ChangedTitle_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(u64_HTML_ChangedTitle_t, pchTitle) == 4 );
C_ASSERT( sizeof(u64_HTML_ChangedTitle_t().pchTitle) >= 8 );

C_ASSERT( sizeof(w32_HTML_ChangedTitle_t) >= 8 );
C_ASSERT( offsetof(w32_HTML_ChangedTitle_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(w32_HTML_ChangedTitle_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(w32_HTML_ChangedTitle_t, pchTitle) == 4 );
C_ASSERT( sizeof(w32_HTML_ChangedTitle_t().pchTitle) >= 4 );

C_ASSERT( sizeof(u32_HTML_ChangedTitle_t) >= 8 );
C_ASSERT( offsetof(u32_HTML_ChangedTitle_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(u32_HTML_ChangedTitle_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(u32_HTML_ChangedTitle_t, pchTitle) == 4 );
C_ASSERT( sizeof(u32_HTML_ChangedTitle_t().pchTitle) >= 4 );

#ifdef __x86_64__
w64_HTML_ChangedTitle_t::operator u64_HTML_ChangedTitle_t() const
{
    u64_HTML_ChangedTitle_t ret;
    ret.unBrowserHandle = this->unBrowserHandle;
    ret.pchTitle = this->pchTitle;
    return ret;
}

u64_HTML_ChangedTitle_t::operator w64_HTML_ChangedTitle_t() const
{
    w64_HTML_ChangedTitle_t ret;
    ret.unBrowserHandle = this->unBrowserHandle;
    ret.pchTitle = this->pchTitle;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_HTML_ComboNeedsPaint_t) >= 24 );
C_ASSERT( offsetof(w64_HTML_ComboNeedsPaint_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(w64_HTML_ComboNeedsPaint_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(w64_HTML_ComboNeedsPaint_t, pBGRA) == 8 );
C_ASSERT( sizeof(w64_HTML_ComboNeedsPaint_t().pBGRA) >= 8 );
C_ASSERT( offsetof(w64_HTML_ComboNeedsPaint_t, unWide) == 16 );
C_ASSERT( sizeof(w64_HTML_ComboNeedsPaint_t().unWide) >= 4 );
C_ASSERT( offsetof(w64_HTML_ComboNeedsPaint_t, unTall) == 20 );
C_ASSERT( sizeof(w64_HTML_ComboNeedsPaint_t().unTall) >= 4 );

C_ASSERT( sizeof(u64_HTML_ComboNeedsPaint_t) >= 20 );
C_ASSERT( offsetof(u64_HTML_ComboNeedsPaint_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(u64_HTML_ComboNeedsPaint_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(u64_HTML_ComboNeedsPaint_t, pBGRA) == 4 );
C_ASSERT( sizeof(u64_HTML_ComboNeedsPaint_t().pBGRA) >= 8 );
C_ASSERT( offsetof(u64_HTML_ComboNeedsPaint_t, unWide) == 12 );
C_ASSERT( sizeof(u64_HTML_ComboNeedsPaint_t().unWide) >= 4 );
C_ASSERT( offsetof(u64_HTML_ComboNeedsPaint_t, unTall) == 16 );
C_ASSERT( sizeof(u64_HTML_ComboNeedsPaint_t().unTall) >= 4 );

C_ASSERT( sizeof(w32_HTML_ComboNeedsPaint_t) >= 16 );
C_ASSERT( offsetof(w32_HTML_ComboNeedsPaint_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(w32_HTML_ComboNeedsPaint_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(w32_HTML_ComboNeedsPaint_t, pBGRA) == 4 );
C_ASSERT( sizeof(w32_HTML_ComboNeedsPaint_t().pBGRA) >= 4 );
C_ASSERT( offsetof(w32_HTML_ComboNeedsPaint_t, unWide) == 8 );
C_ASSERT( sizeof(w32_HTML_ComboNeedsPaint_t().unWide) >= 4 );
C_ASSERT( offsetof(w32_HTML_ComboNeedsPaint_t, unTall) == 12 );
C_ASSERT( sizeof(w32_HTML_ComboNeedsPaint_t().unTall) >= 4 );

C_ASSERT( sizeof(u32_HTML_ComboNeedsPaint_t) >= 16 );
C_ASSERT( offsetof(u32_HTML_ComboNeedsPaint_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(u32_HTML_ComboNeedsPaint_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(u32_HTML_ComboNeedsPaint_t, pBGRA) == 4 );
C_ASSERT( sizeof(u32_HTML_ComboNeedsPaint_t().pBGRA) >= 4 );
C_ASSERT( offsetof(u32_HTML_ComboNeedsPaint_t, unWide) == 8 );
C_ASSERT( sizeof(u32_HTML_ComboNeedsPaint_t().unWide) >= 4 );
C_ASSERT( offsetof(u32_HTML_ComboNeedsPaint_t, unTall) == 12 );
C_ASSERT( sizeof(u32_HTML_ComboNeedsPaint_t().unTall) >= 4 );

#ifdef __x86_64__
w64_HTML_ComboNeedsPaint_t::operator u64_HTML_ComboNeedsPaint_t() const
{
    u64_HTML_ComboNeedsPaint_t ret;
    ret.unBrowserHandle = this->unBrowserHandle;
    ret.pBGRA = this->pBGRA;
    ret.unWide = this->unWide;
    ret.unTall = this->unTall;
    return ret;
}

u64_HTML_ComboNeedsPaint_t::operator w64_HTML_ComboNeedsPaint_t() const
{
    w64_HTML_ComboNeedsPaint_t ret;
    ret.unBrowserHandle = this->unBrowserHandle;
    ret.pBGRA = this->pBGRA;
    ret.unWide = this->unWide;
    ret.unTall = this->unTall;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_HTML_FileOpenDialog_t) >= 24 );
C_ASSERT( offsetof(w64_HTML_FileOpenDialog_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(w64_HTML_FileOpenDialog_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(w64_HTML_FileOpenDialog_t, pchTitle) == 8 );
C_ASSERT( sizeof(w64_HTML_FileOpenDialog_t().pchTitle) >= 8 );
C_ASSERT( offsetof(w64_HTML_FileOpenDialog_t, pchInitialFile) == 16 );
C_ASSERT( sizeof(w64_HTML_FileOpenDialog_t().pchInitialFile) >= 8 );

C_ASSERT( sizeof(u64_HTML_FileOpenDialog_t) >= 20 );
C_ASSERT( offsetof(u64_HTML_FileOpenDialog_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(u64_HTML_FileOpenDialog_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(u64_HTML_FileOpenDialog_t, pchTitle) == 4 );
C_ASSERT( sizeof(u64_HTML_FileOpenDialog_t().pchTitle) >= 8 );
C_ASSERT( offsetof(u64_HTML_FileOpenDialog_t, pchInitialFile) == 12 );
C_ASSERT( sizeof(u64_HTML_FileOpenDialog_t().pchInitialFile) >= 8 );

C_ASSERT( sizeof(w32_HTML_FileOpenDialog_t) >= 12 );
C_ASSERT( offsetof(w32_HTML_FileOpenDialog_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(w32_HTML_FileOpenDialog_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(w32_HTML_FileOpenDialog_t, pchTitle) == 4 );
C_ASSERT( sizeof(w32_HTML_FileOpenDialog_t().pchTitle) >= 4 );
C_ASSERT( offsetof(w32_HTML_FileOpenDialog_t, pchInitialFile) == 8 );
C_ASSERT( sizeof(w32_HTML_FileOpenDialog_t().pchInitialFile) >= 4 );

C_ASSERT( sizeof(u32_HTML_FileOpenDialog_t) >= 12 );
C_ASSERT( offsetof(u32_HTML_FileOpenDialog_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(u32_HTML_FileOpenDialog_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(u32_HTML_FileOpenDialog_t, pchTitle) == 4 );
C_ASSERT( sizeof(u32_HTML_FileOpenDialog_t().pchTitle) >= 4 );
C_ASSERT( offsetof(u32_HTML_FileOpenDialog_t, pchInitialFile) == 8 );
C_ASSERT( sizeof(u32_HTML_FileOpenDialog_t().pchInitialFile) >= 4 );

#ifdef __x86_64__
w64_HTML_FileOpenDialog_t::operator u64_HTML_FileOpenDialog_t() const
{
    u64_HTML_FileOpenDialog_t ret;
    ret.unBrowserHandle = this->unBrowserHandle;
    ret.pchTitle = this->pchTitle;
    ret.pchInitialFile = this->pchInitialFile;
    return ret;
}

u64_HTML_FileOpenDialog_t::operator w64_HTML_FileOpenDialog_t() const
{
    w64_HTML_FileOpenDialog_t ret;
    ret.unBrowserHandle = this->unBrowserHandle;
    ret.pchTitle = this->pchTitle;
    steamclient_unix_path_to_dos_path(1, this->pchInitialFile, g_tmppath, sizeof(g_tmppath), 1);
    ret.pchInitialFile = g_tmppath;
    return ret;
}
#endif

#ifdef __i386__
w32_HTML_FileOpenDialog_t::operator u32_HTML_FileOpenDialog_t() const
{
    u32_HTML_FileOpenDialog_t ret;
    ret.unBrowserHandle = this->unBrowserHandle;
    ret.pchTitle = this->pchTitle;
    ret.pchInitialFile = this->pchInitialFile;
    return ret;
}

u32_HTML_FileOpenDialog_t::operator w32_HTML_FileOpenDialog_t() const
{
    w32_HTML_FileOpenDialog_t ret;
    ret.unBrowserHandle = this->unBrowserHandle;
    ret.pchTitle = this->pchTitle;
    steamclient_unix_path_to_dos_path(1, this->pchInitialFile, g_tmppath, sizeof(g_tmppath), 1);
    ret.pchInitialFile = g_tmppath;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_HTML_FinishedRequest_t) >= 24 );
C_ASSERT( offsetof(w64_HTML_FinishedRequest_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(w64_HTML_FinishedRequest_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(w64_HTML_FinishedRequest_t, pchURL) == 8 );
C_ASSERT( sizeof(w64_HTML_FinishedRequest_t().pchURL) >= 8 );
C_ASSERT( offsetof(w64_HTML_FinishedRequest_t, pchPageTitle) == 16 );
C_ASSERT( sizeof(w64_HTML_FinishedRequest_t().pchPageTitle) >= 8 );

C_ASSERT( sizeof(u64_HTML_FinishedRequest_t) >= 20 );
C_ASSERT( offsetof(u64_HTML_FinishedRequest_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(u64_HTML_FinishedRequest_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(u64_HTML_FinishedRequest_t, pchURL) == 4 );
C_ASSERT( sizeof(u64_HTML_FinishedRequest_t().pchURL) >= 8 );
C_ASSERT( offsetof(u64_HTML_FinishedRequest_t, pchPageTitle) == 12 );
C_ASSERT( sizeof(u64_HTML_FinishedRequest_t().pchPageTitle) >= 8 );

C_ASSERT( sizeof(w32_HTML_FinishedRequest_t) >= 12 );
C_ASSERT( offsetof(w32_HTML_FinishedRequest_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(w32_HTML_FinishedRequest_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(w32_HTML_FinishedRequest_t, pchURL) == 4 );
C_ASSERT( sizeof(w32_HTML_FinishedRequest_t().pchURL) >= 4 );
C_ASSERT( offsetof(w32_HTML_FinishedRequest_t, pchPageTitle) == 8 );
C_ASSERT( sizeof(w32_HTML_FinishedRequest_t().pchPageTitle) >= 4 );

C_ASSERT( sizeof(u32_HTML_FinishedRequest_t) >= 12 );
C_ASSERT( offsetof(u32_HTML_FinishedRequest_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(u32_HTML_FinishedRequest_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(u32_HTML_FinishedRequest_t, pchURL) == 4 );
C_ASSERT( sizeof(u32_HTML_FinishedRequest_t().pchURL) >= 4 );
C_ASSERT( offsetof(u32_HTML_FinishedRequest_t, pchPageTitle) == 8 );
C_ASSERT( sizeof(u32_HTML_FinishedRequest_t().pchPageTitle) >= 4 );

#ifdef __x86_64__
w64_HTML_FinishedRequest_t::operator u64_HTML_FinishedRequest_t() const
{
    u64_HTML_FinishedRequest_t ret;
    ret.unBrowserHandle = this->unBrowserHandle;
    ret.pchURL = this->pchURL;
    ret.pchPageTitle = this->pchPageTitle;
    return ret;
}

u64_HTML_FinishedRequest_t::operator w64_HTML_FinishedRequest_t() const
{
    w64_HTML_FinishedRequest_t ret;
    ret.unBrowserHandle = this->unBrowserHandle;
    steamclient_unix_path_to_dos_path(1, this->pchURL, g_tmppath, sizeof(g_tmppath), 1);
    ret.pchURL = g_tmppath;
    ret.pchPageTitle = this->pchPageTitle;
    return ret;
}
#endif

#ifdef __i386__
w32_HTML_FinishedRequest_t::operator u32_HTML_FinishedRequest_t() const
{
    u32_HTML_FinishedRequest_t ret;
    ret.unBrowserHandle = this->unBrowserHandle;
    ret.pchURL = this->pchURL;
    ret.pchPageTitle = this->pchPageTitle;
    return ret;
}

u32_HTML_FinishedRequest_t::operator w32_HTML_FinishedRequest_t() const
{
    w32_HTML_FinishedRequest_t ret;
    ret.unBrowserHandle = this->unBrowserHandle;
    steamclient_unix_path_to_dos_path(1, this->pchURL, g_tmppath, sizeof(g_tmppath), 1);
    ret.pchURL = g_tmppath;
    ret.pchPageTitle = this->pchPageTitle;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_HTML_JSAlert_t) >= 16 );
C_ASSERT( offsetof(w64_HTML_JSAlert_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(w64_HTML_JSAlert_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(w64_HTML_JSAlert_t, pchMessage) == 8 );
C_ASSERT( sizeof(w64_HTML_JSAlert_t().pchMessage) >= 8 );

C_ASSERT( sizeof(u64_HTML_JSAlert_t) >= 12 );
C_ASSERT( offsetof(u64_HTML_JSAlert_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(u64_HTML_JSAlert_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(u64_HTML_JSAlert_t, pchMessage) == 4 );
C_ASSERT( sizeof(u64_HTML_JSAlert_t().pchMessage) >= 8 );

C_ASSERT( sizeof(w32_HTML_JSAlert_t) >= 8 );
C_ASSERT( offsetof(w32_HTML_JSAlert_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(w32_HTML_JSAlert_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(w32_HTML_JSAlert_t, pchMessage) == 4 );
C_ASSERT( sizeof(w32_HTML_JSAlert_t().pchMessage) >= 4 );

C_ASSERT( sizeof(u32_HTML_JSAlert_t) >= 8 );
C_ASSERT( offsetof(u32_HTML_JSAlert_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(u32_HTML_JSAlert_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(u32_HTML_JSAlert_t, pchMessage) == 4 );
C_ASSERT( sizeof(u32_HTML_JSAlert_t().pchMessage) >= 4 );

#ifdef __x86_64__
w64_HTML_JSAlert_t::operator u64_HTML_JSAlert_t() const
{
    u64_HTML_JSAlert_t ret;
    ret.unBrowserHandle = this->unBrowserHandle;
    ret.pchMessage = this->pchMessage;
    return ret;
}

u64_HTML_JSAlert_t::operator w64_HTML_JSAlert_t() const
{
    w64_HTML_JSAlert_t ret;
    ret.unBrowserHandle = this->unBrowserHandle;
    ret.pchMessage = this->pchMessage;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_HTML_JSConfirm_t) >= 16 );
C_ASSERT( offsetof(w64_HTML_JSConfirm_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(w64_HTML_JSConfirm_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(w64_HTML_JSConfirm_t, pchMessage) == 8 );
C_ASSERT( sizeof(w64_HTML_JSConfirm_t().pchMessage) >= 8 );

C_ASSERT( sizeof(u64_HTML_JSConfirm_t) >= 12 );
C_ASSERT( offsetof(u64_HTML_JSConfirm_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(u64_HTML_JSConfirm_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(u64_HTML_JSConfirm_t, pchMessage) == 4 );
C_ASSERT( sizeof(u64_HTML_JSConfirm_t().pchMessage) >= 8 );

C_ASSERT( sizeof(w32_HTML_JSConfirm_t) >= 8 );
C_ASSERT( offsetof(w32_HTML_JSConfirm_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(w32_HTML_JSConfirm_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(w32_HTML_JSConfirm_t, pchMessage) == 4 );
C_ASSERT( sizeof(w32_HTML_JSConfirm_t().pchMessage) >= 4 );

C_ASSERT( sizeof(u32_HTML_JSConfirm_t) >= 8 );
C_ASSERT( offsetof(u32_HTML_JSConfirm_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(u32_HTML_JSConfirm_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(u32_HTML_JSConfirm_t, pchMessage) == 4 );
C_ASSERT( sizeof(u32_HTML_JSConfirm_t().pchMessage) >= 4 );

#ifdef __x86_64__
w64_HTML_JSConfirm_t::operator u64_HTML_JSConfirm_t() const
{
    u64_HTML_JSConfirm_t ret;
    ret.unBrowserHandle = this->unBrowserHandle;
    ret.pchMessage = this->pchMessage;
    return ret;
}

u64_HTML_JSConfirm_t::operator w64_HTML_JSConfirm_t() const
{
    w64_HTML_JSConfirm_t ret;
    ret.unBrowserHandle = this->unBrowserHandle;
    ret.pchMessage = this->pchMessage;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_HTML_LinkAtPosition_t) >= 32 );
C_ASSERT( offsetof(w64_HTML_LinkAtPosition_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(w64_HTML_LinkAtPosition_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(w64_HTML_LinkAtPosition_t, x) == 4 );
C_ASSERT( sizeof(w64_HTML_LinkAtPosition_t().x) >= 4 );
C_ASSERT( offsetof(w64_HTML_LinkAtPosition_t, y) == 8 );
C_ASSERT( sizeof(w64_HTML_LinkAtPosition_t().y) >= 4 );
C_ASSERT( offsetof(w64_HTML_LinkAtPosition_t, pchURL) == 16 );
C_ASSERT( sizeof(w64_HTML_LinkAtPosition_t().pchURL) >= 8 );
C_ASSERT( offsetof(w64_HTML_LinkAtPosition_t, bInput) == 24 );
C_ASSERT( sizeof(w64_HTML_LinkAtPosition_t().bInput) >= 1 );
C_ASSERT( offsetof(w64_HTML_LinkAtPosition_t, bLiveLink) == 25 );
C_ASSERT( sizeof(w64_HTML_LinkAtPosition_t().bLiveLink) >= 1 );

C_ASSERT( sizeof(u64_HTML_LinkAtPosition_t) >= 24 );
C_ASSERT( offsetof(u64_HTML_LinkAtPosition_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(u64_HTML_LinkAtPosition_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(u64_HTML_LinkAtPosition_t, x) == 4 );
C_ASSERT( sizeof(u64_HTML_LinkAtPosition_t().x) >= 4 );
C_ASSERT( offsetof(u64_HTML_LinkAtPosition_t, y) == 8 );
C_ASSERT( sizeof(u64_HTML_LinkAtPosition_t().y) >= 4 );
C_ASSERT( offsetof(u64_HTML_LinkAtPosition_t, pchURL) == 12 );
C_ASSERT( sizeof(u64_HTML_LinkAtPosition_t().pchURL) >= 8 );
C_ASSERT( offsetof(u64_HTML_LinkAtPosition_t, bInput) == 20 );
C_ASSERT( sizeof(u64_HTML_LinkAtPosition_t().bInput) >= 1 );
C_ASSERT( offsetof(u64_HTML_LinkAtPosition_t, bLiveLink) == 21 );
C_ASSERT( sizeof(u64_HTML_LinkAtPosition_t().bLiveLink) >= 1 );

C_ASSERT( sizeof(w32_HTML_LinkAtPosition_t) >= 20 );
C_ASSERT( offsetof(w32_HTML_LinkAtPosition_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(w32_HTML_LinkAtPosition_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(w32_HTML_LinkAtPosition_t, x) == 4 );
C_ASSERT( sizeof(w32_HTML_LinkAtPosition_t().x) >= 4 );
C_ASSERT( offsetof(w32_HTML_LinkAtPosition_t, y) == 8 );
C_ASSERT( sizeof(w32_HTML_LinkAtPosition_t().y) >= 4 );
C_ASSERT( offsetof(w32_HTML_LinkAtPosition_t, pchURL) == 12 );
C_ASSERT( sizeof(w32_HTML_LinkAtPosition_t().pchURL) >= 4 );
C_ASSERT( offsetof(w32_HTML_LinkAtPosition_t, bInput) == 16 );
C_ASSERT( sizeof(w32_HTML_LinkAtPosition_t().bInput) >= 1 );
C_ASSERT( offsetof(w32_HTML_LinkAtPosition_t, bLiveLink) == 17 );
C_ASSERT( sizeof(w32_HTML_LinkAtPosition_t().bLiveLink) >= 1 );

C_ASSERT( sizeof(u32_HTML_LinkAtPosition_t) >= 20 );
C_ASSERT( offsetof(u32_HTML_LinkAtPosition_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(u32_HTML_LinkAtPosition_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(u32_HTML_LinkAtPosition_t, x) == 4 );
C_ASSERT( sizeof(u32_HTML_LinkAtPosition_t().x) >= 4 );
C_ASSERT( offsetof(u32_HTML_LinkAtPosition_t, y) == 8 );
C_ASSERT( sizeof(u32_HTML_LinkAtPosition_t().y) >= 4 );
C_ASSERT( offsetof(u32_HTML_LinkAtPosition_t, pchURL) == 12 );
C_ASSERT( sizeof(u32_HTML_LinkAtPosition_t().pchURL) >= 4 );
C_ASSERT( offsetof(u32_HTML_LinkAtPosition_t, bInput) == 16 );
C_ASSERT( sizeof(u32_HTML_LinkAtPosition_t().bInput) >= 1 );
C_ASSERT( offsetof(u32_HTML_LinkAtPosition_t, bLiveLink) == 17 );
C_ASSERT( sizeof(u32_HTML_LinkAtPosition_t().bLiveLink) >= 1 );

#ifdef __x86_64__
w64_HTML_LinkAtPosition_t::operator u64_HTML_LinkAtPosition_t() const
{
    u64_HTML_LinkAtPosition_t ret;
    ret.unBrowserHandle = this->unBrowserHandle;
    ret.x = this->x;
    ret.y = this->y;
    ret.pchURL = this->pchURL;
    ret.bInput = this->bInput;
    ret.bLiveLink = this->bLiveLink;
    return ret;
}

u64_HTML_LinkAtPosition_t::operator w64_HTML_LinkAtPosition_t() const
{
    w64_HTML_LinkAtPosition_t ret;
    ret.unBrowserHandle = this->unBrowserHandle;
    ret.x = this->x;
    ret.y = this->y;
    steamclient_unix_path_to_dos_path(1, this->pchURL, g_tmppath, sizeof(g_tmppath), 1);
    ret.pchURL = g_tmppath;
    ret.bInput = this->bInput;
    ret.bLiveLink = this->bLiveLink;
    return ret;
}
#endif

#ifdef __i386__
w32_HTML_LinkAtPosition_t::operator u32_HTML_LinkAtPosition_t() const
{
    u32_HTML_LinkAtPosition_t ret;
    ret.unBrowserHandle = this->unBrowserHandle;
    ret.x = this->x;
    ret.y = this->y;
    ret.pchURL = this->pchURL;
    ret.bInput = this->bInput;
    ret.bLiveLink = this->bLiveLink;
    return ret;
}

u32_HTML_LinkAtPosition_t::operator w32_HTML_LinkAtPosition_t() const
{
    w32_HTML_LinkAtPosition_t ret;
    ret.unBrowserHandle = this->unBrowserHandle;
    ret.x = this->x;
    ret.y = this->y;
    steamclient_unix_path_to_dos_path(1, this->pchURL, g_tmppath, sizeof(g_tmppath), 1);
    ret.pchURL = g_tmppath;
    ret.bInput = this->bInput;
    ret.bLiveLink = this->bLiveLink;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_HTML_NeedsPaint_t) >= 56 );
C_ASSERT( offsetof(w64_HTML_NeedsPaint_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(w64_HTML_NeedsPaint_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(w64_HTML_NeedsPaint_t, pBGRA) == 8 );
C_ASSERT( sizeof(w64_HTML_NeedsPaint_t().pBGRA) >= 8 );
C_ASSERT( offsetof(w64_HTML_NeedsPaint_t, unWide) == 16 );
C_ASSERT( sizeof(w64_HTML_NeedsPaint_t().unWide) >= 4 );
C_ASSERT( offsetof(w64_HTML_NeedsPaint_t, unTall) == 20 );
C_ASSERT( sizeof(w64_HTML_NeedsPaint_t().unTall) >= 4 );
C_ASSERT( offsetof(w64_HTML_NeedsPaint_t, unUpdateX) == 24 );
C_ASSERT( sizeof(w64_HTML_NeedsPaint_t().unUpdateX) >= 4 );
C_ASSERT( offsetof(w64_HTML_NeedsPaint_t, unUpdateY) == 28 );
C_ASSERT( sizeof(w64_HTML_NeedsPaint_t().unUpdateY) >= 4 );
C_ASSERT( offsetof(w64_HTML_NeedsPaint_t, unUpdateWide) == 32 );
C_ASSERT( sizeof(w64_HTML_NeedsPaint_t().unUpdateWide) >= 4 );
C_ASSERT( offsetof(w64_HTML_NeedsPaint_t, unUpdateTall) == 36 );
C_ASSERT( sizeof(w64_HTML_NeedsPaint_t().unUpdateTall) >= 4 );
C_ASSERT( offsetof(w64_HTML_NeedsPaint_t, unScrollX) == 40 );
C_ASSERT( sizeof(w64_HTML_NeedsPaint_t().unScrollX) >= 4 );
C_ASSERT( offsetof(w64_HTML_NeedsPaint_t, unScrollY) == 44 );
C_ASSERT( sizeof(w64_HTML_NeedsPaint_t().unScrollY) >= 4 );
C_ASSERT( offsetof(w64_HTML_NeedsPaint_t, flPageScale) == 48 );
C_ASSERT( sizeof(w64_HTML_NeedsPaint_t().flPageScale) >= 4 );
C_ASSERT( offsetof(w64_HTML_NeedsPaint_t, unPageSerial) == 52 );
C_ASSERT( sizeof(w64_HTML_NeedsPaint_t().unPageSerial) >= 4 );

C_ASSERT( sizeof(u64_HTML_NeedsPaint_t) >= 52 );
C_ASSERT( offsetof(u64_HTML_NeedsPaint_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(u64_HTML_NeedsPaint_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(u64_HTML_NeedsPaint_t, pBGRA) == 4 );
C_ASSERT( sizeof(u64_HTML_NeedsPaint_t().pBGRA) >= 8 );
C_ASSERT( offsetof(u64_HTML_NeedsPaint_t, unWide) == 12 );
C_ASSERT( sizeof(u64_HTML_NeedsPaint_t().unWide) >= 4 );
C_ASSERT( offsetof(u64_HTML_NeedsPaint_t, unTall) == 16 );
C_ASSERT( sizeof(u64_HTML_NeedsPaint_t().unTall) >= 4 );
C_ASSERT( offsetof(u64_HTML_NeedsPaint_t, unUpdateX) == 20 );
C_ASSERT( sizeof(u64_HTML_NeedsPaint_t().unUpdateX) >= 4 );
C_ASSERT( offsetof(u64_HTML_NeedsPaint_t, unUpdateY) == 24 );
C_ASSERT( sizeof(u64_HTML_NeedsPaint_t().unUpdateY) >= 4 );
C_ASSERT( offsetof(u64_HTML_NeedsPaint_t, unUpdateWide) == 28 );
C_ASSERT( sizeof(u64_HTML_NeedsPaint_t().unUpdateWide) >= 4 );
C_ASSERT( offsetof(u64_HTML_NeedsPaint_t, unUpdateTall) == 32 );
C_ASSERT( sizeof(u64_HTML_NeedsPaint_t().unUpdateTall) >= 4 );
C_ASSERT( offsetof(u64_HTML_NeedsPaint_t, unScrollX) == 36 );
C_ASSERT( sizeof(u64_HTML_NeedsPaint_t().unScrollX) >= 4 );
C_ASSERT( offsetof(u64_HTML_NeedsPaint_t, unScrollY) == 40 );
C_ASSERT( sizeof(u64_HTML_NeedsPaint_t().unScrollY) >= 4 );
C_ASSERT( offsetof(u64_HTML_NeedsPaint_t, flPageScale) == 44 );
C_ASSERT( sizeof(u64_HTML_NeedsPaint_t().flPageScale) >= 4 );
C_ASSERT( offsetof(u64_HTML_NeedsPaint_t, unPageSerial) == 48 );
C_ASSERT( sizeof(u64_HTML_NeedsPaint_t().unPageSerial) >= 4 );

C_ASSERT( sizeof(w32_HTML_NeedsPaint_t) >= 48 );
C_ASSERT( offsetof(w32_HTML_NeedsPaint_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(w32_HTML_NeedsPaint_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(w32_HTML_NeedsPaint_t, pBGRA) == 4 );
C_ASSERT( sizeof(w32_HTML_NeedsPaint_t().pBGRA) >= 4 );
C_ASSERT( offsetof(w32_HTML_NeedsPaint_t, unWide) == 8 );
C_ASSERT( sizeof(w32_HTML_NeedsPaint_t().unWide) >= 4 );
C_ASSERT( offsetof(w32_HTML_NeedsPaint_t, unTall) == 12 );
C_ASSERT( sizeof(w32_HTML_NeedsPaint_t().unTall) >= 4 );
C_ASSERT( offsetof(w32_HTML_NeedsPaint_t, unUpdateX) == 16 );
C_ASSERT( sizeof(w32_HTML_NeedsPaint_t().unUpdateX) >= 4 );
C_ASSERT( offsetof(w32_HTML_NeedsPaint_t, unUpdateY) == 20 );
C_ASSERT( sizeof(w32_HTML_NeedsPaint_t().unUpdateY) >= 4 );
C_ASSERT( offsetof(w32_HTML_NeedsPaint_t, unUpdateWide) == 24 );
C_ASSERT( sizeof(w32_HTML_NeedsPaint_t().unUpdateWide) >= 4 );
C_ASSERT( offsetof(w32_HTML_NeedsPaint_t, unUpdateTall) == 28 );
C_ASSERT( sizeof(w32_HTML_NeedsPaint_t().unUpdateTall) >= 4 );
C_ASSERT( offsetof(w32_HTML_NeedsPaint_t, unScrollX) == 32 );
C_ASSERT( sizeof(w32_HTML_NeedsPaint_t().unScrollX) >= 4 );
C_ASSERT( offsetof(w32_HTML_NeedsPaint_t, unScrollY) == 36 );
C_ASSERT( sizeof(w32_HTML_NeedsPaint_t().unScrollY) >= 4 );
C_ASSERT( offsetof(w32_HTML_NeedsPaint_t, flPageScale) == 40 );
C_ASSERT( sizeof(w32_HTML_NeedsPaint_t().flPageScale) >= 4 );
C_ASSERT( offsetof(w32_HTML_NeedsPaint_t, unPageSerial) == 44 );
C_ASSERT( sizeof(w32_HTML_NeedsPaint_t().unPageSerial) >= 4 );

C_ASSERT( sizeof(u32_HTML_NeedsPaint_t) >= 48 );
C_ASSERT( offsetof(u32_HTML_NeedsPaint_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(u32_HTML_NeedsPaint_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(u32_HTML_NeedsPaint_t, pBGRA) == 4 );
C_ASSERT( sizeof(u32_HTML_NeedsPaint_t().pBGRA) >= 4 );
C_ASSERT( offsetof(u32_HTML_NeedsPaint_t, unWide) == 8 );
C_ASSERT( sizeof(u32_HTML_NeedsPaint_t().unWide) >= 4 );
C_ASSERT( offsetof(u32_HTML_NeedsPaint_t, unTall) == 12 );
C_ASSERT( sizeof(u32_HTML_NeedsPaint_t().unTall) >= 4 );
C_ASSERT( offsetof(u32_HTML_NeedsPaint_t, unUpdateX) == 16 );
C_ASSERT( sizeof(u32_HTML_NeedsPaint_t().unUpdateX) >= 4 );
C_ASSERT( offsetof(u32_HTML_NeedsPaint_t, unUpdateY) == 20 );
C_ASSERT( sizeof(u32_HTML_NeedsPaint_t().unUpdateY) >= 4 );
C_ASSERT( offsetof(u32_HTML_NeedsPaint_t, unUpdateWide) == 24 );
C_ASSERT( sizeof(u32_HTML_NeedsPaint_t().unUpdateWide) >= 4 );
C_ASSERT( offsetof(u32_HTML_NeedsPaint_t, unUpdateTall) == 28 );
C_ASSERT( sizeof(u32_HTML_NeedsPaint_t().unUpdateTall) >= 4 );
C_ASSERT( offsetof(u32_HTML_NeedsPaint_t, unScrollX) == 32 );
C_ASSERT( sizeof(u32_HTML_NeedsPaint_t().unScrollX) >= 4 );
C_ASSERT( offsetof(u32_HTML_NeedsPaint_t, unScrollY) == 36 );
C_ASSERT( sizeof(u32_HTML_NeedsPaint_t().unScrollY) >= 4 );
C_ASSERT( offsetof(u32_HTML_NeedsPaint_t, flPageScale) == 40 );
C_ASSERT( sizeof(u32_HTML_NeedsPaint_t().flPageScale) >= 4 );
C_ASSERT( offsetof(u32_HTML_NeedsPaint_t, unPageSerial) == 44 );
C_ASSERT( sizeof(u32_HTML_NeedsPaint_t().unPageSerial) >= 4 );

#ifdef __x86_64__
w64_HTML_NeedsPaint_t::operator u64_HTML_NeedsPaint_t() const
{
    u64_HTML_NeedsPaint_t ret;
    ret.unBrowserHandle = this->unBrowserHandle;
    ret.pBGRA = this->pBGRA;
    ret.unWide = this->unWide;
    ret.unTall = this->unTall;
    ret.unUpdateX = this->unUpdateX;
    ret.unUpdateY = this->unUpdateY;
    ret.unUpdateWide = this->unUpdateWide;
    ret.unUpdateTall = this->unUpdateTall;
    ret.unScrollX = this->unScrollX;
    ret.unScrollY = this->unScrollY;
    ret.flPageScale = this->flPageScale;
    ret.unPageSerial = this->unPageSerial;
    return ret;
}

u64_HTML_NeedsPaint_t::operator w64_HTML_NeedsPaint_t() const
{
    w64_HTML_NeedsPaint_t ret;
    ret.unBrowserHandle = this->unBrowserHandle;
    ret.pBGRA = this->pBGRA;
    ret.unWide = this->unWide;
    ret.unTall = this->unTall;
    ret.unUpdateX = this->unUpdateX;
    ret.unUpdateY = this->unUpdateY;
    ret.unUpdateWide = this->unUpdateWide;
    ret.unUpdateTall = this->unUpdateTall;
    ret.unScrollX = this->unScrollX;
    ret.unScrollY = this->unScrollY;
    ret.flPageScale = this->flPageScale;
    ret.unPageSerial = this->unPageSerial;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_HTML_NewWindow_t_132x) >= 40 );
C_ASSERT( offsetof(w64_HTML_NewWindow_t_132x, unBrowserHandle) == 0 );
C_ASSERT( sizeof(w64_HTML_NewWindow_t_132x().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(w64_HTML_NewWindow_t_132x, pchURL) == 8 );
C_ASSERT( sizeof(w64_HTML_NewWindow_t_132x().pchURL) >= 8 );
C_ASSERT( offsetof(w64_HTML_NewWindow_t_132x, unX) == 16 );
C_ASSERT( sizeof(w64_HTML_NewWindow_t_132x().unX) >= 4 );
C_ASSERT( offsetof(w64_HTML_NewWindow_t_132x, unY) == 20 );
C_ASSERT( sizeof(w64_HTML_NewWindow_t_132x().unY) >= 4 );
C_ASSERT( offsetof(w64_HTML_NewWindow_t_132x, unWide) == 24 );
C_ASSERT( sizeof(w64_HTML_NewWindow_t_132x().unWide) >= 4 );
C_ASSERT( offsetof(w64_HTML_NewWindow_t_132x, unTall) == 28 );
C_ASSERT( sizeof(w64_HTML_NewWindow_t_132x().unTall) >= 4 );
C_ASSERT( offsetof(w64_HTML_NewWindow_t_132x, unNewWindow_BrowserHandle_IGNORE) == 32 );
C_ASSERT( sizeof(w64_HTML_NewWindow_t_132x().unNewWindow_BrowserHandle_IGNORE) >= 4 );

C_ASSERT( sizeof(u64_HTML_NewWindow_t_132x) >= 32 );
C_ASSERT( offsetof(u64_HTML_NewWindow_t_132x, unBrowserHandle) == 0 );
C_ASSERT( sizeof(u64_HTML_NewWindow_t_132x().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(u64_HTML_NewWindow_t_132x, pchURL) == 4 );
C_ASSERT( sizeof(u64_HTML_NewWindow_t_132x().pchURL) >= 8 );
C_ASSERT( offsetof(u64_HTML_NewWindow_t_132x, unX) == 12 );
C_ASSERT( sizeof(u64_HTML_NewWindow_t_132x().unX) >= 4 );
C_ASSERT( offsetof(u64_HTML_NewWindow_t_132x, unY) == 16 );
C_ASSERT( sizeof(u64_HTML_NewWindow_t_132x().unY) >= 4 );
C_ASSERT( offsetof(u64_HTML_NewWindow_t_132x, unWide) == 20 );
C_ASSERT( sizeof(u64_HTML_NewWindow_t_132x().unWide) >= 4 );
C_ASSERT( offsetof(u64_HTML_NewWindow_t_132x, unTall) == 24 );
C_ASSERT( sizeof(u64_HTML_NewWindow_t_132x().unTall) >= 4 );
C_ASSERT( offsetof(u64_HTML_NewWindow_t_132x, unNewWindow_BrowserHandle_IGNORE) == 28 );
C_ASSERT( sizeof(u64_HTML_NewWindow_t_132x().unNewWindow_BrowserHandle_IGNORE) >= 4 );

C_ASSERT( sizeof(w32_HTML_NewWindow_t_132x) >= 28 );
C_ASSERT( offsetof(w32_HTML_NewWindow_t_132x, unBrowserHandle) == 0 );
C_ASSERT( sizeof(w32_HTML_NewWindow_t_132x().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(w32_HTML_NewWindow_t_132x, pchURL) == 4 );
C_ASSERT( sizeof(w32_HTML_NewWindow_t_132x().pchURL) >= 4 );
C_ASSERT( offsetof(w32_HTML_NewWindow_t_132x, unX) == 8 );
C_ASSERT( sizeof(w32_HTML_NewWindow_t_132x().unX) >= 4 );
C_ASSERT( offsetof(w32_HTML_NewWindow_t_132x, unY) == 12 );
C_ASSERT( sizeof(w32_HTML_NewWindow_t_132x().unY) >= 4 );
C_ASSERT( offsetof(w32_HTML_NewWindow_t_132x, unWide) == 16 );
C_ASSERT( sizeof(w32_HTML_NewWindow_t_132x().unWide) >= 4 );
C_ASSERT( offsetof(w32_HTML_NewWindow_t_132x, unTall) == 20 );
C_ASSERT( sizeof(w32_HTML_NewWindow_t_132x().unTall) >= 4 );
C_ASSERT( offsetof(w32_HTML_NewWindow_t_132x, unNewWindow_BrowserHandle_IGNORE) == 24 );
C_ASSERT( sizeof(w32_HTML_NewWindow_t_132x().unNewWindow_BrowserHandle_IGNORE) >= 4 );

C_ASSERT( sizeof(u32_HTML_NewWindow_t_132x) >= 28 );
C_ASSERT( offsetof(u32_HTML_NewWindow_t_132x, unBrowserHandle) == 0 );
C_ASSERT( sizeof(u32_HTML_NewWindow_t_132x().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(u32_HTML_NewWindow_t_132x, pchURL) == 4 );
C_ASSERT( sizeof(u32_HTML_NewWindow_t_132x().pchURL) >= 4 );
C_ASSERT( offsetof(u32_HTML_NewWindow_t_132x, unX) == 8 );
C_ASSERT( sizeof(u32_HTML_NewWindow_t_132x().unX) >= 4 );
C_ASSERT( offsetof(u32_HTML_NewWindow_t_132x, unY) == 12 );
C_ASSERT( sizeof(u32_HTML_NewWindow_t_132x().unY) >= 4 );
C_ASSERT( offsetof(u32_HTML_NewWindow_t_132x, unWide) == 16 );
C_ASSERT( sizeof(u32_HTML_NewWindow_t_132x().unWide) >= 4 );
C_ASSERT( offsetof(u32_HTML_NewWindow_t_132x, unTall) == 20 );
C_ASSERT( sizeof(u32_HTML_NewWindow_t_132x().unTall) >= 4 );
C_ASSERT( offsetof(u32_HTML_NewWindow_t_132x, unNewWindow_BrowserHandle_IGNORE) == 24 );
C_ASSERT( sizeof(u32_HTML_NewWindow_t_132x().unNewWindow_BrowserHandle_IGNORE) >= 4 );

C_ASSERT( sizeof(w64_HTML_NewWindow_t_130x) >= 32 );
C_ASSERT( offsetof(w64_HTML_NewWindow_t_130x, unBrowserHandle) == 0 );
C_ASSERT( sizeof(w64_HTML_NewWindow_t_130x().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(w64_HTML_NewWindow_t_130x, pchURL) == 8 );
C_ASSERT( sizeof(w64_HTML_NewWindow_t_130x().pchURL) >= 8 );
C_ASSERT( offsetof(w64_HTML_NewWindow_t_130x, unX) == 16 );
C_ASSERT( sizeof(w64_HTML_NewWindow_t_130x().unX) >= 4 );
C_ASSERT( offsetof(w64_HTML_NewWindow_t_130x, unY) == 20 );
C_ASSERT( sizeof(w64_HTML_NewWindow_t_130x().unY) >= 4 );
C_ASSERT( offsetof(w64_HTML_NewWindow_t_130x, unWide) == 24 );
C_ASSERT( sizeof(w64_HTML_NewWindow_t_130x().unWide) >= 4 );
C_ASSERT( offsetof(w64_HTML_NewWindow_t_130x, unTall) == 28 );
C_ASSERT( sizeof(w64_HTML_NewWindow_t_130x().unTall) >= 4 );

C_ASSERT( sizeof(u64_HTML_NewWindow_t_130x) >= 28 );
C_ASSERT( offsetof(u64_HTML_NewWindow_t_130x, unBrowserHandle) == 0 );
C_ASSERT( sizeof(u64_HTML_NewWindow_t_130x().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(u64_HTML_NewWindow_t_130x, pchURL) == 4 );
C_ASSERT( sizeof(u64_HTML_NewWindow_t_130x().pchURL) >= 8 );
C_ASSERT( offsetof(u64_HTML_NewWindow_t_130x, unX) == 12 );
C_ASSERT( sizeof(u64_HTML_NewWindow_t_130x().unX) >= 4 );
C_ASSERT( offsetof(u64_HTML_NewWindow_t_130x, unY) == 16 );
C_ASSERT( sizeof(u64_HTML_NewWindow_t_130x().unY) >= 4 );
C_ASSERT( offsetof(u64_HTML_NewWindow_t_130x, unWide) == 20 );
C_ASSERT( sizeof(u64_HTML_NewWindow_t_130x().unWide) >= 4 );
C_ASSERT( offsetof(u64_HTML_NewWindow_t_130x, unTall) == 24 );
C_ASSERT( sizeof(u64_HTML_NewWindow_t_130x().unTall) >= 4 );

C_ASSERT( sizeof(w32_HTML_NewWindow_t_130x) >= 24 );
C_ASSERT( offsetof(w32_HTML_NewWindow_t_130x, unBrowserHandle) == 0 );
C_ASSERT( sizeof(w32_HTML_NewWindow_t_130x().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(w32_HTML_NewWindow_t_130x, pchURL) == 4 );
C_ASSERT( sizeof(w32_HTML_NewWindow_t_130x().pchURL) >= 4 );
C_ASSERT( offsetof(w32_HTML_NewWindow_t_130x, unX) == 8 );
C_ASSERT( sizeof(w32_HTML_NewWindow_t_130x().unX) >= 4 );
C_ASSERT( offsetof(w32_HTML_NewWindow_t_130x, unY) == 12 );
C_ASSERT( sizeof(w32_HTML_NewWindow_t_130x().unY) >= 4 );
C_ASSERT( offsetof(w32_HTML_NewWindow_t_130x, unWide) == 16 );
C_ASSERT( sizeof(w32_HTML_NewWindow_t_130x().unWide) >= 4 );
C_ASSERT( offsetof(w32_HTML_NewWindow_t_130x, unTall) == 20 );
C_ASSERT( sizeof(w32_HTML_NewWindow_t_130x().unTall) >= 4 );

C_ASSERT( sizeof(u32_HTML_NewWindow_t_130x) >= 24 );
C_ASSERT( offsetof(u32_HTML_NewWindow_t_130x, unBrowserHandle) == 0 );
C_ASSERT( sizeof(u32_HTML_NewWindow_t_130x().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(u32_HTML_NewWindow_t_130x, pchURL) == 4 );
C_ASSERT( sizeof(u32_HTML_NewWindow_t_130x().pchURL) >= 4 );
C_ASSERT( offsetof(u32_HTML_NewWindow_t_130x, unX) == 8 );
C_ASSERT( sizeof(u32_HTML_NewWindow_t_130x().unX) >= 4 );
C_ASSERT( offsetof(u32_HTML_NewWindow_t_130x, unY) == 12 );
C_ASSERT( sizeof(u32_HTML_NewWindow_t_130x().unY) >= 4 );
C_ASSERT( offsetof(u32_HTML_NewWindow_t_130x, unWide) == 16 );
C_ASSERT( sizeof(u32_HTML_NewWindow_t_130x().unWide) >= 4 );
C_ASSERT( offsetof(u32_HTML_NewWindow_t_130x, unTall) == 20 );
C_ASSERT( sizeof(u32_HTML_NewWindow_t_130x().unTall) >= 4 );

#ifdef __x86_64__
w64_HTML_NewWindow_t_132x::operator u64_HTML_NewWindow_t_132x() const
{
    u64_HTML_NewWindow_t_132x ret;
    ret.unBrowserHandle = this->unBrowserHandle;
    ret.pchURL = this->pchURL;
    ret.unX = this->unX;
    ret.unY = this->unY;
    ret.unWide = this->unWide;
    ret.unTall = this->unTall;
    ret.unNewWindow_BrowserHandle_IGNORE = this->unNewWindow_BrowserHandle_IGNORE;
    return ret;
}

u64_HTML_NewWindow_t_132x::operator w64_HTML_NewWindow_t_132x() const
{
    w64_HTML_NewWindow_t_132x ret;
    ret.unBrowserHandle = this->unBrowserHandle;
    steamclient_unix_path_to_dos_path(1, this->pchURL, g_tmppath, sizeof(g_tmppath), 1);
    ret.pchURL = g_tmppath;
    ret.unX = this->unX;
    ret.unY = this->unY;
    ret.unWide = this->unWide;
    ret.unTall = this->unTall;
    ret.unNewWindow_BrowserHandle_IGNORE = this->unNewWindow_BrowserHandle_IGNORE;
    return ret;
}
#endif

#ifdef __i386__
w32_HTML_NewWindow_t_132x::operator u32_HTML_NewWindow_t_132x() const
{
    u32_HTML_NewWindow_t_132x ret;
    ret.unBrowserHandle = this->unBrowserHandle;
    ret.pchURL = this->pchURL;
    ret.unX = this->unX;
    ret.unY = this->unY;
    ret.unWide = this->unWide;
    ret.unTall = this->unTall;
    ret.unNewWindow_BrowserHandle_IGNORE = this->unNewWindow_BrowserHandle_IGNORE;
    return ret;
}

u32_HTML_NewWindow_t_132x::operator w32_HTML_NewWindow_t_132x() const
{
    w32_HTML_NewWindow_t_132x ret;
    ret.unBrowserHandle = this->unBrowserHandle;
    steamclient_unix_path_to_dos_path(1, this->pchURL, g_tmppath, sizeof(g_tmppath), 1);
    ret.pchURL = g_tmppath;
    ret.unX = this->unX;
    ret.unY = this->unY;
    ret.unWide = this->unWide;
    ret.unTall = this->unTall;
    ret.unNewWindow_BrowserHandle_IGNORE = this->unNewWindow_BrowserHandle_IGNORE;
    return ret;
}
#endif

#ifdef __x86_64__
w64_HTML_NewWindow_t_130x::operator u64_HTML_NewWindow_t_130x() const
{
    u64_HTML_NewWindow_t_130x ret;
    ret.unBrowserHandle = this->unBrowserHandle;
    ret.pchURL = this->pchURL;
    ret.unX = this->unX;
    ret.unY = this->unY;
    ret.unWide = this->unWide;
    ret.unTall = this->unTall;
    return ret;
}

u64_HTML_NewWindow_t_130x::operator w64_HTML_NewWindow_t_130x() const
{
    w64_HTML_NewWindow_t_130x ret;
    ret.unBrowserHandle = this->unBrowserHandle;
    steamclient_unix_path_to_dos_path(1, this->pchURL, g_tmppath, sizeof(g_tmppath), 1);
    ret.pchURL = g_tmppath;
    ret.unX = this->unX;
    ret.unY = this->unY;
    ret.unWide = this->unWide;
    ret.unTall = this->unTall;
    return ret;
}
#endif

#ifdef __i386__
w32_HTML_NewWindow_t_130x::operator u32_HTML_NewWindow_t_130x() const
{
    u32_HTML_NewWindow_t_130x ret;
    ret.unBrowserHandle = this->unBrowserHandle;
    ret.pchURL = this->pchURL;
    ret.unX = this->unX;
    ret.unY = this->unY;
    ret.unWide = this->unWide;
    ret.unTall = this->unTall;
    return ret;
}

u32_HTML_NewWindow_t_130x::operator w32_HTML_NewWindow_t_130x() const
{
    w32_HTML_NewWindow_t_130x ret;
    ret.unBrowserHandle = this->unBrowserHandle;
    steamclient_unix_path_to_dos_path(1, this->pchURL, g_tmppath, sizeof(g_tmppath), 1);
    ret.pchURL = g_tmppath;
    ret.unX = this->unX;
    ret.unY = this->unY;
    ret.unWide = this->unWide;
    ret.unTall = this->unTall;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_HTML_OpenLinkInNewTab_t) >= 16 );
C_ASSERT( offsetof(w64_HTML_OpenLinkInNewTab_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(w64_HTML_OpenLinkInNewTab_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(w64_HTML_OpenLinkInNewTab_t, pchURL) == 8 );
C_ASSERT( sizeof(w64_HTML_OpenLinkInNewTab_t().pchURL) >= 8 );

C_ASSERT( sizeof(u64_HTML_OpenLinkInNewTab_t) >= 12 );
C_ASSERT( offsetof(u64_HTML_OpenLinkInNewTab_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(u64_HTML_OpenLinkInNewTab_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(u64_HTML_OpenLinkInNewTab_t, pchURL) == 4 );
C_ASSERT( sizeof(u64_HTML_OpenLinkInNewTab_t().pchURL) >= 8 );

C_ASSERT( sizeof(w32_HTML_OpenLinkInNewTab_t) >= 8 );
C_ASSERT( offsetof(w32_HTML_OpenLinkInNewTab_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(w32_HTML_OpenLinkInNewTab_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(w32_HTML_OpenLinkInNewTab_t, pchURL) == 4 );
C_ASSERT( sizeof(w32_HTML_OpenLinkInNewTab_t().pchURL) >= 4 );

C_ASSERT( sizeof(u32_HTML_OpenLinkInNewTab_t) >= 8 );
C_ASSERT( offsetof(u32_HTML_OpenLinkInNewTab_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(u32_HTML_OpenLinkInNewTab_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(u32_HTML_OpenLinkInNewTab_t, pchURL) == 4 );
C_ASSERT( sizeof(u32_HTML_OpenLinkInNewTab_t().pchURL) >= 4 );

#ifdef __x86_64__
w64_HTML_OpenLinkInNewTab_t::operator u64_HTML_OpenLinkInNewTab_t() const
{
    u64_HTML_OpenLinkInNewTab_t ret;
    ret.unBrowserHandle = this->unBrowserHandle;
    ret.pchURL = this->pchURL;
    return ret;
}

u64_HTML_OpenLinkInNewTab_t::operator w64_HTML_OpenLinkInNewTab_t() const
{
    w64_HTML_OpenLinkInNewTab_t ret;
    ret.unBrowserHandle = this->unBrowserHandle;
    steamclient_unix_path_to_dos_path(1, this->pchURL, g_tmppath, sizeof(g_tmppath), 1);
    ret.pchURL = g_tmppath;
    return ret;
}
#endif

#ifdef __i386__
w32_HTML_OpenLinkInNewTab_t::operator u32_HTML_OpenLinkInNewTab_t() const
{
    u32_HTML_OpenLinkInNewTab_t ret;
    ret.unBrowserHandle = this->unBrowserHandle;
    ret.pchURL = this->pchURL;
    return ret;
}

u32_HTML_OpenLinkInNewTab_t::operator w32_HTML_OpenLinkInNewTab_t() const
{
    w32_HTML_OpenLinkInNewTab_t ret;
    ret.unBrowserHandle = this->unBrowserHandle;
    steamclient_unix_path_to_dos_path(1, this->pchURL, g_tmppath, sizeof(g_tmppath), 1);
    ret.pchURL = g_tmppath;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_HTML_ShowToolTip_t) >= 16 );
C_ASSERT( offsetof(w64_HTML_ShowToolTip_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(w64_HTML_ShowToolTip_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(w64_HTML_ShowToolTip_t, pchMsg) == 8 );
C_ASSERT( sizeof(w64_HTML_ShowToolTip_t().pchMsg) >= 8 );

C_ASSERT( sizeof(u64_HTML_ShowToolTip_t) >= 12 );
C_ASSERT( offsetof(u64_HTML_ShowToolTip_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(u64_HTML_ShowToolTip_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(u64_HTML_ShowToolTip_t, pchMsg) == 4 );
C_ASSERT( sizeof(u64_HTML_ShowToolTip_t().pchMsg) >= 8 );

C_ASSERT( sizeof(w32_HTML_ShowToolTip_t) >= 8 );
C_ASSERT( offsetof(w32_HTML_ShowToolTip_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(w32_HTML_ShowToolTip_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(w32_HTML_ShowToolTip_t, pchMsg) == 4 );
C_ASSERT( sizeof(w32_HTML_ShowToolTip_t().pchMsg) >= 4 );

C_ASSERT( sizeof(u32_HTML_ShowToolTip_t) >= 8 );
C_ASSERT( offsetof(u32_HTML_ShowToolTip_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(u32_HTML_ShowToolTip_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(u32_HTML_ShowToolTip_t, pchMsg) == 4 );
C_ASSERT( sizeof(u32_HTML_ShowToolTip_t().pchMsg) >= 4 );

#ifdef __x86_64__
w64_HTML_ShowToolTip_t::operator u64_HTML_ShowToolTip_t() const
{
    u64_HTML_ShowToolTip_t ret;
    ret.unBrowserHandle = this->unBrowserHandle;
    ret.pchMsg = this->pchMsg;
    return ret;
}

u64_HTML_ShowToolTip_t::operator w64_HTML_ShowToolTip_t() const
{
    w64_HTML_ShowToolTip_t ret;
    ret.unBrowserHandle = this->unBrowserHandle;
    ret.pchMsg = this->pchMsg;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_HTML_StartRequest_t) >= 40 );
C_ASSERT( offsetof(w64_HTML_StartRequest_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(w64_HTML_StartRequest_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(w64_HTML_StartRequest_t, pchURL) == 8 );
C_ASSERT( sizeof(w64_HTML_StartRequest_t().pchURL) >= 8 );
C_ASSERT( offsetof(w64_HTML_StartRequest_t, pchTarget) == 16 );
C_ASSERT( sizeof(w64_HTML_StartRequest_t().pchTarget) >= 8 );
C_ASSERT( offsetof(w64_HTML_StartRequest_t, pchPostData) == 24 );
C_ASSERT( sizeof(w64_HTML_StartRequest_t().pchPostData) >= 8 );
C_ASSERT( offsetof(w64_HTML_StartRequest_t, bIsRedirect) == 32 );
C_ASSERT( sizeof(w64_HTML_StartRequest_t().bIsRedirect) >= 1 );

C_ASSERT( sizeof(u64_HTML_StartRequest_t) >= 32 );
C_ASSERT( offsetof(u64_HTML_StartRequest_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(u64_HTML_StartRequest_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(u64_HTML_StartRequest_t, pchURL) == 4 );
C_ASSERT( sizeof(u64_HTML_StartRequest_t().pchURL) >= 8 );
C_ASSERT( offsetof(u64_HTML_StartRequest_t, pchTarget) == 12 );
C_ASSERT( sizeof(u64_HTML_StartRequest_t().pchTarget) >= 8 );
C_ASSERT( offsetof(u64_HTML_StartRequest_t, pchPostData) == 20 );
C_ASSERT( sizeof(u64_HTML_StartRequest_t().pchPostData) >= 8 );
C_ASSERT( offsetof(u64_HTML_StartRequest_t, bIsRedirect) == 28 );
C_ASSERT( sizeof(u64_HTML_StartRequest_t().bIsRedirect) >= 1 );

C_ASSERT( sizeof(w32_HTML_StartRequest_t) >= 20 );
C_ASSERT( offsetof(w32_HTML_StartRequest_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(w32_HTML_StartRequest_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(w32_HTML_StartRequest_t, pchURL) == 4 );
C_ASSERT( sizeof(w32_HTML_StartRequest_t().pchURL) >= 4 );
C_ASSERT( offsetof(w32_HTML_StartRequest_t, pchTarget) == 8 );
C_ASSERT( sizeof(w32_HTML_StartRequest_t().pchTarget) >= 4 );
C_ASSERT( offsetof(w32_HTML_StartRequest_t, pchPostData) == 12 );
C_ASSERT( sizeof(w32_HTML_StartRequest_t().pchPostData) >= 4 );
C_ASSERT( offsetof(w32_HTML_StartRequest_t, bIsRedirect) == 16 );
C_ASSERT( sizeof(w32_HTML_StartRequest_t().bIsRedirect) >= 1 );

C_ASSERT( sizeof(u32_HTML_StartRequest_t) >= 20 );
C_ASSERT( offsetof(u32_HTML_StartRequest_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(u32_HTML_StartRequest_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(u32_HTML_StartRequest_t, pchURL) == 4 );
C_ASSERT( sizeof(u32_HTML_StartRequest_t().pchURL) >= 4 );
C_ASSERT( offsetof(u32_HTML_StartRequest_t, pchTarget) == 8 );
C_ASSERT( sizeof(u32_HTML_StartRequest_t().pchTarget) >= 4 );
C_ASSERT( offsetof(u32_HTML_StartRequest_t, pchPostData) == 12 );
C_ASSERT( sizeof(u32_HTML_StartRequest_t().pchPostData) >= 4 );
C_ASSERT( offsetof(u32_HTML_StartRequest_t, bIsRedirect) == 16 );
C_ASSERT( sizeof(u32_HTML_StartRequest_t().bIsRedirect) >= 1 );

#ifdef __x86_64__
w64_HTML_StartRequest_t::operator u64_HTML_StartRequest_t() const
{
    u64_HTML_StartRequest_t ret;
    ret.unBrowserHandle = this->unBrowserHandle;
    ret.pchURL = this->pchURL;
    ret.pchTarget = this->pchTarget;
    ret.pchPostData = this->pchPostData;
    ret.bIsRedirect = this->bIsRedirect;
    return ret;
}

u64_HTML_StartRequest_t::operator w64_HTML_StartRequest_t() const
{
    w64_HTML_StartRequest_t ret;
    ret.unBrowserHandle = this->unBrowserHandle;
    steamclient_unix_path_to_dos_path(1, this->pchURL, g_tmppath, sizeof(g_tmppath), 1);
    ret.pchURL = g_tmppath;
    ret.pchTarget = this->pchTarget;
    ret.pchPostData = this->pchPostData;
    ret.bIsRedirect = this->bIsRedirect;
    return ret;
}
#endif

#ifdef __i386__
w32_HTML_StartRequest_t::operator u32_HTML_StartRequest_t() const
{
    u32_HTML_StartRequest_t ret;
    ret.unBrowserHandle = this->unBrowserHandle;
    ret.pchURL = this->pchURL;
    ret.pchTarget = this->pchTarget;
    ret.pchPostData = this->pchPostData;
    ret.bIsRedirect = this->bIsRedirect;
    return ret;
}

u32_HTML_StartRequest_t::operator w32_HTML_StartRequest_t() const
{
    w32_HTML_StartRequest_t ret;
    ret.unBrowserHandle = this->unBrowserHandle;
    steamclient_unix_path_to_dos_path(1, this->pchURL, g_tmppath, sizeof(g_tmppath), 1);
    ret.pchURL = g_tmppath;
    ret.pchTarget = this->pchTarget;
    ret.pchPostData = this->pchPostData;
    ret.bIsRedirect = this->bIsRedirect;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_HTML_StatusText_t) >= 16 );
C_ASSERT( offsetof(w64_HTML_StatusText_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(w64_HTML_StatusText_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(w64_HTML_StatusText_t, pchMsg) == 8 );
C_ASSERT( sizeof(w64_HTML_StatusText_t().pchMsg) >= 8 );

C_ASSERT( sizeof(u64_HTML_StatusText_t) >= 12 );
C_ASSERT( offsetof(u64_HTML_StatusText_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(u64_HTML_StatusText_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(u64_HTML_StatusText_t, pchMsg) == 4 );
C_ASSERT( sizeof(u64_HTML_StatusText_t().pchMsg) >= 8 );

C_ASSERT( sizeof(w32_HTML_StatusText_t) >= 8 );
C_ASSERT( offsetof(w32_HTML_StatusText_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(w32_HTML_StatusText_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(w32_HTML_StatusText_t, pchMsg) == 4 );
C_ASSERT( sizeof(w32_HTML_StatusText_t().pchMsg) >= 4 );

C_ASSERT( sizeof(u32_HTML_StatusText_t) >= 8 );
C_ASSERT( offsetof(u32_HTML_StatusText_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(u32_HTML_StatusText_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(u32_HTML_StatusText_t, pchMsg) == 4 );
C_ASSERT( sizeof(u32_HTML_StatusText_t().pchMsg) >= 4 );

#ifdef __x86_64__
w64_HTML_StatusText_t::operator u64_HTML_StatusText_t() const
{
    u64_HTML_StatusText_t ret;
    ret.unBrowserHandle = this->unBrowserHandle;
    ret.pchMsg = this->pchMsg;
    return ret;
}

u64_HTML_StatusText_t::operator w64_HTML_StatusText_t() const
{
    w64_HTML_StatusText_t ret;
    ret.unBrowserHandle = this->unBrowserHandle;
    ret.pchMsg = this->pchMsg;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_HTML_URLChanged_t) >= 48 );
C_ASSERT( offsetof(w64_HTML_URLChanged_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(w64_HTML_URLChanged_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(w64_HTML_URLChanged_t, pchURL) == 8 );
C_ASSERT( sizeof(w64_HTML_URLChanged_t().pchURL) >= 8 );
C_ASSERT( offsetof(w64_HTML_URLChanged_t, pchPostData) == 16 );
C_ASSERT( sizeof(w64_HTML_URLChanged_t().pchPostData) >= 8 );
C_ASSERT( offsetof(w64_HTML_URLChanged_t, bIsRedirect) == 24 );
C_ASSERT( sizeof(w64_HTML_URLChanged_t().bIsRedirect) >= 1 );
C_ASSERT( offsetof(w64_HTML_URLChanged_t, pchPageTitle) == 32 );
C_ASSERT( sizeof(w64_HTML_URLChanged_t().pchPageTitle) >= 8 );
C_ASSERT( offsetof(w64_HTML_URLChanged_t, bNewNavigation) == 40 );
C_ASSERT( sizeof(w64_HTML_URLChanged_t().bNewNavigation) >= 1 );

C_ASSERT( sizeof(u64_HTML_URLChanged_t) >= 36 );
C_ASSERT( offsetof(u64_HTML_URLChanged_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(u64_HTML_URLChanged_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(u64_HTML_URLChanged_t, pchURL) == 4 );
C_ASSERT( sizeof(u64_HTML_URLChanged_t().pchURL) >= 8 );
C_ASSERT( offsetof(u64_HTML_URLChanged_t, pchPostData) == 12 );
C_ASSERT( sizeof(u64_HTML_URLChanged_t().pchPostData) >= 8 );
C_ASSERT( offsetof(u64_HTML_URLChanged_t, bIsRedirect) == 20 );
C_ASSERT( sizeof(u64_HTML_URLChanged_t().bIsRedirect) >= 1 );
C_ASSERT( offsetof(u64_HTML_URLChanged_t, pchPageTitle) == 24 );
C_ASSERT( sizeof(u64_HTML_URLChanged_t().pchPageTitle) >= 8 );
C_ASSERT( offsetof(u64_HTML_URLChanged_t, bNewNavigation) == 32 );
C_ASSERT( sizeof(u64_HTML_URLChanged_t().bNewNavigation) >= 1 );

C_ASSERT( sizeof(w32_HTML_URLChanged_t) >= 24 );
C_ASSERT( offsetof(w32_HTML_URLChanged_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(w32_HTML_URLChanged_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(w32_HTML_URLChanged_t, pchURL) == 4 );
C_ASSERT( sizeof(w32_HTML_URLChanged_t().pchURL) >= 4 );
C_ASSERT( offsetof(w32_HTML_URLChanged_t, pchPostData) == 8 );
C_ASSERT( sizeof(w32_HTML_URLChanged_t().pchPostData) >= 4 );
C_ASSERT( offsetof(w32_HTML_URLChanged_t, bIsRedirect) == 12 );
C_ASSERT( sizeof(w32_HTML_URLChanged_t().bIsRedirect) >= 1 );
C_ASSERT( offsetof(w32_HTML_URLChanged_t, pchPageTitle) == 16 );
C_ASSERT( sizeof(w32_HTML_URLChanged_t().pchPageTitle) >= 4 );
C_ASSERT( offsetof(w32_HTML_URLChanged_t, bNewNavigation) == 20 );
C_ASSERT( sizeof(w32_HTML_URLChanged_t().bNewNavigation) >= 1 );

C_ASSERT( sizeof(u32_HTML_URLChanged_t) >= 24 );
C_ASSERT( offsetof(u32_HTML_URLChanged_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(u32_HTML_URLChanged_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(u32_HTML_URLChanged_t, pchURL) == 4 );
C_ASSERT( sizeof(u32_HTML_URLChanged_t().pchURL) >= 4 );
C_ASSERT( offsetof(u32_HTML_URLChanged_t, pchPostData) == 8 );
C_ASSERT( sizeof(u32_HTML_URLChanged_t().pchPostData) >= 4 );
C_ASSERT( offsetof(u32_HTML_URLChanged_t, bIsRedirect) == 12 );
C_ASSERT( sizeof(u32_HTML_URLChanged_t().bIsRedirect) >= 1 );
C_ASSERT( offsetof(u32_HTML_URLChanged_t, pchPageTitle) == 16 );
C_ASSERT( sizeof(u32_HTML_URLChanged_t().pchPageTitle) >= 4 );
C_ASSERT( offsetof(u32_HTML_URLChanged_t, bNewNavigation) == 20 );
C_ASSERT( sizeof(u32_HTML_URLChanged_t().bNewNavigation) >= 1 );

#ifdef __x86_64__
w64_HTML_URLChanged_t::operator u64_HTML_URLChanged_t() const
{
    u64_HTML_URLChanged_t ret;
    ret.unBrowserHandle = this->unBrowserHandle;
    ret.pchURL = this->pchURL;
    ret.pchPostData = this->pchPostData;
    ret.bIsRedirect = this->bIsRedirect;
    ret.pchPageTitle = this->pchPageTitle;
    ret.bNewNavigation = this->bNewNavigation;
    return ret;
}

u64_HTML_URLChanged_t::operator w64_HTML_URLChanged_t() const
{
    w64_HTML_URLChanged_t ret;
    ret.unBrowserHandle = this->unBrowserHandle;
    steamclient_unix_path_to_dos_path(1, this->pchURL, g_tmppath, sizeof(g_tmppath), 1);
    ret.pchURL = g_tmppath;
    ret.pchPostData = this->pchPostData;
    ret.bIsRedirect = this->bIsRedirect;
    ret.pchPageTitle = this->pchPageTitle;
    ret.bNewNavigation = this->bNewNavigation;
    return ret;
}
#endif

#ifdef __i386__
w32_HTML_URLChanged_t::operator u32_HTML_URLChanged_t() const
{
    u32_HTML_URLChanged_t ret;
    ret.unBrowserHandle = this->unBrowserHandle;
    ret.pchURL = this->pchURL;
    ret.pchPostData = this->pchPostData;
    ret.bIsRedirect = this->bIsRedirect;
    ret.pchPageTitle = this->pchPageTitle;
    ret.bNewNavigation = this->bNewNavigation;
    return ret;
}

u32_HTML_URLChanged_t::operator w32_HTML_URLChanged_t() const
{
    w32_HTML_URLChanged_t ret;
    ret.unBrowserHandle = this->unBrowserHandle;
    steamclient_unix_path_to_dos_path(1, this->pchURL, g_tmppath, sizeof(g_tmppath), 1);
    ret.pchURL = g_tmppath;
    ret.pchPostData = this->pchPostData;
    ret.bIsRedirect = this->bIsRedirect;
    ret.pchPageTitle = this->pchPageTitle;
    ret.bNewNavigation = this->bNewNavigation;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_HTML_UpdateToolTip_t) >= 16 );
C_ASSERT( offsetof(w64_HTML_UpdateToolTip_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(w64_HTML_UpdateToolTip_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(w64_HTML_UpdateToolTip_t, pchMsg) == 8 );
C_ASSERT( sizeof(w64_HTML_UpdateToolTip_t().pchMsg) >= 8 );

C_ASSERT( sizeof(u64_HTML_UpdateToolTip_t) >= 12 );
C_ASSERT( offsetof(u64_HTML_UpdateToolTip_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(u64_HTML_UpdateToolTip_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(u64_HTML_UpdateToolTip_t, pchMsg) == 4 );
C_ASSERT( sizeof(u64_HTML_UpdateToolTip_t().pchMsg) >= 8 );

C_ASSERT( sizeof(w32_HTML_UpdateToolTip_t) >= 8 );
C_ASSERT( offsetof(w32_HTML_UpdateToolTip_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(w32_HTML_UpdateToolTip_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(w32_HTML_UpdateToolTip_t, pchMsg) == 4 );
C_ASSERT( sizeof(w32_HTML_UpdateToolTip_t().pchMsg) >= 4 );

C_ASSERT( sizeof(u32_HTML_UpdateToolTip_t) >= 8 );
C_ASSERT( offsetof(u32_HTML_UpdateToolTip_t, unBrowserHandle) == 0 );
C_ASSERT( sizeof(u32_HTML_UpdateToolTip_t().unBrowserHandle) >= 4 );
C_ASSERT( offsetof(u32_HTML_UpdateToolTip_t, pchMsg) == 4 );
C_ASSERT( sizeof(u32_HTML_UpdateToolTip_t().pchMsg) >= 4 );

#ifdef __x86_64__
w64_HTML_UpdateToolTip_t::operator u64_HTML_UpdateToolTip_t() const
{
    u64_HTML_UpdateToolTip_t ret;
    ret.unBrowserHandle = this->unBrowserHandle;
    ret.pchMsg = this->pchMsg;
    return ret;
}

u64_HTML_UpdateToolTip_t::operator w64_HTML_UpdateToolTip_t() const
{
    w64_HTML_UpdateToolTip_t ret;
    ret.unBrowserHandle = this->unBrowserHandle;
    ret.pchMsg = this->pchMsg;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_HTTPRequestCompleted_t_132x) >= 32 );
C_ASSERT( offsetof(w64_HTTPRequestCompleted_t_132x, m_hRequest) == 0 );
C_ASSERT( sizeof(w64_HTTPRequestCompleted_t_132x().m_hRequest) >= 4 );
C_ASSERT( offsetof(w64_HTTPRequestCompleted_t_132x, m_ulContextValue) == 8 );
C_ASSERT( sizeof(w64_HTTPRequestCompleted_t_132x().m_ulContextValue) >= 8 );
C_ASSERT( offsetof(w64_HTTPRequestCompleted_t_132x, m_bRequestSuccessful) == 16 );
C_ASSERT( sizeof(w64_HTTPRequestCompleted_t_132x().m_bRequestSuccessful) >= 1 );
C_ASSERT( offsetof(w64_HTTPRequestCompleted_t_132x, m_eStatusCode) == 20 );
C_ASSERT( sizeof(w64_HTTPRequestCompleted_t_132x().m_eStatusCode) >= 4 );
C_ASSERT( offsetof(w64_HTTPRequestCompleted_t_132x, m_unBodySize) == 24 );
C_ASSERT( sizeof(w64_HTTPRequestCompleted_t_132x().m_unBodySize) >= 4 );

C_ASSERT( sizeof(u64_HTTPRequestCompleted_t_132x) >= 24 );
C_ASSERT( offsetof(u64_HTTPRequestCompleted_t_132x, m_hRequest) == 0 );
C_ASSERT( sizeof(u64_HTTPRequestCompleted_t_132x().m_hRequest) >= 4 );
C_ASSERT( offsetof(u64_HTTPRequestCompleted_t_132x, m_ulContextValue) == 4 );
C_ASSERT( sizeof(u64_HTTPRequestCompleted_t_132x().m_ulContextValue) >= 8 );
C_ASSERT( offsetof(u64_HTTPRequestCompleted_t_132x, m_bRequestSuccessful) == 12 );
C_ASSERT( sizeof(u64_HTTPRequestCompleted_t_132x().m_bRequestSuccessful) >= 1 );
C_ASSERT( offsetof(u64_HTTPRequestCompleted_t_132x, m_eStatusCode) == 16 );
C_ASSERT( sizeof(u64_HTTPRequestCompleted_t_132x().m_eStatusCode) >= 4 );
C_ASSERT( offsetof(u64_HTTPRequestCompleted_t_132x, m_unBodySize) == 20 );
C_ASSERT( sizeof(u64_HTTPRequestCompleted_t_132x().m_unBodySize) >= 4 );

C_ASSERT( sizeof(w32_HTTPRequestCompleted_t_132x) >= 32 );
C_ASSERT( offsetof(w32_HTTPRequestCompleted_t_132x, m_hRequest) == 0 );
C_ASSERT( sizeof(w32_HTTPRequestCompleted_t_132x().m_hRequest) >= 4 );
C_ASSERT( offsetof(w32_HTTPRequestCompleted_t_132x, m_ulContextValue) == 8 );
C_ASSERT( sizeof(w32_HTTPRequestCompleted_t_132x().m_ulContextValue) >= 8 );
C_ASSERT( offsetof(w32_HTTPRequestCompleted_t_132x, m_bRequestSuccessful) == 16 );
C_ASSERT( sizeof(w32_HTTPRequestCompleted_t_132x().m_bRequestSuccessful) >= 1 );
C_ASSERT( offsetof(w32_HTTPRequestCompleted_t_132x, m_eStatusCode) == 20 );
C_ASSERT( sizeof(w32_HTTPRequestCompleted_t_132x().m_eStatusCode) >= 4 );
C_ASSERT( offsetof(w32_HTTPRequestCompleted_t_132x, m_unBodySize) == 24 );
C_ASSERT( sizeof(w32_HTTPRequestCompleted_t_132x().m_unBodySize) >= 4 );

C_ASSERT( sizeof(u32_HTTPRequestCompleted_t_132x) >= 24 );
C_ASSERT( offsetof(u32_HTTPRequestCompleted_t_132x, m_hRequest) == 0 );
C_ASSERT( sizeof(u32_HTTPRequestCompleted_t_132x().m_hRequest) >= 4 );
C_ASSERT( offsetof(u32_HTTPRequestCompleted_t_132x, m_ulContextValue) == 4 );
C_ASSERT( sizeof(u32_HTTPRequestCompleted_t_132x().m_ulContextValue) >= 8 );
C_ASSERT( offsetof(u32_HTTPRequestCompleted_t_132x, m_bRequestSuccessful) == 12 );
C_ASSERT( sizeof(u32_HTTPRequestCompleted_t_132x().m_bRequestSuccessful) >= 1 );
C_ASSERT( offsetof(u32_HTTPRequestCompleted_t_132x, m_eStatusCode) == 16 );
C_ASSERT( sizeof(u32_HTTPRequestCompleted_t_132x().m_eStatusCode) >= 4 );
C_ASSERT( offsetof(u32_HTTPRequestCompleted_t_132x, m_unBodySize) == 20 );
C_ASSERT( sizeof(u32_HTTPRequestCompleted_t_132x().m_unBodySize) >= 4 );

C_ASSERT( sizeof(w64_HTTPRequestCompleted_t_123) >= 24 );
C_ASSERT( offsetof(w64_HTTPRequestCompleted_t_123, m_hRequest) == 0 );
C_ASSERT( sizeof(w64_HTTPRequestCompleted_t_123().m_hRequest) >= 4 );
C_ASSERT( offsetof(w64_HTTPRequestCompleted_t_123, m_ulContextValue) == 8 );
C_ASSERT( sizeof(w64_HTTPRequestCompleted_t_123().m_ulContextValue) >= 8 );
C_ASSERT( offsetof(w64_HTTPRequestCompleted_t_123, m_bRequestSuccessful) == 16 );
C_ASSERT( sizeof(w64_HTTPRequestCompleted_t_123().m_bRequestSuccessful) >= 1 );
C_ASSERT( offsetof(w64_HTTPRequestCompleted_t_123, m_eStatusCode) == 20 );
C_ASSERT( sizeof(w64_HTTPRequestCompleted_t_123().m_eStatusCode) >= 4 );

C_ASSERT( sizeof(u64_HTTPRequestCompleted_t_123) >= 20 );
C_ASSERT( offsetof(u64_HTTPRequestCompleted_t_123, m_hRequest) == 0 );
C_ASSERT( sizeof(u64_HTTPRequestCompleted_t_123().m_hRequest) >= 4 );
C_ASSERT( offsetof(u64_HTTPRequestCompleted_t_123, m_ulContextValue) == 4 );
C_ASSERT( sizeof(u64_HTTPRequestCompleted_t_123().m_ulContextValue) >= 8 );
C_ASSERT( offsetof(u64_HTTPRequestCompleted_t_123, m_bRequestSuccessful) == 12 );
C_ASSERT( sizeof(u64_HTTPRequestCompleted_t_123().m_bRequestSuccessful) >= 1 );
C_ASSERT( offsetof(u64_HTTPRequestCompleted_t_123, m_eStatusCode) == 16 );
C_ASSERT( sizeof(u64_HTTPRequestCompleted_t_123().m_eStatusCode) >= 4 );

C_ASSERT( sizeof(w32_HTTPRequestCompleted_t_123) >= 24 );
C_ASSERT( offsetof(w32_HTTPRequestCompleted_t_123, m_hRequest) == 0 );
C_ASSERT( sizeof(w32_HTTPRequestCompleted_t_123().m_hRequest) >= 4 );
C_ASSERT( offsetof(w32_HTTPRequestCompleted_t_123, m_ulContextValue) == 8 );
C_ASSERT( sizeof(w32_HTTPRequestCompleted_t_123().m_ulContextValue) >= 8 );
C_ASSERT( offsetof(w32_HTTPRequestCompleted_t_123, m_bRequestSuccessful) == 16 );
C_ASSERT( sizeof(w32_HTTPRequestCompleted_t_123().m_bRequestSuccessful) >= 1 );
C_ASSERT( offsetof(w32_HTTPRequestCompleted_t_123, m_eStatusCode) == 20 );
C_ASSERT( sizeof(w32_HTTPRequestCompleted_t_123().m_eStatusCode) >= 4 );

C_ASSERT( sizeof(u32_HTTPRequestCompleted_t_123) >= 20 );
C_ASSERT( offsetof(u32_HTTPRequestCompleted_t_123, m_hRequest) == 0 );
C_ASSERT( sizeof(u32_HTTPRequestCompleted_t_123().m_hRequest) >= 4 );
C_ASSERT( offsetof(u32_HTTPRequestCompleted_t_123, m_ulContextValue) == 4 );
C_ASSERT( sizeof(u32_HTTPRequestCompleted_t_123().m_ulContextValue) >= 8 );
C_ASSERT( offsetof(u32_HTTPRequestCompleted_t_123, m_bRequestSuccessful) == 12 );
C_ASSERT( sizeof(u32_HTTPRequestCompleted_t_123().m_bRequestSuccessful) >= 1 );
C_ASSERT( offsetof(u32_HTTPRequestCompleted_t_123, m_eStatusCode) == 16 );
C_ASSERT( sizeof(u32_HTTPRequestCompleted_t_123().m_eStatusCode) >= 4 );

C_ASSERT( sizeof(w64_HTTPRequestCompleted_t_115) >= 24 );
C_ASSERT( offsetof(w64_HTTPRequestCompleted_t_115, m_hRequest) == 0 );
C_ASSERT( sizeof(w64_HTTPRequestCompleted_t_115().m_hRequest) >= 4 );
C_ASSERT( offsetof(w64_HTTPRequestCompleted_t_115, m_ulContextValue) == 8 );
C_ASSERT( sizeof(w64_HTTPRequestCompleted_t_115().m_ulContextValue) >= 8 );
C_ASSERT( offsetof(w64_HTTPRequestCompleted_t_115, m_bRequestSuccessful) == 16 );
C_ASSERT( sizeof(w64_HTTPRequestCompleted_t_115().m_bRequestSuccessful) >= 1 );
C_ASSERT( offsetof(w64_HTTPRequestCompleted_t_115, m_eStatusCode) == 20 );
C_ASSERT( sizeof(w64_HTTPRequestCompleted_t_115().m_eStatusCode) >= 4 );

C_ASSERT( sizeof(u64_HTTPRequestCompleted_t_115) >= 24 );
C_ASSERT( offsetof(u64_HTTPRequestCompleted_t_115, m_hRequest) == 0 );
C_ASSERT( sizeof(u64_HTTPRequestCompleted_t_115().m_hRequest) >= 4 );
C_ASSERT( offsetof(u64_HTTPRequestCompleted_t_115, m_ulContextValue) == 8 );
C_ASSERT( sizeof(u64_HTTPRequestCompleted_t_115().m_ulContextValue) >= 8 );
C_ASSERT( offsetof(u64_HTTPRequestCompleted_t_115, m_bRequestSuccessful) == 16 );
C_ASSERT( sizeof(u64_HTTPRequestCompleted_t_115().m_bRequestSuccessful) >= 1 );
C_ASSERT( offsetof(u64_HTTPRequestCompleted_t_115, m_eStatusCode) == 20 );
C_ASSERT( sizeof(u64_HTTPRequestCompleted_t_115().m_eStatusCode) >= 4 );

C_ASSERT( sizeof(w32_HTTPRequestCompleted_t_115) >= 24 );
C_ASSERT( offsetof(w32_HTTPRequestCompleted_t_115, m_hRequest) == 0 );
C_ASSERT( sizeof(w32_HTTPRequestCompleted_t_115().m_hRequest) >= 4 );
C_ASSERT( offsetof(w32_HTTPRequestCompleted_t_115, m_ulContextValue) == 8 );
C_ASSERT( sizeof(w32_HTTPRequestCompleted_t_115().m_ulContextValue) >= 8 );
C_ASSERT( offsetof(w32_HTTPRequestCompleted_t_115, m_bRequestSuccessful) == 16 );
C_ASSERT( sizeof(w32_HTTPRequestCompleted_t_115().m_bRequestSuccessful) >= 1 );
C_ASSERT( offsetof(w32_HTTPRequestCompleted_t_115, m_eStatusCode) == 20 );
C_ASSERT( sizeof(w32_HTTPRequestCompleted_t_115().m_eStatusCode) >= 4 );

C_ASSERT( sizeof(u32_HTTPRequestCompleted_t_115) >= 20 );
C_ASSERT( offsetof(u32_HTTPRequestCompleted_t_115, m_hRequest) == 0 );
C_ASSERT( sizeof(u32_HTTPRequestCompleted_t_115().m_hRequest) >= 4 );
C_ASSERT( offsetof(u32_HTTPRequestCompleted_t_115, m_ulContextValue) == 4 );
C_ASSERT( sizeof(u32_HTTPRequestCompleted_t_115().m_ulContextValue) >= 8 );
C_ASSERT( offsetof(u32_HTTPRequestCompleted_t_115, m_bRequestSuccessful) == 12 );
C_ASSERT( sizeof(u32_HTTPRequestCompleted_t_115().m_bRequestSuccessful) >= 1 );
C_ASSERT( offsetof(u32_HTTPRequestCompleted_t_115, m_eStatusCode) == 16 );
C_ASSERT( sizeof(u32_HTTPRequestCompleted_t_115().m_eStatusCode) >= 4 );

#ifdef __x86_64__
w64_HTTPRequestCompleted_t_132x::operator u64_HTTPRequestCompleted_t_132x() const
{
    u64_HTTPRequestCompleted_t_132x ret;
    ret.m_hRequest = this->m_hRequest;
    ret.m_ulContextValue = this->m_ulContextValue;
    ret.m_bRequestSuccessful = this->m_bRequestSuccessful;
    ret.m_eStatusCode = this->m_eStatusCode;
    ret.m_unBodySize = this->m_unBodySize;
    return ret;
}

u64_HTTPRequestCompleted_t_132x::operator w64_HTTPRequestCompleted_t_132x() const
{
    w64_HTTPRequestCompleted_t_132x ret;
    ret.m_hRequest = this->m_hRequest;
    ret.m_ulContextValue = this->m_ulContextValue;
    ret.m_bRequestSuccessful = this->m_bRequestSuccessful;
    ret.m_eStatusCode = this->m_eStatusCode;
    ret.m_unBodySize = this->m_unBodySize;
    return ret;
}
#endif

#ifdef __i386__
w32_HTTPRequestCompleted_t_132x::operator u32_HTTPRequestCompleted_t_132x() const
{
    u32_HTTPRequestCompleted_t_132x ret;
    ret.m_hRequest = this->m_hRequest;
    ret.m_ulContextValue = this->m_ulContextValue;
    ret.m_bRequestSuccessful = this->m_bRequestSuccessful;
    ret.m_eStatusCode = this->m_eStatusCode;
    ret.m_unBodySize = this->m_unBodySize;
    return ret;
}

u32_HTTPRequestCompleted_t_132x::operator w32_HTTPRequestCompleted_t_132x() const
{
    w32_HTTPRequestCompleted_t_132x ret;
    ret.m_hRequest = this->m_hRequest;
    ret.m_ulContextValue = this->m_ulContextValue;
    ret.m_bRequestSuccessful = this->m_bRequestSuccessful;
    ret.m_eStatusCode = this->m_eStatusCode;
    ret.m_unBodySize = this->m_unBodySize;
    return ret;
}
#endif

#ifdef __x86_64__
w64_HTTPRequestCompleted_t_123::operator u64_HTTPRequestCompleted_t_123() const
{
    u64_HTTPRequestCompleted_t_123 ret;
    ret.m_hRequest = this->m_hRequest;
    ret.m_ulContextValue = this->m_ulContextValue;
    ret.m_bRequestSuccessful = this->m_bRequestSuccessful;
    ret.m_eStatusCode = this->m_eStatusCode;
    return ret;
}

u64_HTTPRequestCompleted_t_123::operator w64_HTTPRequestCompleted_t_123() const
{
    w64_HTTPRequestCompleted_t_123 ret;
    ret.m_hRequest = this->m_hRequest;
    ret.m_ulContextValue = this->m_ulContextValue;
    ret.m_bRequestSuccessful = this->m_bRequestSuccessful;
    ret.m_eStatusCode = this->m_eStatusCode;
    return ret;
}
#endif

#ifdef __i386__
w32_HTTPRequestCompleted_t_123::operator u32_HTTPRequestCompleted_t_123() const
{
    u32_HTTPRequestCompleted_t_123 ret;
    ret.m_hRequest = this->m_hRequest;
    ret.m_ulContextValue = this->m_ulContextValue;
    ret.m_bRequestSuccessful = this->m_bRequestSuccessful;
    ret.m_eStatusCode = this->m_eStatusCode;
    return ret;
}

u32_HTTPRequestCompleted_t_123::operator w32_HTTPRequestCompleted_t_123() const
{
    w32_HTTPRequestCompleted_t_123 ret;
    ret.m_hRequest = this->m_hRequest;
    ret.m_ulContextValue = this->m_ulContextValue;
    ret.m_bRequestSuccessful = this->m_bRequestSuccessful;
    ret.m_eStatusCode = this->m_eStatusCode;
    return ret;
}
#endif

#ifdef __i386__
w32_HTTPRequestCompleted_t_115::operator u32_HTTPRequestCompleted_t_115() const
{
    u32_HTTPRequestCompleted_t_115 ret;
    ret.m_hRequest = this->m_hRequest;
    ret.m_ulContextValue = this->m_ulContextValue;
    ret.m_bRequestSuccessful = this->m_bRequestSuccessful;
    ret.m_eStatusCode = this->m_eStatusCode;
    return ret;
}

u32_HTTPRequestCompleted_t_115::operator w32_HTTPRequestCompleted_t_115() const
{
    w32_HTTPRequestCompleted_t_115 ret;
    ret.m_hRequest = this->m_hRequest;
    ret.m_ulContextValue = this->m_ulContextValue;
    ret.m_bRequestSuccessful = this->m_bRequestSuccessful;
    ret.m_eStatusCode = this->m_eStatusCode;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_HTTPRequestDataReceived_t_123) >= 24 );
C_ASSERT( offsetof(w64_HTTPRequestDataReceived_t_123, m_hRequest) == 0 );
C_ASSERT( sizeof(w64_HTTPRequestDataReceived_t_123().m_hRequest) >= 4 );
C_ASSERT( offsetof(w64_HTTPRequestDataReceived_t_123, m_ulContextValue) == 8 );
C_ASSERT( sizeof(w64_HTTPRequestDataReceived_t_123().m_ulContextValue) >= 8 );
C_ASSERT( offsetof(w64_HTTPRequestDataReceived_t_123, m_cOffset) == 16 );
C_ASSERT( sizeof(w64_HTTPRequestDataReceived_t_123().m_cOffset) >= 4 );
C_ASSERT( offsetof(w64_HTTPRequestDataReceived_t_123, m_cBytesReceived) == 20 );
C_ASSERT( sizeof(w64_HTTPRequestDataReceived_t_123().m_cBytesReceived) >= 4 );

C_ASSERT( sizeof(u64_HTTPRequestDataReceived_t_123) >= 20 );
C_ASSERT( offsetof(u64_HTTPRequestDataReceived_t_123, m_hRequest) == 0 );
C_ASSERT( sizeof(u64_HTTPRequestDataReceived_t_123().m_hRequest) >= 4 );
C_ASSERT( offsetof(u64_HTTPRequestDataReceived_t_123, m_ulContextValue) == 4 );
C_ASSERT( sizeof(u64_HTTPRequestDataReceived_t_123().m_ulContextValue) >= 8 );
C_ASSERT( offsetof(u64_HTTPRequestDataReceived_t_123, m_cOffset) == 12 );
C_ASSERT( sizeof(u64_HTTPRequestDataReceived_t_123().m_cOffset) >= 4 );
C_ASSERT( offsetof(u64_HTTPRequestDataReceived_t_123, m_cBytesReceived) == 16 );
C_ASSERT( sizeof(u64_HTTPRequestDataReceived_t_123().m_cBytesReceived) >= 4 );

C_ASSERT( sizeof(w32_HTTPRequestDataReceived_t_123) >= 24 );
C_ASSERT( offsetof(w32_HTTPRequestDataReceived_t_123, m_hRequest) == 0 );
C_ASSERT( sizeof(w32_HTTPRequestDataReceived_t_123().m_hRequest) >= 4 );
C_ASSERT( offsetof(w32_HTTPRequestDataReceived_t_123, m_ulContextValue) == 8 );
C_ASSERT( sizeof(w32_HTTPRequestDataReceived_t_123().m_ulContextValue) >= 8 );
C_ASSERT( offsetof(w32_HTTPRequestDataReceived_t_123, m_cOffset) == 16 );
C_ASSERT( sizeof(w32_HTTPRequestDataReceived_t_123().m_cOffset) >= 4 );
C_ASSERT( offsetof(w32_HTTPRequestDataReceived_t_123, m_cBytesReceived) == 20 );
C_ASSERT( sizeof(w32_HTTPRequestDataReceived_t_123().m_cBytesReceived) >= 4 );

C_ASSERT( sizeof(u32_HTTPRequestDataReceived_t_123) >= 20 );
C_ASSERT( offsetof(u32_HTTPRequestDataReceived_t_123, m_hRequest) == 0 );
C_ASSERT( sizeof(u32_HTTPRequestDataReceived_t_123().m_hRequest) >= 4 );
C_ASSERT( offsetof(u32_HTTPRequestDataReceived_t_123, m_ulContextValue) == 4 );
C_ASSERT( sizeof(u32_HTTPRequestDataReceived_t_123().m_ulContextValue) >= 8 );
C_ASSERT( offsetof(u32_HTTPRequestDataReceived_t_123, m_cOffset) == 12 );
C_ASSERT( sizeof(u32_HTTPRequestDataReceived_t_123().m_cOffset) >= 4 );
C_ASSERT( offsetof(u32_HTTPRequestDataReceived_t_123, m_cBytesReceived) == 16 );
C_ASSERT( sizeof(u32_HTTPRequestDataReceived_t_123().m_cBytesReceived) >= 4 );

C_ASSERT( sizeof(w64_HTTPRequestDataReceived_t_121x) >= 24 );
C_ASSERT( offsetof(w64_HTTPRequestDataReceived_t_121x, m_hRequest) == 0 );
C_ASSERT( sizeof(w64_HTTPRequestDataReceived_t_121x().m_hRequest) >= 4 );
C_ASSERT( offsetof(w64_HTTPRequestDataReceived_t_121x, m_ulContextValue) == 8 );
C_ASSERT( sizeof(w64_HTTPRequestDataReceived_t_121x().m_ulContextValue) >= 8 );
C_ASSERT( offsetof(w64_HTTPRequestDataReceived_t_121x, m_cOffset) == 16 );
C_ASSERT( sizeof(w64_HTTPRequestDataReceived_t_121x().m_cOffset) >= 4 );
C_ASSERT( offsetof(w64_HTTPRequestDataReceived_t_121x, m_cBytesReceived) == 20 );
C_ASSERT( sizeof(w64_HTTPRequestDataReceived_t_121x().m_cBytesReceived) >= 4 );

C_ASSERT( sizeof(u64_HTTPRequestDataReceived_t_121x) >= 24 );
C_ASSERT( offsetof(u64_HTTPRequestDataReceived_t_121x, m_hRequest) == 0 );
C_ASSERT( sizeof(u64_HTTPRequestDataReceived_t_121x().m_hRequest) >= 4 );
C_ASSERT( offsetof(u64_HTTPRequestDataReceived_t_121x, m_ulContextValue) == 8 );
C_ASSERT( sizeof(u64_HTTPRequestDataReceived_t_121x().m_ulContextValue) >= 8 );
C_ASSERT( offsetof(u64_HTTPRequestDataReceived_t_121x, m_cOffset) == 16 );
C_ASSERT( sizeof(u64_HTTPRequestDataReceived_t_121x().m_cOffset) >= 4 );
C_ASSERT( offsetof(u64_HTTPRequestDataReceived_t_121x, m_cBytesReceived) == 20 );
C_ASSERT( sizeof(u64_HTTPRequestDataReceived_t_121x().m_cBytesReceived) >= 4 );

C_ASSERT( sizeof(w32_HTTPRequestDataReceived_t_121x) >= 24 );
C_ASSERT( offsetof(w32_HTTPRequestDataReceived_t_121x, m_hRequest) == 0 );
C_ASSERT( sizeof(w32_HTTPRequestDataReceived_t_121x().m_hRequest) >= 4 );
C_ASSERT( offsetof(w32_HTTPRequestDataReceived_t_121x, m_ulContextValue) == 8 );
C_ASSERT( sizeof(w32_HTTPRequestDataReceived_t_121x().m_ulContextValue) >= 8 );
C_ASSERT( offsetof(w32_HTTPRequestDataReceived_t_121x, m_cOffset) == 16 );
C_ASSERT( sizeof(w32_HTTPRequestDataReceived_t_121x().m_cOffset) >= 4 );
C_ASSERT( offsetof(w32_HTTPRequestDataReceived_t_121x, m_cBytesReceived) == 20 );
C_ASSERT( sizeof(w32_HTTPRequestDataReceived_t_121x().m_cBytesReceived) >= 4 );

C_ASSERT( sizeof(u32_HTTPRequestDataReceived_t_121x) >= 20 );
C_ASSERT( offsetof(u32_HTTPRequestDataReceived_t_121x, m_hRequest) == 0 );
C_ASSERT( sizeof(u32_HTTPRequestDataReceived_t_121x().m_hRequest) >= 4 );
C_ASSERT( offsetof(u32_HTTPRequestDataReceived_t_121x, m_ulContextValue) == 4 );
C_ASSERT( sizeof(u32_HTTPRequestDataReceived_t_121x().m_ulContextValue) >= 8 );
C_ASSERT( offsetof(u32_HTTPRequestDataReceived_t_121x, m_cOffset) == 12 );
C_ASSERT( sizeof(u32_HTTPRequestDataReceived_t_121x().m_cOffset) >= 4 );
C_ASSERT( offsetof(u32_HTTPRequestDataReceived_t_121x, m_cBytesReceived) == 16 );
C_ASSERT( sizeof(u32_HTTPRequestDataReceived_t_121x().m_cBytesReceived) >= 4 );

#ifdef __x86_64__
w64_HTTPRequestDataReceived_t_123::operator u64_HTTPRequestDataReceived_t_123() const
{
    u64_HTTPRequestDataReceived_t_123 ret;
    ret.m_hRequest = this->m_hRequest;
    ret.m_ulContextValue = this->m_ulContextValue;
    ret.m_cOffset = this->m_cOffset;
    ret.m_cBytesReceived = this->m_cBytesReceived;
    return ret;
}

u64_HTTPRequestDataReceived_t_123::operator w64_HTTPRequestDataReceived_t_123() const
{
    w64_HTTPRequestDataReceived_t_123 ret;
    ret.m_hRequest = this->m_hRequest;
    ret.m_ulContextValue = this->m_ulContextValue;
    ret.m_cOffset = this->m_cOffset;
    ret.m_cBytesReceived = this->m_cBytesReceived;
    return ret;
}
#endif

#ifdef __i386__
w32_HTTPRequestDataReceived_t_123::operator u32_HTTPRequestDataReceived_t_123() const
{
    u32_HTTPRequestDataReceived_t_123 ret;
    ret.m_hRequest = this->m_hRequest;
    ret.m_ulContextValue = this->m_ulContextValue;
    ret.m_cOffset = this->m_cOffset;
    ret.m_cBytesReceived = this->m_cBytesReceived;
    return ret;
}

u32_HTTPRequestDataReceived_t_123::operator w32_HTTPRequestDataReceived_t_123() const
{
    w32_HTTPRequestDataReceived_t_123 ret;
    ret.m_hRequest = this->m_hRequest;
    ret.m_ulContextValue = this->m_ulContextValue;
    ret.m_cOffset = this->m_cOffset;
    ret.m_cBytesReceived = this->m_cBytesReceived;
    return ret;
}
#endif

#ifdef __i386__
w32_HTTPRequestDataReceived_t_121x::operator u32_HTTPRequestDataReceived_t_121x() const
{
    u32_HTTPRequestDataReceived_t_121x ret;
    ret.m_hRequest = this->m_hRequest;
    ret.m_ulContextValue = this->m_ulContextValue;
    ret.m_cOffset = this->m_cOffset;
    ret.m_cBytesReceived = this->m_cBytesReceived;
    return ret;
}

u32_HTTPRequestDataReceived_t_121x::operator w32_HTTPRequestDataReceived_t_121x() const
{
    w32_HTTPRequestDataReceived_t_121x ret;
    ret.m_hRequest = this->m_hRequest;
    ret.m_ulContextValue = this->m_ulContextValue;
    ret.m_cOffset = this->m_cOffset;
    ret.m_cBytesReceived = this->m_cBytesReceived;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_HTTPRequestHeadersReceived_t_123) >= 16 );
C_ASSERT( offsetof(w64_HTTPRequestHeadersReceived_t_123, m_hRequest) == 0 );
C_ASSERT( sizeof(w64_HTTPRequestHeadersReceived_t_123().m_hRequest) >= 4 );
C_ASSERT( offsetof(w64_HTTPRequestHeadersReceived_t_123, m_ulContextValue) == 8 );
C_ASSERT( sizeof(w64_HTTPRequestHeadersReceived_t_123().m_ulContextValue) >= 8 );

C_ASSERT( sizeof(u64_HTTPRequestHeadersReceived_t_123) >= 12 );
C_ASSERT( offsetof(u64_HTTPRequestHeadersReceived_t_123, m_hRequest) == 0 );
C_ASSERT( sizeof(u64_HTTPRequestHeadersReceived_t_123().m_hRequest) >= 4 );
C_ASSERT( offsetof(u64_HTTPRequestHeadersReceived_t_123, m_ulContextValue) == 4 );
C_ASSERT( sizeof(u64_HTTPRequestHeadersReceived_t_123().m_ulContextValue) >= 8 );

C_ASSERT( sizeof(w32_HTTPRequestHeadersReceived_t_123) >= 16 );
C_ASSERT( offsetof(w32_HTTPRequestHeadersReceived_t_123, m_hRequest) == 0 );
C_ASSERT( sizeof(w32_HTTPRequestHeadersReceived_t_123().m_hRequest) >= 4 );
C_ASSERT( offsetof(w32_HTTPRequestHeadersReceived_t_123, m_ulContextValue) == 8 );
C_ASSERT( sizeof(w32_HTTPRequestHeadersReceived_t_123().m_ulContextValue) >= 8 );

C_ASSERT( sizeof(u32_HTTPRequestHeadersReceived_t_123) >= 12 );
C_ASSERT( offsetof(u32_HTTPRequestHeadersReceived_t_123, m_hRequest) == 0 );
C_ASSERT( sizeof(u32_HTTPRequestHeadersReceived_t_123().m_hRequest) >= 4 );
C_ASSERT( offsetof(u32_HTTPRequestHeadersReceived_t_123, m_ulContextValue) == 4 );
C_ASSERT( sizeof(u32_HTTPRequestHeadersReceived_t_123().m_ulContextValue) >= 8 );

C_ASSERT( sizeof(w64_HTTPRequestHeadersReceived_t_121x) >= 16 );
C_ASSERT( offsetof(w64_HTTPRequestHeadersReceived_t_121x, m_hRequest) == 0 );
C_ASSERT( sizeof(w64_HTTPRequestHeadersReceived_t_121x().m_hRequest) >= 4 );
C_ASSERT( offsetof(w64_HTTPRequestHeadersReceived_t_121x, m_ulContextValue) == 8 );
C_ASSERT( sizeof(w64_HTTPRequestHeadersReceived_t_121x().m_ulContextValue) >= 8 );

C_ASSERT( sizeof(u64_HTTPRequestHeadersReceived_t_121x) >= 16 );
C_ASSERT( offsetof(u64_HTTPRequestHeadersReceived_t_121x, m_hRequest) == 0 );
C_ASSERT( sizeof(u64_HTTPRequestHeadersReceived_t_121x().m_hRequest) >= 4 );
C_ASSERT( offsetof(u64_HTTPRequestHeadersReceived_t_121x, m_ulContextValue) == 8 );
C_ASSERT( sizeof(u64_HTTPRequestHeadersReceived_t_121x().m_ulContextValue) >= 8 );

C_ASSERT( sizeof(w32_HTTPRequestHeadersReceived_t_121x) >= 16 );
C_ASSERT( offsetof(w32_HTTPRequestHeadersReceived_t_121x, m_hRequest) == 0 );
C_ASSERT( sizeof(w32_HTTPRequestHeadersReceived_t_121x().m_hRequest) >= 4 );
C_ASSERT( offsetof(w32_HTTPRequestHeadersReceived_t_121x, m_ulContextValue) == 8 );
C_ASSERT( sizeof(w32_HTTPRequestHeadersReceived_t_121x().m_ulContextValue) >= 8 );

C_ASSERT( sizeof(u32_HTTPRequestHeadersReceived_t_121x) >= 12 );
C_ASSERT( offsetof(u32_HTTPRequestHeadersReceived_t_121x, m_hRequest) == 0 );
C_ASSERT( sizeof(u32_HTTPRequestHeadersReceived_t_121x().m_hRequest) >= 4 );
C_ASSERT( offsetof(u32_HTTPRequestHeadersReceived_t_121x, m_ulContextValue) == 4 );
C_ASSERT( sizeof(u32_HTTPRequestHeadersReceived_t_121x().m_ulContextValue) >= 8 );

#ifdef __x86_64__
w64_HTTPRequestHeadersReceived_t_123::operator u64_HTTPRequestHeadersReceived_t_123() const
{
    u64_HTTPRequestHeadersReceived_t_123 ret;
    ret.m_hRequest = this->m_hRequest;
    ret.m_ulContextValue = this->m_ulContextValue;
    return ret;
}

u64_HTTPRequestHeadersReceived_t_123::operator w64_HTTPRequestHeadersReceived_t_123() const
{
    w64_HTTPRequestHeadersReceived_t_123 ret;
    ret.m_hRequest = this->m_hRequest;
    ret.m_ulContextValue = this->m_ulContextValue;
    return ret;
}
#endif

#ifdef __i386__
w32_HTTPRequestHeadersReceived_t_123::operator u32_HTTPRequestHeadersReceived_t_123() const
{
    u32_HTTPRequestHeadersReceived_t_123 ret;
    ret.m_hRequest = this->m_hRequest;
    ret.m_ulContextValue = this->m_ulContextValue;
    return ret;
}

u32_HTTPRequestHeadersReceived_t_123::operator w32_HTTPRequestHeadersReceived_t_123() const
{
    w32_HTTPRequestHeadersReceived_t_123 ret;
    ret.m_hRequest = this->m_hRequest;
    ret.m_ulContextValue = this->m_ulContextValue;
    return ret;
}
#endif

#ifdef __i386__
w32_HTTPRequestHeadersReceived_t_121x::operator u32_HTTPRequestHeadersReceived_t_121x() const
{
    u32_HTTPRequestHeadersReceived_t_121x ret;
    ret.m_hRequest = this->m_hRequest;
    ret.m_ulContextValue = this->m_ulContextValue;
    return ret;
}

u32_HTTPRequestHeadersReceived_t_121x::operator w32_HTTPRequestHeadersReceived_t_121x() const
{
    w32_HTTPRequestHeadersReceived_t_121x ret;
    ret.m_hRequest = this->m_hRequest;
    ret.m_ulContextValue = this->m_ulContextValue;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_ItemInstalled_t) >= 16 );
C_ASSERT( offsetof(w64_ItemInstalled_t, m_unAppID) == 0 );
C_ASSERT( sizeof(w64_ItemInstalled_t().m_unAppID) >= 4 );
C_ASSERT( offsetof(w64_ItemInstalled_t, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w64_ItemInstalled_t().m_nPublishedFileId) >= 8 );

C_ASSERT( sizeof(u64_ItemInstalled_t) >= 12 );
C_ASSERT( offsetof(u64_ItemInstalled_t, m_unAppID) == 0 );
C_ASSERT( sizeof(u64_ItemInstalled_t().m_unAppID) >= 4 );
C_ASSERT( offsetof(u64_ItemInstalled_t, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u64_ItemInstalled_t().m_nPublishedFileId) >= 8 );

C_ASSERT( sizeof(w32_ItemInstalled_t) >= 16 );
C_ASSERT( offsetof(w32_ItemInstalled_t, m_unAppID) == 0 );
C_ASSERT( sizeof(w32_ItemInstalled_t().m_unAppID) >= 4 );
C_ASSERT( offsetof(w32_ItemInstalled_t, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w32_ItemInstalled_t().m_nPublishedFileId) >= 8 );

C_ASSERT( sizeof(u32_ItemInstalled_t) >= 12 );
C_ASSERT( offsetof(u32_ItemInstalled_t, m_unAppID) == 0 );
C_ASSERT( sizeof(u32_ItemInstalled_t().m_unAppID) >= 4 );
C_ASSERT( offsetof(u32_ItemInstalled_t, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u32_ItemInstalled_t().m_nPublishedFileId) >= 8 );

#ifdef __x86_64__
w64_ItemInstalled_t::operator u64_ItemInstalled_t() const
{
    u64_ItemInstalled_t ret;
    ret.m_unAppID = this->m_unAppID;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    return ret;
}

u64_ItemInstalled_t::operator w64_ItemInstalled_t() const
{
    w64_ItemInstalled_t ret;
    ret.m_unAppID = this->m_unAppID;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    return ret;
}
#endif

#ifdef __i386__
w32_ItemInstalled_t::operator u32_ItemInstalled_t() const
{
    u32_ItemInstalled_t ret;
    ret.m_unAppID = this->m_unAppID;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    return ret;
}

u32_ItemInstalled_t::operator w32_ItemInstalled_t() const
{
    w32_ItemInstalled_t ret;
    ret.m_unAppID = this->m_unAppID;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_JoinPartyCallback_t) >= 280 );
C_ASSERT( offsetof(w64_JoinPartyCallback_t, m_eResult) == 0 );
C_ASSERT( sizeof(w64_JoinPartyCallback_t().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_JoinPartyCallback_t, m_ulBeaconID) == 8 );
C_ASSERT( sizeof(w64_JoinPartyCallback_t().m_ulBeaconID) >= 8 );
C_ASSERT( offsetof(w64_JoinPartyCallback_t, m_SteamIDBeaconOwner) == 16 );
C_ASSERT( sizeof(w64_JoinPartyCallback_t().m_SteamIDBeaconOwner) >= 8 );
C_ASSERT( offsetof(w64_JoinPartyCallback_t, m_rgchConnectString) == 24 );
C_ASSERT( sizeof(w64_JoinPartyCallback_t().m_rgchConnectString) >= 256 );

C_ASSERT( sizeof(u64_JoinPartyCallback_t) >= 276 );
C_ASSERT( offsetof(u64_JoinPartyCallback_t, m_eResult) == 0 );
C_ASSERT( sizeof(u64_JoinPartyCallback_t().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_JoinPartyCallback_t, m_ulBeaconID) == 4 );
C_ASSERT( sizeof(u64_JoinPartyCallback_t().m_ulBeaconID) >= 8 );
C_ASSERT( offsetof(u64_JoinPartyCallback_t, m_SteamIDBeaconOwner) == 12 );
C_ASSERT( sizeof(u64_JoinPartyCallback_t().m_SteamIDBeaconOwner) >= 8 );
C_ASSERT( offsetof(u64_JoinPartyCallback_t, m_rgchConnectString) == 20 );
C_ASSERT( sizeof(u64_JoinPartyCallback_t().m_rgchConnectString) >= 256 );

C_ASSERT( sizeof(w32_JoinPartyCallback_t) >= 280 );
C_ASSERT( offsetof(w32_JoinPartyCallback_t, m_eResult) == 0 );
C_ASSERT( sizeof(w32_JoinPartyCallback_t().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_JoinPartyCallback_t, m_ulBeaconID) == 8 );
C_ASSERT( sizeof(w32_JoinPartyCallback_t().m_ulBeaconID) >= 8 );
C_ASSERT( offsetof(w32_JoinPartyCallback_t, m_SteamIDBeaconOwner) == 16 );
C_ASSERT( sizeof(w32_JoinPartyCallback_t().m_SteamIDBeaconOwner) >= 8 );
C_ASSERT( offsetof(w32_JoinPartyCallback_t, m_rgchConnectString) == 24 );
C_ASSERT( sizeof(w32_JoinPartyCallback_t().m_rgchConnectString) >= 256 );

C_ASSERT( sizeof(u32_JoinPartyCallback_t) >= 276 );
C_ASSERT( offsetof(u32_JoinPartyCallback_t, m_eResult) == 0 );
C_ASSERT( sizeof(u32_JoinPartyCallback_t().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_JoinPartyCallback_t, m_ulBeaconID) == 4 );
C_ASSERT( sizeof(u32_JoinPartyCallback_t().m_ulBeaconID) >= 8 );
C_ASSERT( offsetof(u32_JoinPartyCallback_t, m_SteamIDBeaconOwner) == 12 );
C_ASSERT( sizeof(u32_JoinPartyCallback_t().m_SteamIDBeaconOwner) >= 8 );
C_ASSERT( offsetof(u32_JoinPartyCallback_t, m_rgchConnectString) == 20 );
C_ASSERT( sizeof(u32_JoinPartyCallback_t().m_rgchConnectString) >= 256 );

#ifdef __x86_64__
w64_JoinPartyCallback_t::operator u64_JoinPartyCallback_t() const
{
    u64_JoinPartyCallback_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_ulBeaconID = this->m_ulBeaconID;
    ret.m_SteamIDBeaconOwner = this->m_SteamIDBeaconOwner;
    ret.m_rgchConnectString = this->m_rgchConnectString;
    return ret;
}

u64_JoinPartyCallback_t::operator w64_JoinPartyCallback_t() const
{
    w64_JoinPartyCallback_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_ulBeaconID = this->m_ulBeaconID;
    ret.m_SteamIDBeaconOwner = this->m_SteamIDBeaconOwner;
    ret.m_rgchConnectString = this->m_rgchConnectString;
    return ret;
}
#endif

#ifdef __i386__
w32_JoinPartyCallback_t::operator u32_JoinPartyCallback_t() const
{
    u32_JoinPartyCallback_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_ulBeaconID = this->m_ulBeaconID;
    ret.m_SteamIDBeaconOwner = this->m_SteamIDBeaconOwner;
    ret.m_rgchConnectString = this->m_rgchConnectString;
    return ret;
}

u32_JoinPartyCallback_t::operator w32_JoinPartyCallback_t() const
{
    w32_JoinPartyCallback_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_ulBeaconID = this->m_ulBeaconID;
    ret.m_SteamIDBeaconOwner = this->m_SteamIDBeaconOwner;
    ret.m_rgchConnectString = this->m_rgchConnectString;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_LeaderboardEntry_t_123) >= 32 );
C_ASSERT( offsetof(w64_LeaderboardEntry_t_123, m_steamIDUser) == 0 );
C_ASSERT( sizeof(w64_LeaderboardEntry_t_123().m_steamIDUser) >= 8 );
C_ASSERT( offsetof(w64_LeaderboardEntry_t_123, m_nGlobalRank) == 8 );
C_ASSERT( sizeof(w64_LeaderboardEntry_t_123().m_nGlobalRank) >= 4 );
C_ASSERT( offsetof(w64_LeaderboardEntry_t_123, m_nScore) == 12 );
C_ASSERT( sizeof(w64_LeaderboardEntry_t_123().m_nScore) >= 4 );
C_ASSERT( offsetof(w64_LeaderboardEntry_t_123, m_cDetails) == 16 );
C_ASSERT( sizeof(w64_LeaderboardEntry_t_123().m_cDetails) >= 4 );
C_ASSERT( offsetof(w64_LeaderboardEntry_t_123, m_hUGC) == 24 );
C_ASSERT( sizeof(w64_LeaderboardEntry_t_123().m_hUGC) >= 8 );

C_ASSERT( sizeof(u64_LeaderboardEntry_t_123) >= 28 );
C_ASSERT( offsetof(u64_LeaderboardEntry_t_123, m_steamIDUser) == 0 );
C_ASSERT( sizeof(u64_LeaderboardEntry_t_123().m_steamIDUser) >= 8 );
C_ASSERT( offsetof(u64_LeaderboardEntry_t_123, m_nGlobalRank) == 8 );
C_ASSERT( sizeof(u64_LeaderboardEntry_t_123().m_nGlobalRank) >= 4 );
C_ASSERT( offsetof(u64_LeaderboardEntry_t_123, m_nScore) == 12 );
C_ASSERT( sizeof(u64_LeaderboardEntry_t_123().m_nScore) >= 4 );
C_ASSERT( offsetof(u64_LeaderboardEntry_t_123, m_cDetails) == 16 );
C_ASSERT( sizeof(u64_LeaderboardEntry_t_123().m_cDetails) >= 4 );
C_ASSERT( offsetof(u64_LeaderboardEntry_t_123, m_hUGC) == 20 );
C_ASSERT( sizeof(u64_LeaderboardEntry_t_123().m_hUGC) >= 8 );

C_ASSERT( sizeof(w32_LeaderboardEntry_t_123) >= 32 );
C_ASSERT( offsetof(w32_LeaderboardEntry_t_123, m_steamIDUser) == 0 );
C_ASSERT( sizeof(w32_LeaderboardEntry_t_123().m_steamIDUser) >= 8 );
C_ASSERT( offsetof(w32_LeaderboardEntry_t_123, m_nGlobalRank) == 8 );
C_ASSERT( sizeof(w32_LeaderboardEntry_t_123().m_nGlobalRank) >= 4 );
C_ASSERT( offsetof(w32_LeaderboardEntry_t_123, m_nScore) == 12 );
C_ASSERT( sizeof(w32_LeaderboardEntry_t_123().m_nScore) >= 4 );
C_ASSERT( offsetof(w32_LeaderboardEntry_t_123, m_cDetails) == 16 );
C_ASSERT( sizeof(w32_LeaderboardEntry_t_123().m_cDetails) >= 4 );
C_ASSERT( offsetof(w32_LeaderboardEntry_t_123, m_hUGC) == 24 );
C_ASSERT( sizeof(w32_LeaderboardEntry_t_123().m_hUGC) >= 8 );

C_ASSERT( sizeof(u32_LeaderboardEntry_t_123) >= 28 );
C_ASSERT( offsetof(u32_LeaderboardEntry_t_123, m_steamIDUser) == 0 );
C_ASSERT( sizeof(u32_LeaderboardEntry_t_123().m_steamIDUser) >= 8 );
C_ASSERT( offsetof(u32_LeaderboardEntry_t_123, m_nGlobalRank) == 8 );
C_ASSERT( sizeof(u32_LeaderboardEntry_t_123().m_nGlobalRank) >= 4 );
C_ASSERT( offsetof(u32_LeaderboardEntry_t_123, m_nScore) == 12 );
C_ASSERT( sizeof(u32_LeaderboardEntry_t_123().m_nScore) >= 4 );
C_ASSERT( offsetof(u32_LeaderboardEntry_t_123, m_cDetails) == 16 );
C_ASSERT( sizeof(u32_LeaderboardEntry_t_123().m_cDetails) >= 4 );
C_ASSERT( offsetof(u32_LeaderboardEntry_t_123, m_hUGC) == 20 );
C_ASSERT( sizeof(u32_LeaderboardEntry_t_123().m_hUGC) >= 8 );

C_ASSERT( sizeof(w64_LeaderboardEntry_t_111x) >= 32 );
C_ASSERT( offsetof(w64_LeaderboardEntry_t_111x, m_steamIDUser) == 0 );
C_ASSERT( sizeof(w64_LeaderboardEntry_t_111x().m_steamIDUser) >= 8 );
C_ASSERT( offsetof(w64_LeaderboardEntry_t_111x, m_nGlobalRank) == 8 );
C_ASSERT( sizeof(w64_LeaderboardEntry_t_111x().m_nGlobalRank) >= 4 );
C_ASSERT( offsetof(w64_LeaderboardEntry_t_111x, m_nScore) == 12 );
C_ASSERT( sizeof(w64_LeaderboardEntry_t_111x().m_nScore) >= 4 );
C_ASSERT( offsetof(w64_LeaderboardEntry_t_111x, m_cDetails) == 16 );
C_ASSERT( sizeof(w64_LeaderboardEntry_t_111x().m_cDetails) >= 4 );
C_ASSERT( offsetof(w64_LeaderboardEntry_t_111x, m_hUGC) == 24 );
C_ASSERT( sizeof(w64_LeaderboardEntry_t_111x().m_hUGC) >= 8 );

C_ASSERT( sizeof(u64_LeaderboardEntry_t_111x) >= 32 );
C_ASSERT( offsetof(u64_LeaderboardEntry_t_111x, m_steamIDUser) == 0 );
C_ASSERT( sizeof(u64_LeaderboardEntry_t_111x().m_steamIDUser) >= 8 );
C_ASSERT( offsetof(u64_LeaderboardEntry_t_111x, m_nGlobalRank) == 8 );
C_ASSERT( sizeof(u64_LeaderboardEntry_t_111x().m_nGlobalRank) >= 4 );
C_ASSERT( offsetof(u64_LeaderboardEntry_t_111x, m_nScore) == 12 );
C_ASSERT( sizeof(u64_LeaderboardEntry_t_111x().m_nScore) >= 4 );
C_ASSERT( offsetof(u64_LeaderboardEntry_t_111x, m_cDetails) == 16 );
C_ASSERT( sizeof(u64_LeaderboardEntry_t_111x().m_cDetails) >= 4 );
C_ASSERT( offsetof(u64_LeaderboardEntry_t_111x, m_hUGC) == 24 );
C_ASSERT( sizeof(u64_LeaderboardEntry_t_111x().m_hUGC) >= 8 );

C_ASSERT( sizeof(w32_LeaderboardEntry_t_111x) >= 32 );
C_ASSERT( offsetof(w32_LeaderboardEntry_t_111x, m_steamIDUser) == 0 );
C_ASSERT( sizeof(w32_LeaderboardEntry_t_111x().m_steamIDUser) >= 8 );
C_ASSERT( offsetof(w32_LeaderboardEntry_t_111x, m_nGlobalRank) == 8 );
C_ASSERT( sizeof(w32_LeaderboardEntry_t_111x().m_nGlobalRank) >= 4 );
C_ASSERT( offsetof(w32_LeaderboardEntry_t_111x, m_nScore) == 12 );
C_ASSERT( sizeof(w32_LeaderboardEntry_t_111x().m_nScore) >= 4 );
C_ASSERT( offsetof(w32_LeaderboardEntry_t_111x, m_cDetails) == 16 );
C_ASSERT( sizeof(w32_LeaderboardEntry_t_111x().m_cDetails) >= 4 );
C_ASSERT( offsetof(w32_LeaderboardEntry_t_111x, m_hUGC) == 24 );
C_ASSERT( sizeof(w32_LeaderboardEntry_t_111x().m_hUGC) >= 8 );

C_ASSERT( sizeof(u32_LeaderboardEntry_t_111x) >= 28 );
C_ASSERT( offsetof(u32_LeaderboardEntry_t_111x, m_steamIDUser) == 0 );
C_ASSERT( sizeof(u32_LeaderboardEntry_t_111x().m_steamIDUser) >= 8 );
C_ASSERT( offsetof(u32_LeaderboardEntry_t_111x, m_nGlobalRank) == 8 );
C_ASSERT( sizeof(u32_LeaderboardEntry_t_111x().m_nGlobalRank) >= 4 );
C_ASSERT( offsetof(u32_LeaderboardEntry_t_111x, m_nScore) == 12 );
C_ASSERT( sizeof(u32_LeaderboardEntry_t_111x().m_nScore) >= 4 );
C_ASSERT( offsetof(u32_LeaderboardEntry_t_111x, m_cDetails) == 16 );
C_ASSERT( sizeof(u32_LeaderboardEntry_t_111x().m_cDetails) >= 4 );
C_ASSERT( offsetof(u32_LeaderboardEntry_t_111x, m_hUGC) == 20 );
C_ASSERT( sizeof(u32_LeaderboardEntry_t_111x().m_hUGC) >= 8 );

C_ASSERT( sizeof(w64_LeaderboardEntry_t_104) >= 20 );
C_ASSERT( offsetof(w64_LeaderboardEntry_t_104, m_steamIDUser) == 0 );
C_ASSERT( sizeof(w64_LeaderboardEntry_t_104().m_steamIDUser) >= 8 );
C_ASSERT( offsetof(w64_LeaderboardEntry_t_104, m_nGlobalRank) == 8 );
C_ASSERT( sizeof(w64_LeaderboardEntry_t_104().m_nGlobalRank) >= 4 );
C_ASSERT( offsetof(w64_LeaderboardEntry_t_104, m_nScore) == 12 );
C_ASSERT( sizeof(w64_LeaderboardEntry_t_104().m_nScore) >= 4 );
C_ASSERT( offsetof(w64_LeaderboardEntry_t_104, m_cDetails) == 16 );
C_ASSERT( sizeof(w64_LeaderboardEntry_t_104().m_cDetails) >= 4 );

C_ASSERT( sizeof(u64_LeaderboardEntry_t_104) >= 20 );
C_ASSERT( offsetof(u64_LeaderboardEntry_t_104, m_steamIDUser) == 0 );
C_ASSERT( sizeof(u64_LeaderboardEntry_t_104().m_steamIDUser) >= 8 );
C_ASSERT( offsetof(u64_LeaderboardEntry_t_104, m_nGlobalRank) == 8 );
C_ASSERT( sizeof(u64_LeaderboardEntry_t_104().m_nGlobalRank) >= 4 );
C_ASSERT( offsetof(u64_LeaderboardEntry_t_104, m_nScore) == 12 );
C_ASSERT( sizeof(u64_LeaderboardEntry_t_104().m_nScore) >= 4 );
C_ASSERT( offsetof(u64_LeaderboardEntry_t_104, m_cDetails) == 16 );
C_ASSERT( sizeof(u64_LeaderboardEntry_t_104().m_cDetails) >= 4 );

C_ASSERT( sizeof(w32_LeaderboardEntry_t_104) >= 20 );
C_ASSERT( offsetof(w32_LeaderboardEntry_t_104, m_steamIDUser) == 0 );
C_ASSERT( sizeof(w32_LeaderboardEntry_t_104().m_steamIDUser) >= 8 );
C_ASSERT( offsetof(w32_LeaderboardEntry_t_104, m_nGlobalRank) == 8 );
C_ASSERT( sizeof(w32_LeaderboardEntry_t_104().m_nGlobalRank) >= 4 );
C_ASSERT( offsetof(w32_LeaderboardEntry_t_104, m_nScore) == 12 );
C_ASSERT( sizeof(w32_LeaderboardEntry_t_104().m_nScore) >= 4 );
C_ASSERT( offsetof(w32_LeaderboardEntry_t_104, m_cDetails) == 16 );
C_ASSERT( sizeof(w32_LeaderboardEntry_t_104().m_cDetails) >= 4 );

C_ASSERT( sizeof(u32_LeaderboardEntry_t_104) >= 20 );
C_ASSERT( offsetof(u32_LeaderboardEntry_t_104, m_steamIDUser) == 0 );
C_ASSERT( sizeof(u32_LeaderboardEntry_t_104().m_steamIDUser) >= 8 );
C_ASSERT( offsetof(u32_LeaderboardEntry_t_104, m_nGlobalRank) == 8 );
C_ASSERT( sizeof(u32_LeaderboardEntry_t_104().m_nGlobalRank) >= 4 );
C_ASSERT( offsetof(u32_LeaderboardEntry_t_104, m_nScore) == 12 );
C_ASSERT( sizeof(u32_LeaderboardEntry_t_104().m_nScore) >= 4 );
C_ASSERT( offsetof(u32_LeaderboardEntry_t_104, m_cDetails) == 16 );
C_ASSERT( sizeof(u32_LeaderboardEntry_t_104().m_cDetails) >= 4 );

#ifdef __x86_64__
w64_LeaderboardEntry_t_123::operator u64_LeaderboardEntry_t_123() const
{
    u64_LeaderboardEntry_t_123 ret;
    ret.m_steamIDUser = this->m_steamIDUser;
    ret.m_nGlobalRank = this->m_nGlobalRank;
    ret.m_nScore = this->m_nScore;
    ret.m_cDetails = this->m_cDetails;
    ret.m_hUGC = this->m_hUGC;
    return ret;
}

u64_LeaderboardEntry_t_123::operator w64_LeaderboardEntry_t_123() const
{
    w64_LeaderboardEntry_t_123 ret;
    ret.m_steamIDUser = this->m_steamIDUser;
    ret.m_nGlobalRank = this->m_nGlobalRank;
    ret.m_nScore = this->m_nScore;
    ret.m_cDetails = this->m_cDetails;
    ret.m_hUGC = this->m_hUGC;
    return ret;
}
#endif

#ifdef __i386__
w32_LeaderboardEntry_t_123::operator u32_LeaderboardEntry_t_123() const
{
    u32_LeaderboardEntry_t_123 ret;
    ret.m_steamIDUser = this->m_steamIDUser;
    ret.m_nGlobalRank = this->m_nGlobalRank;
    ret.m_nScore = this->m_nScore;
    ret.m_cDetails = this->m_cDetails;
    ret.m_hUGC = this->m_hUGC;
    return ret;
}

u32_LeaderboardEntry_t_123::operator w32_LeaderboardEntry_t_123() const
{
    w32_LeaderboardEntry_t_123 ret;
    ret.m_steamIDUser = this->m_steamIDUser;
    ret.m_nGlobalRank = this->m_nGlobalRank;
    ret.m_nScore = this->m_nScore;
    ret.m_cDetails = this->m_cDetails;
    ret.m_hUGC = this->m_hUGC;
    return ret;
}
#endif

#ifdef __i386__
w32_LeaderboardEntry_t_111x::operator u32_LeaderboardEntry_t_111x() const
{
    u32_LeaderboardEntry_t_111x ret;
    ret.m_steamIDUser = this->m_steamIDUser;
    ret.m_nGlobalRank = this->m_nGlobalRank;
    ret.m_nScore = this->m_nScore;
    ret.m_cDetails = this->m_cDetails;
    ret.m_hUGC = this->m_hUGC;
    return ret;
}

u32_LeaderboardEntry_t_111x::operator w32_LeaderboardEntry_t_111x() const
{
    w32_LeaderboardEntry_t_111x ret;
    ret.m_steamIDUser = this->m_steamIDUser;
    ret.m_nGlobalRank = this->m_nGlobalRank;
    ret.m_nScore = this->m_nScore;
    ret.m_cDetails = this->m_cDetails;
    ret.m_hUGC = this->m_hUGC;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_LeaderboardScoreUploaded_t_123) >= 32 );
C_ASSERT( offsetof(w64_LeaderboardScoreUploaded_t_123, m_bSuccess) == 0 );
C_ASSERT( sizeof(w64_LeaderboardScoreUploaded_t_123().m_bSuccess) >= 1 );
C_ASSERT( offsetof(w64_LeaderboardScoreUploaded_t_123, m_hSteamLeaderboard) == 8 );
C_ASSERT( sizeof(w64_LeaderboardScoreUploaded_t_123().m_hSteamLeaderboard) >= 8 );
C_ASSERT( offsetof(w64_LeaderboardScoreUploaded_t_123, m_nScore) == 16 );
C_ASSERT( sizeof(w64_LeaderboardScoreUploaded_t_123().m_nScore) >= 4 );
C_ASSERT( offsetof(w64_LeaderboardScoreUploaded_t_123, m_bScoreChanged) == 20 );
C_ASSERT( sizeof(w64_LeaderboardScoreUploaded_t_123().m_bScoreChanged) >= 1 );
C_ASSERT( offsetof(w64_LeaderboardScoreUploaded_t_123, m_nGlobalRankNew) == 24 );
C_ASSERT( sizeof(w64_LeaderboardScoreUploaded_t_123().m_nGlobalRankNew) >= 4 );
C_ASSERT( offsetof(w64_LeaderboardScoreUploaded_t_123, m_nGlobalRankPrevious) == 28 );
C_ASSERT( sizeof(w64_LeaderboardScoreUploaded_t_123().m_nGlobalRankPrevious) >= 4 );

C_ASSERT( sizeof(u64_LeaderboardScoreUploaded_t_123) >= 28 );
C_ASSERT( offsetof(u64_LeaderboardScoreUploaded_t_123, m_bSuccess) == 0 );
C_ASSERT( sizeof(u64_LeaderboardScoreUploaded_t_123().m_bSuccess) >= 1 );
C_ASSERT( offsetof(u64_LeaderboardScoreUploaded_t_123, m_hSteamLeaderboard) == 4 );
C_ASSERT( sizeof(u64_LeaderboardScoreUploaded_t_123().m_hSteamLeaderboard) >= 8 );
C_ASSERT( offsetof(u64_LeaderboardScoreUploaded_t_123, m_nScore) == 12 );
C_ASSERT( sizeof(u64_LeaderboardScoreUploaded_t_123().m_nScore) >= 4 );
C_ASSERT( offsetof(u64_LeaderboardScoreUploaded_t_123, m_bScoreChanged) == 16 );
C_ASSERT( sizeof(u64_LeaderboardScoreUploaded_t_123().m_bScoreChanged) >= 1 );
C_ASSERT( offsetof(u64_LeaderboardScoreUploaded_t_123, m_nGlobalRankNew) == 20 );
C_ASSERT( sizeof(u64_LeaderboardScoreUploaded_t_123().m_nGlobalRankNew) >= 4 );
C_ASSERT( offsetof(u64_LeaderboardScoreUploaded_t_123, m_nGlobalRankPrevious) == 24 );
C_ASSERT( sizeof(u64_LeaderboardScoreUploaded_t_123().m_nGlobalRankPrevious) >= 4 );

C_ASSERT( sizeof(w32_LeaderboardScoreUploaded_t_123) >= 32 );
C_ASSERT( offsetof(w32_LeaderboardScoreUploaded_t_123, m_bSuccess) == 0 );
C_ASSERT( sizeof(w32_LeaderboardScoreUploaded_t_123().m_bSuccess) >= 1 );
C_ASSERT( offsetof(w32_LeaderboardScoreUploaded_t_123, m_hSteamLeaderboard) == 8 );
C_ASSERT( sizeof(w32_LeaderboardScoreUploaded_t_123().m_hSteamLeaderboard) >= 8 );
C_ASSERT( offsetof(w32_LeaderboardScoreUploaded_t_123, m_nScore) == 16 );
C_ASSERT( sizeof(w32_LeaderboardScoreUploaded_t_123().m_nScore) >= 4 );
C_ASSERT( offsetof(w32_LeaderboardScoreUploaded_t_123, m_bScoreChanged) == 20 );
C_ASSERT( sizeof(w32_LeaderboardScoreUploaded_t_123().m_bScoreChanged) >= 1 );
C_ASSERT( offsetof(w32_LeaderboardScoreUploaded_t_123, m_nGlobalRankNew) == 24 );
C_ASSERT( sizeof(w32_LeaderboardScoreUploaded_t_123().m_nGlobalRankNew) >= 4 );
C_ASSERT( offsetof(w32_LeaderboardScoreUploaded_t_123, m_nGlobalRankPrevious) == 28 );
C_ASSERT( sizeof(w32_LeaderboardScoreUploaded_t_123().m_nGlobalRankPrevious) >= 4 );

C_ASSERT( sizeof(u32_LeaderboardScoreUploaded_t_123) >= 28 );
C_ASSERT( offsetof(u32_LeaderboardScoreUploaded_t_123, m_bSuccess) == 0 );
C_ASSERT( sizeof(u32_LeaderboardScoreUploaded_t_123().m_bSuccess) >= 1 );
C_ASSERT( offsetof(u32_LeaderboardScoreUploaded_t_123, m_hSteamLeaderboard) == 4 );
C_ASSERT( sizeof(u32_LeaderboardScoreUploaded_t_123().m_hSteamLeaderboard) >= 8 );
C_ASSERT( offsetof(u32_LeaderboardScoreUploaded_t_123, m_nScore) == 12 );
C_ASSERT( sizeof(u32_LeaderboardScoreUploaded_t_123().m_nScore) >= 4 );
C_ASSERT( offsetof(u32_LeaderboardScoreUploaded_t_123, m_bScoreChanged) == 16 );
C_ASSERT( sizeof(u32_LeaderboardScoreUploaded_t_123().m_bScoreChanged) >= 1 );
C_ASSERT( offsetof(u32_LeaderboardScoreUploaded_t_123, m_nGlobalRankNew) == 20 );
C_ASSERT( sizeof(u32_LeaderboardScoreUploaded_t_123().m_nGlobalRankNew) >= 4 );
C_ASSERT( offsetof(u32_LeaderboardScoreUploaded_t_123, m_nGlobalRankPrevious) == 24 );
C_ASSERT( sizeof(u32_LeaderboardScoreUploaded_t_123().m_nGlobalRankPrevious) >= 4 );

C_ASSERT( sizeof(w64_LeaderboardScoreUploaded_t_104) >= 32 );
C_ASSERT( offsetof(w64_LeaderboardScoreUploaded_t_104, m_bSuccess) == 0 );
C_ASSERT( sizeof(w64_LeaderboardScoreUploaded_t_104().m_bSuccess) >= 1 );
C_ASSERT( offsetof(w64_LeaderboardScoreUploaded_t_104, m_hSteamLeaderboard) == 8 );
C_ASSERT( sizeof(w64_LeaderboardScoreUploaded_t_104().m_hSteamLeaderboard) >= 8 );
C_ASSERT( offsetof(w64_LeaderboardScoreUploaded_t_104, m_nScore) == 16 );
C_ASSERT( sizeof(w64_LeaderboardScoreUploaded_t_104().m_nScore) >= 4 );
C_ASSERT( offsetof(w64_LeaderboardScoreUploaded_t_104, m_bScoreChanged) == 20 );
C_ASSERT( sizeof(w64_LeaderboardScoreUploaded_t_104().m_bScoreChanged) >= 1 );
C_ASSERT( offsetof(w64_LeaderboardScoreUploaded_t_104, m_nGlobalRankNew) == 24 );
C_ASSERT( sizeof(w64_LeaderboardScoreUploaded_t_104().m_nGlobalRankNew) >= 4 );
C_ASSERT( offsetof(w64_LeaderboardScoreUploaded_t_104, m_nGlobalRankPrevious) == 28 );
C_ASSERT( sizeof(w64_LeaderboardScoreUploaded_t_104().m_nGlobalRankPrevious) >= 4 );

C_ASSERT( sizeof(u64_LeaderboardScoreUploaded_t_104) >= 32 );
C_ASSERT( offsetof(u64_LeaderboardScoreUploaded_t_104, m_bSuccess) == 0 );
C_ASSERT( sizeof(u64_LeaderboardScoreUploaded_t_104().m_bSuccess) >= 1 );
C_ASSERT( offsetof(u64_LeaderboardScoreUploaded_t_104, m_hSteamLeaderboard) == 8 );
C_ASSERT( sizeof(u64_LeaderboardScoreUploaded_t_104().m_hSteamLeaderboard) >= 8 );
C_ASSERT( offsetof(u64_LeaderboardScoreUploaded_t_104, m_nScore) == 16 );
C_ASSERT( sizeof(u64_LeaderboardScoreUploaded_t_104().m_nScore) >= 4 );
C_ASSERT( offsetof(u64_LeaderboardScoreUploaded_t_104, m_bScoreChanged) == 20 );
C_ASSERT( sizeof(u64_LeaderboardScoreUploaded_t_104().m_bScoreChanged) >= 1 );
C_ASSERT( offsetof(u64_LeaderboardScoreUploaded_t_104, m_nGlobalRankNew) == 24 );
C_ASSERT( sizeof(u64_LeaderboardScoreUploaded_t_104().m_nGlobalRankNew) >= 4 );
C_ASSERT( offsetof(u64_LeaderboardScoreUploaded_t_104, m_nGlobalRankPrevious) == 28 );
C_ASSERT( sizeof(u64_LeaderboardScoreUploaded_t_104().m_nGlobalRankPrevious) >= 4 );

C_ASSERT( sizeof(w32_LeaderboardScoreUploaded_t_104) >= 32 );
C_ASSERT( offsetof(w32_LeaderboardScoreUploaded_t_104, m_bSuccess) == 0 );
C_ASSERT( sizeof(w32_LeaderboardScoreUploaded_t_104().m_bSuccess) >= 1 );
C_ASSERT( offsetof(w32_LeaderboardScoreUploaded_t_104, m_hSteamLeaderboard) == 8 );
C_ASSERT( sizeof(w32_LeaderboardScoreUploaded_t_104().m_hSteamLeaderboard) >= 8 );
C_ASSERT( offsetof(w32_LeaderboardScoreUploaded_t_104, m_nScore) == 16 );
C_ASSERT( sizeof(w32_LeaderboardScoreUploaded_t_104().m_nScore) >= 4 );
C_ASSERT( offsetof(w32_LeaderboardScoreUploaded_t_104, m_bScoreChanged) == 20 );
C_ASSERT( sizeof(w32_LeaderboardScoreUploaded_t_104().m_bScoreChanged) >= 1 );
C_ASSERT( offsetof(w32_LeaderboardScoreUploaded_t_104, m_nGlobalRankNew) == 24 );
C_ASSERT( sizeof(w32_LeaderboardScoreUploaded_t_104().m_nGlobalRankNew) >= 4 );
C_ASSERT( offsetof(w32_LeaderboardScoreUploaded_t_104, m_nGlobalRankPrevious) == 28 );
C_ASSERT( sizeof(w32_LeaderboardScoreUploaded_t_104().m_nGlobalRankPrevious) >= 4 );

C_ASSERT( sizeof(u32_LeaderboardScoreUploaded_t_104) >= 28 );
C_ASSERT( offsetof(u32_LeaderboardScoreUploaded_t_104, m_bSuccess) == 0 );
C_ASSERT( sizeof(u32_LeaderboardScoreUploaded_t_104().m_bSuccess) >= 1 );
C_ASSERT( offsetof(u32_LeaderboardScoreUploaded_t_104, m_hSteamLeaderboard) == 4 );
C_ASSERT( sizeof(u32_LeaderboardScoreUploaded_t_104().m_hSteamLeaderboard) >= 8 );
C_ASSERT( offsetof(u32_LeaderboardScoreUploaded_t_104, m_nScore) == 12 );
C_ASSERT( sizeof(u32_LeaderboardScoreUploaded_t_104().m_nScore) >= 4 );
C_ASSERT( offsetof(u32_LeaderboardScoreUploaded_t_104, m_bScoreChanged) == 16 );
C_ASSERT( sizeof(u32_LeaderboardScoreUploaded_t_104().m_bScoreChanged) >= 1 );
C_ASSERT( offsetof(u32_LeaderboardScoreUploaded_t_104, m_nGlobalRankNew) == 20 );
C_ASSERT( sizeof(u32_LeaderboardScoreUploaded_t_104().m_nGlobalRankNew) >= 4 );
C_ASSERT( offsetof(u32_LeaderboardScoreUploaded_t_104, m_nGlobalRankPrevious) == 24 );
C_ASSERT( sizeof(u32_LeaderboardScoreUploaded_t_104().m_nGlobalRankPrevious) >= 4 );

#ifdef __x86_64__
w64_LeaderboardScoreUploaded_t_123::operator u64_LeaderboardScoreUploaded_t_123() const
{
    u64_LeaderboardScoreUploaded_t_123 ret;
    ret.m_bSuccess = this->m_bSuccess;
    ret.m_hSteamLeaderboard = this->m_hSteamLeaderboard;
    ret.m_nScore = this->m_nScore;
    ret.m_bScoreChanged = this->m_bScoreChanged;
    ret.m_nGlobalRankNew = this->m_nGlobalRankNew;
    ret.m_nGlobalRankPrevious = this->m_nGlobalRankPrevious;
    return ret;
}

u64_LeaderboardScoreUploaded_t_123::operator w64_LeaderboardScoreUploaded_t_123() const
{
    w64_LeaderboardScoreUploaded_t_123 ret;
    ret.m_bSuccess = this->m_bSuccess;
    ret.m_hSteamLeaderboard = this->m_hSteamLeaderboard;
    ret.m_nScore = this->m_nScore;
    ret.m_bScoreChanged = this->m_bScoreChanged;
    ret.m_nGlobalRankNew = this->m_nGlobalRankNew;
    ret.m_nGlobalRankPrevious = this->m_nGlobalRankPrevious;
    return ret;
}
#endif

#ifdef __i386__
w32_LeaderboardScoreUploaded_t_123::operator u32_LeaderboardScoreUploaded_t_123() const
{
    u32_LeaderboardScoreUploaded_t_123 ret;
    ret.m_bSuccess = this->m_bSuccess;
    ret.m_hSteamLeaderboard = this->m_hSteamLeaderboard;
    ret.m_nScore = this->m_nScore;
    ret.m_bScoreChanged = this->m_bScoreChanged;
    ret.m_nGlobalRankNew = this->m_nGlobalRankNew;
    ret.m_nGlobalRankPrevious = this->m_nGlobalRankPrevious;
    return ret;
}

u32_LeaderboardScoreUploaded_t_123::operator w32_LeaderboardScoreUploaded_t_123() const
{
    w32_LeaderboardScoreUploaded_t_123 ret;
    ret.m_bSuccess = this->m_bSuccess;
    ret.m_hSteamLeaderboard = this->m_hSteamLeaderboard;
    ret.m_nScore = this->m_nScore;
    ret.m_bScoreChanged = this->m_bScoreChanged;
    ret.m_nGlobalRankNew = this->m_nGlobalRankNew;
    ret.m_nGlobalRankPrevious = this->m_nGlobalRankPrevious;
    return ret;
}
#endif

#ifdef __i386__
w32_LeaderboardScoreUploaded_t_104::operator u32_LeaderboardScoreUploaded_t_104() const
{
    u32_LeaderboardScoreUploaded_t_104 ret;
    ret.m_bSuccess = this->m_bSuccess;
    ret.m_hSteamLeaderboard = this->m_hSteamLeaderboard;
    ret.m_nScore = this->m_nScore;
    ret.m_bScoreChanged = this->m_bScoreChanged;
    ret.m_nGlobalRankNew = this->m_nGlobalRankNew;
    ret.m_nGlobalRankPrevious = this->m_nGlobalRankPrevious;
    return ret;
}

u32_LeaderboardScoreUploaded_t_104::operator w32_LeaderboardScoreUploaded_t_104() const
{
    w32_LeaderboardScoreUploaded_t_104 ret;
    ret.m_bSuccess = this->m_bSuccess;
    ret.m_hSteamLeaderboard = this->m_hSteamLeaderboard;
    ret.m_nScore = this->m_nScore;
    ret.m_bScoreChanged = this->m_bScoreChanged;
    ret.m_nGlobalRankNew = this->m_nGlobalRankNew;
    ret.m_nGlobalRankPrevious = this->m_nGlobalRankPrevious;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_LeaderboardUGCSet_t_123) >= 16 );
C_ASSERT( offsetof(w64_LeaderboardUGCSet_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(w64_LeaderboardUGCSet_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_LeaderboardUGCSet_t_123, m_hSteamLeaderboard) == 8 );
C_ASSERT( sizeof(w64_LeaderboardUGCSet_t_123().m_hSteamLeaderboard) >= 8 );

C_ASSERT( sizeof(u64_LeaderboardUGCSet_t_123) >= 12 );
C_ASSERT( offsetof(u64_LeaderboardUGCSet_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(u64_LeaderboardUGCSet_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_LeaderboardUGCSet_t_123, m_hSteamLeaderboard) == 4 );
C_ASSERT( sizeof(u64_LeaderboardUGCSet_t_123().m_hSteamLeaderboard) >= 8 );

C_ASSERT( sizeof(w32_LeaderboardUGCSet_t_123) >= 16 );
C_ASSERT( offsetof(w32_LeaderboardUGCSet_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(w32_LeaderboardUGCSet_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_LeaderboardUGCSet_t_123, m_hSteamLeaderboard) == 8 );
C_ASSERT( sizeof(w32_LeaderboardUGCSet_t_123().m_hSteamLeaderboard) >= 8 );

C_ASSERT( sizeof(u32_LeaderboardUGCSet_t_123) >= 12 );
C_ASSERT( offsetof(u32_LeaderboardUGCSet_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(u32_LeaderboardUGCSet_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_LeaderboardUGCSet_t_123, m_hSteamLeaderboard) == 4 );
C_ASSERT( sizeof(u32_LeaderboardUGCSet_t_123().m_hSteamLeaderboard) >= 8 );

C_ASSERT( sizeof(w64_LeaderboardUGCSet_t_111x) >= 16 );
C_ASSERT( offsetof(w64_LeaderboardUGCSet_t_111x, m_eResult) == 0 );
C_ASSERT( sizeof(w64_LeaderboardUGCSet_t_111x().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_LeaderboardUGCSet_t_111x, m_hSteamLeaderboard) == 8 );
C_ASSERT( sizeof(w64_LeaderboardUGCSet_t_111x().m_hSteamLeaderboard) >= 8 );

C_ASSERT( sizeof(u64_LeaderboardUGCSet_t_111x) >= 16 );
C_ASSERT( offsetof(u64_LeaderboardUGCSet_t_111x, m_eResult) == 0 );
C_ASSERT( sizeof(u64_LeaderboardUGCSet_t_111x().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_LeaderboardUGCSet_t_111x, m_hSteamLeaderboard) == 8 );
C_ASSERT( sizeof(u64_LeaderboardUGCSet_t_111x().m_hSteamLeaderboard) >= 8 );

C_ASSERT( sizeof(w32_LeaderboardUGCSet_t_111x) >= 16 );
C_ASSERT( offsetof(w32_LeaderboardUGCSet_t_111x, m_eResult) == 0 );
C_ASSERT( sizeof(w32_LeaderboardUGCSet_t_111x().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_LeaderboardUGCSet_t_111x, m_hSteamLeaderboard) == 8 );
C_ASSERT( sizeof(w32_LeaderboardUGCSet_t_111x().m_hSteamLeaderboard) >= 8 );

C_ASSERT( sizeof(u32_LeaderboardUGCSet_t_111x) >= 12 );
C_ASSERT( offsetof(u32_LeaderboardUGCSet_t_111x, m_eResult) == 0 );
C_ASSERT( sizeof(u32_LeaderboardUGCSet_t_111x().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_LeaderboardUGCSet_t_111x, m_hSteamLeaderboard) == 4 );
C_ASSERT( sizeof(u32_LeaderboardUGCSet_t_111x().m_hSteamLeaderboard) >= 8 );

#ifdef __x86_64__
w64_LeaderboardUGCSet_t_123::operator u64_LeaderboardUGCSet_t_123() const
{
    u64_LeaderboardUGCSet_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_hSteamLeaderboard = this->m_hSteamLeaderboard;
    return ret;
}

u64_LeaderboardUGCSet_t_123::operator w64_LeaderboardUGCSet_t_123() const
{
    w64_LeaderboardUGCSet_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_hSteamLeaderboard = this->m_hSteamLeaderboard;
    return ret;
}
#endif

#ifdef __i386__
w32_LeaderboardUGCSet_t_123::operator u32_LeaderboardUGCSet_t_123() const
{
    u32_LeaderboardUGCSet_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_hSteamLeaderboard = this->m_hSteamLeaderboard;
    return ret;
}

u32_LeaderboardUGCSet_t_123::operator w32_LeaderboardUGCSet_t_123() const
{
    w32_LeaderboardUGCSet_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_hSteamLeaderboard = this->m_hSteamLeaderboard;
    return ret;
}
#endif

#ifdef __i386__
w32_LeaderboardUGCSet_t_111x::operator u32_LeaderboardUGCSet_t_111x() const
{
    u32_LeaderboardUGCSet_t_111x ret;
    ret.m_eResult = this->m_eResult;
    ret.m_hSteamLeaderboard = this->m_hSteamLeaderboard;
    return ret;
}

u32_LeaderboardUGCSet_t_111x::operator w32_LeaderboardUGCSet_t_111x() const
{
    w32_LeaderboardUGCSet_t_111x ret;
    ret.m_eResult = this->m_eResult;
    ret.m_hSteamLeaderboard = this->m_hSteamLeaderboard;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_LobbyCreated_t_123) >= 16 );
C_ASSERT( offsetof(w64_LobbyCreated_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(w64_LobbyCreated_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_LobbyCreated_t_123, m_ulSteamIDLobby) == 8 );
C_ASSERT( sizeof(w64_LobbyCreated_t_123().m_ulSteamIDLobby) >= 8 );

C_ASSERT( sizeof(u64_LobbyCreated_t_123) >= 12 );
C_ASSERT( offsetof(u64_LobbyCreated_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(u64_LobbyCreated_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_LobbyCreated_t_123, m_ulSteamIDLobby) == 4 );
C_ASSERT( sizeof(u64_LobbyCreated_t_123().m_ulSteamIDLobby) >= 8 );

C_ASSERT( sizeof(w32_LobbyCreated_t_123) >= 16 );
C_ASSERT( offsetof(w32_LobbyCreated_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(w32_LobbyCreated_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_LobbyCreated_t_123, m_ulSteamIDLobby) == 8 );
C_ASSERT( sizeof(w32_LobbyCreated_t_123().m_ulSteamIDLobby) >= 8 );

C_ASSERT( sizeof(u32_LobbyCreated_t_123) >= 12 );
C_ASSERT( offsetof(u32_LobbyCreated_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(u32_LobbyCreated_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_LobbyCreated_t_123, m_ulSteamIDLobby) == 4 );
C_ASSERT( sizeof(u32_LobbyCreated_t_123().m_ulSteamIDLobby) >= 8 );

C_ASSERT( sizeof(w64_LobbyCreated_t_099u) >= 16 );
C_ASSERT( offsetof(w64_LobbyCreated_t_099u, m_eResult) == 0 );
C_ASSERT( sizeof(w64_LobbyCreated_t_099u().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_LobbyCreated_t_099u, m_ulSteamIDLobby) == 8 );
C_ASSERT( sizeof(w64_LobbyCreated_t_099u().m_ulSteamIDLobby) >= 8 );

C_ASSERT( sizeof(u64_LobbyCreated_t_099u) >= 16 );
C_ASSERT( offsetof(u64_LobbyCreated_t_099u, m_eResult) == 0 );
C_ASSERT( sizeof(u64_LobbyCreated_t_099u().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_LobbyCreated_t_099u, m_ulSteamIDLobby) == 8 );
C_ASSERT( sizeof(u64_LobbyCreated_t_099u().m_ulSteamIDLobby) >= 8 );

C_ASSERT( sizeof(w32_LobbyCreated_t_099u) >= 16 );
C_ASSERT( offsetof(w32_LobbyCreated_t_099u, m_eResult) == 0 );
C_ASSERT( sizeof(w32_LobbyCreated_t_099u().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_LobbyCreated_t_099u, m_ulSteamIDLobby) == 8 );
C_ASSERT( sizeof(w32_LobbyCreated_t_099u().m_ulSteamIDLobby) >= 8 );

C_ASSERT( sizeof(u32_LobbyCreated_t_099u) >= 12 );
C_ASSERT( offsetof(u32_LobbyCreated_t_099u, m_eResult) == 0 );
C_ASSERT( sizeof(u32_LobbyCreated_t_099u().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_LobbyCreated_t_099u, m_ulSteamIDLobby) == 4 );
C_ASSERT( sizeof(u32_LobbyCreated_t_099u().m_ulSteamIDLobby) >= 8 );

#ifdef __x86_64__
w64_LobbyCreated_t_123::operator u64_LobbyCreated_t_123() const
{
    u64_LobbyCreated_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_ulSteamIDLobby = this->m_ulSteamIDLobby;
    return ret;
}

u64_LobbyCreated_t_123::operator w64_LobbyCreated_t_123() const
{
    w64_LobbyCreated_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_ulSteamIDLobby = this->m_ulSteamIDLobby;
    return ret;
}
#endif

#ifdef __i386__
w32_LobbyCreated_t_123::operator u32_LobbyCreated_t_123() const
{
    u32_LobbyCreated_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_ulSteamIDLobby = this->m_ulSteamIDLobby;
    return ret;
}

u32_LobbyCreated_t_123::operator w32_LobbyCreated_t_123() const
{
    w32_LobbyCreated_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_ulSteamIDLobby = this->m_ulSteamIDLobby;
    return ret;
}
#endif

#ifdef __i386__
w32_LobbyCreated_t_099u::operator u32_LobbyCreated_t_099u() const
{
    u32_LobbyCreated_t_099u ret;
    ret.m_eResult = this->m_eResult;
    ret.m_ulSteamIDLobby = this->m_ulSteamIDLobby;
    return ret;
}

u32_LobbyCreated_t_099u::operator w32_LobbyCreated_t_099u() const
{
    w32_LobbyCreated_t_099u ret;
    ret.m_eResult = this->m_eResult;
    ret.m_ulSteamIDLobby = this->m_ulSteamIDLobby;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_MicroTxnAuthorizationResponse_t_123) >= 24 );
C_ASSERT( offsetof(w64_MicroTxnAuthorizationResponse_t_123, m_unAppID) == 0 );
C_ASSERT( sizeof(w64_MicroTxnAuthorizationResponse_t_123().m_unAppID) >= 4 );
C_ASSERT( offsetof(w64_MicroTxnAuthorizationResponse_t_123, m_ulOrderID) == 8 );
C_ASSERT( sizeof(w64_MicroTxnAuthorizationResponse_t_123().m_ulOrderID) >= 8 );
C_ASSERT( offsetof(w64_MicroTxnAuthorizationResponse_t_123, m_bAuthorized) == 16 );
C_ASSERT( sizeof(w64_MicroTxnAuthorizationResponse_t_123().m_bAuthorized) >= 1 );

C_ASSERT( sizeof(u64_MicroTxnAuthorizationResponse_t_123) >= 16 );
C_ASSERT( offsetof(u64_MicroTxnAuthorizationResponse_t_123, m_unAppID) == 0 );
C_ASSERT( sizeof(u64_MicroTxnAuthorizationResponse_t_123().m_unAppID) >= 4 );
C_ASSERT( offsetof(u64_MicroTxnAuthorizationResponse_t_123, m_ulOrderID) == 4 );
C_ASSERT( sizeof(u64_MicroTxnAuthorizationResponse_t_123().m_ulOrderID) >= 8 );
C_ASSERT( offsetof(u64_MicroTxnAuthorizationResponse_t_123, m_bAuthorized) == 12 );
C_ASSERT( sizeof(u64_MicroTxnAuthorizationResponse_t_123().m_bAuthorized) >= 1 );

C_ASSERT( sizeof(w32_MicroTxnAuthorizationResponse_t_123) >= 24 );
C_ASSERT( offsetof(w32_MicroTxnAuthorizationResponse_t_123, m_unAppID) == 0 );
C_ASSERT( sizeof(w32_MicroTxnAuthorizationResponse_t_123().m_unAppID) >= 4 );
C_ASSERT( offsetof(w32_MicroTxnAuthorizationResponse_t_123, m_ulOrderID) == 8 );
C_ASSERT( sizeof(w32_MicroTxnAuthorizationResponse_t_123().m_ulOrderID) >= 8 );
C_ASSERT( offsetof(w32_MicroTxnAuthorizationResponse_t_123, m_bAuthorized) == 16 );
C_ASSERT( sizeof(w32_MicroTxnAuthorizationResponse_t_123().m_bAuthorized) >= 1 );

C_ASSERT( sizeof(u32_MicroTxnAuthorizationResponse_t_123) >= 16 );
C_ASSERT( offsetof(u32_MicroTxnAuthorizationResponse_t_123, m_unAppID) == 0 );
C_ASSERT( sizeof(u32_MicroTxnAuthorizationResponse_t_123().m_unAppID) >= 4 );
C_ASSERT( offsetof(u32_MicroTxnAuthorizationResponse_t_123, m_ulOrderID) == 4 );
C_ASSERT( sizeof(u32_MicroTxnAuthorizationResponse_t_123().m_ulOrderID) >= 8 );
C_ASSERT( offsetof(u32_MicroTxnAuthorizationResponse_t_123, m_bAuthorized) == 12 );
C_ASSERT( sizeof(u32_MicroTxnAuthorizationResponse_t_123().m_bAuthorized) >= 1 );

C_ASSERT( sizeof(w64_MicroTxnAuthorizationResponse_t_109) >= 24 );
C_ASSERT( offsetof(w64_MicroTxnAuthorizationResponse_t_109, m_unAppID) == 0 );
C_ASSERT( sizeof(w64_MicroTxnAuthorizationResponse_t_109().m_unAppID) >= 4 );
C_ASSERT( offsetof(w64_MicroTxnAuthorizationResponse_t_109, m_ulOrderID) == 8 );
C_ASSERT( sizeof(w64_MicroTxnAuthorizationResponse_t_109().m_ulOrderID) >= 8 );
C_ASSERT( offsetof(w64_MicroTxnAuthorizationResponse_t_109, m_bAuthorized) == 16 );
C_ASSERT( sizeof(w64_MicroTxnAuthorizationResponse_t_109().m_bAuthorized) >= 1 );

C_ASSERT( sizeof(u64_MicroTxnAuthorizationResponse_t_109) >= 24 );
C_ASSERT( offsetof(u64_MicroTxnAuthorizationResponse_t_109, m_unAppID) == 0 );
C_ASSERT( sizeof(u64_MicroTxnAuthorizationResponse_t_109().m_unAppID) >= 4 );
C_ASSERT( offsetof(u64_MicroTxnAuthorizationResponse_t_109, m_ulOrderID) == 8 );
C_ASSERT( sizeof(u64_MicroTxnAuthorizationResponse_t_109().m_ulOrderID) >= 8 );
C_ASSERT( offsetof(u64_MicroTxnAuthorizationResponse_t_109, m_bAuthorized) == 16 );
C_ASSERT( sizeof(u64_MicroTxnAuthorizationResponse_t_109().m_bAuthorized) >= 1 );

C_ASSERT( sizeof(w32_MicroTxnAuthorizationResponse_t_109) >= 24 );
C_ASSERT( offsetof(w32_MicroTxnAuthorizationResponse_t_109, m_unAppID) == 0 );
C_ASSERT( sizeof(w32_MicroTxnAuthorizationResponse_t_109().m_unAppID) >= 4 );
C_ASSERT( offsetof(w32_MicroTxnAuthorizationResponse_t_109, m_ulOrderID) == 8 );
C_ASSERT( sizeof(w32_MicroTxnAuthorizationResponse_t_109().m_ulOrderID) >= 8 );
C_ASSERT( offsetof(w32_MicroTxnAuthorizationResponse_t_109, m_bAuthorized) == 16 );
C_ASSERT( sizeof(w32_MicroTxnAuthorizationResponse_t_109().m_bAuthorized) >= 1 );

C_ASSERT( sizeof(u32_MicroTxnAuthorizationResponse_t_109) >= 16 );
C_ASSERT( offsetof(u32_MicroTxnAuthorizationResponse_t_109, m_unAppID) == 0 );
C_ASSERT( sizeof(u32_MicroTxnAuthorizationResponse_t_109().m_unAppID) >= 4 );
C_ASSERT( offsetof(u32_MicroTxnAuthorizationResponse_t_109, m_ulOrderID) == 4 );
C_ASSERT( sizeof(u32_MicroTxnAuthorizationResponse_t_109().m_ulOrderID) >= 8 );
C_ASSERT( offsetof(u32_MicroTxnAuthorizationResponse_t_109, m_bAuthorized) == 12 );
C_ASSERT( sizeof(u32_MicroTxnAuthorizationResponse_t_109().m_bAuthorized) >= 1 );

#ifdef __x86_64__
w64_MicroTxnAuthorizationResponse_t_123::operator u64_MicroTxnAuthorizationResponse_t_123() const
{
    u64_MicroTxnAuthorizationResponse_t_123 ret;
    ret.m_unAppID = this->m_unAppID;
    ret.m_ulOrderID = this->m_ulOrderID;
    ret.m_bAuthorized = this->m_bAuthorized;
    return ret;
}

u64_MicroTxnAuthorizationResponse_t_123::operator w64_MicroTxnAuthorizationResponse_t_123() const
{
    w64_MicroTxnAuthorizationResponse_t_123 ret;
    ret.m_unAppID = this->m_unAppID;
    ret.m_ulOrderID = this->m_ulOrderID;
    ret.m_bAuthorized = this->m_bAuthorized;
    return ret;
}
#endif

#ifdef __i386__
w32_MicroTxnAuthorizationResponse_t_123::operator u32_MicroTxnAuthorizationResponse_t_123() const
{
    u32_MicroTxnAuthorizationResponse_t_123 ret;
    ret.m_unAppID = this->m_unAppID;
    ret.m_ulOrderID = this->m_ulOrderID;
    ret.m_bAuthorized = this->m_bAuthorized;
    return ret;
}

u32_MicroTxnAuthorizationResponse_t_123::operator w32_MicroTxnAuthorizationResponse_t_123() const
{
    w32_MicroTxnAuthorizationResponse_t_123 ret;
    ret.m_unAppID = this->m_unAppID;
    ret.m_ulOrderID = this->m_ulOrderID;
    ret.m_bAuthorized = this->m_bAuthorized;
    return ret;
}
#endif

#ifdef __i386__
w32_MicroTxnAuthorizationResponse_t_109::operator u32_MicroTxnAuthorizationResponse_t_109() const
{
    u32_MicroTxnAuthorizationResponse_t_109 ret;
    ret.m_unAppID = this->m_unAppID;
    ret.m_ulOrderID = this->m_ulOrderID;
    ret.m_bAuthorized = this->m_bAuthorized;
    return ret;
}

u32_MicroTxnAuthorizationResponse_t_109::operator w32_MicroTxnAuthorizationResponse_t_109() const
{
    w32_MicroTxnAuthorizationResponse_t_109 ret;
    ret.m_unAppID = this->m_unAppID;
    ret.m_ulOrderID = this->m_ulOrderID;
    ret.m_bAuthorized = this->m_bAuthorized;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_PS3TrophiesInstalled_t_123) >= 24 );
C_ASSERT( offsetof(w64_PS3TrophiesInstalled_t_123, m_nGameID) == 0 );
C_ASSERT( sizeof(w64_PS3TrophiesInstalled_t_123().m_nGameID) >= 8 );
C_ASSERT( offsetof(w64_PS3TrophiesInstalled_t_123, m_eResult) == 8 );
C_ASSERT( sizeof(w64_PS3TrophiesInstalled_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_PS3TrophiesInstalled_t_123, m_ulRequiredDiskSpace) == 16 );
C_ASSERT( sizeof(w64_PS3TrophiesInstalled_t_123().m_ulRequiredDiskSpace) >= 8 );

C_ASSERT( sizeof(u64_PS3TrophiesInstalled_t_123) >= 20 );
C_ASSERT( offsetof(u64_PS3TrophiesInstalled_t_123, m_nGameID) == 0 );
C_ASSERT( sizeof(u64_PS3TrophiesInstalled_t_123().m_nGameID) >= 8 );
C_ASSERT( offsetof(u64_PS3TrophiesInstalled_t_123, m_eResult) == 8 );
C_ASSERT( sizeof(u64_PS3TrophiesInstalled_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_PS3TrophiesInstalled_t_123, m_ulRequiredDiskSpace) == 12 );
C_ASSERT( sizeof(u64_PS3TrophiesInstalled_t_123().m_ulRequiredDiskSpace) >= 8 );

C_ASSERT( sizeof(w32_PS3TrophiesInstalled_t_123) >= 24 );
C_ASSERT( offsetof(w32_PS3TrophiesInstalled_t_123, m_nGameID) == 0 );
C_ASSERT( sizeof(w32_PS3TrophiesInstalled_t_123().m_nGameID) >= 8 );
C_ASSERT( offsetof(w32_PS3TrophiesInstalled_t_123, m_eResult) == 8 );
C_ASSERT( sizeof(w32_PS3TrophiesInstalled_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_PS3TrophiesInstalled_t_123, m_ulRequiredDiskSpace) == 16 );
C_ASSERT( sizeof(w32_PS3TrophiesInstalled_t_123().m_ulRequiredDiskSpace) >= 8 );

C_ASSERT( sizeof(u32_PS3TrophiesInstalled_t_123) >= 20 );
C_ASSERT( offsetof(u32_PS3TrophiesInstalled_t_123, m_nGameID) == 0 );
C_ASSERT( sizeof(u32_PS3TrophiesInstalled_t_123().m_nGameID) >= 8 );
C_ASSERT( offsetof(u32_PS3TrophiesInstalled_t_123, m_eResult) == 8 );
C_ASSERT( sizeof(u32_PS3TrophiesInstalled_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_PS3TrophiesInstalled_t_123, m_ulRequiredDiskSpace) == 12 );
C_ASSERT( sizeof(u32_PS3TrophiesInstalled_t_123().m_ulRequiredDiskSpace) >= 8 );

C_ASSERT( sizeof(w64_PS3TrophiesInstalled_t_112x) >= 24 );
C_ASSERT( offsetof(w64_PS3TrophiesInstalled_t_112x, m_nGameID) == 0 );
C_ASSERT( sizeof(w64_PS3TrophiesInstalled_t_112x().m_nGameID) >= 8 );
C_ASSERT( offsetof(w64_PS3TrophiesInstalled_t_112x, m_eResult) == 8 );
C_ASSERT( sizeof(w64_PS3TrophiesInstalled_t_112x().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_PS3TrophiesInstalled_t_112x, m_ulRequiredDiskSpace) == 16 );
C_ASSERT( sizeof(w64_PS3TrophiesInstalled_t_112x().m_ulRequiredDiskSpace) >= 8 );

C_ASSERT( sizeof(u64_PS3TrophiesInstalled_t_112x) >= 24 );
C_ASSERT( offsetof(u64_PS3TrophiesInstalled_t_112x, m_nGameID) == 0 );
C_ASSERT( sizeof(u64_PS3TrophiesInstalled_t_112x().m_nGameID) >= 8 );
C_ASSERT( offsetof(u64_PS3TrophiesInstalled_t_112x, m_eResult) == 8 );
C_ASSERT( sizeof(u64_PS3TrophiesInstalled_t_112x().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_PS3TrophiesInstalled_t_112x, m_ulRequiredDiskSpace) == 16 );
C_ASSERT( sizeof(u64_PS3TrophiesInstalled_t_112x().m_ulRequiredDiskSpace) >= 8 );

C_ASSERT( sizeof(w32_PS3TrophiesInstalled_t_112x) >= 24 );
C_ASSERT( offsetof(w32_PS3TrophiesInstalled_t_112x, m_nGameID) == 0 );
C_ASSERT( sizeof(w32_PS3TrophiesInstalled_t_112x().m_nGameID) >= 8 );
C_ASSERT( offsetof(w32_PS3TrophiesInstalled_t_112x, m_eResult) == 8 );
C_ASSERT( sizeof(w32_PS3TrophiesInstalled_t_112x().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_PS3TrophiesInstalled_t_112x, m_ulRequiredDiskSpace) == 16 );
C_ASSERT( sizeof(w32_PS3TrophiesInstalled_t_112x().m_ulRequiredDiskSpace) >= 8 );

C_ASSERT( sizeof(u32_PS3TrophiesInstalled_t_112x) >= 20 );
C_ASSERT( offsetof(u32_PS3TrophiesInstalled_t_112x, m_nGameID) == 0 );
C_ASSERT( sizeof(u32_PS3TrophiesInstalled_t_112x().m_nGameID) >= 8 );
C_ASSERT( offsetof(u32_PS3TrophiesInstalled_t_112x, m_eResult) == 8 );
C_ASSERT( sizeof(u32_PS3TrophiesInstalled_t_112x().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_PS3TrophiesInstalled_t_112x, m_ulRequiredDiskSpace) == 12 );
C_ASSERT( sizeof(u32_PS3TrophiesInstalled_t_112x().m_ulRequiredDiskSpace) >= 8 );

#ifdef __x86_64__
w64_PS3TrophiesInstalled_t_123::operator u64_PS3TrophiesInstalled_t_123() const
{
    u64_PS3TrophiesInstalled_t_123 ret;
    ret.m_nGameID = this->m_nGameID;
    ret.m_eResult = this->m_eResult;
    ret.m_ulRequiredDiskSpace = this->m_ulRequiredDiskSpace;
    return ret;
}

u64_PS3TrophiesInstalled_t_123::operator w64_PS3TrophiesInstalled_t_123() const
{
    w64_PS3TrophiesInstalled_t_123 ret;
    ret.m_nGameID = this->m_nGameID;
    ret.m_eResult = this->m_eResult;
    ret.m_ulRequiredDiskSpace = this->m_ulRequiredDiskSpace;
    return ret;
}
#endif

#ifdef __i386__
w32_PS3TrophiesInstalled_t_123::operator u32_PS3TrophiesInstalled_t_123() const
{
    u32_PS3TrophiesInstalled_t_123 ret;
    ret.m_nGameID = this->m_nGameID;
    ret.m_eResult = this->m_eResult;
    ret.m_ulRequiredDiskSpace = this->m_ulRequiredDiskSpace;
    return ret;
}

u32_PS3TrophiesInstalled_t_123::operator w32_PS3TrophiesInstalled_t_123() const
{
    w32_PS3TrophiesInstalled_t_123 ret;
    ret.m_nGameID = this->m_nGameID;
    ret.m_eResult = this->m_eResult;
    ret.m_ulRequiredDiskSpace = this->m_ulRequiredDiskSpace;
    return ret;
}
#endif

#ifdef __i386__
w32_PS3TrophiesInstalled_t_112x::operator u32_PS3TrophiesInstalled_t_112x() const
{
    u32_PS3TrophiesInstalled_t_112x ret;
    ret.m_nGameID = this->m_nGameID;
    ret.m_eResult = this->m_eResult;
    ret.m_ulRequiredDiskSpace = this->m_ulRequiredDiskSpace;
    return ret;
}

u32_PS3TrophiesInstalled_t_112x::operator w32_PS3TrophiesInstalled_t_112x() const
{
    w32_PS3TrophiesInstalled_t_112x ret;
    ret.m_nGameID = this->m_nGameID;
    ret.m_eResult = this->m_eResult;
    ret.m_ulRequiredDiskSpace = this->m_ulRequiredDiskSpace;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_RemoteStorageAppSyncProgress_t_123) >= 288 );
C_ASSERT( offsetof(w64_RemoteStorageAppSyncProgress_t_123, m_rgchCurrentFile) == 0 );
C_ASSERT( sizeof(w64_RemoteStorageAppSyncProgress_t_123().m_rgchCurrentFile) >= 260 );
C_ASSERT( offsetof(w64_RemoteStorageAppSyncProgress_t_123, m_nAppID) == 260 );
C_ASSERT( sizeof(w64_RemoteStorageAppSyncProgress_t_123().m_nAppID) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageAppSyncProgress_t_123, m_uBytesTransferredThisChunk) == 264 );
C_ASSERT( sizeof(w64_RemoteStorageAppSyncProgress_t_123().m_uBytesTransferredThisChunk) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageAppSyncProgress_t_123, m_dAppPercentComplete) == 272 );
C_ASSERT( sizeof(w64_RemoteStorageAppSyncProgress_t_123().m_dAppPercentComplete) >= 8 );
C_ASSERT( offsetof(w64_RemoteStorageAppSyncProgress_t_123, m_bUploading) == 280 );
C_ASSERT( sizeof(w64_RemoteStorageAppSyncProgress_t_123().m_bUploading) >= 1 );

C_ASSERT( sizeof(u64_RemoteStorageAppSyncProgress_t_123) >= 280 );
C_ASSERT( offsetof(u64_RemoteStorageAppSyncProgress_t_123, m_rgchCurrentFile) == 0 );
C_ASSERT( sizeof(u64_RemoteStorageAppSyncProgress_t_123().m_rgchCurrentFile) >= 260 );
C_ASSERT( offsetof(u64_RemoteStorageAppSyncProgress_t_123, m_nAppID) == 260 );
C_ASSERT( sizeof(u64_RemoteStorageAppSyncProgress_t_123().m_nAppID) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageAppSyncProgress_t_123, m_uBytesTransferredThisChunk) == 264 );
C_ASSERT( sizeof(u64_RemoteStorageAppSyncProgress_t_123().m_uBytesTransferredThisChunk) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageAppSyncProgress_t_123, m_dAppPercentComplete) == 268 );
C_ASSERT( sizeof(u64_RemoteStorageAppSyncProgress_t_123().m_dAppPercentComplete) >= 8 );
C_ASSERT( offsetof(u64_RemoteStorageAppSyncProgress_t_123, m_bUploading) == 276 );
C_ASSERT( sizeof(u64_RemoteStorageAppSyncProgress_t_123().m_bUploading) >= 1 );

C_ASSERT( sizeof(w32_RemoteStorageAppSyncProgress_t_123) >= 288 );
C_ASSERT( offsetof(w32_RemoteStorageAppSyncProgress_t_123, m_rgchCurrentFile) == 0 );
C_ASSERT( sizeof(w32_RemoteStorageAppSyncProgress_t_123().m_rgchCurrentFile) >= 260 );
C_ASSERT( offsetof(w32_RemoteStorageAppSyncProgress_t_123, m_nAppID) == 260 );
C_ASSERT( sizeof(w32_RemoteStorageAppSyncProgress_t_123().m_nAppID) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageAppSyncProgress_t_123, m_uBytesTransferredThisChunk) == 264 );
C_ASSERT( sizeof(w32_RemoteStorageAppSyncProgress_t_123().m_uBytesTransferredThisChunk) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageAppSyncProgress_t_123, m_dAppPercentComplete) == 272 );
C_ASSERT( sizeof(w32_RemoteStorageAppSyncProgress_t_123().m_dAppPercentComplete) >= 8 );
C_ASSERT( offsetof(w32_RemoteStorageAppSyncProgress_t_123, m_bUploading) == 280 );
C_ASSERT( sizeof(w32_RemoteStorageAppSyncProgress_t_123().m_bUploading) >= 1 );

C_ASSERT( sizeof(u32_RemoteStorageAppSyncProgress_t_123) >= 280 );
C_ASSERT( offsetof(u32_RemoteStorageAppSyncProgress_t_123, m_rgchCurrentFile) == 0 );
C_ASSERT( sizeof(u32_RemoteStorageAppSyncProgress_t_123().m_rgchCurrentFile) >= 260 );
C_ASSERT( offsetof(u32_RemoteStorageAppSyncProgress_t_123, m_nAppID) == 260 );
C_ASSERT( sizeof(u32_RemoteStorageAppSyncProgress_t_123().m_nAppID) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageAppSyncProgress_t_123, m_uBytesTransferredThisChunk) == 264 );
C_ASSERT( sizeof(u32_RemoteStorageAppSyncProgress_t_123().m_uBytesTransferredThisChunk) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageAppSyncProgress_t_123, m_dAppPercentComplete) == 268 );
C_ASSERT( sizeof(u32_RemoteStorageAppSyncProgress_t_123().m_dAppPercentComplete) >= 8 );
C_ASSERT( offsetof(u32_RemoteStorageAppSyncProgress_t_123, m_bUploading) == 276 );
C_ASSERT( sizeof(u32_RemoteStorageAppSyncProgress_t_123().m_bUploading) >= 1 );

C_ASSERT( sizeof(w64_RemoteStorageAppSyncProgress_t_111x) >= 288 );
C_ASSERT( offsetof(w64_RemoteStorageAppSyncProgress_t_111x, m_rgchCurrentFile) == 0 );
C_ASSERT( sizeof(w64_RemoteStorageAppSyncProgress_t_111x().m_rgchCurrentFile) >= 260 );
C_ASSERT( offsetof(w64_RemoteStorageAppSyncProgress_t_111x, m_nAppID) == 260 );
C_ASSERT( sizeof(w64_RemoteStorageAppSyncProgress_t_111x().m_nAppID) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageAppSyncProgress_t_111x, m_uBytesTransferredThisChunk) == 264 );
C_ASSERT( sizeof(w64_RemoteStorageAppSyncProgress_t_111x().m_uBytesTransferredThisChunk) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageAppSyncProgress_t_111x, m_dAppPercentComplete) == 272 );
C_ASSERT( sizeof(w64_RemoteStorageAppSyncProgress_t_111x().m_dAppPercentComplete) >= 8 );
C_ASSERT( offsetof(w64_RemoteStorageAppSyncProgress_t_111x, m_bUploading) == 280 );
C_ASSERT( sizeof(w64_RemoteStorageAppSyncProgress_t_111x().m_bUploading) >= 1 );

C_ASSERT( sizeof(u64_RemoteStorageAppSyncProgress_t_111x) >= 288 );
C_ASSERT( offsetof(u64_RemoteStorageAppSyncProgress_t_111x, m_rgchCurrentFile) == 0 );
C_ASSERT( sizeof(u64_RemoteStorageAppSyncProgress_t_111x().m_rgchCurrentFile) >= 260 );
C_ASSERT( offsetof(u64_RemoteStorageAppSyncProgress_t_111x, m_nAppID) == 260 );
C_ASSERT( sizeof(u64_RemoteStorageAppSyncProgress_t_111x().m_nAppID) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageAppSyncProgress_t_111x, m_uBytesTransferredThisChunk) == 264 );
C_ASSERT( sizeof(u64_RemoteStorageAppSyncProgress_t_111x().m_uBytesTransferredThisChunk) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageAppSyncProgress_t_111x, m_dAppPercentComplete) == 272 );
C_ASSERT( sizeof(u64_RemoteStorageAppSyncProgress_t_111x().m_dAppPercentComplete) >= 8 );
C_ASSERT( offsetof(u64_RemoteStorageAppSyncProgress_t_111x, m_bUploading) == 280 );
C_ASSERT( sizeof(u64_RemoteStorageAppSyncProgress_t_111x().m_bUploading) >= 1 );

C_ASSERT( sizeof(w32_RemoteStorageAppSyncProgress_t_111x) >= 288 );
C_ASSERT( offsetof(w32_RemoteStorageAppSyncProgress_t_111x, m_rgchCurrentFile) == 0 );
C_ASSERT( sizeof(w32_RemoteStorageAppSyncProgress_t_111x().m_rgchCurrentFile) >= 260 );
C_ASSERT( offsetof(w32_RemoteStorageAppSyncProgress_t_111x, m_nAppID) == 260 );
C_ASSERT( sizeof(w32_RemoteStorageAppSyncProgress_t_111x().m_nAppID) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageAppSyncProgress_t_111x, m_uBytesTransferredThisChunk) == 264 );
C_ASSERT( sizeof(w32_RemoteStorageAppSyncProgress_t_111x().m_uBytesTransferredThisChunk) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageAppSyncProgress_t_111x, m_dAppPercentComplete) == 272 );
C_ASSERT( sizeof(w32_RemoteStorageAppSyncProgress_t_111x().m_dAppPercentComplete) >= 8 );
C_ASSERT( offsetof(w32_RemoteStorageAppSyncProgress_t_111x, m_bUploading) == 280 );
C_ASSERT( sizeof(w32_RemoteStorageAppSyncProgress_t_111x().m_bUploading) >= 1 );

C_ASSERT( sizeof(u32_RemoteStorageAppSyncProgress_t_111x) >= 280 );
C_ASSERT( offsetof(u32_RemoteStorageAppSyncProgress_t_111x, m_rgchCurrentFile) == 0 );
C_ASSERT( sizeof(u32_RemoteStorageAppSyncProgress_t_111x().m_rgchCurrentFile) >= 260 );
C_ASSERT( offsetof(u32_RemoteStorageAppSyncProgress_t_111x, m_nAppID) == 260 );
C_ASSERT( sizeof(u32_RemoteStorageAppSyncProgress_t_111x().m_nAppID) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageAppSyncProgress_t_111x, m_uBytesTransferredThisChunk) == 264 );
C_ASSERT( sizeof(u32_RemoteStorageAppSyncProgress_t_111x().m_uBytesTransferredThisChunk) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageAppSyncProgress_t_111x, m_dAppPercentComplete) == 268 );
C_ASSERT( sizeof(u32_RemoteStorageAppSyncProgress_t_111x().m_dAppPercentComplete) >= 8 );
C_ASSERT( offsetof(u32_RemoteStorageAppSyncProgress_t_111x, m_bUploading) == 276 );
C_ASSERT( sizeof(u32_RemoteStorageAppSyncProgress_t_111x().m_bUploading) >= 1 );

#ifdef __x86_64__
w64_RemoteStorageAppSyncProgress_t_123::operator u64_RemoteStorageAppSyncProgress_t_123() const
{
    u64_RemoteStorageAppSyncProgress_t_123 ret;
    ret.m_rgchCurrentFile = this->m_rgchCurrentFile;
    ret.m_nAppID = this->m_nAppID;
    ret.m_uBytesTransferredThisChunk = this->m_uBytesTransferredThisChunk;
    ret.m_dAppPercentComplete = this->m_dAppPercentComplete;
    ret.m_bUploading = this->m_bUploading;
    return ret;
}

u64_RemoteStorageAppSyncProgress_t_123::operator w64_RemoteStorageAppSyncProgress_t_123() const
{
    w64_RemoteStorageAppSyncProgress_t_123 ret;
    ret.m_rgchCurrentFile = this->m_rgchCurrentFile;
    ret.m_nAppID = this->m_nAppID;
    ret.m_uBytesTransferredThisChunk = this->m_uBytesTransferredThisChunk;
    ret.m_dAppPercentComplete = this->m_dAppPercentComplete;
    ret.m_bUploading = this->m_bUploading;
    return ret;
}
#endif

#ifdef __i386__
w32_RemoteStorageAppSyncProgress_t_123::operator u32_RemoteStorageAppSyncProgress_t_123() const
{
    u32_RemoteStorageAppSyncProgress_t_123 ret;
    ret.m_rgchCurrentFile = this->m_rgchCurrentFile;
    ret.m_nAppID = this->m_nAppID;
    ret.m_uBytesTransferredThisChunk = this->m_uBytesTransferredThisChunk;
    ret.m_dAppPercentComplete = this->m_dAppPercentComplete;
    ret.m_bUploading = this->m_bUploading;
    return ret;
}

u32_RemoteStorageAppSyncProgress_t_123::operator w32_RemoteStorageAppSyncProgress_t_123() const
{
    w32_RemoteStorageAppSyncProgress_t_123 ret;
    ret.m_rgchCurrentFile = this->m_rgchCurrentFile;
    ret.m_nAppID = this->m_nAppID;
    ret.m_uBytesTransferredThisChunk = this->m_uBytesTransferredThisChunk;
    ret.m_dAppPercentComplete = this->m_dAppPercentComplete;
    ret.m_bUploading = this->m_bUploading;
    return ret;
}
#endif

#ifdef __i386__
w32_RemoteStorageAppSyncProgress_t_111x::operator u32_RemoteStorageAppSyncProgress_t_111x() const
{
    u32_RemoteStorageAppSyncProgress_t_111x ret;
    ret.m_rgchCurrentFile = this->m_rgchCurrentFile;
    ret.m_nAppID = this->m_nAppID;
    ret.m_uBytesTransferredThisChunk = this->m_uBytesTransferredThisChunk;
    ret.m_dAppPercentComplete = this->m_dAppPercentComplete;
    ret.m_bUploading = this->m_bUploading;
    return ret;
}

u32_RemoteStorageAppSyncProgress_t_111x::operator w32_RemoteStorageAppSyncProgress_t_111x() const
{
    w32_RemoteStorageAppSyncProgress_t_111x ret;
    ret.m_rgchCurrentFile = this->m_rgchCurrentFile;
    ret.m_nAppID = this->m_nAppID;
    ret.m_uBytesTransferredThisChunk = this->m_uBytesTransferredThisChunk;
    ret.m_dAppPercentComplete = this->m_dAppPercentComplete;
    ret.m_bUploading = this->m_bUploading;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_RemoteStorageDeletePublishedFileResult_t_123) >= 16 );
C_ASSERT( offsetof(w64_RemoteStorageDeletePublishedFileResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(w64_RemoteStorageDeletePublishedFileResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageDeletePublishedFileResult_t_123, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w64_RemoteStorageDeletePublishedFileResult_t_123().m_nPublishedFileId) >= 8 );

C_ASSERT( sizeof(u64_RemoteStorageDeletePublishedFileResult_t_123) >= 12 );
C_ASSERT( offsetof(u64_RemoteStorageDeletePublishedFileResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(u64_RemoteStorageDeletePublishedFileResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageDeletePublishedFileResult_t_123, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u64_RemoteStorageDeletePublishedFileResult_t_123().m_nPublishedFileId) >= 8 );

C_ASSERT( sizeof(w32_RemoteStorageDeletePublishedFileResult_t_123) >= 16 );
C_ASSERT( offsetof(w32_RemoteStorageDeletePublishedFileResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(w32_RemoteStorageDeletePublishedFileResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageDeletePublishedFileResult_t_123, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w32_RemoteStorageDeletePublishedFileResult_t_123().m_nPublishedFileId) >= 8 );

C_ASSERT( sizeof(u32_RemoteStorageDeletePublishedFileResult_t_123) >= 12 );
C_ASSERT( offsetof(u32_RemoteStorageDeletePublishedFileResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(u32_RemoteStorageDeletePublishedFileResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageDeletePublishedFileResult_t_123, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u32_RemoteStorageDeletePublishedFileResult_t_123().m_nPublishedFileId) >= 8 );

C_ASSERT( sizeof(w64_RemoteStorageDeletePublishedFileResult_t_116x) >= 16 );
C_ASSERT( offsetof(w64_RemoteStorageDeletePublishedFileResult_t_116x, m_eResult) == 0 );
C_ASSERT( sizeof(w64_RemoteStorageDeletePublishedFileResult_t_116x().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageDeletePublishedFileResult_t_116x, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w64_RemoteStorageDeletePublishedFileResult_t_116x().m_nPublishedFileId) >= 8 );

C_ASSERT( sizeof(u64_RemoteStorageDeletePublishedFileResult_t_116x) >= 16 );
C_ASSERT( offsetof(u64_RemoteStorageDeletePublishedFileResult_t_116x, m_eResult) == 0 );
C_ASSERT( sizeof(u64_RemoteStorageDeletePublishedFileResult_t_116x().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageDeletePublishedFileResult_t_116x, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(u64_RemoteStorageDeletePublishedFileResult_t_116x().m_nPublishedFileId) >= 8 );

C_ASSERT( sizeof(w32_RemoteStorageDeletePublishedFileResult_t_116x) >= 16 );
C_ASSERT( offsetof(w32_RemoteStorageDeletePublishedFileResult_t_116x, m_eResult) == 0 );
C_ASSERT( sizeof(w32_RemoteStorageDeletePublishedFileResult_t_116x().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageDeletePublishedFileResult_t_116x, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w32_RemoteStorageDeletePublishedFileResult_t_116x().m_nPublishedFileId) >= 8 );

C_ASSERT( sizeof(u32_RemoteStorageDeletePublishedFileResult_t_116x) >= 12 );
C_ASSERT( offsetof(u32_RemoteStorageDeletePublishedFileResult_t_116x, m_eResult) == 0 );
C_ASSERT( sizeof(u32_RemoteStorageDeletePublishedFileResult_t_116x().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageDeletePublishedFileResult_t_116x, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u32_RemoteStorageDeletePublishedFileResult_t_116x().m_nPublishedFileId) >= 8 );

#ifdef __x86_64__
w64_RemoteStorageDeletePublishedFileResult_t_123::operator u64_RemoteStorageDeletePublishedFileResult_t_123() const
{
    u64_RemoteStorageDeletePublishedFileResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    return ret;
}

u64_RemoteStorageDeletePublishedFileResult_t_123::operator w64_RemoteStorageDeletePublishedFileResult_t_123() const
{
    w64_RemoteStorageDeletePublishedFileResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    return ret;
}
#endif

#ifdef __i386__
w32_RemoteStorageDeletePublishedFileResult_t_123::operator u32_RemoteStorageDeletePublishedFileResult_t_123() const
{
    u32_RemoteStorageDeletePublishedFileResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    return ret;
}

u32_RemoteStorageDeletePublishedFileResult_t_123::operator w32_RemoteStorageDeletePublishedFileResult_t_123() const
{
    w32_RemoteStorageDeletePublishedFileResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    return ret;
}
#endif

#ifdef __i386__
w32_RemoteStorageDeletePublishedFileResult_t_116x::operator u32_RemoteStorageDeletePublishedFileResult_t_116x() const
{
    u32_RemoteStorageDeletePublishedFileResult_t_116x ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    return ret;
}

u32_RemoteStorageDeletePublishedFileResult_t_116x::operator w32_RemoteStorageDeletePublishedFileResult_t_116x() const
{
    w32_RemoteStorageDeletePublishedFileResult_t_116x ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_RemoteStorageDownloadUGCResult_t_123) >= 296 );
C_ASSERT( offsetof(w64_RemoteStorageDownloadUGCResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(w64_RemoteStorageDownloadUGCResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageDownloadUGCResult_t_123, m_hFile) == 8 );
C_ASSERT( sizeof(w64_RemoteStorageDownloadUGCResult_t_123().m_hFile) >= 8 );
C_ASSERT( offsetof(w64_RemoteStorageDownloadUGCResult_t_123, m_nAppID) == 16 );
C_ASSERT( sizeof(w64_RemoteStorageDownloadUGCResult_t_123().m_nAppID) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageDownloadUGCResult_t_123, m_nSizeInBytes) == 20 );
C_ASSERT( sizeof(w64_RemoteStorageDownloadUGCResult_t_123().m_nSizeInBytes) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageDownloadUGCResult_t_123, m_pchFileName) == 24 );
C_ASSERT( sizeof(w64_RemoteStorageDownloadUGCResult_t_123().m_pchFileName) >= 260 );
C_ASSERT( offsetof(w64_RemoteStorageDownloadUGCResult_t_123, m_ulSteamIDOwner) == 288 );
C_ASSERT( sizeof(w64_RemoteStorageDownloadUGCResult_t_123().m_ulSteamIDOwner) >= 8 );

C_ASSERT( sizeof(u64_RemoteStorageDownloadUGCResult_t_123) >= 288 );
C_ASSERT( offsetof(u64_RemoteStorageDownloadUGCResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(u64_RemoteStorageDownloadUGCResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageDownloadUGCResult_t_123, m_hFile) == 4 );
C_ASSERT( sizeof(u64_RemoteStorageDownloadUGCResult_t_123().m_hFile) >= 8 );
C_ASSERT( offsetof(u64_RemoteStorageDownloadUGCResult_t_123, m_nAppID) == 12 );
C_ASSERT( sizeof(u64_RemoteStorageDownloadUGCResult_t_123().m_nAppID) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageDownloadUGCResult_t_123, m_nSizeInBytes) == 16 );
C_ASSERT( sizeof(u64_RemoteStorageDownloadUGCResult_t_123().m_nSizeInBytes) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageDownloadUGCResult_t_123, m_pchFileName) == 20 );
C_ASSERT( sizeof(u64_RemoteStorageDownloadUGCResult_t_123().m_pchFileName) >= 260 );
C_ASSERT( offsetof(u64_RemoteStorageDownloadUGCResult_t_123, m_ulSteamIDOwner) == 280 );
C_ASSERT( sizeof(u64_RemoteStorageDownloadUGCResult_t_123().m_ulSteamIDOwner) >= 8 );

C_ASSERT( sizeof(w32_RemoteStorageDownloadUGCResult_t_123) >= 296 );
C_ASSERT( offsetof(w32_RemoteStorageDownloadUGCResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(w32_RemoteStorageDownloadUGCResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageDownloadUGCResult_t_123, m_hFile) == 8 );
C_ASSERT( sizeof(w32_RemoteStorageDownloadUGCResult_t_123().m_hFile) >= 8 );
C_ASSERT( offsetof(w32_RemoteStorageDownloadUGCResult_t_123, m_nAppID) == 16 );
C_ASSERT( sizeof(w32_RemoteStorageDownloadUGCResult_t_123().m_nAppID) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageDownloadUGCResult_t_123, m_nSizeInBytes) == 20 );
C_ASSERT( sizeof(w32_RemoteStorageDownloadUGCResult_t_123().m_nSizeInBytes) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageDownloadUGCResult_t_123, m_pchFileName) == 24 );
C_ASSERT( sizeof(w32_RemoteStorageDownloadUGCResult_t_123().m_pchFileName) >= 260 );
C_ASSERT( offsetof(w32_RemoteStorageDownloadUGCResult_t_123, m_ulSteamIDOwner) == 288 );
C_ASSERT( sizeof(w32_RemoteStorageDownloadUGCResult_t_123().m_ulSteamIDOwner) >= 8 );

C_ASSERT( sizeof(u32_RemoteStorageDownloadUGCResult_t_123) >= 288 );
C_ASSERT( offsetof(u32_RemoteStorageDownloadUGCResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(u32_RemoteStorageDownloadUGCResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageDownloadUGCResult_t_123, m_hFile) == 4 );
C_ASSERT( sizeof(u32_RemoteStorageDownloadUGCResult_t_123().m_hFile) >= 8 );
C_ASSERT( offsetof(u32_RemoteStorageDownloadUGCResult_t_123, m_nAppID) == 12 );
C_ASSERT( sizeof(u32_RemoteStorageDownloadUGCResult_t_123().m_nAppID) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageDownloadUGCResult_t_123, m_nSizeInBytes) == 16 );
C_ASSERT( sizeof(u32_RemoteStorageDownloadUGCResult_t_123().m_nSizeInBytes) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageDownloadUGCResult_t_123, m_pchFileName) == 20 );
C_ASSERT( sizeof(u32_RemoteStorageDownloadUGCResult_t_123().m_pchFileName) >= 260 );
C_ASSERT( offsetof(u32_RemoteStorageDownloadUGCResult_t_123, m_ulSteamIDOwner) == 280 );
C_ASSERT( sizeof(u32_RemoteStorageDownloadUGCResult_t_123().m_ulSteamIDOwner) >= 8 );

C_ASSERT( sizeof(w64_RemoteStorageDownloadUGCResult_t_116x) >= 296 );
C_ASSERT( offsetof(w64_RemoteStorageDownloadUGCResult_t_116x, m_eResult) == 0 );
C_ASSERT( sizeof(w64_RemoteStorageDownloadUGCResult_t_116x().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageDownloadUGCResult_t_116x, m_hFile) == 8 );
C_ASSERT( sizeof(w64_RemoteStorageDownloadUGCResult_t_116x().m_hFile) >= 8 );
C_ASSERT( offsetof(w64_RemoteStorageDownloadUGCResult_t_116x, m_nAppID) == 16 );
C_ASSERT( sizeof(w64_RemoteStorageDownloadUGCResult_t_116x().m_nAppID) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageDownloadUGCResult_t_116x, m_nSizeInBytes) == 20 );
C_ASSERT( sizeof(w64_RemoteStorageDownloadUGCResult_t_116x().m_nSizeInBytes) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageDownloadUGCResult_t_116x, m_pchFileName) == 24 );
C_ASSERT( sizeof(w64_RemoteStorageDownloadUGCResult_t_116x().m_pchFileName) >= 260 );
C_ASSERT( offsetof(w64_RemoteStorageDownloadUGCResult_t_116x, m_ulSteamIDOwner) == 288 );
C_ASSERT( sizeof(w64_RemoteStorageDownloadUGCResult_t_116x().m_ulSteamIDOwner) >= 8 );

C_ASSERT( sizeof(u64_RemoteStorageDownloadUGCResult_t_116x) >= 296 );
C_ASSERT( offsetof(u64_RemoteStorageDownloadUGCResult_t_116x, m_eResult) == 0 );
C_ASSERT( sizeof(u64_RemoteStorageDownloadUGCResult_t_116x().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageDownloadUGCResult_t_116x, m_hFile) == 8 );
C_ASSERT( sizeof(u64_RemoteStorageDownloadUGCResult_t_116x().m_hFile) >= 8 );
C_ASSERT( offsetof(u64_RemoteStorageDownloadUGCResult_t_116x, m_nAppID) == 16 );
C_ASSERT( sizeof(u64_RemoteStorageDownloadUGCResult_t_116x().m_nAppID) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageDownloadUGCResult_t_116x, m_nSizeInBytes) == 20 );
C_ASSERT( sizeof(u64_RemoteStorageDownloadUGCResult_t_116x().m_nSizeInBytes) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageDownloadUGCResult_t_116x, m_pchFileName) == 24 );
C_ASSERT( sizeof(u64_RemoteStorageDownloadUGCResult_t_116x().m_pchFileName) >= 260 );
C_ASSERT( offsetof(u64_RemoteStorageDownloadUGCResult_t_116x, m_ulSteamIDOwner) == 288 );
C_ASSERT( sizeof(u64_RemoteStorageDownloadUGCResult_t_116x().m_ulSteamIDOwner) >= 8 );

C_ASSERT( sizeof(w32_RemoteStorageDownloadUGCResult_t_116x) >= 296 );
C_ASSERT( offsetof(w32_RemoteStorageDownloadUGCResult_t_116x, m_eResult) == 0 );
C_ASSERT( sizeof(w32_RemoteStorageDownloadUGCResult_t_116x().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageDownloadUGCResult_t_116x, m_hFile) == 8 );
C_ASSERT( sizeof(w32_RemoteStorageDownloadUGCResult_t_116x().m_hFile) >= 8 );
C_ASSERT( offsetof(w32_RemoteStorageDownloadUGCResult_t_116x, m_nAppID) == 16 );
C_ASSERT( sizeof(w32_RemoteStorageDownloadUGCResult_t_116x().m_nAppID) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageDownloadUGCResult_t_116x, m_nSizeInBytes) == 20 );
C_ASSERT( sizeof(w32_RemoteStorageDownloadUGCResult_t_116x().m_nSizeInBytes) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageDownloadUGCResult_t_116x, m_pchFileName) == 24 );
C_ASSERT( sizeof(w32_RemoteStorageDownloadUGCResult_t_116x().m_pchFileName) >= 260 );
C_ASSERT( offsetof(w32_RemoteStorageDownloadUGCResult_t_116x, m_ulSteamIDOwner) == 288 );
C_ASSERT( sizeof(w32_RemoteStorageDownloadUGCResult_t_116x().m_ulSteamIDOwner) >= 8 );

C_ASSERT( sizeof(u32_RemoteStorageDownloadUGCResult_t_116x) >= 288 );
C_ASSERT( offsetof(u32_RemoteStorageDownloadUGCResult_t_116x, m_eResult) == 0 );
C_ASSERT( sizeof(u32_RemoteStorageDownloadUGCResult_t_116x().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageDownloadUGCResult_t_116x, m_hFile) == 4 );
C_ASSERT( sizeof(u32_RemoteStorageDownloadUGCResult_t_116x().m_hFile) >= 8 );
C_ASSERT( offsetof(u32_RemoteStorageDownloadUGCResult_t_116x, m_nAppID) == 12 );
C_ASSERT( sizeof(u32_RemoteStorageDownloadUGCResult_t_116x().m_nAppID) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageDownloadUGCResult_t_116x, m_nSizeInBytes) == 16 );
C_ASSERT( sizeof(u32_RemoteStorageDownloadUGCResult_t_116x().m_nSizeInBytes) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageDownloadUGCResult_t_116x, m_pchFileName) == 20 );
C_ASSERT( sizeof(u32_RemoteStorageDownloadUGCResult_t_116x().m_pchFileName) >= 260 );
C_ASSERT( offsetof(u32_RemoteStorageDownloadUGCResult_t_116x, m_ulSteamIDOwner) == 280 );
C_ASSERT( sizeof(u32_RemoteStorageDownloadUGCResult_t_116x().m_ulSteamIDOwner) >= 8 );

C_ASSERT( sizeof(w64_RemoteStorageDownloadUGCResult_t_111x) >= 40 );
C_ASSERT( offsetof(w64_RemoteStorageDownloadUGCResult_t_111x, m_eResult) == 0 );
C_ASSERT( sizeof(w64_RemoteStorageDownloadUGCResult_t_111x().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageDownloadUGCResult_t_111x, m_hFile) == 8 );
C_ASSERT( sizeof(w64_RemoteStorageDownloadUGCResult_t_111x().m_hFile) >= 8 );
C_ASSERT( offsetof(w64_RemoteStorageDownloadUGCResult_t_111x, m_nAppID) == 16 );
C_ASSERT( sizeof(w64_RemoteStorageDownloadUGCResult_t_111x().m_nAppID) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageDownloadUGCResult_t_111x, m_nSizeInBytes) == 20 );
C_ASSERT( sizeof(w64_RemoteStorageDownloadUGCResult_t_111x().m_nSizeInBytes) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageDownloadUGCResult_t_111x, m_pchFileName) == 24 );
C_ASSERT( sizeof(w64_RemoteStorageDownloadUGCResult_t_111x().m_pchFileName) >= 8 );
C_ASSERT( offsetof(w64_RemoteStorageDownloadUGCResult_t_111x, m_ulSteamIDOwner) == 32 );
C_ASSERT( sizeof(w64_RemoteStorageDownloadUGCResult_t_111x().m_ulSteamIDOwner) >= 8 );

C_ASSERT( sizeof(u64_RemoteStorageDownloadUGCResult_t_111x) >= 40 );
C_ASSERT( offsetof(u64_RemoteStorageDownloadUGCResult_t_111x, m_eResult) == 0 );
C_ASSERT( sizeof(u64_RemoteStorageDownloadUGCResult_t_111x().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageDownloadUGCResult_t_111x, m_hFile) == 8 );
C_ASSERT( sizeof(u64_RemoteStorageDownloadUGCResult_t_111x().m_hFile) >= 8 );
C_ASSERT( offsetof(u64_RemoteStorageDownloadUGCResult_t_111x, m_nAppID) == 16 );
C_ASSERT( sizeof(u64_RemoteStorageDownloadUGCResult_t_111x().m_nAppID) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageDownloadUGCResult_t_111x, m_nSizeInBytes) == 20 );
C_ASSERT( sizeof(u64_RemoteStorageDownloadUGCResult_t_111x().m_nSizeInBytes) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageDownloadUGCResult_t_111x, m_pchFileName) == 24 );
C_ASSERT( sizeof(u64_RemoteStorageDownloadUGCResult_t_111x().m_pchFileName) >= 8 );
C_ASSERT( offsetof(u64_RemoteStorageDownloadUGCResult_t_111x, m_ulSteamIDOwner) == 32 );
C_ASSERT( sizeof(u64_RemoteStorageDownloadUGCResult_t_111x().m_ulSteamIDOwner) >= 8 );

C_ASSERT( sizeof(w32_RemoteStorageDownloadUGCResult_t_111x) >= 40 );
C_ASSERT( offsetof(w32_RemoteStorageDownloadUGCResult_t_111x, m_eResult) == 0 );
C_ASSERT( sizeof(w32_RemoteStorageDownloadUGCResult_t_111x().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageDownloadUGCResult_t_111x, m_hFile) == 8 );
C_ASSERT( sizeof(w32_RemoteStorageDownloadUGCResult_t_111x().m_hFile) >= 8 );
C_ASSERT( offsetof(w32_RemoteStorageDownloadUGCResult_t_111x, m_nAppID) == 16 );
C_ASSERT( sizeof(w32_RemoteStorageDownloadUGCResult_t_111x().m_nAppID) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageDownloadUGCResult_t_111x, m_nSizeInBytes) == 20 );
C_ASSERT( sizeof(w32_RemoteStorageDownloadUGCResult_t_111x().m_nSizeInBytes) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageDownloadUGCResult_t_111x, m_pchFileName) == 24 );
C_ASSERT( sizeof(w32_RemoteStorageDownloadUGCResult_t_111x().m_pchFileName) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageDownloadUGCResult_t_111x, m_ulSteamIDOwner) == 32 );
C_ASSERT( sizeof(w32_RemoteStorageDownloadUGCResult_t_111x().m_ulSteamIDOwner) >= 8 );

C_ASSERT( sizeof(u32_RemoteStorageDownloadUGCResult_t_111x) >= 32 );
C_ASSERT( offsetof(u32_RemoteStorageDownloadUGCResult_t_111x, m_eResult) == 0 );
C_ASSERT( sizeof(u32_RemoteStorageDownloadUGCResult_t_111x().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageDownloadUGCResult_t_111x, m_hFile) == 4 );
C_ASSERT( sizeof(u32_RemoteStorageDownloadUGCResult_t_111x().m_hFile) >= 8 );
C_ASSERT( offsetof(u32_RemoteStorageDownloadUGCResult_t_111x, m_nAppID) == 12 );
C_ASSERT( sizeof(u32_RemoteStorageDownloadUGCResult_t_111x().m_nAppID) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageDownloadUGCResult_t_111x, m_nSizeInBytes) == 16 );
C_ASSERT( sizeof(u32_RemoteStorageDownloadUGCResult_t_111x().m_nSizeInBytes) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageDownloadUGCResult_t_111x, m_pchFileName) == 20 );
C_ASSERT( sizeof(u32_RemoteStorageDownloadUGCResult_t_111x().m_pchFileName) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageDownloadUGCResult_t_111x, m_ulSteamIDOwner) == 24 );
C_ASSERT( sizeof(u32_RemoteStorageDownloadUGCResult_t_111x().m_ulSteamIDOwner) >= 8 );

#ifdef __x86_64__
w64_RemoteStorageDownloadUGCResult_t_123::operator u64_RemoteStorageDownloadUGCResult_t_123() const
{
    u64_RemoteStorageDownloadUGCResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_hFile = this->m_hFile;
    ret.m_nAppID = this->m_nAppID;
    ret.m_nSizeInBytes = this->m_nSizeInBytes;
    ret.m_pchFileName = this->m_pchFileName;
    ret.m_ulSteamIDOwner = this->m_ulSteamIDOwner;
    return ret;
}

u64_RemoteStorageDownloadUGCResult_t_123::operator w64_RemoteStorageDownloadUGCResult_t_123() const
{
    w64_RemoteStorageDownloadUGCResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_hFile = this->m_hFile;
    ret.m_nAppID = this->m_nAppID;
    ret.m_nSizeInBytes = this->m_nSizeInBytes;
    ret.m_pchFileName = this->m_pchFileName;
    ret.m_ulSteamIDOwner = this->m_ulSteamIDOwner;
    return ret;
}
#endif

#ifdef __i386__
w32_RemoteStorageDownloadUGCResult_t_123::operator u32_RemoteStorageDownloadUGCResult_t_123() const
{
    u32_RemoteStorageDownloadUGCResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_hFile = this->m_hFile;
    ret.m_nAppID = this->m_nAppID;
    ret.m_nSizeInBytes = this->m_nSizeInBytes;
    ret.m_pchFileName = this->m_pchFileName;
    ret.m_ulSteamIDOwner = this->m_ulSteamIDOwner;
    return ret;
}

u32_RemoteStorageDownloadUGCResult_t_123::operator w32_RemoteStorageDownloadUGCResult_t_123() const
{
    w32_RemoteStorageDownloadUGCResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_hFile = this->m_hFile;
    ret.m_nAppID = this->m_nAppID;
    ret.m_nSizeInBytes = this->m_nSizeInBytes;
    ret.m_pchFileName = this->m_pchFileName;
    ret.m_ulSteamIDOwner = this->m_ulSteamIDOwner;
    return ret;
}
#endif

#ifdef __i386__
w32_RemoteStorageDownloadUGCResult_t_116x::operator u32_RemoteStorageDownloadUGCResult_t_116x() const
{
    u32_RemoteStorageDownloadUGCResult_t_116x ret;
    ret.m_eResult = this->m_eResult;
    ret.m_hFile = this->m_hFile;
    ret.m_nAppID = this->m_nAppID;
    ret.m_nSizeInBytes = this->m_nSizeInBytes;
    ret.m_pchFileName = this->m_pchFileName;
    ret.m_ulSteamIDOwner = this->m_ulSteamIDOwner;
    return ret;
}

u32_RemoteStorageDownloadUGCResult_t_116x::operator w32_RemoteStorageDownloadUGCResult_t_116x() const
{
    w32_RemoteStorageDownloadUGCResult_t_116x ret;
    ret.m_eResult = this->m_eResult;
    ret.m_hFile = this->m_hFile;
    ret.m_nAppID = this->m_nAppID;
    ret.m_nSizeInBytes = this->m_nSizeInBytes;
    ret.m_pchFileName = this->m_pchFileName;
    ret.m_ulSteamIDOwner = this->m_ulSteamIDOwner;
    return ret;
}
#endif

#ifdef __i386__
w32_RemoteStorageDownloadUGCResult_t_111x::operator u32_RemoteStorageDownloadUGCResult_t_111x() const
{
    u32_RemoteStorageDownloadUGCResult_t_111x ret;
    ret.m_eResult = this->m_eResult;
    ret.m_hFile = this->m_hFile;
    ret.m_nAppID = this->m_nAppID;
    ret.m_nSizeInBytes = this->m_nSizeInBytes;
    ret.m_pchFileName = this->m_pchFileName;
    ret.m_ulSteamIDOwner = this->m_ulSteamIDOwner;
    return ret;
}

u32_RemoteStorageDownloadUGCResult_t_111x::operator w32_RemoteStorageDownloadUGCResult_t_111x() const
{
    w32_RemoteStorageDownloadUGCResult_t_111x ret;
    ret.m_eResult = this->m_eResult;
    ret.m_hFile = this->m_hFile;
    ret.m_nAppID = this->m_nAppID;
    ret.m_nSizeInBytes = this->m_nSizeInBytes;
    ret.m_pchFileName = this->m_pchFileName;
    ret.m_ulSteamIDOwner = this->m_ulSteamIDOwner;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_RemoteStorageEnumerateUserPublishedFilesResult_t_123) >= 416 );
C_ASSERT( offsetof(w64_RemoteStorageEnumerateUserPublishedFilesResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(w64_RemoteStorageEnumerateUserPublishedFilesResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageEnumerateUserPublishedFilesResult_t_123, m_nResultsReturned) == 4 );
C_ASSERT( sizeof(w64_RemoteStorageEnumerateUserPublishedFilesResult_t_123().m_nResultsReturned) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageEnumerateUserPublishedFilesResult_t_123, m_nTotalResultCount) == 8 );
C_ASSERT( sizeof(w64_RemoteStorageEnumerateUserPublishedFilesResult_t_123().m_nTotalResultCount) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageEnumerateUserPublishedFilesResult_t_123, m_rgPublishedFileId) == 16 );
C_ASSERT( sizeof(w64_RemoteStorageEnumerateUserPublishedFilesResult_t_123().m_rgPublishedFileId) >= 400 );

C_ASSERT( sizeof(u64_RemoteStorageEnumerateUserPublishedFilesResult_t_123) >= 412 );
C_ASSERT( offsetof(u64_RemoteStorageEnumerateUserPublishedFilesResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(u64_RemoteStorageEnumerateUserPublishedFilesResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageEnumerateUserPublishedFilesResult_t_123, m_nResultsReturned) == 4 );
C_ASSERT( sizeof(u64_RemoteStorageEnumerateUserPublishedFilesResult_t_123().m_nResultsReturned) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageEnumerateUserPublishedFilesResult_t_123, m_nTotalResultCount) == 8 );
C_ASSERT( sizeof(u64_RemoteStorageEnumerateUserPublishedFilesResult_t_123().m_nTotalResultCount) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageEnumerateUserPublishedFilesResult_t_123, m_rgPublishedFileId) == 12 );
C_ASSERT( sizeof(u64_RemoteStorageEnumerateUserPublishedFilesResult_t_123().m_rgPublishedFileId) >= 400 );

C_ASSERT( sizeof(w32_RemoteStorageEnumerateUserPublishedFilesResult_t_123) >= 416 );
C_ASSERT( offsetof(w32_RemoteStorageEnumerateUserPublishedFilesResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(w32_RemoteStorageEnumerateUserPublishedFilesResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageEnumerateUserPublishedFilesResult_t_123, m_nResultsReturned) == 4 );
C_ASSERT( sizeof(w32_RemoteStorageEnumerateUserPublishedFilesResult_t_123().m_nResultsReturned) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageEnumerateUserPublishedFilesResult_t_123, m_nTotalResultCount) == 8 );
C_ASSERT( sizeof(w32_RemoteStorageEnumerateUserPublishedFilesResult_t_123().m_nTotalResultCount) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageEnumerateUserPublishedFilesResult_t_123, m_rgPublishedFileId) == 16 );
C_ASSERT( sizeof(w32_RemoteStorageEnumerateUserPublishedFilesResult_t_123().m_rgPublishedFileId) >= 400 );

C_ASSERT( sizeof(u32_RemoteStorageEnumerateUserPublishedFilesResult_t_123) >= 412 );
C_ASSERT( offsetof(u32_RemoteStorageEnumerateUserPublishedFilesResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(u32_RemoteStorageEnumerateUserPublishedFilesResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageEnumerateUserPublishedFilesResult_t_123, m_nResultsReturned) == 4 );
C_ASSERT( sizeof(u32_RemoteStorageEnumerateUserPublishedFilesResult_t_123().m_nResultsReturned) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageEnumerateUserPublishedFilesResult_t_123, m_nTotalResultCount) == 8 );
C_ASSERT( sizeof(u32_RemoteStorageEnumerateUserPublishedFilesResult_t_123().m_nTotalResultCount) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageEnumerateUserPublishedFilesResult_t_123, m_rgPublishedFileId) == 12 );
C_ASSERT( sizeof(u32_RemoteStorageEnumerateUserPublishedFilesResult_t_123().m_rgPublishedFileId) >= 400 );

C_ASSERT( sizeof(w64_RemoteStorageEnumerateUserPublishedFilesResult_t_116x) >= 416 );
C_ASSERT( offsetof(w64_RemoteStorageEnumerateUserPublishedFilesResult_t_116x, m_eResult) == 0 );
C_ASSERT( sizeof(w64_RemoteStorageEnumerateUserPublishedFilesResult_t_116x().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageEnumerateUserPublishedFilesResult_t_116x, m_nResultsReturned) == 4 );
C_ASSERT( sizeof(w64_RemoteStorageEnumerateUserPublishedFilesResult_t_116x().m_nResultsReturned) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageEnumerateUserPublishedFilesResult_t_116x, m_nTotalResultCount) == 8 );
C_ASSERT( sizeof(w64_RemoteStorageEnumerateUserPublishedFilesResult_t_116x().m_nTotalResultCount) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageEnumerateUserPublishedFilesResult_t_116x, m_rgPublishedFileId) == 16 );
C_ASSERT( sizeof(w64_RemoteStorageEnumerateUserPublishedFilesResult_t_116x().m_rgPublishedFileId) >= 400 );

C_ASSERT( sizeof(u64_RemoteStorageEnumerateUserPublishedFilesResult_t_116x) >= 416 );
C_ASSERT( offsetof(u64_RemoteStorageEnumerateUserPublishedFilesResult_t_116x, m_eResult) == 0 );
C_ASSERT( sizeof(u64_RemoteStorageEnumerateUserPublishedFilesResult_t_116x().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageEnumerateUserPublishedFilesResult_t_116x, m_nResultsReturned) == 4 );
C_ASSERT( sizeof(u64_RemoteStorageEnumerateUserPublishedFilesResult_t_116x().m_nResultsReturned) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageEnumerateUserPublishedFilesResult_t_116x, m_nTotalResultCount) == 8 );
C_ASSERT( sizeof(u64_RemoteStorageEnumerateUserPublishedFilesResult_t_116x().m_nTotalResultCount) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageEnumerateUserPublishedFilesResult_t_116x, m_rgPublishedFileId) == 16 );
C_ASSERT( sizeof(u64_RemoteStorageEnumerateUserPublishedFilesResult_t_116x().m_rgPublishedFileId) >= 400 );

C_ASSERT( sizeof(w32_RemoteStorageEnumerateUserPublishedFilesResult_t_116x) >= 416 );
C_ASSERT( offsetof(w32_RemoteStorageEnumerateUserPublishedFilesResult_t_116x, m_eResult) == 0 );
C_ASSERT( sizeof(w32_RemoteStorageEnumerateUserPublishedFilesResult_t_116x().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageEnumerateUserPublishedFilesResult_t_116x, m_nResultsReturned) == 4 );
C_ASSERT( sizeof(w32_RemoteStorageEnumerateUserPublishedFilesResult_t_116x().m_nResultsReturned) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageEnumerateUserPublishedFilesResult_t_116x, m_nTotalResultCount) == 8 );
C_ASSERT( sizeof(w32_RemoteStorageEnumerateUserPublishedFilesResult_t_116x().m_nTotalResultCount) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageEnumerateUserPublishedFilesResult_t_116x, m_rgPublishedFileId) == 16 );
C_ASSERT( sizeof(w32_RemoteStorageEnumerateUserPublishedFilesResult_t_116x().m_rgPublishedFileId) >= 400 );

C_ASSERT( sizeof(u32_RemoteStorageEnumerateUserPublishedFilesResult_t_116x) >= 412 );
C_ASSERT( offsetof(u32_RemoteStorageEnumerateUserPublishedFilesResult_t_116x, m_eResult) == 0 );
C_ASSERT( sizeof(u32_RemoteStorageEnumerateUserPublishedFilesResult_t_116x().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageEnumerateUserPublishedFilesResult_t_116x, m_nResultsReturned) == 4 );
C_ASSERT( sizeof(u32_RemoteStorageEnumerateUserPublishedFilesResult_t_116x().m_nResultsReturned) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageEnumerateUserPublishedFilesResult_t_116x, m_nTotalResultCount) == 8 );
C_ASSERT( sizeof(u32_RemoteStorageEnumerateUserPublishedFilesResult_t_116x().m_nTotalResultCount) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageEnumerateUserPublishedFilesResult_t_116x, m_rgPublishedFileId) == 12 );
C_ASSERT( sizeof(u32_RemoteStorageEnumerateUserPublishedFilesResult_t_116x().m_rgPublishedFileId) >= 400 );

#ifdef __x86_64__
w64_RemoteStorageEnumerateUserPublishedFilesResult_t_123::operator u64_RemoteStorageEnumerateUserPublishedFilesResult_t_123() const
{
    u64_RemoteStorageEnumerateUserPublishedFilesResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nResultsReturned = this->m_nResultsReturned;
    ret.m_nTotalResultCount = this->m_nTotalResultCount;
    ret.m_rgPublishedFileId = this->m_rgPublishedFileId;
    return ret;
}

u64_RemoteStorageEnumerateUserPublishedFilesResult_t_123::operator w64_RemoteStorageEnumerateUserPublishedFilesResult_t_123() const
{
    w64_RemoteStorageEnumerateUserPublishedFilesResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nResultsReturned = this->m_nResultsReturned;
    ret.m_nTotalResultCount = this->m_nTotalResultCount;
    ret.m_rgPublishedFileId = this->m_rgPublishedFileId;
    return ret;
}
#endif

#ifdef __i386__
w32_RemoteStorageEnumerateUserPublishedFilesResult_t_123::operator u32_RemoteStorageEnumerateUserPublishedFilesResult_t_123() const
{
    u32_RemoteStorageEnumerateUserPublishedFilesResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nResultsReturned = this->m_nResultsReturned;
    ret.m_nTotalResultCount = this->m_nTotalResultCount;
    ret.m_rgPublishedFileId = this->m_rgPublishedFileId;
    return ret;
}

u32_RemoteStorageEnumerateUserPublishedFilesResult_t_123::operator w32_RemoteStorageEnumerateUserPublishedFilesResult_t_123() const
{
    w32_RemoteStorageEnumerateUserPublishedFilesResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nResultsReturned = this->m_nResultsReturned;
    ret.m_nTotalResultCount = this->m_nTotalResultCount;
    ret.m_rgPublishedFileId = this->m_rgPublishedFileId;
    return ret;
}
#endif

#ifdef __i386__
w32_RemoteStorageEnumerateUserPublishedFilesResult_t_116x::operator u32_RemoteStorageEnumerateUserPublishedFilesResult_t_116x() const
{
    u32_RemoteStorageEnumerateUserPublishedFilesResult_t_116x ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nResultsReturned = this->m_nResultsReturned;
    ret.m_nTotalResultCount = this->m_nTotalResultCount;
    ret.m_rgPublishedFileId = this->m_rgPublishedFileId;
    return ret;
}

u32_RemoteStorageEnumerateUserPublishedFilesResult_t_116x::operator w32_RemoteStorageEnumerateUserPublishedFilesResult_t_116x() const
{
    w32_RemoteStorageEnumerateUserPublishedFilesResult_t_116x ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nResultsReturned = this->m_nResultsReturned;
    ret.m_nTotalResultCount = this->m_nTotalResultCount;
    ret.m_rgPublishedFileId = this->m_rgPublishedFileId;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123) >= 416 );
C_ASSERT( offsetof(w64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(w64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123, m_nResultsReturned) == 4 );
C_ASSERT( sizeof(w64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123().m_nResultsReturned) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123, m_nTotalResultCount) == 8 );
C_ASSERT( sizeof(w64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123().m_nTotalResultCount) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123, m_rgPublishedFileId) == 16 );
C_ASSERT( sizeof(w64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123().m_rgPublishedFileId) >= 400 );

C_ASSERT( sizeof(u64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123) >= 412 );
C_ASSERT( offsetof(u64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(u64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123, m_nResultsReturned) == 4 );
C_ASSERT( sizeof(u64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123().m_nResultsReturned) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123, m_nTotalResultCount) == 8 );
C_ASSERT( sizeof(u64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123().m_nTotalResultCount) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123, m_rgPublishedFileId) == 12 );
C_ASSERT( sizeof(u64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123().m_rgPublishedFileId) >= 400 );

C_ASSERT( sizeof(w32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123) >= 416 );
C_ASSERT( offsetof(w32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(w32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123, m_nResultsReturned) == 4 );
C_ASSERT( sizeof(w32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123().m_nResultsReturned) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123, m_nTotalResultCount) == 8 );
C_ASSERT( sizeof(w32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123().m_nTotalResultCount) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123, m_rgPublishedFileId) == 16 );
C_ASSERT( sizeof(w32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123().m_rgPublishedFileId) >= 400 );

C_ASSERT( sizeof(u32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123) >= 412 );
C_ASSERT( offsetof(u32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(u32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123, m_nResultsReturned) == 4 );
C_ASSERT( sizeof(u32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123().m_nResultsReturned) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123, m_nTotalResultCount) == 8 );
C_ASSERT( sizeof(u32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123().m_nTotalResultCount) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123, m_rgPublishedFileId) == 12 );
C_ASSERT( sizeof(u32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123().m_rgPublishedFileId) >= 400 );

C_ASSERT( sizeof(w64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119) >= 416 );
C_ASSERT( offsetof(w64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119, m_eResult) == 0 );
C_ASSERT( sizeof(w64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119, m_nResultsReturned) == 4 );
C_ASSERT( sizeof(w64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119().m_nResultsReturned) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119, m_nTotalResultCount) == 8 );
C_ASSERT( sizeof(w64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119().m_nTotalResultCount) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119, m_rgPublishedFileId) == 16 );
C_ASSERT( sizeof(w64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119().m_rgPublishedFileId) >= 400 );

C_ASSERT( sizeof(u64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119) >= 416 );
C_ASSERT( offsetof(u64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119, m_eResult) == 0 );
C_ASSERT( sizeof(u64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119, m_nResultsReturned) == 4 );
C_ASSERT( sizeof(u64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119().m_nResultsReturned) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119, m_nTotalResultCount) == 8 );
C_ASSERT( sizeof(u64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119().m_nTotalResultCount) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119, m_rgPublishedFileId) == 16 );
C_ASSERT( sizeof(u64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119().m_rgPublishedFileId) >= 400 );

C_ASSERT( sizeof(w32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119) >= 416 );
C_ASSERT( offsetof(w32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119, m_eResult) == 0 );
C_ASSERT( sizeof(w32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119, m_nResultsReturned) == 4 );
C_ASSERT( sizeof(w32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119().m_nResultsReturned) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119, m_nTotalResultCount) == 8 );
C_ASSERT( sizeof(w32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119().m_nTotalResultCount) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119, m_rgPublishedFileId) == 16 );
C_ASSERT( sizeof(w32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119().m_rgPublishedFileId) >= 400 );

C_ASSERT( sizeof(u32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119) >= 412 );
C_ASSERT( offsetof(u32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119, m_eResult) == 0 );
C_ASSERT( sizeof(u32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119, m_nResultsReturned) == 4 );
C_ASSERT( sizeof(u32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119().m_nResultsReturned) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119, m_nTotalResultCount) == 8 );
C_ASSERT( sizeof(u32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119().m_nTotalResultCount) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119, m_rgPublishedFileId) == 12 );
C_ASSERT( sizeof(u32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119().m_rgPublishedFileId) >= 400 );

#ifdef __x86_64__
w64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123::operator u64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123() const
{
    u64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nResultsReturned = this->m_nResultsReturned;
    ret.m_nTotalResultCount = this->m_nTotalResultCount;
    ret.m_rgPublishedFileId = this->m_rgPublishedFileId;
    return ret;
}

u64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123::operator w64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123() const
{
    w64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nResultsReturned = this->m_nResultsReturned;
    ret.m_nTotalResultCount = this->m_nTotalResultCount;
    ret.m_rgPublishedFileId = this->m_rgPublishedFileId;
    return ret;
}
#endif

#ifdef __i386__
w32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123::operator u32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123() const
{
    u32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nResultsReturned = this->m_nResultsReturned;
    ret.m_nTotalResultCount = this->m_nTotalResultCount;
    ret.m_rgPublishedFileId = this->m_rgPublishedFileId;
    return ret;
}

u32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123::operator w32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123() const
{
    w32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nResultsReturned = this->m_nResultsReturned;
    ret.m_nTotalResultCount = this->m_nTotalResultCount;
    ret.m_rgPublishedFileId = this->m_rgPublishedFileId;
    return ret;
}
#endif

#ifdef __i386__
w32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119::operator u32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119() const
{
    u32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nResultsReturned = this->m_nResultsReturned;
    ret.m_nTotalResultCount = this->m_nTotalResultCount;
    ret.m_rgPublishedFileId = this->m_rgPublishedFileId;
    return ret;
}

u32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119::operator w32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119() const
{
    w32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nResultsReturned = this->m_nResultsReturned;
    ret.m_nTotalResultCount = this->m_nTotalResultCount;
    ret.m_rgPublishedFileId = this->m_rgPublishedFileId;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_RemoteStorageEnumerateUserSubscribedFilesResult_t_123) >= 616 );
C_ASSERT( offsetof(w64_RemoteStorageEnumerateUserSubscribedFilesResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(w64_RemoteStorageEnumerateUserSubscribedFilesResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageEnumerateUserSubscribedFilesResult_t_123, m_nResultsReturned) == 4 );
C_ASSERT( sizeof(w64_RemoteStorageEnumerateUserSubscribedFilesResult_t_123().m_nResultsReturned) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageEnumerateUserSubscribedFilesResult_t_123, m_nTotalResultCount) == 8 );
C_ASSERT( sizeof(w64_RemoteStorageEnumerateUserSubscribedFilesResult_t_123().m_nTotalResultCount) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageEnumerateUserSubscribedFilesResult_t_123, m_rgPublishedFileId) == 16 );
C_ASSERT( sizeof(w64_RemoteStorageEnumerateUserSubscribedFilesResult_t_123().m_rgPublishedFileId) >= 400 );
C_ASSERT( offsetof(w64_RemoteStorageEnumerateUserSubscribedFilesResult_t_123, m_rgRTimeSubscribed) == 416 );
C_ASSERT( sizeof(w64_RemoteStorageEnumerateUserSubscribedFilesResult_t_123().m_rgRTimeSubscribed) >= 200 );

C_ASSERT( sizeof(u64_RemoteStorageEnumerateUserSubscribedFilesResult_t_123) >= 612 );
C_ASSERT( offsetof(u64_RemoteStorageEnumerateUserSubscribedFilesResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(u64_RemoteStorageEnumerateUserSubscribedFilesResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageEnumerateUserSubscribedFilesResult_t_123, m_nResultsReturned) == 4 );
C_ASSERT( sizeof(u64_RemoteStorageEnumerateUserSubscribedFilesResult_t_123().m_nResultsReturned) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageEnumerateUserSubscribedFilesResult_t_123, m_nTotalResultCount) == 8 );
C_ASSERT( sizeof(u64_RemoteStorageEnumerateUserSubscribedFilesResult_t_123().m_nTotalResultCount) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageEnumerateUserSubscribedFilesResult_t_123, m_rgPublishedFileId) == 12 );
C_ASSERT( sizeof(u64_RemoteStorageEnumerateUserSubscribedFilesResult_t_123().m_rgPublishedFileId) >= 400 );
C_ASSERT( offsetof(u64_RemoteStorageEnumerateUserSubscribedFilesResult_t_123, m_rgRTimeSubscribed) == 412 );
C_ASSERT( sizeof(u64_RemoteStorageEnumerateUserSubscribedFilesResult_t_123().m_rgRTimeSubscribed) >= 200 );

C_ASSERT( sizeof(w32_RemoteStorageEnumerateUserSubscribedFilesResult_t_123) >= 616 );
C_ASSERT( offsetof(w32_RemoteStorageEnumerateUserSubscribedFilesResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(w32_RemoteStorageEnumerateUserSubscribedFilesResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageEnumerateUserSubscribedFilesResult_t_123, m_nResultsReturned) == 4 );
C_ASSERT( sizeof(w32_RemoteStorageEnumerateUserSubscribedFilesResult_t_123().m_nResultsReturned) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageEnumerateUserSubscribedFilesResult_t_123, m_nTotalResultCount) == 8 );
C_ASSERT( sizeof(w32_RemoteStorageEnumerateUserSubscribedFilesResult_t_123().m_nTotalResultCount) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageEnumerateUserSubscribedFilesResult_t_123, m_rgPublishedFileId) == 16 );
C_ASSERT( sizeof(w32_RemoteStorageEnumerateUserSubscribedFilesResult_t_123().m_rgPublishedFileId) >= 400 );
C_ASSERT( offsetof(w32_RemoteStorageEnumerateUserSubscribedFilesResult_t_123, m_rgRTimeSubscribed) == 416 );
C_ASSERT( sizeof(w32_RemoteStorageEnumerateUserSubscribedFilesResult_t_123().m_rgRTimeSubscribed) >= 200 );

C_ASSERT( sizeof(u32_RemoteStorageEnumerateUserSubscribedFilesResult_t_123) >= 612 );
C_ASSERT( offsetof(u32_RemoteStorageEnumerateUserSubscribedFilesResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(u32_RemoteStorageEnumerateUserSubscribedFilesResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageEnumerateUserSubscribedFilesResult_t_123, m_nResultsReturned) == 4 );
C_ASSERT( sizeof(u32_RemoteStorageEnumerateUserSubscribedFilesResult_t_123().m_nResultsReturned) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageEnumerateUserSubscribedFilesResult_t_123, m_nTotalResultCount) == 8 );
C_ASSERT( sizeof(u32_RemoteStorageEnumerateUserSubscribedFilesResult_t_123().m_nTotalResultCount) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageEnumerateUserSubscribedFilesResult_t_123, m_rgPublishedFileId) == 12 );
C_ASSERT( sizeof(u32_RemoteStorageEnumerateUserSubscribedFilesResult_t_123().m_rgPublishedFileId) >= 400 );
C_ASSERT( offsetof(u32_RemoteStorageEnumerateUserSubscribedFilesResult_t_123, m_rgRTimeSubscribed) == 412 );
C_ASSERT( sizeof(u32_RemoteStorageEnumerateUserSubscribedFilesResult_t_123().m_rgRTimeSubscribed) >= 200 );

C_ASSERT( sizeof(w64_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x) >= 616 );
C_ASSERT( offsetof(w64_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x, m_eResult) == 0 );
C_ASSERT( sizeof(w64_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x, m_nResultsReturned) == 4 );
C_ASSERT( sizeof(w64_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x().m_nResultsReturned) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x, m_nTotalResultCount) == 8 );
C_ASSERT( sizeof(w64_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x().m_nTotalResultCount) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x, m_rgPublishedFileId) == 16 );
C_ASSERT( sizeof(w64_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x().m_rgPublishedFileId) >= 400 );
C_ASSERT( offsetof(w64_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x, m_rgRTimeSubscribed) == 416 );
C_ASSERT( sizeof(w64_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x().m_rgRTimeSubscribed) >= 200 );

C_ASSERT( sizeof(u64_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x) >= 616 );
C_ASSERT( offsetof(u64_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x, m_eResult) == 0 );
C_ASSERT( sizeof(u64_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x, m_nResultsReturned) == 4 );
C_ASSERT( sizeof(u64_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x().m_nResultsReturned) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x, m_nTotalResultCount) == 8 );
C_ASSERT( sizeof(u64_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x().m_nTotalResultCount) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x, m_rgPublishedFileId) == 16 );
C_ASSERT( sizeof(u64_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x().m_rgPublishedFileId) >= 400 );
C_ASSERT( offsetof(u64_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x, m_rgRTimeSubscribed) == 416 );
C_ASSERT( sizeof(u64_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x().m_rgRTimeSubscribed) >= 200 );

C_ASSERT( sizeof(w32_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x) >= 616 );
C_ASSERT( offsetof(w32_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x, m_eResult) == 0 );
C_ASSERT( sizeof(w32_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x, m_nResultsReturned) == 4 );
C_ASSERT( sizeof(w32_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x().m_nResultsReturned) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x, m_nTotalResultCount) == 8 );
C_ASSERT( sizeof(w32_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x().m_nTotalResultCount) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x, m_rgPublishedFileId) == 16 );
C_ASSERT( sizeof(w32_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x().m_rgPublishedFileId) >= 400 );
C_ASSERT( offsetof(w32_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x, m_rgRTimeSubscribed) == 416 );
C_ASSERT( sizeof(w32_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x().m_rgRTimeSubscribed) >= 200 );

C_ASSERT( sizeof(u32_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x) >= 612 );
C_ASSERT( offsetof(u32_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x, m_eResult) == 0 );
C_ASSERT( sizeof(u32_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x, m_nResultsReturned) == 4 );
C_ASSERT( sizeof(u32_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x().m_nResultsReturned) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x, m_nTotalResultCount) == 8 );
C_ASSERT( sizeof(u32_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x().m_nTotalResultCount) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x, m_rgPublishedFileId) == 12 );
C_ASSERT( sizeof(u32_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x().m_rgPublishedFileId) >= 400 );
C_ASSERT( offsetof(u32_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x, m_rgRTimeSubscribed) == 412 );
C_ASSERT( sizeof(u32_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x().m_rgRTimeSubscribed) >= 200 );

#ifdef __x86_64__
w64_RemoteStorageEnumerateUserSubscribedFilesResult_t_123::operator u64_RemoteStorageEnumerateUserSubscribedFilesResult_t_123() const
{
    u64_RemoteStorageEnumerateUserSubscribedFilesResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nResultsReturned = this->m_nResultsReturned;
    ret.m_nTotalResultCount = this->m_nTotalResultCount;
    ret.m_rgPublishedFileId = this->m_rgPublishedFileId;
    ret.m_rgRTimeSubscribed = this->m_rgRTimeSubscribed;
    return ret;
}

u64_RemoteStorageEnumerateUserSubscribedFilesResult_t_123::operator w64_RemoteStorageEnumerateUserSubscribedFilesResult_t_123() const
{
    w64_RemoteStorageEnumerateUserSubscribedFilesResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nResultsReturned = this->m_nResultsReturned;
    ret.m_nTotalResultCount = this->m_nTotalResultCount;
    ret.m_rgPublishedFileId = this->m_rgPublishedFileId;
    ret.m_rgRTimeSubscribed = this->m_rgRTimeSubscribed;
    return ret;
}
#endif

#ifdef __i386__
w32_RemoteStorageEnumerateUserSubscribedFilesResult_t_123::operator u32_RemoteStorageEnumerateUserSubscribedFilesResult_t_123() const
{
    u32_RemoteStorageEnumerateUserSubscribedFilesResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nResultsReturned = this->m_nResultsReturned;
    ret.m_nTotalResultCount = this->m_nTotalResultCount;
    ret.m_rgPublishedFileId = this->m_rgPublishedFileId;
    ret.m_rgRTimeSubscribed = this->m_rgRTimeSubscribed;
    return ret;
}

u32_RemoteStorageEnumerateUserSubscribedFilesResult_t_123::operator w32_RemoteStorageEnumerateUserSubscribedFilesResult_t_123() const
{
    w32_RemoteStorageEnumerateUserSubscribedFilesResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nResultsReturned = this->m_nResultsReturned;
    ret.m_nTotalResultCount = this->m_nTotalResultCount;
    ret.m_rgPublishedFileId = this->m_rgPublishedFileId;
    ret.m_rgRTimeSubscribed = this->m_rgRTimeSubscribed;
    return ret;
}
#endif

#ifdef __i386__
w32_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x::operator u32_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x() const
{
    u32_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nResultsReturned = this->m_nResultsReturned;
    ret.m_nTotalResultCount = this->m_nTotalResultCount;
    ret.m_rgPublishedFileId = this->m_rgPublishedFileId;
    ret.m_rgRTimeSubscribed = this->m_rgRTimeSubscribed;
    return ret;
}

u32_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x::operator w32_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x() const
{
    w32_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nResultsReturned = this->m_nResultsReturned;
    ret.m_nTotalResultCount = this->m_nTotalResultCount;
    ret.m_rgPublishedFileId = this->m_rgPublishedFileId;
    ret.m_rgRTimeSubscribed = this->m_rgRTimeSubscribed;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_RemoteStorageEnumerateWorkshopFilesResult_t_125) >= 624 );
C_ASSERT( offsetof(w64_RemoteStorageEnumerateWorkshopFilesResult_t_125, m_eResult) == 0 );
C_ASSERT( sizeof(w64_RemoteStorageEnumerateWorkshopFilesResult_t_125().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageEnumerateWorkshopFilesResult_t_125, m_nResultsReturned) == 4 );
C_ASSERT( sizeof(w64_RemoteStorageEnumerateWorkshopFilesResult_t_125().m_nResultsReturned) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageEnumerateWorkshopFilesResult_t_125, m_nTotalResultCount) == 8 );
C_ASSERT( sizeof(w64_RemoteStorageEnumerateWorkshopFilesResult_t_125().m_nTotalResultCount) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageEnumerateWorkshopFilesResult_t_125, m_rgPublishedFileId) == 16 );
C_ASSERT( sizeof(w64_RemoteStorageEnumerateWorkshopFilesResult_t_125().m_rgPublishedFileId) >= 400 );
C_ASSERT( offsetof(w64_RemoteStorageEnumerateWorkshopFilesResult_t_125, m_rgScore) == 416 );
C_ASSERT( sizeof(w64_RemoteStorageEnumerateWorkshopFilesResult_t_125().m_rgScore) >= 200 );
C_ASSERT( offsetof(w64_RemoteStorageEnumerateWorkshopFilesResult_t_125, m_nAppId) == 616 );
C_ASSERT( sizeof(w64_RemoteStorageEnumerateWorkshopFilesResult_t_125().m_nAppId) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageEnumerateWorkshopFilesResult_t_125, m_unStartIndex) == 620 );
C_ASSERT( sizeof(w64_RemoteStorageEnumerateWorkshopFilesResult_t_125().m_unStartIndex) >= 4 );

C_ASSERT( sizeof(u64_RemoteStorageEnumerateWorkshopFilesResult_t_125) >= 620 );
C_ASSERT( offsetof(u64_RemoteStorageEnumerateWorkshopFilesResult_t_125, m_eResult) == 0 );
C_ASSERT( sizeof(u64_RemoteStorageEnumerateWorkshopFilesResult_t_125().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageEnumerateWorkshopFilesResult_t_125, m_nResultsReturned) == 4 );
C_ASSERT( sizeof(u64_RemoteStorageEnumerateWorkshopFilesResult_t_125().m_nResultsReturned) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageEnumerateWorkshopFilesResult_t_125, m_nTotalResultCount) == 8 );
C_ASSERT( sizeof(u64_RemoteStorageEnumerateWorkshopFilesResult_t_125().m_nTotalResultCount) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageEnumerateWorkshopFilesResult_t_125, m_rgPublishedFileId) == 12 );
C_ASSERT( sizeof(u64_RemoteStorageEnumerateWorkshopFilesResult_t_125().m_rgPublishedFileId) >= 400 );
C_ASSERT( offsetof(u64_RemoteStorageEnumerateWorkshopFilesResult_t_125, m_rgScore) == 412 );
C_ASSERT( sizeof(u64_RemoteStorageEnumerateWorkshopFilesResult_t_125().m_rgScore) >= 200 );
C_ASSERT( offsetof(u64_RemoteStorageEnumerateWorkshopFilesResult_t_125, m_nAppId) == 612 );
C_ASSERT( sizeof(u64_RemoteStorageEnumerateWorkshopFilesResult_t_125().m_nAppId) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageEnumerateWorkshopFilesResult_t_125, m_unStartIndex) == 616 );
C_ASSERT( sizeof(u64_RemoteStorageEnumerateWorkshopFilesResult_t_125().m_unStartIndex) >= 4 );

C_ASSERT( sizeof(w32_RemoteStorageEnumerateWorkshopFilesResult_t_125) >= 624 );
C_ASSERT( offsetof(w32_RemoteStorageEnumerateWorkshopFilesResult_t_125, m_eResult) == 0 );
C_ASSERT( sizeof(w32_RemoteStorageEnumerateWorkshopFilesResult_t_125().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageEnumerateWorkshopFilesResult_t_125, m_nResultsReturned) == 4 );
C_ASSERT( sizeof(w32_RemoteStorageEnumerateWorkshopFilesResult_t_125().m_nResultsReturned) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageEnumerateWorkshopFilesResult_t_125, m_nTotalResultCount) == 8 );
C_ASSERT( sizeof(w32_RemoteStorageEnumerateWorkshopFilesResult_t_125().m_nTotalResultCount) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageEnumerateWorkshopFilesResult_t_125, m_rgPublishedFileId) == 16 );
C_ASSERT( sizeof(w32_RemoteStorageEnumerateWorkshopFilesResult_t_125().m_rgPublishedFileId) >= 400 );
C_ASSERT( offsetof(w32_RemoteStorageEnumerateWorkshopFilesResult_t_125, m_rgScore) == 416 );
C_ASSERT( sizeof(w32_RemoteStorageEnumerateWorkshopFilesResult_t_125().m_rgScore) >= 200 );
C_ASSERT( offsetof(w32_RemoteStorageEnumerateWorkshopFilesResult_t_125, m_nAppId) == 616 );
C_ASSERT( sizeof(w32_RemoteStorageEnumerateWorkshopFilesResult_t_125().m_nAppId) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageEnumerateWorkshopFilesResult_t_125, m_unStartIndex) == 620 );
C_ASSERT( sizeof(w32_RemoteStorageEnumerateWorkshopFilesResult_t_125().m_unStartIndex) >= 4 );

C_ASSERT( sizeof(u32_RemoteStorageEnumerateWorkshopFilesResult_t_125) >= 620 );
C_ASSERT( offsetof(u32_RemoteStorageEnumerateWorkshopFilesResult_t_125, m_eResult) == 0 );
C_ASSERT( sizeof(u32_RemoteStorageEnumerateWorkshopFilesResult_t_125().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageEnumerateWorkshopFilesResult_t_125, m_nResultsReturned) == 4 );
C_ASSERT( sizeof(u32_RemoteStorageEnumerateWorkshopFilesResult_t_125().m_nResultsReturned) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageEnumerateWorkshopFilesResult_t_125, m_nTotalResultCount) == 8 );
C_ASSERT( sizeof(u32_RemoteStorageEnumerateWorkshopFilesResult_t_125().m_nTotalResultCount) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageEnumerateWorkshopFilesResult_t_125, m_rgPublishedFileId) == 12 );
C_ASSERT( sizeof(u32_RemoteStorageEnumerateWorkshopFilesResult_t_125().m_rgPublishedFileId) >= 400 );
C_ASSERT( offsetof(u32_RemoteStorageEnumerateWorkshopFilesResult_t_125, m_rgScore) == 412 );
C_ASSERT( sizeof(u32_RemoteStorageEnumerateWorkshopFilesResult_t_125().m_rgScore) >= 200 );
C_ASSERT( offsetof(u32_RemoteStorageEnumerateWorkshopFilesResult_t_125, m_nAppId) == 612 );
C_ASSERT( sizeof(u32_RemoteStorageEnumerateWorkshopFilesResult_t_125().m_nAppId) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageEnumerateWorkshopFilesResult_t_125, m_unStartIndex) == 616 );
C_ASSERT( sizeof(u32_RemoteStorageEnumerateWorkshopFilesResult_t_125().m_unStartIndex) >= 4 );

C_ASSERT( sizeof(w64_RemoteStorageEnumerateWorkshopFilesResult_t_123) >= 616 );
C_ASSERT( offsetof(w64_RemoteStorageEnumerateWorkshopFilesResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(w64_RemoteStorageEnumerateWorkshopFilesResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageEnumerateWorkshopFilesResult_t_123, m_nResultsReturned) == 4 );
C_ASSERT( sizeof(w64_RemoteStorageEnumerateWorkshopFilesResult_t_123().m_nResultsReturned) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageEnumerateWorkshopFilesResult_t_123, m_nTotalResultCount) == 8 );
C_ASSERT( sizeof(w64_RemoteStorageEnumerateWorkshopFilesResult_t_123().m_nTotalResultCount) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageEnumerateWorkshopFilesResult_t_123, m_rgPublishedFileId) == 16 );
C_ASSERT( sizeof(w64_RemoteStorageEnumerateWorkshopFilesResult_t_123().m_rgPublishedFileId) >= 400 );
C_ASSERT( offsetof(w64_RemoteStorageEnumerateWorkshopFilesResult_t_123, m_rgScore) == 416 );
C_ASSERT( sizeof(w64_RemoteStorageEnumerateWorkshopFilesResult_t_123().m_rgScore) >= 200 );

C_ASSERT( sizeof(u64_RemoteStorageEnumerateWorkshopFilesResult_t_123) >= 612 );
C_ASSERT( offsetof(u64_RemoteStorageEnumerateWorkshopFilesResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(u64_RemoteStorageEnumerateWorkshopFilesResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageEnumerateWorkshopFilesResult_t_123, m_nResultsReturned) == 4 );
C_ASSERT( sizeof(u64_RemoteStorageEnumerateWorkshopFilesResult_t_123().m_nResultsReturned) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageEnumerateWorkshopFilesResult_t_123, m_nTotalResultCount) == 8 );
C_ASSERT( sizeof(u64_RemoteStorageEnumerateWorkshopFilesResult_t_123().m_nTotalResultCount) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageEnumerateWorkshopFilesResult_t_123, m_rgPublishedFileId) == 12 );
C_ASSERT( sizeof(u64_RemoteStorageEnumerateWorkshopFilesResult_t_123().m_rgPublishedFileId) >= 400 );
C_ASSERT( offsetof(u64_RemoteStorageEnumerateWorkshopFilesResult_t_123, m_rgScore) == 412 );
C_ASSERT( sizeof(u64_RemoteStorageEnumerateWorkshopFilesResult_t_123().m_rgScore) >= 200 );

C_ASSERT( sizeof(w32_RemoteStorageEnumerateWorkshopFilesResult_t_123) >= 616 );
C_ASSERT( offsetof(w32_RemoteStorageEnumerateWorkshopFilesResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(w32_RemoteStorageEnumerateWorkshopFilesResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageEnumerateWorkshopFilesResult_t_123, m_nResultsReturned) == 4 );
C_ASSERT( sizeof(w32_RemoteStorageEnumerateWorkshopFilesResult_t_123().m_nResultsReturned) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageEnumerateWorkshopFilesResult_t_123, m_nTotalResultCount) == 8 );
C_ASSERT( sizeof(w32_RemoteStorageEnumerateWorkshopFilesResult_t_123().m_nTotalResultCount) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageEnumerateWorkshopFilesResult_t_123, m_rgPublishedFileId) == 16 );
C_ASSERT( sizeof(w32_RemoteStorageEnumerateWorkshopFilesResult_t_123().m_rgPublishedFileId) >= 400 );
C_ASSERT( offsetof(w32_RemoteStorageEnumerateWorkshopFilesResult_t_123, m_rgScore) == 416 );
C_ASSERT( sizeof(w32_RemoteStorageEnumerateWorkshopFilesResult_t_123().m_rgScore) >= 200 );

C_ASSERT( sizeof(u32_RemoteStorageEnumerateWorkshopFilesResult_t_123) >= 612 );
C_ASSERT( offsetof(u32_RemoteStorageEnumerateWorkshopFilesResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(u32_RemoteStorageEnumerateWorkshopFilesResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageEnumerateWorkshopFilesResult_t_123, m_nResultsReturned) == 4 );
C_ASSERT( sizeof(u32_RemoteStorageEnumerateWorkshopFilesResult_t_123().m_nResultsReturned) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageEnumerateWorkshopFilesResult_t_123, m_nTotalResultCount) == 8 );
C_ASSERT( sizeof(u32_RemoteStorageEnumerateWorkshopFilesResult_t_123().m_nTotalResultCount) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageEnumerateWorkshopFilesResult_t_123, m_rgPublishedFileId) == 12 );
C_ASSERT( sizeof(u32_RemoteStorageEnumerateWorkshopFilesResult_t_123().m_rgPublishedFileId) >= 400 );
C_ASSERT( offsetof(u32_RemoteStorageEnumerateWorkshopFilesResult_t_123, m_rgScore) == 412 );
C_ASSERT( sizeof(u32_RemoteStorageEnumerateWorkshopFilesResult_t_123().m_rgScore) >= 200 );

C_ASSERT( sizeof(w64_RemoteStorageEnumerateWorkshopFilesResult_t_119) >= 616 );
C_ASSERT( offsetof(w64_RemoteStorageEnumerateWorkshopFilesResult_t_119, m_eResult) == 0 );
C_ASSERT( sizeof(w64_RemoteStorageEnumerateWorkshopFilesResult_t_119().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageEnumerateWorkshopFilesResult_t_119, m_nResultsReturned) == 4 );
C_ASSERT( sizeof(w64_RemoteStorageEnumerateWorkshopFilesResult_t_119().m_nResultsReturned) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageEnumerateWorkshopFilesResult_t_119, m_nTotalResultCount) == 8 );
C_ASSERT( sizeof(w64_RemoteStorageEnumerateWorkshopFilesResult_t_119().m_nTotalResultCount) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageEnumerateWorkshopFilesResult_t_119, m_rgPublishedFileId) == 16 );
C_ASSERT( sizeof(w64_RemoteStorageEnumerateWorkshopFilesResult_t_119().m_rgPublishedFileId) >= 400 );
C_ASSERT( offsetof(w64_RemoteStorageEnumerateWorkshopFilesResult_t_119, m_rgScore) == 416 );
C_ASSERT( sizeof(w64_RemoteStorageEnumerateWorkshopFilesResult_t_119().m_rgScore) >= 200 );

C_ASSERT( sizeof(u64_RemoteStorageEnumerateWorkshopFilesResult_t_119) >= 616 );
C_ASSERT( offsetof(u64_RemoteStorageEnumerateWorkshopFilesResult_t_119, m_eResult) == 0 );
C_ASSERT( sizeof(u64_RemoteStorageEnumerateWorkshopFilesResult_t_119().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageEnumerateWorkshopFilesResult_t_119, m_nResultsReturned) == 4 );
C_ASSERT( sizeof(u64_RemoteStorageEnumerateWorkshopFilesResult_t_119().m_nResultsReturned) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageEnumerateWorkshopFilesResult_t_119, m_nTotalResultCount) == 8 );
C_ASSERT( sizeof(u64_RemoteStorageEnumerateWorkshopFilesResult_t_119().m_nTotalResultCount) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageEnumerateWorkshopFilesResult_t_119, m_rgPublishedFileId) == 16 );
C_ASSERT( sizeof(u64_RemoteStorageEnumerateWorkshopFilesResult_t_119().m_rgPublishedFileId) >= 400 );
C_ASSERT( offsetof(u64_RemoteStorageEnumerateWorkshopFilesResult_t_119, m_rgScore) == 416 );
C_ASSERT( sizeof(u64_RemoteStorageEnumerateWorkshopFilesResult_t_119().m_rgScore) >= 200 );

C_ASSERT( sizeof(w32_RemoteStorageEnumerateWorkshopFilesResult_t_119) >= 616 );
C_ASSERT( offsetof(w32_RemoteStorageEnumerateWorkshopFilesResult_t_119, m_eResult) == 0 );
C_ASSERT( sizeof(w32_RemoteStorageEnumerateWorkshopFilesResult_t_119().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageEnumerateWorkshopFilesResult_t_119, m_nResultsReturned) == 4 );
C_ASSERT( sizeof(w32_RemoteStorageEnumerateWorkshopFilesResult_t_119().m_nResultsReturned) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageEnumerateWorkshopFilesResult_t_119, m_nTotalResultCount) == 8 );
C_ASSERT( sizeof(w32_RemoteStorageEnumerateWorkshopFilesResult_t_119().m_nTotalResultCount) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageEnumerateWorkshopFilesResult_t_119, m_rgPublishedFileId) == 16 );
C_ASSERT( sizeof(w32_RemoteStorageEnumerateWorkshopFilesResult_t_119().m_rgPublishedFileId) >= 400 );
C_ASSERT( offsetof(w32_RemoteStorageEnumerateWorkshopFilesResult_t_119, m_rgScore) == 416 );
C_ASSERT( sizeof(w32_RemoteStorageEnumerateWorkshopFilesResult_t_119().m_rgScore) >= 200 );

C_ASSERT( sizeof(u32_RemoteStorageEnumerateWorkshopFilesResult_t_119) >= 612 );
C_ASSERT( offsetof(u32_RemoteStorageEnumerateWorkshopFilesResult_t_119, m_eResult) == 0 );
C_ASSERT( sizeof(u32_RemoteStorageEnumerateWorkshopFilesResult_t_119().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageEnumerateWorkshopFilesResult_t_119, m_nResultsReturned) == 4 );
C_ASSERT( sizeof(u32_RemoteStorageEnumerateWorkshopFilesResult_t_119().m_nResultsReturned) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageEnumerateWorkshopFilesResult_t_119, m_nTotalResultCount) == 8 );
C_ASSERT( sizeof(u32_RemoteStorageEnumerateWorkshopFilesResult_t_119().m_nTotalResultCount) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageEnumerateWorkshopFilesResult_t_119, m_rgPublishedFileId) == 12 );
C_ASSERT( sizeof(u32_RemoteStorageEnumerateWorkshopFilesResult_t_119().m_rgPublishedFileId) >= 400 );
C_ASSERT( offsetof(u32_RemoteStorageEnumerateWorkshopFilesResult_t_119, m_rgScore) == 412 );
C_ASSERT( sizeof(u32_RemoteStorageEnumerateWorkshopFilesResult_t_119().m_rgScore) >= 200 );

#ifdef __x86_64__
w64_RemoteStorageEnumerateWorkshopFilesResult_t_125::operator u64_RemoteStorageEnumerateWorkshopFilesResult_t_125() const
{
    u64_RemoteStorageEnumerateWorkshopFilesResult_t_125 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nResultsReturned = this->m_nResultsReturned;
    ret.m_nTotalResultCount = this->m_nTotalResultCount;
    ret.m_rgPublishedFileId = this->m_rgPublishedFileId;
    ret.m_rgScore = this->m_rgScore;
    ret.m_nAppId = this->m_nAppId;
    ret.m_unStartIndex = this->m_unStartIndex;
    return ret;
}

u64_RemoteStorageEnumerateWorkshopFilesResult_t_125::operator w64_RemoteStorageEnumerateWorkshopFilesResult_t_125() const
{
    w64_RemoteStorageEnumerateWorkshopFilesResult_t_125 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nResultsReturned = this->m_nResultsReturned;
    ret.m_nTotalResultCount = this->m_nTotalResultCount;
    ret.m_rgPublishedFileId = this->m_rgPublishedFileId;
    ret.m_rgScore = this->m_rgScore;
    ret.m_nAppId = this->m_nAppId;
    ret.m_unStartIndex = this->m_unStartIndex;
    return ret;
}
#endif

#ifdef __i386__
w32_RemoteStorageEnumerateWorkshopFilesResult_t_125::operator u32_RemoteStorageEnumerateWorkshopFilesResult_t_125() const
{
    u32_RemoteStorageEnumerateWorkshopFilesResult_t_125 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nResultsReturned = this->m_nResultsReturned;
    ret.m_nTotalResultCount = this->m_nTotalResultCount;
    ret.m_rgPublishedFileId = this->m_rgPublishedFileId;
    ret.m_rgScore = this->m_rgScore;
    ret.m_nAppId = this->m_nAppId;
    ret.m_unStartIndex = this->m_unStartIndex;
    return ret;
}

u32_RemoteStorageEnumerateWorkshopFilesResult_t_125::operator w32_RemoteStorageEnumerateWorkshopFilesResult_t_125() const
{
    w32_RemoteStorageEnumerateWorkshopFilesResult_t_125 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nResultsReturned = this->m_nResultsReturned;
    ret.m_nTotalResultCount = this->m_nTotalResultCount;
    ret.m_rgPublishedFileId = this->m_rgPublishedFileId;
    ret.m_rgScore = this->m_rgScore;
    ret.m_nAppId = this->m_nAppId;
    ret.m_unStartIndex = this->m_unStartIndex;
    return ret;
}
#endif

#ifdef __x86_64__
w64_RemoteStorageEnumerateWorkshopFilesResult_t_123::operator u64_RemoteStorageEnumerateWorkshopFilesResult_t_123() const
{
    u64_RemoteStorageEnumerateWorkshopFilesResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nResultsReturned = this->m_nResultsReturned;
    ret.m_nTotalResultCount = this->m_nTotalResultCount;
    ret.m_rgPublishedFileId = this->m_rgPublishedFileId;
    ret.m_rgScore = this->m_rgScore;
    return ret;
}

u64_RemoteStorageEnumerateWorkshopFilesResult_t_123::operator w64_RemoteStorageEnumerateWorkshopFilesResult_t_123() const
{
    w64_RemoteStorageEnumerateWorkshopFilesResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nResultsReturned = this->m_nResultsReturned;
    ret.m_nTotalResultCount = this->m_nTotalResultCount;
    ret.m_rgPublishedFileId = this->m_rgPublishedFileId;
    ret.m_rgScore = this->m_rgScore;
    return ret;
}
#endif

#ifdef __i386__
w32_RemoteStorageEnumerateWorkshopFilesResult_t_123::operator u32_RemoteStorageEnumerateWorkshopFilesResult_t_123() const
{
    u32_RemoteStorageEnumerateWorkshopFilesResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nResultsReturned = this->m_nResultsReturned;
    ret.m_nTotalResultCount = this->m_nTotalResultCount;
    ret.m_rgPublishedFileId = this->m_rgPublishedFileId;
    ret.m_rgScore = this->m_rgScore;
    return ret;
}

u32_RemoteStorageEnumerateWorkshopFilesResult_t_123::operator w32_RemoteStorageEnumerateWorkshopFilesResult_t_123() const
{
    w32_RemoteStorageEnumerateWorkshopFilesResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nResultsReturned = this->m_nResultsReturned;
    ret.m_nTotalResultCount = this->m_nTotalResultCount;
    ret.m_rgPublishedFileId = this->m_rgPublishedFileId;
    ret.m_rgScore = this->m_rgScore;
    return ret;
}
#endif

#ifdef __i386__
w32_RemoteStorageEnumerateWorkshopFilesResult_t_119::operator u32_RemoteStorageEnumerateWorkshopFilesResult_t_119() const
{
    u32_RemoteStorageEnumerateWorkshopFilesResult_t_119 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nResultsReturned = this->m_nResultsReturned;
    ret.m_nTotalResultCount = this->m_nTotalResultCount;
    ret.m_rgPublishedFileId = this->m_rgPublishedFileId;
    ret.m_rgScore = this->m_rgScore;
    return ret;
}

u32_RemoteStorageEnumerateWorkshopFilesResult_t_119::operator w32_RemoteStorageEnumerateWorkshopFilesResult_t_119() const
{
    w32_RemoteStorageEnumerateWorkshopFilesResult_t_119 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nResultsReturned = this->m_nResultsReturned;
    ret.m_nTotalResultCount = this->m_nTotalResultCount;
    ret.m_rgPublishedFileId = this->m_rgPublishedFileId;
    ret.m_rgScore = this->m_rgScore;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_RemoteStorageFileShareResult_t_128x) >= 280 );
C_ASSERT( offsetof(w64_RemoteStorageFileShareResult_t_128x, m_eResult) == 0 );
C_ASSERT( sizeof(w64_RemoteStorageFileShareResult_t_128x().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageFileShareResult_t_128x, m_hFile) == 8 );
C_ASSERT( sizeof(w64_RemoteStorageFileShareResult_t_128x().m_hFile) >= 8 );
C_ASSERT( offsetof(w64_RemoteStorageFileShareResult_t_128x, m_rgchFilename) == 16 );
C_ASSERT( sizeof(w64_RemoteStorageFileShareResult_t_128x().m_rgchFilename) >= 260 );

C_ASSERT( sizeof(u64_RemoteStorageFileShareResult_t_128x) >= 272 );
C_ASSERT( offsetof(u64_RemoteStorageFileShareResult_t_128x, m_eResult) == 0 );
C_ASSERT( sizeof(u64_RemoteStorageFileShareResult_t_128x().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageFileShareResult_t_128x, m_hFile) == 4 );
C_ASSERT( sizeof(u64_RemoteStorageFileShareResult_t_128x().m_hFile) >= 8 );
C_ASSERT( offsetof(u64_RemoteStorageFileShareResult_t_128x, m_rgchFilename) == 12 );
C_ASSERT( sizeof(u64_RemoteStorageFileShareResult_t_128x().m_rgchFilename) >= 260 );

C_ASSERT( sizeof(w32_RemoteStorageFileShareResult_t_128x) >= 280 );
C_ASSERT( offsetof(w32_RemoteStorageFileShareResult_t_128x, m_eResult) == 0 );
C_ASSERT( sizeof(w32_RemoteStorageFileShareResult_t_128x().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageFileShareResult_t_128x, m_hFile) == 8 );
C_ASSERT( sizeof(w32_RemoteStorageFileShareResult_t_128x().m_hFile) >= 8 );
C_ASSERT( offsetof(w32_RemoteStorageFileShareResult_t_128x, m_rgchFilename) == 16 );
C_ASSERT( sizeof(w32_RemoteStorageFileShareResult_t_128x().m_rgchFilename) >= 260 );

C_ASSERT( sizeof(u32_RemoteStorageFileShareResult_t_128x) >= 272 );
C_ASSERT( offsetof(u32_RemoteStorageFileShareResult_t_128x, m_eResult) == 0 );
C_ASSERT( sizeof(u32_RemoteStorageFileShareResult_t_128x().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageFileShareResult_t_128x, m_hFile) == 4 );
C_ASSERT( sizeof(u32_RemoteStorageFileShareResult_t_128x().m_hFile) >= 8 );
C_ASSERT( offsetof(u32_RemoteStorageFileShareResult_t_128x, m_rgchFilename) == 12 );
C_ASSERT( sizeof(u32_RemoteStorageFileShareResult_t_128x().m_rgchFilename) >= 260 );

C_ASSERT( sizeof(w64_RemoteStorageFileShareResult_t_123) >= 16 );
C_ASSERT( offsetof(w64_RemoteStorageFileShareResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(w64_RemoteStorageFileShareResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageFileShareResult_t_123, m_hFile) == 8 );
C_ASSERT( sizeof(w64_RemoteStorageFileShareResult_t_123().m_hFile) >= 8 );

C_ASSERT( sizeof(u64_RemoteStorageFileShareResult_t_123) >= 12 );
C_ASSERT( offsetof(u64_RemoteStorageFileShareResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(u64_RemoteStorageFileShareResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageFileShareResult_t_123, m_hFile) == 4 );
C_ASSERT( sizeof(u64_RemoteStorageFileShareResult_t_123().m_hFile) >= 8 );

C_ASSERT( sizeof(w32_RemoteStorageFileShareResult_t_123) >= 16 );
C_ASSERT( offsetof(w32_RemoteStorageFileShareResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(w32_RemoteStorageFileShareResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageFileShareResult_t_123, m_hFile) == 8 );
C_ASSERT( sizeof(w32_RemoteStorageFileShareResult_t_123().m_hFile) >= 8 );

C_ASSERT( sizeof(u32_RemoteStorageFileShareResult_t_123) >= 12 );
C_ASSERT( offsetof(u32_RemoteStorageFileShareResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(u32_RemoteStorageFileShareResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageFileShareResult_t_123, m_hFile) == 4 );
C_ASSERT( sizeof(u32_RemoteStorageFileShareResult_t_123().m_hFile) >= 8 );

C_ASSERT( sizeof(w64_RemoteStorageFileShareResult_t_111x) >= 16 );
C_ASSERT( offsetof(w64_RemoteStorageFileShareResult_t_111x, m_eResult) == 0 );
C_ASSERT( sizeof(w64_RemoteStorageFileShareResult_t_111x().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageFileShareResult_t_111x, m_hFile) == 8 );
C_ASSERT( sizeof(w64_RemoteStorageFileShareResult_t_111x().m_hFile) >= 8 );

C_ASSERT( sizeof(u64_RemoteStorageFileShareResult_t_111x) >= 16 );
C_ASSERT( offsetof(u64_RemoteStorageFileShareResult_t_111x, m_eResult) == 0 );
C_ASSERT( sizeof(u64_RemoteStorageFileShareResult_t_111x().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageFileShareResult_t_111x, m_hFile) == 8 );
C_ASSERT( sizeof(u64_RemoteStorageFileShareResult_t_111x().m_hFile) >= 8 );

C_ASSERT( sizeof(w32_RemoteStorageFileShareResult_t_111x) >= 16 );
C_ASSERT( offsetof(w32_RemoteStorageFileShareResult_t_111x, m_eResult) == 0 );
C_ASSERT( sizeof(w32_RemoteStorageFileShareResult_t_111x().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageFileShareResult_t_111x, m_hFile) == 8 );
C_ASSERT( sizeof(w32_RemoteStorageFileShareResult_t_111x().m_hFile) >= 8 );

C_ASSERT( sizeof(u32_RemoteStorageFileShareResult_t_111x) >= 12 );
C_ASSERT( offsetof(u32_RemoteStorageFileShareResult_t_111x, m_eResult) == 0 );
C_ASSERT( sizeof(u32_RemoteStorageFileShareResult_t_111x().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageFileShareResult_t_111x, m_hFile) == 4 );
C_ASSERT( sizeof(u32_RemoteStorageFileShareResult_t_111x().m_hFile) >= 8 );

#ifdef __x86_64__
w64_RemoteStorageFileShareResult_t_128x::operator u64_RemoteStorageFileShareResult_t_128x() const
{
    u64_RemoteStorageFileShareResult_t_128x ret;
    ret.m_eResult = this->m_eResult;
    ret.m_hFile = this->m_hFile;
    ret.m_rgchFilename = this->m_rgchFilename;
    return ret;
}

u64_RemoteStorageFileShareResult_t_128x::operator w64_RemoteStorageFileShareResult_t_128x() const
{
    w64_RemoteStorageFileShareResult_t_128x ret;
    ret.m_eResult = this->m_eResult;
    ret.m_hFile = this->m_hFile;
    ret.m_rgchFilename = this->m_rgchFilename;
    return ret;
}
#endif

#ifdef __i386__
w32_RemoteStorageFileShareResult_t_128x::operator u32_RemoteStorageFileShareResult_t_128x() const
{
    u32_RemoteStorageFileShareResult_t_128x ret;
    ret.m_eResult = this->m_eResult;
    ret.m_hFile = this->m_hFile;
    ret.m_rgchFilename = this->m_rgchFilename;
    return ret;
}

u32_RemoteStorageFileShareResult_t_128x::operator w32_RemoteStorageFileShareResult_t_128x() const
{
    w32_RemoteStorageFileShareResult_t_128x ret;
    ret.m_eResult = this->m_eResult;
    ret.m_hFile = this->m_hFile;
    ret.m_rgchFilename = this->m_rgchFilename;
    return ret;
}
#endif

#ifdef __x86_64__
w64_RemoteStorageFileShareResult_t_123::operator u64_RemoteStorageFileShareResult_t_123() const
{
    u64_RemoteStorageFileShareResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_hFile = this->m_hFile;
    return ret;
}

u64_RemoteStorageFileShareResult_t_123::operator w64_RemoteStorageFileShareResult_t_123() const
{
    w64_RemoteStorageFileShareResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_hFile = this->m_hFile;
    return ret;
}
#endif

#ifdef __i386__
w32_RemoteStorageFileShareResult_t_123::operator u32_RemoteStorageFileShareResult_t_123() const
{
    u32_RemoteStorageFileShareResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_hFile = this->m_hFile;
    return ret;
}

u32_RemoteStorageFileShareResult_t_123::operator w32_RemoteStorageFileShareResult_t_123() const
{
    w32_RemoteStorageFileShareResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_hFile = this->m_hFile;
    return ret;
}
#endif

#ifdef __i386__
w32_RemoteStorageFileShareResult_t_111x::operator u32_RemoteStorageFileShareResult_t_111x() const
{
    u32_RemoteStorageFileShareResult_t_111x ret;
    ret.m_eResult = this->m_eResult;
    ret.m_hFile = this->m_hFile;
    return ret;
}

u32_RemoteStorageFileShareResult_t_111x::operator w32_RemoteStorageFileShareResult_t_111x() const
{
    w32_RemoteStorageFileShareResult_t_111x ret;
    ret.m_eResult = this->m_eResult;
    ret.m_hFile = this->m_hFile;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_126) >= 9760 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_126, m_eResult) == 0 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_126().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_126, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_126().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_126, m_nCreatorAppID) == 16 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_126().m_nCreatorAppID) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_126, m_nConsumerAppID) == 20 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_126().m_nConsumerAppID) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_126, m_rgchTitle) == 24 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_126().m_rgchTitle) >= 129 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_126, m_rgchDescription) == 153 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_126().m_rgchDescription) >= 8000 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_126, m_hFile) == 8160 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_126().m_hFile) >= 8 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_126, m_hPreviewFile) == 8168 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_126().m_hPreviewFile) >= 8 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_126, m_ulSteamIDOwner) == 8176 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_126().m_ulSteamIDOwner) >= 8 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_126, m_rtimeCreated) == 8184 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_126().m_rtimeCreated) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_126, m_rtimeUpdated) == 8188 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_126().m_rtimeUpdated) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_126, m_eVisibility) == 8192 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_126().m_eVisibility) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_126, m_bBanned) == 8196 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_126().m_bBanned) >= 1 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_126, m_rgchTags) == 8197 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_126().m_rgchTags) >= 1025 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_126, m_bTagsTruncated) == 9222 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_126().m_bTagsTruncated) >= 1 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_126, m_pchFileName) == 9223 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_126().m_pchFileName) >= 260 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_126, m_nFileSize) == 9484 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_126().m_nFileSize) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_126, m_nPreviewFileSize) == 9488 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_126().m_nPreviewFileSize) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_126, m_rgchURL) == 9492 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_126().m_rgchURL) >= 256 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_126, m_eFileType) == 9748 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_126().m_eFileType) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_126, m_bAcceptedForUse) == 9752 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_126().m_bAcceptedForUse) >= 1 );

C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_126) >= 9748 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_126, m_eResult) == 0 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_126().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_126, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_126().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_126, m_nCreatorAppID) == 12 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_126().m_nCreatorAppID) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_126, m_nConsumerAppID) == 16 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_126().m_nConsumerAppID) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_126, m_rgchTitle) == 20 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_126().m_rgchTitle) >= 129 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_126, m_rgchDescription) == 149 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_126().m_rgchDescription) >= 8000 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_126, m_hFile) == 8152 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_126().m_hFile) >= 8 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_126, m_hPreviewFile) == 8160 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_126().m_hPreviewFile) >= 8 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_126, m_ulSteamIDOwner) == 8168 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_126().m_ulSteamIDOwner) >= 8 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_126, m_rtimeCreated) == 8176 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_126().m_rtimeCreated) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_126, m_rtimeUpdated) == 8180 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_126().m_rtimeUpdated) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_126, m_eVisibility) == 8184 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_126().m_eVisibility) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_126, m_bBanned) == 8188 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_126().m_bBanned) >= 1 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_126, m_rgchTags) == 8189 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_126().m_rgchTags) >= 1025 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_126, m_bTagsTruncated) == 9214 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_126().m_bTagsTruncated) >= 1 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_126, m_pchFileName) == 9215 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_126().m_pchFileName) >= 260 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_126, m_nFileSize) == 9476 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_126().m_nFileSize) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_126, m_nPreviewFileSize) == 9480 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_126().m_nPreviewFileSize) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_126, m_rgchURL) == 9484 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_126().m_rgchURL) >= 256 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_126, m_eFileType) == 9740 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_126().m_eFileType) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_126, m_bAcceptedForUse) == 9744 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_126().m_bAcceptedForUse) >= 1 );

C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_126) >= 9760 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_126, m_eResult) == 0 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_126().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_126, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_126().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_126, m_nCreatorAppID) == 16 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_126().m_nCreatorAppID) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_126, m_nConsumerAppID) == 20 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_126().m_nConsumerAppID) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_126, m_rgchTitle) == 24 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_126().m_rgchTitle) >= 129 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_126, m_rgchDescription) == 153 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_126().m_rgchDescription) >= 8000 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_126, m_hFile) == 8160 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_126().m_hFile) >= 8 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_126, m_hPreviewFile) == 8168 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_126().m_hPreviewFile) >= 8 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_126, m_ulSteamIDOwner) == 8176 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_126().m_ulSteamIDOwner) >= 8 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_126, m_rtimeCreated) == 8184 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_126().m_rtimeCreated) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_126, m_rtimeUpdated) == 8188 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_126().m_rtimeUpdated) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_126, m_eVisibility) == 8192 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_126().m_eVisibility) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_126, m_bBanned) == 8196 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_126().m_bBanned) >= 1 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_126, m_rgchTags) == 8197 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_126().m_rgchTags) >= 1025 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_126, m_bTagsTruncated) == 9222 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_126().m_bTagsTruncated) >= 1 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_126, m_pchFileName) == 9223 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_126().m_pchFileName) >= 260 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_126, m_nFileSize) == 9484 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_126().m_nFileSize) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_126, m_nPreviewFileSize) == 9488 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_126().m_nPreviewFileSize) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_126, m_rgchURL) == 9492 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_126().m_rgchURL) >= 256 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_126, m_eFileType) == 9748 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_126().m_eFileType) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_126, m_bAcceptedForUse) == 9752 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_126().m_bAcceptedForUse) >= 1 );

C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_126) >= 9748 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_126, m_eResult) == 0 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_126().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_126, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_126().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_126, m_nCreatorAppID) == 12 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_126().m_nCreatorAppID) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_126, m_nConsumerAppID) == 16 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_126().m_nConsumerAppID) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_126, m_rgchTitle) == 20 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_126().m_rgchTitle) >= 129 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_126, m_rgchDescription) == 149 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_126().m_rgchDescription) >= 8000 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_126, m_hFile) == 8152 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_126().m_hFile) >= 8 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_126, m_hPreviewFile) == 8160 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_126().m_hPreviewFile) >= 8 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_126, m_ulSteamIDOwner) == 8168 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_126().m_ulSteamIDOwner) >= 8 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_126, m_rtimeCreated) == 8176 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_126().m_rtimeCreated) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_126, m_rtimeUpdated) == 8180 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_126().m_rtimeUpdated) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_126, m_eVisibility) == 8184 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_126().m_eVisibility) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_126, m_bBanned) == 8188 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_126().m_bBanned) >= 1 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_126, m_rgchTags) == 8189 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_126().m_rgchTags) >= 1025 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_126, m_bTagsTruncated) == 9214 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_126().m_bTagsTruncated) >= 1 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_126, m_pchFileName) == 9215 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_126().m_pchFileName) >= 260 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_126, m_nFileSize) == 9476 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_126().m_nFileSize) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_126, m_nPreviewFileSize) == 9480 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_126().m_nPreviewFileSize) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_126, m_rgchURL) == 9484 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_126().m_rgchURL) >= 256 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_126, m_eFileType) == 9740 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_126().m_eFileType) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_126, m_bAcceptedForUse) == 9744 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_126().m_bAcceptedForUse) >= 1 );

C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_123) >= 9752 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_123, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_123().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_123, m_nCreatorAppID) == 16 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_123().m_nCreatorAppID) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_123, m_nConsumerAppID) == 20 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_123().m_nConsumerAppID) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_123, m_rgchTitle) == 24 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_123().m_rgchTitle) >= 129 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_123, m_rgchDescription) == 153 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_123().m_rgchDescription) >= 8000 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_123, m_hFile) == 8160 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_123().m_hFile) >= 8 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_123, m_hPreviewFile) == 8168 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_123().m_hPreviewFile) >= 8 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_123, m_ulSteamIDOwner) == 8176 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_123().m_ulSteamIDOwner) >= 8 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_123, m_rtimeCreated) == 8184 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_123().m_rtimeCreated) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_123, m_rtimeUpdated) == 8188 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_123().m_rtimeUpdated) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_123, m_eVisibility) == 8192 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_123().m_eVisibility) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_123, m_bBanned) == 8196 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_123().m_bBanned) >= 1 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_123, m_rgchTags) == 8197 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_123().m_rgchTags) >= 1025 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_123, m_bTagsTruncated) == 9222 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_123().m_bTagsTruncated) >= 1 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_123, m_pchFileName) == 9223 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_123().m_pchFileName) >= 260 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_123, m_nFileSize) == 9484 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_123().m_nFileSize) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_123, m_nPreviewFileSize) == 9488 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_123().m_nPreviewFileSize) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_123, m_rgchURL) == 9492 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_123().m_rgchURL) >= 256 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_123, m_eFileType) == 9748 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_123().m_eFileType) >= 4 );

C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_123) >= 9744 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_123, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_123().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_123, m_nCreatorAppID) == 12 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_123().m_nCreatorAppID) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_123, m_nConsumerAppID) == 16 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_123().m_nConsumerAppID) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_123, m_rgchTitle) == 20 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_123().m_rgchTitle) >= 129 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_123, m_rgchDescription) == 149 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_123().m_rgchDescription) >= 8000 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_123, m_hFile) == 8152 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_123().m_hFile) >= 8 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_123, m_hPreviewFile) == 8160 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_123().m_hPreviewFile) >= 8 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_123, m_ulSteamIDOwner) == 8168 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_123().m_ulSteamIDOwner) >= 8 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_123, m_rtimeCreated) == 8176 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_123().m_rtimeCreated) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_123, m_rtimeUpdated) == 8180 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_123().m_rtimeUpdated) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_123, m_eVisibility) == 8184 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_123().m_eVisibility) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_123, m_bBanned) == 8188 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_123().m_bBanned) >= 1 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_123, m_rgchTags) == 8189 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_123().m_rgchTags) >= 1025 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_123, m_bTagsTruncated) == 9214 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_123().m_bTagsTruncated) >= 1 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_123, m_pchFileName) == 9215 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_123().m_pchFileName) >= 260 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_123, m_nFileSize) == 9476 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_123().m_nFileSize) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_123, m_nPreviewFileSize) == 9480 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_123().m_nPreviewFileSize) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_123, m_rgchURL) == 9484 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_123().m_rgchURL) >= 256 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_123, m_eFileType) == 9740 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_123().m_eFileType) >= 4 );

C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_123) >= 9752 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_123, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_123().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_123, m_nCreatorAppID) == 16 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_123().m_nCreatorAppID) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_123, m_nConsumerAppID) == 20 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_123().m_nConsumerAppID) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_123, m_rgchTitle) == 24 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_123().m_rgchTitle) >= 129 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_123, m_rgchDescription) == 153 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_123().m_rgchDescription) >= 8000 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_123, m_hFile) == 8160 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_123().m_hFile) >= 8 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_123, m_hPreviewFile) == 8168 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_123().m_hPreviewFile) >= 8 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_123, m_ulSteamIDOwner) == 8176 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_123().m_ulSteamIDOwner) >= 8 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_123, m_rtimeCreated) == 8184 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_123().m_rtimeCreated) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_123, m_rtimeUpdated) == 8188 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_123().m_rtimeUpdated) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_123, m_eVisibility) == 8192 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_123().m_eVisibility) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_123, m_bBanned) == 8196 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_123().m_bBanned) >= 1 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_123, m_rgchTags) == 8197 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_123().m_rgchTags) >= 1025 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_123, m_bTagsTruncated) == 9222 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_123().m_bTagsTruncated) >= 1 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_123, m_pchFileName) == 9223 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_123().m_pchFileName) >= 260 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_123, m_nFileSize) == 9484 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_123().m_nFileSize) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_123, m_nPreviewFileSize) == 9488 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_123().m_nPreviewFileSize) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_123, m_rgchURL) == 9492 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_123().m_rgchURL) >= 256 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_123, m_eFileType) == 9748 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_123().m_eFileType) >= 4 );

C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_123) >= 9744 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_123, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_123().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_123, m_nCreatorAppID) == 12 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_123().m_nCreatorAppID) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_123, m_nConsumerAppID) == 16 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_123().m_nConsumerAppID) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_123, m_rgchTitle) == 20 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_123().m_rgchTitle) >= 129 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_123, m_rgchDescription) == 149 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_123().m_rgchDescription) >= 8000 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_123, m_hFile) == 8152 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_123().m_hFile) >= 8 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_123, m_hPreviewFile) == 8160 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_123().m_hPreviewFile) >= 8 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_123, m_ulSteamIDOwner) == 8168 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_123().m_ulSteamIDOwner) >= 8 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_123, m_rtimeCreated) == 8176 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_123().m_rtimeCreated) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_123, m_rtimeUpdated) == 8180 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_123().m_rtimeUpdated) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_123, m_eVisibility) == 8184 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_123().m_eVisibility) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_123, m_bBanned) == 8188 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_123().m_bBanned) >= 1 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_123, m_rgchTags) == 8189 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_123().m_rgchTags) >= 1025 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_123, m_bTagsTruncated) == 9214 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_123().m_bTagsTruncated) >= 1 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_123, m_pchFileName) == 9215 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_123().m_pchFileName) >= 260 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_123, m_nFileSize) == 9476 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_123().m_nFileSize) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_123, m_nPreviewFileSize) == 9480 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_123().m_nPreviewFileSize) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_123, m_rgchURL) == 9484 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_123().m_rgchURL) >= 256 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_123, m_eFileType) == 9740 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_123().m_eFileType) >= 4 );

C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119x) >= 9752 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_eResult) == 0 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_nCreatorAppID) == 16 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_nCreatorAppID) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_nConsumerAppID) == 20 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_nConsumerAppID) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_rgchTitle) == 24 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_rgchTitle) >= 129 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_rgchDescription) == 153 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_rgchDescription) >= 8000 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_hFile) == 8160 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_hFile) >= 8 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_hPreviewFile) == 8168 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_hPreviewFile) >= 8 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_ulSteamIDOwner) == 8176 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_ulSteamIDOwner) >= 8 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_rtimeCreated) == 8184 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_rtimeCreated) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_rtimeUpdated) == 8188 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_rtimeUpdated) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_eVisibility) == 8192 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_eVisibility) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_bBanned) == 8196 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_bBanned) >= 1 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_rgchTags) == 8197 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_rgchTags) >= 1025 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_bTagsTruncated) == 9222 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_bTagsTruncated) >= 1 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_pchFileName) == 9223 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_pchFileName) >= 260 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_nFileSize) == 9484 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_nFileSize) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_nPreviewFileSize) == 9488 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_nPreviewFileSize) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_rgchURL) == 9492 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_rgchURL) >= 256 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_eFileType) == 9748 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_eFileType) >= 4 );

C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119x) >= 9752 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_eResult) == 0 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_nCreatorAppID) == 16 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_nCreatorAppID) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_nConsumerAppID) == 20 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_nConsumerAppID) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_rgchTitle) == 24 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_rgchTitle) >= 129 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_rgchDescription) == 153 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_rgchDescription) >= 8000 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_hFile) == 8160 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_hFile) >= 8 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_hPreviewFile) == 8168 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_hPreviewFile) >= 8 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_ulSteamIDOwner) == 8176 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_ulSteamIDOwner) >= 8 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_rtimeCreated) == 8184 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_rtimeCreated) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_rtimeUpdated) == 8188 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_rtimeUpdated) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_eVisibility) == 8192 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_eVisibility) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_bBanned) == 8196 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_bBanned) >= 1 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_rgchTags) == 8197 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_rgchTags) >= 1025 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_bTagsTruncated) == 9222 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_bTagsTruncated) >= 1 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_pchFileName) == 9223 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_pchFileName) >= 260 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_nFileSize) == 9484 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_nFileSize) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_nPreviewFileSize) == 9488 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_nPreviewFileSize) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_rgchURL) == 9492 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_rgchURL) >= 256 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_eFileType) == 9748 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_eFileType) >= 4 );

C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119x) >= 9752 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_eResult) == 0 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_nCreatorAppID) == 16 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_nCreatorAppID) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_nConsumerAppID) == 20 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_nConsumerAppID) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_rgchTitle) == 24 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_rgchTitle) >= 129 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_rgchDescription) == 153 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_rgchDescription) >= 8000 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_hFile) == 8160 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_hFile) >= 8 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_hPreviewFile) == 8168 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_hPreviewFile) >= 8 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_ulSteamIDOwner) == 8176 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_ulSteamIDOwner) >= 8 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_rtimeCreated) == 8184 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_rtimeCreated) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_rtimeUpdated) == 8188 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_rtimeUpdated) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_eVisibility) == 8192 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_eVisibility) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_bBanned) == 8196 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_bBanned) >= 1 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_rgchTags) == 8197 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_rgchTags) >= 1025 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_bTagsTruncated) == 9222 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_bTagsTruncated) >= 1 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_pchFileName) == 9223 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_pchFileName) >= 260 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_nFileSize) == 9484 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_nFileSize) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_nPreviewFileSize) == 9488 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_nPreviewFileSize) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_rgchURL) == 9492 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_rgchURL) >= 256 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_eFileType) == 9748 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_eFileType) >= 4 );

C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119x) >= 9744 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_eResult) == 0 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_nCreatorAppID) == 12 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_nCreatorAppID) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_nConsumerAppID) == 16 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_nConsumerAppID) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_rgchTitle) == 20 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_rgchTitle) >= 129 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_rgchDescription) == 149 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_rgchDescription) >= 8000 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_hFile) == 8152 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_hFile) >= 8 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_hPreviewFile) == 8160 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_hPreviewFile) >= 8 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_ulSteamIDOwner) == 8168 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_ulSteamIDOwner) >= 8 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_rtimeCreated) == 8176 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_rtimeCreated) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_rtimeUpdated) == 8180 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_rtimeUpdated) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_eVisibility) == 8184 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_eVisibility) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_bBanned) == 8188 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_bBanned) >= 1 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_rgchTags) == 8189 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_rgchTags) >= 1025 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_bTagsTruncated) == 9214 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_bTagsTruncated) >= 1 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_pchFileName) == 9215 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_pchFileName) >= 260 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_nFileSize) == 9476 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_nFileSize) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_nPreviewFileSize) == 9480 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_nPreviewFileSize) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_rgchURL) == 9484 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_rgchURL) >= 256 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119x, m_eFileType) == 9740 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119x().m_eFileType) >= 4 );

C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119) >= 9752 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119, m_eResult) == 0 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119, m_nCreatorAppID) == 16 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119().m_nCreatorAppID) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119, m_nConsumerAppID) == 20 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119().m_nConsumerAppID) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119, m_rgchTitle) == 24 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119().m_rgchTitle) >= 129 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119, m_rgchDescription) == 153 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119().m_rgchDescription) >= 8000 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119, m_hFile) == 8160 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119().m_hFile) >= 8 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119, m_hPreviewFile) == 8168 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119().m_hPreviewFile) >= 8 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119, m_ulSteamIDOwner) == 8176 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119().m_ulSteamIDOwner) >= 8 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119, m_rtimeCreated) == 8184 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119().m_rtimeCreated) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119, m_rtimeUpdated) == 8188 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119().m_rtimeUpdated) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119, m_eVisibility) == 8192 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119().m_eVisibility) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119, m_bBanned) == 8196 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119().m_bBanned) >= 1 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119, m_rgchTags) == 8197 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119().m_rgchTags) >= 1025 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119, m_bTagsTruncated) == 9222 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119().m_bTagsTruncated) >= 1 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119, m_pchFileName) == 9223 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119().m_pchFileName) >= 260 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119, m_nFileSize) == 9484 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119().m_nFileSize) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119, m_nPreviewFileSize) == 9488 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119().m_nPreviewFileSize) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119, m_rgchURL) == 9492 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_119().m_rgchURL) >= 256 );

C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119) >= 9752 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119, m_eResult) == 0 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119, m_nCreatorAppID) == 16 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119().m_nCreatorAppID) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119, m_nConsumerAppID) == 20 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119().m_nConsumerAppID) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119, m_rgchTitle) == 24 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119().m_rgchTitle) >= 129 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119, m_rgchDescription) == 153 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119().m_rgchDescription) >= 8000 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119, m_hFile) == 8160 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119().m_hFile) >= 8 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119, m_hPreviewFile) == 8168 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119().m_hPreviewFile) >= 8 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119, m_ulSteamIDOwner) == 8176 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119().m_ulSteamIDOwner) >= 8 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119, m_rtimeCreated) == 8184 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119().m_rtimeCreated) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119, m_rtimeUpdated) == 8188 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119().m_rtimeUpdated) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119, m_eVisibility) == 8192 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119().m_eVisibility) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119, m_bBanned) == 8196 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119().m_bBanned) >= 1 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119, m_rgchTags) == 8197 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119().m_rgchTags) >= 1025 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119, m_bTagsTruncated) == 9222 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119().m_bTagsTruncated) >= 1 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119, m_pchFileName) == 9223 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119().m_pchFileName) >= 260 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119, m_nFileSize) == 9484 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119().m_nFileSize) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119, m_nPreviewFileSize) == 9488 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119().m_nPreviewFileSize) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119, m_rgchURL) == 9492 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_119().m_rgchURL) >= 256 );

C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119) >= 9752 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119, m_eResult) == 0 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119, m_nCreatorAppID) == 16 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119().m_nCreatorAppID) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119, m_nConsumerAppID) == 20 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119().m_nConsumerAppID) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119, m_rgchTitle) == 24 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119().m_rgchTitle) >= 129 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119, m_rgchDescription) == 153 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119().m_rgchDescription) >= 8000 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119, m_hFile) == 8160 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119().m_hFile) >= 8 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119, m_hPreviewFile) == 8168 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119().m_hPreviewFile) >= 8 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119, m_ulSteamIDOwner) == 8176 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119().m_ulSteamIDOwner) >= 8 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119, m_rtimeCreated) == 8184 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119().m_rtimeCreated) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119, m_rtimeUpdated) == 8188 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119().m_rtimeUpdated) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119, m_eVisibility) == 8192 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119().m_eVisibility) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119, m_bBanned) == 8196 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119().m_bBanned) >= 1 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119, m_rgchTags) == 8197 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119().m_rgchTags) >= 1025 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119, m_bTagsTruncated) == 9222 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119().m_bTagsTruncated) >= 1 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119, m_pchFileName) == 9223 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119().m_pchFileName) >= 260 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119, m_nFileSize) == 9484 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119().m_nFileSize) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119, m_nPreviewFileSize) == 9488 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119().m_nPreviewFileSize) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119, m_rgchURL) == 9492 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_119().m_rgchURL) >= 256 );

C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119) >= 9740 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119, m_eResult) == 0 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119, m_nCreatorAppID) == 12 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119().m_nCreatorAppID) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119, m_nConsumerAppID) == 16 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119().m_nConsumerAppID) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119, m_rgchTitle) == 20 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119().m_rgchTitle) >= 129 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119, m_rgchDescription) == 149 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119().m_rgchDescription) >= 8000 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119, m_hFile) == 8152 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119().m_hFile) >= 8 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119, m_hPreviewFile) == 8160 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119().m_hPreviewFile) >= 8 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119, m_ulSteamIDOwner) == 8168 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119().m_ulSteamIDOwner) >= 8 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119, m_rtimeCreated) == 8176 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119().m_rtimeCreated) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119, m_rtimeUpdated) == 8180 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119().m_rtimeUpdated) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119, m_eVisibility) == 8184 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119().m_eVisibility) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119, m_bBanned) == 8188 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119().m_bBanned) >= 1 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119, m_rgchTags) == 8189 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119().m_rgchTags) >= 1025 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119, m_bTagsTruncated) == 9214 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119().m_bTagsTruncated) >= 1 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119, m_pchFileName) == 9215 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119().m_pchFileName) >= 260 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119, m_nFileSize) == 9476 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119().m_nFileSize) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119, m_nPreviewFileSize) == 9480 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119().m_nPreviewFileSize) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119, m_rgchURL) == 9484 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_119().m_rgchURL) >= 256 );

C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_118) >= 9496 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_118, m_eResult) == 0 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_118().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_118, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_118().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_118, m_nCreatorAppID) == 16 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_118().m_nCreatorAppID) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_118, m_nConsumerAppID) == 20 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_118().m_nConsumerAppID) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_118, m_rgchTitle) == 24 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_118().m_rgchTitle) >= 129 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_118, m_rgchDescription) == 153 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_118().m_rgchDescription) >= 8000 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_118, m_hFile) == 8160 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_118().m_hFile) >= 8 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_118, m_hPreviewFile) == 8168 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_118().m_hPreviewFile) >= 8 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_118, m_ulSteamIDOwner) == 8176 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_118().m_ulSteamIDOwner) >= 8 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_118, m_rtimeCreated) == 8184 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_118().m_rtimeCreated) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_118, m_rtimeUpdated) == 8188 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_118().m_rtimeUpdated) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_118, m_eVisibility) == 8192 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_118().m_eVisibility) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_118, m_bBanned) == 8196 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_118().m_bBanned) >= 1 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_118, m_rgchTags) == 8197 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_118().m_rgchTags) >= 1025 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_118, m_bTagsTruncated) == 9222 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_118().m_bTagsTruncated) >= 1 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_118, m_pchFileName) == 9223 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_118().m_pchFileName) >= 260 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_118, m_nFileSize) == 9484 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_118().m_nFileSize) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_118, m_nPreviewFileSize) == 9488 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_118().m_nPreviewFileSize) >= 4 );

C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_118) >= 9496 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_118, m_eResult) == 0 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_118().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_118, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_118().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_118, m_nCreatorAppID) == 16 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_118().m_nCreatorAppID) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_118, m_nConsumerAppID) == 20 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_118().m_nConsumerAppID) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_118, m_rgchTitle) == 24 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_118().m_rgchTitle) >= 129 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_118, m_rgchDescription) == 153 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_118().m_rgchDescription) >= 8000 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_118, m_hFile) == 8160 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_118().m_hFile) >= 8 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_118, m_hPreviewFile) == 8168 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_118().m_hPreviewFile) >= 8 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_118, m_ulSteamIDOwner) == 8176 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_118().m_ulSteamIDOwner) >= 8 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_118, m_rtimeCreated) == 8184 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_118().m_rtimeCreated) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_118, m_rtimeUpdated) == 8188 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_118().m_rtimeUpdated) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_118, m_eVisibility) == 8192 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_118().m_eVisibility) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_118, m_bBanned) == 8196 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_118().m_bBanned) >= 1 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_118, m_rgchTags) == 8197 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_118().m_rgchTags) >= 1025 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_118, m_bTagsTruncated) == 9222 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_118().m_bTagsTruncated) >= 1 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_118, m_pchFileName) == 9223 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_118().m_pchFileName) >= 260 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_118, m_nFileSize) == 9484 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_118().m_nFileSize) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_118, m_nPreviewFileSize) == 9488 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_118().m_nPreviewFileSize) >= 4 );

C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_118) >= 9496 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_118, m_eResult) == 0 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_118().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_118, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_118().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_118, m_nCreatorAppID) == 16 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_118().m_nCreatorAppID) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_118, m_nConsumerAppID) == 20 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_118().m_nConsumerAppID) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_118, m_rgchTitle) == 24 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_118().m_rgchTitle) >= 129 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_118, m_rgchDescription) == 153 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_118().m_rgchDescription) >= 8000 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_118, m_hFile) == 8160 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_118().m_hFile) >= 8 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_118, m_hPreviewFile) == 8168 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_118().m_hPreviewFile) >= 8 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_118, m_ulSteamIDOwner) == 8176 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_118().m_ulSteamIDOwner) >= 8 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_118, m_rtimeCreated) == 8184 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_118().m_rtimeCreated) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_118, m_rtimeUpdated) == 8188 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_118().m_rtimeUpdated) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_118, m_eVisibility) == 8192 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_118().m_eVisibility) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_118, m_bBanned) == 8196 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_118().m_bBanned) >= 1 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_118, m_rgchTags) == 8197 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_118().m_rgchTags) >= 1025 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_118, m_bTagsTruncated) == 9222 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_118().m_bTagsTruncated) >= 1 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_118, m_pchFileName) == 9223 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_118().m_pchFileName) >= 260 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_118, m_nFileSize) == 9484 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_118().m_nFileSize) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_118, m_nPreviewFileSize) == 9488 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_118().m_nPreviewFileSize) >= 4 );

C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_118) >= 9484 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_118, m_eResult) == 0 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_118().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_118, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_118().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_118, m_nCreatorAppID) == 12 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_118().m_nCreatorAppID) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_118, m_nConsumerAppID) == 16 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_118().m_nConsumerAppID) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_118, m_rgchTitle) == 20 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_118().m_rgchTitle) >= 129 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_118, m_rgchDescription) == 149 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_118().m_rgchDescription) >= 8000 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_118, m_hFile) == 8152 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_118().m_hFile) >= 8 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_118, m_hPreviewFile) == 8160 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_118().m_hPreviewFile) >= 8 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_118, m_ulSteamIDOwner) == 8168 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_118().m_ulSteamIDOwner) >= 8 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_118, m_rtimeCreated) == 8176 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_118().m_rtimeCreated) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_118, m_rtimeUpdated) == 8180 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_118().m_rtimeUpdated) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_118, m_eVisibility) == 8184 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_118().m_eVisibility) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_118, m_bBanned) == 8188 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_118().m_bBanned) >= 1 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_118, m_rgchTags) == 8189 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_118().m_rgchTags) >= 1025 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_118, m_bTagsTruncated) == 9214 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_118().m_bTagsTruncated) >= 1 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_118, m_pchFileName) == 9215 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_118().m_pchFileName) >= 260 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_118, m_nFileSize) == 9476 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_118().m_nFileSize) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_118, m_nPreviewFileSize) == 9480 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_118().m_nPreviewFileSize) >= 4 );

C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_116x) >= 1744 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_eResult) == 0 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_nCreatorAppID) == 16 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_nCreatorAppID) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_nConsumerAppID) == 20 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_nConsumerAppID) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_rgchTitle) == 24 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_rgchTitle) >= 129 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_rgchDescription) == 153 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_rgchDescription) >= 257 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_hFile) == 416 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_hFile) >= 8 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_hPreviewFile) == 424 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_hPreviewFile) >= 8 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_ulSteamIDOwner) == 432 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_ulSteamIDOwner) >= 8 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_rtimeCreated) == 440 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_rtimeCreated) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_rtimeUpdated) == 444 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_rtimeUpdated) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_eVisibility) == 448 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_eVisibility) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_bBanned) == 452 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_bBanned) >= 1 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_rgchTags) == 453 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_rgchTags) >= 1025 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_bTagsTruncated) == 1478 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_bTagsTruncated) >= 1 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_pchFileName) == 1479 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_pchFileName) >= 260 );

C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_116x) >= 1744 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_eResult) == 0 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_nCreatorAppID) == 16 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_nCreatorAppID) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_nConsumerAppID) == 20 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_nConsumerAppID) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_rgchTitle) == 24 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_rgchTitle) >= 129 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_rgchDescription) == 153 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_rgchDescription) >= 257 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_hFile) == 416 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_hFile) >= 8 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_hPreviewFile) == 424 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_hPreviewFile) >= 8 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_ulSteamIDOwner) == 432 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_ulSteamIDOwner) >= 8 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_rtimeCreated) == 440 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_rtimeCreated) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_rtimeUpdated) == 444 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_rtimeUpdated) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_eVisibility) == 448 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_eVisibility) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_bBanned) == 452 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_bBanned) >= 1 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_rgchTags) == 453 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_rgchTags) >= 1025 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_bTagsTruncated) == 1478 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_bTagsTruncated) >= 1 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_pchFileName) == 1479 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_pchFileName) >= 260 );

C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_116x) >= 1744 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_eResult) == 0 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_nCreatorAppID) == 16 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_nCreatorAppID) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_nConsumerAppID) == 20 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_nConsumerAppID) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_rgchTitle) == 24 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_rgchTitle) >= 129 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_rgchDescription) == 153 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_rgchDescription) >= 257 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_hFile) == 416 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_hFile) >= 8 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_hPreviewFile) == 424 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_hPreviewFile) >= 8 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_ulSteamIDOwner) == 432 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_ulSteamIDOwner) >= 8 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_rtimeCreated) == 440 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_rtimeCreated) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_rtimeUpdated) == 444 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_rtimeUpdated) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_eVisibility) == 448 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_eVisibility) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_bBanned) == 452 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_bBanned) >= 1 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_rgchTags) == 453 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_rgchTags) >= 1025 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_bTagsTruncated) == 1478 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_bTagsTruncated) >= 1 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_pchFileName) == 1479 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_pchFileName) >= 260 );

C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_116x) >= 1732 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_eResult) == 0 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_nCreatorAppID) == 12 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_nCreatorAppID) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_nConsumerAppID) == 16 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_nConsumerAppID) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_rgchTitle) == 20 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_rgchTitle) >= 129 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_rgchDescription) == 149 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_rgchDescription) >= 257 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_hFile) == 408 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_hFile) >= 8 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_hPreviewFile) == 416 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_hPreviewFile) >= 8 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_ulSteamIDOwner) == 424 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_ulSteamIDOwner) >= 8 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_rtimeCreated) == 432 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_rtimeCreated) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_rtimeUpdated) == 436 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_rtimeUpdated) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_eVisibility) == 440 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_eVisibility) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_bBanned) == 444 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_bBanned) >= 1 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_rgchTags) == 445 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_rgchTags) >= 1025 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_bTagsTruncated) == 1470 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_bTagsTruncated) >= 1 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedFileDetailsResult_t_116x, m_pchFileName) == 1471 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedFileDetailsResult_t_116x().m_pchFileName) >= 260 );

#ifdef __x86_64__
w64_RemoteStorageGetPublishedFileDetailsResult_t_126::operator u64_RemoteStorageGetPublishedFileDetailsResult_t_126() const
{
    u64_RemoteStorageGetPublishedFileDetailsResult_t_126 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_nCreatorAppID = this->m_nCreatorAppID;
    ret.m_nConsumerAppID = this->m_nConsumerAppID;
    ret.m_rgchTitle = this->m_rgchTitle;
    ret.m_rgchDescription = this->m_rgchDescription;
    ret.m_hFile = this->m_hFile;
    ret.m_hPreviewFile = this->m_hPreviewFile;
    ret.m_ulSteamIDOwner = this->m_ulSteamIDOwner;
    ret.m_rtimeCreated = this->m_rtimeCreated;
    ret.m_rtimeUpdated = this->m_rtimeUpdated;
    ret.m_eVisibility = this->m_eVisibility;
    ret.m_bBanned = this->m_bBanned;
    ret.m_rgchTags = this->m_rgchTags;
    ret.m_bTagsTruncated = this->m_bTagsTruncated;
    ret.m_pchFileName = this->m_pchFileName;
    ret.m_nFileSize = this->m_nFileSize;
    ret.m_nPreviewFileSize = this->m_nPreviewFileSize;
    ret.m_rgchURL = this->m_rgchURL;
    ret.m_eFileType = this->m_eFileType;
    ret.m_bAcceptedForUse = this->m_bAcceptedForUse;
    return ret;
}

u64_RemoteStorageGetPublishedFileDetailsResult_t_126::operator w64_RemoteStorageGetPublishedFileDetailsResult_t_126() const
{
    w64_RemoteStorageGetPublishedFileDetailsResult_t_126 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_nCreatorAppID = this->m_nCreatorAppID;
    ret.m_nConsumerAppID = this->m_nConsumerAppID;
    ret.m_rgchTitle = this->m_rgchTitle;
    ret.m_rgchDescription = this->m_rgchDescription;
    ret.m_hFile = this->m_hFile;
    ret.m_hPreviewFile = this->m_hPreviewFile;
    ret.m_ulSteamIDOwner = this->m_ulSteamIDOwner;
    ret.m_rtimeCreated = this->m_rtimeCreated;
    ret.m_rtimeUpdated = this->m_rtimeUpdated;
    ret.m_eVisibility = this->m_eVisibility;
    ret.m_bBanned = this->m_bBanned;
    ret.m_rgchTags = this->m_rgchTags;
    ret.m_bTagsTruncated = this->m_bTagsTruncated;
    ret.m_pchFileName = this->m_pchFileName;
    ret.m_nFileSize = this->m_nFileSize;
    ret.m_nPreviewFileSize = this->m_nPreviewFileSize;
    ret.m_rgchURL = this->m_rgchURL;
    ret.m_eFileType = this->m_eFileType;
    ret.m_bAcceptedForUse = this->m_bAcceptedForUse;
    return ret;
}
#endif

#ifdef __i386__
w32_RemoteStorageGetPublishedFileDetailsResult_t_126::operator u32_RemoteStorageGetPublishedFileDetailsResult_t_126() const
{
    u32_RemoteStorageGetPublishedFileDetailsResult_t_126 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_nCreatorAppID = this->m_nCreatorAppID;
    ret.m_nConsumerAppID = this->m_nConsumerAppID;
    ret.m_rgchTitle = this->m_rgchTitle;
    ret.m_rgchDescription = this->m_rgchDescription;
    ret.m_hFile = this->m_hFile;
    ret.m_hPreviewFile = this->m_hPreviewFile;
    ret.m_ulSteamIDOwner = this->m_ulSteamIDOwner;
    ret.m_rtimeCreated = this->m_rtimeCreated;
    ret.m_rtimeUpdated = this->m_rtimeUpdated;
    ret.m_eVisibility = this->m_eVisibility;
    ret.m_bBanned = this->m_bBanned;
    ret.m_rgchTags = this->m_rgchTags;
    ret.m_bTagsTruncated = this->m_bTagsTruncated;
    ret.m_pchFileName = this->m_pchFileName;
    ret.m_nFileSize = this->m_nFileSize;
    ret.m_nPreviewFileSize = this->m_nPreviewFileSize;
    ret.m_rgchURL = this->m_rgchURL;
    ret.m_eFileType = this->m_eFileType;
    ret.m_bAcceptedForUse = this->m_bAcceptedForUse;
    return ret;
}

u32_RemoteStorageGetPublishedFileDetailsResult_t_126::operator w32_RemoteStorageGetPublishedFileDetailsResult_t_126() const
{
    w32_RemoteStorageGetPublishedFileDetailsResult_t_126 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_nCreatorAppID = this->m_nCreatorAppID;
    ret.m_nConsumerAppID = this->m_nConsumerAppID;
    ret.m_rgchTitle = this->m_rgchTitle;
    ret.m_rgchDescription = this->m_rgchDescription;
    ret.m_hFile = this->m_hFile;
    ret.m_hPreviewFile = this->m_hPreviewFile;
    ret.m_ulSteamIDOwner = this->m_ulSteamIDOwner;
    ret.m_rtimeCreated = this->m_rtimeCreated;
    ret.m_rtimeUpdated = this->m_rtimeUpdated;
    ret.m_eVisibility = this->m_eVisibility;
    ret.m_bBanned = this->m_bBanned;
    ret.m_rgchTags = this->m_rgchTags;
    ret.m_bTagsTruncated = this->m_bTagsTruncated;
    ret.m_pchFileName = this->m_pchFileName;
    ret.m_nFileSize = this->m_nFileSize;
    ret.m_nPreviewFileSize = this->m_nPreviewFileSize;
    ret.m_rgchURL = this->m_rgchURL;
    ret.m_eFileType = this->m_eFileType;
    ret.m_bAcceptedForUse = this->m_bAcceptedForUse;
    return ret;
}
#endif

#ifdef __x86_64__
w64_RemoteStorageGetPublishedFileDetailsResult_t_123::operator u64_RemoteStorageGetPublishedFileDetailsResult_t_123() const
{
    u64_RemoteStorageGetPublishedFileDetailsResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_nCreatorAppID = this->m_nCreatorAppID;
    ret.m_nConsumerAppID = this->m_nConsumerAppID;
    ret.m_rgchTitle = this->m_rgchTitle;
    ret.m_rgchDescription = this->m_rgchDescription;
    ret.m_hFile = this->m_hFile;
    ret.m_hPreviewFile = this->m_hPreviewFile;
    ret.m_ulSteamIDOwner = this->m_ulSteamIDOwner;
    ret.m_rtimeCreated = this->m_rtimeCreated;
    ret.m_rtimeUpdated = this->m_rtimeUpdated;
    ret.m_eVisibility = this->m_eVisibility;
    ret.m_bBanned = this->m_bBanned;
    ret.m_rgchTags = this->m_rgchTags;
    ret.m_bTagsTruncated = this->m_bTagsTruncated;
    ret.m_pchFileName = this->m_pchFileName;
    ret.m_nFileSize = this->m_nFileSize;
    ret.m_nPreviewFileSize = this->m_nPreviewFileSize;
    ret.m_rgchURL = this->m_rgchURL;
    ret.m_eFileType = this->m_eFileType;
    return ret;
}

u64_RemoteStorageGetPublishedFileDetailsResult_t_123::operator w64_RemoteStorageGetPublishedFileDetailsResult_t_123() const
{
    w64_RemoteStorageGetPublishedFileDetailsResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_nCreatorAppID = this->m_nCreatorAppID;
    ret.m_nConsumerAppID = this->m_nConsumerAppID;
    ret.m_rgchTitle = this->m_rgchTitle;
    ret.m_rgchDescription = this->m_rgchDescription;
    ret.m_hFile = this->m_hFile;
    ret.m_hPreviewFile = this->m_hPreviewFile;
    ret.m_ulSteamIDOwner = this->m_ulSteamIDOwner;
    ret.m_rtimeCreated = this->m_rtimeCreated;
    ret.m_rtimeUpdated = this->m_rtimeUpdated;
    ret.m_eVisibility = this->m_eVisibility;
    ret.m_bBanned = this->m_bBanned;
    ret.m_rgchTags = this->m_rgchTags;
    ret.m_bTagsTruncated = this->m_bTagsTruncated;
    ret.m_pchFileName = this->m_pchFileName;
    ret.m_nFileSize = this->m_nFileSize;
    ret.m_nPreviewFileSize = this->m_nPreviewFileSize;
    ret.m_rgchURL = this->m_rgchURL;
    ret.m_eFileType = this->m_eFileType;
    return ret;
}
#endif

#ifdef __i386__
w32_RemoteStorageGetPublishedFileDetailsResult_t_123::operator u32_RemoteStorageGetPublishedFileDetailsResult_t_123() const
{
    u32_RemoteStorageGetPublishedFileDetailsResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_nCreatorAppID = this->m_nCreatorAppID;
    ret.m_nConsumerAppID = this->m_nConsumerAppID;
    ret.m_rgchTitle = this->m_rgchTitle;
    ret.m_rgchDescription = this->m_rgchDescription;
    ret.m_hFile = this->m_hFile;
    ret.m_hPreviewFile = this->m_hPreviewFile;
    ret.m_ulSteamIDOwner = this->m_ulSteamIDOwner;
    ret.m_rtimeCreated = this->m_rtimeCreated;
    ret.m_rtimeUpdated = this->m_rtimeUpdated;
    ret.m_eVisibility = this->m_eVisibility;
    ret.m_bBanned = this->m_bBanned;
    ret.m_rgchTags = this->m_rgchTags;
    ret.m_bTagsTruncated = this->m_bTagsTruncated;
    ret.m_pchFileName = this->m_pchFileName;
    ret.m_nFileSize = this->m_nFileSize;
    ret.m_nPreviewFileSize = this->m_nPreviewFileSize;
    ret.m_rgchURL = this->m_rgchURL;
    ret.m_eFileType = this->m_eFileType;
    return ret;
}

u32_RemoteStorageGetPublishedFileDetailsResult_t_123::operator w32_RemoteStorageGetPublishedFileDetailsResult_t_123() const
{
    w32_RemoteStorageGetPublishedFileDetailsResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_nCreatorAppID = this->m_nCreatorAppID;
    ret.m_nConsumerAppID = this->m_nConsumerAppID;
    ret.m_rgchTitle = this->m_rgchTitle;
    ret.m_rgchDescription = this->m_rgchDescription;
    ret.m_hFile = this->m_hFile;
    ret.m_hPreviewFile = this->m_hPreviewFile;
    ret.m_ulSteamIDOwner = this->m_ulSteamIDOwner;
    ret.m_rtimeCreated = this->m_rtimeCreated;
    ret.m_rtimeUpdated = this->m_rtimeUpdated;
    ret.m_eVisibility = this->m_eVisibility;
    ret.m_bBanned = this->m_bBanned;
    ret.m_rgchTags = this->m_rgchTags;
    ret.m_bTagsTruncated = this->m_bTagsTruncated;
    ret.m_pchFileName = this->m_pchFileName;
    ret.m_nFileSize = this->m_nFileSize;
    ret.m_nPreviewFileSize = this->m_nPreviewFileSize;
    ret.m_rgchURL = this->m_rgchURL;
    ret.m_eFileType = this->m_eFileType;
    return ret;
}
#endif

#ifdef __i386__
w32_RemoteStorageGetPublishedFileDetailsResult_t_119x::operator u32_RemoteStorageGetPublishedFileDetailsResult_t_119x() const
{
    u32_RemoteStorageGetPublishedFileDetailsResult_t_119x ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_nCreatorAppID = this->m_nCreatorAppID;
    ret.m_nConsumerAppID = this->m_nConsumerAppID;
    ret.m_rgchTitle = this->m_rgchTitle;
    ret.m_rgchDescription = this->m_rgchDescription;
    ret.m_hFile = this->m_hFile;
    ret.m_hPreviewFile = this->m_hPreviewFile;
    ret.m_ulSteamIDOwner = this->m_ulSteamIDOwner;
    ret.m_rtimeCreated = this->m_rtimeCreated;
    ret.m_rtimeUpdated = this->m_rtimeUpdated;
    ret.m_eVisibility = this->m_eVisibility;
    ret.m_bBanned = this->m_bBanned;
    ret.m_rgchTags = this->m_rgchTags;
    ret.m_bTagsTruncated = this->m_bTagsTruncated;
    ret.m_pchFileName = this->m_pchFileName;
    ret.m_nFileSize = this->m_nFileSize;
    ret.m_nPreviewFileSize = this->m_nPreviewFileSize;
    ret.m_rgchURL = this->m_rgchURL;
    ret.m_eFileType = this->m_eFileType;
    return ret;
}

u32_RemoteStorageGetPublishedFileDetailsResult_t_119x::operator w32_RemoteStorageGetPublishedFileDetailsResult_t_119x() const
{
    w32_RemoteStorageGetPublishedFileDetailsResult_t_119x ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_nCreatorAppID = this->m_nCreatorAppID;
    ret.m_nConsumerAppID = this->m_nConsumerAppID;
    ret.m_rgchTitle = this->m_rgchTitle;
    ret.m_rgchDescription = this->m_rgchDescription;
    ret.m_hFile = this->m_hFile;
    ret.m_hPreviewFile = this->m_hPreviewFile;
    ret.m_ulSteamIDOwner = this->m_ulSteamIDOwner;
    ret.m_rtimeCreated = this->m_rtimeCreated;
    ret.m_rtimeUpdated = this->m_rtimeUpdated;
    ret.m_eVisibility = this->m_eVisibility;
    ret.m_bBanned = this->m_bBanned;
    ret.m_rgchTags = this->m_rgchTags;
    ret.m_bTagsTruncated = this->m_bTagsTruncated;
    ret.m_pchFileName = this->m_pchFileName;
    ret.m_nFileSize = this->m_nFileSize;
    ret.m_nPreviewFileSize = this->m_nPreviewFileSize;
    ret.m_rgchURL = this->m_rgchURL;
    ret.m_eFileType = this->m_eFileType;
    return ret;
}
#endif

#ifdef __i386__
w32_RemoteStorageGetPublishedFileDetailsResult_t_119::operator u32_RemoteStorageGetPublishedFileDetailsResult_t_119() const
{
    u32_RemoteStorageGetPublishedFileDetailsResult_t_119 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_nCreatorAppID = this->m_nCreatorAppID;
    ret.m_nConsumerAppID = this->m_nConsumerAppID;
    ret.m_rgchTitle = this->m_rgchTitle;
    ret.m_rgchDescription = this->m_rgchDescription;
    ret.m_hFile = this->m_hFile;
    ret.m_hPreviewFile = this->m_hPreviewFile;
    ret.m_ulSteamIDOwner = this->m_ulSteamIDOwner;
    ret.m_rtimeCreated = this->m_rtimeCreated;
    ret.m_rtimeUpdated = this->m_rtimeUpdated;
    ret.m_eVisibility = this->m_eVisibility;
    ret.m_bBanned = this->m_bBanned;
    ret.m_rgchTags = this->m_rgchTags;
    ret.m_bTagsTruncated = this->m_bTagsTruncated;
    ret.m_pchFileName = this->m_pchFileName;
    ret.m_nFileSize = this->m_nFileSize;
    ret.m_nPreviewFileSize = this->m_nPreviewFileSize;
    ret.m_rgchURL = this->m_rgchURL;
    return ret;
}

u32_RemoteStorageGetPublishedFileDetailsResult_t_119::operator w32_RemoteStorageGetPublishedFileDetailsResult_t_119() const
{
    w32_RemoteStorageGetPublishedFileDetailsResult_t_119 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_nCreatorAppID = this->m_nCreatorAppID;
    ret.m_nConsumerAppID = this->m_nConsumerAppID;
    ret.m_rgchTitle = this->m_rgchTitle;
    ret.m_rgchDescription = this->m_rgchDescription;
    ret.m_hFile = this->m_hFile;
    ret.m_hPreviewFile = this->m_hPreviewFile;
    ret.m_ulSteamIDOwner = this->m_ulSteamIDOwner;
    ret.m_rtimeCreated = this->m_rtimeCreated;
    ret.m_rtimeUpdated = this->m_rtimeUpdated;
    ret.m_eVisibility = this->m_eVisibility;
    ret.m_bBanned = this->m_bBanned;
    ret.m_rgchTags = this->m_rgchTags;
    ret.m_bTagsTruncated = this->m_bTagsTruncated;
    ret.m_pchFileName = this->m_pchFileName;
    ret.m_nFileSize = this->m_nFileSize;
    ret.m_nPreviewFileSize = this->m_nPreviewFileSize;
    ret.m_rgchURL = this->m_rgchURL;
    return ret;
}
#endif

#ifdef __i386__
w32_RemoteStorageGetPublishedFileDetailsResult_t_118::operator u32_RemoteStorageGetPublishedFileDetailsResult_t_118() const
{
    u32_RemoteStorageGetPublishedFileDetailsResult_t_118 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_nCreatorAppID = this->m_nCreatorAppID;
    ret.m_nConsumerAppID = this->m_nConsumerAppID;
    ret.m_rgchTitle = this->m_rgchTitle;
    ret.m_rgchDescription = this->m_rgchDescription;
    ret.m_hFile = this->m_hFile;
    ret.m_hPreviewFile = this->m_hPreviewFile;
    ret.m_ulSteamIDOwner = this->m_ulSteamIDOwner;
    ret.m_rtimeCreated = this->m_rtimeCreated;
    ret.m_rtimeUpdated = this->m_rtimeUpdated;
    ret.m_eVisibility = this->m_eVisibility;
    ret.m_bBanned = this->m_bBanned;
    ret.m_rgchTags = this->m_rgchTags;
    ret.m_bTagsTruncated = this->m_bTagsTruncated;
    ret.m_pchFileName = this->m_pchFileName;
    ret.m_nFileSize = this->m_nFileSize;
    ret.m_nPreviewFileSize = this->m_nPreviewFileSize;
    return ret;
}

u32_RemoteStorageGetPublishedFileDetailsResult_t_118::operator w32_RemoteStorageGetPublishedFileDetailsResult_t_118() const
{
    w32_RemoteStorageGetPublishedFileDetailsResult_t_118 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_nCreatorAppID = this->m_nCreatorAppID;
    ret.m_nConsumerAppID = this->m_nConsumerAppID;
    ret.m_rgchTitle = this->m_rgchTitle;
    ret.m_rgchDescription = this->m_rgchDescription;
    ret.m_hFile = this->m_hFile;
    ret.m_hPreviewFile = this->m_hPreviewFile;
    ret.m_ulSteamIDOwner = this->m_ulSteamIDOwner;
    ret.m_rtimeCreated = this->m_rtimeCreated;
    ret.m_rtimeUpdated = this->m_rtimeUpdated;
    ret.m_eVisibility = this->m_eVisibility;
    ret.m_bBanned = this->m_bBanned;
    ret.m_rgchTags = this->m_rgchTags;
    ret.m_bTagsTruncated = this->m_bTagsTruncated;
    ret.m_pchFileName = this->m_pchFileName;
    ret.m_nFileSize = this->m_nFileSize;
    ret.m_nPreviewFileSize = this->m_nPreviewFileSize;
    return ret;
}
#endif

#ifdef __i386__
w32_RemoteStorageGetPublishedFileDetailsResult_t_116x::operator u32_RemoteStorageGetPublishedFileDetailsResult_t_116x() const
{
    u32_RemoteStorageGetPublishedFileDetailsResult_t_116x ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_nCreatorAppID = this->m_nCreatorAppID;
    ret.m_nConsumerAppID = this->m_nConsumerAppID;
    ret.m_rgchTitle = this->m_rgchTitle;
    ret.m_rgchDescription = this->m_rgchDescription;
    ret.m_hFile = this->m_hFile;
    ret.m_hPreviewFile = this->m_hPreviewFile;
    ret.m_ulSteamIDOwner = this->m_ulSteamIDOwner;
    ret.m_rtimeCreated = this->m_rtimeCreated;
    ret.m_rtimeUpdated = this->m_rtimeUpdated;
    ret.m_eVisibility = this->m_eVisibility;
    ret.m_bBanned = this->m_bBanned;
    ret.m_rgchTags = this->m_rgchTags;
    ret.m_bTagsTruncated = this->m_bTagsTruncated;
    ret.m_pchFileName = this->m_pchFileName;
    return ret;
}

u32_RemoteStorageGetPublishedFileDetailsResult_t_116x::operator w32_RemoteStorageGetPublishedFileDetailsResult_t_116x() const
{
    w32_RemoteStorageGetPublishedFileDetailsResult_t_116x ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_nCreatorAppID = this->m_nCreatorAppID;
    ret.m_nConsumerAppID = this->m_nConsumerAppID;
    ret.m_rgchTitle = this->m_rgchTitle;
    ret.m_rgchDescription = this->m_rgchDescription;
    ret.m_hFile = this->m_hFile;
    ret.m_hPreviewFile = this->m_hPreviewFile;
    ret.m_ulSteamIDOwner = this->m_ulSteamIDOwner;
    ret.m_rtimeCreated = this->m_rtimeCreated;
    ret.m_rtimeUpdated = this->m_rtimeUpdated;
    ret.m_eVisibility = this->m_eVisibility;
    ret.m_bBanned = this->m_bBanned;
    ret.m_rgchTags = this->m_rgchTags;
    ret.m_bTagsTruncated = this->m_bTagsTruncated;
    ret.m_pchFileName = this->m_pchFileName;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_RemoteStorageGetPublishedItemVoteDetailsResult_t_123) >= 32 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedItemVoteDetailsResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedItemVoteDetailsResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedItemVoteDetailsResult_t_123, m_unPublishedFileId) == 8 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedItemVoteDetailsResult_t_123().m_unPublishedFileId) >= 8 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedItemVoteDetailsResult_t_123, m_nVotesFor) == 16 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedItemVoteDetailsResult_t_123().m_nVotesFor) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedItemVoteDetailsResult_t_123, m_nVotesAgainst) == 20 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedItemVoteDetailsResult_t_123().m_nVotesAgainst) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedItemVoteDetailsResult_t_123, m_nReports) == 24 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedItemVoteDetailsResult_t_123().m_nReports) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedItemVoteDetailsResult_t_123, m_fScore) == 28 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedItemVoteDetailsResult_t_123().m_fScore) >= 4 );

C_ASSERT( sizeof(u64_RemoteStorageGetPublishedItemVoteDetailsResult_t_123) >= 28 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedItemVoteDetailsResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedItemVoteDetailsResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedItemVoteDetailsResult_t_123, m_unPublishedFileId) == 4 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedItemVoteDetailsResult_t_123().m_unPublishedFileId) >= 8 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedItemVoteDetailsResult_t_123, m_nVotesFor) == 12 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedItemVoteDetailsResult_t_123().m_nVotesFor) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedItemVoteDetailsResult_t_123, m_nVotesAgainst) == 16 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedItemVoteDetailsResult_t_123().m_nVotesAgainst) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedItemVoteDetailsResult_t_123, m_nReports) == 20 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedItemVoteDetailsResult_t_123().m_nReports) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedItemVoteDetailsResult_t_123, m_fScore) == 24 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedItemVoteDetailsResult_t_123().m_fScore) >= 4 );

C_ASSERT( sizeof(w32_RemoteStorageGetPublishedItemVoteDetailsResult_t_123) >= 32 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedItemVoteDetailsResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedItemVoteDetailsResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedItemVoteDetailsResult_t_123, m_unPublishedFileId) == 8 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedItemVoteDetailsResult_t_123().m_unPublishedFileId) >= 8 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedItemVoteDetailsResult_t_123, m_nVotesFor) == 16 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedItemVoteDetailsResult_t_123().m_nVotesFor) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedItemVoteDetailsResult_t_123, m_nVotesAgainst) == 20 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedItemVoteDetailsResult_t_123().m_nVotesAgainst) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedItemVoteDetailsResult_t_123, m_nReports) == 24 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedItemVoteDetailsResult_t_123().m_nReports) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedItemVoteDetailsResult_t_123, m_fScore) == 28 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedItemVoteDetailsResult_t_123().m_fScore) >= 4 );

C_ASSERT( sizeof(u32_RemoteStorageGetPublishedItemVoteDetailsResult_t_123) >= 28 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedItemVoteDetailsResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedItemVoteDetailsResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedItemVoteDetailsResult_t_123, m_unPublishedFileId) == 4 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedItemVoteDetailsResult_t_123().m_unPublishedFileId) >= 8 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedItemVoteDetailsResult_t_123, m_nVotesFor) == 12 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedItemVoteDetailsResult_t_123().m_nVotesFor) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedItemVoteDetailsResult_t_123, m_nVotesAgainst) == 16 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedItemVoteDetailsResult_t_123().m_nVotesAgainst) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedItemVoteDetailsResult_t_123, m_nReports) == 20 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedItemVoteDetailsResult_t_123().m_nReports) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedItemVoteDetailsResult_t_123, m_fScore) == 24 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedItemVoteDetailsResult_t_123().m_fScore) >= 4 );

C_ASSERT( sizeof(w64_RemoteStorageGetPublishedItemVoteDetailsResult_t_119) >= 32 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedItemVoteDetailsResult_t_119, m_eResult) == 0 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedItemVoteDetailsResult_t_119().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedItemVoteDetailsResult_t_119, m_unPublishedFileId) == 8 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedItemVoteDetailsResult_t_119().m_unPublishedFileId) >= 8 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedItemVoteDetailsResult_t_119, m_nVotesFor) == 16 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedItemVoteDetailsResult_t_119().m_nVotesFor) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedItemVoteDetailsResult_t_119, m_nVotesAgainst) == 20 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedItemVoteDetailsResult_t_119().m_nVotesAgainst) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedItemVoteDetailsResult_t_119, m_nReports) == 24 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedItemVoteDetailsResult_t_119().m_nReports) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageGetPublishedItemVoteDetailsResult_t_119, m_fScore) == 28 );
C_ASSERT( sizeof(w64_RemoteStorageGetPublishedItemVoteDetailsResult_t_119().m_fScore) >= 4 );

C_ASSERT( sizeof(u64_RemoteStorageGetPublishedItemVoteDetailsResult_t_119) >= 32 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedItemVoteDetailsResult_t_119, m_eResult) == 0 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedItemVoteDetailsResult_t_119().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedItemVoteDetailsResult_t_119, m_unPublishedFileId) == 8 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedItemVoteDetailsResult_t_119().m_unPublishedFileId) >= 8 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedItemVoteDetailsResult_t_119, m_nVotesFor) == 16 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedItemVoteDetailsResult_t_119().m_nVotesFor) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedItemVoteDetailsResult_t_119, m_nVotesAgainst) == 20 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedItemVoteDetailsResult_t_119().m_nVotesAgainst) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedItemVoteDetailsResult_t_119, m_nReports) == 24 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedItemVoteDetailsResult_t_119().m_nReports) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageGetPublishedItemVoteDetailsResult_t_119, m_fScore) == 28 );
C_ASSERT( sizeof(u64_RemoteStorageGetPublishedItemVoteDetailsResult_t_119().m_fScore) >= 4 );

C_ASSERT( sizeof(w32_RemoteStorageGetPublishedItemVoteDetailsResult_t_119) >= 32 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedItemVoteDetailsResult_t_119, m_eResult) == 0 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedItemVoteDetailsResult_t_119().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedItemVoteDetailsResult_t_119, m_unPublishedFileId) == 8 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedItemVoteDetailsResult_t_119().m_unPublishedFileId) >= 8 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedItemVoteDetailsResult_t_119, m_nVotesFor) == 16 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedItemVoteDetailsResult_t_119().m_nVotesFor) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedItemVoteDetailsResult_t_119, m_nVotesAgainst) == 20 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedItemVoteDetailsResult_t_119().m_nVotesAgainst) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedItemVoteDetailsResult_t_119, m_nReports) == 24 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedItemVoteDetailsResult_t_119().m_nReports) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageGetPublishedItemVoteDetailsResult_t_119, m_fScore) == 28 );
C_ASSERT( sizeof(w32_RemoteStorageGetPublishedItemVoteDetailsResult_t_119().m_fScore) >= 4 );

C_ASSERT( sizeof(u32_RemoteStorageGetPublishedItemVoteDetailsResult_t_119) >= 28 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedItemVoteDetailsResult_t_119, m_eResult) == 0 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedItemVoteDetailsResult_t_119().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedItemVoteDetailsResult_t_119, m_unPublishedFileId) == 4 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedItemVoteDetailsResult_t_119().m_unPublishedFileId) >= 8 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedItemVoteDetailsResult_t_119, m_nVotesFor) == 12 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedItemVoteDetailsResult_t_119().m_nVotesFor) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedItemVoteDetailsResult_t_119, m_nVotesAgainst) == 16 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedItemVoteDetailsResult_t_119().m_nVotesAgainst) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedItemVoteDetailsResult_t_119, m_nReports) == 20 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedItemVoteDetailsResult_t_119().m_nReports) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageGetPublishedItemVoteDetailsResult_t_119, m_fScore) == 24 );
C_ASSERT( sizeof(u32_RemoteStorageGetPublishedItemVoteDetailsResult_t_119().m_fScore) >= 4 );

#ifdef __x86_64__
w64_RemoteStorageGetPublishedItemVoteDetailsResult_t_123::operator u64_RemoteStorageGetPublishedItemVoteDetailsResult_t_123() const
{
    u64_RemoteStorageGetPublishedItemVoteDetailsResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_unPublishedFileId = this->m_unPublishedFileId;
    ret.m_nVotesFor = this->m_nVotesFor;
    ret.m_nVotesAgainst = this->m_nVotesAgainst;
    ret.m_nReports = this->m_nReports;
    ret.m_fScore = this->m_fScore;
    return ret;
}

u64_RemoteStorageGetPublishedItemVoteDetailsResult_t_123::operator w64_RemoteStorageGetPublishedItemVoteDetailsResult_t_123() const
{
    w64_RemoteStorageGetPublishedItemVoteDetailsResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_unPublishedFileId = this->m_unPublishedFileId;
    ret.m_nVotesFor = this->m_nVotesFor;
    ret.m_nVotesAgainst = this->m_nVotesAgainst;
    ret.m_nReports = this->m_nReports;
    ret.m_fScore = this->m_fScore;
    return ret;
}
#endif

#ifdef __i386__
w32_RemoteStorageGetPublishedItemVoteDetailsResult_t_123::operator u32_RemoteStorageGetPublishedItemVoteDetailsResult_t_123() const
{
    u32_RemoteStorageGetPublishedItemVoteDetailsResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_unPublishedFileId = this->m_unPublishedFileId;
    ret.m_nVotesFor = this->m_nVotesFor;
    ret.m_nVotesAgainst = this->m_nVotesAgainst;
    ret.m_nReports = this->m_nReports;
    ret.m_fScore = this->m_fScore;
    return ret;
}

u32_RemoteStorageGetPublishedItemVoteDetailsResult_t_123::operator w32_RemoteStorageGetPublishedItemVoteDetailsResult_t_123() const
{
    w32_RemoteStorageGetPublishedItemVoteDetailsResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_unPublishedFileId = this->m_unPublishedFileId;
    ret.m_nVotesFor = this->m_nVotesFor;
    ret.m_nVotesAgainst = this->m_nVotesAgainst;
    ret.m_nReports = this->m_nReports;
    ret.m_fScore = this->m_fScore;
    return ret;
}
#endif

#ifdef __i386__
w32_RemoteStorageGetPublishedItemVoteDetailsResult_t_119::operator u32_RemoteStorageGetPublishedItemVoteDetailsResult_t_119() const
{
    u32_RemoteStorageGetPublishedItemVoteDetailsResult_t_119 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_unPublishedFileId = this->m_unPublishedFileId;
    ret.m_nVotesFor = this->m_nVotesFor;
    ret.m_nVotesAgainst = this->m_nVotesAgainst;
    ret.m_nReports = this->m_nReports;
    ret.m_fScore = this->m_fScore;
    return ret;
}

u32_RemoteStorageGetPublishedItemVoteDetailsResult_t_119::operator w32_RemoteStorageGetPublishedItemVoteDetailsResult_t_119() const
{
    w32_RemoteStorageGetPublishedItemVoteDetailsResult_t_119 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_unPublishedFileId = this->m_unPublishedFileId;
    ret.m_nVotesFor = this->m_nVotesFor;
    ret.m_nVotesAgainst = this->m_nVotesAgainst;
    ret.m_nReports = this->m_nReports;
    ret.m_fScore = this->m_fScore;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_RemoteStoragePublishFileResult_t_125) >= 24 );
C_ASSERT( offsetof(w64_RemoteStoragePublishFileResult_t_125, m_eResult) == 0 );
C_ASSERT( sizeof(w64_RemoteStoragePublishFileResult_t_125().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_RemoteStoragePublishFileResult_t_125, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w64_RemoteStoragePublishFileResult_t_125().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(w64_RemoteStoragePublishFileResult_t_125, m_bUserNeedsToAcceptWorkshopLegalAgreement) == 16 );
C_ASSERT( sizeof(w64_RemoteStoragePublishFileResult_t_125().m_bUserNeedsToAcceptWorkshopLegalAgreement) >= 1 );

C_ASSERT( sizeof(u64_RemoteStoragePublishFileResult_t_125) >= 16 );
C_ASSERT( offsetof(u64_RemoteStoragePublishFileResult_t_125, m_eResult) == 0 );
C_ASSERT( sizeof(u64_RemoteStoragePublishFileResult_t_125().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_RemoteStoragePublishFileResult_t_125, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u64_RemoteStoragePublishFileResult_t_125().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(u64_RemoteStoragePublishFileResult_t_125, m_bUserNeedsToAcceptWorkshopLegalAgreement) == 12 );
C_ASSERT( sizeof(u64_RemoteStoragePublishFileResult_t_125().m_bUserNeedsToAcceptWorkshopLegalAgreement) >= 1 );

C_ASSERT( sizeof(w32_RemoteStoragePublishFileResult_t_125) >= 24 );
C_ASSERT( offsetof(w32_RemoteStoragePublishFileResult_t_125, m_eResult) == 0 );
C_ASSERT( sizeof(w32_RemoteStoragePublishFileResult_t_125().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_RemoteStoragePublishFileResult_t_125, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w32_RemoteStoragePublishFileResult_t_125().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(w32_RemoteStoragePublishFileResult_t_125, m_bUserNeedsToAcceptWorkshopLegalAgreement) == 16 );
C_ASSERT( sizeof(w32_RemoteStoragePublishFileResult_t_125().m_bUserNeedsToAcceptWorkshopLegalAgreement) >= 1 );

C_ASSERT( sizeof(u32_RemoteStoragePublishFileResult_t_125) >= 16 );
C_ASSERT( offsetof(u32_RemoteStoragePublishFileResult_t_125, m_eResult) == 0 );
C_ASSERT( sizeof(u32_RemoteStoragePublishFileResult_t_125().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_RemoteStoragePublishFileResult_t_125, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u32_RemoteStoragePublishFileResult_t_125().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(u32_RemoteStoragePublishFileResult_t_125, m_bUserNeedsToAcceptWorkshopLegalAgreement) == 12 );
C_ASSERT( sizeof(u32_RemoteStoragePublishFileResult_t_125().m_bUserNeedsToAcceptWorkshopLegalAgreement) >= 1 );

C_ASSERT( sizeof(w64_RemoteStoragePublishFileResult_t_123) >= 16 );
C_ASSERT( offsetof(w64_RemoteStoragePublishFileResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(w64_RemoteStoragePublishFileResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_RemoteStoragePublishFileResult_t_123, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w64_RemoteStoragePublishFileResult_t_123().m_nPublishedFileId) >= 8 );

C_ASSERT( sizeof(u64_RemoteStoragePublishFileResult_t_123) >= 12 );
C_ASSERT( offsetof(u64_RemoteStoragePublishFileResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(u64_RemoteStoragePublishFileResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_RemoteStoragePublishFileResult_t_123, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u64_RemoteStoragePublishFileResult_t_123().m_nPublishedFileId) >= 8 );

C_ASSERT( sizeof(w32_RemoteStoragePublishFileResult_t_123) >= 16 );
C_ASSERT( offsetof(w32_RemoteStoragePublishFileResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(w32_RemoteStoragePublishFileResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_RemoteStoragePublishFileResult_t_123, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w32_RemoteStoragePublishFileResult_t_123().m_nPublishedFileId) >= 8 );

C_ASSERT( sizeof(u32_RemoteStoragePublishFileResult_t_123) >= 12 );
C_ASSERT( offsetof(u32_RemoteStoragePublishFileResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(u32_RemoteStoragePublishFileResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_RemoteStoragePublishFileResult_t_123, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u32_RemoteStoragePublishFileResult_t_123().m_nPublishedFileId) >= 8 );

C_ASSERT( sizeof(w64_RemoteStoragePublishFileResult_t_116x) >= 16 );
C_ASSERT( offsetof(w64_RemoteStoragePublishFileResult_t_116x, m_eResult) == 0 );
C_ASSERT( sizeof(w64_RemoteStoragePublishFileResult_t_116x().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_RemoteStoragePublishFileResult_t_116x, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w64_RemoteStoragePublishFileResult_t_116x().m_nPublishedFileId) >= 8 );

C_ASSERT( sizeof(u64_RemoteStoragePublishFileResult_t_116x) >= 16 );
C_ASSERT( offsetof(u64_RemoteStoragePublishFileResult_t_116x, m_eResult) == 0 );
C_ASSERT( sizeof(u64_RemoteStoragePublishFileResult_t_116x().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_RemoteStoragePublishFileResult_t_116x, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(u64_RemoteStoragePublishFileResult_t_116x().m_nPublishedFileId) >= 8 );

C_ASSERT( sizeof(w32_RemoteStoragePublishFileResult_t_116x) >= 16 );
C_ASSERT( offsetof(w32_RemoteStoragePublishFileResult_t_116x, m_eResult) == 0 );
C_ASSERT( sizeof(w32_RemoteStoragePublishFileResult_t_116x().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_RemoteStoragePublishFileResult_t_116x, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w32_RemoteStoragePublishFileResult_t_116x().m_nPublishedFileId) >= 8 );

C_ASSERT( sizeof(u32_RemoteStoragePublishFileResult_t_116x) >= 12 );
C_ASSERT( offsetof(u32_RemoteStoragePublishFileResult_t_116x, m_eResult) == 0 );
C_ASSERT( sizeof(u32_RemoteStoragePublishFileResult_t_116x().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_RemoteStoragePublishFileResult_t_116x, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u32_RemoteStoragePublishFileResult_t_116x().m_nPublishedFileId) >= 8 );

#ifdef __x86_64__
w64_RemoteStoragePublishFileResult_t_125::operator u64_RemoteStoragePublishFileResult_t_125() const
{
    u64_RemoteStoragePublishFileResult_t_125 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_bUserNeedsToAcceptWorkshopLegalAgreement = this->m_bUserNeedsToAcceptWorkshopLegalAgreement;
    return ret;
}

u64_RemoteStoragePublishFileResult_t_125::operator w64_RemoteStoragePublishFileResult_t_125() const
{
    w64_RemoteStoragePublishFileResult_t_125 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_bUserNeedsToAcceptWorkshopLegalAgreement = this->m_bUserNeedsToAcceptWorkshopLegalAgreement;
    return ret;
}
#endif

#ifdef __i386__
w32_RemoteStoragePublishFileResult_t_125::operator u32_RemoteStoragePublishFileResult_t_125() const
{
    u32_RemoteStoragePublishFileResult_t_125 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_bUserNeedsToAcceptWorkshopLegalAgreement = this->m_bUserNeedsToAcceptWorkshopLegalAgreement;
    return ret;
}

u32_RemoteStoragePublishFileResult_t_125::operator w32_RemoteStoragePublishFileResult_t_125() const
{
    w32_RemoteStoragePublishFileResult_t_125 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_bUserNeedsToAcceptWorkshopLegalAgreement = this->m_bUserNeedsToAcceptWorkshopLegalAgreement;
    return ret;
}
#endif

#ifdef __x86_64__
w64_RemoteStoragePublishFileResult_t_123::operator u64_RemoteStoragePublishFileResult_t_123() const
{
    u64_RemoteStoragePublishFileResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    return ret;
}

u64_RemoteStoragePublishFileResult_t_123::operator w64_RemoteStoragePublishFileResult_t_123() const
{
    w64_RemoteStoragePublishFileResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    return ret;
}
#endif

#ifdef __i386__
w32_RemoteStoragePublishFileResult_t_123::operator u32_RemoteStoragePublishFileResult_t_123() const
{
    u32_RemoteStoragePublishFileResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    return ret;
}

u32_RemoteStoragePublishFileResult_t_123::operator w32_RemoteStoragePublishFileResult_t_123() const
{
    w32_RemoteStoragePublishFileResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    return ret;
}
#endif

#ifdef __i386__
w32_RemoteStoragePublishFileResult_t_116x::operator u32_RemoteStoragePublishFileResult_t_116x() const
{
    u32_RemoteStoragePublishFileResult_t_116x ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    return ret;
}

u32_RemoteStoragePublishFileResult_t_116x::operator w32_RemoteStoragePublishFileResult_t_116x() const
{
    w32_RemoteStoragePublishFileResult_t_116x ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_RemoteStoragePublishedFileUpdated_t) >= 24 );
C_ASSERT( offsetof(w64_RemoteStoragePublishedFileUpdated_t, m_nPublishedFileId) == 0 );
C_ASSERT( sizeof(w64_RemoteStoragePublishedFileUpdated_t().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(w64_RemoteStoragePublishedFileUpdated_t, m_nAppID) == 8 );
C_ASSERT( sizeof(w64_RemoteStoragePublishedFileUpdated_t().m_nAppID) >= 4 );
C_ASSERT( offsetof(w64_RemoteStoragePublishedFileUpdated_t, m_ulUnused) == 16 );
C_ASSERT( sizeof(w64_RemoteStoragePublishedFileUpdated_t().m_ulUnused) >= 8 );

C_ASSERT( sizeof(u64_RemoteStoragePublishedFileUpdated_t) >= 20 );
C_ASSERT( offsetof(u64_RemoteStoragePublishedFileUpdated_t, m_nPublishedFileId) == 0 );
C_ASSERT( sizeof(u64_RemoteStoragePublishedFileUpdated_t().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(u64_RemoteStoragePublishedFileUpdated_t, m_nAppID) == 8 );
C_ASSERT( sizeof(u64_RemoteStoragePublishedFileUpdated_t().m_nAppID) >= 4 );
C_ASSERT( offsetof(u64_RemoteStoragePublishedFileUpdated_t, m_ulUnused) == 12 );
C_ASSERT( sizeof(u64_RemoteStoragePublishedFileUpdated_t().m_ulUnused) >= 8 );

C_ASSERT( sizeof(w32_RemoteStoragePublishedFileUpdated_t) >= 24 );
C_ASSERT( offsetof(w32_RemoteStoragePublishedFileUpdated_t, m_nPublishedFileId) == 0 );
C_ASSERT( sizeof(w32_RemoteStoragePublishedFileUpdated_t().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(w32_RemoteStoragePublishedFileUpdated_t, m_nAppID) == 8 );
C_ASSERT( sizeof(w32_RemoteStoragePublishedFileUpdated_t().m_nAppID) >= 4 );
C_ASSERT( offsetof(w32_RemoteStoragePublishedFileUpdated_t, m_ulUnused) == 16 );
C_ASSERT( sizeof(w32_RemoteStoragePublishedFileUpdated_t().m_ulUnused) >= 8 );

C_ASSERT( sizeof(u32_RemoteStoragePublishedFileUpdated_t) >= 20 );
C_ASSERT( offsetof(u32_RemoteStoragePublishedFileUpdated_t, m_nPublishedFileId) == 0 );
C_ASSERT( sizeof(u32_RemoteStoragePublishedFileUpdated_t().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(u32_RemoteStoragePublishedFileUpdated_t, m_nAppID) == 8 );
C_ASSERT( sizeof(u32_RemoteStoragePublishedFileUpdated_t().m_nAppID) >= 4 );
C_ASSERT( offsetof(u32_RemoteStoragePublishedFileUpdated_t, m_ulUnused) == 12 );
C_ASSERT( sizeof(u32_RemoteStoragePublishedFileUpdated_t().m_ulUnused) >= 8 );

#ifdef __x86_64__
w64_RemoteStoragePublishedFileUpdated_t::operator u64_RemoteStoragePublishedFileUpdated_t() const
{
    u64_RemoteStoragePublishedFileUpdated_t ret;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_nAppID = this->m_nAppID;
    ret.m_ulUnused = this->m_ulUnused;
    return ret;
}

u64_RemoteStoragePublishedFileUpdated_t::operator w64_RemoteStoragePublishedFileUpdated_t() const
{
    w64_RemoteStoragePublishedFileUpdated_t ret;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_nAppID = this->m_nAppID;
    ret.m_ulUnused = this->m_ulUnused;
    return ret;
}
#endif

#ifdef __i386__
w32_RemoteStoragePublishedFileUpdated_t::operator u32_RemoteStoragePublishedFileUpdated_t() const
{
    u32_RemoteStoragePublishedFileUpdated_t ret;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_nAppID = this->m_nAppID;
    ret.m_ulUnused = this->m_ulUnused;
    return ret;
}

u32_RemoteStoragePublishedFileUpdated_t::operator w32_RemoteStoragePublishedFileUpdated_t() const
{
    w32_RemoteStoragePublishedFileUpdated_t ret;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_nAppID = this->m_nAppID;
    ret.m_ulUnused = this->m_ulUnused;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_RemoteStorageSetUserPublishedFileActionResult_t_123) >= 24 );
C_ASSERT( offsetof(w64_RemoteStorageSetUserPublishedFileActionResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(w64_RemoteStorageSetUserPublishedFileActionResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageSetUserPublishedFileActionResult_t_123, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w64_RemoteStorageSetUserPublishedFileActionResult_t_123().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(w64_RemoteStorageSetUserPublishedFileActionResult_t_123, m_eAction) == 16 );
C_ASSERT( sizeof(w64_RemoteStorageSetUserPublishedFileActionResult_t_123().m_eAction) >= 4 );

C_ASSERT( sizeof(u64_RemoteStorageSetUserPublishedFileActionResult_t_123) >= 16 );
C_ASSERT( offsetof(u64_RemoteStorageSetUserPublishedFileActionResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(u64_RemoteStorageSetUserPublishedFileActionResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageSetUserPublishedFileActionResult_t_123, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u64_RemoteStorageSetUserPublishedFileActionResult_t_123().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(u64_RemoteStorageSetUserPublishedFileActionResult_t_123, m_eAction) == 12 );
C_ASSERT( sizeof(u64_RemoteStorageSetUserPublishedFileActionResult_t_123().m_eAction) >= 4 );

C_ASSERT( sizeof(w32_RemoteStorageSetUserPublishedFileActionResult_t_123) >= 24 );
C_ASSERT( offsetof(w32_RemoteStorageSetUserPublishedFileActionResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(w32_RemoteStorageSetUserPublishedFileActionResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageSetUserPublishedFileActionResult_t_123, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w32_RemoteStorageSetUserPublishedFileActionResult_t_123().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(w32_RemoteStorageSetUserPublishedFileActionResult_t_123, m_eAction) == 16 );
C_ASSERT( sizeof(w32_RemoteStorageSetUserPublishedFileActionResult_t_123().m_eAction) >= 4 );

C_ASSERT( sizeof(u32_RemoteStorageSetUserPublishedFileActionResult_t_123) >= 16 );
C_ASSERT( offsetof(u32_RemoteStorageSetUserPublishedFileActionResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(u32_RemoteStorageSetUserPublishedFileActionResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageSetUserPublishedFileActionResult_t_123, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u32_RemoteStorageSetUserPublishedFileActionResult_t_123().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(u32_RemoteStorageSetUserPublishedFileActionResult_t_123, m_eAction) == 12 );
C_ASSERT( sizeof(u32_RemoteStorageSetUserPublishedFileActionResult_t_123().m_eAction) >= 4 );

C_ASSERT( sizeof(w64_RemoteStorageSetUserPublishedFileActionResult_t_119) >= 24 );
C_ASSERT( offsetof(w64_RemoteStorageSetUserPublishedFileActionResult_t_119, m_eResult) == 0 );
C_ASSERT( sizeof(w64_RemoteStorageSetUserPublishedFileActionResult_t_119().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageSetUserPublishedFileActionResult_t_119, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w64_RemoteStorageSetUserPublishedFileActionResult_t_119().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(w64_RemoteStorageSetUserPublishedFileActionResult_t_119, m_eAction) == 16 );
C_ASSERT( sizeof(w64_RemoteStorageSetUserPublishedFileActionResult_t_119().m_eAction) >= 4 );

C_ASSERT( sizeof(u64_RemoteStorageSetUserPublishedFileActionResult_t_119) >= 24 );
C_ASSERT( offsetof(u64_RemoteStorageSetUserPublishedFileActionResult_t_119, m_eResult) == 0 );
C_ASSERT( sizeof(u64_RemoteStorageSetUserPublishedFileActionResult_t_119().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageSetUserPublishedFileActionResult_t_119, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(u64_RemoteStorageSetUserPublishedFileActionResult_t_119().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(u64_RemoteStorageSetUserPublishedFileActionResult_t_119, m_eAction) == 16 );
C_ASSERT( sizeof(u64_RemoteStorageSetUserPublishedFileActionResult_t_119().m_eAction) >= 4 );

C_ASSERT( sizeof(w32_RemoteStorageSetUserPublishedFileActionResult_t_119) >= 24 );
C_ASSERT( offsetof(w32_RemoteStorageSetUserPublishedFileActionResult_t_119, m_eResult) == 0 );
C_ASSERT( sizeof(w32_RemoteStorageSetUserPublishedFileActionResult_t_119().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageSetUserPublishedFileActionResult_t_119, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w32_RemoteStorageSetUserPublishedFileActionResult_t_119().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(w32_RemoteStorageSetUserPublishedFileActionResult_t_119, m_eAction) == 16 );
C_ASSERT( sizeof(w32_RemoteStorageSetUserPublishedFileActionResult_t_119().m_eAction) >= 4 );

C_ASSERT( sizeof(u32_RemoteStorageSetUserPublishedFileActionResult_t_119) >= 16 );
C_ASSERT( offsetof(u32_RemoteStorageSetUserPublishedFileActionResult_t_119, m_eResult) == 0 );
C_ASSERT( sizeof(u32_RemoteStorageSetUserPublishedFileActionResult_t_119().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageSetUserPublishedFileActionResult_t_119, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u32_RemoteStorageSetUserPublishedFileActionResult_t_119().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(u32_RemoteStorageSetUserPublishedFileActionResult_t_119, m_eAction) == 12 );
C_ASSERT( sizeof(u32_RemoteStorageSetUserPublishedFileActionResult_t_119().m_eAction) >= 4 );

#ifdef __x86_64__
w64_RemoteStorageSetUserPublishedFileActionResult_t_123::operator u64_RemoteStorageSetUserPublishedFileActionResult_t_123() const
{
    u64_RemoteStorageSetUserPublishedFileActionResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_eAction = this->m_eAction;
    return ret;
}

u64_RemoteStorageSetUserPublishedFileActionResult_t_123::operator w64_RemoteStorageSetUserPublishedFileActionResult_t_123() const
{
    w64_RemoteStorageSetUserPublishedFileActionResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_eAction = this->m_eAction;
    return ret;
}
#endif

#ifdef __i386__
w32_RemoteStorageSetUserPublishedFileActionResult_t_123::operator u32_RemoteStorageSetUserPublishedFileActionResult_t_123() const
{
    u32_RemoteStorageSetUserPublishedFileActionResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_eAction = this->m_eAction;
    return ret;
}

u32_RemoteStorageSetUserPublishedFileActionResult_t_123::operator w32_RemoteStorageSetUserPublishedFileActionResult_t_123() const
{
    w32_RemoteStorageSetUserPublishedFileActionResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_eAction = this->m_eAction;
    return ret;
}
#endif

#ifdef __i386__
w32_RemoteStorageSetUserPublishedFileActionResult_t_119::operator u32_RemoteStorageSetUserPublishedFileActionResult_t_119() const
{
    u32_RemoteStorageSetUserPublishedFileActionResult_t_119 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_eAction = this->m_eAction;
    return ret;
}

u32_RemoteStorageSetUserPublishedFileActionResult_t_119::operator w32_RemoteStorageSetUserPublishedFileActionResult_t_119() const
{
    w32_RemoteStorageSetUserPublishedFileActionResult_t_119 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_eAction = this->m_eAction;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_RemoteStorageSubscribePublishedFileResult_t_123) >= 16 );
C_ASSERT( offsetof(w64_RemoteStorageSubscribePublishedFileResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(w64_RemoteStorageSubscribePublishedFileResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageSubscribePublishedFileResult_t_123, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w64_RemoteStorageSubscribePublishedFileResult_t_123().m_nPublishedFileId) >= 8 );

C_ASSERT( sizeof(u64_RemoteStorageSubscribePublishedFileResult_t_123) >= 12 );
C_ASSERT( offsetof(u64_RemoteStorageSubscribePublishedFileResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(u64_RemoteStorageSubscribePublishedFileResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageSubscribePublishedFileResult_t_123, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u64_RemoteStorageSubscribePublishedFileResult_t_123().m_nPublishedFileId) >= 8 );

C_ASSERT( sizeof(w32_RemoteStorageSubscribePublishedFileResult_t_123) >= 16 );
C_ASSERT( offsetof(w32_RemoteStorageSubscribePublishedFileResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(w32_RemoteStorageSubscribePublishedFileResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageSubscribePublishedFileResult_t_123, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w32_RemoteStorageSubscribePublishedFileResult_t_123().m_nPublishedFileId) >= 8 );

C_ASSERT( sizeof(u32_RemoteStorageSubscribePublishedFileResult_t_123) >= 12 );
C_ASSERT( offsetof(u32_RemoteStorageSubscribePublishedFileResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(u32_RemoteStorageSubscribePublishedFileResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageSubscribePublishedFileResult_t_123, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u32_RemoteStorageSubscribePublishedFileResult_t_123().m_nPublishedFileId) >= 8 );

C_ASSERT( sizeof(w64_RemoteStorageSubscribePublishedFileResult_t_116x) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageSubscribePublishedFileResult_t_116x, m_eResult) == 0 );
C_ASSERT( sizeof(w64_RemoteStorageSubscribePublishedFileResult_t_116x().m_eResult) >= 4 );

C_ASSERT( sizeof(u64_RemoteStorageSubscribePublishedFileResult_t_116x) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageSubscribePublishedFileResult_t_116x, m_eResult) == 0 );
C_ASSERT( sizeof(u64_RemoteStorageSubscribePublishedFileResult_t_116x().m_eResult) >= 4 );

C_ASSERT( sizeof(w32_RemoteStorageSubscribePublishedFileResult_t_116x) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageSubscribePublishedFileResult_t_116x, m_eResult) == 0 );
C_ASSERT( sizeof(w32_RemoteStorageSubscribePublishedFileResult_t_116x().m_eResult) >= 4 );

C_ASSERT( sizeof(u32_RemoteStorageSubscribePublishedFileResult_t_116x) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageSubscribePublishedFileResult_t_116x, m_eResult) == 0 );
C_ASSERT( sizeof(u32_RemoteStorageSubscribePublishedFileResult_t_116x().m_eResult) >= 4 );

#ifdef __x86_64__
w64_RemoteStorageSubscribePublishedFileResult_t_123::operator u64_RemoteStorageSubscribePublishedFileResult_t_123() const
{
    u64_RemoteStorageSubscribePublishedFileResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    return ret;
}

u64_RemoteStorageSubscribePublishedFileResult_t_123::operator w64_RemoteStorageSubscribePublishedFileResult_t_123() const
{
    w64_RemoteStorageSubscribePublishedFileResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    return ret;
}
#endif

#ifdef __i386__
w32_RemoteStorageSubscribePublishedFileResult_t_123::operator u32_RemoteStorageSubscribePublishedFileResult_t_123() const
{
    u32_RemoteStorageSubscribePublishedFileResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    return ret;
}

u32_RemoteStorageSubscribePublishedFileResult_t_123::operator w32_RemoteStorageSubscribePublishedFileResult_t_123() const
{
    w32_RemoteStorageSubscribePublishedFileResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_RemoteStorageUnsubscribePublishedFileResult_t_123) >= 16 );
C_ASSERT( offsetof(w64_RemoteStorageUnsubscribePublishedFileResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(w64_RemoteStorageUnsubscribePublishedFileResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageUnsubscribePublishedFileResult_t_123, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w64_RemoteStorageUnsubscribePublishedFileResult_t_123().m_nPublishedFileId) >= 8 );

C_ASSERT( sizeof(u64_RemoteStorageUnsubscribePublishedFileResult_t_123) >= 12 );
C_ASSERT( offsetof(u64_RemoteStorageUnsubscribePublishedFileResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(u64_RemoteStorageUnsubscribePublishedFileResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageUnsubscribePublishedFileResult_t_123, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u64_RemoteStorageUnsubscribePublishedFileResult_t_123().m_nPublishedFileId) >= 8 );

C_ASSERT( sizeof(w32_RemoteStorageUnsubscribePublishedFileResult_t_123) >= 16 );
C_ASSERT( offsetof(w32_RemoteStorageUnsubscribePublishedFileResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(w32_RemoteStorageUnsubscribePublishedFileResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageUnsubscribePublishedFileResult_t_123, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w32_RemoteStorageUnsubscribePublishedFileResult_t_123().m_nPublishedFileId) >= 8 );

C_ASSERT( sizeof(u32_RemoteStorageUnsubscribePublishedFileResult_t_123) >= 12 );
C_ASSERT( offsetof(u32_RemoteStorageUnsubscribePublishedFileResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(u32_RemoteStorageUnsubscribePublishedFileResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageUnsubscribePublishedFileResult_t_123, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u32_RemoteStorageUnsubscribePublishedFileResult_t_123().m_nPublishedFileId) >= 8 );

C_ASSERT( sizeof(w64_RemoteStorageUnsubscribePublishedFileResult_t_116x) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageUnsubscribePublishedFileResult_t_116x, m_eResult) == 0 );
C_ASSERT( sizeof(w64_RemoteStorageUnsubscribePublishedFileResult_t_116x().m_eResult) >= 4 );

C_ASSERT( sizeof(u64_RemoteStorageUnsubscribePublishedFileResult_t_116x) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageUnsubscribePublishedFileResult_t_116x, m_eResult) == 0 );
C_ASSERT( sizeof(u64_RemoteStorageUnsubscribePublishedFileResult_t_116x().m_eResult) >= 4 );

C_ASSERT( sizeof(w32_RemoteStorageUnsubscribePublishedFileResult_t_116x) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageUnsubscribePublishedFileResult_t_116x, m_eResult) == 0 );
C_ASSERT( sizeof(w32_RemoteStorageUnsubscribePublishedFileResult_t_116x().m_eResult) >= 4 );

C_ASSERT( sizeof(u32_RemoteStorageUnsubscribePublishedFileResult_t_116x) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageUnsubscribePublishedFileResult_t_116x, m_eResult) == 0 );
C_ASSERT( sizeof(u32_RemoteStorageUnsubscribePublishedFileResult_t_116x().m_eResult) >= 4 );

#ifdef __x86_64__
w64_RemoteStorageUnsubscribePublishedFileResult_t_123::operator u64_RemoteStorageUnsubscribePublishedFileResult_t_123() const
{
    u64_RemoteStorageUnsubscribePublishedFileResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    return ret;
}

u64_RemoteStorageUnsubscribePublishedFileResult_t_123::operator w64_RemoteStorageUnsubscribePublishedFileResult_t_123() const
{
    w64_RemoteStorageUnsubscribePublishedFileResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    return ret;
}
#endif

#ifdef __i386__
w32_RemoteStorageUnsubscribePublishedFileResult_t_123::operator u32_RemoteStorageUnsubscribePublishedFileResult_t_123() const
{
    u32_RemoteStorageUnsubscribePublishedFileResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    return ret;
}

u32_RemoteStorageUnsubscribePublishedFileResult_t_123::operator w32_RemoteStorageUnsubscribePublishedFileResult_t_123() const
{
    w32_RemoteStorageUnsubscribePublishedFileResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_RemoteStorageUpdatePublishedFileRequest_t) >= 64 );
C_ASSERT( offsetof(w64_RemoteStorageUpdatePublishedFileRequest_t, m_unPublishedFileId) == 0 );
C_ASSERT( sizeof(w64_RemoteStorageUpdatePublishedFileRequest_t().m_unPublishedFileId) >= 8 );
C_ASSERT( offsetof(w64_RemoteStorageUpdatePublishedFileRequest_t, m_pchFile) == 8 );
C_ASSERT( sizeof(w64_RemoteStorageUpdatePublishedFileRequest_t().m_pchFile) >= 8 );
C_ASSERT( offsetof(w64_RemoteStorageUpdatePublishedFileRequest_t, m_pchPreviewFile) == 16 );
C_ASSERT( sizeof(w64_RemoteStorageUpdatePublishedFileRequest_t().m_pchPreviewFile) >= 8 );
C_ASSERT( offsetof(w64_RemoteStorageUpdatePublishedFileRequest_t, m_pchTitle) == 24 );
C_ASSERT( sizeof(w64_RemoteStorageUpdatePublishedFileRequest_t().m_pchTitle) >= 8 );
C_ASSERT( offsetof(w64_RemoteStorageUpdatePublishedFileRequest_t, m_pchDescription) == 32 );
C_ASSERT( sizeof(w64_RemoteStorageUpdatePublishedFileRequest_t().m_pchDescription) >= 8 );
C_ASSERT( offsetof(w64_RemoteStorageUpdatePublishedFileRequest_t, m_eVisibility) == 40 );
C_ASSERT( sizeof(w64_RemoteStorageUpdatePublishedFileRequest_t().m_eVisibility) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageUpdatePublishedFileRequest_t, m_pTags) == 48 );
C_ASSERT( sizeof(w64_RemoteStorageUpdatePublishedFileRequest_t().m_pTags) >= 8 );
C_ASSERT( offsetof(w64_RemoteStorageUpdatePublishedFileRequest_t, m_bUpdateFile) == 56 );
C_ASSERT( sizeof(w64_RemoteStorageUpdatePublishedFileRequest_t().m_bUpdateFile) >= 1 );
C_ASSERT( offsetof(w64_RemoteStorageUpdatePublishedFileRequest_t, m_bUpdatePreviewFile) == 57 );
C_ASSERT( sizeof(w64_RemoteStorageUpdatePublishedFileRequest_t().m_bUpdatePreviewFile) >= 1 );
C_ASSERT( offsetof(w64_RemoteStorageUpdatePublishedFileRequest_t, m_bUpdateTitle) == 58 );
C_ASSERT( sizeof(w64_RemoteStorageUpdatePublishedFileRequest_t().m_bUpdateTitle) >= 1 );
C_ASSERT( offsetof(w64_RemoteStorageUpdatePublishedFileRequest_t, m_bUpdateDescription) == 59 );
C_ASSERT( sizeof(w64_RemoteStorageUpdatePublishedFileRequest_t().m_bUpdateDescription) >= 1 );
C_ASSERT( offsetof(w64_RemoteStorageUpdatePublishedFileRequest_t, m_bUpdateVisibility) == 60 );
C_ASSERT( sizeof(w64_RemoteStorageUpdatePublishedFileRequest_t().m_bUpdateVisibility) >= 1 );
C_ASSERT( offsetof(w64_RemoteStorageUpdatePublishedFileRequest_t, m_bUpdateTags) == 61 );
C_ASSERT( sizeof(w64_RemoteStorageUpdatePublishedFileRequest_t().m_bUpdateTags) >= 1 );

C_ASSERT( sizeof(u64_RemoteStorageUpdatePublishedFileRequest_t) >= 64 );
C_ASSERT( offsetof(u64_RemoteStorageUpdatePublishedFileRequest_t, m_unPublishedFileId) == 0 );
C_ASSERT( sizeof(u64_RemoteStorageUpdatePublishedFileRequest_t().m_unPublishedFileId) >= 8 );
C_ASSERT( offsetof(u64_RemoteStorageUpdatePublishedFileRequest_t, m_pchFile) == 8 );
C_ASSERT( sizeof(u64_RemoteStorageUpdatePublishedFileRequest_t().m_pchFile) >= 8 );
C_ASSERT( offsetof(u64_RemoteStorageUpdatePublishedFileRequest_t, m_pchPreviewFile) == 16 );
C_ASSERT( sizeof(u64_RemoteStorageUpdatePublishedFileRequest_t().m_pchPreviewFile) >= 8 );
C_ASSERT( offsetof(u64_RemoteStorageUpdatePublishedFileRequest_t, m_pchTitle) == 24 );
C_ASSERT( sizeof(u64_RemoteStorageUpdatePublishedFileRequest_t().m_pchTitle) >= 8 );
C_ASSERT( offsetof(u64_RemoteStorageUpdatePublishedFileRequest_t, m_pchDescription) == 32 );
C_ASSERT( sizeof(u64_RemoteStorageUpdatePublishedFileRequest_t().m_pchDescription) >= 8 );
C_ASSERT( offsetof(u64_RemoteStorageUpdatePublishedFileRequest_t, m_eVisibility) == 40 );
C_ASSERT( sizeof(u64_RemoteStorageUpdatePublishedFileRequest_t().m_eVisibility) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageUpdatePublishedFileRequest_t, m_pTags) == 48 );
C_ASSERT( sizeof(u64_RemoteStorageUpdatePublishedFileRequest_t().m_pTags) >= 8 );
C_ASSERT( offsetof(u64_RemoteStorageUpdatePublishedFileRequest_t, m_bUpdateFile) == 56 );
C_ASSERT( sizeof(u64_RemoteStorageUpdatePublishedFileRequest_t().m_bUpdateFile) >= 1 );
C_ASSERT( offsetof(u64_RemoteStorageUpdatePublishedFileRequest_t, m_bUpdatePreviewFile) == 57 );
C_ASSERT( sizeof(u64_RemoteStorageUpdatePublishedFileRequest_t().m_bUpdatePreviewFile) >= 1 );
C_ASSERT( offsetof(u64_RemoteStorageUpdatePublishedFileRequest_t, m_bUpdateTitle) == 58 );
C_ASSERT( sizeof(u64_RemoteStorageUpdatePublishedFileRequest_t().m_bUpdateTitle) >= 1 );
C_ASSERT( offsetof(u64_RemoteStorageUpdatePublishedFileRequest_t, m_bUpdateDescription) == 59 );
C_ASSERT( sizeof(u64_RemoteStorageUpdatePublishedFileRequest_t().m_bUpdateDescription) >= 1 );
C_ASSERT( offsetof(u64_RemoteStorageUpdatePublishedFileRequest_t, m_bUpdateVisibility) == 60 );
C_ASSERT( sizeof(u64_RemoteStorageUpdatePublishedFileRequest_t().m_bUpdateVisibility) >= 1 );
C_ASSERT( offsetof(u64_RemoteStorageUpdatePublishedFileRequest_t, m_bUpdateTags) == 61 );
C_ASSERT( sizeof(u64_RemoteStorageUpdatePublishedFileRequest_t().m_bUpdateTags) >= 1 );

C_ASSERT( sizeof(w32_RemoteStorageUpdatePublishedFileRequest_t) >= 40 );
C_ASSERT( offsetof(w32_RemoteStorageUpdatePublishedFileRequest_t, m_unPublishedFileId) == 0 );
C_ASSERT( sizeof(w32_RemoteStorageUpdatePublishedFileRequest_t().m_unPublishedFileId) >= 8 );
C_ASSERT( offsetof(w32_RemoteStorageUpdatePublishedFileRequest_t, m_pchFile) == 8 );
C_ASSERT( sizeof(w32_RemoteStorageUpdatePublishedFileRequest_t().m_pchFile) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageUpdatePublishedFileRequest_t, m_pchPreviewFile) == 12 );
C_ASSERT( sizeof(w32_RemoteStorageUpdatePublishedFileRequest_t().m_pchPreviewFile) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageUpdatePublishedFileRequest_t, m_pchTitle) == 16 );
C_ASSERT( sizeof(w32_RemoteStorageUpdatePublishedFileRequest_t().m_pchTitle) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageUpdatePublishedFileRequest_t, m_pchDescription) == 20 );
C_ASSERT( sizeof(w32_RemoteStorageUpdatePublishedFileRequest_t().m_pchDescription) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageUpdatePublishedFileRequest_t, m_eVisibility) == 24 );
C_ASSERT( sizeof(w32_RemoteStorageUpdatePublishedFileRequest_t().m_eVisibility) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageUpdatePublishedFileRequest_t, m_pTags) == 28 );
C_ASSERT( sizeof(w32_RemoteStorageUpdatePublishedFileRequest_t().m_pTags) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageUpdatePublishedFileRequest_t, m_bUpdateFile) == 32 );
C_ASSERT( sizeof(w32_RemoteStorageUpdatePublishedFileRequest_t().m_bUpdateFile) >= 1 );
C_ASSERT( offsetof(w32_RemoteStorageUpdatePublishedFileRequest_t, m_bUpdatePreviewFile) == 33 );
C_ASSERT( sizeof(w32_RemoteStorageUpdatePublishedFileRequest_t().m_bUpdatePreviewFile) >= 1 );
C_ASSERT( offsetof(w32_RemoteStorageUpdatePublishedFileRequest_t, m_bUpdateTitle) == 34 );
C_ASSERT( sizeof(w32_RemoteStorageUpdatePublishedFileRequest_t().m_bUpdateTitle) >= 1 );
C_ASSERT( offsetof(w32_RemoteStorageUpdatePublishedFileRequest_t, m_bUpdateDescription) == 35 );
C_ASSERT( sizeof(w32_RemoteStorageUpdatePublishedFileRequest_t().m_bUpdateDescription) >= 1 );
C_ASSERT( offsetof(w32_RemoteStorageUpdatePublishedFileRequest_t, m_bUpdateVisibility) == 36 );
C_ASSERT( sizeof(w32_RemoteStorageUpdatePublishedFileRequest_t().m_bUpdateVisibility) >= 1 );
C_ASSERT( offsetof(w32_RemoteStorageUpdatePublishedFileRequest_t, m_bUpdateTags) == 37 );
C_ASSERT( sizeof(w32_RemoteStorageUpdatePublishedFileRequest_t().m_bUpdateTags) >= 1 );

C_ASSERT( sizeof(u32_RemoteStorageUpdatePublishedFileRequest_t) >= 40 );
C_ASSERT( offsetof(u32_RemoteStorageUpdatePublishedFileRequest_t, m_unPublishedFileId) == 0 );
C_ASSERT( sizeof(u32_RemoteStorageUpdatePublishedFileRequest_t().m_unPublishedFileId) >= 8 );
C_ASSERT( offsetof(u32_RemoteStorageUpdatePublishedFileRequest_t, m_pchFile) == 8 );
C_ASSERT( sizeof(u32_RemoteStorageUpdatePublishedFileRequest_t().m_pchFile) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageUpdatePublishedFileRequest_t, m_pchPreviewFile) == 12 );
C_ASSERT( sizeof(u32_RemoteStorageUpdatePublishedFileRequest_t().m_pchPreviewFile) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageUpdatePublishedFileRequest_t, m_pchTitle) == 16 );
C_ASSERT( sizeof(u32_RemoteStorageUpdatePublishedFileRequest_t().m_pchTitle) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageUpdatePublishedFileRequest_t, m_pchDescription) == 20 );
C_ASSERT( sizeof(u32_RemoteStorageUpdatePublishedFileRequest_t().m_pchDescription) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageUpdatePublishedFileRequest_t, m_eVisibility) == 24 );
C_ASSERT( sizeof(u32_RemoteStorageUpdatePublishedFileRequest_t().m_eVisibility) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageUpdatePublishedFileRequest_t, m_pTags) == 28 );
C_ASSERT( sizeof(u32_RemoteStorageUpdatePublishedFileRequest_t().m_pTags) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageUpdatePublishedFileRequest_t, m_bUpdateFile) == 32 );
C_ASSERT( sizeof(u32_RemoteStorageUpdatePublishedFileRequest_t().m_bUpdateFile) >= 1 );
C_ASSERT( offsetof(u32_RemoteStorageUpdatePublishedFileRequest_t, m_bUpdatePreviewFile) == 33 );
C_ASSERT( sizeof(u32_RemoteStorageUpdatePublishedFileRequest_t().m_bUpdatePreviewFile) >= 1 );
C_ASSERT( offsetof(u32_RemoteStorageUpdatePublishedFileRequest_t, m_bUpdateTitle) == 34 );
C_ASSERT( sizeof(u32_RemoteStorageUpdatePublishedFileRequest_t().m_bUpdateTitle) >= 1 );
C_ASSERT( offsetof(u32_RemoteStorageUpdatePublishedFileRequest_t, m_bUpdateDescription) == 35 );
C_ASSERT( sizeof(u32_RemoteStorageUpdatePublishedFileRequest_t().m_bUpdateDescription) >= 1 );
C_ASSERT( offsetof(u32_RemoteStorageUpdatePublishedFileRequest_t, m_bUpdateVisibility) == 36 );
C_ASSERT( sizeof(u32_RemoteStorageUpdatePublishedFileRequest_t().m_bUpdateVisibility) >= 1 );
C_ASSERT( offsetof(u32_RemoteStorageUpdatePublishedFileRequest_t, m_bUpdateTags) == 37 );
C_ASSERT( sizeof(u32_RemoteStorageUpdatePublishedFileRequest_t().m_bUpdateTags) >= 1 );

C_ASSERT( sizeof(w64_RemoteStorageUpdatePublishedFileResult_t_125) >= 24 );
C_ASSERT( offsetof(w64_RemoteStorageUpdatePublishedFileResult_t_125, m_eResult) == 0 );
C_ASSERT( sizeof(w64_RemoteStorageUpdatePublishedFileResult_t_125().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageUpdatePublishedFileResult_t_125, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w64_RemoteStorageUpdatePublishedFileResult_t_125().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(w64_RemoteStorageUpdatePublishedFileResult_t_125, m_bUserNeedsToAcceptWorkshopLegalAgreement) == 16 );
C_ASSERT( sizeof(w64_RemoteStorageUpdatePublishedFileResult_t_125().m_bUserNeedsToAcceptWorkshopLegalAgreement) >= 1 );

C_ASSERT( sizeof(u64_RemoteStorageUpdatePublishedFileResult_t_125) >= 16 );
C_ASSERT( offsetof(u64_RemoteStorageUpdatePublishedFileResult_t_125, m_eResult) == 0 );
C_ASSERT( sizeof(u64_RemoteStorageUpdatePublishedFileResult_t_125().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageUpdatePublishedFileResult_t_125, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u64_RemoteStorageUpdatePublishedFileResult_t_125().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(u64_RemoteStorageUpdatePublishedFileResult_t_125, m_bUserNeedsToAcceptWorkshopLegalAgreement) == 12 );
C_ASSERT( sizeof(u64_RemoteStorageUpdatePublishedFileResult_t_125().m_bUserNeedsToAcceptWorkshopLegalAgreement) >= 1 );

C_ASSERT( sizeof(w32_RemoteStorageUpdatePublishedFileResult_t_125) >= 24 );
C_ASSERT( offsetof(w32_RemoteStorageUpdatePublishedFileResult_t_125, m_eResult) == 0 );
C_ASSERT( sizeof(w32_RemoteStorageUpdatePublishedFileResult_t_125().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageUpdatePublishedFileResult_t_125, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w32_RemoteStorageUpdatePublishedFileResult_t_125().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(w32_RemoteStorageUpdatePublishedFileResult_t_125, m_bUserNeedsToAcceptWorkshopLegalAgreement) == 16 );
C_ASSERT( sizeof(w32_RemoteStorageUpdatePublishedFileResult_t_125().m_bUserNeedsToAcceptWorkshopLegalAgreement) >= 1 );

C_ASSERT( sizeof(u32_RemoteStorageUpdatePublishedFileResult_t_125) >= 16 );
C_ASSERT( offsetof(u32_RemoteStorageUpdatePublishedFileResult_t_125, m_eResult) == 0 );
C_ASSERT( sizeof(u32_RemoteStorageUpdatePublishedFileResult_t_125().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageUpdatePublishedFileResult_t_125, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u32_RemoteStorageUpdatePublishedFileResult_t_125().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(u32_RemoteStorageUpdatePublishedFileResult_t_125, m_bUserNeedsToAcceptWorkshopLegalAgreement) == 12 );
C_ASSERT( sizeof(u32_RemoteStorageUpdatePublishedFileResult_t_125().m_bUserNeedsToAcceptWorkshopLegalAgreement) >= 1 );

C_ASSERT( sizeof(w64_RemoteStorageUpdatePublishedFileResult_t_123) >= 16 );
C_ASSERT( offsetof(w64_RemoteStorageUpdatePublishedFileResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(w64_RemoteStorageUpdatePublishedFileResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageUpdatePublishedFileResult_t_123, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w64_RemoteStorageUpdatePublishedFileResult_t_123().m_nPublishedFileId) >= 8 );

C_ASSERT( sizeof(u64_RemoteStorageUpdatePublishedFileResult_t_123) >= 12 );
C_ASSERT( offsetof(u64_RemoteStorageUpdatePublishedFileResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(u64_RemoteStorageUpdatePublishedFileResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageUpdatePublishedFileResult_t_123, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u64_RemoteStorageUpdatePublishedFileResult_t_123().m_nPublishedFileId) >= 8 );

C_ASSERT( sizeof(w32_RemoteStorageUpdatePublishedFileResult_t_123) >= 16 );
C_ASSERT( offsetof(w32_RemoteStorageUpdatePublishedFileResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(w32_RemoteStorageUpdatePublishedFileResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageUpdatePublishedFileResult_t_123, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w32_RemoteStorageUpdatePublishedFileResult_t_123().m_nPublishedFileId) >= 8 );

C_ASSERT( sizeof(u32_RemoteStorageUpdatePublishedFileResult_t_123) >= 12 );
C_ASSERT( offsetof(u32_RemoteStorageUpdatePublishedFileResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(u32_RemoteStorageUpdatePublishedFileResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageUpdatePublishedFileResult_t_123, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u32_RemoteStorageUpdatePublishedFileResult_t_123().m_nPublishedFileId) >= 8 );

C_ASSERT( sizeof(w64_RemoteStorageUpdatePublishedFileResult_t_116x) >= 16 );
C_ASSERT( offsetof(w64_RemoteStorageUpdatePublishedFileResult_t_116x, m_eResult) == 0 );
C_ASSERT( sizeof(w64_RemoteStorageUpdatePublishedFileResult_t_116x().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageUpdatePublishedFileResult_t_116x, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w64_RemoteStorageUpdatePublishedFileResult_t_116x().m_nPublishedFileId) >= 8 );

C_ASSERT( sizeof(u64_RemoteStorageUpdatePublishedFileResult_t_116x) >= 16 );
C_ASSERT( offsetof(u64_RemoteStorageUpdatePublishedFileResult_t_116x, m_eResult) == 0 );
C_ASSERT( sizeof(u64_RemoteStorageUpdatePublishedFileResult_t_116x().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageUpdatePublishedFileResult_t_116x, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(u64_RemoteStorageUpdatePublishedFileResult_t_116x().m_nPublishedFileId) >= 8 );

C_ASSERT( sizeof(w32_RemoteStorageUpdatePublishedFileResult_t_116x) >= 16 );
C_ASSERT( offsetof(w32_RemoteStorageUpdatePublishedFileResult_t_116x, m_eResult) == 0 );
C_ASSERT( sizeof(w32_RemoteStorageUpdatePublishedFileResult_t_116x().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageUpdatePublishedFileResult_t_116x, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w32_RemoteStorageUpdatePublishedFileResult_t_116x().m_nPublishedFileId) >= 8 );

C_ASSERT( sizeof(u32_RemoteStorageUpdatePublishedFileResult_t_116x) >= 12 );
C_ASSERT( offsetof(u32_RemoteStorageUpdatePublishedFileResult_t_116x, m_eResult) == 0 );
C_ASSERT( sizeof(u32_RemoteStorageUpdatePublishedFileResult_t_116x().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageUpdatePublishedFileResult_t_116x, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u32_RemoteStorageUpdatePublishedFileResult_t_116x().m_nPublishedFileId) >= 8 );

#ifdef __x86_64__
w64_RemoteStorageUpdatePublishedFileResult_t_125::operator u64_RemoteStorageUpdatePublishedFileResult_t_125() const
{
    u64_RemoteStorageUpdatePublishedFileResult_t_125 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_bUserNeedsToAcceptWorkshopLegalAgreement = this->m_bUserNeedsToAcceptWorkshopLegalAgreement;
    return ret;
}

u64_RemoteStorageUpdatePublishedFileResult_t_125::operator w64_RemoteStorageUpdatePublishedFileResult_t_125() const
{
    w64_RemoteStorageUpdatePublishedFileResult_t_125 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_bUserNeedsToAcceptWorkshopLegalAgreement = this->m_bUserNeedsToAcceptWorkshopLegalAgreement;
    return ret;
}
#endif

#ifdef __i386__
w32_RemoteStorageUpdatePublishedFileResult_t_125::operator u32_RemoteStorageUpdatePublishedFileResult_t_125() const
{
    u32_RemoteStorageUpdatePublishedFileResult_t_125 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_bUserNeedsToAcceptWorkshopLegalAgreement = this->m_bUserNeedsToAcceptWorkshopLegalAgreement;
    return ret;
}

u32_RemoteStorageUpdatePublishedFileResult_t_125::operator w32_RemoteStorageUpdatePublishedFileResult_t_125() const
{
    w32_RemoteStorageUpdatePublishedFileResult_t_125 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_bUserNeedsToAcceptWorkshopLegalAgreement = this->m_bUserNeedsToAcceptWorkshopLegalAgreement;
    return ret;
}
#endif

#ifdef __x86_64__
w64_RemoteStorageUpdatePublishedFileResult_t_123::operator u64_RemoteStorageUpdatePublishedFileResult_t_123() const
{
    u64_RemoteStorageUpdatePublishedFileResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    return ret;
}

u64_RemoteStorageUpdatePublishedFileResult_t_123::operator w64_RemoteStorageUpdatePublishedFileResult_t_123() const
{
    w64_RemoteStorageUpdatePublishedFileResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    return ret;
}
#endif

#ifdef __i386__
w32_RemoteStorageUpdatePublishedFileResult_t_123::operator u32_RemoteStorageUpdatePublishedFileResult_t_123() const
{
    u32_RemoteStorageUpdatePublishedFileResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    return ret;
}

u32_RemoteStorageUpdatePublishedFileResult_t_123::operator w32_RemoteStorageUpdatePublishedFileResult_t_123() const
{
    w32_RemoteStorageUpdatePublishedFileResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    return ret;
}
#endif

#ifdef __i386__
w32_RemoteStorageUpdatePublishedFileResult_t_116x::operator u32_RemoteStorageUpdatePublishedFileResult_t_116x() const
{
    u32_RemoteStorageUpdatePublishedFileResult_t_116x ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    return ret;
}

u32_RemoteStorageUpdatePublishedFileResult_t_116x::operator w32_RemoteStorageUpdatePublishedFileResult_t_116x() const
{
    w32_RemoteStorageUpdatePublishedFileResult_t_116x ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_RemoteStorageUpdateUserPublishedItemVoteResult_t_123) >= 16 );
C_ASSERT( offsetof(w64_RemoteStorageUpdateUserPublishedItemVoteResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(w64_RemoteStorageUpdateUserPublishedItemVoteResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageUpdateUserPublishedItemVoteResult_t_123, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w64_RemoteStorageUpdateUserPublishedItemVoteResult_t_123().m_nPublishedFileId) >= 8 );

C_ASSERT( sizeof(u64_RemoteStorageUpdateUserPublishedItemVoteResult_t_123) >= 12 );
C_ASSERT( offsetof(u64_RemoteStorageUpdateUserPublishedItemVoteResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(u64_RemoteStorageUpdateUserPublishedItemVoteResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageUpdateUserPublishedItemVoteResult_t_123, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u64_RemoteStorageUpdateUserPublishedItemVoteResult_t_123().m_nPublishedFileId) >= 8 );

C_ASSERT( sizeof(w32_RemoteStorageUpdateUserPublishedItemVoteResult_t_123) >= 16 );
C_ASSERT( offsetof(w32_RemoteStorageUpdateUserPublishedItemVoteResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(w32_RemoteStorageUpdateUserPublishedItemVoteResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageUpdateUserPublishedItemVoteResult_t_123, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w32_RemoteStorageUpdateUserPublishedItemVoteResult_t_123().m_nPublishedFileId) >= 8 );

C_ASSERT( sizeof(u32_RemoteStorageUpdateUserPublishedItemVoteResult_t_123) >= 12 );
C_ASSERT( offsetof(u32_RemoteStorageUpdateUserPublishedItemVoteResult_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(u32_RemoteStorageUpdateUserPublishedItemVoteResult_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageUpdateUserPublishedItemVoteResult_t_123, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u32_RemoteStorageUpdateUserPublishedItemVoteResult_t_123().m_nPublishedFileId) >= 8 );

C_ASSERT( sizeof(w64_RemoteStorageUpdateUserPublishedItemVoteResult_t_119) >= 16 );
C_ASSERT( offsetof(w64_RemoteStorageUpdateUserPublishedItemVoteResult_t_119, m_eResult) == 0 );
C_ASSERT( sizeof(w64_RemoteStorageUpdateUserPublishedItemVoteResult_t_119().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageUpdateUserPublishedItemVoteResult_t_119, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w64_RemoteStorageUpdateUserPublishedItemVoteResult_t_119().m_nPublishedFileId) >= 8 );

C_ASSERT( sizeof(u64_RemoteStorageUpdateUserPublishedItemVoteResult_t_119) >= 16 );
C_ASSERT( offsetof(u64_RemoteStorageUpdateUserPublishedItemVoteResult_t_119, m_eResult) == 0 );
C_ASSERT( sizeof(u64_RemoteStorageUpdateUserPublishedItemVoteResult_t_119().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageUpdateUserPublishedItemVoteResult_t_119, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(u64_RemoteStorageUpdateUserPublishedItemVoteResult_t_119().m_nPublishedFileId) >= 8 );

C_ASSERT( sizeof(w32_RemoteStorageUpdateUserPublishedItemVoteResult_t_119) >= 16 );
C_ASSERT( offsetof(w32_RemoteStorageUpdateUserPublishedItemVoteResult_t_119, m_eResult) == 0 );
C_ASSERT( sizeof(w32_RemoteStorageUpdateUserPublishedItemVoteResult_t_119().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageUpdateUserPublishedItemVoteResult_t_119, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w32_RemoteStorageUpdateUserPublishedItemVoteResult_t_119().m_nPublishedFileId) >= 8 );

C_ASSERT( sizeof(u32_RemoteStorageUpdateUserPublishedItemVoteResult_t_119) >= 12 );
C_ASSERT( offsetof(u32_RemoteStorageUpdateUserPublishedItemVoteResult_t_119, m_eResult) == 0 );
C_ASSERT( sizeof(u32_RemoteStorageUpdateUserPublishedItemVoteResult_t_119().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageUpdateUserPublishedItemVoteResult_t_119, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u32_RemoteStorageUpdateUserPublishedItemVoteResult_t_119().m_nPublishedFileId) >= 8 );

#ifdef __x86_64__
w64_RemoteStorageUpdateUserPublishedItemVoteResult_t_123::operator u64_RemoteStorageUpdateUserPublishedItemVoteResult_t_123() const
{
    u64_RemoteStorageUpdateUserPublishedItemVoteResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    return ret;
}

u64_RemoteStorageUpdateUserPublishedItemVoteResult_t_123::operator w64_RemoteStorageUpdateUserPublishedItemVoteResult_t_123() const
{
    w64_RemoteStorageUpdateUserPublishedItemVoteResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    return ret;
}
#endif

#ifdef __i386__
w32_RemoteStorageUpdateUserPublishedItemVoteResult_t_123::operator u32_RemoteStorageUpdateUserPublishedItemVoteResult_t_123() const
{
    u32_RemoteStorageUpdateUserPublishedItemVoteResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    return ret;
}

u32_RemoteStorageUpdateUserPublishedItemVoteResult_t_123::operator w32_RemoteStorageUpdateUserPublishedItemVoteResult_t_123() const
{
    w32_RemoteStorageUpdateUserPublishedItemVoteResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    return ret;
}
#endif

#ifdef __i386__
w32_RemoteStorageUpdateUserPublishedItemVoteResult_t_119::operator u32_RemoteStorageUpdateUserPublishedItemVoteResult_t_119() const
{
    u32_RemoteStorageUpdateUserPublishedItemVoteResult_t_119 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    return ret;
}

u32_RemoteStorageUpdateUserPublishedItemVoteResult_t_119::operator w32_RemoteStorageUpdateUserPublishedItemVoteResult_t_119() const
{
    w32_RemoteStorageUpdateUserPublishedItemVoteResult_t_119 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_RemoteStorageUserVoteDetails_t_123) >= 24 );
C_ASSERT( offsetof(w64_RemoteStorageUserVoteDetails_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(w64_RemoteStorageUserVoteDetails_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageUserVoteDetails_t_123, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w64_RemoteStorageUserVoteDetails_t_123().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(w64_RemoteStorageUserVoteDetails_t_123, m_eVote) == 16 );
C_ASSERT( sizeof(w64_RemoteStorageUserVoteDetails_t_123().m_eVote) >= 4 );

C_ASSERT( sizeof(u64_RemoteStorageUserVoteDetails_t_123) >= 16 );
C_ASSERT( offsetof(u64_RemoteStorageUserVoteDetails_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(u64_RemoteStorageUserVoteDetails_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageUserVoteDetails_t_123, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u64_RemoteStorageUserVoteDetails_t_123().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(u64_RemoteStorageUserVoteDetails_t_123, m_eVote) == 12 );
C_ASSERT( sizeof(u64_RemoteStorageUserVoteDetails_t_123().m_eVote) >= 4 );

C_ASSERT( sizeof(w32_RemoteStorageUserVoteDetails_t_123) >= 24 );
C_ASSERT( offsetof(w32_RemoteStorageUserVoteDetails_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(w32_RemoteStorageUserVoteDetails_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageUserVoteDetails_t_123, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w32_RemoteStorageUserVoteDetails_t_123().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(w32_RemoteStorageUserVoteDetails_t_123, m_eVote) == 16 );
C_ASSERT( sizeof(w32_RemoteStorageUserVoteDetails_t_123().m_eVote) >= 4 );

C_ASSERT( sizeof(u32_RemoteStorageUserVoteDetails_t_123) >= 16 );
C_ASSERT( offsetof(u32_RemoteStorageUserVoteDetails_t_123, m_eResult) == 0 );
C_ASSERT( sizeof(u32_RemoteStorageUserVoteDetails_t_123().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageUserVoteDetails_t_123, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u32_RemoteStorageUserVoteDetails_t_123().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(u32_RemoteStorageUserVoteDetails_t_123, m_eVote) == 12 );
C_ASSERT( sizeof(u32_RemoteStorageUserVoteDetails_t_123().m_eVote) >= 4 );

C_ASSERT( sizeof(w64_RemoteStorageUserVoteDetails_t_119) >= 24 );
C_ASSERT( offsetof(w64_RemoteStorageUserVoteDetails_t_119, m_eResult) == 0 );
C_ASSERT( sizeof(w64_RemoteStorageUserVoteDetails_t_119().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_RemoteStorageUserVoteDetails_t_119, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w64_RemoteStorageUserVoteDetails_t_119().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(w64_RemoteStorageUserVoteDetails_t_119, m_eVote) == 16 );
C_ASSERT( sizeof(w64_RemoteStorageUserVoteDetails_t_119().m_eVote) >= 4 );

C_ASSERT( sizeof(u64_RemoteStorageUserVoteDetails_t_119) >= 24 );
C_ASSERT( offsetof(u64_RemoteStorageUserVoteDetails_t_119, m_eResult) == 0 );
C_ASSERT( sizeof(u64_RemoteStorageUserVoteDetails_t_119().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_RemoteStorageUserVoteDetails_t_119, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(u64_RemoteStorageUserVoteDetails_t_119().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(u64_RemoteStorageUserVoteDetails_t_119, m_eVote) == 16 );
C_ASSERT( sizeof(u64_RemoteStorageUserVoteDetails_t_119().m_eVote) >= 4 );

C_ASSERT( sizeof(w32_RemoteStorageUserVoteDetails_t_119) >= 24 );
C_ASSERT( offsetof(w32_RemoteStorageUserVoteDetails_t_119, m_eResult) == 0 );
C_ASSERT( sizeof(w32_RemoteStorageUserVoteDetails_t_119().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_RemoteStorageUserVoteDetails_t_119, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w32_RemoteStorageUserVoteDetails_t_119().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(w32_RemoteStorageUserVoteDetails_t_119, m_eVote) == 16 );
C_ASSERT( sizeof(w32_RemoteStorageUserVoteDetails_t_119().m_eVote) >= 4 );

C_ASSERT( sizeof(u32_RemoteStorageUserVoteDetails_t_119) >= 16 );
C_ASSERT( offsetof(u32_RemoteStorageUserVoteDetails_t_119, m_eResult) == 0 );
C_ASSERT( sizeof(u32_RemoteStorageUserVoteDetails_t_119().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_RemoteStorageUserVoteDetails_t_119, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u32_RemoteStorageUserVoteDetails_t_119().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(u32_RemoteStorageUserVoteDetails_t_119, m_eVote) == 12 );
C_ASSERT( sizeof(u32_RemoteStorageUserVoteDetails_t_119().m_eVote) >= 4 );

#ifdef __x86_64__
w64_RemoteStorageUserVoteDetails_t_123::operator u64_RemoteStorageUserVoteDetails_t_123() const
{
    u64_RemoteStorageUserVoteDetails_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_eVote = this->m_eVote;
    return ret;
}

u64_RemoteStorageUserVoteDetails_t_123::operator w64_RemoteStorageUserVoteDetails_t_123() const
{
    w64_RemoteStorageUserVoteDetails_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_eVote = this->m_eVote;
    return ret;
}
#endif

#ifdef __i386__
w32_RemoteStorageUserVoteDetails_t_123::operator u32_RemoteStorageUserVoteDetails_t_123() const
{
    u32_RemoteStorageUserVoteDetails_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_eVote = this->m_eVote;
    return ret;
}

u32_RemoteStorageUserVoteDetails_t_123::operator w32_RemoteStorageUserVoteDetails_t_123() const
{
    w32_RemoteStorageUserVoteDetails_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_eVote = this->m_eVote;
    return ret;
}
#endif

#ifdef __i386__
w32_RemoteStorageUserVoteDetails_t_119::operator u32_RemoteStorageUserVoteDetails_t_119() const
{
    u32_RemoteStorageUserVoteDetails_t_119 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_eVote = this->m_eVote;
    return ret;
}

u32_RemoteStorageUserVoteDetails_t_119::operator w32_RemoteStorageUserVoteDetails_t_119() const
{
    w32_RemoteStorageUserVoteDetails_t_119 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_eVote = this->m_eVote;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_RemoveAppDependencyResult_t) >= 24 );
C_ASSERT( offsetof(w64_RemoveAppDependencyResult_t, m_eResult) == 0 );
C_ASSERT( sizeof(w64_RemoveAppDependencyResult_t().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_RemoveAppDependencyResult_t, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w64_RemoveAppDependencyResult_t().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(w64_RemoveAppDependencyResult_t, m_nAppID) == 16 );
C_ASSERT( sizeof(w64_RemoveAppDependencyResult_t().m_nAppID) >= 4 );

C_ASSERT( sizeof(u64_RemoveAppDependencyResult_t) >= 16 );
C_ASSERT( offsetof(u64_RemoveAppDependencyResult_t, m_eResult) == 0 );
C_ASSERT( sizeof(u64_RemoveAppDependencyResult_t().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_RemoveAppDependencyResult_t, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u64_RemoveAppDependencyResult_t().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(u64_RemoveAppDependencyResult_t, m_nAppID) == 12 );
C_ASSERT( sizeof(u64_RemoveAppDependencyResult_t().m_nAppID) >= 4 );

C_ASSERT( sizeof(w32_RemoveAppDependencyResult_t) >= 24 );
C_ASSERT( offsetof(w32_RemoveAppDependencyResult_t, m_eResult) == 0 );
C_ASSERT( sizeof(w32_RemoveAppDependencyResult_t().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_RemoveAppDependencyResult_t, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w32_RemoveAppDependencyResult_t().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(w32_RemoveAppDependencyResult_t, m_nAppID) == 16 );
C_ASSERT( sizeof(w32_RemoveAppDependencyResult_t().m_nAppID) >= 4 );

C_ASSERT( sizeof(u32_RemoveAppDependencyResult_t) >= 16 );
C_ASSERT( offsetof(u32_RemoveAppDependencyResult_t, m_eResult) == 0 );
C_ASSERT( sizeof(u32_RemoveAppDependencyResult_t().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_RemoveAppDependencyResult_t, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u32_RemoveAppDependencyResult_t().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(u32_RemoveAppDependencyResult_t, m_nAppID) == 12 );
C_ASSERT( sizeof(u32_RemoveAppDependencyResult_t().m_nAppID) >= 4 );

#ifdef __x86_64__
w64_RemoveAppDependencyResult_t::operator u64_RemoveAppDependencyResult_t() const
{
    u64_RemoveAppDependencyResult_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_nAppID = this->m_nAppID;
    return ret;
}

u64_RemoveAppDependencyResult_t::operator w64_RemoveAppDependencyResult_t() const
{
    w64_RemoveAppDependencyResult_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_nAppID = this->m_nAppID;
    return ret;
}
#endif

#ifdef __i386__
w32_RemoveAppDependencyResult_t::operator u32_RemoveAppDependencyResult_t() const
{
    u32_RemoveAppDependencyResult_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_nAppID = this->m_nAppID;
    return ret;
}

u32_RemoveAppDependencyResult_t::operator w32_RemoveAppDependencyResult_t() const
{
    w32_RemoveAppDependencyResult_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_nAppID = this->m_nAppID;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_RemoveUGCDependencyResult_t) >= 24 );
C_ASSERT( offsetof(w64_RemoveUGCDependencyResult_t, m_eResult) == 0 );
C_ASSERT( sizeof(w64_RemoveUGCDependencyResult_t().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_RemoveUGCDependencyResult_t, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w64_RemoveUGCDependencyResult_t().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(w64_RemoveUGCDependencyResult_t, m_nChildPublishedFileId) == 16 );
C_ASSERT( sizeof(w64_RemoveUGCDependencyResult_t().m_nChildPublishedFileId) >= 8 );

C_ASSERT( sizeof(u64_RemoveUGCDependencyResult_t) >= 20 );
C_ASSERT( offsetof(u64_RemoveUGCDependencyResult_t, m_eResult) == 0 );
C_ASSERT( sizeof(u64_RemoveUGCDependencyResult_t().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_RemoveUGCDependencyResult_t, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u64_RemoveUGCDependencyResult_t().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(u64_RemoveUGCDependencyResult_t, m_nChildPublishedFileId) == 12 );
C_ASSERT( sizeof(u64_RemoveUGCDependencyResult_t().m_nChildPublishedFileId) >= 8 );

C_ASSERT( sizeof(w32_RemoveUGCDependencyResult_t) >= 24 );
C_ASSERT( offsetof(w32_RemoveUGCDependencyResult_t, m_eResult) == 0 );
C_ASSERT( sizeof(w32_RemoveUGCDependencyResult_t().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_RemoveUGCDependencyResult_t, m_nPublishedFileId) == 8 );
C_ASSERT( sizeof(w32_RemoveUGCDependencyResult_t().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(w32_RemoveUGCDependencyResult_t, m_nChildPublishedFileId) == 16 );
C_ASSERT( sizeof(w32_RemoveUGCDependencyResult_t().m_nChildPublishedFileId) >= 8 );

C_ASSERT( sizeof(u32_RemoveUGCDependencyResult_t) >= 20 );
C_ASSERT( offsetof(u32_RemoveUGCDependencyResult_t, m_eResult) == 0 );
C_ASSERT( sizeof(u32_RemoveUGCDependencyResult_t().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_RemoveUGCDependencyResult_t, m_nPublishedFileId) == 4 );
C_ASSERT( sizeof(u32_RemoveUGCDependencyResult_t().m_nPublishedFileId) >= 8 );
C_ASSERT( offsetof(u32_RemoveUGCDependencyResult_t, m_nChildPublishedFileId) == 12 );
C_ASSERT( sizeof(u32_RemoveUGCDependencyResult_t().m_nChildPublishedFileId) >= 8 );

#ifdef __x86_64__
w64_RemoveUGCDependencyResult_t::operator u64_RemoveUGCDependencyResult_t() const
{
    u64_RemoveUGCDependencyResult_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_nChildPublishedFileId = this->m_nChildPublishedFileId;
    return ret;
}

u64_RemoveUGCDependencyResult_t::operator w64_RemoveUGCDependencyResult_t() const
{
    w64_RemoveUGCDependencyResult_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_nChildPublishedFileId = this->m_nChildPublishedFileId;
    return ret;
}
#endif

#ifdef __i386__
w32_RemoveUGCDependencyResult_t::operator u32_RemoveUGCDependencyResult_t() const
{
    u32_RemoveUGCDependencyResult_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_nChildPublishedFileId = this->m_nChildPublishedFileId;
    return ret;
}

u32_RemoveUGCDependencyResult_t::operator w32_RemoveUGCDependencyResult_t() const
{
    w32_RemoveUGCDependencyResult_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_nPublishedFileId = this->m_nPublishedFileId;
    ret.m_nChildPublishedFileId = this->m_nChildPublishedFileId;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_RequestPlayersForGameFinalResultCallback_t) >= 24 );
C_ASSERT( offsetof(w64_RequestPlayersForGameFinalResultCallback_t, m_eResult) == 0 );
C_ASSERT( sizeof(w64_RequestPlayersForGameFinalResultCallback_t().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_RequestPlayersForGameFinalResultCallback_t, m_ullSearchID) == 8 );
C_ASSERT( sizeof(w64_RequestPlayersForGameFinalResultCallback_t().m_ullSearchID) >= 8 );
C_ASSERT( offsetof(w64_RequestPlayersForGameFinalResultCallback_t, m_ullUniqueGameID) == 16 );
C_ASSERT( sizeof(w64_RequestPlayersForGameFinalResultCallback_t().m_ullUniqueGameID) >= 8 );

C_ASSERT( sizeof(u64_RequestPlayersForGameFinalResultCallback_t) >= 20 );
C_ASSERT( offsetof(u64_RequestPlayersForGameFinalResultCallback_t, m_eResult) == 0 );
C_ASSERT( sizeof(u64_RequestPlayersForGameFinalResultCallback_t().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_RequestPlayersForGameFinalResultCallback_t, m_ullSearchID) == 4 );
C_ASSERT( sizeof(u64_RequestPlayersForGameFinalResultCallback_t().m_ullSearchID) >= 8 );
C_ASSERT( offsetof(u64_RequestPlayersForGameFinalResultCallback_t, m_ullUniqueGameID) == 12 );
C_ASSERT( sizeof(u64_RequestPlayersForGameFinalResultCallback_t().m_ullUniqueGameID) >= 8 );

C_ASSERT( sizeof(w32_RequestPlayersForGameFinalResultCallback_t) >= 24 );
C_ASSERT( offsetof(w32_RequestPlayersForGameFinalResultCallback_t, m_eResult) == 0 );
C_ASSERT( sizeof(w32_RequestPlayersForGameFinalResultCallback_t().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_RequestPlayersForGameFinalResultCallback_t, m_ullSearchID) == 8 );
C_ASSERT( sizeof(w32_RequestPlayersForGameFinalResultCallback_t().m_ullSearchID) >= 8 );
C_ASSERT( offsetof(w32_RequestPlayersForGameFinalResultCallback_t, m_ullUniqueGameID) == 16 );
C_ASSERT( sizeof(w32_RequestPlayersForGameFinalResultCallback_t().m_ullUniqueGameID) >= 8 );

C_ASSERT( sizeof(u32_RequestPlayersForGameFinalResultCallback_t) >= 20 );
C_ASSERT( offsetof(u32_RequestPlayersForGameFinalResultCallback_t, m_eResult) == 0 );
C_ASSERT( sizeof(u32_RequestPlayersForGameFinalResultCallback_t().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_RequestPlayersForGameFinalResultCallback_t, m_ullSearchID) == 4 );
C_ASSERT( sizeof(u32_RequestPlayersForGameFinalResultCallback_t().m_ullSearchID) >= 8 );
C_ASSERT( offsetof(u32_RequestPlayersForGameFinalResultCallback_t, m_ullUniqueGameID) == 12 );
C_ASSERT( sizeof(u32_RequestPlayersForGameFinalResultCallback_t().m_ullUniqueGameID) >= 8 );

#ifdef __x86_64__
w64_RequestPlayersForGameFinalResultCallback_t::operator u64_RequestPlayersForGameFinalResultCallback_t() const
{
    u64_RequestPlayersForGameFinalResultCallback_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_ullSearchID = this->m_ullSearchID;
    ret.m_ullUniqueGameID = this->m_ullUniqueGameID;
    return ret;
}

u64_RequestPlayersForGameFinalResultCallback_t::operator w64_RequestPlayersForGameFinalResultCallback_t() const
{
    w64_RequestPlayersForGameFinalResultCallback_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_ullSearchID = this->m_ullSearchID;
    ret.m_ullUniqueGameID = this->m_ullUniqueGameID;
    return ret;
}
#endif

#ifdef __i386__
w32_RequestPlayersForGameFinalResultCallback_t::operator u32_RequestPlayersForGameFinalResultCallback_t() const
{
    u32_RequestPlayersForGameFinalResultCallback_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_ullSearchID = this->m_ullSearchID;
    ret.m_ullUniqueGameID = this->m_ullUniqueGameID;
    return ret;
}

u32_RequestPlayersForGameFinalResultCallback_t::operator w32_RequestPlayersForGameFinalResultCallback_t() const
{
    w32_RequestPlayersForGameFinalResultCallback_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_ullSearchID = this->m_ullSearchID;
    ret.m_ullUniqueGameID = this->m_ullUniqueGameID;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_RequestPlayersForGameProgressCallback_t) >= 16 );
C_ASSERT( offsetof(w64_RequestPlayersForGameProgressCallback_t, m_eResult) == 0 );
C_ASSERT( sizeof(w64_RequestPlayersForGameProgressCallback_t().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_RequestPlayersForGameProgressCallback_t, m_ullSearchID) == 8 );
C_ASSERT( sizeof(w64_RequestPlayersForGameProgressCallback_t().m_ullSearchID) >= 8 );

C_ASSERT( sizeof(u64_RequestPlayersForGameProgressCallback_t) >= 12 );
C_ASSERT( offsetof(u64_RequestPlayersForGameProgressCallback_t, m_eResult) == 0 );
C_ASSERT( sizeof(u64_RequestPlayersForGameProgressCallback_t().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_RequestPlayersForGameProgressCallback_t, m_ullSearchID) == 4 );
C_ASSERT( sizeof(u64_RequestPlayersForGameProgressCallback_t().m_ullSearchID) >= 8 );

C_ASSERT( sizeof(w32_RequestPlayersForGameProgressCallback_t) >= 16 );
C_ASSERT( offsetof(w32_RequestPlayersForGameProgressCallback_t, m_eResult) == 0 );
C_ASSERT( sizeof(w32_RequestPlayersForGameProgressCallback_t().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_RequestPlayersForGameProgressCallback_t, m_ullSearchID) == 8 );
C_ASSERT( sizeof(w32_RequestPlayersForGameProgressCallback_t().m_ullSearchID) >= 8 );

C_ASSERT( sizeof(u32_RequestPlayersForGameProgressCallback_t) >= 12 );
C_ASSERT( offsetof(u32_RequestPlayersForGameProgressCallback_t, m_eResult) == 0 );
C_ASSERT( sizeof(u32_RequestPlayersForGameProgressCallback_t().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_RequestPlayersForGameProgressCallback_t, m_ullSearchID) == 4 );
C_ASSERT( sizeof(u32_RequestPlayersForGameProgressCallback_t().m_ullSearchID) >= 8 );

#ifdef __x86_64__
w64_RequestPlayersForGameProgressCallback_t::operator u64_RequestPlayersForGameProgressCallback_t() const
{
    u64_RequestPlayersForGameProgressCallback_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_ullSearchID = this->m_ullSearchID;
    return ret;
}

u64_RequestPlayersForGameProgressCallback_t::operator w64_RequestPlayersForGameProgressCallback_t() const
{
    w64_RequestPlayersForGameProgressCallback_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_ullSearchID = this->m_ullSearchID;
    return ret;
}
#endif

#ifdef __i386__
w32_RequestPlayersForGameProgressCallback_t::operator u32_RequestPlayersForGameProgressCallback_t() const
{
    u32_RequestPlayersForGameProgressCallback_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_ullSearchID = this->m_ullSearchID;
    return ret;
}

u32_RequestPlayersForGameProgressCallback_t::operator w32_RequestPlayersForGameProgressCallback_t() const
{
    w32_RequestPlayersForGameProgressCallback_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_ullSearchID = this->m_ullSearchID;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_RequestPlayersForGameResultCallback_t) >= 64 );
C_ASSERT( offsetof(w64_RequestPlayersForGameResultCallback_t, m_eResult) == 0 );
C_ASSERT( sizeof(w64_RequestPlayersForGameResultCallback_t().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_RequestPlayersForGameResultCallback_t, m_ullSearchID) == 8 );
C_ASSERT( sizeof(w64_RequestPlayersForGameResultCallback_t().m_ullSearchID) >= 8 );
C_ASSERT( offsetof(w64_RequestPlayersForGameResultCallback_t, m_SteamIDPlayerFound) == 16 );
C_ASSERT( sizeof(w64_RequestPlayersForGameResultCallback_t().m_SteamIDPlayerFound) >= 8 );
C_ASSERT( offsetof(w64_RequestPlayersForGameResultCallback_t, m_SteamIDLobby) == 24 );
C_ASSERT( sizeof(w64_RequestPlayersForGameResultCallback_t().m_SteamIDLobby) >= 8 );
C_ASSERT( offsetof(w64_RequestPlayersForGameResultCallback_t, m_ePlayerAcceptState) == 32 );
C_ASSERT( sizeof(w64_RequestPlayersForGameResultCallback_t().m_ePlayerAcceptState) >= 4 );
C_ASSERT( offsetof(w64_RequestPlayersForGameResultCallback_t, m_nPlayerIndex) == 36 );
C_ASSERT( sizeof(w64_RequestPlayersForGameResultCallback_t().m_nPlayerIndex) >= 4 );
C_ASSERT( offsetof(w64_RequestPlayersForGameResultCallback_t, m_nTotalPlayersFound) == 40 );
C_ASSERT( sizeof(w64_RequestPlayersForGameResultCallback_t().m_nTotalPlayersFound) >= 4 );
C_ASSERT( offsetof(w64_RequestPlayersForGameResultCallback_t, m_nTotalPlayersAcceptedGame) == 44 );
C_ASSERT( sizeof(w64_RequestPlayersForGameResultCallback_t().m_nTotalPlayersAcceptedGame) >= 4 );
C_ASSERT( offsetof(w64_RequestPlayersForGameResultCallback_t, m_nSuggestedTeamIndex) == 48 );
C_ASSERT( sizeof(w64_RequestPlayersForGameResultCallback_t().m_nSuggestedTeamIndex) >= 4 );
C_ASSERT( offsetof(w64_RequestPlayersForGameResultCallback_t, m_ullUniqueGameID) == 56 );
C_ASSERT( sizeof(w64_RequestPlayersForGameResultCallback_t().m_ullUniqueGameID) >= 8 );

C_ASSERT( sizeof(u64_RequestPlayersForGameResultCallback_t) >= 56 );
C_ASSERT( offsetof(u64_RequestPlayersForGameResultCallback_t, m_eResult) == 0 );
C_ASSERT( sizeof(u64_RequestPlayersForGameResultCallback_t().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_RequestPlayersForGameResultCallback_t, m_ullSearchID) == 4 );
C_ASSERT( sizeof(u64_RequestPlayersForGameResultCallback_t().m_ullSearchID) >= 8 );
C_ASSERT( offsetof(u64_RequestPlayersForGameResultCallback_t, m_SteamIDPlayerFound) == 12 );
C_ASSERT( sizeof(u64_RequestPlayersForGameResultCallback_t().m_SteamIDPlayerFound) >= 8 );
C_ASSERT( offsetof(u64_RequestPlayersForGameResultCallback_t, m_SteamIDLobby) == 20 );
C_ASSERT( sizeof(u64_RequestPlayersForGameResultCallback_t().m_SteamIDLobby) >= 8 );
C_ASSERT( offsetof(u64_RequestPlayersForGameResultCallback_t, m_ePlayerAcceptState) == 28 );
C_ASSERT( sizeof(u64_RequestPlayersForGameResultCallback_t().m_ePlayerAcceptState) >= 4 );
C_ASSERT( offsetof(u64_RequestPlayersForGameResultCallback_t, m_nPlayerIndex) == 32 );
C_ASSERT( sizeof(u64_RequestPlayersForGameResultCallback_t().m_nPlayerIndex) >= 4 );
C_ASSERT( offsetof(u64_RequestPlayersForGameResultCallback_t, m_nTotalPlayersFound) == 36 );
C_ASSERT( sizeof(u64_RequestPlayersForGameResultCallback_t().m_nTotalPlayersFound) >= 4 );
C_ASSERT( offsetof(u64_RequestPlayersForGameResultCallback_t, m_nTotalPlayersAcceptedGame) == 40 );
C_ASSERT( sizeof(u64_RequestPlayersForGameResultCallback_t().m_nTotalPlayersAcceptedGame) >= 4 );
C_ASSERT( offsetof(u64_RequestPlayersForGameResultCallback_t, m_nSuggestedTeamIndex) == 44 );
C_ASSERT( sizeof(u64_RequestPlayersForGameResultCallback_t().m_nSuggestedTeamIndex) >= 4 );
C_ASSERT( offsetof(u64_RequestPlayersForGameResultCallback_t, m_ullUniqueGameID) == 48 );
C_ASSERT( sizeof(u64_RequestPlayersForGameResultCallback_t().m_ullUniqueGameID) >= 8 );

C_ASSERT( sizeof(w32_RequestPlayersForGameResultCallback_t) >= 64 );
C_ASSERT( offsetof(w32_RequestPlayersForGameResultCallback_t, m_eResult) == 0 );
C_ASSERT( sizeof(w32_RequestPlayersForGameResultCallback_t().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_RequestPlayersForGameResultCallback_t, m_ullSearchID) == 8 );
C_ASSERT( sizeof(w32_RequestPlayersForGameResultCallback_t().m_ullSearchID) >= 8 );
C_ASSERT( offsetof(w32_RequestPlayersForGameResultCallback_t, m_SteamIDPlayerFound) == 16 );
C_ASSERT( sizeof(w32_RequestPlayersForGameResultCallback_t().m_SteamIDPlayerFound) >= 8 );
C_ASSERT( offsetof(w32_RequestPlayersForGameResultCallback_t, m_SteamIDLobby) == 24 );
C_ASSERT( sizeof(w32_RequestPlayersForGameResultCallback_t().m_SteamIDLobby) >= 8 );
C_ASSERT( offsetof(w32_RequestPlayersForGameResultCallback_t, m_ePlayerAcceptState) == 32 );
C_ASSERT( sizeof(w32_RequestPlayersForGameResultCallback_t().m_ePlayerAcceptState) >= 4 );
C_ASSERT( offsetof(w32_RequestPlayersForGameResultCallback_t, m_nPlayerIndex) == 36 );
C_ASSERT( sizeof(w32_RequestPlayersForGameResultCallback_t().m_nPlayerIndex) >= 4 );
C_ASSERT( offsetof(w32_RequestPlayersForGameResultCallback_t, m_nTotalPlayersFound) == 40 );
C_ASSERT( sizeof(w32_RequestPlayersForGameResultCallback_t().m_nTotalPlayersFound) >= 4 );
C_ASSERT( offsetof(w32_RequestPlayersForGameResultCallback_t, m_nTotalPlayersAcceptedGame) == 44 );
C_ASSERT( sizeof(w32_RequestPlayersForGameResultCallback_t().m_nTotalPlayersAcceptedGame) >= 4 );
C_ASSERT( offsetof(w32_RequestPlayersForGameResultCallback_t, m_nSuggestedTeamIndex) == 48 );
C_ASSERT( sizeof(w32_RequestPlayersForGameResultCallback_t().m_nSuggestedTeamIndex) >= 4 );
C_ASSERT( offsetof(w32_RequestPlayersForGameResultCallback_t, m_ullUniqueGameID) == 56 );
C_ASSERT( sizeof(w32_RequestPlayersForGameResultCallback_t().m_ullUniqueGameID) >= 8 );

C_ASSERT( sizeof(u32_RequestPlayersForGameResultCallback_t) >= 56 );
C_ASSERT( offsetof(u32_RequestPlayersForGameResultCallback_t, m_eResult) == 0 );
C_ASSERT( sizeof(u32_RequestPlayersForGameResultCallback_t().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_RequestPlayersForGameResultCallback_t, m_ullSearchID) == 4 );
C_ASSERT( sizeof(u32_RequestPlayersForGameResultCallback_t().m_ullSearchID) >= 8 );
C_ASSERT( offsetof(u32_RequestPlayersForGameResultCallback_t, m_SteamIDPlayerFound) == 12 );
C_ASSERT( sizeof(u32_RequestPlayersForGameResultCallback_t().m_SteamIDPlayerFound) >= 8 );
C_ASSERT( offsetof(u32_RequestPlayersForGameResultCallback_t, m_SteamIDLobby) == 20 );
C_ASSERT( sizeof(u32_RequestPlayersForGameResultCallback_t().m_SteamIDLobby) >= 8 );
C_ASSERT( offsetof(u32_RequestPlayersForGameResultCallback_t, m_ePlayerAcceptState) == 28 );
C_ASSERT( sizeof(u32_RequestPlayersForGameResultCallback_t().m_ePlayerAcceptState) >= 4 );
C_ASSERT( offsetof(u32_RequestPlayersForGameResultCallback_t, m_nPlayerIndex) == 32 );
C_ASSERT( sizeof(u32_RequestPlayersForGameResultCallback_t().m_nPlayerIndex) >= 4 );
C_ASSERT( offsetof(u32_RequestPlayersForGameResultCallback_t, m_nTotalPlayersFound) == 36 );
C_ASSERT( sizeof(u32_RequestPlayersForGameResultCallback_t().m_nTotalPlayersFound) >= 4 );
C_ASSERT( offsetof(u32_RequestPlayersForGameResultCallback_t, m_nTotalPlayersAcceptedGame) == 40 );
C_ASSERT( sizeof(u32_RequestPlayersForGameResultCallback_t().m_nTotalPlayersAcceptedGame) >= 4 );
C_ASSERT( offsetof(u32_RequestPlayersForGameResultCallback_t, m_nSuggestedTeamIndex) == 44 );
C_ASSERT( sizeof(u32_RequestPlayersForGameResultCallback_t().m_nSuggestedTeamIndex) >= 4 );
C_ASSERT( offsetof(u32_RequestPlayersForGameResultCallback_t, m_ullUniqueGameID) == 48 );
C_ASSERT( sizeof(u32_RequestPlayersForGameResultCallback_t().m_ullUniqueGameID) >= 8 );

#ifdef __x86_64__
w64_RequestPlayersForGameResultCallback_t::operator u64_RequestPlayersForGameResultCallback_t() const
{
    u64_RequestPlayersForGameResultCallback_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_ullSearchID = this->m_ullSearchID;
    ret.m_SteamIDPlayerFound = this->m_SteamIDPlayerFound;
    ret.m_SteamIDLobby = this->m_SteamIDLobby;
    ret.m_ePlayerAcceptState = this->m_ePlayerAcceptState;
    ret.m_nPlayerIndex = this->m_nPlayerIndex;
    ret.m_nTotalPlayersFound = this->m_nTotalPlayersFound;
    ret.m_nTotalPlayersAcceptedGame = this->m_nTotalPlayersAcceptedGame;
    ret.m_nSuggestedTeamIndex = this->m_nSuggestedTeamIndex;
    ret.m_ullUniqueGameID = this->m_ullUniqueGameID;
    return ret;
}

u64_RequestPlayersForGameResultCallback_t::operator w64_RequestPlayersForGameResultCallback_t() const
{
    w64_RequestPlayersForGameResultCallback_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_ullSearchID = this->m_ullSearchID;
    ret.m_SteamIDPlayerFound = this->m_SteamIDPlayerFound;
    ret.m_SteamIDLobby = this->m_SteamIDLobby;
    ret.m_ePlayerAcceptState = this->m_ePlayerAcceptState;
    ret.m_nPlayerIndex = this->m_nPlayerIndex;
    ret.m_nTotalPlayersFound = this->m_nTotalPlayersFound;
    ret.m_nTotalPlayersAcceptedGame = this->m_nTotalPlayersAcceptedGame;
    ret.m_nSuggestedTeamIndex = this->m_nSuggestedTeamIndex;
    ret.m_ullUniqueGameID = this->m_ullUniqueGameID;
    return ret;
}
#endif

#ifdef __i386__
w32_RequestPlayersForGameResultCallback_t::operator u32_RequestPlayersForGameResultCallback_t() const
{
    u32_RequestPlayersForGameResultCallback_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_ullSearchID = this->m_ullSearchID;
    ret.m_SteamIDPlayerFound = this->m_SteamIDPlayerFound;
    ret.m_SteamIDLobby = this->m_SteamIDLobby;
    ret.m_ePlayerAcceptState = this->m_ePlayerAcceptState;
    ret.m_nPlayerIndex = this->m_nPlayerIndex;
    ret.m_nTotalPlayersFound = this->m_nTotalPlayersFound;
    ret.m_nTotalPlayersAcceptedGame = this->m_nTotalPlayersAcceptedGame;
    ret.m_nSuggestedTeamIndex = this->m_nSuggestedTeamIndex;
    ret.m_ullUniqueGameID = this->m_ullUniqueGameID;
    return ret;
}

u32_RequestPlayersForGameResultCallback_t::operator w32_RequestPlayersForGameResultCallback_t() const
{
    w32_RequestPlayersForGameResultCallback_t ret;
    ret.m_eResult = this->m_eResult;
    ret.m_ullSearchID = this->m_ullSearchID;
    ret.m_SteamIDPlayerFound = this->m_SteamIDPlayerFound;
    ret.m_SteamIDLobby = this->m_SteamIDLobby;
    ret.m_ePlayerAcceptState = this->m_ePlayerAcceptState;
    ret.m_nPlayerIndex = this->m_nPlayerIndex;
    ret.m_nTotalPlayersFound = this->m_nTotalPlayersFound;
    ret.m_nTotalPlayersAcceptedGame = this->m_nTotalPlayersAcceptedGame;
    ret.m_nSuggestedTeamIndex = this->m_nSuggestedTeamIndex;
    ret.m_ullUniqueGameID = this->m_ullUniqueGameID;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_SteamInputConfigurationLoaded_t) >= 40 );
C_ASSERT( offsetof(w64_SteamInputConfigurationLoaded_t, m_unAppID) == 0 );
C_ASSERT( sizeof(w64_SteamInputConfigurationLoaded_t().m_unAppID) >= 4 );
C_ASSERT( offsetof(w64_SteamInputConfigurationLoaded_t, m_ulDeviceHandle) == 8 );
C_ASSERT( sizeof(w64_SteamInputConfigurationLoaded_t().m_ulDeviceHandle) >= 8 );
C_ASSERT( offsetof(w64_SteamInputConfigurationLoaded_t, m_ulMappingCreator) == 16 );
C_ASSERT( sizeof(w64_SteamInputConfigurationLoaded_t().m_ulMappingCreator) >= 8 );
C_ASSERT( offsetof(w64_SteamInputConfigurationLoaded_t, m_unMajorRevision) == 24 );
C_ASSERT( sizeof(w64_SteamInputConfigurationLoaded_t().m_unMajorRevision) >= 4 );
C_ASSERT( offsetof(w64_SteamInputConfigurationLoaded_t, m_unMinorRevision) == 28 );
C_ASSERT( sizeof(w64_SteamInputConfigurationLoaded_t().m_unMinorRevision) >= 4 );
C_ASSERT( offsetof(w64_SteamInputConfigurationLoaded_t, m_bUsesSteamInputAPI) == 32 );
C_ASSERT( sizeof(w64_SteamInputConfigurationLoaded_t().m_bUsesSteamInputAPI) >= 1 );
C_ASSERT( offsetof(w64_SteamInputConfigurationLoaded_t, m_bUsesGamepadAPI) == 33 );
C_ASSERT( sizeof(w64_SteamInputConfigurationLoaded_t().m_bUsesGamepadAPI) >= 1 );

C_ASSERT( sizeof(u64_SteamInputConfigurationLoaded_t) >= 32 );
C_ASSERT( offsetof(u64_SteamInputConfigurationLoaded_t, m_unAppID) == 0 );
C_ASSERT( sizeof(u64_SteamInputConfigurationLoaded_t().m_unAppID) >= 4 );
C_ASSERT( offsetof(u64_SteamInputConfigurationLoaded_t, m_ulDeviceHandle) == 4 );
C_ASSERT( sizeof(u64_SteamInputConfigurationLoaded_t().m_ulDeviceHandle) >= 8 );
C_ASSERT( offsetof(u64_SteamInputConfigurationLoaded_t, m_ulMappingCreator) == 12 );
C_ASSERT( sizeof(u64_SteamInputConfigurationLoaded_t().m_ulMappingCreator) >= 8 );
C_ASSERT( offsetof(u64_SteamInputConfigurationLoaded_t, m_unMajorRevision) == 20 );
C_ASSERT( sizeof(u64_SteamInputConfigurationLoaded_t().m_unMajorRevision) >= 4 );
C_ASSERT( offsetof(u64_SteamInputConfigurationLoaded_t, m_unMinorRevision) == 24 );
C_ASSERT( sizeof(u64_SteamInputConfigurationLoaded_t().m_unMinorRevision) >= 4 );
C_ASSERT( offsetof(u64_SteamInputConfigurationLoaded_t, m_bUsesSteamInputAPI) == 28 );
C_ASSERT( sizeof(u64_SteamInputConfigurationLoaded_t().m_bUsesSteamInputAPI) >= 1 );
C_ASSERT( offsetof(u64_SteamInputConfigurationLoaded_t, m_bUsesGamepadAPI) == 29 );
C_ASSERT( sizeof(u64_SteamInputConfigurationLoaded_t().m_bUsesGamepadAPI) >= 1 );

C_ASSERT( sizeof(w32_SteamInputConfigurationLoaded_t) >= 40 );
C_ASSERT( offsetof(w32_SteamInputConfigurationLoaded_t, m_unAppID) == 0 );
C_ASSERT( sizeof(w32_SteamInputConfigurationLoaded_t().m_unAppID) >= 4 );
C_ASSERT( offsetof(w32_SteamInputConfigurationLoaded_t, m_ulDeviceHandle) == 8 );
C_ASSERT( sizeof(w32_SteamInputConfigurationLoaded_t().m_ulDeviceHandle) >= 8 );
C_ASSERT( offsetof(w32_SteamInputConfigurationLoaded_t, m_ulMappingCreator) == 16 );
C_ASSERT( sizeof(w32_SteamInputConfigurationLoaded_t().m_ulMappingCreator) >= 8 );
C_ASSERT( offsetof(w32_SteamInputConfigurationLoaded_t, m_unMajorRevision) == 24 );
C_ASSERT( sizeof(w32_SteamInputConfigurationLoaded_t().m_unMajorRevision) >= 4 );
C_ASSERT( offsetof(w32_SteamInputConfigurationLoaded_t, m_unMinorRevision) == 28 );
C_ASSERT( sizeof(w32_SteamInputConfigurationLoaded_t().m_unMinorRevision) >= 4 );
C_ASSERT( offsetof(w32_SteamInputConfigurationLoaded_t, m_bUsesSteamInputAPI) == 32 );
C_ASSERT( sizeof(w32_SteamInputConfigurationLoaded_t().m_bUsesSteamInputAPI) >= 1 );
C_ASSERT( offsetof(w32_SteamInputConfigurationLoaded_t, m_bUsesGamepadAPI) == 33 );
C_ASSERT( sizeof(w32_SteamInputConfigurationLoaded_t().m_bUsesGamepadAPI) >= 1 );

C_ASSERT( sizeof(u32_SteamInputConfigurationLoaded_t) >= 32 );
C_ASSERT( offsetof(u32_SteamInputConfigurationLoaded_t, m_unAppID) == 0 );
C_ASSERT( sizeof(u32_SteamInputConfigurationLoaded_t().m_unAppID) >= 4 );
C_ASSERT( offsetof(u32_SteamInputConfigurationLoaded_t, m_ulDeviceHandle) == 4 );
C_ASSERT( sizeof(u32_SteamInputConfigurationLoaded_t().m_ulDeviceHandle) >= 8 );
C_ASSERT( offsetof(u32_SteamInputConfigurationLoaded_t, m_ulMappingCreator) == 12 );
C_ASSERT( sizeof(u32_SteamInputConfigurationLoaded_t().m_ulMappingCreator) >= 8 );
C_ASSERT( offsetof(u32_SteamInputConfigurationLoaded_t, m_unMajorRevision) == 20 );
C_ASSERT( sizeof(u32_SteamInputConfigurationLoaded_t().m_unMajorRevision) >= 4 );
C_ASSERT( offsetof(u32_SteamInputConfigurationLoaded_t, m_unMinorRevision) == 24 );
C_ASSERT( sizeof(u32_SteamInputConfigurationLoaded_t().m_unMinorRevision) >= 4 );
C_ASSERT( offsetof(u32_SteamInputConfigurationLoaded_t, m_bUsesSteamInputAPI) == 28 );
C_ASSERT( sizeof(u32_SteamInputConfigurationLoaded_t().m_bUsesSteamInputAPI) >= 1 );
C_ASSERT( offsetof(u32_SteamInputConfigurationLoaded_t, m_bUsesGamepadAPI) == 29 );
C_ASSERT( sizeof(u32_SteamInputConfigurationLoaded_t().m_bUsesGamepadAPI) >= 1 );

#ifdef __x86_64__
w64_SteamInputConfigurationLoaded_t::operator u64_SteamInputConfigurationLoaded_t() const
{
    u64_SteamInputConfigurationLoaded_t ret;
    ret.m_unAppID = this->m_unAppID;
    ret.m_ulDeviceHandle = this->m_ulDeviceHandle;
    ret.m_ulMappingCreator = this->m_ulMappingCreator;
    ret.m_unMajorRevision = this->m_unMajorRevision;
    ret.m_unMinorRevision = this->m_unMinorRevision;
    ret.m_bUsesSteamInputAPI = this->m_bUsesSteamInputAPI;
    ret.m_bUsesGamepadAPI = this->m_bUsesGamepadAPI;
    return ret;
}

u64_SteamInputConfigurationLoaded_t::operator w64_SteamInputConfigurationLoaded_t() const
{
    w64_SteamInputConfigurationLoaded_t ret;
    ret.m_unAppID = this->m_unAppID;
    ret.m_ulDeviceHandle = this->m_ulDeviceHandle;
    ret.m_ulMappingCreator = this->m_ulMappingCreator;
    ret.m_unMajorRevision = this->m_unMajorRevision;
    ret.m_unMinorRevision = this->m_unMinorRevision;
    ret.m_bUsesSteamInputAPI = this->m_bUsesSteamInputAPI;
    ret.m_bUsesGamepadAPI = this->m_bUsesGamepadAPI;
    return ret;
}
#endif

#ifdef __i386__
w32_SteamInputConfigurationLoaded_t::operator u32_SteamInputConfigurationLoaded_t() const
{
    u32_SteamInputConfigurationLoaded_t ret;
    ret.m_unAppID = this->m_unAppID;
    ret.m_ulDeviceHandle = this->m_ulDeviceHandle;
    ret.m_ulMappingCreator = this->m_ulMappingCreator;
    ret.m_unMajorRevision = this->m_unMajorRevision;
    ret.m_unMinorRevision = this->m_unMinorRevision;
    ret.m_bUsesSteamInputAPI = this->m_bUsesSteamInputAPI;
    ret.m_bUsesGamepadAPI = this->m_bUsesGamepadAPI;
    return ret;
}

u32_SteamInputConfigurationLoaded_t::operator w32_SteamInputConfigurationLoaded_t() const
{
    w32_SteamInputConfigurationLoaded_t ret;
    ret.m_unAppID = this->m_unAppID;
    ret.m_ulDeviceHandle = this->m_ulDeviceHandle;
    ret.m_ulMappingCreator = this->m_ulMappingCreator;
    ret.m_unMajorRevision = this->m_unMajorRevision;
    ret.m_unMinorRevision = this->m_unMinorRevision;
    ret.m_bUsesSteamInputAPI = this->m_bUsesSteamInputAPI;
    ret.m_bUsesGamepadAPI = this->m_bUsesGamepadAPI;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_SteamInputGamepadSlotChange_t) >= 32 );
C_ASSERT( offsetof(w64_SteamInputGamepadSlotChange_t, m_unAppID) == 0 );
C_ASSERT( sizeof(w64_SteamInputGamepadSlotChange_t().m_unAppID) >= 4 );
C_ASSERT( offsetof(w64_SteamInputGamepadSlotChange_t, m_ulDeviceHandle) == 8 );
C_ASSERT( sizeof(w64_SteamInputGamepadSlotChange_t().m_ulDeviceHandle) >= 8 );
C_ASSERT( offsetof(w64_SteamInputGamepadSlotChange_t, m_eDeviceType) == 16 );
C_ASSERT( sizeof(w64_SteamInputGamepadSlotChange_t().m_eDeviceType) >= 4 );
C_ASSERT( offsetof(w64_SteamInputGamepadSlotChange_t, m_nOldGamepadSlot) == 20 );
C_ASSERT( sizeof(w64_SteamInputGamepadSlotChange_t().m_nOldGamepadSlot) >= 4 );
C_ASSERT( offsetof(w64_SteamInputGamepadSlotChange_t, m_nNewGamepadSlot) == 24 );
C_ASSERT( sizeof(w64_SteamInputGamepadSlotChange_t().m_nNewGamepadSlot) >= 4 );

C_ASSERT( sizeof(u64_SteamInputGamepadSlotChange_t) >= 24 );
C_ASSERT( offsetof(u64_SteamInputGamepadSlotChange_t, m_unAppID) == 0 );
C_ASSERT( sizeof(u64_SteamInputGamepadSlotChange_t().m_unAppID) >= 4 );
C_ASSERT( offsetof(u64_SteamInputGamepadSlotChange_t, m_ulDeviceHandle) == 4 );
C_ASSERT( sizeof(u64_SteamInputGamepadSlotChange_t().m_ulDeviceHandle) >= 8 );
C_ASSERT( offsetof(u64_SteamInputGamepadSlotChange_t, m_eDeviceType) == 12 );
C_ASSERT( sizeof(u64_SteamInputGamepadSlotChange_t().m_eDeviceType) >= 4 );
C_ASSERT( offsetof(u64_SteamInputGamepadSlotChange_t, m_nOldGamepadSlot) == 16 );
C_ASSERT( sizeof(u64_SteamInputGamepadSlotChange_t().m_nOldGamepadSlot) >= 4 );
C_ASSERT( offsetof(u64_SteamInputGamepadSlotChange_t, m_nNewGamepadSlot) == 20 );
C_ASSERT( sizeof(u64_SteamInputGamepadSlotChange_t().m_nNewGamepadSlot) >= 4 );

C_ASSERT( sizeof(w32_SteamInputGamepadSlotChange_t) >= 32 );
C_ASSERT( offsetof(w32_SteamInputGamepadSlotChange_t, m_unAppID) == 0 );
C_ASSERT( sizeof(w32_SteamInputGamepadSlotChange_t().m_unAppID) >= 4 );
C_ASSERT( offsetof(w32_SteamInputGamepadSlotChange_t, m_ulDeviceHandle) == 8 );
C_ASSERT( sizeof(w32_SteamInputGamepadSlotChange_t().m_ulDeviceHandle) >= 8 );
C_ASSERT( offsetof(w32_SteamInputGamepadSlotChange_t, m_eDeviceType) == 16 );
C_ASSERT( sizeof(w32_SteamInputGamepadSlotChange_t().m_eDeviceType) >= 4 );
C_ASSERT( offsetof(w32_SteamInputGamepadSlotChange_t, m_nOldGamepadSlot) == 20 );
C_ASSERT( sizeof(w32_SteamInputGamepadSlotChange_t().m_nOldGamepadSlot) >= 4 );
C_ASSERT( offsetof(w32_SteamInputGamepadSlotChange_t, m_nNewGamepadSlot) == 24 );
C_ASSERT( sizeof(w32_SteamInputGamepadSlotChange_t().m_nNewGamepadSlot) >= 4 );

C_ASSERT( sizeof(u32_SteamInputGamepadSlotChange_t) >= 24 );
C_ASSERT( offsetof(u32_SteamInputGamepadSlotChange_t, m_unAppID) == 0 );
C_ASSERT( sizeof(u32_SteamInputGamepadSlotChange_t().m_unAppID) >= 4 );
C_ASSERT( offsetof(u32_SteamInputGamepadSlotChange_t, m_ulDeviceHandle) == 4 );
C_ASSERT( sizeof(u32_SteamInputGamepadSlotChange_t().m_ulDeviceHandle) >= 8 );
C_ASSERT( offsetof(u32_SteamInputGamepadSlotChange_t, m_eDeviceType) == 12 );
C_ASSERT( sizeof(u32_SteamInputGamepadSlotChange_t().m_eDeviceType) >= 4 );
C_ASSERT( offsetof(u32_SteamInputGamepadSlotChange_t, m_nOldGamepadSlot) == 16 );
C_ASSERT( sizeof(u32_SteamInputGamepadSlotChange_t().m_nOldGamepadSlot) >= 4 );
C_ASSERT( offsetof(u32_SteamInputGamepadSlotChange_t, m_nNewGamepadSlot) == 20 );
C_ASSERT( sizeof(u32_SteamInputGamepadSlotChange_t().m_nNewGamepadSlot) >= 4 );

#ifdef __x86_64__
w64_SteamInputGamepadSlotChange_t::operator u64_SteamInputGamepadSlotChange_t() const
{
    u64_SteamInputGamepadSlotChange_t ret;
    ret.m_unAppID = this->m_unAppID;
    ret.m_ulDeviceHandle = this->m_ulDeviceHandle;
    ret.m_eDeviceType = this->m_eDeviceType;
    ret.m_nOldGamepadSlot = this->m_nOldGamepadSlot;
    ret.m_nNewGamepadSlot = this->m_nNewGamepadSlot;
    return ret;
}

u64_SteamInputGamepadSlotChange_t::operator w64_SteamInputGamepadSlotChange_t() const
{
    w64_SteamInputGamepadSlotChange_t ret;
    ret.m_unAppID = this->m_unAppID;
    ret.m_ulDeviceHandle = this->m_ulDeviceHandle;
    ret.m_eDeviceType = this->m_eDeviceType;
    ret.m_nOldGamepadSlot = this->m_nOldGamepadSlot;
    ret.m_nNewGamepadSlot = this->m_nNewGamepadSlot;
    return ret;
}
#endif

#ifdef __i386__
w32_SteamInputGamepadSlotChange_t::operator u32_SteamInputGamepadSlotChange_t() const
{
    u32_SteamInputGamepadSlotChange_t ret;
    ret.m_unAppID = this->m_unAppID;
    ret.m_ulDeviceHandle = this->m_ulDeviceHandle;
    ret.m_eDeviceType = this->m_eDeviceType;
    ret.m_nOldGamepadSlot = this->m_nOldGamepadSlot;
    ret.m_nNewGamepadSlot = this->m_nNewGamepadSlot;
    return ret;
}

u32_SteamInputGamepadSlotChange_t::operator w32_SteamInputGamepadSlotChange_t() const
{
    w32_SteamInputGamepadSlotChange_t ret;
    ret.m_unAppID = this->m_unAppID;
    ret.m_ulDeviceHandle = this->m_ulDeviceHandle;
    ret.m_eDeviceType = this->m_eDeviceType;
    ret.m_nOldGamepadSlot = this->m_nOldGamepadSlot;
    ret.m_nNewGamepadSlot = this->m_nNewGamepadSlot;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_SteamInventoryStartPurchaseResult_t) >= 24 );
C_ASSERT( offsetof(w64_SteamInventoryStartPurchaseResult_t, m_result) == 0 );
C_ASSERT( sizeof(w64_SteamInventoryStartPurchaseResult_t().m_result) >= 4 );
C_ASSERT( offsetof(w64_SteamInventoryStartPurchaseResult_t, m_ulOrderID) == 8 );
C_ASSERT( sizeof(w64_SteamInventoryStartPurchaseResult_t().m_ulOrderID) >= 8 );
C_ASSERT( offsetof(w64_SteamInventoryStartPurchaseResult_t, m_ulTransID) == 16 );
C_ASSERT( sizeof(w64_SteamInventoryStartPurchaseResult_t().m_ulTransID) >= 8 );

C_ASSERT( sizeof(u64_SteamInventoryStartPurchaseResult_t) >= 20 );
C_ASSERT( offsetof(u64_SteamInventoryStartPurchaseResult_t, m_result) == 0 );
C_ASSERT( sizeof(u64_SteamInventoryStartPurchaseResult_t().m_result) >= 4 );
C_ASSERT( offsetof(u64_SteamInventoryStartPurchaseResult_t, m_ulOrderID) == 4 );
C_ASSERT( sizeof(u64_SteamInventoryStartPurchaseResult_t().m_ulOrderID) >= 8 );
C_ASSERT( offsetof(u64_SteamInventoryStartPurchaseResult_t, m_ulTransID) == 12 );
C_ASSERT( sizeof(u64_SteamInventoryStartPurchaseResult_t().m_ulTransID) >= 8 );

C_ASSERT( sizeof(w32_SteamInventoryStartPurchaseResult_t) >= 24 );
C_ASSERT( offsetof(w32_SteamInventoryStartPurchaseResult_t, m_result) == 0 );
C_ASSERT( sizeof(w32_SteamInventoryStartPurchaseResult_t().m_result) >= 4 );
C_ASSERT( offsetof(w32_SteamInventoryStartPurchaseResult_t, m_ulOrderID) == 8 );
C_ASSERT( sizeof(w32_SteamInventoryStartPurchaseResult_t().m_ulOrderID) >= 8 );
C_ASSERT( offsetof(w32_SteamInventoryStartPurchaseResult_t, m_ulTransID) == 16 );
C_ASSERT( sizeof(w32_SteamInventoryStartPurchaseResult_t().m_ulTransID) >= 8 );

C_ASSERT( sizeof(u32_SteamInventoryStartPurchaseResult_t) >= 20 );
C_ASSERT( offsetof(u32_SteamInventoryStartPurchaseResult_t, m_result) == 0 );
C_ASSERT( sizeof(u32_SteamInventoryStartPurchaseResult_t().m_result) >= 4 );
C_ASSERT( offsetof(u32_SteamInventoryStartPurchaseResult_t, m_ulOrderID) == 4 );
C_ASSERT( sizeof(u32_SteamInventoryStartPurchaseResult_t().m_ulOrderID) >= 8 );
C_ASSERT( offsetof(u32_SteamInventoryStartPurchaseResult_t, m_ulTransID) == 12 );
C_ASSERT( sizeof(u32_SteamInventoryStartPurchaseResult_t().m_ulTransID) >= 8 );

#ifdef __x86_64__
w64_SteamInventoryStartPurchaseResult_t::operator u64_SteamInventoryStartPurchaseResult_t() const
{
    u64_SteamInventoryStartPurchaseResult_t ret;
    ret.m_result = this->m_result;
    ret.m_ulOrderID = this->m_ulOrderID;
    ret.m_ulTransID = this->m_ulTransID;
    return ret;
}

u64_SteamInventoryStartPurchaseResult_t::operator w64_SteamInventoryStartPurchaseResult_t() const
{
    w64_SteamInventoryStartPurchaseResult_t ret;
    ret.m_result = this->m_result;
    ret.m_ulOrderID = this->m_ulOrderID;
    ret.m_ulTransID = this->m_ulTransID;
    return ret;
}
#endif

#ifdef __i386__
w32_SteamInventoryStartPurchaseResult_t::operator u32_SteamInventoryStartPurchaseResult_t() const
{
    u32_SteamInventoryStartPurchaseResult_t ret;
    ret.m_result = this->m_result;
    ret.m_ulOrderID = this->m_ulOrderID;
    ret.m_ulTransID = this->m_ulTransID;
    return ret;
}

u32_SteamInventoryStartPurchaseResult_t::operator w32_SteamInventoryStartPurchaseResult_t() const
{
    w32_SteamInventoryStartPurchaseResult_t ret;
    ret.m_result = this->m_result;
    ret.m_ulOrderID = this->m_ulOrderID;
    ret.m_ulTransID = this->m_ulTransID;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_SteamNetConnectionStatusChangedCallback_t_153a) >= 712 );
C_ASSERT( offsetof(w64_SteamNetConnectionStatusChangedCallback_t_153a, m_hConn) == 0 );
C_ASSERT( sizeof(w64_SteamNetConnectionStatusChangedCallback_t_153a().m_hConn) >= 4 );
C_ASSERT( offsetof(w64_SteamNetConnectionStatusChangedCallback_t_153a, m_info) == 8 );
C_ASSERT( sizeof(w64_SteamNetConnectionStatusChangedCallback_t_153a().m_info) >= 696 );
C_ASSERT( offsetof(w64_SteamNetConnectionStatusChangedCallback_t_153a, m_eOldState) == 704 );
C_ASSERT( sizeof(w64_SteamNetConnectionStatusChangedCallback_t_153a().m_eOldState) >= 4 );

C_ASSERT( sizeof(u64_SteamNetConnectionStatusChangedCallback_t_153a) >= 704 );
C_ASSERT( offsetof(u64_SteamNetConnectionStatusChangedCallback_t_153a, m_hConn) == 0 );
C_ASSERT( sizeof(u64_SteamNetConnectionStatusChangedCallback_t_153a().m_hConn) >= 4 );
C_ASSERT( offsetof(u64_SteamNetConnectionStatusChangedCallback_t_153a, m_info) == 4 );
C_ASSERT( sizeof(u64_SteamNetConnectionStatusChangedCallback_t_153a().m_info) >= 696 );
C_ASSERT( offsetof(u64_SteamNetConnectionStatusChangedCallback_t_153a, m_eOldState) == 700 );
C_ASSERT( sizeof(u64_SteamNetConnectionStatusChangedCallback_t_153a().m_eOldState) >= 4 );

C_ASSERT( sizeof(w32_SteamNetConnectionStatusChangedCallback_t_153a) >= 712 );
C_ASSERT( offsetof(w32_SteamNetConnectionStatusChangedCallback_t_153a, m_hConn) == 0 );
C_ASSERT( sizeof(w32_SteamNetConnectionStatusChangedCallback_t_153a().m_hConn) >= 4 );
C_ASSERT( offsetof(w32_SteamNetConnectionStatusChangedCallback_t_153a, m_info) == 8 );
C_ASSERT( sizeof(w32_SteamNetConnectionStatusChangedCallback_t_153a().m_info) >= 696 );
C_ASSERT( offsetof(w32_SteamNetConnectionStatusChangedCallback_t_153a, m_eOldState) == 704 );
C_ASSERT( sizeof(w32_SteamNetConnectionStatusChangedCallback_t_153a().m_eOldState) >= 4 );

C_ASSERT( sizeof(u32_SteamNetConnectionStatusChangedCallback_t_153a) >= 704 );
C_ASSERT( offsetof(u32_SteamNetConnectionStatusChangedCallback_t_153a, m_hConn) == 0 );
C_ASSERT( sizeof(u32_SteamNetConnectionStatusChangedCallback_t_153a().m_hConn) >= 4 );
C_ASSERT( offsetof(u32_SteamNetConnectionStatusChangedCallback_t_153a, m_info) == 4 );
C_ASSERT( sizeof(u32_SteamNetConnectionStatusChangedCallback_t_153a().m_info) >= 696 );
C_ASSERT( offsetof(u32_SteamNetConnectionStatusChangedCallback_t_153a, m_eOldState) == 700 );
C_ASSERT( sizeof(u32_SteamNetConnectionStatusChangedCallback_t_153a().m_eOldState) >= 4 );

C_ASSERT( sizeof(w64_SteamNetConnectionStatusChangedCallback_t_144) >= 712 );
C_ASSERT( offsetof(w64_SteamNetConnectionStatusChangedCallback_t_144, m_hConn) == 0 );
C_ASSERT( sizeof(w64_SteamNetConnectionStatusChangedCallback_t_144().m_hConn) >= 4 );
C_ASSERT( offsetof(w64_SteamNetConnectionStatusChangedCallback_t_144, m_info) == 8 );
C_ASSERT( sizeof(w64_SteamNetConnectionStatusChangedCallback_t_144().m_info) >= 696 );
C_ASSERT( offsetof(w64_SteamNetConnectionStatusChangedCallback_t_144, m_eOldState) == 704 );
C_ASSERT( sizeof(w64_SteamNetConnectionStatusChangedCallback_t_144().m_eOldState) >= 4 );

C_ASSERT( sizeof(u64_SteamNetConnectionStatusChangedCallback_t_144) >= 704 );
C_ASSERT( offsetof(u64_SteamNetConnectionStatusChangedCallback_t_144, m_hConn) == 0 );
C_ASSERT( sizeof(u64_SteamNetConnectionStatusChangedCallback_t_144().m_hConn) >= 4 );
C_ASSERT( offsetof(u64_SteamNetConnectionStatusChangedCallback_t_144, m_info) == 4 );
C_ASSERT( sizeof(u64_SteamNetConnectionStatusChangedCallback_t_144().m_info) >= 696 );
C_ASSERT( offsetof(u64_SteamNetConnectionStatusChangedCallback_t_144, m_eOldState) == 700 );
C_ASSERT( sizeof(u64_SteamNetConnectionStatusChangedCallback_t_144().m_eOldState) >= 4 );

C_ASSERT( sizeof(w32_SteamNetConnectionStatusChangedCallback_t_144) >= 712 );
C_ASSERT( offsetof(w32_SteamNetConnectionStatusChangedCallback_t_144, m_hConn) == 0 );
C_ASSERT( sizeof(w32_SteamNetConnectionStatusChangedCallback_t_144().m_hConn) >= 4 );
C_ASSERT( offsetof(w32_SteamNetConnectionStatusChangedCallback_t_144, m_info) == 8 );
C_ASSERT( sizeof(w32_SteamNetConnectionStatusChangedCallback_t_144().m_info) >= 696 );
C_ASSERT( offsetof(w32_SteamNetConnectionStatusChangedCallback_t_144, m_eOldState) == 704 );
C_ASSERT( sizeof(w32_SteamNetConnectionStatusChangedCallback_t_144().m_eOldState) >= 4 );

C_ASSERT( sizeof(u32_SteamNetConnectionStatusChangedCallback_t_144) >= 704 );
C_ASSERT( offsetof(u32_SteamNetConnectionStatusChangedCallback_t_144, m_hConn) == 0 );
C_ASSERT( sizeof(u32_SteamNetConnectionStatusChangedCallback_t_144().m_hConn) >= 4 );
C_ASSERT( offsetof(u32_SteamNetConnectionStatusChangedCallback_t_144, m_info) == 4 );
C_ASSERT( sizeof(u32_SteamNetConnectionStatusChangedCallback_t_144().m_info) >= 696 );
C_ASSERT( offsetof(u32_SteamNetConnectionStatusChangedCallback_t_144, m_eOldState) == 700 );
C_ASSERT( sizeof(u32_SteamNetConnectionStatusChangedCallback_t_144().m_eOldState) >= 4 );

C_ASSERT( sizeof(w64_SteamNetConnectionStatusChangedCallback_t_151) >= 584 );
C_ASSERT( offsetof(w64_SteamNetConnectionStatusChangedCallback_t_151, m_hConn) == 0 );
C_ASSERT( sizeof(w64_SteamNetConnectionStatusChangedCallback_t_151().m_hConn) >= 4 );
C_ASSERT( offsetof(w64_SteamNetConnectionStatusChangedCallback_t_151, m_info) == 8 );
C_ASSERT( sizeof(w64_SteamNetConnectionStatusChangedCallback_t_151().m_info) >= 568 );
C_ASSERT( offsetof(w64_SteamNetConnectionStatusChangedCallback_t_151, m_eOldState) == 576 );
C_ASSERT( sizeof(w64_SteamNetConnectionStatusChangedCallback_t_151().m_eOldState) >= 4 );

C_ASSERT( sizeof(u64_SteamNetConnectionStatusChangedCallback_t_151) >= 576 );
C_ASSERT( offsetof(u64_SteamNetConnectionStatusChangedCallback_t_151, m_hConn) == 0 );
C_ASSERT( sizeof(u64_SteamNetConnectionStatusChangedCallback_t_151().m_hConn) >= 4 );
C_ASSERT( offsetof(u64_SteamNetConnectionStatusChangedCallback_t_151, m_info) == 4 );
C_ASSERT( sizeof(u64_SteamNetConnectionStatusChangedCallback_t_151().m_info) >= 568 );
C_ASSERT( offsetof(u64_SteamNetConnectionStatusChangedCallback_t_151, m_eOldState) == 572 );
C_ASSERT( sizeof(u64_SteamNetConnectionStatusChangedCallback_t_151().m_eOldState) >= 4 );

C_ASSERT( sizeof(w32_SteamNetConnectionStatusChangedCallback_t_151) >= 584 );
C_ASSERT( offsetof(w32_SteamNetConnectionStatusChangedCallback_t_151, m_hConn) == 0 );
C_ASSERT( sizeof(w32_SteamNetConnectionStatusChangedCallback_t_151().m_hConn) >= 4 );
C_ASSERT( offsetof(w32_SteamNetConnectionStatusChangedCallback_t_151, m_info) == 8 );
C_ASSERT( sizeof(w32_SteamNetConnectionStatusChangedCallback_t_151().m_info) >= 568 );
C_ASSERT( offsetof(w32_SteamNetConnectionStatusChangedCallback_t_151, m_eOldState) == 576 );
C_ASSERT( sizeof(w32_SteamNetConnectionStatusChangedCallback_t_151().m_eOldState) >= 4 );

C_ASSERT( sizeof(u32_SteamNetConnectionStatusChangedCallback_t_151) >= 576 );
C_ASSERT( offsetof(u32_SteamNetConnectionStatusChangedCallback_t_151, m_hConn) == 0 );
C_ASSERT( sizeof(u32_SteamNetConnectionStatusChangedCallback_t_151().m_hConn) >= 4 );
C_ASSERT( offsetof(u32_SteamNetConnectionStatusChangedCallback_t_151, m_info) == 4 );
C_ASSERT( sizeof(u32_SteamNetConnectionStatusChangedCallback_t_151().m_info) >= 568 );
C_ASSERT( offsetof(u32_SteamNetConnectionStatusChangedCallback_t_151, m_eOldState) == 572 );
C_ASSERT( sizeof(u32_SteamNetConnectionStatusChangedCallback_t_151().m_eOldState) >= 4 );

#ifdef __x86_64__
w64_SteamNetConnectionStatusChangedCallback_t_153a::operator u64_SteamNetConnectionStatusChangedCallback_t_153a() const
{
    u64_SteamNetConnectionStatusChangedCallback_t_153a ret;
    ret.m_hConn = this->m_hConn;
    ret.m_info = this->m_info;
    ret.m_eOldState = this->m_eOldState;
    return ret;
}

u64_SteamNetConnectionStatusChangedCallback_t_153a::operator w64_SteamNetConnectionStatusChangedCallback_t_153a() const
{
    w64_SteamNetConnectionStatusChangedCallback_t_153a ret;
    ret.m_hConn = this->m_hConn;
    ret.m_info = this->m_info;
    ret.m_eOldState = this->m_eOldState;
    return ret;
}
#endif

#ifdef __i386__
w32_SteamNetConnectionStatusChangedCallback_t_153a::operator u32_SteamNetConnectionStatusChangedCallback_t_153a() const
{
    u32_SteamNetConnectionStatusChangedCallback_t_153a ret;
    ret.m_hConn = this->m_hConn;
    ret.m_info = this->m_info;
    ret.m_eOldState = this->m_eOldState;
    return ret;
}

u32_SteamNetConnectionStatusChangedCallback_t_153a::operator w32_SteamNetConnectionStatusChangedCallback_t_153a() const
{
    w32_SteamNetConnectionStatusChangedCallback_t_153a ret;
    ret.m_hConn = this->m_hConn;
    ret.m_info = this->m_info;
    ret.m_eOldState = this->m_eOldState;
    return ret;
}
#endif

#ifdef __x86_64__
w64_SteamNetConnectionStatusChangedCallback_t_144::operator u64_SteamNetConnectionStatusChangedCallback_t_144() const
{
    u64_SteamNetConnectionStatusChangedCallback_t_144 ret;
    ret.m_hConn = this->m_hConn;
    ret.m_info = this->m_info;
    ret.m_eOldState = this->m_eOldState;
    return ret;
}

u64_SteamNetConnectionStatusChangedCallback_t_144::operator w64_SteamNetConnectionStatusChangedCallback_t_144() const
{
    w64_SteamNetConnectionStatusChangedCallback_t_144 ret;
    ret.m_hConn = this->m_hConn;
    ret.m_info = this->m_info;
    ret.m_eOldState = this->m_eOldState;
    return ret;
}
#endif

#ifdef __i386__
w32_SteamNetConnectionStatusChangedCallback_t_144::operator u32_SteamNetConnectionStatusChangedCallback_t_144() const
{
    u32_SteamNetConnectionStatusChangedCallback_t_144 ret;
    ret.m_hConn = this->m_hConn;
    ret.m_info = this->m_info;
    ret.m_eOldState = this->m_eOldState;
    return ret;
}

u32_SteamNetConnectionStatusChangedCallback_t_144::operator w32_SteamNetConnectionStatusChangedCallback_t_144() const
{
    w32_SteamNetConnectionStatusChangedCallback_t_144 ret;
    ret.m_hConn = this->m_hConn;
    ret.m_info = this->m_info;
    ret.m_eOldState = this->m_eOldState;
    return ret;
}
#endif

#ifdef __x86_64__
w64_SteamNetConnectionStatusChangedCallback_t_151::operator u64_SteamNetConnectionStatusChangedCallback_t_151() const
{
    u64_SteamNetConnectionStatusChangedCallback_t_151 ret;
    ret.m_hConn = this->m_hConn;
    ret.m_info = this->m_info;
    ret.m_eOldState = this->m_eOldState;
    return ret;
}

u64_SteamNetConnectionStatusChangedCallback_t_151::operator w64_SteamNetConnectionStatusChangedCallback_t_151() const
{
    w64_SteamNetConnectionStatusChangedCallback_t_151 ret;
    ret.m_hConn = this->m_hConn;
    ret.m_info = this->m_info;
    ret.m_eOldState = this->m_eOldState;
    return ret;
}
#endif

#ifdef __i386__
w32_SteamNetConnectionStatusChangedCallback_t_151::operator u32_SteamNetConnectionStatusChangedCallback_t_151() const
{
    u32_SteamNetConnectionStatusChangedCallback_t_151 ret;
    ret.m_hConn = this->m_hConn;
    ret.m_info = this->m_info;
    ret.m_eOldState = this->m_eOldState;
    return ret;
}

u32_SteamNetConnectionStatusChangedCallback_t_151::operator w32_SteamNetConnectionStatusChangedCallback_t_151() const
{
    w32_SteamNetConnectionStatusChangedCallback_t_151 ret;
    ret.m_hConn = this->m_hConn;
    ret.m_info = this->m_info;
    ret.m_eOldState = this->m_eOldState;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_153a) >= 216 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_153a, m_pData) == 0 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_153a().m_pData) >= 8 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_153a, m_cbSize) == 8 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_153a().m_cbSize) >= 4 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_153a, m_conn) == 12 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_153a().m_conn) >= 4 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_153a, m_identityPeer) == 16 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_153a().m_identityPeer) >= 136 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_153a, m_nConnUserData) == 152 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_153a().m_nConnUserData) >= 8 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_153a, m_usecTimeReceived) == 160 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_153a().m_usecTimeReceived) >= 8 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_153a, m_nMessageNumber) == 168 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_153a().m_nMessageNumber) >= 8 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_153a, m_pfnFreeData) == 176 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_153a().m_pfnFreeData) >= 8 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_153a, m_pfnRelease) == 184 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_153a().m_pfnRelease) >= 8 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_153a, m_nChannel) == 192 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_153a().m_nChannel) >= 4 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_153a, m_nFlags) == 196 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_153a().m_nFlags) >= 4 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_153a, m_nUserData) == 200 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_153a().m_nUserData) >= 8 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_153a, m_idxLane) == 208 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_153a().m_idxLane) >= 2 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_153a, _pad1__) == 210 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_153a()._pad1__) >= 2 );

C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_153a) >= 216 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_153a, m_pData) == 0 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_153a().m_pData) >= 8 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_153a, m_cbSize) == 8 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_153a().m_cbSize) >= 4 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_153a, m_conn) == 12 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_153a().m_conn) >= 4 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_153a, m_identityPeer) == 16 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_153a().m_identityPeer) >= 136 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_153a, m_nConnUserData) == 152 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_153a().m_nConnUserData) >= 8 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_153a, m_usecTimeReceived) == 160 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_153a().m_usecTimeReceived) >= 8 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_153a, m_nMessageNumber) == 168 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_153a().m_nMessageNumber) >= 8 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_153a, m_pfnFreeData) == 176 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_153a().m_pfnFreeData) >= 8 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_153a, m_pfnRelease) == 184 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_153a().m_pfnRelease) >= 8 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_153a, m_nChannel) == 192 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_153a().m_nChannel) >= 4 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_153a, m_nFlags) == 196 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_153a().m_nFlags) >= 4 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_153a, m_nUserData) == 200 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_153a().m_nUserData) >= 8 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_153a, m_idxLane) == 208 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_153a().m_idxLane) >= 2 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_153a, _pad1__) == 210 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_153a()._pad1__) >= 2 );

C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_153a) >= 208 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_153a, m_pData) == 0 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_153a().m_pData) >= 4 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_153a, m_cbSize) == 4 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_153a().m_cbSize) >= 4 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_153a, m_conn) == 8 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_153a().m_conn) >= 4 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_153a, m_identityPeer) == 12 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_153a().m_identityPeer) >= 136 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_153a, m_nConnUserData) == 152 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_153a().m_nConnUserData) >= 8 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_153a, m_usecTimeReceived) == 160 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_153a().m_usecTimeReceived) >= 8 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_153a, m_nMessageNumber) == 168 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_153a().m_nMessageNumber) >= 8 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_153a, m_pfnFreeData) == 176 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_153a().m_pfnFreeData) >= 4 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_153a, m_pfnRelease) == 180 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_153a().m_pfnRelease) >= 4 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_153a, m_nChannel) == 184 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_153a().m_nChannel) >= 4 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_153a, m_nFlags) == 188 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_153a().m_nFlags) >= 4 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_153a, m_nUserData) == 192 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_153a().m_nUserData) >= 8 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_153a, m_idxLane) == 200 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_153a().m_idxLane) >= 2 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_153a, _pad1__) == 202 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_153a()._pad1__) >= 2 );

C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_153a) >= 200 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_153a, m_pData) == 0 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_153a().m_pData) >= 4 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_153a, m_cbSize) == 4 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_153a().m_cbSize) >= 4 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_153a, m_conn) == 8 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_153a().m_conn) >= 4 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_153a, m_identityPeer) == 12 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_153a().m_identityPeer) >= 136 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_153a, m_nConnUserData) == 148 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_153a().m_nConnUserData) >= 8 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_153a, m_usecTimeReceived) == 156 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_153a().m_usecTimeReceived) >= 8 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_153a, m_nMessageNumber) == 164 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_153a().m_nMessageNumber) >= 8 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_153a, m_pfnFreeData) == 172 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_153a().m_pfnFreeData) >= 4 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_153a, m_pfnRelease) == 176 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_153a().m_pfnRelease) >= 4 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_153a, m_nChannel) == 180 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_153a().m_nChannel) >= 4 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_153a, m_nFlags) == 184 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_153a().m_nFlags) >= 4 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_153a, m_nUserData) == 188 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_153a().m_nUserData) >= 8 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_153a, m_idxLane) == 196 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_153a().m_idxLane) >= 2 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_153a, _pad1__) == 198 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_153a()._pad1__) >= 2 );

C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_147) >= 208 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_147, m_pData) == 0 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_147().m_pData) >= 8 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_147, m_cbSize) == 8 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_147().m_cbSize) >= 4 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_147, m_conn) == 12 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_147().m_conn) >= 4 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_147, m_identityPeer) == 16 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_147().m_identityPeer) >= 136 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_147, m_nConnUserData) == 152 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_147().m_nConnUserData) >= 8 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_147, m_usecTimeReceived) == 160 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_147().m_usecTimeReceived) >= 8 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_147, m_nMessageNumber) == 168 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_147().m_nMessageNumber) >= 8 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_147, m_pfnFreeData) == 176 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_147().m_pfnFreeData) >= 8 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_147, m_pfnRelease) == 184 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_147().m_pfnRelease) >= 8 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_147, m_nChannel) == 192 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_147().m_nChannel) >= 4 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_147, m_nFlags) == 196 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_147().m_nFlags) >= 4 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_147, m_nUserData) == 200 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_147().m_nUserData) >= 8 );

C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_147) >= 208 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_147, m_pData) == 0 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_147().m_pData) >= 8 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_147, m_cbSize) == 8 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_147().m_cbSize) >= 4 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_147, m_conn) == 12 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_147().m_conn) >= 4 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_147, m_identityPeer) == 16 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_147().m_identityPeer) >= 136 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_147, m_nConnUserData) == 152 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_147().m_nConnUserData) >= 8 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_147, m_usecTimeReceived) == 160 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_147().m_usecTimeReceived) >= 8 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_147, m_nMessageNumber) == 168 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_147().m_nMessageNumber) >= 8 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_147, m_pfnFreeData) == 176 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_147().m_pfnFreeData) >= 8 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_147, m_pfnRelease) == 184 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_147().m_pfnRelease) >= 8 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_147, m_nChannel) == 192 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_147().m_nChannel) >= 4 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_147, m_nFlags) == 196 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_147().m_nFlags) >= 4 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_147, m_nUserData) == 200 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_147().m_nUserData) >= 8 );

C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_147) >= 200 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_147, m_pData) == 0 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_147().m_pData) >= 4 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_147, m_cbSize) == 4 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_147().m_cbSize) >= 4 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_147, m_conn) == 8 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_147().m_conn) >= 4 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_147, m_identityPeer) == 12 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_147().m_identityPeer) >= 136 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_147, m_nConnUserData) == 152 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_147().m_nConnUserData) >= 8 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_147, m_usecTimeReceived) == 160 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_147().m_usecTimeReceived) >= 8 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_147, m_nMessageNumber) == 168 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_147().m_nMessageNumber) >= 8 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_147, m_pfnFreeData) == 176 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_147().m_pfnFreeData) >= 4 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_147, m_pfnRelease) == 180 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_147().m_pfnRelease) >= 4 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_147, m_nChannel) == 184 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_147().m_nChannel) >= 4 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_147, m_nFlags) == 188 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_147().m_nFlags) >= 4 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_147, m_nUserData) == 192 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_147().m_nUserData) >= 8 );

C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_147) >= 196 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_147, m_pData) == 0 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_147().m_pData) >= 4 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_147, m_cbSize) == 4 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_147().m_cbSize) >= 4 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_147, m_conn) == 8 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_147().m_conn) >= 4 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_147, m_identityPeer) == 12 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_147().m_identityPeer) >= 136 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_147, m_nConnUserData) == 148 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_147().m_nConnUserData) >= 8 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_147, m_usecTimeReceived) == 156 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_147().m_usecTimeReceived) >= 8 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_147, m_nMessageNumber) == 164 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_147().m_nMessageNumber) >= 8 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_147, m_pfnFreeData) == 172 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_147().m_pfnFreeData) >= 4 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_147, m_pfnRelease) == 176 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_147().m_pfnRelease) >= 4 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_147, m_nChannel) == 180 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_147().m_nChannel) >= 4 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_147, m_nFlags) == 184 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_147().m_nFlags) >= 4 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_147, m_nUserData) == 188 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_147().m_nUserData) >= 8 );

C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_151) >= 80 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_151, m_pData) == 0 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_151().m_pData) >= 8 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_151, m_cbSize) == 8 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_151().m_cbSize) >= 4 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_151, m_conn) == 12 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_151().m_conn) >= 4 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_151, m_identityPeer) == 16 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_151().m_identityPeer) >= 8 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_151, m_nConnUserData) == 24 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_151().m_nConnUserData) >= 8 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_151, m_usecTimeReceived) == 32 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_151().m_usecTimeReceived) >= 8 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_151, m_nMessageNumber) == 40 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_151().m_nMessageNumber) >= 8 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_151, m_pfnFreeData) == 48 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_151().m_pfnFreeData) >= 8 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_151, m_pfnRelease) == 56 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_151().m_pfnRelease) >= 8 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_151, m_nChannel) == 64 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_151().m_nChannel) >= 4 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_151, m_nFlags) == 68 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_151().m_nFlags) >= 4 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_151, m_nUserData) == 72 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_151().m_nUserData) >= 8 );

C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_151) >= 80 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_151, m_pData) == 0 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_151().m_pData) >= 8 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_151, m_cbSize) == 8 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_151().m_cbSize) >= 4 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_151, m_conn) == 12 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_151().m_conn) >= 4 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_151, m_identityPeer) == 16 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_151().m_identityPeer) >= 8 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_151, m_nConnUserData) == 24 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_151().m_nConnUserData) >= 8 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_151, m_usecTimeReceived) == 32 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_151().m_usecTimeReceived) >= 8 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_151, m_nMessageNumber) == 40 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_151().m_nMessageNumber) >= 8 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_151, m_pfnFreeData) == 48 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_151().m_pfnFreeData) >= 8 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_151, m_pfnRelease) == 56 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_151().m_pfnRelease) >= 8 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_151, m_nChannel) == 64 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_151().m_nChannel) >= 4 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_151, m_nFlags) == 68 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_151().m_nFlags) >= 4 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_151, m_nUserData) == 72 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_151().m_nUserData) >= 8 );

C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_151) >= 72 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_151, m_pData) == 0 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_151().m_pData) >= 4 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_151, m_cbSize) == 4 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_151().m_cbSize) >= 4 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_151, m_conn) == 8 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_151().m_conn) >= 4 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_151, m_identityPeer) == 12 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_151().m_identityPeer) >= 8 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_151, m_nConnUserData) == 24 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_151().m_nConnUserData) >= 8 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_151, m_usecTimeReceived) == 32 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_151().m_usecTimeReceived) >= 8 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_151, m_nMessageNumber) == 40 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_151().m_nMessageNumber) >= 8 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_151, m_pfnFreeData) == 48 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_151().m_pfnFreeData) >= 4 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_151, m_pfnRelease) == 52 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_151().m_pfnRelease) >= 4 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_151, m_nChannel) == 56 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_151().m_nChannel) >= 4 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_151, m_nFlags) == 60 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_151().m_nFlags) >= 4 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_151, m_nUserData) == 64 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_151().m_nUserData) >= 8 );

C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_151) >= 68 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_151, m_pData) == 0 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_151().m_pData) >= 4 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_151, m_cbSize) == 4 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_151().m_cbSize) >= 4 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_151, m_conn) == 8 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_151().m_conn) >= 4 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_151, m_identityPeer) == 12 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_151().m_identityPeer) >= 8 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_151, m_nConnUserData) == 20 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_151().m_nConnUserData) >= 8 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_151, m_usecTimeReceived) == 28 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_151().m_usecTimeReceived) >= 8 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_151, m_nMessageNumber) == 36 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_151().m_nMessageNumber) >= 8 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_151, m_pfnFreeData) == 44 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_151().m_pfnFreeData) >= 4 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_151, m_pfnRelease) == 48 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_151().m_pfnRelease) >= 4 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_151, m_nChannel) == 52 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_151().m_nChannel) >= 4 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_151, m_nFlags) == 56 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_151().m_nFlags) >= 4 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_151, m_nUserData) == 60 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_151().m_nUserData) >= 8 );

C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_144) >= 200 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_144, m_pData) == 0 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_144().m_pData) >= 8 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_144, m_cbSize) == 8 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_144().m_cbSize) >= 4 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_144, m_conn) == 12 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_144().m_conn) >= 4 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_144, m_sender) == 16 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_144().m_sender) >= 136 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_144, m_nConnUserData) == 152 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_144().m_nConnUserData) >= 8 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_144, m_usecTimeReceived) == 160 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_144().m_usecTimeReceived) >= 8 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_144, m_nMessageNumber) == 168 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_144().m_nMessageNumber) >= 8 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_144, m_pfnFreeData) == 176 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_144().m_pfnFreeData) >= 8 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_144, m_pfnRelease) == 184 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_144().m_pfnRelease) >= 8 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_144, m_nChannel) == 192 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_144().m_nChannel) >= 4 );
C_ASSERT( offsetof(w64_SteamNetworkingMessage_t_144, m___nPadDummy) == 196 );
C_ASSERT( sizeof(w64_SteamNetworkingMessage_t_144().m___nPadDummy) >= 4 );

C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_144) >= 200 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_144, m_pData) == 0 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_144().m_pData) >= 8 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_144, m_cbSize) == 8 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_144().m_cbSize) >= 4 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_144, m_conn) == 12 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_144().m_conn) >= 4 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_144, m_sender) == 16 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_144().m_sender) >= 136 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_144, m_nConnUserData) == 152 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_144().m_nConnUserData) >= 8 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_144, m_usecTimeReceived) == 160 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_144().m_usecTimeReceived) >= 8 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_144, m_nMessageNumber) == 168 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_144().m_nMessageNumber) >= 8 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_144, m_pfnFreeData) == 176 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_144().m_pfnFreeData) >= 8 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_144, m_pfnRelease) == 184 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_144().m_pfnRelease) >= 8 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_144, m_nChannel) == 192 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_144().m_nChannel) >= 4 );
C_ASSERT( offsetof(u64_SteamNetworkingMessage_t_144, m___nPadDummy) == 196 );
C_ASSERT( sizeof(u64_SteamNetworkingMessage_t_144().m___nPadDummy) >= 4 );

C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_144) >= 192 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_144, m_pData) == 0 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_144().m_pData) >= 4 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_144, m_cbSize) == 4 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_144().m_cbSize) >= 4 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_144, m_conn) == 8 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_144().m_conn) >= 4 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_144, m_sender) == 12 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_144().m_sender) >= 136 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_144, m_nConnUserData) == 152 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_144().m_nConnUserData) >= 8 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_144, m_usecTimeReceived) == 160 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_144().m_usecTimeReceived) >= 8 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_144, m_nMessageNumber) == 168 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_144().m_nMessageNumber) >= 8 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_144, m_pfnFreeData) == 176 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_144().m_pfnFreeData) >= 4 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_144, m_pfnRelease) == 180 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_144().m_pfnRelease) >= 4 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_144, m_nChannel) == 184 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_144().m_nChannel) >= 4 );
C_ASSERT( offsetof(w32_SteamNetworkingMessage_t_144, m___nPadDummy) == 188 );
C_ASSERT( sizeof(w32_SteamNetworkingMessage_t_144().m___nPadDummy) >= 4 );

C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_144) >= 188 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_144, m_pData) == 0 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_144().m_pData) >= 4 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_144, m_cbSize) == 4 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_144().m_cbSize) >= 4 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_144, m_conn) == 8 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_144().m_conn) >= 4 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_144, m_sender) == 12 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_144().m_sender) >= 136 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_144, m_nConnUserData) == 148 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_144().m_nConnUserData) >= 8 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_144, m_usecTimeReceived) == 156 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_144().m_usecTimeReceived) >= 8 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_144, m_nMessageNumber) == 164 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_144().m_nMessageNumber) >= 8 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_144, m_pfnFreeData) == 172 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_144().m_pfnFreeData) >= 4 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_144, m_pfnRelease) == 176 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_144().m_pfnRelease) >= 4 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_144, m_nChannel) == 180 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_144().m_nChannel) >= 4 );
C_ASSERT( offsetof(u32_SteamNetworkingMessage_t_144, m___nPadDummy) == 184 );
C_ASSERT( sizeof(u32_SteamNetworkingMessage_t_144().m___nPadDummy) >= 4 );

C_ASSERT( sizeof(w64_SteamParamStringArray_t) >= 16 );
C_ASSERT( offsetof(w64_SteamParamStringArray_t, m_ppStrings) == 0 );
C_ASSERT( sizeof(w64_SteamParamStringArray_t().m_ppStrings) >= 8 );
C_ASSERT( offsetof(w64_SteamParamStringArray_t, m_nNumStrings) == 8 );
C_ASSERT( sizeof(w64_SteamParamStringArray_t().m_nNumStrings) >= 4 );

C_ASSERT( sizeof(u64_SteamParamStringArray_t) >= 12 );
C_ASSERT( offsetof(u64_SteamParamStringArray_t, m_ppStrings) == 0 );
C_ASSERT( sizeof(u64_SteamParamStringArray_t().m_ppStrings) >= 8 );
C_ASSERT( offsetof(u64_SteamParamStringArray_t, m_nNumStrings) == 8 );
C_ASSERT( sizeof(u64_SteamParamStringArray_t().m_nNumStrings) >= 4 );

C_ASSERT( sizeof(w32_SteamParamStringArray_t) >= 8 );
C_ASSERT( offsetof(w32_SteamParamStringArray_t, m_ppStrings) == 0 );
C_ASSERT( sizeof(w32_SteamParamStringArray_t().m_ppStrings) >= 4 );
C_ASSERT( offsetof(w32_SteamParamStringArray_t, m_nNumStrings) == 4 );
C_ASSERT( sizeof(w32_SteamParamStringArray_t().m_nNumStrings) >= 4 );

C_ASSERT( sizeof(u32_SteamParamStringArray_t) >= 8 );
C_ASSERT( offsetof(u32_SteamParamStringArray_t, m_ppStrings) == 0 );
C_ASSERT( sizeof(u32_SteamParamStringArray_t().m_ppStrings) >= 4 );
C_ASSERT( offsetof(u32_SteamParamStringArray_t, m_nNumStrings) == 4 );
C_ASSERT( sizeof(u32_SteamParamStringArray_t().m_nNumStrings) >= 4 );

C_ASSERT( sizeof(w64_SteamPartyBeaconLocation_t) >= 16 );
C_ASSERT( offsetof(w64_SteamPartyBeaconLocation_t, m_eType) == 0 );
C_ASSERT( sizeof(w64_SteamPartyBeaconLocation_t().m_eType) >= 4 );
C_ASSERT( offsetof(w64_SteamPartyBeaconLocation_t, m_ulLocationID) == 8 );
C_ASSERT( sizeof(w64_SteamPartyBeaconLocation_t().m_ulLocationID) >= 8 );

C_ASSERT( sizeof(u64_SteamPartyBeaconLocation_t) >= 12 );
C_ASSERT( offsetof(u64_SteamPartyBeaconLocation_t, m_eType) == 0 );
C_ASSERT( sizeof(u64_SteamPartyBeaconLocation_t().m_eType) >= 4 );
C_ASSERT( offsetof(u64_SteamPartyBeaconLocation_t, m_ulLocationID) == 4 );
C_ASSERT( sizeof(u64_SteamPartyBeaconLocation_t().m_ulLocationID) >= 8 );

C_ASSERT( sizeof(w32_SteamPartyBeaconLocation_t) >= 16 );
C_ASSERT( offsetof(w32_SteamPartyBeaconLocation_t, m_eType) == 0 );
C_ASSERT( sizeof(w32_SteamPartyBeaconLocation_t().m_eType) >= 4 );
C_ASSERT( offsetof(w32_SteamPartyBeaconLocation_t, m_ulLocationID) == 8 );
C_ASSERT( sizeof(w32_SteamPartyBeaconLocation_t().m_ulLocationID) >= 8 );

C_ASSERT( sizeof(u32_SteamPartyBeaconLocation_t) >= 12 );
C_ASSERT( offsetof(u32_SteamPartyBeaconLocation_t, m_eType) == 0 );
C_ASSERT( sizeof(u32_SteamPartyBeaconLocation_t().m_eType) >= 4 );
C_ASSERT( offsetof(u32_SteamPartyBeaconLocation_t, m_ulLocationID) == 4 );
C_ASSERT( sizeof(u32_SteamPartyBeaconLocation_t().m_ulLocationID) >= 8 );

#ifdef __x86_64__
w64_SteamPartyBeaconLocation_t::operator u64_SteamPartyBeaconLocation_t() const
{
    u64_SteamPartyBeaconLocation_t ret;
    ret.m_eType = this->m_eType;
    ret.m_ulLocationID = this->m_ulLocationID;
    return ret;
}

u64_SteamPartyBeaconLocation_t::operator w64_SteamPartyBeaconLocation_t() const
{
    w64_SteamPartyBeaconLocation_t ret;
    ret.m_eType = this->m_eType;
    ret.m_ulLocationID = this->m_ulLocationID;
    return ret;
}
#endif

#ifdef __i386__
w32_SteamPartyBeaconLocation_t::operator u32_SteamPartyBeaconLocation_t() const
{
    u32_SteamPartyBeaconLocation_t ret;
    ret.m_eType = this->m_eType;
    ret.m_ulLocationID = this->m_ulLocationID;
    return ret;
}

u32_SteamPartyBeaconLocation_t::operator w32_SteamPartyBeaconLocation_t() const
{
    w32_SteamPartyBeaconLocation_t ret;
    ret.m_eType = this->m_eType;
    ret.m_ulLocationID = this->m_ulLocationID;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_SteamUGCRequestUGCDetailsResult_t_128x) >= 9784 );
C_ASSERT( offsetof(w64_SteamUGCRequestUGCDetailsResult_t_128x, m_details) == 0 );
C_ASSERT( sizeof(w64_SteamUGCRequestUGCDetailsResult_t_128x().m_details) >= 9776 );
C_ASSERT( offsetof(w64_SteamUGCRequestUGCDetailsResult_t_128x, m_bCachedData) == 9776 );
C_ASSERT( sizeof(w64_SteamUGCRequestUGCDetailsResult_t_128x().m_bCachedData) >= 1 );

C_ASSERT( sizeof(u64_SteamUGCRequestUGCDetailsResult_t_128x) >= 9768 );
C_ASSERT( offsetof(u64_SteamUGCRequestUGCDetailsResult_t_128x, m_details) == 0 );
C_ASSERT( sizeof(u64_SteamUGCRequestUGCDetailsResult_t_128x().m_details) >= 9764 );
C_ASSERT( offsetof(u64_SteamUGCRequestUGCDetailsResult_t_128x, m_bCachedData) == 9764 );
C_ASSERT( sizeof(u64_SteamUGCRequestUGCDetailsResult_t_128x().m_bCachedData) >= 1 );

C_ASSERT( sizeof(w32_SteamUGCRequestUGCDetailsResult_t_128x) >= 9784 );
C_ASSERT( offsetof(w32_SteamUGCRequestUGCDetailsResult_t_128x, m_details) == 0 );
C_ASSERT( sizeof(w32_SteamUGCRequestUGCDetailsResult_t_128x().m_details) >= 9776 );
C_ASSERT( offsetof(w32_SteamUGCRequestUGCDetailsResult_t_128x, m_bCachedData) == 9776 );
C_ASSERT( sizeof(w32_SteamUGCRequestUGCDetailsResult_t_128x().m_bCachedData) >= 1 );

C_ASSERT( sizeof(u32_SteamUGCRequestUGCDetailsResult_t_128x) >= 9768 );
C_ASSERT( offsetof(u32_SteamUGCRequestUGCDetailsResult_t_128x, m_details) == 0 );
C_ASSERT( sizeof(u32_SteamUGCRequestUGCDetailsResult_t_128x().m_details) >= 9764 );
C_ASSERT( offsetof(u32_SteamUGCRequestUGCDetailsResult_t_128x, m_bCachedData) == 9764 );
C_ASSERT( sizeof(u32_SteamUGCRequestUGCDetailsResult_t_128x().m_bCachedData) >= 1 );

C_ASSERT( sizeof(w64_SteamUGCRequestUGCDetailsResult_t_129) >= 9776 );
C_ASSERT( offsetof(w64_SteamUGCRequestUGCDetailsResult_t_129, m_details) == 0 );
C_ASSERT( sizeof(w64_SteamUGCRequestUGCDetailsResult_t_129().m_details) >= 9768 );
C_ASSERT( offsetof(w64_SteamUGCRequestUGCDetailsResult_t_129, m_bCachedData) == 9768 );
C_ASSERT( sizeof(w64_SteamUGCRequestUGCDetailsResult_t_129().m_bCachedData) >= 1 );

C_ASSERT( sizeof(u64_SteamUGCRequestUGCDetailsResult_t_129) >= 9764 );
C_ASSERT( offsetof(u64_SteamUGCRequestUGCDetailsResult_t_129, m_details) == 0 );
C_ASSERT( sizeof(u64_SteamUGCRequestUGCDetailsResult_t_129().m_details) >= 9760 );
C_ASSERT( offsetof(u64_SteamUGCRequestUGCDetailsResult_t_129, m_bCachedData) == 9760 );
C_ASSERT( sizeof(u64_SteamUGCRequestUGCDetailsResult_t_129().m_bCachedData) >= 1 );

C_ASSERT( sizeof(w32_SteamUGCRequestUGCDetailsResult_t_129) >= 9776 );
C_ASSERT( offsetof(w32_SteamUGCRequestUGCDetailsResult_t_129, m_details) == 0 );
C_ASSERT( sizeof(w32_SteamUGCRequestUGCDetailsResult_t_129().m_details) >= 9768 );
C_ASSERT( offsetof(w32_SteamUGCRequestUGCDetailsResult_t_129, m_bCachedData) == 9768 );
C_ASSERT( sizeof(w32_SteamUGCRequestUGCDetailsResult_t_129().m_bCachedData) >= 1 );

C_ASSERT( sizeof(u32_SteamUGCRequestUGCDetailsResult_t_129) >= 9764 );
C_ASSERT( offsetof(u32_SteamUGCRequestUGCDetailsResult_t_129, m_details) == 0 );
C_ASSERT( sizeof(u32_SteamUGCRequestUGCDetailsResult_t_129().m_details) >= 9760 );
C_ASSERT( offsetof(u32_SteamUGCRequestUGCDetailsResult_t_129, m_bCachedData) == 9760 );
C_ASSERT( sizeof(u32_SteamUGCRequestUGCDetailsResult_t_129().m_bCachedData) >= 1 );

C_ASSERT( sizeof(w64_SteamUGCRequestUGCDetailsResult_t_126) >= 9768 );
C_ASSERT( offsetof(w64_SteamUGCRequestUGCDetailsResult_t_126, m_details) == 0 );
C_ASSERT( sizeof(w64_SteamUGCRequestUGCDetailsResult_t_126().m_details) >= 9768 );

C_ASSERT( sizeof(u64_SteamUGCRequestUGCDetailsResult_t_126) >= 9760 );
C_ASSERT( offsetof(u64_SteamUGCRequestUGCDetailsResult_t_126, m_details) == 0 );
C_ASSERT( sizeof(u64_SteamUGCRequestUGCDetailsResult_t_126().m_details) >= 9760 );

C_ASSERT( sizeof(w32_SteamUGCRequestUGCDetailsResult_t_126) >= 9768 );
C_ASSERT( offsetof(w32_SteamUGCRequestUGCDetailsResult_t_126, m_details) == 0 );
C_ASSERT( sizeof(w32_SteamUGCRequestUGCDetailsResult_t_126().m_details) >= 9768 );

C_ASSERT( sizeof(u32_SteamUGCRequestUGCDetailsResult_t_126) >= 9760 );
C_ASSERT( offsetof(u32_SteamUGCRequestUGCDetailsResult_t_126, m_details) == 0 );
C_ASSERT( sizeof(u32_SteamUGCRequestUGCDetailsResult_t_126().m_details) >= 9760 );

#ifdef __x86_64__
w64_SteamUGCRequestUGCDetailsResult_t_128x::operator u64_SteamUGCRequestUGCDetailsResult_t_128x() const
{
    u64_SteamUGCRequestUGCDetailsResult_t_128x ret;
    ret.m_details = this->m_details;
    ret.m_bCachedData = this->m_bCachedData;
    return ret;
}

u64_SteamUGCRequestUGCDetailsResult_t_128x::operator w64_SteamUGCRequestUGCDetailsResult_t_128x() const
{
    w64_SteamUGCRequestUGCDetailsResult_t_128x ret;
    ret.m_details = this->m_details;
    ret.m_bCachedData = this->m_bCachedData;
    return ret;
}
#endif

#ifdef __i386__
w32_SteamUGCRequestUGCDetailsResult_t_128x::operator u32_SteamUGCRequestUGCDetailsResult_t_128x() const
{
    u32_SteamUGCRequestUGCDetailsResult_t_128x ret;
    ret.m_details = this->m_details;
    ret.m_bCachedData = this->m_bCachedData;
    return ret;
}

u32_SteamUGCRequestUGCDetailsResult_t_128x::operator w32_SteamUGCRequestUGCDetailsResult_t_128x() const
{
    w32_SteamUGCRequestUGCDetailsResult_t_128x ret;
    ret.m_details = this->m_details;
    ret.m_bCachedData = this->m_bCachedData;
    return ret;
}
#endif

#ifdef __x86_64__
w64_SteamUGCRequestUGCDetailsResult_t_129::operator u64_SteamUGCRequestUGCDetailsResult_t_129() const
{
    u64_SteamUGCRequestUGCDetailsResult_t_129 ret;
    ret.m_details = this->m_details;
    ret.m_bCachedData = this->m_bCachedData;
    return ret;
}

u64_SteamUGCRequestUGCDetailsResult_t_129::operator w64_SteamUGCRequestUGCDetailsResult_t_129() const
{
    w64_SteamUGCRequestUGCDetailsResult_t_129 ret;
    ret.m_details = this->m_details;
    ret.m_bCachedData = this->m_bCachedData;
    return ret;
}
#endif

#ifdef __i386__
w32_SteamUGCRequestUGCDetailsResult_t_129::operator u32_SteamUGCRequestUGCDetailsResult_t_129() const
{
    u32_SteamUGCRequestUGCDetailsResult_t_129 ret;
    ret.m_details = this->m_details;
    ret.m_bCachedData = this->m_bCachedData;
    return ret;
}

u32_SteamUGCRequestUGCDetailsResult_t_129::operator w32_SteamUGCRequestUGCDetailsResult_t_129() const
{
    w32_SteamUGCRequestUGCDetailsResult_t_129 ret;
    ret.m_details = this->m_details;
    ret.m_bCachedData = this->m_bCachedData;
    return ret;
}
#endif

#ifdef __x86_64__
w64_SteamUGCRequestUGCDetailsResult_t_126::operator u64_SteamUGCRequestUGCDetailsResult_t_126() const
{
    u64_SteamUGCRequestUGCDetailsResult_t_126 ret;
    ret.m_details = this->m_details;
    return ret;
}

u64_SteamUGCRequestUGCDetailsResult_t_126::operator w64_SteamUGCRequestUGCDetailsResult_t_126() const
{
    w64_SteamUGCRequestUGCDetailsResult_t_126 ret;
    ret.m_details = this->m_details;
    return ret;
}
#endif

#ifdef __i386__
w32_SteamUGCRequestUGCDetailsResult_t_126::operator u32_SteamUGCRequestUGCDetailsResult_t_126() const
{
    u32_SteamUGCRequestUGCDetailsResult_t_126 ret;
    ret.m_details = this->m_details;
    return ret;
}

u32_SteamUGCRequestUGCDetailsResult_t_126::operator w32_SteamUGCRequestUGCDetailsResult_t_126() const
{
    w32_SteamUGCRequestUGCDetailsResult_t_126 ret;
    ret.m_details = this->m_details;
    return ret;
}
#endif

C_ASSERT( sizeof(w64_SubmitPlayerResultResultCallback_t) >= 24 );
C_ASSERT( offsetof(w64_SubmitPlayerResultResultCallback_t, m_eResult) == 0 );
C_ASSERT( sizeof(w64_SubmitPlayerResultResultCallback_t().m_eResult) >= 4 );
C_ASSERT( offsetof(w64_SubmitPlayerResultResultCallback_t, ullUniqueGameID) == 8 );
C_ASSERT( sizeof(w64_SubmitPlayerResultResultCallback_t().ullUniqueGameID) >= 8 );
C_ASSERT( offsetof(w64_SubmitPlayerResultResultCallback_t, steamIDPlayer) == 16 );
C_ASSERT( sizeof(w64_SubmitPlayerResultResultCallback_t().steamIDPlayer) >= 8 );

C_ASSERT( sizeof(u64_SubmitPlayerResultResultCallback_t) >= 20 );
C_ASSERT( offsetof(u64_SubmitPlayerResultResultCallback_t, m_eResult) == 0 );
C_ASSERT( sizeof(u64_SubmitPlayerResultResultCallback_t().m_eResult) >= 4 );
C_ASSERT( offsetof(u64_SubmitPlayerResultResultCallback_t, ullUniqueGameID) == 4 );
C_ASSERT( sizeof(u64_SubmitPlayerResultResultCallback_t().ullUniqueGameID) >= 8 );
C_ASSERT( offsetof(u64_SubmitPlayerResultResultCallback_t, steamIDPlayer) == 12 );
C_ASSERT( sizeof(u64_SubmitPlayerResultResultCallback_t().steamIDPlayer) >= 8 );

C_ASSERT( sizeof(w32_SubmitPlayerResultResultCallback_t) >= 24 );
C_ASSERT( offsetof(w32_SubmitPlayerResultResultCallback_t, m_eResult) == 0 );
C_ASSERT( sizeof(w32_SubmitPlayerResultResultCallback_t().m_eResult) >= 4 );
C_ASSERT( offsetof(w32_SubmitPlayerResultResultCallback_t, ullUniqueGameID) == 8 );
C_ASSERT( sizeof(w32_SubmitPlayerResultResultCallback_t().ullUniqueGameID) >= 8 );
C_ASSERT( offsetof(w32_SubmitPlayerResultResultCallback_t, steamIDPlayer) == 16 );
C_ASSERT( sizeof(w32_SubmitPlayerResultResultCallback_t().steamIDPlayer) >= 8 );

C_ASSERT( sizeof(u32_SubmitPlayerResultResultCallback_t) >= 20 );
C_ASSERT( offsetof(u32_SubmitPlayerResultResultCallback_t, m_eResult) == 0 );
C_ASSERT( sizeof(u32_SubmitPlayerResultResultCallback_t().m_eResult) >= 4 );
C_ASSERT( offsetof(u32_SubmitPlayerResultResultCallback_t, ullUniqueGameID) == 4 );
C_ASSERT( sizeof(u32_SubmitPlayerResultResultCallback_t().ullUniqueGameID) >= 8 );
C_ASSERT( offsetof(u32_SubmitPlayerResultResultCallback_t, steamIDPlayer) == 12 );
C_ASSERT( sizeof(u32_SubmitPlayerResultResultCallback_t().steamIDPlayer) >= 8 );

#ifdef __x86_64__
w64_SubmitPlayerResultResultCallback_t::operator u64_SubmitPlayerResultResultCallback_t() const
{
    u64_SubmitPlayerResultResultCallback_t ret;
    ret.m_eResult = this->m_eResult;
    ret.ullUniqueGameID = this->ullUniqueGameID;
    ret.steamIDPlayer = this->steamIDPlayer;
    return ret;
}

u64_SubmitPlayerResultResultCallback_t::operator w64_SubmitPlayerResultResultCallback_t() const
{
    w64_SubmitPlayerResultResultCallback_t ret;
    ret.m_eResult = this->m_eResult;
    ret.ullUniqueGameID = this->ullUniqueGameID;
    ret.steamIDPlayer = this->steamIDPlayer;
    return ret;
}
#endif

#ifdef __i386__
w32_SubmitPlayerResultResultCallback_t::operator u32_SubmitPlayerResultResultCallback_t() const
{
    u32_SubmitPlayerResultResultCallback_t ret;
    ret.m_eResult = this->m_eResult;
    ret.ullUniqueGameID = this->ullUniqueGameID;
    ret.steamIDPlayer = this->steamIDPlayer;
    return ret;
}

u32_SubmitPlayerResultResultCallback_t::operator w32_SubmitPlayerResultResultCallback_t() const
{
    w32_SubmitPlayerResultResultCallback_t ret;
    ret.m_eResult = this->m_eResult;
    ret.ullUniqueGameID = this->ullUniqueGameID;
    ret.steamIDPlayer = this->steamIDPlayer;
    return ret;
}
#endif

void callback_message_utow( const u_CallbackMsg_t *u_msg, w_CallbackMsg_t *w_msg )
{
    int len;

#define MAKE_CASE(id, wlen) ((uint64_t)(id) << 48) | ((uint64_t)(wlen) << 24)
    switch (MAKE_CASE(u_msg->m_iCallback, u_msg->m_cubParam))
    {
#ifdef __i386__
    case MAKE_CASE(152, 16): len = 24; break; /* MicroTxnAuthorizationResponse_t_123 */
    /* Conflict: case MAKE_CASE(152, 16): len = 24; break; */ /* MicroTxnAuthorizationResponse_t_109 */
    case MAKE_CASE(209, 32): len = 40; break; /* GSReputation_t_123 */
    /* Conflict: case MAKE_CASE(209, 32): len = 40; break; */ /* GSReputation_t_108 */
    case MAKE_CASE(513, 12): len = 16; break; /* LobbyCreated_t_123 */
    /* Conflict: case MAKE_CASE(513, 12): len = 16; break; */ /* LobbyCreated_t_099u */
    case MAKE_CASE(1023, 36): len = 40; break; /* FileDetailsResult_t */
    case MAKE_CASE(1106, 28): len = 32; break; /* LeaderboardScoreUploaded_t_123 */
    /* Conflict: case MAKE_CASE(1106, 28): len = 32; break; */ /* LeaderboardScoreUploaded_t_104 */
    case MAKE_CASE(1111, 12): len = 16; break; /* LeaderboardUGCSet_t_123 */
    /* Conflict: case MAKE_CASE(1111, 12): len = 16; break; */ /* LeaderboardUGCSet_t_111x */
    case MAKE_CASE(1112, 20): len = 24; break; /* PS3TrophiesInstalled_t_123 */
    /* Conflict: case MAKE_CASE(1112, 20): len = 24; break; */ /* PS3TrophiesInstalled_t_112x */
    case MAKE_CASE(1221, 704): len = 712; break; /* SteamNetConnectionStatusChangedCallback_t_153a */
    /* Conflict: case MAKE_CASE(1221, 704): len = 712; break; */ /* SteamNetConnectionStatusChangedCallback_t_144 */
    case MAKE_CASE(1221, 576): len = 584; break; /* SteamNetConnectionStatusChangedCallback_t_151 */
    case MAKE_CASE(1303, 280): len = 288; break; /* RemoteStorageAppSyncProgress_t_123 */
    /* Conflict: case MAKE_CASE(1303, 280): len = 288; break; */ /* RemoteStorageAppSyncProgress_t_111x */
    case MAKE_CASE(1307, 272): len = 280; break; /* RemoteStorageFileShareResult_t_128x */
    case MAKE_CASE(1307, 12): len = 16; break; /* RemoteStorageFileShareResult_t_123 */
    /* Conflict: case MAKE_CASE(1307, 12): len = 16; break; */ /* RemoteStorageFileShareResult_t_111x */
    case MAKE_CASE(1308, 32): len = 40; break; /* RemoteStorageDownloadUGCResult_t_111x */
    case MAKE_CASE(1309, 16): len = 24; break; /* RemoteStoragePublishFileResult_t_125 */
    case MAKE_CASE(1309, 12): len = 16; break; /* RemoteStoragePublishFileResult_t_123 */
    /* Conflict: case MAKE_CASE(1309, 12): len = 16; break; */ /* RemoteStoragePublishFileResult_t_116x */
    case MAKE_CASE(1310, 1732): len = 1744; break; /* RemoteStorageGetPublishedFileDetailsResult_t_116x */
    case MAKE_CASE(1311, 12): len = 16; break; /* RemoteStorageDeletePublishedFileResult_t_123 */
    /* Conflict: case MAKE_CASE(1311, 12): len = 16; break; */ /* RemoteStorageDeletePublishedFileResult_t_116x */
    case MAKE_CASE(1312, 412): len = 416; break; /* RemoteStorageEnumerateUserPublishedFilesResult_t_123 */
    /* Conflict: case MAKE_CASE(1312, 412): len = 416; break; */ /* RemoteStorageEnumerateUserPublishedFilesResult_t_116x */
    case MAKE_CASE(1313, 12): len = 16; break; /* RemoteStorageSubscribePublishedFileResult_t_123 */
    case MAKE_CASE(1313, 4): len = 4; break; /* RemoteStorageSubscribePublishedFileResult_t_116x */
    case MAKE_CASE(1314, 612): len = 616; break; /* RemoteStorageEnumerateUserSubscribedFilesResult_t_123 */
    /* Conflict: case MAKE_CASE(1314, 612): len = 616; break; */ /* RemoteStorageEnumerateUserSubscribedFilesResult_t_116x */
    case MAKE_CASE(1315, 12): len = 16; break; /* RemoteStorageUnsubscribePublishedFileResult_t_123 */
    case MAKE_CASE(1315, 4): len = 4; break; /* RemoteStorageUnsubscribePublishedFileResult_t_116x */
    case MAKE_CASE(1316, 16): len = 24; break; /* RemoteStorageUpdatePublishedFileResult_t_125 */
    case MAKE_CASE(1316, 12): len = 16; break; /* RemoteStorageUpdatePublishedFileResult_t_123 */
    /* Conflict: case MAKE_CASE(1316, 12): len = 16; break; */ /* RemoteStorageUpdatePublishedFileResult_t_116x */
    case MAKE_CASE(1317, 288): len = 296; break; /* RemoteStorageDownloadUGCResult_t_123 */
    /* Conflict: case MAKE_CASE(1317, 288): len = 296; break; */ /* RemoteStorageDownloadUGCResult_t_116x */
    case MAKE_CASE(1318, 9748): len = 9760; break; /* RemoteStorageGetPublishedFileDetailsResult_t_126 */
    case MAKE_CASE(1318, 9744): len = 9752; break; /* RemoteStorageGetPublishedFileDetailsResult_t_123 */
    /* Conflict: case MAKE_CASE(1318, 9744): len = 9752; break; */ /* RemoteStorageGetPublishedFileDetailsResult_t_119x */
    case MAKE_CASE(1318, 9740): len = 9752; break; /* RemoteStorageGetPublishedFileDetailsResult_t_119 */
    case MAKE_CASE(1318, 9484): len = 9496; break; /* RemoteStorageGetPublishedFileDetailsResult_t_118 */
    case MAKE_CASE(1319, 620): len = 624; break; /* RemoteStorageEnumerateWorkshopFilesResult_t_125 */
    case MAKE_CASE(1319, 612): len = 616; break; /* RemoteStorageEnumerateWorkshopFilesResult_t_123 */
    /* Conflict: case MAKE_CASE(1319, 612): len = 616; break; */ /* RemoteStorageEnumerateWorkshopFilesResult_t_119 */
    case MAKE_CASE(1320, 28): len = 32; break; /* RemoteStorageGetPublishedItemVoteDetailsResult_t_123 */
    /* Conflict: case MAKE_CASE(1320, 28): len = 32; break; */ /* RemoteStorageGetPublishedItemVoteDetailsResult_t_119 */
    case MAKE_CASE(1324, 12): len = 16; break; /* RemoteStorageUpdateUserPublishedItemVoteResult_t_123 */
    /* Conflict: case MAKE_CASE(1324, 12): len = 16; break; */ /* RemoteStorageUpdateUserPublishedItemVoteResult_t_119 */
    case MAKE_CASE(1325, 16): len = 24; break; /* RemoteStorageUserVoteDetails_t_123 */
    /* Conflict: case MAKE_CASE(1325, 16): len = 24; break; */ /* RemoteStorageUserVoteDetails_t_119 */
    case MAKE_CASE(1326, 412): len = 416; break; /* RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123 */
    /* Conflict: case MAKE_CASE(1326, 412): len = 416; break; */ /* RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119 */
    case MAKE_CASE(1327, 16): len = 24; break; /* RemoteStorageSetUserPublishedFileActionResult_t_123 */
    /* Conflict: case MAKE_CASE(1327, 16): len = 24; break; */ /* RemoteStorageSetUserPublishedFileActionResult_t_119 */
    case MAKE_CASE(1330, 20): len = 24; break; /* RemoteStoragePublishedFileUpdated_t */
    case MAKE_CASE(2101, 24): len = 32; break; /* HTTPRequestCompleted_t_132x */
    case MAKE_CASE(2101, 20): len = 24; break; /* HTTPRequestCompleted_t_123 */
    /* Conflict: case MAKE_CASE(2101, 20): len = 24; break; */ /* HTTPRequestCompleted_t_115 */
    case MAKE_CASE(2102, 12): len = 16; break; /* HTTPRequestHeadersReceived_t_123 */
    /* Conflict: case MAKE_CASE(2102, 12): len = 16; break; */ /* HTTPRequestHeadersReceived_t_121x */
    case MAKE_CASE(2103, 20): len = 24; break; /* HTTPRequestDataReceived_t_123 */
    /* Conflict: case MAKE_CASE(2103, 20): len = 24; break; */ /* HTTPRequestDataReceived_t_121x */
    case MAKE_CASE(2803, 32): len = 40; break; /* SteamInputConfigurationLoaded_t */
    case MAKE_CASE(2804, 24): len = 32; break; /* SteamInputGamepadSlotChange_t */
    case MAKE_CASE(3402, 9768): len = 9784; break; /* SteamUGCRequestUGCDetailsResult_t_128x */
    case MAKE_CASE(3402, 9764): len = 9776; break; /* SteamUGCRequestUGCDetailsResult_t_129 */
    case MAKE_CASE(3402, 9760): len = 9768; break; /* SteamUGCRequestUGCDetailsResult_t_126 */
    case MAKE_CASE(3403, 16): len = 24; break; /* CreateItemResult_t */
    case MAKE_CASE(3405, 12): len = 16; break; /* ItemInstalled_t */
    case MAKE_CASE(3406, 16): len = 24; break; /* DownloadItemResult_t */
    case MAKE_CASE(3412, 20): len = 24; break; /* AddUGCDependencyResult_t */
    case MAKE_CASE(3413, 20): len = 24; break; /* RemoveUGCDependencyResult_t */
    case MAKE_CASE(3414, 16): len = 24; break; /* AddAppDependencyResult_t */
    case MAKE_CASE(3415, 16): len = 24; break; /* RemoveAppDependencyResult_t */
    case MAKE_CASE(3416, 148): len = 152; break; /* GetAppDependenciesResult_t */
    case MAKE_CASE(3417, 12): len = 16; break; /* DeleteItemResult_t */
    case MAKE_CASE(4502, 48): len = 48; break; /* HTML_NeedsPaint_t */
    case MAKE_CASE(4503, 20): len = 20; break; /* HTML_StartRequest_t */
    case MAKE_CASE(4505, 24): len = 24; break; /* HTML_URLChanged_t */
    case MAKE_CASE(4506, 12): len = 12; break; /* HTML_FinishedRequest_t */
    case MAKE_CASE(4507, 8): len = 8; break; /* HTML_OpenLinkInNewTab_t */
    case MAKE_CASE(4508, 8): len = 8; break; /* HTML_ChangedTitle_t */
    case MAKE_CASE(4513, 20): len = 20; break; /* HTML_LinkAtPosition_t */
    case MAKE_CASE(4514, 8): len = 8; break; /* HTML_JSAlert_t */
    case MAKE_CASE(4515, 8): len = 8; break; /* HTML_JSConfirm_t */
    case MAKE_CASE(4516, 12): len = 12; break; /* HTML_FileOpenDialog_t */
    case MAKE_CASE(4517, 16): len = 16; break; /* HTML_ComboNeedsPaint_t */
    case MAKE_CASE(4521, 28): len = 28; break; /* HTML_NewWindow_t_132x */
    case MAKE_CASE(4521, 24): len = 24; break; /* HTML_NewWindow_t_130x */
    case MAKE_CASE(4523, 8): len = 8; break; /* HTML_StatusText_t */
    case MAKE_CASE(4524, 8): len = 8; break; /* HTML_ShowToolTip_t */
    case MAKE_CASE(4525, 8): len = 8; break; /* HTML_UpdateToolTip_t */
    case MAKE_CASE(4704, 20): len = 24; break; /* SteamInventoryStartPurchaseResult_t */
    case MAKE_CASE(5211, 12): len = 16; break; /* RequestPlayersForGameProgressCallback_t */
    case MAKE_CASE(5212, 56): len = 64; break; /* RequestPlayersForGameResultCallback_t */
    case MAKE_CASE(5213, 20): len = 24; break; /* RequestPlayersForGameFinalResultCallback_t */
    case MAKE_CASE(5214, 20): len = 24; break; /* SubmitPlayerResultResultCallback_t */
    case MAKE_CASE(5215, 12): len = 16; break; /* EndGameResultCallback_t */
    case MAKE_CASE(5301, 276): len = 280; break; /* JoinPartyCallback_t */
    case MAKE_CASE(5302, 12): len = 16; break; /* CreateBeaconCallback_t */
#endif
#ifdef __x86_64__
    case MAKE_CASE(152, 16): len = 24; break; /* MicroTxnAuthorizationResponse_t_123 */
    case MAKE_CASE(152, 24): len = 24; break; /* MicroTxnAuthorizationResponse_t_109 */
    case MAKE_CASE(209, 32): len = 40; break; /* GSReputation_t_123 */
    case MAKE_CASE(209, 40): len = 40; break; /* GSReputation_t_108 */
    case MAKE_CASE(513, 12): len = 16; break; /* LobbyCreated_t_123 */
    case MAKE_CASE(513, 16): len = 16; break; /* LobbyCreated_t_099u */
    case MAKE_CASE(1023, 36): len = 40; break; /* FileDetailsResult_t */
    case MAKE_CASE(1106, 28): len = 32; break; /* LeaderboardScoreUploaded_t_123 */
    case MAKE_CASE(1106, 32): len = 32; break; /* LeaderboardScoreUploaded_t_104 */
    case MAKE_CASE(1111, 12): len = 16; break; /* LeaderboardUGCSet_t_123 */
    case MAKE_CASE(1111, 16): len = 16; break; /* LeaderboardUGCSet_t_111x */
    case MAKE_CASE(1112, 20): len = 24; break; /* PS3TrophiesInstalled_t_123 */
    case MAKE_CASE(1112, 24): len = 24; break; /* PS3TrophiesInstalled_t_112x */
    case MAKE_CASE(1221, 704): len = 712; break; /* SteamNetConnectionStatusChangedCallback_t_153a */
    /* Conflict: case MAKE_CASE(1221, 704): len = 712; break; */ /* SteamNetConnectionStatusChangedCallback_t_144 */
    case MAKE_CASE(1221, 576): len = 584; break; /* SteamNetConnectionStatusChangedCallback_t_151 */
    case MAKE_CASE(1303, 280): len = 288; break; /* RemoteStorageAppSyncProgress_t_123 */
    case MAKE_CASE(1303, 288): len = 288; break; /* RemoteStorageAppSyncProgress_t_111x */
    case MAKE_CASE(1307, 272): len = 280; break; /* RemoteStorageFileShareResult_t_128x */
    case MAKE_CASE(1307, 12): len = 16; break; /* RemoteStorageFileShareResult_t_123 */
    case MAKE_CASE(1307, 16): len = 16; break; /* RemoteStorageFileShareResult_t_111x */
    case MAKE_CASE(1308, 40): len = 40; break; /* RemoteStorageDownloadUGCResult_t_111x */
    case MAKE_CASE(1309, 16): len = 24; break; /* RemoteStoragePublishFileResult_t_125 */
    case MAKE_CASE(1309, 12): len = 16; break; /* RemoteStoragePublishFileResult_t_123 */
    /* Conflict: case MAKE_CASE(1309, 16): len = 16; break; */ /* RemoteStoragePublishFileResult_t_116x */
    case MAKE_CASE(1310, 1744): len = 1744; break; /* RemoteStorageGetPublishedFileDetailsResult_t_116x */
    case MAKE_CASE(1311, 12): len = 16; break; /* RemoteStorageDeletePublishedFileResult_t_123 */
    case MAKE_CASE(1311, 16): len = 16; break; /* RemoteStorageDeletePublishedFileResult_t_116x */
    case MAKE_CASE(1312, 412): len = 416; break; /* RemoteStorageEnumerateUserPublishedFilesResult_t_123 */
    case MAKE_CASE(1312, 416): len = 416; break; /* RemoteStorageEnumerateUserPublishedFilesResult_t_116x */
    case MAKE_CASE(1313, 12): len = 16; break; /* RemoteStorageSubscribePublishedFileResult_t_123 */
    case MAKE_CASE(1313, 4): len = 4; break; /* RemoteStorageSubscribePublishedFileResult_t_116x */
    case MAKE_CASE(1314, 612): len = 616; break; /* RemoteStorageEnumerateUserSubscribedFilesResult_t_123 */
    case MAKE_CASE(1314, 616): len = 616; break; /* RemoteStorageEnumerateUserSubscribedFilesResult_t_116x */
    case MAKE_CASE(1315, 12): len = 16; break; /* RemoteStorageUnsubscribePublishedFileResult_t_123 */
    case MAKE_CASE(1315, 4): len = 4; break; /* RemoteStorageUnsubscribePublishedFileResult_t_116x */
    case MAKE_CASE(1316, 16): len = 24; break; /* RemoteStorageUpdatePublishedFileResult_t_125 */
    case MAKE_CASE(1316, 12): len = 16; break; /* RemoteStorageUpdatePublishedFileResult_t_123 */
    /* Conflict: case MAKE_CASE(1316, 16): len = 16; break; */ /* RemoteStorageUpdatePublishedFileResult_t_116x */
    case MAKE_CASE(1317, 288): len = 296; break; /* RemoteStorageDownloadUGCResult_t_123 */
    case MAKE_CASE(1317, 296): len = 296; break; /* RemoteStorageDownloadUGCResult_t_116x */
    case MAKE_CASE(1318, 9748): len = 9760; break; /* RemoteStorageGetPublishedFileDetailsResult_t_126 */
    case MAKE_CASE(1318, 9744): len = 9752; break; /* RemoteStorageGetPublishedFileDetailsResult_t_123 */
    case MAKE_CASE(1318, 9752): len = 9752; break; /* RemoteStorageGetPublishedFileDetailsResult_t_119x */
    /* Conflict: case MAKE_CASE(1318, 9752): len = 9752; break; */ /* RemoteStorageGetPublishedFileDetailsResult_t_119 */
    case MAKE_CASE(1318, 9496): len = 9496; break; /* RemoteStorageGetPublishedFileDetailsResult_t_118 */
    case MAKE_CASE(1319, 620): len = 624; break; /* RemoteStorageEnumerateWorkshopFilesResult_t_125 */
    case MAKE_CASE(1319, 612): len = 616; break; /* RemoteStorageEnumerateWorkshopFilesResult_t_123 */
    case MAKE_CASE(1319, 616): len = 616; break; /* RemoteStorageEnumerateWorkshopFilesResult_t_119 */
    case MAKE_CASE(1320, 28): len = 32; break; /* RemoteStorageGetPublishedItemVoteDetailsResult_t_123 */
    case MAKE_CASE(1320, 32): len = 32; break; /* RemoteStorageGetPublishedItemVoteDetailsResult_t_119 */
    case MAKE_CASE(1324, 12): len = 16; break; /* RemoteStorageUpdateUserPublishedItemVoteResult_t_123 */
    case MAKE_CASE(1324, 16): len = 16; break; /* RemoteStorageUpdateUserPublishedItemVoteResult_t_119 */
    case MAKE_CASE(1325, 16): len = 24; break; /* RemoteStorageUserVoteDetails_t_123 */
    case MAKE_CASE(1325, 24): len = 24; break; /* RemoteStorageUserVoteDetails_t_119 */
    case MAKE_CASE(1326, 412): len = 416; break; /* RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123 */
    case MAKE_CASE(1326, 416): len = 416; break; /* RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119 */
    case MAKE_CASE(1327, 16): len = 24; break; /* RemoteStorageSetUserPublishedFileActionResult_t_123 */
    case MAKE_CASE(1327, 24): len = 24; break; /* RemoteStorageSetUserPublishedFileActionResult_t_119 */
    case MAKE_CASE(1330, 20): len = 24; break; /* RemoteStoragePublishedFileUpdated_t */
    case MAKE_CASE(2101, 24): len = 32; break; /* HTTPRequestCompleted_t_132x */
    case MAKE_CASE(2101, 20): len = 24; break; /* HTTPRequestCompleted_t_123 */
    /* Conflict: case MAKE_CASE(2101, 24): len = 24; break; */ /* HTTPRequestCompleted_t_115 */
    case MAKE_CASE(2102, 12): len = 16; break; /* HTTPRequestHeadersReceived_t_123 */
    case MAKE_CASE(2102, 16): len = 16; break; /* HTTPRequestHeadersReceived_t_121x */
    case MAKE_CASE(2103, 20): len = 24; break; /* HTTPRequestDataReceived_t_123 */
    case MAKE_CASE(2103, 24): len = 24; break; /* HTTPRequestDataReceived_t_121x */
    case MAKE_CASE(2803, 32): len = 40; break; /* SteamInputConfigurationLoaded_t */
    case MAKE_CASE(2804, 24): len = 32; break; /* SteamInputGamepadSlotChange_t */
    case MAKE_CASE(3402, 9768): len = 9784; break; /* SteamUGCRequestUGCDetailsResult_t_128x */
    case MAKE_CASE(3402, 9764): len = 9776; break; /* SteamUGCRequestUGCDetailsResult_t_129 */
    case MAKE_CASE(3402, 9760): len = 9768; break; /* SteamUGCRequestUGCDetailsResult_t_126 */
    case MAKE_CASE(3403, 16): len = 24; break; /* CreateItemResult_t */
    case MAKE_CASE(3405, 12): len = 16; break; /* ItemInstalled_t */
    case MAKE_CASE(3406, 16): len = 24; break; /* DownloadItemResult_t */
    case MAKE_CASE(3412, 20): len = 24; break; /* AddUGCDependencyResult_t */
    case MAKE_CASE(3413, 20): len = 24; break; /* RemoveUGCDependencyResult_t */
    case MAKE_CASE(3414, 16): len = 24; break; /* AddAppDependencyResult_t */
    case MAKE_CASE(3415, 16): len = 24; break; /* RemoveAppDependencyResult_t */
    case MAKE_CASE(3416, 148): len = 152; break; /* GetAppDependenciesResult_t */
    case MAKE_CASE(3417, 12): len = 16; break; /* DeleteItemResult_t */
    case MAKE_CASE(4502, 52): len = 56; break; /* HTML_NeedsPaint_t */
    case MAKE_CASE(4503, 32): len = 40; break; /* HTML_StartRequest_t */
    case MAKE_CASE(4505, 36): len = 48; break; /* HTML_URLChanged_t */
    case MAKE_CASE(4506, 20): len = 24; break; /* HTML_FinishedRequest_t */
    case MAKE_CASE(4507, 12): len = 16; break; /* HTML_OpenLinkInNewTab_t */
    case MAKE_CASE(4508, 12): len = 16; break; /* HTML_ChangedTitle_t */
    case MAKE_CASE(4513, 24): len = 32; break; /* HTML_LinkAtPosition_t */
    case MAKE_CASE(4514, 12): len = 16; break; /* HTML_JSAlert_t */
    case MAKE_CASE(4515, 12): len = 16; break; /* HTML_JSConfirm_t */
    case MAKE_CASE(4516, 20): len = 24; break; /* HTML_FileOpenDialog_t */
    case MAKE_CASE(4517, 20): len = 24; break; /* HTML_ComboNeedsPaint_t */
    case MAKE_CASE(4521, 32): len = 40; break; /* HTML_NewWindow_t_132x */
    case MAKE_CASE(4521, 28): len = 32; break; /* HTML_NewWindow_t_130x */
    case MAKE_CASE(4523, 12): len = 16; break; /* HTML_StatusText_t */
    case MAKE_CASE(4524, 12): len = 16; break; /* HTML_ShowToolTip_t */
    case MAKE_CASE(4525, 12): len = 16; break; /* HTML_UpdateToolTip_t */
    case MAKE_CASE(4704, 20): len = 24; break; /* SteamInventoryStartPurchaseResult_t */
    case MAKE_CASE(5211, 12): len = 16; break; /* RequestPlayersForGameProgressCallback_t */
    case MAKE_CASE(5212, 56): len = 64; break; /* RequestPlayersForGameResultCallback_t */
    case MAKE_CASE(5213, 20): len = 24; break; /* RequestPlayersForGameFinalResultCallback_t */
    case MAKE_CASE(5214, 20): len = 24; break; /* SubmitPlayerResultResultCallback_t */
    case MAKE_CASE(5215, 12): len = 16; break; /* EndGameResultCallback_t */
    case MAKE_CASE(5301, 276): len = 280; break; /* JoinPartyCallback_t */
    case MAKE_CASE(5302, 12): len = 16; break; /* CreateBeaconCallback_t */
#endif
    default: len = u_msg->m_cubParam; break;
    }
#undef MAKE_CASE

    w_msg->m_iCallback = u_msg->m_iCallback;
    w_msg->m_cubParam = len;
}

void *alloc_callback_wtou(int id, void *callback, int *callback_len)
{
    int len;

#define MAKE_CASE(id, wlen) ((uint64_t)(id) << 48) | ((uint64_t)(wlen) << 24)
    switch (MAKE_CASE(id, *callback_len))
    {
#ifdef __i386__
    case MAKE_CASE(152, 24): len = 16; break; /* MicroTxnAuthorizationResponse_t_123 */
    /* case MAKE_CASE(152, 24): len = 16; break; MicroTxnAuthorizationResponse_t_109 */
    case MAKE_CASE(209, 40): len = 32; break; /* GSReputation_t_123 */
    /* case MAKE_CASE(209, 40): len = 32; break; GSReputation_t_108 */
    case MAKE_CASE(513, 16): len = 12; break; /* LobbyCreated_t_123 */
    /* case MAKE_CASE(513, 16): len = 12; break; LobbyCreated_t_099u */
    case MAKE_CASE(1023, 40): len = 36; break; /* FileDetailsResult_t */
    case MAKE_CASE(1106, 32): len = 28; break; /* LeaderboardScoreUploaded_t_123 */
    /* case MAKE_CASE(1106, 32): len = 28; break; LeaderboardScoreUploaded_t_104 */
    case MAKE_CASE(1111, 16): len = 12; break; /* LeaderboardUGCSet_t_123 */
    /* case MAKE_CASE(1111, 16): len = 12; break; LeaderboardUGCSet_t_111x */
    case MAKE_CASE(1112, 24): len = 20; break; /* PS3TrophiesInstalled_t_123 */
    /* case MAKE_CASE(1112, 24): len = 20; break; PS3TrophiesInstalled_t_112x */
    case MAKE_CASE(1221, 712): len = 704; break; /* SteamNetConnectionStatusChangedCallback_t_153a */
    /* case MAKE_CASE(1221, 712): len = 704; break; SteamNetConnectionStatusChangedCallback_t_144 */
    case MAKE_CASE(1221, 584): len = 576; break; /* SteamNetConnectionStatusChangedCallback_t_151 */
    case MAKE_CASE(1303, 288): len = 280; break; /* RemoteStorageAppSyncProgress_t_123 */
    /* case MAKE_CASE(1303, 288): len = 280; break; RemoteStorageAppSyncProgress_t_111x */
    case MAKE_CASE(1307, 280): len = 272; break; /* RemoteStorageFileShareResult_t_128x */
    case MAKE_CASE(1307, 16): len = 12; break; /* RemoteStorageFileShareResult_t_123 */
    /* case MAKE_CASE(1307, 16): len = 12; break; RemoteStorageFileShareResult_t_111x */
    case MAKE_CASE(1308, 40): len = 32; break; /* RemoteStorageDownloadUGCResult_t_111x */
    case MAKE_CASE(1309, 24): len = 16; break; /* RemoteStoragePublishFileResult_t_125 */
    case MAKE_CASE(1309, 16): len = 12; break; /* RemoteStoragePublishFileResult_t_123 */
    /* case MAKE_CASE(1309, 16): len = 12; break; RemoteStoragePublishFileResult_t_116x */
    case MAKE_CASE(1310, 1744): len = 1732; break; /* RemoteStorageGetPublishedFileDetailsResult_t_116x */
    case MAKE_CASE(1311, 16): len = 12; break; /* RemoteStorageDeletePublishedFileResult_t_123 */
    /* case MAKE_CASE(1311, 16): len = 12; break; RemoteStorageDeletePublishedFileResult_t_116x */
    case MAKE_CASE(1312, 416): len = 412; break; /* RemoteStorageEnumerateUserPublishedFilesResult_t_123 */
    /* case MAKE_CASE(1312, 416): len = 412; break; RemoteStorageEnumerateUserPublishedFilesResult_t_116x */
    case MAKE_CASE(1313, 16): len = 12; break; /* RemoteStorageSubscribePublishedFileResult_t_123 */
    case MAKE_CASE(1313, 4): len = 4; break; /* RemoteStorageSubscribePublishedFileResult_t_116x */
    case MAKE_CASE(1314, 616): len = 612; break; /* RemoteStorageEnumerateUserSubscribedFilesResult_t_123 */
    /* case MAKE_CASE(1314, 616): len = 612; break; RemoteStorageEnumerateUserSubscribedFilesResult_t_116x */
    case MAKE_CASE(1315, 16): len = 12; break; /* RemoteStorageUnsubscribePublishedFileResult_t_123 */
    case MAKE_CASE(1315, 4): len = 4; break; /* RemoteStorageUnsubscribePublishedFileResult_t_116x */
    case MAKE_CASE(1316, 24): len = 16; break; /* RemoteStorageUpdatePublishedFileResult_t_125 */
    case MAKE_CASE(1316, 16): len = 12; break; /* RemoteStorageUpdatePublishedFileResult_t_123 */
    /* case MAKE_CASE(1316, 16): len = 12; break; RemoteStorageUpdatePublishedFileResult_t_116x */
    case MAKE_CASE(1317, 296): len = 288; break; /* RemoteStorageDownloadUGCResult_t_123 */
    /* case MAKE_CASE(1317, 296): len = 288; break; RemoteStorageDownloadUGCResult_t_116x */
    case MAKE_CASE(1318, 9760): len = 9748; break; /* RemoteStorageGetPublishedFileDetailsResult_t_126 */
    case MAKE_CASE(1318, 9752): len = 9744; break; /* RemoteStorageGetPublishedFileDetailsResult_t_123 */
    /* case MAKE_CASE(1318, 9752): len = 9744; break; RemoteStorageGetPublishedFileDetailsResult_t_119x */
    /* case MAKE_CASE(1318, 9752): len = 9740; break; RemoteStorageGetPublishedFileDetailsResult_t_119 */
    case MAKE_CASE(1318, 9496): len = 9484; break; /* RemoteStorageGetPublishedFileDetailsResult_t_118 */
    case MAKE_CASE(1319, 624): len = 620; break; /* RemoteStorageEnumerateWorkshopFilesResult_t_125 */
    case MAKE_CASE(1319, 616): len = 612; break; /* RemoteStorageEnumerateWorkshopFilesResult_t_123 */
    /* case MAKE_CASE(1319, 616): len = 612; break; RemoteStorageEnumerateWorkshopFilesResult_t_119 */
    case MAKE_CASE(1320, 32): len = 28; break; /* RemoteStorageGetPublishedItemVoteDetailsResult_t_123 */
    /* case MAKE_CASE(1320, 32): len = 28; break; RemoteStorageGetPublishedItemVoteDetailsResult_t_119 */
    case MAKE_CASE(1324, 16): len = 12; break; /* RemoteStorageUpdateUserPublishedItemVoteResult_t_123 */
    /* case MAKE_CASE(1324, 16): len = 12; break; RemoteStorageUpdateUserPublishedItemVoteResult_t_119 */
    case MAKE_CASE(1325, 24): len = 16; break; /* RemoteStorageUserVoteDetails_t_123 */
    /* case MAKE_CASE(1325, 24): len = 16; break; RemoteStorageUserVoteDetails_t_119 */
    case MAKE_CASE(1326, 416): len = 412; break; /* RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123 */
    /* case MAKE_CASE(1326, 416): len = 412; break; RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119 */
    case MAKE_CASE(1327, 24): len = 16; break; /* RemoteStorageSetUserPublishedFileActionResult_t_123 */
    /* case MAKE_CASE(1327, 24): len = 16; break; RemoteStorageSetUserPublishedFileActionResult_t_119 */
    case MAKE_CASE(1330, 24): len = 20; break; /* RemoteStoragePublishedFileUpdated_t */
    case MAKE_CASE(2101, 32): len = 24; break; /* HTTPRequestCompleted_t_132x */
    case MAKE_CASE(2101, 24): len = 20; break; /* HTTPRequestCompleted_t_123 */
    /* case MAKE_CASE(2101, 24): len = 20; break; HTTPRequestCompleted_t_115 */
    case MAKE_CASE(2102, 16): len = 12; break; /* HTTPRequestHeadersReceived_t_123 */
    /* case MAKE_CASE(2102, 16): len = 12; break; HTTPRequestHeadersReceived_t_121x */
    case MAKE_CASE(2103, 24): len = 20; break; /* HTTPRequestDataReceived_t_123 */
    /* case MAKE_CASE(2103, 24): len = 20; break; HTTPRequestDataReceived_t_121x */
    case MAKE_CASE(2803, 40): len = 32; break; /* SteamInputConfigurationLoaded_t */
    case MAKE_CASE(2804, 32): len = 24; break; /* SteamInputGamepadSlotChange_t */
    case MAKE_CASE(3402, 9784): len = 9768; break; /* SteamUGCRequestUGCDetailsResult_t_128x */
    case MAKE_CASE(3402, 9776): len = 9764; break; /* SteamUGCRequestUGCDetailsResult_t_129 */
    case MAKE_CASE(3402, 9768): len = 9760; break; /* SteamUGCRequestUGCDetailsResult_t_126 */
    case MAKE_CASE(3403, 24): len = 16; break; /* CreateItemResult_t */
    case MAKE_CASE(3405, 16): len = 12; break; /* ItemInstalled_t */
    case MAKE_CASE(3406, 24): len = 16; break; /* DownloadItemResult_t */
    case MAKE_CASE(3412, 24): len = 20; break; /* AddUGCDependencyResult_t */
    case MAKE_CASE(3413, 24): len = 20; break; /* RemoveUGCDependencyResult_t */
    case MAKE_CASE(3414, 24): len = 16; break; /* AddAppDependencyResult_t */
    case MAKE_CASE(3415, 24): len = 16; break; /* RemoveAppDependencyResult_t */
    case MAKE_CASE(3416, 152): len = 148; break; /* GetAppDependenciesResult_t */
    case MAKE_CASE(3417, 16): len = 12; break; /* DeleteItemResult_t */
    case MAKE_CASE(4502, 48): len = 48; break; /* HTML_NeedsPaint_t */
    case MAKE_CASE(4503, 20): len = 20; break; /* HTML_StartRequest_t */
    case MAKE_CASE(4505, 24): len = 24; break; /* HTML_URLChanged_t */
    case MAKE_CASE(4506, 12): len = 12; break; /* HTML_FinishedRequest_t */
    case MAKE_CASE(4507, 8): len = 8; break; /* HTML_OpenLinkInNewTab_t */
    case MAKE_CASE(4508, 8): len = 8; break; /* HTML_ChangedTitle_t */
    case MAKE_CASE(4513, 20): len = 20; break; /* HTML_LinkAtPosition_t */
    case MAKE_CASE(4514, 8): len = 8; break; /* HTML_JSAlert_t */
    case MAKE_CASE(4515, 8): len = 8; break; /* HTML_JSConfirm_t */
    case MAKE_CASE(4516, 12): len = 12; break; /* HTML_FileOpenDialog_t */
    case MAKE_CASE(4517, 16): len = 16; break; /* HTML_ComboNeedsPaint_t */
    case MAKE_CASE(4521, 28): len = 28; break; /* HTML_NewWindow_t_132x */
    case MAKE_CASE(4521, 24): len = 24; break; /* HTML_NewWindow_t_130x */
    case MAKE_CASE(4523, 8): len = 8; break; /* HTML_StatusText_t */
    case MAKE_CASE(4524, 8): len = 8; break; /* HTML_ShowToolTip_t */
    case MAKE_CASE(4525, 8): len = 8; break; /* HTML_UpdateToolTip_t */
    case MAKE_CASE(4704, 24): len = 20; break; /* SteamInventoryStartPurchaseResult_t */
    case MAKE_CASE(5211, 16): len = 12; break; /* RequestPlayersForGameProgressCallback_t */
    case MAKE_CASE(5212, 64): len = 56; break; /* RequestPlayersForGameResultCallback_t */
    case MAKE_CASE(5213, 24): len = 20; break; /* RequestPlayersForGameFinalResultCallback_t */
    case MAKE_CASE(5214, 24): len = 20; break; /* SubmitPlayerResultResultCallback_t */
    case MAKE_CASE(5215, 16): len = 12; break; /* EndGameResultCallback_t */
    case MAKE_CASE(5301, 280): len = 276; break; /* JoinPartyCallback_t */
    case MAKE_CASE(5302, 16): len = 12; break; /* CreateBeaconCallback_t */
#endif
#ifdef __x86_64__
    case MAKE_CASE(152, 24): len = 16; break; /* MicroTxnAuthorizationResponse_t_123 */
    /* case MAKE_CASE(152, 24): len = 24; break; MicroTxnAuthorizationResponse_t_109 */
    case MAKE_CASE(209, 40): len = 32; break; /* GSReputation_t_123 */
    /* case MAKE_CASE(209, 40): len = 40; break; GSReputation_t_108 */
    case MAKE_CASE(513, 16): len = 12; break; /* LobbyCreated_t_123 */
    /* case MAKE_CASE(513, 16): len = 16; break; LobbyCreated_t_099u */
    case MAKE_CASE(1023, 40): len = 36; break; /* FileDetailsResult_t */
    case MAKE_CASE(1106, 32): len = 28; break; /* LeaderboardScoreUploaded_t_123 */
    /* case MAKE_CASE(1106, 32): len = 32; break; LeaderboardScoreUploaded_t_104 */
    case MAKE_CASE(1111, 16): len = 12; break; /* LeaderboardUGCSet_t_123 */
    /* case MAKE_CASE(1111, 16): len = 16; break; LeaderboardUGCSet_t_111x */
    case MAKE_CASE(1112, 24): len = 20; break; /* PS3TrophiesInstalled_t_123 */
    /* case MAKE_CASE(1112, 24): len = 24; break; PS3TrophiesInstalled_t_112x */
    case MAKE_CASE(1221, 712): len = 704; break; /* SteamNetConnectionStatusChangedCallback_t_153a */
    /* case MAKE_CASE(1221, 712): len = 704; break; SteamNetConnectionStatusChangedCallback_t_144 */
    case MAKE_CASE(1221, 584): len = 576; break; /* SteamNetConnectionStatusChangedCallback_t_151 */
    case MAKE_CASE(1303, 288): len = 280; break; /* RemoteStorageAppSyncProgress_t_123 */
    /* case MAKE_CASE(1303, 288): len = 288; break; RemoteStorageAppSyncProgress_t_111x */
    case MAKE_CASE(1307, 280): len = 272; break; /* RemoteStorageFileShareResult_t_128x */
    case MAKE_CASE(1307, 16): len = 12; break; /* RemoteStorageFileShareResult_t_123 */
    /* case MAKE_CASE(1307, 16): len = 16; break; RemoteStorageFileShareResult_t_111x */
    case MAKE_CASE(1308, 40): len = 40; break; /* RemoteStorageDownloadUGCResult_t_111x */
    case MAKE_CASE(1309, 24): len = 16; break; /* RemoteStoragePublishFileResult_t_125 */
    case MAKE_CASE(1309, 16): len = 12; break; /* RemoteStoragePublishFileResult_t_123 */
    /* case MAKE_CASE(1309, 16): len = 16; break; RemoteStoragePublishFileResult_t_116x */
    case MAKE_CASE(1310, 1744): len = 1744; break; /* RemoteStorageGetPublishedFileDetailsResult_t_116x */
    case MAKE_CASE(1311, 16): len = 12; break; /* RemoteStorageDeletePublishedFileResult_t_123 */
    /* case MAKE_CASE(1311, 16): len = 16; break; RemoteStorageDeletePublishedFileResult_t_116x */
    case MAKE_CASE(1312, 416): len = 412; break; /* RemoteStorageEnumerateUserPublishedFilesResult_t_123 */
    /* case MAKE_CASE(1312, 416): len = 416; break; RemoteStorageEnumerateUserPublishedFilesResult_t_116x */
    case MAKE_CASE(1313, 16): len = 12; break; /* RemoteStorageSubscribePublishedFileResult_t_123 */
    case MAKE_CASE(1313, 4): len = 4; break; /* RemoteStorageSubscribePublishedFileResult_t_116x */
    case MAKE_CASE(1314, 616): len = 612; break; /* RemoteStorageEnumerateUserSubscribedFilesResult_t_123 */
    /* case MAKE_CASE(1314, 616): len = 616; break; RemoteStorageEnumerateUserSubscribedFilesResult_t_116x */
    case MAKE_CASE(1315, 16): len = 12; break; /* RemoteStorageUnsubscribePublishedFileResult_t_123 */
    case MAKE_CASE(1315, 4): len = 4; break; /* RemoteStorageUnsubscribePublishedFileResult_t_116x */
    case MAKE_CASE(1316, 24): len = 16; break; /* RemoteStorageUpdatePublishedFileResult_t_125 */
    case MAKE_CASE(1316, 16): len = 12; break; /* RemoteStorageUpdatePublishedFileResult_t_123 */
    /* case MAKE_CASE(1316, 16): len = 16; break; RemoteStorageUpdatePublishedFileResult_t_116x */
    case MAKE_CASE(1317, 296): len = 288; break; /* RemoteStorageDownloadUGCResult_t_123 */
    /* case MAKE_CASE(1317, 296): len = 296; break; RemoteStorageDownloadUGCResult_t_116x */
    case MAKE_CASE(1318, 9760): len = 9748; break; /* RemoteStorageGetPublishedFileDetailsResult_t_126 */
    case MAKE_CASE(1318, 9752): len = 9744; break; /* RemoteStorageGetPublishedFileDetailsResult_t_123 */
    /* case MAKE_CASE(1318, 9752): len = 9752; break; RemoteStorageGetPublishedFileDetailsResult_t_119x */
    /* case MAKE_CASE(1318, 9752): len = 9752; break; RemoteStorageGetPublishedFileDetailsResult_t_119 */
    case MAKE_CASE(1318, 9496): len = 9496; break; /* RemoteStorageGetPublishedFileDetailsResult_t_118 */
    case MAKE_CASE(1319, 624): len = 620; break; /* RemoteStorageEnumerateWorkshopFilesResult_t_125 */
    case MAKE_CASE(1319, 616): len = 612; break; /* RemoteStorageEnumerateWorkshopFilesResult_t_123 */
    /* case MAKE_CASE(1319, 616): len = 616; break; RemoteStorageEnumerateWorkshopFilesResult_t_119 */
    case MAKE_CASE(1320, 32): len = 28; break; /* RemoteStorageGetPublishedItemVoteDetailsResult_t_123 */
    /* case MAKE_CASE(1320, 32): len = 32; break; RemoteStorageGetPublishedItemVoteDetailsResult_t_119 */
    case MAKE_CASE(1324, 16): len = 12; break; /* RemoteStorageUpdateUserPublishedItemVoteResult_t_123 */
    /* case MAKE_CASE(1324, 16): len = 16; break; RemoteStorageUpdateUserPublishedItemVoteResult_t_119 */
    case MAKE_CASE(1325, 24): len = 16; break; /* RemoteStorageUserVoteDetails_t_123 */
    /* case MAKE_CASE(1325, 24): len = 24; break; RemoteStorageUserVoteDetails_t_119 */
    case MAKE_CASE(1326, 416): len = 412; break; /* RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123 */
    /* case MAKE_CASE(1326, 416): len = 416; break; RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119 */
    case MAKE_CASE(1327, 24): len = 16; break; /* RemoteStorageSetUserPublishedFileActionResult_t_123 */
    /* case MAKE_CASE(1327, 24): len = 24; break; RemoteStorageSetUserPublishedFileActionResult_t_119 */
    case MAKE_CASE(1330, 24): len = 20; break; /* RemoteStoragePublishedFileUpdated_t */
    case MAKE_CASE(2101, 32): len = 24; break; /* HTTPRequestCompleted_t_132x */
    case MAKE_CASE(2101, 24): len = 20; break; /* HTTPRequestCompleted_t_123 */
    /* case MAKE_CASE(2101, 24): len = 24; break; HTTPRequestCompleted_t_115 */
    case MAKE_CASE(2102, 16): len = 12; break; /* HTTPRequestHeadersReceived_t_123 */
    /* case MAKE_CASE(2102, 16): len = 16; break; HTTPRequestHeadersReceived_t_121x */
    case MAKE_CASE(2103, 24): len = 20; break; /* HTTPRequestDataReceived_t_123 */
    /* case MAKE_CASE(2103, 24): len = 24; break; HTTPRequestDataReceived_t_121x */
    case MAKE_CASE(2803, 40): len = 32; break; /* SteamInputConfigurationLoaded_t */
    case MAKE_CASE(2804, 32): len = 24; break; /* SteamInputGamepadSlotChange_t */
    case MAKE_CASE(3402, 9784): len = 9768; break; /* SteamUGCRequestUGCDetailsResult_t_128x */
    case MAKE_CASE(3402, 9776): len = 9764; break; /* SteamUGCRequestUGCDetailsResult_t_129 */
    case MAKE_CASE(3402, 9768): len = 9760; break; /* SteamUGCRequestUGCDetailsResult_t_126 */
    case MAKE_CASE(3403, 24): len = 16; break; /* CreateItemResult_t */
    case MAKE_CASE(3405, 16): len = 12; break; /* ItemInstalled_t */
    case MAKE_CASE(3406, 24): len = 16; break; /* DownloadItemResult_t */
    case MAKE_CASE(3412, 24): len = 20; break; /* AddUGCDependencyResult_t */
    case MAKE_CASE(3413, 24): len = 20; break; /* RemoveUGCDependencyResult_t */
    case MAKE_CASE(3414, 24): len = 16; break; /* AddAppDependencyResult_t */
    case MAKE_CASE(3415, 24): len = 16; break; /* RemoveAppDependencyResult_t */
    case MAKE_CASE(3416, 152): len = 148; break; /* GetAppDependenciesResult_t */
    case MAKE_CASE(3417, 16): len = 12; break; /* DeleteItemResult_t */
    case MAKE_CASE(4502, 56): len = 52; break; /* HTML_NeedsPaint_t */
    case MAKE_CASE(4503, 40): len = 32; break; /* HTML_StartRequest_t */
    case MAKE_CASE(4505, 48): len = 36; break; /* HTML_URLChanged_t */
    case MAKE_CASE(4506, 24): len = 20; break; /* HTML_FinishedRequest_t */
    case MAKE_CASE(4507, 16): len = 12; break; /* HTML_OpenLinkInNewTab_t */
    case MAKE_CASE(4508, 16): len = 12; break; /* HTML_ChangedTitle_t */
    case MAKE_CASE(4513, 32): len = 24; break; /* HTML_LinkAtPosition_t */
    case MAKE_CASE(4514, 16): len = 12; break; /* HTML_JSAlert_t */
    case MAKE_CASE(4515, 16): len = 12; break; /* HTML_JSConfirm_t */
    case MAKE_CASE(4516, 24): len = 20; break; /* HTML_FileOpenDialog_t */
    case MAKE_CASE(4517, 24): len = 20; break; /* HTML_ComboNeedsPaint_t */
    case MAKE_CASE(4521, 40): len = 32; break; /* HTML_NewWindow_t_132x */
    case MAKE_CASE(4521, 32): len = 28; break; /* HTML_NewWindow_t_130x */
    case MAKE_CASE(4523, 16): len = 12; break; /* HTML_StatusText_t */
    case MAKE_CASE(4524, 16): len = 12; break; /* HTML_ShowToolTip_t */
    case MAKE_CASE(4525, 16): len = 12; break; /* HTML_UpdateToolTip_t */
    case MAKE_CASE(4704, 24): len = 20; break; /* SteamInventoryStartPurchaseResult_t */
    case MAKE_CASE(5211, 16): len = 12; break; /* RequestPlayersForGameProgressCallback_t */
    case MAKE_CASE(5212, 64): len = 56; break; /* RequestPlayersForGameResultCallback_t */
    case MAKE_CASE(5213, 24): len = 20; break; /* RequestPlayersForGameFinalResultCallback_t */
    case MAKE_CASE(5214, 24): len = 20; break; /* SubmitPlayerResultResultCallback_t */
    case MAKE_CASE(5215, 16): len = 12; break; /* EndGameResultCallback_t */
    case MAKE_CASE(5301, 280): len = 276; break; /* JoinPartyCallback_t */
    case MAKE_CASE(5302, 16): len = 12; break; /* CreateBeaconCallback_t */
#endif
    default: return callback;
    }
#undef MAKE_CASE

    callback = HeapAlloc( GetProcessHeap(), 0, len );
    *callback_len = len;
    return callback;
}

void convert_callback_utow(int id, void *u_callback, int u_callback_len, void *w_callback, int w_callback_len)
{
#define MAKE_CASE(id, wlen, ulen) ((uint64_t)(id) << 48) | ((uint64_t)(wlen) << 24) | (uint64_t)(ulen)
    switch (MAKE_CASE(id, w_callback_len, u_callback_len))
    {
#ifdef __i386__
    case MAKE_CASE(152, 24, 16): *(w_MicroTxnAuthorizationResponse_t_123 *)w_callback = *(u_MicroTxnAuthorizationResponse_t_123 *)u_callback; break;
    /* case MAKE_CASE(152, 24, 16): *(w_MicroTxnAuthorizationResponse_t_109 *)w_callback = *(u_MicroTxnAuthorizationResponse_t_109 *)u_callback; break; */
    case MAKE_CASE(209, 40, 32): *(w_GSReputation_t_123 *)w_callback = *(u_GSReputation_t_123 *)u_callback; break;
    /* case MAKE_CASE(209, 40, 32): *(w_GSReputation_t_108 *)w_callback = *(u_GSReputation_t_108 *)u_callback; break; */
    case MAKE_CASE(513, 16, 12): *(w_LobbyCreated_t_123 *)w_callback = *(u_LobbyCreated_t_123 *)u_callback; break;
    /* case MAKE_CASE(513, 16, 12): *(w_LobbyCreated_t_099u *)w_callback = *(u_LobbyCreated_t_099u *)u_callback; break; */
    case MAKE_CASE(1023, 40, 36): *(w_FileDetailsResult_t *)w_callback = *(u_FileDetailsResult_t *)u_callback; break;
    case MAKE_CASE(1106, 32, 28): *(w_LeaderboardScoreUploaded_t_123 *)w_callback = *(u_LeaderboardScoreUploaded_t_123 *)u_callback; break;
    /* case MAKE_CASE(1106, 32, 28): *(w_LeaderboardScoreUploaded_t_104 *)w_callback = *(u_LeaderboardScoreUploaded_t_104 *)u_callback; break; */
    case MAKE_CASE(1111, 16, 12): *(w_LeaderboardUGCSet_t_123 *)w_callback = *(u_LeaderboardUGCSet_t_123 *)u_callback; break;
    /* case MAKE_CASE(1111, 16, 12): *(w_LeaderboardUGCSet_t_111x *)w_callback = *(u_LeaderboardUGCSet_t_111x *)u_callback; break; */
    case MAKE_CASE(1112, 24, 20): *(w_PS3TrophiesInstalled_t_123 *)w_callback = *(u_PS3TrophiesInstalled_t_123 *)u_callback; break;
    /* case MAKE_CASE(1112, 24, 20): *(w_PS3TrophiesInstalled_t_112x *)w_callback = *(u_PS3TrophiesInstalled_t_112x *)u_callback; break; */
    case MAKE_CASE(1221, 712, 704): *(w_SteamNetConnectionStatusChangedCallback_t_153a *)w_callback = *(u_SteamNetConnectionStatusChangedCallback_t_153a *)u_callback; break;
    /* case MAKE_CASE(1221, 712, 704): *(w_SteamNetConnectionStatusChangedCallback_t_144 *)w_callback = *(u_SteamNetConnectionStatusChangedCallback_t_144 *)u_callback; break; */
    case MAKE_CASE(1221, 584, 576): *(w_SteamNetConnectionStatusChangedCallback_t_151 *)w_callback = *(u_SteamNetConnectionStatusChangedCallback_t_151 *)u_callback; break;
    case MAKE_CASE(1303, 288, 280): *(w_RemoteStorageAppSyncProgress_t_123 *)w_callback = *(u_RemoteStorageAppSyncProgress_t_123 *)u_callback; break;
    /* case MAKE_CASE(1303, 288, 280): *(w_RemoteStorageAppSyncProgress_t_111x *)w_callback = *(u_RemoteStorageAppSyncProgress_t_111x *)u_callback; break; */
    case MAKE_CASE(1307, 280, 272): *(w_RemoteStorageFileShareResult_t_128x *)w_callback = *(u_RemoteStorageFileShareResult_t_128x *)u_callback; break;
    case MAKE_CASE(1307, 16, 12): *(w_RemoteStorageFileShareResult_t_123 *)w_callback = *(u_RemoteStorageFileShareResult_t_123 *)u_callback; break;
    /* case MAKE_CASE(1307, 16, 12): *(w_RemoteStorageFileShareResult_t_111x *)w_callback = *(u_RemoteStorageFileShareResult_t_111x *)u_callback; break; */
    case MAKE_CASE(1308, 40, 32): *(w_RemoteStorageDownloadUGCResult_t_111x *)w_callback = *(u_RemoteStorageDownloadUGCResult_t_111x *)u_callback; break;
    case MAKE_CASE(1309, 24, 16): *(w_RemoteStoragePublishFileResult_t_125 *)w_callback = *(u_RemoteStoragePublishFileResult_t_125 *)u_callback; break;
    case MAKE_CASE(1309, 16, 12): *(w_RemoteStoragePublishFileResult_t_123 *)w_callback = *(u_RemoteStoragePublishFileResult_t_123 *)u_callback; break;
    /* case MAKE_CASE(1309, 16, 12): *(w_RemoteStoragePublishFileResult_t_116x *)w_callback = *(u_RemoteStoragePublishFileResult_t_116x *)u_callback; break; */
    case MAKE_CASE(1310, 1744, 1732): *(w_RemoteStorageGetPublishedFileDetailsResult_t_116x *)w_callback = *(u_RemoteStorageGetPublishedFileDetailsResult_t_116x *)u_callback; break;
    case MAKE_CASE(1311, 16, 12): *(w_RemoteStorageDeletePublishedFileResult_t_123 *)w_callback = *(u_RemoteStorageDeletePublishedFileResult_t_123 *)u_callback; break;
    /* case MAKE_CASE(1311, 16, 12): *(w_RemoteStorageDeletePublishedFileResult_t_116x *)w_callback = *(u_RemoteStorageDeletePublishedFileResult_t_116x *)u_callback; break; */
    case MAKE_CASE(1312, 416, 412): *(w_RemoteStorageEnumerateUserPublishedFilesResult_t_123 *)w_callback = *(u_RemoteStorageEnumerateUserPublishedFilesResult_t_123 *)u_callback; break;
    /* case MAKE_CASE(1312, 416, 412): *(w_RemoteStorageEnumerateUserPublishedFilesResult_t_116x *)w_callback = *(u_RemoteStorageEnumerateUserPublishedFilesResult_t_116x *)u_callback; break; */
    case MAKE_CASE(1313, 16, 12): *(w_RemoteStorageSubscribePublishedFileResult_t_123 *)w_callback = *(u_RemoteStorageSubscribePublishedFileResult_t_123 *)u_callback; break;
    case MAKE_CASE(1313, 4, 4): *(w_RemoteStorageSubscribePublishedFileResult_t_116x *)w_callback = *(u_RemoteStorageSubscribePublishedFileResult_t_116x *)u_callback; break;
    case MAKE_CASE(1314, 616, 612): *(w_RemoteStorageEnumerateUserSubscribedFilesResult_t_123 *)w_callback = *(u_RemoteStorageEnumerateUserSubscribedFilesResult_t_123 *)u_callback; break;
    /* case MAKE_CASE(1314, 616, 612): *(w_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x *)w_callback = *(u_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x *)u_callback; break; */
    case MAKE_CASE(1315, 16, 12): *(w_RemoteStorageUnsubscribePublishedFileResult_t_123 *)w_callback = *(u_RemoteStorageUnsubscribePublishedFileResult_t_123 *)u_callback; break;
    case MAKE_CASE(1315, 4, 4): *(w_RemoteStorageUnsubscribePublishedFileResult_t_116x *)w_callback = *(u_RemoteStorageUnsubscribePublishedFileResult_t_116x *)u_callback; break;
    case MAKE_CASE(1316, 24, 16): *(w_RemoteStorageUpdatePublishedFileResult_t_125 *)w_callback = *(u_RemoteStorageUpdatePublishedFileResult_t_125 *)u_callback; break;
    case MAKE_CASE(1316, 16, 12): *(w_RemoteStorageUpdatePublishedFileResult_t_123 *)w_callback = *(u_RemoteStorageUpdatePublishedFileResult_t_123 *)u_callback; break;
    /* case MAKE_CASE(1316, 16, 12): *(w_RemoteStorageUpdatePublishedFileResult_t_116x *)w_callback = *(u_RemoteStorageUpdatePublishedFileResult_t_116x *)u_callback; break; */
    case MAKE_CASE(1317, 296, 288): *(w_RemoteStorageDownloadUGCResult_t_123 *)w_callback = *(u_RemoteStorageDownloadUGCResult_t_123 *)u_callback; break;
    /* case MAKE_CASE(1317, 296, 288): *(w_RemoteStorageDownloadUGCResult_t_116x *)w_callback = *(u_RemoteStorageDownloadUGCResult_t_116x *)u_callback; break; */
    case MAKE_CASE(1318, 9760, 9748): *(w_RemoteStorageGetPublishedFileDetailsResult_t_126 *)w_callback = *(u_RemoteStorageGetPublishedFileDetailsResult_t_126 *)u_callback; break;
    case MAKE_CASE(1318, 9752, 9744): *(w_RemoteStorageGetPublishedFileDetailsResult_t_123 *)w_callback = *(u_RemoteStorageGetPublishedFileDetailsResult_t_123 *)u_callback; break;
    /* case MAKE_CASE(1318, 9752, 9744): *(w_RemoteStorageGetPublishedFileDetailsResult_t_119x *)w_callback = *(u_RemoteStorageGetPublishedFileDetailsResult_t_119x *)u_callback; break; */
    case MAKE_CASE(1318, 9752, 9740): *(w_RemoteStorageGetPublishedFileDetailsResult_t_119 *)w_callback = *(u_RemoteStorageGetPublishedFileDetailsResult_t_119 *)u_callback; break;
    case MAKE_CASE(1318, 9496, 9484): *(w_RemoteStorageGetPublishedFileDetailsResult_t_118 *)w_callback = *(u_RemoteStorageGetPublishedFileDetailsResult_t_118 *)u_callback; break;
    case MAKE_CASE(1319, 624, 620): *(w_RemoteStorageEnumerateWorkshopFilesResult_t_125 *)w_callback = *(u_RemoteStorageEnumerateWorkshopFilesResult_t_125 *)u_callback; break;
    case MAKE_CASE(1319, 616, 612): *(w_RemoteStorageEnumerateWorkshopFilesResult_t_123 *)w_callback = *(u_RemoteStorageEnumerateWorkshopFilesResult_t_123 *)u_callback; break;
    /* case MAKE_CASE(1319, 616, 612): *(w_RemoteStorageEnumerateWorkshopFilesResult_t_119 *)w_callback = *(u_RemoteStorageEnumerateWorkshopFilesResult_t_119 *)u_callback; break; */
    case MAKE_CASE(1320, 32, 28): *(w_RemoteStorageGetPublishedItemVoteDetailsResult_t_123 *)w_callback = *(u_RemoteStorageGetPublishedItemVoteDetailsResult_t_123 *)u_callback; break;
    /* case MAKE_CASE(1320, 32, 28): *(w_RemoteStorageGetPublishedItemVoteDetailsResult_t_119 *)w_callback = *(u_RemoteStorageGetPublishedItemVoteDetailsResult_t_119 *)u_callback; break; */
    case MAKE_CASE(1324, 16, 12): *(w_RemoteStorageUpdateUserPublishedItemVoteResult_t_123 *)w_callback = *(u_RemoteStorageUpdateUserPublishedItemVoteResult_t_123 *)u_callback; break;
    /* case MAKE_CASE(1324, 16, 12): *(w_RemoteStorageUpdateUserPublishedItemVoteResult_t_119 *)w_callback = *(u_RemoteStorageUpdateUserPublishedItemVoteResult_t_119 *)u_callback; break; */
    case MAKE_CASE(1325, 24, 16): *(w_RemoteStorageUserVoteDetails_t_123 *)w_callback = *(u_RemoteStorageUserVoteDetails_t_123 *)u_callback; break;
    /* case MAKE_CASE(1325, 24, 16): *(w_RemoteStorageUserVoteDetails_t_119 *)w_callback = *(u_RemoteStorageUserVoteDetails_t_119 *)u_callback; break; */
    case MAKE_CASE(1326, 416, 412): *(w_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123 *)w_callback = *(u_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123 *)u_callback; break;
    /* case MAKE_CASE(1326, 416, 412): *(w_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119 *)w_callback = *(u_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119 *)u_callback; break; */
    case MAKE_CASE(1327, 24, 16): *(w_RemoteStorageSetUserPublishedFileActionResult_t_123 *)w_callback = *(u_RemoteStorageSetUserPublishedFileActionResult_t_123 *)u_callback; break;
    /* case MAKE_CASE(1327, 24, 16): *(w_RemoteStorageSetUserPublishedFileActionResult_t_119 *)w_callback = *(u_RemoteStorageSetUserPublishedFileActionResult_t_119 *)u_callback; break; */
    case MAKE_CASE(1330, 24, 20): *(w_RemoteStoragePublishedFileUpdated_t *)w_callback = *(u_RemoteStoragePublishedFileUpdated_t *)u_callback; break;
    case MAKE_CASE(2101, 32, 24): *(w_HTTPRequestCompleted_t_132x *)w_callback = *(u_HTTPRequestCompleted_t_132x *)u_callback; break;
    case MAKE_CASE(2101, 24, 20): *(w_HTTPRequestCompleted_t_123 *)w_callback = *(u_HTTPRequestCompleted_t_123 *)u_callback; break;
    /* case MAKE_CASE(2101, 24, 20): *(w_HTTPRequestCompleted_t_115 *)w_callback = *(u_HTTPRequestCompleted_t_115 *)u_callback; break; */
    case MAKE_CASE(2102, 16, 12): *(w_HTTPRequestHeadersReceived_t_123 *)w_callback = *(u_HTTPRequestHeadersReceived_t_123 *)u_callback; break;
    /* case MAKE_CASE(2102, 16, 12): *(w_HTTPRequestHeadersReceived_t_121x *)w_callback = *(u_HTTPRequestHeadersReceived_t_121x *)u_callback; break; */
    case MAKE_CASE(2103, 24, 20): *(w_HTTPRequestDataReceived_t_123 *)w_callback = *(u_HTTPRequestDataReceived_t_123 *)u_callback; break;
    /* case MAKE_CASE(2103, 24, 20): *(w_HTTPRequestDataReceived_t_121x *)w_callback = *(u_HTTPRequestDataReceived_t_121x *)u_callback; break; */
    case MAKE_CASE(2803, 40, 32): *(w_SteamInputConfigurationLoaded_t *)w_callback = *(u_SteamInputConfigurationLoaded_t *)u_callback; break;
    case MAKE_CASE(2804, 32, 24): *(w_SteamInputGamepadSlotChange_t *)w_callback = *(u_SteamInputGamepadSlotChange_t *)u_callback; break;
    case MAKE_CASE(3402, 9784, 9768): *(w_SteamUGCRequestUGCDetailsResult_t_128x *)w_callback = *(u_SteamUGCRequestUGCDetailsResult_t_128x *)u_callback; break;
    case MAKE_CASE(3402, 9776, 9764): *(w_SteamUGCRequestUGCDetailsResult_t_129 *)w_callback = *(u_SteamUGCRequestUGCDetailsResult_t_129 *)u_callback; break;
    case MAKE_CASE(3402, 9768, 9760): *(w_SteamUGCRequestUGCDetailsResult_t_126 *)w_callback = *(u_SteamUGCRequestUGCDetailsResult_t_126 *)u_callback; break;
    case MAKE_CASE(3403, 24, 16): *(w_CreateItemResult_t *)w_callback = *(u_CreateItemResult_t *)u_callback; break;
    case MAKE_CASE(3405, 16, 12): *(w_ItemInstalled_t *)w_callback = *(u_ItemInstalled_t *)u_callback; break;
    case MAKE_CASE(3406, 24, 16): *(w_DownloadItemResult_t *)w_callback = *(u_DownloadItemResult_t *)u_callback; break;
    case MAKE_CASE(3412, 24, 20): *(w_AddUGCDependencyResult_t *)w_callback = *(u_AddUGCDependencyResult_t *)u_callback; break;
    case MAKE_CASE(3413, 24, 20): *(w_RemoveUGCDependencyResult_t *)w_callback = *(u_RemoveUGCDependencyResult_t *)u_callback; break;
    case MAKE_CASE(3414, 24, 16): *(w_AddAppDependencyResult_t *)w_callback = *(u_AddAppDependencyResult_t *)u_callback; break;
    case MAKE_CASE(3415, 24, 16): *(w_RemoveAppDependencyResult_t *)w_callback = *(u_RemoveAppDependencyResult_t *)u_callback; break;
    case MAKE_CASE(3416, 152, 148): *(w_GetAppDependenciesResult_t *)w_callback = *(u_GetAppDependenciesResult_t *)u_callback; break;
    case MAKE_CASE(3417, 16, 12): *(w_DeleteItemResult_t *)w_callback = *(u_DeleteItemResult_t *)u_callback; break;
    case MAKE_CASE(4502, 48, 48): *(w_HTML_NeedsPaint_t *)w_callback = *(u_HTML_NeedsPaint_t *)u_callback; break;
    case MAKE_CASE(4503, 20, 20): *(w_HTML_StartRequest_t *)w_callback = *(u_HTML_StartRequest_t *)u_callback; break;
    case MAKE_CASE(4505, 24, 24): *(w_HTML_URLChanged_t *)w_callback = *(u_HTML_URLChanged_t *)u_callback; break;
    case MAKE_CASE(4506, 12, 12): *(w_HTML_FinishedRequest_t *)w_callback = *(u_HTML_FinishedRequest_t *)u_callback; break;
    case MAKE_CASE(4507, 8, 8): *(w_HTML_OpenLinkInNewTab_t *)w_callback = *(u_HTML_OpenLinkInNewTab_t *)u_callback; break;
    case MAKE_CASE(4508, 8, 8): *(w_HTML_ChangedTitle_t *)w_callback = *(u_HTML_ChangedTitle_t *)u_callback; break;
    case MAKE_CASE(4513, 20, 20): *(w_HTML_LinkAtPosition_t *)w_callback = *(u_HTML_LinkAtPosition_t *)u_callback; break;
    case MAKE_CASE(4514, 8, 8): *(w_HTML_JSAlert_t *)w_callback = *(u_HTML_JSAlert_t *)u_callback; break;
    case MAKE_CASE(4515, 8, 8): *(w_HTML_JSConfirm_t *)w_callback = *(u_HTML_JSConfirm_t *)u_callback; break;
    case MAKE_CASE(4516, 12, 12): *(w_HTML_FileOpenDialog_t *)w_callback = *(u_HTML_FileOpenDialog_t *)u_callback; break;
    case MAKE_CASE(4517, 16, 16): *(w_HTML_ComboNeedsPaint_t *)w_callback = *(u_HTML_ComboNeedsPaint_t *)u_callback; break;
    case MAKE_CASE(4521, 28, 28): *(w_HTML_NewWindow_t_132x *)w_callback = *(u_HTML_NewWindow_t_132x *)u_callback; break;
    case MAKE_CASE(4521, 24, 24): *(w_HTML_NewWindow_t_130x *)w_callback = *(u_HTML_NewWindow_t_130x *)u_callback; break;
    case MAKE_CASE(4523, 8, 8): *(w_HTML_StatusText_t *)w_callback = *(u_HTML_StatusText_t *)u_callback; break;
    case MAKE_CASE(4524, 8, 8): *(w_HTML_ShowToolTip_t *)w_callback = *(u_HTML_ShowToolTip_t *)u_callback; break;
    case MAKE_CASE(4525, 8, 8): *(w_HTML_UpdateToolTip_t *)w_callback = *(u_HTML_UpdateToolTip_t *)u_callback; break;
    case MAKE_CASE(4704, 24, 20): *(w_SteamInventoryStartPurchaseResult_t *)w_callback = *(u_SteamInventoryStartPurchaseResult_t *)u_callback; break;
    case MAKE_CASE(5211, 16, 12): *(w_RequestPlayersForGameProgressCallback_t *)w_callback = *(u_RequestPlayersForGameProgressCallback_t *)u_callback; break;
    case MAKE_CASE(5212, 64, 56): *(w_RequestPlayersForGameResultCallback_t *)w_callback = *(u_RequestPlayersForGameResultCallback_t *)u_callback; break;
    case MAKE_CASE(5213, 24, 20): *(w_RequestPlayersForGameFinalResultCallback_t *)w_callback = *(u_RequestPlayersForGameFinalResultCallback_t *)u_callback; break;
    case MAKE_CASE(5214, 24, 20): *(w_SubmitPlayerResultResultCallback_t *)w_callback = *(u_SubmitPlayerResultResultCallback_t *)u_callback; break;
    case MAKE_CASE(5215, 16, 12): *(w_EndGameResultCallback_t *)w_callback = *(u_EndGameResultCallback_t *)u_callback; break;
    case MAKE_CASE(5301, 280, 276): *(w_JoinPartyCallback_t *)w_callback = *(u_JoinPartyCallback_t *)u_callback; break;
    case MAKE_CASE(5302, 16, 12): *(w_CreateBeaconCallback_t *)w_callback = *(u_CreateBeaconCallback_t *)u_callback; break;
#endif
#ifdef __x86_64__
    case MAKE_CASE(152, 24, 16): *(w_MicroTxnAuthorizationResponse_t_123 *)w_callback = *(u_MicroTxnAuthorizationResponse_t_123 *)u_callback; break;
    case MAKE_CASE(152, 24, 24): *(w_MicroTxnAuthorizationResponse_t_109 *)w_callback = *(u_MicroTxnAuthorizationResponse_t_109 *)u_callback; break;
    case MAKE_CASE(209, 40, 32): *(w_GSReputation_t_123 *)w_callback = *(u_GSReputation_t_123 *)u_callback; break;
    case MAKE_CASE(209, 40, 40): *(w_GSReputation_t_108 *)w_callback = *(u_GSReputation_t_108 *)u_callback; break;
    case MAKE_CASE(513, 16, 12): *(w_LobbyCreated_t_123 *)w_callback = *(u_LobbyCreated_t_123 *)u_callback; break;
    case MAKE_CASE(513, 16, 16): *(w_LobbyCreated_t_099u *)w_callback = *(u_LobbyCreated_t_099u *)u_callback; break;
    case MAKE_CASE(1023, 40, 36): *(w_FileDetailsResult_t *)w_callback = *(u_FileDetailsResult_t *)u_callback; break;
    case MAKE_CASE(1106, 32, 28): *(w_LeaderboardScoreUploaded_t_123 *)w_callback = *(u_LeaderboardScoreUploaded_t_123 *)u_callback; break;
    case MAKE_CASE(1106, 32, 32): *(w_LeaderboardScoreUploaded_t_104 *)w_callback = *(u_LeaderboardScoreUploaded_t_104 *)u_callback; break;
    case MAKE_CASE(1111, 16, 12): *(w_LeaderboardUGCSet_t_123 *)w_callback = *(u_LeaderboardUGCSet_t_123 *)u_callback; break;
    case MAKE_CASE(1111, 16, 16): *(w_LeaderboardUGCSet_t_111x *)w_callback = *(u_LeaderboardUGCSet_t_111x *)u_callback; break;
    case MAKE_CASE(1112, 24, 20): *(w_PS3TrophiesInstalled_t_123 *)w_callback = *(u_PS3TrophiesInstalled_t_123 *)u_callback; break;
    case MAKE_CASE(1112, 24, 24): *(w_PS3TrophiesInstalled_t_112x *)w_callback = *(u_PS3TrophiesInstalled_t_112x *)u_callback; break;
    case MAKE_CASE(1221, 712, 704): *(w_SteamNetConnectionStatusChangedCallback_t_153a *)w_callback = *(u_SteamNetConnectionStatusChangedCallback_t_153a *)u_callback; break;
    /* case MAKE_CASE(1221, 712, 704): *(w_SteamNetConnectionStatusChangedCallback_t_144 *)w_callback = *(u_SteamNetConnectionStatusChangedCallback_t_144 *)u_callback; break; */
    case MAKE_CASE(1221, 584, 576): *(w_SteamNetConnectionStatusChangedCallback_t_151 *)w_callback = *(u_SteamNetConnectionStatusChangedCallback_t_151 *)u_callback; break;
    case MAKE_CASE(1303, 288, 280): *(w_RemoteStorageAppSyncProgress_t_123 *)w_callback = *(u_RemoteStorageAppSyncProgress_t_123 *)u_callback; break;
    case MAKE_CASE(1303, 288, 288): *(w_RemoteStorageAppSyncProgress_t_111x *)w_callback = *(u_RemoteStorageAppSyncProgress_t_111x *)u_callback; break;
    case MAKE_CASE(1307, 280, 272): *(w_RemoteStorageFileShareResult_t_128x *)w_callback = *(u_RemoteStorageFileShareResult_t_128x *)u_callback; break;
    case MAKE_CASE(1307, 16, 12): *(w_RemoteStorageFileShareResult_t_123 *)w_callback = *(u_RemoteStorageFileShareResult_t_123 *)u_callback; break;
    case MAKE_CASE(1307, 16, 16): *(w_RemoteStorageFileShareResult_t_111x *)w_callback = *(u_RemoteStorageFileShareResult_t_111x *)u_callback; break;
    case MAKE_CASE(1308, 40, 40): *(w_RemoteStorageDownloadUGCResult_t_111x *)w_callback = *(u_RemoteStorageDownloadUGCResult_t_111x *)u_callback; break;
    case MAKE_CASE(1309, 24, 16): *(w_RemoteStoragePublishFileResult_t_125 *)w_callback = *(u_RemoteStoragePublishFileResult_t_125 *)u_callback; break;
    case MAKE_CASE(1309, 16, 12): *(w_RemoteStoragePublishFileResult_t_123 *)w_callback = *(u_RemoteStoragePublishFileResult_t_123 *)u_callback; break;
    case MAKE_CASE(1309, 16, 16): *(w_RemoteStoragePublishFileResult_t_116x *)w_callback = *(u_RemoteStoragePublishFileResult_t_116x *)u_callback; break;
    case MAKE_CASE(1310, 1744, 1744): *(w_RemoteStorageGetPublishedFileDetailsResult_t_116x *)w_callback = *(u_RemoteStorageGetPublishedFileDetailsResult_t_116x *)u_callback; break;
    case MAKE_CASE(1311, 16, 12): *(w_RemoteStorageDeletePublishedFileResult_t_123 *)w_callback = *(u_RemoteStorageDeletePublishedFileResult_t_123 *)u_callback; break;
    case MAKE_CASE(1311, 16, 16): *(w_RemoteStorageDeletePublishedFileResult_t_116x *)w_callback = *(u_RemoteStorageDeletePublishedFileResult_t_116x *)u_callback; break;
    case MAKE_CASE(1312, 416, 412): *(w_RemoteStorageEnumerateUserPublishedFilesResult_t_123 *)w_callback = *(u_RemoteStorageEnumerateUserPublishedFilesResult_t_123 *)u_callback; break;
    case MAKE_CASE(1312, 416, 416): *(w_RemoteStorageEnumerateUserPublishedFilesResult_t_116x *)w_callback = *(u_RemoteStorageEnumerateUserPublishedFilesResult_t_116x *)u_callback; break;
    case MAKE_CASE(1313, 16, 12): *(w_RemoteStorageSubscribePublishedFileResult_t_123 *)w_callback = *(u_RemoteStorageSubscribePublishedFileResult_t_123 *)u_callback; break;
    case MAKE_CASE(1313, 4, 4): *(w_RemoteStorageSubscribePublishedFileResult_t_116x *)w_callback = *(u_RemoteStorageSubscribePublishedFileResult_t_116x *)u_callback; break;
    case MAKE_CASE(1314, 616, 612): *(w_RemoteStorageEnumerateUserSubscribedFilesResult_t_123 *)w_callback = *(u_RemoteStorageEnumerateUserSubscribedFilesResult_t_123 *)u_callback; break;
    case MAKE_CASE(1314, 616, 616): *(w_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x *)w_callback = *(u_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x *)u_callback; break;
    case MAKE_CASE(1315, 16, 12): *(w_RemoteStorageUnsubscribePublishedFileResult_t_123 *)w_callback = *(u_RemoteStorageUnsubscribePublishedFileResult_t_123 *)u_callback; break;
    case MAKE_CASE(1315, 4, 4): *(w_RemoteStorageUnsubscribePublishedFileResult_t_116x *)w_callback = *(u_RemoteStorageUnsubscribePublishedFileResult_t_116x *)u_callback; break;
    case MAKE_CASE(1316, 24, 16): *(w_RemoteStorageUpdatePublishedFileResult_t_125 *)w_callback = *(u_RemoteStorageUpdatePublishedFileResult_t_125 *)u_callback; break;
    case MAKE_CASE(1316, 16, 12): *(w_RemoteStorageUpdatePublishedFileResult_t_123 *)w_callback = *(u_RemoteStorageUpdatePublishedFileResult_t_123 *)u_callback; break;
    case MAKE_CASE(1316, 16, 16): *(w_RemoteStorageUpdatePublishedFileResult_t_116x *)w_callback = *(u_RemoteStorageUpdatePublishedFileResult_t_116x *)u_callback; break;
    case MAKE_CASE(1317, 296, 288): *(w_RemoteStorageDownloadUGCResult_t_123 *)w_callback = *(u_RemoteStorageDownloadUGCResult_t_123 *)u_callback; break;
    case MAKE_CASE(1317, 296, 296): *(w_RemoteStorageDownloadUGCResult_t_116x *)w_callback = *(u_RemoteStorageDownloadUGCResult_t_116x *)u_callback; break;
    case MAKE_CASE(1318, 9760, 9748): *(w_RemoteStorageGetPublishedFileDetailsResult_t_126 *)w_callback = *(u_RemoteStorageGetPublishedFileDetailsResult_t_126 *)u_callback; break;
    case MAKE_CASE(1318, 9752, 9744): *(w_RemoteStorageGetPublishedFileDetailsResult_t_123 *)w_callback = *(u_RemoteStorageGetPublishedFileDetailsResult_t_123 *)u_callback; break;
    case MAKE_CASE(1318, 9752, 9752): *(w_RemoteStorageGetPublishedFileDetailsResult_t_119x *)w_callback = *(u_RemoteStorageGetPublishedFileDetailsResult_t_119x *)u_callback; break;
    /* case MAKE_CASE(1318, 9752, 9752): *(w_RemoteStorageGetPublishedFileDetailsResult_t_119 *)w_callback = *(u_RemoteStorageGetPublishedFileDetailsResult_t_119 *)u_callback; break; */
    case MAKE_CASE(1318, 9496, 9496): *(w_RemoteStorageGetPublishedFileDetailsResult_t_118 *)w_callback = *(u_RemoteStorageGetPublishedFileDetailsResult_t_118 *)u_callback; break;
    case MAKE_CASE(1319, 624, 620): *(w_RemoteStorageEnumerateWorkshopFilesResult_t_125 *)w_callback = *(u_RemoteStorageEnumerateWorkshopFilesResult_t_125 *)u_callback; break;
    case MAKE_CASE(1319, 616, 612): *(w_RemoteStorageEnumerateWorkshopFilesResult_t_123 *)w_callback = *(u_RemoteStorageEnumerateWorkshopFilesResult_t_123 *)u_callback; break;
    case MAKE_CASE(1319, 616, 616): *(w_RemoteStorageEnumerateWorkshopFilesResult_t_119 *)w_callback = *(u_RemoteStorageEnumerateWorkshopFilesResult_t_119 *)u_callback; break;
    case MAKE_CASE(1320, 32, 28): *(w_RemoteStorageGetPublishedItemVoteDetailsResult_t_123 *)w_callback = *(u_RemoteStorageGetPublishedItemVoteDetailsResult_t_123 *)u_callback; break;
    case MAKE_CASE(1320, 32, 32): *(w_RemoteStorageGetPublishedItemVoteDetailsResult_t_119 *)w_callback = *(u_RemoteStorageGetPublishedItemVoteDetailsResult_t_119 *)u_callback; break;
    case MAKE_CASE(1324, 16, 12): *(w_RemoteStorageUpdateUserPublishedItemVoteResult_t_123 *)w_callback = *(u_RemoteStorageUpdateUserPublishedItemVoteResult_t_123 *)u_callback; break;
    case MAKE_CASE(1324, 16, 16): *(w_RemoteStorageUpdateUserPublishedItemVoteResult_t_119 *)w_callback = *(u_RemoteStorageUpdateUserPublishedItemVoteResult_t_119 *)u_callback; break;
    case MAKE_CASE(1325, 24, 16): *(w_RemoteStorageUserVoteDetails_t_123 *)w_callback = *(u_RemoteStorageUserVoteDetails_t_123 *)u_callback; break;
    case MAKE_CASE(1325, 24, 24): *(w_RemoteStorageUserVoteDetails_t_119 *)w_callback = *(u_RemoteStorageUserVoteDetails_t_119 *)u_callback; break;
    case MAKE_CASE(1326, 416, 412): *(w_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123 *)w_callback = *(u_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123 *)u_callback; break;
    case MAKE_CASE(1326, 416, 416): *(w_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119 *)w_callback = *(u_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119 *)u_callback; break;
    case MAKE_CASE(1327, 24, 16): *(w_RemoteStorageSetUserPublishedFileActionResult_t_123 *)w_callback = *(u_RemoteStorageSetUserPublishedFileActionResult_t_123 *)u_callback; break;
    case MAKE_CASE(1327, 24, 24): *(w_RemoteStorageSetUserPublishedFileActionResult_t_119 *)w_callback = *(u_RemoteStorageSetUserPublishedFileActionResult_t_119 *)u_callback; break;
    case MAKE_CASE(1330, 24, 20): *(w_RemoteStoragePublishedFileUpdated_t *)w_callback = *(u_RemoteStoragePublishedFileUpdated_t *)u_callback; break;
    case MAKE_CASE(2101, 32, 24): *(w_HTTPRequestCompleted_t_132x *)w_callback = *(u_HTTPRequestCompleted_t_132x *)u_callback; break;
    case MAKE_CASE(2101, 24, 20): *(w_HTTPRequestCompleted_t_123 *)w_callback = *(u_HTTPRequestCompleted_t_123 *)u_callback; break;
    case MAKE_CASE(2101, 24, 24): *(w_HTTPRequestCompleted_t_115 *)w_callback = *(u_HTTPRequestCompleted_t_115 *)u_callback; break;
    case MAKE_CASE(2102, 16, 12): *(w_HTTPRequestHeadersReceived_t_123 *)w_callback = *(u_HTTPRequestHeadersReceived_t_123 *)u_callback; break;
    case MAKE_CASE(2102, 16, 16): *(w_HTTPRequestHeadersReceived_t_121x *)w_callback = *(u_HTTPRequestHeadersReceived_t_121x *)u_callback; break;
    case MAKE_CASE(2103, 24, 20): *(w_HTTPRequestDataReceived_t_123 *)w_callback = *(u_HTTPRequestDataReceived_t_123 *)u_callback; break;
    case MAKE_CASE(2103, 24, 24): *(w_HTTPRequestDataReceived_t_121x *)w_callback = *(u_HTTPRequestDataReceived_t_121x *)u_callback; break;
    case MAKE_CASE(2803, 40, 32): *(w_SteamInputConfigurationLoaded_t *)w_callback = *(u_SteamInputConfigurationLoaded_t *)u_callback; break;
    case MAKE_CASE(2804, 32, 24): *(w_SteamInputGamepadSlotChange_t *)w_callback = *(u_SteamInputGamepadSlotChange_t *)u_callback; break;
    case MAKE_CASE(3402, 9784, 9768): *(w_SteamUGCRequestUGCDetailsResult_t_128x *)w_callback = *(u_SteamUGCRequestUGCDetailsResult_t_128x *)u_callback; break;
    case MAKE_CASE(3402, 9776, 9764): *(w_SteamUGCRequestUGCDetailsResult_t_129 *)w_callback = *(u_SteamUGCRequestUGCDetailsResult_t_129 *)u_callback; break;
    case MAKE_CASE(3402, 9768, 9760): *(w_SteamUGCRequestUGCDetailsResult_t_126 *)w_callback = *(u_SteamUGCRequestUGCDetailsResult_t_126 *)u_callback; break;
    case MAKE_CASE(3403, 24, 16): *(w_CreateItemResult_t *)w_callback = *(u_CreateItemResult_t *)u_callback; break;
    case MAKE_CASE(3405, 16, 12): *(w_ItemInstalled_t *)w_callback = *(u_ItemInstalled_t *)u_callback; break;
    case MAKE_CASE(3406, 24, 16): *(w_DownloadItemResult_t *)w_callback = *(u_DownloadItemResult_t *)u_callback; break;
    case MAKE_CASE(3412, 24, 20): *(w_AddUGCDependencyResult_t *)w_callback = *(u_AddUGCDependencyResult_t *)u_callback; break;
    case MAKE_CASE(3413, 24, 20): *(w_RemoveUGCDependencyResult_t *)w_callback = *(u_RemoveUGCDependencyResult_t *)u_callback; break;
    case MAKE_CASE(3414, 24, 16): *(w_AddAppDependencyResult_t *)w_callback = *(u_AddAppDependencyResult_t *)u_callback; break;
    case MAKE_CASE(3415, 24, 16): *(w_RemoveAppDependencyResult_t *)w_callback = *(u_RemoveAppDependencyResult_t *)u_callback; break;
    case MAKE_CASE(3416, 152, 148): *(w_GetAppDependenciesResult_t *)w_callback = *(u_GetAppDependenciesResult_t *)u_callback; break;
    case MAKE_CASE(3417, 16, 12): *(w_DeleteItemResult_t *)w_callback = *(u_DeleteItemResult_t *)u_callback; break;
    case MAKE_CASE(4502, 56, 52): *(w_HTML_NeedsPaint_t *)w_callback = *(u_HTML_NeedsPaint_t *)u_callback; break;
    case MAKE_CASE(4503, 40, 32): *(w_HTML_StartRequest_t *)w_callback = *(u_HTML_StartRequest_t *)u_callback; break;
    case MAKE_CASE(4505, 48, 36): *(w_HTML_URLChanged_t *)w_callback = *(u_HTML_URLChanged_t *)u_callback; break;
    case MAKE_CASE(4506, 24, 20): *(w_HTML_FinishedRequest_t *)w_callback = *(u_HTML_FinishedRequest_t *)u_callback; break;
    case MAKE_CASE(4507, 16, 12): *(w_HTML_OpenLinkInNewTab_t *)w_callback = *(u_HTML_OpenLinkInNewTab_t *)u_callback; break;
    case MAKE_CASE(4508, 16, 12): *(w_HTML_ChangedTitle_t *)w_callback = *(u_HTML_ChangedTitle_t *)u_callback; break;
    case MAKE_CASE(4513, 32, 24): *(w_HTML_LinkAtPosition_t *)w_callback = *(u_HTML_LinkAtPosition_t *)u_callback; break;
    case MAKE_CASE(4514, 16, 12): *(w_HTML_JSAlert_t *)w_callback = *(u_HTML_JSAlert_t *)u_callback; break;
    case MAKE_CASE(4515, 16, 12): *(w_HTML_JSConfirm_t *)w_callback = *(u_HTML_JSConfirm_t *)u_callback; break;
    case MAKE_CASE(4516, 24, 20): *(w_HTML_FileOpenDialog_t *)w_callback = *(u_HTML_FileOpenDialog_t *)u_callback; break;
    case MAKE_CASE(4517, 24, 20): *(w_HTML_ComboNeedsPaint_t *)w_callback = *(u_HTML_ComboNeedsPaint_t *)u_callback; break;
    case MAKE_CASE(4521, 40, 32): *(w_HTML_NewWindow_t_132x *)w_callback = *(u_HTML_NewWindow_t_132x *)u_callback; break;
    case MAKE_CASE(4521, 32, 28): *(w_HTML_NewWindow_t_130x *)w_callback = *(u_HTML_NewWindow_t_130x *)u_callback; break;
    case MAKE_CASE(4523, 16, 12): *(w_HTML_StatusText_t *)w_callback = *(u_HTML_StatusText_t *)u_callback; break;
    case MAKE_CASE(4524, 16, 12): *(w_HTML_ShowToolTip_t *)w_callback = *(u_HTML_ShowToolTip_t *)u_callback; break;
    case MAKE_CASE(4525, 16, 12): *(w_HTML_UpdateToolTip_t *)w_callback = *(u_HTML_UpdateToolTip_t *)u_callback; break;
    case MAKE_CASE(4704, 24, 20): *(w_SteamInventoryStartPurchaseResult_t *)w_callback = *(u_SteamInventoryStartPurchaseResult_t *)u_callback; break;
    case MAKE_CASE(5211, 16, 12): *(w_RequestPlayersForGameProgressCallback_t *)w_callback = *(u_RequestPlayersForGameProgressCallback_t *)u_callback; break;
    case MAKE_CASE(5212, 64, 56): *(w_RequestPlayersForGameResultCallback_t *)w_callback = *(u_RequestPlayersForGameResultCallback_t *)u_callback; break;
    case MAKE_CASE(5213, 24, 20): *(w_RequestPlayersForGameFinalResultCallback_t *)w_callback = *(u_RequestPlayersForGameFinalResultCallback_t *)u_callback; break;
    case MAKE_CASE(5214, 24, 20): *(w_SubmitPlayerResultResultCallback_t *)w_callback = *(u_SubmitPlayerResultResultCallback_t *)u_callback; break;
    case MAKE_CASE(5215, 16, 12): *(w_EndGameResultCallback_t *)w_callback = *(u_EndGameResultCallback_t *)u_callback; break;
    case MAKE_CASE(5301, 280, 276): *(w_JoinPartyCallback_t *)w_callback = *(u_JoinPartyCallback_t *)u_callback; break;
    case MAKE_CASE(5302, 16, 12): *(w_CreateBeaconCallback_t *)w_callback = *(u_CreateBeaconCallback_t *)u_callback; break;
#endif
    default: memcpy( w_callback, u_callback, u_callback_len ); break;
    }
#undef MAKE_CASE
}
