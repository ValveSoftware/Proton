#to enable these settings, name this file "user_settings.py"

user_settings = {
    #logs are saved to $HOME/steam-$STEAM_APP_ID.log, overwriting any previous log with that name
    "WINEDEBUG": "+timestamp,+pid,+tid,+seh,+debugstr,+module",

    "DXVK_LOG_LEVEL": "info",

    #Enable DXVK's HUD
#    "DXVK_HUD": "devinfo,fps",

    #Use gl-based wined3d for d3d11 and d3d10 instead of vulkan-based dxvk
#    "PROTON_USE_WINED3D": "1",

    #Disable d3d11 entirely
#    "PROTON_NO_D3D11": "1",

    #Disable in-process synchronization primitives
#    "PROTON_NO_ESYNC": "1",
}
