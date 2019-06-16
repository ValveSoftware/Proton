""" Game fix for The Evil Within(268050)
"""
#pylint: disable=C0103

from protonfixes import util

def main():
    """ Changes the proton argument from the launcher to the game
    """

    util.protontricks('xact')
    util.protontricks('win7')

    util.set_environment('PULSE_LATENCY_MSEC', '60')
