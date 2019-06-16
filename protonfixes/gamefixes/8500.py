""" Game fix for EVE Online
"""
#pylint: disable=C0103

from protonfixes import util

def main():
    """ Set to winxp
    """

    # https://github.com/ValveSoftware/Proton/issues/1223#issue-356628050
    util.protontricks('winxp')
