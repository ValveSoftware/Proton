""" Game fix for Little Nightmares
"""
# pylint: disable=C0103

import sys
from protonfixes import util


def main():
    """ Install xact, override libraries and add launch parameter
    """

    # The game crashes if running with more than one CPU thread,
    # adding "-onethread" will force the game to use only one CPU thread
    sys.argv.append('-onethread')
