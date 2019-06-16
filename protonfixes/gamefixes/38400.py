"""Game fix for Fallout: A Post Nuclear Role Playing Game"""

# pylint: disable=invalid-name

import sys

from protonfixes import util
from protonfixes.logger import log

def main():
    """
    Bypassing launcher, which does not run due to broken
    .NET 4.0 installation.

    Launcher provides no functionality (only a link to Bethesda site
    without any specific Fallout content).
    """

    if '-classic' in sys.argv:
        log('Bypassing launcher to run Fallout (Classic Version)')
        util.replace_command('FalloutLauncher.exe', 'FALLOUTW.EXE')
    else:
        log('Bypassing launcher to run Fallout (High Resolution Version)')
        util.replace_command('FalloutLauncher.exe', 'falloutwHR.exe')
