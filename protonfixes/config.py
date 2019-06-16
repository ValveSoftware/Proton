""" Load configuration settings for protonfixes
"""
import os
from configparser import ConfigParser
from .logger import log

CONF_FILE = '~/.config/protonfixes/config.ini'
DEFAULT_CONF = '''
[main]
enable_checks = true
enable_splash = true
enable_font_links = true

[path]
cache_dir = ~/.cache/protonfixes
'''

CONF = ConfigParser()
CONF.read_string(DEFAULT_CONF)

try:
    CONF.read(os.path.expanduser(CONF_FILE))
# pylint: disable=W0703
except Exception:
    log.debug('Unable to read config file ' + CONF_FILE)

def opt_bool(opt):
    """ Convert bool ini strings to actual boolean values
    """

    return opt.lower() in ['yes', 'y', 'true', '1']

# pylint: disable=E1101
locals().update(
    {x:opt_bool(y) for x, y
     in CONF['main'].items()
     if 'enable' in x})

locals().update({x:os.path.expanduser(y) for x, y in CONF['path'].items()})

try:
    [os.makedirs(os.path.expanduser(d)) for n, d in CONF['path'].items()]
except OSError:
    pass
