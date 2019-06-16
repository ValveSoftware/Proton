""" Game fix for Crysis
"""
#pylint: disable=C0103

from protonfixes import util

def main():
    """ Installs d3dcompiler_43, disables esync
    """

    # https://github.com/ValveSoftware/Proton/issues/178#issuecomment-422986182
    util.protontricks('d3dcompiler_43')

    # https://github.com/ValveSoftware/Proton/issues/178#issuecomment-415201326
    util.disable_esync()
