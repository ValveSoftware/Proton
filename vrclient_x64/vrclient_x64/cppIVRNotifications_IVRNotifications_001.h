/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct cppIVRNotifications_IVRNotifications_001_GetErrorString_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t error;
    char *pchBuffer;
    uint32_t unBufferSize;
};
extern void cppIVRNotifications_IVRNotifications_001_GetErrorString( struct cppIVRNotifications_IVRNotifications_001_GetErrorString_params *params );

struct cppIVRNotifications_IVRNotifications_001_CreateNotification_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint64_t ulUserValue;
    const char *strType;
    const char *strText;
    const char *strCategory;
    const w_NotificationBitmap *photo;
    uint32_t *notificationId;
};
extern void cppIVRNotifications_IVRNotifications_001_CreateNotification( struct cppIVRNotifications_IVRNotifications_001_CreateNotification_params *params );

struct cppIVRNotifications_IVRNotifications_001_DismissNotification_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t notificationId;
};
extern void cppIVRNotifications_IVRNotifications_001_DismissNotification( struct cppIVRNotifications_IVRNotifications_001_DismissNotification_params *params );

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
