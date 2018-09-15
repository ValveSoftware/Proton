#!/usr/bin/env python3

# This is free and unencumbered software released into the public domain.
#
# Anyone is free to copy, modify, publish, use, compile, sell, or
# distribute this software, either in source code form or as a compiled
# binary, for any purpose, commercial or non-commercial, and by any
# means.
#
# In jurisdictions that recognize copyright laws, the author or authors
# of this software dedicate any and all copyright interest in the
# software to the public domain. We make this dedication for the benefit
# of the public at large and to the detriment of our heirs and
# successors. We intend this dedication to be an overt act of
# relinquishment in perpetuity of all present and future rights to this
# software under copyright law.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
# EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
# MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
# IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
# OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
# ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
# OTHER DEALINGS IN THE SOFTWARE.
#
# For more information, please refer to <http://unlicense.org>

"""
This module lists game-specific tweaks, that cannot be handled by other means
(specifically tweaks, that are outside of dxvk.conf or Mesa scope, such as
additional environment variables, renaming files post-installation, changing
Wine settings for the specific game, etc.).  The purpose is similar to
"Install Scripts" *.vfd files distributed with games, except here tweaks are
provided by Proton community and not game developer.
"""

import os
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
        }
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
        self.env = {}
        self.needs_fonts = False
        self.prefix = os.environ['STEAM_COMPAT_DATA_PATH'] + '/pfx/'
        if appid in TWEAKS_DB:
            self.env = TWEAKS_DB[appid].get('env') or {}
            self.needs_fonts = TWEAKS_DB[appid].get('needs_fonts') or False


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
            if not self.is_font_installed(font[0]):
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
