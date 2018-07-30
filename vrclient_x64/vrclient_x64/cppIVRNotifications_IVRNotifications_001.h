#ifdef __cplusplus
extern "C" {
#endif
extern uint32_t cppIVRNotifications_IVRNotifications_001_GetErrorString(void *, NotificationError_t, char *, uint32_t);
extern NotificationError_t cppIVRNotifications_IVRNotifications_001_CreateNotification(void *, VROverlayHandle_t, uint64_t, const char *, const char *, const char *, NotificationBitmap *, VRNotificationId *);
extern NotificationError_t cppIVRNotifications_IVRNotifications_001_DismissNotification(void *, VRNotificationId);
#ifdef __cplusplus
}
#endif
