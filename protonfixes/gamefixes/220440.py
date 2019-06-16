""" Game fix DMC Devil May Cry
    (Currently without controller)
"""
#pylint: disable=C0103

from protonfixes import util

def main():
    """ Needs dotnet40 """

    util.use_win32_prefix()
    util.protontricks('dotnet40')
    util._mk_syswow64() #pylint: disable=protected-access

#TODO Controllers fixes
