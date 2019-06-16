""" Game fix for A Hat in Time
Source: https://github.com/ValveSoftware/Proton/issues/173
"""

#pylint: disable=C0103

from protonfixes import util

def main():
    """ Installs xact
    """

    util.protontricks('xact')
