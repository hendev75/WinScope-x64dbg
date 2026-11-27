# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file LICENSE.rst or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 4.3.1-msvc1)

# Reject any attempt to use a toolchain file. We must not use one because
# we could be downloading it here. If the CMAKE_TOOLCHAIN_FILE environment
# variable is set, the cache variable will have been initialized from it.
unset(CMAKE_TOOLCHAIN_FILE CACHE)
unset(ENV{CMAKE_TOOLCHAIN_FILE})

# We name the project and the target for the ExternalProject_Add() call
# to something that will highlight to the user what we are working on if
# something goes wrong and an error message is produced.

project(qt5-populate NONE)



include(ExternalProject)
ExternalProject_Add(qt5-populate
                     "UPDATE_DISCONNECTED" "False" "DOWNLOAD_EXTRACT_TIMESTAMP" "FALSE" "EXTERNALPROJECT_INTERNAL_ARGUMENT_SEPARATOR" "URL" "https://github.com/x64dbg/deps/releases/download/2025.07.02/qt5.12.12-msvc2017_64.7z" "URL_HASH" "SHA256=770490bf09514982c8192ebde9a1fac8821108ba42b021f167bac54e85ada48a"
                    SOURCE_DIR          "C:/Users/fam60/Desktop/x64dbg-2026.05.27/build/_deps/qt5-src"
                    BINARY_DIR          "C:/Users/fam60/Desktop/x64dbg-2026.05.27/build/_deps/qt5-build"
                    CONFIGURE_COMMAND   ""
                    BUILD_COMMAND       ""
                    INSTALL_COMMAND     ""
                    TEST_COMMAND        ""
                    USES_TERMINAL_DOWNLOAD  YES
                    USES_TERMINAL_UPDATE    YES
                    USES_TERMINAL_PATCH     YES
)


