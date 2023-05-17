#To enable these settings, name this file "user_settings.py".

#Settings here will take effect for all games run in this Proton version.

user_settings = {
    #By default, logs are saved to $HOME/steam-<STEAM_GAME_ID>.log, overwriting any previous log with that name.
    #Log directory can be overridden with $PROTON_LOG_DIR.

    #enable logging
    "PROTON_LOG": "1",

    #custom Wine debug logging
    #"WINEDEBUG": "+timestamp,+pid,+tid,+seh,+unwind,+threadname,+debugstr,+loaddll,+mscoree",

    #DXVK debug logging
    "DXVK_LOG_LEVEL": "info",

    #vkd3d debug logging
    "VKD3D_DEBUG": "warn",

    #vkd3d-shader debug logging
    "VKD3D_SHADER_DEBUG": "fixme",

    #wine-mono debug logging (Wine's .NET replacement)
    "WINE_MONO_TRACE": "E:System.NotImplementedException",
    #"MONO_LOG_LEVEL": "info",

    #general purpose media logging
#    "GST_DEBUG": "4",
    #or, verbose converter logging (may impact playback performance):
#    "GST_DEBUG": "4,WINE:7,protonaudioconverter:7,protonaudioconverterbin:7,protonvideoconverter:7",
    "GST_DEBUG_NO_COLOR": "1",

    #Enable DXVK's HUD
#    "DXVK_HUD": "devinfo,fps",

    #Use OpenGL-based wined3d for d3d11, d3d10, and d3d9 instead of Vulkan-based DXVK
#    "PROTON_USE_WINED3D": "1",

    #Disable d3d11 entirely
#    "PROTON_NO_D3D11": "1",

    #Disable eventfd-based in-process synchronization primitives
#    "PROTON_NO_ESYNC": "1",

    #Disable futex-based in-process synchronization primitives
#    "PROTON_NO_FSYNC": "1",
}
