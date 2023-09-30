#ifndef __STEAMCLIENT_UNIXLIB_H
#define __STEAMCLIENT_UNIXLIB_H

#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#include <windef.h>
#include <winbase.h>

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */

unsigned int steamclient_unix_path_to_dos_path( bool api_result, const char *src, char *dst,
                                                uint32_t dst_bytes, int is_url );

extern const char *steamclient_dos_to_unix_path( const char *src, int is_url );
extern void steamclient_free_path( const char *path_array );
extern const char **steamclient_dos_to_unix_path_array( const char **src_array );
extern void steamclient_free_path_array( const char **path_array );

#define PATH_MAX 4096
extern char g_tmppath[PATH_MAX];

enum callback_type
{
    SOCKET_DEBUG_OUTPUT = 1,
    STEAM_API_WARNING_HOOK,
    STEAM_API_CALLBACK_ONE_PARAM,
};

struct callback_data
{
    enum callback_type type;
    void *func;
    int complete;
    union
    {
        struct
        {
            unsigned int type;
            const char *msg;
        }
        sockets_debug_output;
        struct
        {
            int severity;
            const char *msg;
        }
        steam_api_warning_hook;
        struct
        {
            void *param;
        }
        steam_api_callback_one_param;
    };
};

void execute_callback(struct callback_data *cb_data);
bool is_native_thread(void);

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* __STEAMCLIENT_UNIXLIB_H */
