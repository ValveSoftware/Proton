# Building the symbol server

From a Proton build environment, after building Proton, run
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
