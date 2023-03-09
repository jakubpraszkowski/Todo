cmake_minimum_required(VERSION 3.24)
project(To_do)

set(CMAKE_CXX_STANDARD 23)

add_executable(To_do main.cpp Task.cpp Task.h List.cpp List.h Menu.cpp Menu.h)
