cmake_minimum_required(VERSION 3.16)
set(CMAKE_TOOLCHAIN_FILE cmake-conan/conan_toolchain.cmake)
project(conan_cmake)

set(CMAKE_CXX_STANDARD 17)

include_directories(${CMAKE_INCLUDE_PATH})

add_subdirectory(player build/player.out)
add_subdirectory(main build/main.out)


