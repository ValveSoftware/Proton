""" Utilities to make gamefixes easier
"""

import configparser
import os
import sys
import re
import shutil
import signal
import zipfile
import subprocess
import urllib.request
from .logger import log
from . import config

try:
    import __main__ as protonmain
except ImportError:
    log.warn('Unable to hook into Proton main script environment')

# pylint: disable=unreachable

def which(appname):
    """ Returns the full path of an executable in $PATH
    """

    for path in os.environ['PATH'].split(os.pathsep):
        fullpath = os.path.join(path, appname)
        if os.path.exists(fullpath) and os.access(fullpath, os.X_OK):
            return fullpath
    log.warn(str(appname) + 'not found in $PATH')
    return None


def protondir():
    """ Returns the path to proton
    """

    proton_dir = os.path.dirname(sys.argv[0])
    return proton_dir


def protonprefix():
    """ Returns the wineprefix used by proton
    """

    return os.path.join(
        os.environ['STEAM_COMPAT_DATA_PATH'],
        'pfx/')


def protonnameversion():
    """ Returns the version of proton from sys.argv[0]
    """

    version = re.search('Proton ([0-9]*\\.[0-9]*)', sys.argv[0])
    if version:
        return version.group(1)
    log.warn('Proton version not parsed from command line')
    return None


def protontimeversion():
    """ Returns the version timestamp of proton from the `version` file
    """

    fullpath = os.path.join(protondir(), 'version')
    try:
        with open(fullpath, 'r') as version:
            for timestamp in version.readlines():
                return int(timestamp.strip())
    except OSError:
        log.warn('Proton version file not found in: ' + fullpath)
        return 0
    log.warn('Proton version not parsed from file: ' + fullpath)
    return 0


def protonversion(timestamp=False):
    """ Returns the version of proton
    """

    if timestamp:
        return protontimeversion()
    return protonnameversion()


def _killhanging():
    """ Kills processes that hang when installing winetricks
    """

    # avoiding an external library as proc should be available on linux
    log.debug('Killing hanging wine processes')
    pids = [pid for pid in os.listdir('/proc') if pid.isdigit()]
    badexes = ['mscorsvw.exe']
    for pid in pids:
        try:
            with open(os.path.join('/proc', pid, 'cmdline'), 'rb') as proc_cmd:
                cmdline = proc_cmd.read()
                for exe in badexes:
                    if exe in cmdline.decode():
                        os.kill(int(pid), signal.SIGKILL)
        except IOError:
            continue

def _del_syswow64():
    """ Deletes the syswow64 folder
    """

    try:
        shutil.rmtree(os.path.join(protonprefix(), 'drive_c/windows/syswow64'))
    except FileNotFoundError:
        log.warn('The syswow64 folder was not found')

def _mk_syswow64():
    """ Makes the syswow64 folder
    """

    try:
        os.makedirs(os.path.join(protonprefix(), 'drive_c/windows/syswow64'))
    except FileExistsError:
        log.warn('The syswow64 folder already exists')


def _forceinstalled(verb):
    """ Records verb into the winetricks.log.forced file
    """
    forced_log = os.path.join(protonprefix(), 'winetricks.log.forced')
    with open(forced_log, 'a') as forcedlog:
        forcedlog.write(verb + '\n')


def _checkinstalled(verb, logfile='winetricks.log'):
    """ Returns True if the winetricks verb is found in the winetricks log
    """

    if not isinstance(verb, str):
        return False

    winetricks_log = os.path.join(protonprefix(), logfile)

    # Check for 'verb=param' verb types
    if len(verb.split('=')) > 1:
        wt_verb = verb.split('=')[0] + '='
        wt_verb_param = verb.split('=')[1]
        wt_is_set = False
        try:
            with open(winetricks_log, 'r') as tricklog:
                for xline in tricklog.readlines():
                    if re.findall(r'^' + wt_verb, xline.strip()):
                        wt_is_set = bool(xline.strip() == wt_verb + wt_verb_param)
            return wt_is_set
        except OSError:
            return False
    # Check for regular verbs
    try:
        with open(winetricks_log, 'r') as tricklog:
            if verb in reversed([x.strip() for x in tricklog.readlines()]):
                return True
    except OSError:
        return False
    return False


