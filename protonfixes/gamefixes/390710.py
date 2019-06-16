""" Game fix for SUGURI 2
"""
#pylint: disable=C0103

from protonfixes import util

def main():
    """ Installs d3dxof
    """

    # https://github.com/ValveSoftware/Proton/issues/970#issuecomment-420421289
    util.protontricks('d3dxof')
