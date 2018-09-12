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
}


class Tweaks:  # pylint: disable=too-few-public-methods
    """
    Class grouping tweaks for a specific game
    """

    def __init__(self, appid):
        self.env = {}
        if appid in TWEAKS_DB:
            self.env = TWEAKS_DB[appid].get('env') or {}
