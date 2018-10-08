#!/usr/bin/env python3

"""
This module lists game-specific tweaks, that cannot be handled by other means
(specifically tweaks, that are outside of dxvk.conf or Mesa scope, such as
additional environment variables, renaming files post-installation, changing
Wine settings for the specific game, etc.).  The purpose is similar to
"Install Scripts" *.vfd files distributed with games, except here tweaks are
provided by Proton community and not game developer.
"""

import configparser
import os
import re
import shutil
import subprocess
import sys


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
        },
        'commands': {
            r'.*jk2sp.exe$': ['+r_ignorehwgamma', '1'],
            r'.*jk2mp.exe$': ['+r_ignorehwgamma', '1'],
        }
    },
    # EVE Online
    '8500': {
        'needs_fonts': True,
    },
    # Return to Castle Wolfenstein
    '9010': {
        'env': {
            'MESA_EXTENSION_MAX_YEAR': '2003',
            '__GL_ExtensionStringVersion': '17700',
        }
    },
    # Age of Empires® III: Complete Collection
    '105450': {
        'needs_fonts': True,
    },
    # EverQuest® II Free-To-Play. Your Way.™
    '201230': {
        'needs_fonts': True,
    },
    # Tomb Raider I
    '224960': {
        'conf_file': 'glide_fix.conf',
        'conf_dict': {'glide': {'glide': 'emu'}},
        'commands': {
            r'.*dosbox.exe$': ['-conf', 'glide_fix.conf'],
        }
    },
    # Tesla Effect: A Tex Murphy Adventure
    '261510': {
        'needs_fonts': True,
    },
    # Grand Theft Auto V
    '271590': {
        'needs_fonts': True,
    },
    # The Entente Gold
    '285480': {
        'needs_fonts': True,
    },
    # Order of Battle: World War II
    '312450': {
        'needs_fonts': True,
    },
    # Town of Salem
    '334230': {
        'needs_fonts': True,
    },
    # Business Tour - Online Multiplayer Board Game
    '397900': {
        'needs_fonts': True,
    },
    # Dungeons & Darkness
    '479990': {
        'needs_fonts': True,
    },
    # Cold Waters
    '541210': {
        'needs_fonts': True,
    },
    # PC Building Simulator
    '621060': {
        'needs_fonts': True,
    },
    # D&D Lords of Waterdeep
    '644390': {
        'needs_fonts': True,
    },
    # Mirror
    '644560': {
        'needs_fonts': True,
    },
    # Changed
    '814540': {
        'needs_fonts': True,
    },
    # Fox Hime Zero
    '844930': {
        'needs_fonts': True,
    },
}


def log(msg):  # pylint: disable=missing-docstring
    sys.stderr.write('Proton: ' + msg + os.linesep)
    sys.stderr.flush()


def find_font_with_fc(family, style):
    """Find path to font using fontconfig"""

    pattern = '{}:style={}'.format(family, style or 'Regular')
    try:
        out = subprocess.check_output(['fc-list', '-f', '%{file}', pattern])
        path = out.decode('utf-8')
        if os.access(path, os.R_OK):
            return path
    except FileNotFoundError:  # in case fc-list is not installed
        pass
    return ''


def install_file(src, dst):
    """Try to create hardlink (copy file as fallback)"""
    try:
        os.link(src, dst)
    except OSError:
        shutil.copy(src, dst)


