cmake_minimum_required(VERSION 3.21)
project(Account_separate)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Account_separate
        account.cpp
        account.h
        main.cpp)
