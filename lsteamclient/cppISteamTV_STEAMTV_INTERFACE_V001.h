extern bool cppISteamTV_STEAMTV_INTERFACE_V001_IsBroadcasting( void *, int *  );
extern void cppISteamTV_STEAMTV_INTERFACE_V001_AddBroadcastGameData( void *, const char *, const char * );
extern void cppISteamTV_STEAMTV_INTERFACE_V001_RemoveBroadcastGameData( void *, const char * );
extern void cppISteamTV_STEAMTV_INTERFACE_V001_AddTimelineMarker( void *, const char *, bool, uint8, uint8, uint8 );
extern void cppISteamTV_STEAMTV_INTERFACE_V001_RemoveTimelineMarker( void * );
extern uint32 cppISteamTV_STEAMTV_INTERFACE_V001_AddRegion( void *, const char *, const char *, const SteamTVRegion_t *, ESteamTVRegionBehavior );
extern void cppISteamTV_STEAMTV_INTERFACE_V001_RemoveRegion( void *, uint32 );