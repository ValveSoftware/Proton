""" Game fix for PixARK
"""
#pylint: disable=C0103

from protonfixes import util

def main():
    """ Overrides the mprapi.dll to native.
    """

    util.winedll_override('mprapi', 'x')
