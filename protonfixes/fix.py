""" Gets the game id and applies a fix if found
"""

from __future__ import print_function
import io
import os
import re
import sys
from importlib import import_module
from protonfixes.splash import splash
from .corefonts import check_corefonts, get_corefonts, link_fonts
from .util import protonprefix
from .checks import run_checks
from .logger import log
from . import config

def game_id():
    """ Trys to return the game id from environment variables
    """

    if 'SteamAppId' in os.environ:
        return os.environ['SteamAppId']
    if 'SteamGameId' in os.environ:
        return os.environ['SteamGameId']
    if 'STEAM_COMPAT_DATA_PATH' in os.environ:
        return re.findall(r'\d+', os.environ['STEAM_COMPAT_DATA_PATH'])[-1]

    log.crit('Game ID not found in environment variables')
    return None


def game_name():
    """ Trys to return the game name from environment variables
    """

    try:
        game_library = re.findall(r'.*/steamapps', os.environ['PWD'], re.IGNORECASE)[-1]
        game_manifest = os.path.join(game_library, 'appmanifest_' + game_id() + '.acf')

        with io.open(game_manifest, 'r', encoding='utf-8') as appmanifest:
            for xline in appmanifest.readlines():
                if 'name' in xline.strip():
                    name = re.findall(r'"[^"]+"', xline, re.UNICODE)[-1]
                    return name
    except OSError:
        return 'UNKNOWN'
    except IndexError:
        return 'UNKNOWN'
    except UnicodeDecodeError:
        return 'UNKNOWN'
    return 'UNKNOWN'


def run_fix(gameid):
    """ Loads a gamefix module by it's gameid
    """

    if gameid is None:
        return

    if config.enable_checks:
        run_checks()

    game = game_name() + ' ('+ gameid + ')'
    localpath = os.path.expanduser('~/.config/protonfixes/localfixes')
    if os.path.isfile(os.path.join(localpath, gameid + '.py')):
        open(os.path.join(localpath, '__init__.py'), 'a').close()
        sys.path.append(os.path.expanduser('~/.config/protonfixes'))
        try:
            game_module = import_module('localfixes.' + gameid)
            log.info('Using local protonfix for ' + game)
            game_module.main()
        except ImportError:
            log.info('No local protonfix found for ' + game)
    else:
        try:
            game_module = import_module('protonfixes.gamefixes.' + gameid)
            log.info('Using protonfix for ' + game)
            game_module.main()
        except ImportError:
            log.info('No protonfix found for ' + game)

    if config.enable_font_links:
        # get corefonts
        if not check_corefonts():
            log.info('Getting ms corefonts')
            get_corefonts()

        # install corefonts
        fontsdir = os.path.join(protonprefix(), 'drive_c/windows/Fonts')
        try:
            os.makedirs(fontsdir)
        except FileExistsError:
            log.debug('Fonts directory exists')
        if len(os.listdir(fontsdir)) < 30:
            link_fonts(fontsdir)


def main():
    """ Runs the gamefix, with splash if zenity or cefpython3 is available
    """

    check_args = [
        'iscriptevaluator.exe' in sys.argv[2],
        'getcompatpath' in sys.argv[1],
        'getnativepath' in sys.argv[1],
    ]

    if any(check_args):
        log.debug(str(sys.argv))
        log.debug('Not running protonfixes for setup runs')
        return

    log.info('Running protonfixes')

    if config.enable_splash:
        with splash():
            run_fix(game_id())
    else:
        run_fix(game_id())
