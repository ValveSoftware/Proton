""" Game fix for Battlefield: Bad Company 2
"""
#pylint: disable=C0103

from protonfixes import util

def main():
    """ Install corefonts, Set to win7 and override msdmo
    """

    # https://github.com/ValveSoftware/Proton/issues/200#issuecomment-415905979
    util.protontricks('win7')
    util.protontricks('corefonts')
    util.set_environment('WINEDLLOVERRIDES', 'msdmo=b')
