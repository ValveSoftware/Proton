""" Game fix for Titan Quest Anniversary Edition(475150)
"""
#pylint: disable=C0103

from protonfixes import util

def main():
    """ Set OS to Windows XP to pass the black menu screen
    """

    util.protontricks('winxp')
