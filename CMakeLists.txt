cmake_minimum_required(VERSION 3.19)
project(Calculator)

set(CMAKE_CXX_STANDARD 17)

add_executable(Calculator C++/main.cpp C++/basic.cpp C++/basic.h C++/advanced.cpp C++/advanced.h)