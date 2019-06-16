""" Game fix for Rise of Nations: Extended Edition
Source: https://github.com/simons-public/protonfixes/issues/24#issue-372384148
"""

#pylint: disable=C0103

from protonfixes import util

def main():
    """ Installs crypt32 and and bypasses launcher
    """

    # Install crypt32 (not required for Proton 3.16-3 and up)
    util.protontricks('crypt32')

    # Install directmusic, set overrides
    util.protontricks('directmusic')
    util.winedll_override('dmime', 'n')
    util.winedll_override('dmsynth', 'n')
    util.winedll_override('dmusic', 'n')
    util.winedll_override('dsound', 'n')
    util.winedll_override('dswave ', 'n')
    util.winedll_override('l3codecx', 'n')

    # Set sound to alsa
    util.protontricks('sound=alsa')

    # Disable launcher
    util.replace_command('patriots.exe', 'riseofnations.exe')