def checkinstalled(verb):
    """ Returns True if the winetricks verb is found in the winetricks log
        or in the 'winetricks.log.forced' file
    """

    log.info('Checking if winetricks ' + verb + ' is installed')
    if _checkinstalled(verb, 'winetricks.log.forced'):
        return True
    return _checkinstalled(verb)


def is_custom_verb(verb):
    """ Returns path to custom winetricks verb, if found
    """

    verb_name = verb + '.verb'
    verb_dir = 'verbs'

    # check local custom verbs
    verbpath = os.path.expanduser('~/.config/protonfixes/localfixes/' + verb_dir)
    if os.path.isfile(os.path.join(verbpath, verb_name)):
        log.debug('Using local custom winetricks verb from: ' + verbpath)
        return os.path.join(verbpath, verb_name)

    # check custom verbs
    verbpath = os.path.join(os.path.dirname(__file__), 'gamefixes', verb_dir)
    if os.path.isfile(os.path.join(verbpath, verb_name)):
        log.debug('Using custom winetricks verb from: ' + verbpath)
        return os.path.join(verbpath, verb_name)

    return False


def protontricks(verb):
    """ Runs winetricks if available
    """

    if not checkinstalled(verb):
        log.info('Installing winetricks ' + verb)
        env = dict(protonmain.env)
        env['WINEPREFIX'] = protonprefix()
        env['WINE'] = protonmain.wine_path
        env['WINELOADER'] = protonmain.wine_path
        env['WINESERVER'] = os.path.join(protonmain.bindir, 'wineserver')
        env['WINETRICKS_LATEST_VERSION_CHECK'] = 'disabled'
        env['LD_PRELOAD'] = ''

        winetricks_bin = which('winetricks')
        winetricks_cmd = [winetricks_bin, '--unattended'] + verb.split(' ')

        # check is verb a custom winetricks verb
        custom_verb = is_custom_verb(verb)
        if custom_verb:
            winetricks_cmd = [winetricks_bin, '--unattended', custom_verb]

        if winetricks_bin is None:
            log.warn('No winetricks was found in $PATH')

        if winetricks_bin is not None:

            log.debug('Using winetricks command: ' + str(winetricks_cmd))
            # winetricks relies entirely on the existence of syswow64 to determine
            # if the prefix is 64 bit, while proton fails to run without it
            if 'win32' in protonprefix():
                log.info('Deleting syswow64')
                _del_syswow64()

            # make sure proton waits for winetricks to finish
            for idx, arg in enumerate(sys.argv):
                if 'waitforexitandrun' not in arg:
                    sys.argv[idx] = arg.replace('run', 'waitforexitandrun')
                    log.debug(str(sys.argv))

            log.info('Using winetricks verb ' + verb)
            subprocess.call([env['WINESERVER'], '-w'], env=env)
            process = subprocess.Popen(winetricks_cmd, env=env)
            process.wait()
            _killhanging()

            # Check if verb recorded to winetricks log
            if not checkinstalled(verb):
                log.warn('Not recorded as installed: winetricks ' + verb + ', forcing!')
                _forceinstalled(verb)

            log.info('Winetricks complete')
            return True

            # restore syswow64 so proton doesn't crash
            if 'win32' in protonprefix():
                log.info('Restoring syswow64 folder')
                _mk_syswow64()
    return False


def win32_prefix_exists():
    """ Returns True if there is a _win32 path available
    """

    prefix32 = os.environ['STEAM_COMPAT_DATA_PATH'] + '_win32/pfx'
    if os.path.exists(prefix32):
        log.debug('Found win32 prefix')
        return True
    log.debug('No win32 prefix found')
    return False


