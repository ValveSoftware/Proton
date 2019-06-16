""" Game fix for Call of Duty (2003)
"""
#pylint: disable=C0103

from protonfixes import util

def main():
    """ Set Mesa env vars
    """

    # https://github.com/ValveSoftware/Proton/pull/1423/commits/1a1d25c7d95691e37c94aea4e5f94e0c917aba6f
    util.set_environment('MESA_EXTENSION_MAX_YEAR', '2003')
    util.set_environment('__GL_ExtensionStringVersion', '17700')
