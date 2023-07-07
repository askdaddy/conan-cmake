cmake_minimum_required(VERSION 3.16)
project(player)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build/lib)
add_compile_options(-fPIC)

file(GLOB_RECURSE PROJECT_SRC
        ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
        )
add_library(player STATIC ${PROJECT_SRC})