def use_win32_prefix():
    """ Sets variables in the main proton script to use the _win32 prefix
    """
    if not win32_prefix_exists():
        make_win32_prefix()

    data_path = os.environ['STEAM_COMPAT_DATA_PATH'] + '_win32'
    prefix32 = os.environ['STEAM_COMPAT_DATA_PATH'] + '_win32/pfx/'

    protonmain.env['STEAM_COMPAT_DATA_PATH'] = data_path
    protonmain.env['WINEPREFIX'] = prefix32
    protonmain.env['WINEDLLPATH'] = os.path.join(protondir(), 'dist/lib/wine')
    protonmain.env['WINEARCH'] = 'win32'
    protonmain.prefix = prefix32

    os.environ['STEAM_COMPAT_DATA_PATH'] = data_path
    os.environ['WINEPREFIX'] = prefix32
    os.environ['WINEDLLPATH'] = os.path.join(protondir(), 'dist/lib/wine')
    os.environ['WINEARCH'] = 'win32'
    log.debug('Updated environment variables for win32 prefix')
    # make sure steam doesn't crash when missing syswow
    try:
        os.makedirs(os.path.join(prefix32, 'drive_c/windows/syswow64'))
    except FileExistsError:
        pass


def make_win32_prefix():
    """ Creates a win32 prefix
    """

    env = dict(os.environ)
    log.info('Bootstrapping win32 prefix')

    prefix32 = os.environ['STEAM_COMPAT_DATA_PATH'] + '_win32/pfx'
    try:
        os.makedirs(prefix32)

        env['WINEARCH'] = 'win32'
        env['WINEPREFIX'] = prefix32
        server = subprocess.Popen([which('wineserver'), '-f'], env=env)
        subprocess.Popen([which('wine'), 'wineboot', '--init'], env=env)
        server.wait()

        os.makedirs(os.path.join(prefix32, 'drive_c/windows/syswow64'))
        os.symlink(
            os.path.join(prefix32, 'drive_c/Program Files'),
            os.path.join(prefix32, 'drive_c/Program Files (x86)'))

        log.info('Initialized win32 prefix')

    except OSError:
        log.warn('Directory for win32 prefix already exists')


def replace_command(orig_str, repl_str):
    """ Make a commandline replacement in sys.argv
    """

    log.info('Changing ' + orig_str + ' to ' + repl_str)
    for idx, arg in enumerate(sys.argv):
        if orig_str in arg:
            sys.argv[idx] = arg.replace(orig_str, repl_str)

def append_argument(argument):
    """ Append an argument to sys.argv
    """

    log.info('Adding argument ' + argument)
    sys.argv.append(argument)
    log.debug('New commandline: ' + str(sys.argv))

def set_environment(envvar, value):
    """ Add or override an environment value
    """

    log.info('Adding env: ' + envvar + '=' + value)
    os.environ[envvar] = value
    protonmain.env[envvar] = value

def del_environment(envvar):
    """ Remove an environment variable
    """

    log.info('Removing env: ' + envvar)
    if envvar in os.environ:
        del os.environ[envvar]
    if envvar in protonmain.env:
        del protonmain.env[envvar]

def get_game_install_path():
    """ Game installation path
    """

    log.debug('Detected path to game: ' + os.environ['PWD'])
    # only for `waitforexitandrun` command
    return os.environ['PWD']

def winedll_override(dll, dtype):
    """ Add WINE dll override
    """

    log.info('Overriding ' + dll + '.dll = ' + dtype)
    protonmain.dlloverrides[dll] = dtype

def disable_nvapi():
    """ Disable WINE nv* dlls
    """

    log.info('Disabling NvAPI')
    winedll_override('nvapi', '')
    winedll_override('nvapi64', '')
    winedll_override('nvcuda', '')
    winedll_override('nvcuvid', '')
    winedll_override('nvencodeapi', '')
    winedll_override('nvencodeapi64', '')

def disable_d3d10():
    """ Disable WINE d3d10* dlls
    """

    log.info('Disabling d3d10')
    winedll_override('d3d10', '')
    winedll_override('d3d10_1', '')
    winedll_override('d3d10core', '')

def disable_d3d9():
    """ Disable WINE d3d9* dlls
    """

    log.info('Disabling d3d9')
    winedll_override('d3d9', 'b')

def disable_dxvk():  # pylint: disable=missing-docstring
    set_environment('PROTON_USE_WINED3D11', '1')

def disable_esync():  # pylint: disable=missing-docstring
    set_environment('PROTON_NO_ESYNC', '1')

def disable_d3d11():  # pylint: disable=missing-docstring
    set_environment('PROTON_NO_D3D11', '1')

