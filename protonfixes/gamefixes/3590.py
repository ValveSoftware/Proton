""" Game fix for Plants vs. Zombies: Game of the Year
Source: https://github.com/JamesHealdUK/protonfixes/blob/master/fixes/3590.sh
"""
#pylint: disable=C0103

from protonfixes import util

def main():
    """ Changes the proton argument from the launcher to the game
    """

    # Game expects this to be set
    util.append_argument('-changedir')
