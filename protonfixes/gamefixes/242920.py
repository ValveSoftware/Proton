""" Game fix for Banished
"""
# pylint: disable=C0103
from protonfixes import util


def main():
    """ Install xact and override
    """

    print('Applying fixes for Banished')

    # If not already installed, install xact
    if not util.checkinstalled('xact'):
        util.protontricks('xact')

