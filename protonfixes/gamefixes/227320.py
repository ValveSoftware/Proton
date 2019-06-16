""" Game fix for You Need a Budget 4
"""
#pylint: disable=C0103

from protonfixes import util

def main():
    """ Installs corefonts
    """

    # https://github.com/ValveSoftware/Proton/issues/7
    util.protontricks('corefonts')
