cmake_minimum_required(VERSION 3.16)
project(main)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build/bin)


add_compile_options(-fPIC)

include_directories(../player)

add_executable(main main.cpp)
target_link_libraries(main player)