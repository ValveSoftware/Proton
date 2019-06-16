""" Game fix for Order of Battle: World War II
Still missing intro video codecs
"""
#pylint: disable=C0103

from protonfixes import util

def main():
    """ Install corefonts
    """

    # https://github.com/ValveSoftware/Proton/issues/639
    util.protontricks('corefonts')
