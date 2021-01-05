cmake_minimum_required(VERSION 2.4)

set(CMAKE_CXX_FLAGS_DEBUG_INIT "-ggdb3 -O0 -Wall")
set(CMAKE_CXX_FLAGS_RELEASE_INIT "-Wall")

project(hello_world)

add_executable(app main.cpp)
