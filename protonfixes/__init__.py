""" Starts the protonfix module
"""

import os
import sys
import traceback
from . import fix

if 'DEBUG' in os.environ:
    from . import debug

RUN_CONDITIONS = [
    'STEAM_COMPAT_DATA_PATH' in os.environ,
    'PROTONFIXES_DISABLE' not in os.environ,
]

if all(RUN_CONDITIONS):
    try:
        fix.main()

    #pylint: disable=W0702
    # Catch any exceptions and print a traceback
    except:
        sys.stderr.write('ProtonFixes ' + traceback.format_exc())
        sys.stderr.flush()
