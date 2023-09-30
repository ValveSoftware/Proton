#include "unix_private.h"

#include "cppISteamClient_SteamClient020.h"

void cppISteamClient_SteamClient020_Set_SteamAPI_CCheckCallbackRegisteredInProcess( struct cppISteamClient_SteamClient020_Set_SteamAPI_CCheckCallbackRegisteredInProcess_params *params )
{
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    uint32_t (*U_CDECL lin_func)(int32_t) = manual_convert_Set_SteamAPI_CCheckCallbackRegisteredInProcess_func_156( params->func );
    iface->Set_SteamAPI_CCheckCallbackRegisteredInProcess( lin_func );
}
