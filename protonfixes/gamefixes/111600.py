""" Game fix for Serious Sam Double D XXL
"""

# pylint: disable=C0103

from protonfixes import util


def main():
    """ Uses winetricks to install dotnet40
        https://appdb.winehq.org/objectManager.php?sClass=version&iId=34014
    """

    # If not already installed, install dotnet40
    util.protontricks('dotnet40')
