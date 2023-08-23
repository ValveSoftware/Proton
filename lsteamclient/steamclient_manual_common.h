
#ifndef SDK_VERSION
#error "SDK_VERSION is not defined"
#endif

/* Once new steamclient_manual_...cpp is added structures in steamclient_manual_common.cpp
 * (currently SteamNetworkingMessage_t) must be checked for the compatibility with the new version. */
C_ASSERT(SDK_VERSION <= 1531);

/* Returns Windows version of SteamNetworkingMessage_t */
#define network_message_lin_to_win(m) network_message_lin_to_win_(m, SDK_VERSION)
void *network_message_lin_to_win_(void *lin_msg, unsigned int version);

/* Returns Linux version of SteamNetworkingMessage_t */
#define network_message_win_to_lin(m) network_message_win_to_lin_(m, SDK_VERSION)
void *network_message_win_to_lin_(void *win_msg, unsigned int version);

#define lin_to_win_struct_SteamNetworkingMessage_t(a, b, c, d) lin_to_win_struct_SteamNetworkingMessage_t_(a, (void **)(b), (void **)(c), d, SDK_VERSION)
void lin_to_win_struct_SteamNetworkingMessage_t_(int n_messages, void **l, void **w, int max_messages, int version);
