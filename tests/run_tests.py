#!/usr/bin/env python3
import os
import sys
import unittest

SRCDIR = os.path.abspath(os.path.join(os.path.dirname(__file__), ".."))
if SRCDIR not in sys.path:
    sys.path.insert(0, SRCDIR)

def main():
    loader = unittest.TestLoader()
    suite = loader.discover(start_dir=os.path.dirname(__file__), pattern="test_*.py")
    runner = unittest.TextTestRunner(verbosity=2)
    result = runner.run(suite)
    sys.exit(not result.wasSuccessful())

if __name__ == "__main__":
    main()
