""" Game fix for Divinity Original Sin 2
"""
#pylint: disable=C0103

from protonfixes import util

def main():
    """ Launcherfix
    """

    # Fixes the startup process.
    util.replace_command('SupportTool.exe', '../DefEd/bin/EoCApp.exe')


