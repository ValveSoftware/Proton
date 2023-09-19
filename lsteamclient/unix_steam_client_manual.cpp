#include "steamclient_private.h"

#pragma push_macro( "strncpy" )
#undef strncpy
#include "cppISteamClient_SteamClient020.hpp"
#pragma pop_macro( "strncpy" )

void cppISteamClient_SteamClient020_Set_SteamAPI_CCheckCallbackRegisteredInProcess( struct cppISteamClient_SteamClient020_Set_SteamAPI_CCheckCallbackRegisteredInProcess_params *params )
{
    struct cppISteamClient_SteamClient020 *iface = (struct cppISteamClient_SteamClient020 *)params->linux_side;
    uint32_t (*U_CDECL lin_func)(int32_t) = manual_convert_Set_SteamAPI_CCheckCallbackRegisteredInProcess_func_156( params->func );
    iface->Set_SteamAPI_CCheckCallbackRegisteredInProcess( lin_func );
}
