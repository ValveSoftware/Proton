# Building the symbol server

From a Proton build environment, run
```
make symstore-tarball
```
This will create in <BUILD>/symstore a .zip file, named after the
release being built (<BUILD_NAME>-symstore.zip).

# Requirements for symbol server

This requires mapping a directory <TOP> (and all its sub-hierarchy) at
a given URI.

There are two strong requirements:
- all files in <TOP> must be served as binary,
- the mapping of <TOP> must be case insensitive.

# Deploying a new Proton version

Get the <BUILD_NAME>-symstore.zip [[URI or process to get it]] and
extract in inside <TOP>.
```
cd <TOP> && unzip <BUILD_NAME>-symstore.zip
```
[[ Note: no check when overwritting files... this shouldn't happen as
the timestamp should diversify ]]

# Removing a Proton version

Erase <TOP> and reinstall all Proton version -symstore.tip files
except the one(s) to be removed.
