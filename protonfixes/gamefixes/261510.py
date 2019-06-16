""" Game fix for Tesla Effect
"""
#pylint: disable=C0103

from protonfixes import util

def main():
    """ Install corefonts
    """

    # https://github.com/ValveSoftware/Proton/issues/1317
    util.protontricks('corefonts')
