""" Game fix Cuphead
"""
#pylint: disable=C0103

from protonfixes import util

def main():
    """ For some systems using 64 bit prefix may cause data.unity3d not found error
    """
    util.use_win32_prefix()
