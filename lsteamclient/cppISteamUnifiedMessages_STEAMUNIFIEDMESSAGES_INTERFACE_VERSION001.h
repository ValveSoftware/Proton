extern ClientUnifiedMessageHandle cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_SendMethod(void *, const char *, const void *, uint32, uint64);
extern bool cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_GetMethodResponseInfo(void *, ClientUnifiedMessageHandle, uint32 *, EResult *);
extern bool cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_GetMethodResponseData(void *, ClientUnifiedMessageHandle, void *, uint32, bool);
extern bool cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_ReleaseMethod(void *, ClientUnifiedMessageHandle);
extern bool cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_SendNotification(void *, const char *, const void *, uint32);
