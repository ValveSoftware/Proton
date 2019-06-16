""" Game fix for Oddworld: Abe's Oddysee
TODO: Fix steam controller input, it is stuck in lizard mode without overlay
"""
#pylint: disable=C0103

from protonfixes import util

def main():
    """ Adds the -interline argument to the game
    """

    # Adding -interline fixes slow videos but adds scanlines
    util.append_argument('-interline')
