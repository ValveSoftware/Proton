Proton (soldier) SDK
====================

These are the build rules that are used to create docker images to build
Proton. The automated creation of the official images lives in
<https://gitlab.steamos.cloud/proton/soldier/sdk>, but this can be
used to create local images too.

Local usage
-----------

The `protonsdk_version` make variable will override which image is used
to build Proton, but may not trigger a full rebuild, so building from
scratch may be necessary.

Building Proton with a locally build docker image, instead of using the
official images, can be done by using `protonsdk_version=local`. This
may be used for instance to test changes to the docker image recipes.

Or, it is also possible to build the docker images first by invoking
`make protonsdk` and it will tag the images with the `protonsdk_version`
variable value.

Official images
---------------

To update the official Proton SDK images:

1) Update the image build rules, `STEAMRT_VERSION` and
   `PROTONSDK_VERSION` version numbers in this folder, test locally,
   commit and push the changes.

2) Update `.gitlab-ci.yml` in the
   [Proton SDK](https://gitlab.steamos.cloud/proton/soldier/sdk)
   repository to point to the new commit, commit and push to trigger a
   new build of "-dev" images.

3) Once the images are satifying, tag the version in Proton SDK
   repository and push the tag, this will trigger a new build of the
   images and version them with the same tag as the Git tag.

4) Once the images have been published, update the default
   `arg_protonsdk_image` version number in `configure.sh` to use the
   newly built images by default.

Any change or addition to GPL-ed source first requires to update or add
the corresponding source to <https://repo.steampowered.com/proton-sdk>.
The `SOURCES_URLBASE` variable must be used to download the sources
from there, and its sha256 must be added to validate the sources in the
same way the existing code does.

Technical details
-----------------

The images are built incrementally, with intermediate images created
for each component of the toolchain, then assembled together in a single
`proton` image.

The reason behind this is to optimize the use of docker cache, so that
components that didn't change do not require to be rebuilt every time,
saving a lot of time in the build process, when only small additions are
made.

It also lets us build several components of the toolchain separately,
in parallel. This is especially the case when building the images on
the <https://gitlab.steamos.cloud> CI.

Because the `ARG` parameter in Dockerfile doesn't behave nicely with
docker caches it is avoided, and `Dockerfile.in` are used with variable
replacements done using `sed`.

The <https://gitlab.steamos.cloud> CI uses Kaniko instead of Docker,
with a bit of script conversion to generate commands usable there. More
details are available in
[Proton SDK](https://gitlab.steamos.cloud/proton/soldier/sdk).

The `build-base` images are there to create a common ground to build the
other elements of the toolchain. They are based on fairly recent (more
than what `steamrt` provides), but they are only used temporarily to
build a static version of the Binutils, MinGW and GCC binaries, which
are then copied over the `steamrt` base image.
