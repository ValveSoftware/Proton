#include "unix_private.h"

NTSTATUS ISteamClient_SteamClient020_Set_SteamAPI_CCheckCallbackRegisteredInProcess( void *args )
{
    struct ISteamClient_SteamClient020_Set_SteamAPI_CCheckCallbackRegisteredInProcess_params *params = (struct ISteamClient_SteamClient020_Set_SteamAPI_CCheckCallbackRegisteredInProcess_params *)args;
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    uint32_t (*U_CDECL lin_func)(int32_t) = manual_convert_Set_SteamAPI_CCheckCallbackRegisteredInProcess_func_156( params->func );
    iface->Set_SteamAPI_CCheckCallbackRegisteredInProcess( lin_func );
    return 0;
}
