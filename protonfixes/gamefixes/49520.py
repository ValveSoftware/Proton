""" Game fix for Borderlands 2
"""
#pylint: disable=C0103

from protonfixes import util

def main():
    """ Launcherfix and NVIDIA PhysX support.
    """

    # Fixes the startup process.
    util.replace_command('Launcher.exe', 'Borderlands2.exe')
    util.append_argument('-NoSplash')

    # Disables esync prevents crashes.
    util.disable_esync()

    # Enables NVIDIA PhysX in Borderlands 2.
    util.protontricks('physx')
