#To enable these settings, name this file "user_settings.py".

#Settings here will take effect for all games run in this Proton version.

user_settings = {
    #Logs are saved to $HOME/steam-<STEAM_GAME_ID>.log, overwriting any previous log with that name.

    #Wine debug logging
    "WINEDEBUG": "+timestamp,+pid,+tid,+seh,+debugstr,+loaddll,+mscoree",

    #DXVK debug logging
    "DXVK_LOG_LEVEL": "info",

    #vkd3d debug logging
    "VKD3D_DEBUG": "warn",

    #wine-mono debug logging (Wine's .NET replacement)
    "WINE_MONO_TRACE": "E:System.NotImplementedException",
    #"MONO_LOG_LEVEL": "info",

    #Enable DXVK's HUD
#    "DXVK_HUD": "devinfo,fps",

    #Use OpenGL-based wined3d for d3d11 and d3d10 instead of Vulkan-based DXVK
#    "PROTON_USE_WINED3D": "1",

    #Use Vulkan-based D9VK instead of OpenGL-based wined3d for d3d9.
#    "PROTON_USE_D9VK": "1",

    #Disable d3d11 entirely
#    "PROTON_NO_D3D11": "1",

    #Disable eventfd-based in-process synchronization primitives
#    "PROTON_NO_ESYNC": "1",

    #Disable futex-based in-process synchronization primitives
#    "PROTON_NO_FSYNC": "1",
}
