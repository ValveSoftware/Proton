Proton (steamrt4) SDK
=====================

Context
-------

By default Proton runs inside of the [Steam Runtime][srt] which comes with its
own set of libraries and ABI guarantees. An [SDK][srt-sdk] container which
simplifies building for that target is provided.

Proton build requires a few more things that don't quite suit a general-purpose
SDK, e.g.: a custom toolchain and tools for font processing. Because of that we
have our own downstream derivative called Proton SDK. This directory contains
Dockerfiles used to build it.

The automated building and hosting of the official, public images lives in
<https://gitlab.steamos.cloud/proton/steamrt4/sdk>.

[srt]: https://gitlab.steamos.cloud/steamrt/steamrt/-/blob/steamrt/steamrt4/README.md
[srt-sdk]: https://gitlab.steamos.cloud/steamrt/steamrt4/sdk


Local Changes And Testing
-------------------------

Make changes to the `.Dockerfile.in`

Just run `make proton` in this directory. To use Podman instead run `make
DOCKER=podman proton`.

This will create container image tagged both as
`registry.gitlab.steamos.cloud/proton/steamrt4/sdk:$SOME_VERSION-0-dev` and
`registry.gitlab.steamos.cloud/proton/steamrt4/sdk:latest`

Look for lines `successfully tagged` at the bottom of the output.

To use the just built container image for Proton build you can pass the following argument
to `./configure.sh` (assuming you are using the same container engine, Podman or
Docker, for both):
`--proton-sdk-image=registry.gitlab.steamos.cloud/proton/steamrt4/sdk:latest`


ARM64 Containers
----------------

To build:

```
make BUILD_ARCH=aarch64 proton-llvm
```

To use:

```
$PROTON_SRC/configure.sh --proton-sdk-image=registry.gitlab.steamos.cloud/proton/steamrt4/sdk/arm64-llvm:latest
```


Updating the Official Images
----------------------------

To update the official Proton SDK images:

1) Update the image build rules and the base `STEAMRT_VERSION` numbers in files
   in this directory, test locally, commit and push the changes (e.g. as a tag
   similar to `proton-sdk-4.0.20260714.251823-0`) so they reach
   <https://github.com/ValveSoftware/Proton/> repository.

2) Update `.gitlab-ci.yml` in the
   [Proton SDK](https://gitlab.steamos.cloud/proton/steamrt4/sdk)
   repository to point to the new commit, commit, and push it on a branch to
   trigger a new build of `-dev` images.

3) Once the images are satisfying, tag the version in Proton SDK
   repository and push the tag, this will trigger a new build of the
   images and version them with the same tag as the Git tag. Don't forget to
   also update the `main` branch.

4) Once the images have been published, update the default `STEAMRT_IMAGE`
   version number in the top-level `Makefile.in` to use the newly built images
   by default.

Any change or addition to GPL-ed source first requires to update or add
the corresponding source to <https://repo.steampowered.com/proton-sdk>.
The `SOURCES_URLBASE` variable must be used to download the sources
from there, and its SHA256 must be added to validate the sources in the
same way the existing code does.


Adding Libraries to the Steam Runtime
-------------------------------------

Adding a new library just to the SDK is not enough if Proton is going to use
when running. Such libraries need to be added to the Steam Runtime itself.

To do so please contact Steam Runtime maintainers and carefully explain what is
needed (e.g. libXYZ in both 32bit and 64bit variants) and why. It's a
collaborative process and it may turn out that it is better to included the
given library in our tree instead.

After that's done we need to update our Proton SDK to ensure that required
development packages (e.g. `$PKG-dev` including all the headers) are present for
the compilation-time in the SDK. This can be accomplished either via inclusion
in the upstream Steam Runtime SDK and bumping the Proton SDK or via direct
installation in our own Dockerfiles.


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
[Proton SDK](https://gitlab.steamos.cloud/proton/steamrt4/sdk).
