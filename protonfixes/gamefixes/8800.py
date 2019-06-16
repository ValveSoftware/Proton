""" Game fix for Civilization 4 (Beyond the Sword)
"""
#pylint: disable=C0103

from protonfixes import util

def main():
    """ Install msxml3
    """

    # https://github.com/ValveSoftware/Proton/issues/179#issuecomment-415593087
    util.protontricks('msxml3')
    util.protontricks('msxml4')
