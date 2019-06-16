""" Game fix for Warlock Master of the Arcane
"""
#pylint: disable=C0103

from protonfixes import util

def main():
    """ Don't use d9vk, not working yet
    """
    # DX9 game
    util.disable_d3d9() 
