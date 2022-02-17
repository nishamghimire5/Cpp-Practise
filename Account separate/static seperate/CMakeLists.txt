cmake_minimum_required(VERSION 3.21)
project(static_separate)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(static_separate
        main.cpp
        player.h
        player.cpp)
