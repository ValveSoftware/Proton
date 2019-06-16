""" Game fix for Sleeping Dogs: Definitive Edition
Note: It does not work with WINED3D.
After the game start fullscreen and resolution can be set from game display settings.
Sometimes the game is crashing.
"""
#pylint: disable=C0103

from protonfixes import util

def main():
    """ Set virtual desktop
    """

    # https://github.com/ValveSoftware/Proton/issues/872
    util.protontricks('vd=1280x720')
