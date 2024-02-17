cmake_minimum_required(VERSION 3.25)
project(PersonClassExample)

set(CMAKE_CXX_STANDARD 17)

add_executable(PersonClassExample main.cpp Person.cpp Person.h)
