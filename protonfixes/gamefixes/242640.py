""" Game fix for Styx: Master of Shadows
"""
#pylint: disable=C0103

from protonfixes import util

def main():
    """ Install dotnet40
    Works, but gives a popup twice at the beginning of launch:
    'Unable to find a version of the runtime to run this
    application. (OK)
    """

    # https://github.com/ValveSoftware/Proton/issues/810
    # https://steamcommunity.com/app/242640/discussions/0/620700960990638817/
    util.protontricks('xact')
    util.protontricks('dotnet40')
