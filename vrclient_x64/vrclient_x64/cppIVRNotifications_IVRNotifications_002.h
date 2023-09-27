#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRNotifications_IVRNotifications_002_CreateNotification_params
{
    void *linux_side;
    EVRNotificationError _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint64_t ulUserValue;
    EVRNotificationType type;
    const char *pchText;
    EVRNotificationStyle style;
    const NotificationBitmap_t *pImage;
    VRNotificationId *pNotificationId;
};
extern void cppIVRNotifications_IVRNotifications_002_CreateNotification( struct cppIVRNotifications_IVRNotifications_002_CreateNotification_params *params );

struct cppIVRNotifications_IVRNotifications_002_RemoveNotification_params
{
    void *linux_side;
    EVRNotificationError _ret;
    VRNotificationId notificationId;
};
extern void cppIVRNotifications_IVRNotifications_002_RemoveNotification( struct cppIVRNotifications_IVRNotifications_002_RemoveNotification_params *params );

#ifdef __cplusplus
}
#endif
