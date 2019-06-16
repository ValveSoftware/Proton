""" Game fix for Age Of Empire 3: Complete Collection
"""
#pylint: disable=C0103

from protonfixes import util

def main():
    """ Uses win32 prefix, installs corefonts, dsound, l3codecx quarts mfc42 d3dx9 and dotnet20
    """

    # Winetrick wmp9 requires 32bit prefix
    util.use_win32_prefix()

    # https://github.com/ValveSoftware/Proton/issues/17#issuecomment-415977510
    util.protontricks('corefonts')
    util.protontricks('dsound')
    util.protontricks('l3codecx')
    util.protontricks('quartz')
    util.protontricks('mfc42')
    util.protontricks('dotnet20')
