"""Game fix for Fallout 2"""

# pylint: disable=invalid-name

import sys

from protonfixes import util
from protonfixes.logger import log

def main():
    """
    Bypassing launcher, which does not run due to broken
    .NET 4.0 installation.

    Launcher provides no functionality (only a link to Bethesda site
    without any specific Fallout 2 content).
    """
    if '-classic' in sys.argv:
        log('Bypassing launcher to run Fallout 2 (Classic Version)')
        util.replace_command('Fallout2Launcher.exe', 'fallout2.exe')
    else:
        log('Bypassing launcher to run Fallout 2 (High Resolution Version)')
        util.replace_command('Fallout2Launcher.exe', 'fallout2HR.exe')
