""" Game fix for Forts
"""
#pylint: disable=C0103

from protonfixes import util

def main():
    """ Uses winetricks to install the ole32 verb
    """

    util.protontricks('ole32')
