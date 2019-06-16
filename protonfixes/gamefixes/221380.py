""" Game fix for Age of Empires 2 HD Edition
Source: https://github.com/JamesHealdUK/protonfixes/blob/master/fixes/221380.sh
"""
#pylint: disable=C0103

from protonfixes import util

def main():
    """ Changes the proton argument from the launcher to the game
    """

    # Replace launcher with game exe in proton arguments
    util.replace_command('Launcher.exe', 'AoK HD.exe')
