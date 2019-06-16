""" Run some tests and generate warnings for proton configuration issues
"""

import shutil
from .logger import log


def esync_file_limits():
    """
    Check esync file limits using /proc/sys/fs/file-max
    https://www.reddit.com/r/SteamPlay/comments/9kqisk/tip_for_those_using_proton_no_esync1/
    """

    warning = '''File descriptor limit is low
    This can cause issues with ESYNC
    For more details see:
    https://github.com/zfigura/wine/blob/esync/README.esync
    '''

    with open('/proc/sys/fs/file-max') as fsmax:
        max_files = fsmax.readline()
        if int(max_files) < 8192:
            log.warn(warning)
            return False
    return True


def check_winetricks():
    """ Check if winetricks is installed """

    warning = '''winetricks was not found in your $PATH
    Installation is recommended because many gamefixes require
    winetricks to install software and make configuration
    changes in Proton wine prefixes. To install winetricks
    use your system's package manager or use the directions here:
    https://wiki.winehq.org/Winetricks#Installing_winetricks
    '''

    if not shutil.which('winetricks'):
        log.warn(warning)
        return False
    return True


def check_zenity():
    """ Check if zenity is installed """

    warning = '''zenity was not found in your $PATH
    Installation is recommended because zenity is used to
    indicate that protonfixes is doing work while waiting
    for a game to launch. To install zenity use your system's
    package manager.
    '''

    if not shutil.which('zenity'):
        log.warn(warning)
        return False
    return True


def check_cabextract_or_bsdtar():
    """ Check if cabextract or bsdtar is installed """

    warning = '''cabextract or bsdtar were not found in your $PATH
    Installation is recommended because protonfixes uses bsdtar or
    cabextract to extract Microsoft core fonts for installation into
    Proton wine prefixes. To install cabextract or bsdtar use your
    system's package manager.
    '''

    if not shutil.which('cabextract') and not shutil.which('bsdtar'):
        log.warn(warning)
        return False
    return True

def run_checks():
    """ Run checks to notify of any potential issues
    """

    log.info('Running checks')
    checks = [
        esync_file_limits(),
        check_winetricks(),
        check_zenity(),
        check_cabextract_or_bsdtar(),
        ]
    if all(checks):
        log.info('All checks successful')
