cmake_minimum_required(VERSION 3.19)
project(Calculator)

set(CMAKE_CXX_STANDARD 17)

add_executable(Calculator main.cpp basic.cpp basic.h advanced.cpp advanced.h)