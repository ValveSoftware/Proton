Proton (sniper) SDK
====================

These are the build rules that are used to create docker images to build
Proton. The automated creation of the official images lives in
<https://gitlab.steamos.cloud/proton/sniper/sdk>, but this can be
used to create local images too.


Local Changes And Testing
-------------------------

Make changes to the `.Dockerfile.in`

Just run `make proton` in this directory. To use Podman instead run `make
DOCKER=podman proton`.

This will create container image tagged both as
`registry.gitlab.steamos.cloud/proton/sniper/sdk:$SOME_VERSION-0-dev` and
`registry.gitlab.steamos.cloud/proton/sniper/sdk:latest`

Look for lines `successfully tagged` at the bottom of the output.

To use the just built container image for Proton build you can pass the following argument
to `./configure.sh` (assuming you are using the same container engine, Podman or
Docker, for both):
`--proton-sdk-image=registry.gitlab.steamos.cloud/proton/sniper/sdk:latest`


ARM64 Containers
----------------

To build:

```
make BUILD_ARCH=aarch64 proton-llvm
```

To use:

```
$PROTON_SRC/configure.sh --proton-sdk-image=registry.gitlab.steamos.cloud/proton/sniper/sdk/arm64:latest
```


Official Images
---------------

To update the official Proton SDK images:

1) Update the image build rules and the base `STEAMRT_VERSION` numbers in files
   in this directory, test locally, commit and push the changes.

2) Update `.gitlab-ci.yml` in the
   [Proton SDK](https://gitlab.steamos.cloud/proton/sniper/sdk)
   repository to point to the new commit, commit and push to trigger a
   new build of `-dev` images.

3) Once the images are satisfying, tag the version in Proton SDK
   repository and push the tag, this will trigger a new build of the
   images and version them with the same tag as the Git tag.

4) Once the images have been published, update the default `STEAMRT_IMAGE`
   version number in the top-level `Makefile.in` to use the newly built images
   by default.

Any change or addition to GPL-ed source first requires to update or add
the corresponding source to <https://repo.steampowered.com/proton-sdk>.
The `SOURCES_URLBASE` variable must be used to download the sources
from there, and its SHA256 must be added to validate the sources in the
same way the existing code does.


Technical Details
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
[Proton SDK](https://gitlab.steamos.cloud/proton/sniper/sdk).

The `build-base` images are there to create a common ground to build the
other elements of the toolchain. They are based on fairly recent (more
than what `steamrt` provides), but they are only used temporarily to
build a static version of the Binutils, MinGW and GCC binaries, which
are then copied over the `steamrt` base image.