class Tweaks:
    """
    Class grouping tweaks for a specific game
    """

    def __init__(self, appid):
        self.prefix = os.environ['STEAM_COMPAT_DATA_PATH'] + '/pfx/'
        self.env = {}
        self.needs_fonts = False
        self.commands = {}
        self.conf_file = ''
        self.conf_dict = {}
        if os.environ.get('PROTON_NO_TWEAKS') == '1':
            return
        if appid in TWEAKS_DB:
            for name, value in TWEAKS_DB[appid].items():
                self.__dict__[name] = value or self.__dict__[name]


    def needs_config(self):  # pylint: disable=missing-docstring
        exists = lambda: os.access(self.conf_file, os.F_OK)
        return self.conf_file and self.conf_dict and not exists()


    def create_config(self):
        """Create configuration file in ini format
        """
        conf = configparser.ConfigParser()
        conf.read_dict(self.conf_dict)
        with open(self.conf_file, 'w') as file:
            conf.write(file)


    def modify_command(self, args):
        """Add commandline parameters defined for this app

        If user decides to modify 'Set launch options' and append some args,
        then it will override whatever is defined in TWEAKS_DB.

        Games can provide multiple binaries, each binary can have
        separate list of tweaked commandline args.
        """
        for expr, extra_args in self.commands.items():
            exe_pattern = re.compile(expr)
            if any(exe_pattern.match(arg) for arg in args):
                return args + extra_args
        return args


    def import_fonts(self):
        """Import missing fonts to game's Wine prefix

        This function will query fontconfig looking for specific fonts,
        otherwise it will look into ~/.wine/ and finally into /usr/share/fonts/.

        Installation consists only of putting files into default Windows font
        directory - there's no need to use regedit (unlike in winetricks), Wine
        will detect and register fonts on next run.

        Fonts will probably not be recognized if installed while application is
        running in Wine.
        """

        ms_core_fonts = [
            ('Arial', '', 'arial.ttf'),
            ('Arial', 'Bold', 'arialbd.ttf'),
            ('Arial', 'Italic', 'ariali.ttf'),
            ('Arial', 'Bold Italic', 'arialbi.ttf'),
            ('Arial Black', '', 'ariblk.ttf'),
            ('Comic Sans MS', '', 'comic.ttf'),
            ('Comic Sans MS', 'Bold', 'comicbd.ttf'),
            ('Courier New', '', 'cour.ttf'),
            ('Courier New', 'Bold', 'courbd.ttf'),
            ('Courier New', 'Italic', 'couri.ttf'),
            ('Courier New', 'Bold Italic', 'courbi.ttf'),
            ('Georgia', '', 'georgia.ttf'),
            ('Georgia', 'Bold', 'georgiab.ttf'),
            ('Georgia', 'Italic', 'georgiai.ttf'),
            ('Georgia', 'Bold Italic', 'georgiaz.ttf'),
            ('Impact', '', 'impact.ttf'),
            ('Times New Roman', '', 'times.ttf'),
            ('Times New Roman', 'Bold', 'timesbd.ttf'),
            ('Times New Roman', 'Italic', 'timesi.ttf'),
            ('Times New Roman', 'Bold Italic', 'timesbi.ttf'),
            ('Trebuchet MS', '', 'trebuc.ttf'),
            ('Trebuchet MS', 'Bold', 'trebucbd.ttf'),
            ('Trebuchet MS', 'Italic', 'trebucit.ttf'),
            ('Trebuchet MS', 'Bold Italic', 'trebucbi.ttf'),
            ('Verdana', '', 'verdana.ttf'),
            ('Verdana', 'Bold', 'verdanab.ttf'),
            ('Verdana', 'Italic', 'verdanai.ttf'),
            ('Verdana', 'Bold Italic', 'verdanaz.ttf'),
            ('Webdings', '', 'webdings.ttf')
        ]
        for font in ms_core_fonts:
            if not self.is_font_installed(font[2]):
                self._install_ttf_font(*font)


    def is_font_installed(self, file_name):  # pylint: disable=missing-docstring
        return os.access(self.prefix + '/drive_c/windows/Fonts/' + file_name, os.F_OK)


    def _install_ttf_font(self, family, style, file_name):
        font_name = ' '.join(filter(lambda x: x, [family, style]))
        test_path = lambda path: path if os.access(path, os.R_OK) else ''
        path = find_font_with_fc(family, style) or \
               test_path(os.environ["HOME"] + '/.wine/drive_c/windows/Fonts/' + file_name) or \
               test_path('/usr/share/truetype/' + file_name) or \
               test_path('/usr/share/msttcore/' + file_name)
        if path:
            log('Installing {} from: {}'.format(font_name, path))
            install_file(path, self.prefix + '/drive_c/windows/Fonts/' + file_name)
        else:
            log('Missing font: {}'.format(font_name))
