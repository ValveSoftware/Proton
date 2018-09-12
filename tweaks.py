#!/usr/bin/env python

"""
This module lists game-specific tweaks, that cannot be handled by other means
(specifically tweaks, that are outside of dxvk.conf or Mesa scope, such as
additional environment variables, renaming files post-installation, changing
Wine settings for the specific game, etc.).  The purpose is similar to
"Install Scripts" *.vfd files distributed with games, except here tweaks are
provided by Proton community and not game developer.
"""


TWEAKS_DB = {
    # Call of Duty® (2003)
    '2620': {
        'env': {
            'MESA_EXTENSION_MAX_YEAR': '2003',
            '__GL_ExtensionStringVersion': '17700',
        }
    },
    # STAR WARS™ Jedi Knight - Jedi Academy™
    '6020': {
        'env': {
            'MESA_EXTENSION_MAX_YEAR': '2003',
            '__GL_ExtensionStringVersion': '17700',
        }
    },
    # STAR WARS™ Jedi Knight II - Jedi Outcast™
    '6030': {
        'env': {
            'MESA_EXTENSION_MAX_YEAR': '2003',
            '__GL_ExtensionStringVersion': '17700',
        }
    },
}


class Tweaks:  # pylint: disable=too-few-public-methods
    """
    Class grouping tweaks for a specific game
    """

    def __init__(self, appid):
        self.env = {}
        if appid in TWEAKS_DB:
            self.env = TWEAKS_DB[appid].get('env') or {}
