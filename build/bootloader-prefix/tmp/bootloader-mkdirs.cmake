# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "D:/Espressifv4.2/frameworks/esp-idf-v4.4.2/components/bootloader/subproject"
  "D:/Espressifv4.2/frameworks/DesktopMiniScreen/build/bootloader"
  "D:/Espressifv4.2/frameworks/DesktopMiniScreen/build/bootloader-prefix"
  "D:/Espressifv4.2/frameworks/DesktopMiniScreen/build/bootloader-prefix/tmp"
  "D:/Espressifv4.2/frameworks/DesktopMiniScreen/build/bootloader-prefix/src/bootloader-stamp"
  "D:/Espressifv4.2/frameworks/DesktopMiniScreen/build/bootloader-prefix/src"
  "D:/Espressifv4.2/frameworks/DesktopMiniScreen/build/bootloader-prefix/src/bootloader-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "D:/Espressifv4.2/frameworks/DesktopMiniScreen/build/bootloader-prefix/src/bootloader-stamp/${subDir}")
endforeach()
