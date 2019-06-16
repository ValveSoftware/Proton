""" Game fix for Divinity Original Sin 2
"""
#pylint: disable=C0103

from protonfixes import util
from protonfixes import splash
import os
import shutil
import subprocess


def main():
    """ Launcherfix
    """

    installpath = os.path.abspath(os.path.join(os.getcwd(), os.pardir))
    oldbin = os.getcwd()
    oldbinbak = os.path.join(os.path.abspath(installpath), 'bin.bak')
    newbin = os.path.join(os.path.abspath(installpath), 'DefEd', 'bin')

    if not os.path.isfile(os.path.join(os.path.abspath(installpath), 'bin', 'EoCApp.exe')):
        shutil.move(oldbin, oldbinbak)
        subprocess.call(['ln', '-s', newbin, oldbin])
        zenity_bin = splash.sys_zenity_path()
        if not zenity_bin:
            return
        zenity_cmd = ' '.join([zenity_bin, '--info','--text', '"Steam Play symlinks for Divinity: Original Sin 2 have been set. On first launch the game will black screen. Please force it to close then press PLAY again."', '--no-wrap'])
        zenity = subprocess.Popen(zenity_cmd, shell=True)

    util.replace_command('SupportTool.exe', 'EoCApp.exe')




