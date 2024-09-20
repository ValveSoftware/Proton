/* This file is auto-generated, do not edit. */

#include "steamclient_private.h"

static const struct { const char *iface_version; iface_constructor ctor; } constructors[] =
{
    {"STEAMAPPLIST_INTERFACE_VERSION001", &create_winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001},
    {"STEAMAPPS_INTERFACE_VERSION001", &create_winISteamApps_STEAMAPPS_INTERFACE_VERSION001},
    {"SteamApps001", &create_winISteamApps_STEAMAPPS_INTERFACE_VERSION001}, /* alias */
    {"STEAMAPPS_INTERFACE_VERSION002", &create_winISteamApps_STEAMAPPS_INTERFACE_VERSION002},
    {"STEAMAPPS_INTERFACE_VERSION003", &create_winISteamApps_STEAMAPPS_INTERFACE_VERSION003},
    {"STEAMAPPS_INTERFACE_VERSION004", &create_winISteamApps_STEAMAPPS_INTERFACE_VERSION004},
    {"STEAMAPPS_INTERFACE_VERSION005", &create_winISteamApps_STEAMAPPS_INTERFACE_VERSION005},
    {"STEAMAPPS_INTERFACE_VERSION006", &create_winISteamApps_STEAMAPPS_INTERFACE_VERSION006},
    {"STEAMAPPS_INTERFACE_VERSION007", &create_winISteamApps_STEAMAPPS_INTERFACE_VERSION007},
    {"STEAMAPPS_INTERFACE_VERSION008", &create_winISteamApps_STEAMAPPS_INTERFACE_VERSION008},
    {"STEAMAPPTICKET_INTERFACE_VERSION001", &create_winISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001},
    {"STEAMCONTROLLER_INTERFACE_VERSION", &create_winISteamController_STEAMCONTROLLER_INTERFACE_VERSION},
    {"STEAMHTMLSURFACE_INTERFACE_VERSION_001", &create_winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001},
    {"STEAMHTMLSURFACE_INTERFACE_VERSION_002", &create_winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002},
    {"STEAMHTMLSURFACE_INTERFACE_VERSION_003", &create_winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003},
    {"STEAMHTMLSURFACE_INTERFACE_VERSION_004", &create_winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004},
    {"STEAMHTMLSURFACE_INTERFACE_VERSION_005", &create_winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005},
    {"STEAMHTTP_INTERFACE_VERSION001", &create_winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001},
    {"STEAMHTTP_INTERFACE_VERSION002", &create_winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002},
    {"STEAMHTTP_INTERFACE_VERSION003", &create_winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003},
    {"STEAMINVENTORY_INTERFACE_V001", &create_winISteamInventory_STEAMINVENTORY_INTERFACE_V001},
    {"STEAMINVENTORY_INTERFACE_V002", &create_winISteamInventory_STEAMINVENTORY_INTERFACE_V002},
    {"STEAMINVENTORY_INTERFACE_V003", &create_winISteamInventory_STEAMINVENTORY_INTERFACE_V003},
    {"STEAMMUSICREMOTE_INTERFACE_VERSION001", &create_winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001},
    {"STEAMMUSIC_INTERFACE_VERSION001", &create_winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001},
    {"STEAMPARENTALSETTINGS_INTERFACE_VERSION001", &create_winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001},
    {"STEAMREMOTEPLAY_INTERFACE_VERSION001", &create_winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001},
    {"STEAMREMOTEPLAY_INTERFACE_VERSION002", &create_winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION001", &create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION002", &create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION003", &create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION004", &create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION005", &create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION006", &create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION007", &create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION008", &create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION009", &create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION010", &create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION011", &create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION012", &create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION013", &create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION014", &create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016", &create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016},
    {"STEAMSCREENSHOTS_INTERFACE_VERSION001", &create_winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001},
    {"STEAMSCREENSHOTS_INTERFACE_VERSION002", &create_winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002},
    {"STEAMSCREENSHOTS_INTERFACE_VERSION003", &create_winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003},
    {"STEAMTIMELINE_INTERFACE_V001", &create_winISteamTimeline_STEAMTIMELINE_INTERFACE_V001},
    {"STEAMUGC_INTERFACE_VERSION001", &create_winISteamUGC_STEAMUGC_INTERFACE_VERSION001},
    {"STEAMUGC_INTERFACE_VERSION002", &create_winISteamUGC_STEAMUGC_INTERFACE_VERSION002},
    {"STEAMUGC_INTERFACE_VERSION003", &create_winISteamUGC_STEAMUGC_INTERFACE_VERSION003},
    {"STEAMUGC_INTERFACE_VERSION004", &create_winISteamUGC_STEAMUGC_INTERFACE_VERSION004},
    {"STEAMUGC_INTERFACE_VERSION005", &create_winISteamUGC_STEAMUGC_INTERFACE_VERSION005},
    {"STEAMUGC_INTERFACE_VERSION006", &create_winISteamUGC_STEAMUGC_INTERFACE_VERSION006},
    {"STEAMUGC_INTERFACE_VERSION007", &create_winISteamUGC_STEAMUGC_INTERFACE_VERSION007},
    {"STEAMUGC_INTERFACE_VERSION008", &create_winISteamUGC_STEAMUGC_INTERFACE_VERSION008},
    {"STEAMUGC_INTERFACE_VERSION009", &create_winISteamUGC_STEAMUGC_INTERFACE_VERSION009},
    {"STEAMUGC_INTERFACE_VERSION010", &create_winISteamUGC_STEAMUGC_INTERFACE_VERSION010},
    {"STEAMUGC_INTERFACE_VERSION012", &create_winISteamUGC_STEAMUGC_INTERFACE_VERSION012},
    {"STEAMUGC_INTERFACE_VERSION013", &create_winISteamUGC_STEAMUGC_INTERFACE_VERSION013},
    {"STEAMUGC_INTERFACE_VERSION014", &create_winISteamUGC_STEAMUGC_INTERFACE_VERSION014},
    {"STEAMUGC_INTERFACE_VERSION015", &create_winISteamUGC_STEAMUGC_INTERFACE_VERSION015},
    {"STEAMUGC_INTERFACE_VERSION016", &create_winISteamUGC_STEAMUGC_INTERFACE_VERSION016},
    {"STEAMUGC_INTERFACE_VERSION017", &create_winISteamUGC_STEAMUGC_INTERFACE_VERSION017},
    {"STEAMUGC_INTERFACE_VERSION018", &create_winISteamUGC_STEAMUGC_INTERFACE_VERSION018},
    {"STEAMUGC_INTERFACE_VERSION020", &create_winISteamUGC_STEAMUGC_INTERFACE_VERSION020},
    {"STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001", &create_winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001},
    {"STEAMUSERSTATS_INTERFACE_VERSION001", &create_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001},
    {"STEAMUSERSTATS_INTERFACE_VERSION002", &create_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002},
    {"STEAMUSERSTATS_INTERFACE_VERSION003", &create_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003},
    {"STEAMUSERSTATS_INTERFACE_VERSION004", &create_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004},
    {"STEAMUSERSTATS_INTERFACE_VERSION005", &create_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005},
    {"STEAMUSERSTATS_INTERFACE_VERSION006", &create_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006},
    {"STEAMUSERSTATS_INTERFACE_VERSION007", &create_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007},
    {"STEAMUSERSTATS_INTERFACE_VERSION008", &create_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008},
    {"STEAMUSERSTATS_INTERFACE_VERSION009", &create_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009},
    {"STEAMUSERSTATS_INTERFACE_VERSION010", &create_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010},
    {"STEAMUSERSTATS_INTERFACE_VERSION011", &create_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011},
    {"STEAMUSERSTATS_INTERFACE_VERSION012", &create_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012},
    {"STEAMVIDEO_INTERFACE_V001", &create_winISteamVideo_STEAMVIDEO_INTERFACE_V001},
    {"STEAMVIDEO_INTERFACE_V002", &create_winISteamVideo_STEAMVIDEO_INTERFACE_V002},
    {"STEAMVIDEO_INTERFACE_V007", &create_winISteamVideo_STEAMVIDEO_INTERFACE_V007},
    {"SteamClient006", &create_winISteamClient_SteamClient006},
    {"SteamClient007", &create_winISteamClient_SteamClient007},
    {"SteamClient008", &create_winISteamClient_SteamClient008},
    {"SteamClient009", &create_winISteamClient_SteamClient009},
    {"SteamClient010", &create_winISteamClient_SteamClient010},
    {"SteamClient011", &create_winISteamClient_SteamClient011},
    {"SteamClient012", &create_winISteamClient_SteamClient012},
    {"SteamClient013", &create_winISteamClient_SteamClient013},
    {"SteamClient014", &create_winISteamClient_SteamClient014},
    {"SteamClient015", &create_winISteamClient_SteamClient015},
    {"SteamClient016", &create_winISteamClient_SteamClient016},
    {"SteamClient017", &create_winISteamClient_SteamClient017},
    {"SteamClient018", &create_winISteamClient_SteamClient018},
    {"SteamClient019", &create_winISteamClient_SteamClient019},
    {"SteamClient020", &create_winISteamClient_SteamClient020},
    {"SteamClient021", &create_winISteamClient_SteamClient021},
    {"SteamController003", &create_winISteamController_SteamController003},
    {"SteamController004", &create_winISteamController_SteamController004},
    {"SteamController005", &create_winISteamController_SteamController005},
    {"SteamController006", &create_winISteamController_SteamController006},
    {"SteamController007", &create_winISteamController_SteamController007},
    {"SteamController008", &create_winISteamController_SteamController008},
    {"SteamFriends001", &create_winISteamFriends_SteamFriends001},
    {"SteamFriends002", &create_winISteamFriends_SteamFriends002},
    {"SteamFriends003", &create_winISteamFriends_SteamFriends003},
    {"SteamFriends004", &create_winISteamFriends_SteamFriends004},
    {"SteamFriends005", &create_winISteamFriends_SteamFriends005},
    {"SteamFriends006", &create_winISteamFriends_SteamFriends006},
    {"SteamFriends007", &create_winISteamFriends_SteamFriends007},
    {"SteamFriends008", &create_winISteamFriends_SteamFriends008},
    {"SteamFriends009", &create_winISteamFriends_SteamFriends009},
    {"SteamFriends010", &create_winISteamFriends_SteamFriends010},
    {"SteamFriends011", &create_winISteamFriends_SteamFriends011},
    {"SteamFriends012", &create_winISteamFriends_SteamFriends012},
    {"SteamFriends013", &create_winISteamFriends_SteamFriends013},
    {"SteamFriends014", &create_winISteamFriends_SteamFriends014},
    {"SteamFriends015", &create_winISteamFriends_SteamFriends015},
    {"SteamFriends017", &create_winISteamFriends_SteamFriends017},
    {"SteamGameCoordinator001", &create_winISteamGameCoordinator_SteamGameCoordinator001},
    {"SteamGameServer002", &create_winISteamGameServer_SteamGameServer002},
    {"SteamGameServer003", &create_winISteamGameServer_SteamGameServer003},
    {"SteamGameServer004", &create_winISteamGameServer_SteamGameServer004},
    {"SteamGameServer005", &create_winISteamGameServer_SteamGameServer005},
    {"SteamGameServer008", &create_winISteamGameServer_SteamGameServer008},
    {"SteamGameServer007", &create_winISteamGameServer_SteamGameServer008}, /* alias */
    {"SteamGameServer006", &create_winISteamGameServer_SteamGameServer008}, /* alias */
    {"SteamGameServer009", &create_winISteamGameServer_SteamGameServer009},
    {"SteamGameServer010", &create_winISteamGameServer_SteamGameServer010},
    {"SteamGameServer011", &create_winISteamGameServer_SteamGameServer011},
    {"SteamGameServer012", &create_winISteamGameServer_SteamGameServer012},
    {"SteamGameServer013", &create_winISteamGameServer_SteamGameServer013},
    {"SteamGameServer014", &create_winISteamGameServer_SteamGameServer014},
    {"SteamGameServer015", &create_winISteamGameServer_SteamGameServer015},
    {"SteamGameServerStats001", &create_winISteamGameServerStats_SteamGameServerStats001},
    {"SteamGameStats001", &create_winISteamGameStats_SteamGameStats001},
    {"SteamInput001", &create_winISteamInput_SteamInput001},
    {"SteamInput002", &create_winISteamInput_SteamInput002},
    {"SteamInput005", &create_winISteamInput_SteamInput005},
    {"SteamInput006", &create_winISteamInput_SteamInput006},
    {"SteamMasterServerUpdater001", &create_winISteamMasterServerUpdater_SteamMasterServerUpdater001},
    {"SteamMatchGameSearch001", &create_winISteamGameSearch_SteamMatchGameSearch001},
    {"SteamMatchMaking001", &create_winISteamMatchmaking_SteamMatchMaking001},
    {"SteamMatchMaking002", &create_winISteamMatchmaking_SteamMatchMaking002},
    {"SteamMatchMaking003", &create_winISteamMatchmaking_SteamMatchMaking003},
    {"SteamMatchMaking004", &create_winISteamMatchmaking_SteamMatchMaking004},
    {"SteamMatchMaking005", &create_winISteamMatchmaking_SteamMatchMaking005},
    {"SteamMatchMaking006", &create_winISteamMatchmaking_SteamMatchMaking006},
    {"SteamMatchMaking007", &create_winISteamMatchmaking_SteamMatchMaking007},
    {"SteamMatchMaking008", &create_winISteamMatchmaking_SteamMatchMaking008},
    {"SteamMatchMaking009", &create_winISteamMatchmaking_SteamMatchMaking009},
    {"SteamMatchMakingServers001", &create_winISteamMatchmakingServers_SteamMatchMakingServers001},
    {"SteamMatchMakingServers002", &create_winISteamMatchmakingServers_SteamMatchMakingServers002},
    {"SteamNetworking001", &create_winISteamNetworking_SteamNetworking001},
    {"SteamNetworking002", &create_winISteamNetworking_SteamNetworking002},
    {"SteamNetworking003", &create_winISteamNetworking_SteamNetworking003},
    {"SteamNetworking004", &create_winISteamNetworking_SteamNetworking004},
    {"SteamNetworking005", &create_winISteamNetworking_SteamNetworking005},
    {"SteamNetworking006", &create_winISteamNetworking_SteamNetworking006},
    {"SteamNetworkingFakeUDPPort001", &create_winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001},
    {"SteamNetworkingMessages002", &create_winISteamNetworkingMessages_SteamNetworkingMessages002},
    {"SteamNetworkingSockets002", &create_winISteamNetworkingSockets_SteamNetworkingSockets002},
    {"SteamNetworkingSockets003", &create_winISteamNetworkingSockets_SteamNetworkingSockets002}, /* alias */
    {"SteamNetworkingSockets004", &create_winISteamNetworkingSockets_SteamNetworkingSockets004},
    {"SteamNetworkingSockets006", &create_winISteamNetworkingSockets_SteamNetworkingSockets006},
    {"SteamNetworkingSockets008", &create_winISteamNetworkingSockets_SteamNetworkingSockets008},
    {"SteamNetworkingSockets009", &create_winISteamNetworkingSockets_SteamNetworkingSockets009},
    {"SteamNetworkingSockets012", &create_winISteamNetworkingSockets_SteamNetworkingSockets012},
    {"SteamNetworkingSocketsSerialized002", &create_winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002},
    {"SteamNetworkingSocketsSerialized001", &create_winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002}, /* alias */
    {"SteamNetworkingSocketsSerialized003", &create_winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003},
    {"SteamNetworkingUtils001", &create_winISteamNetworkingUtils_SteamNetworkingUtils001},
    {"SteamNetworkingUtils002", &create_winISteamNetworkingUtils_SteamNetworkingUtils002},
    {"SteamNetworkingUtils003", &create_winISteamNetworkingUtils_SteamNetworkingUtils003},
    {"SteamNetworkingUtils004", &create_winISteamNetworkingUtils_SteamNetworkingUtils004},
    {"SteamParties002", &create_winISteamParties_SteamParties002},
    {"SteamUser004", &create_winISteamUser_SteamUser004},
    {"SteamUser005", &create_winISteamUser_SteamUser005},
    {"SteamUser006", &create_winISteamUser_SteamUser006},
    {"SteamUser007", &create_winISteamUser_SteamUser007},
    {"SteamUser008", &create_winISteamUser_SteamUser008},
    {"SteamUser009", &create_winISteamUser_SteamUser009},
    {"SteamUser010", &create_winISteamUser_SteamUser010},
    {"SteamUser011", &create_winISteamUser_SteamUser011},
    {"SteamUser012", &create_winISteamUser_SteamUser012},
    {"SteamUser013", &create_winISteamUser_SteamUser013},
    {"SteamUser014", &create_winISteamUser_SteamUser014},
    {"SteamUser015", &create_winISteamUser_SteamUser015},
    {"SteamUser016", &create_winISteamUser_SteamUser016},
    {"SteamUser017", &create_winISteamUser_SteamUser017},
    {"SteamUser018", &create_winISteamUser_SteamUser018},
    {"SteamUser019", &create_winISteamUser_SteamUser019},
    {"SteamUser020", &create_winISteamUser_SteamUser020},
    {"SteamUser021", &create_winISteamUser_SteamUser021},
    {"SteamUser022", &create_winISteamUser_SteamUser022},
    {"SteamUser023", &create_winISteamUser_SteamUser023},
    {"SteamUtils002", &create_winISteamUtils_SteamUtils002},
    {"SteamUtils001", &create_winISteamUtils_SteamUtils002}, /* alias */
    {"SteamUtils004", &create_winISteamUtils_SteamUtils004},
    {"SteamUtils003", &create_winISteamUtils_SteamUtils004}, /* alias */
    {"SteamUtils005", &create_winISteamUtils_SteamUtils005},
    {"SteamUtils006", &create_winISteamUtils_SteamUtils006},
    {"SteamUtils007", &create_winISteamUtils_SteamUtils007},
    {"SteamUtils008", &create_winISteamUtils_SteamUtils008},
    {"SteamUtils009", &create_winISteamUtils_SteamUtils009},
    {"SteamUtils010", &create_winISteamUtils_SteamUtils010},
};

iface_constructor find_iface_constructor( const char *iface_version )
{
    int i;
    for (i = 0; i < ARRAYSIZE(constructors); ++i)
        if (!strcmp( iface_version, constructors[i].iface_version ))
            return constructors[i].ctor;
    return NULL;
}

extern void init_winISteamAppList_rtti( char * );
extern void init_winISteamAppTicket_rtti( char * );
extern void init_winISteamApps_rtti( char * );
extern void init_winISteamClient_rtti( char * );
extern void init_winISteamController_rtti( char * );
extern void init_winISteamFriends_rtti( char * );
extern void init_winISteamGameCoordinator_rtti( char * );
extern void init_winISteamGameSearch_rtti( char * );
extern void init_winISteamGameServer_rtti( char * );
extern void init_winISteamGameServerStats_rtti( char * );
extern void init_winISteamGameStats_rtti( char * );
extern void init_winISteamHTMLSurface_rtti( char * );
extern void init_winISteamHTTP_rtti( char * );
extern void init_winISteamInput_rtti( char * );
extern void init_winISteamInventory_rtti( char * );
extern void init_winISteamMasterServerUpdater_rtti( char * );
extern void init_winISteamMatchmaking_rtti( char * );
extern void init_winISteamMatchmakingServers_rtti( char * );
extern void init_winISteamMusic_rtti( char * );
extern void init_winISteamMusicRemote_rtti( char * );
extern void init_winISteamNetworking_rtti( char * );
extern void init_winISteamNetworkingFakeUDPPort_rtti( char * );
extern void init_winISteamNetworkingMessages_rtti( char * );
extern void init_winISteamNetworkingSockets_rtti( char * );
extern void init_winISteamNetworkingSocketsSerialized_rtti( char * );
extern void init_winISteamNetworkingUtils_rtti( char * );
extern void init_winISteamParentalSettings_rtti( char * );
extern void init_winISteamParties_rtti( char * );
extern void init_winISteamRemotePlay_rtti( char * );
extern void init_winISteamRemoteStorage_rtti( char * );
extern void init_winISteamScreenshots_rtti( char * );
extern void init_winISteamTimeline_rtti( char * );
extern void init_winISteamUGC_rtti( char * );
extern void init_winISteamUnifiedMessages_rtti( char * );
extern void init_winISteamUser_rtti( char * );
extern void init_winISteamUserStats_rtti( char * );
extern void init_winISteamUtils_rtti( char * );
extern void init_winISteamVideo_rtti( char * );

void init_rtti( char *base )
{
    init_winISteamAppList_rtti( base );
    init_winISteamAppTicket_rtti( base );
    init_winISteamApps_rtti( base );
    init_winISteamClient_rtti( base );
    init_winISteamController_rtti( base );
    init_winISteamFriends_rtti( base );
    init_winISteamGameCoordinator_rtti( base );
    init_winISteamGameSearch_rtti( base );
    init_winISteamGameServer_rtti( base );
    init_winISteamGameServerStats_rtti( base );
    init_winISteamGameStats_rtti( base );
    init_winISteamHTMLSurface_rtti( base );
    init_winISteamHTTP_rtti( base );
    init_winISteamInput_rtti( base );
    init_winISteamInventory_rtti( base );
    init_winISteamMasterServerUpdater_rtti( base );
    init_winISteamMatchmaking_rtti( base );
    init_winISteamMatchmakingServers_rtti( base );
    init_winISteamMusic_rtti( base );
    init_winISteamMusicRemote_rtti( base );
    init_winISteamNetworking_rtti( base );
    init_winISteamNetworkingFakeUDPPort_rtti( base );
    init_winISteamNetworkingMessages_rtti( base );
    init_winISteamNetworkingSockets_rtti( base );
    init_winISteamNetworkingSocketsSerialized_rtti( base );
    init_winISteamNetworkingUtils_rtti( base );
    init_winISteamParentalSettings_rtti( base );
    init_winISteamParties_rtti( base );
    init_winISteamRemotePlay_rtti( base );
    init_winISteamRemoteStorage_rtti( base );
    init_winISteamScreenshots_rtti( base );
    init_winISteamTimeline_rtti( base );
    init_winISteamUGC_rtti( base );
    init_winISteamUnifiedMessages_rtti( base );
    init_winISteamUser_rtti( base );
    init_winISteamUserStats_rtti( base );
    init_winISteamUtils_rtti( base );
    init_winISteamVideo_rtti( base );
}
