""" Game fix for Oddworld: Munch's Oddysee
"""
#pylint: disable=C0103

from protonfixes import util

def main():
    """ Uses win32 prefix, installs devenum, quartz, wmp9
    """

    # Winetrick wmp9 requires 32bit prefix
    util.use_win32_prefix()

    # https://appdb.winehq.org/objectManager.php?sClass=version&iId=34367
    util.protontricks('devenum')
    util.protontricks('quartz')
    util.protontricks('wmp9')
