## Available in Proton 3.7 Beta:
###### 3.7-5:
- Performance improvements for timing APIs in CPU-limited scenarios
###### 3.7-4:
- Support python3 as well as python2. This removes the requirement for python2 to be installed.
- DXVK updated to v0.70, view that changelog here: https://github.com/doitsujin/dxvk/releases DXVK's DX10 support is not yet enabled.
- Fullscreen games should more consistently gain keyboard focus on Ubuntu with gnome-shell. This can also help with games that auto-minimize on launch.
- Some useful default logging can be enabled with `PROTON_LOG=1 %command%` in the Steam game launch options. Logs will be dumped to $HOME/steam-$APPID.log. WINEDEBUG can still be set in user_settings.py for more extensive debugging.
- Debug scripts are no longer dumped to /tmp/ by default. They must now be enabled with `PROTON_DUMP_DEBUG_COMMANDS=1 %command%` in the Steam game launch options. They have also been moved to /tmp/proton_$USER/.
- Controllers will hopefully no longer cause long delays on startup on some systems (winehq bug 45084).
## Available in Proton 3.7:
###### 3.7-3:
 - Fixed missing 32-bit libraries
###### 3.7-2:
 - Fixed debug DXVK
###### 3.7-1:
 - Initial release
