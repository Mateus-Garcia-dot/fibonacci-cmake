cmake_minimum_required(VERSION 3.0)
project(fibbonatti)
add_executable(fibbonatti index.c)
add_subdirectory(linkedList)
target_include_directories(fibbonatti PRIVATE linkedList/)
target_link_libraries(fibbonatti function)
set(CMAKE_BUILD_TYPE Debug)