def disable_d3d10():  # pylint: disable=missing-docstring
    set_environment('PROTON_NO_D3D10', '1')

def disable_d3d9():  # pylint: disable=missing-docstring
    set_environment('PROTON_NO_D3D9', '1')


def create_dosbox_conf(conf_file, conf_dict):
    """Create DOSBox configuration file.

    DOSBox accepts multiple configuration files passed with -conf
    option;, each subsequent one overwrites settings defined in
    previous files.
    """
    if os.access(conf_file, os.F_OK):
        return
    conf = configparser.ConfigParser()
    conf.read_dict(conf_dict)
    with open(conf_file, 'w') as file:
        conf.write(file)


def _get_ini_full_path(cfile, base_path):
    """ Find game's INI config file
    """

    # Start from 'user'/'game' directories or absolute path
    if base_path == 'user':
        cfg_path = os.path.join(protonprefix(), 'drive_c/users/steamuser/My Documents', cfile)
    else:
        if base_path == 'game':
            cfg_path = os.path.join(get_game_install_path(), cfile)
        else:
            cfg_path = cfile

    if os.path.exists(cfg_path) and os.access(cfg_path, os.F_OK):
        log.debug('Found INI file: ' + cfg_path)
        return cfg_path

    log.warn('INI file not found: ' + cfg_path)
    return False


def set_ini_options(ini_opts, cfile, base_path='user'):
    """ Edit game's INI config file
    """
    cfg_path = _get_ini_full_path(cfile, base_path)
    if not cfg_path:
        return False

    # Backup
    if not os.path.exists(cfg_path + '.protonfixes.bak'):
        log.info('Creating backup for INI file')
        shutil.copyfile(cfg_path, cfg_path + '.protonfixes.bak')

    conf = configparser.ConfigParser(empty_lines_in_values=True, allow_no_value=True, strict=False)
    conf.optionxform = str

    conf.read(cfg_path)

    # set options
    log.info('Addinging INI options into '+cfile+':\n'+ str(ini_opts))
    conf.read_string(ini_opts)

    with open(cfg_path, 'w') as configfile:
        conf.write(configfile)
    return True


def read_dxvk_conf(cfp):
    """ Add fake [DEFAULT] section to dxvk.conf
    """
    yield '['+ configparser.ConfigParser().default_section +']'
    yield from cfp


def set_dxvk_option(opt, val, cfile='/tmp/protonfixes_dxvk.conf'):
    """ Create custom DXVK config file

    See https://github.com/doitsujin/dxvk/wiki/Configuration for details
    """
    conf = configparser.ConfigParser()
    conf.optionxform = str
    section = conf.default_section
    dxvk_conf = os.path.join(get_game_install_path(), 'dxvk.conf')

    conf.read(cfile)

    if not conf.has_option(section, 'session') or conf.getint(section, 'session') != os.getpid():
        log.info('Creating new DXVK config')
        set_environment('DXVK_CONFIG_FILE', cfile)

        conf = configparser.ConfigParser()
        conf.optionxform = str
        conf.set(section, 'session', str(os.getpid()))

        if os.access(dxvk_conf, os.F_OK):
            conf.read_file(read_dxvk_conf(open(dxvk_conf)))
        log.debug(conf.items(section))

    # set option
    log.info('Addinging DXVK option: '+ str(opt) + ' = ' + str(val))
    conf.set(section, opt, str(val))

    with open(cfile, 'w') as configfile:
        conf.write(configfile)

def install_from_zip(url, filename, path=os.getcwd()):
    """ Install a file from a downloaded zip
    """

    if filename in os.listdir(path):
        log.info('File ' + filename + ' found in ' + path)
        return

    cache_dir = config.cache_dir
    zip_file_name = os.path.basename(url)
    zip_file_path = os.path.join(cache_dir, zip_file_name)

    if zip_file_name not in os.listdir(cache_dir):
        log.info('Downloading ' + filename + ' to ' + zip_file_path)
        urllib.request.urlretrieve(url, zip_file_path)

    with zipfile.ZipFile(zip_file_path, 'r') as zip_obj:
        log.info('Extracting ' + filename + ' to ' + path)
        zip_obj.extract(filename, path=path)
