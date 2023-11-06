cmake_minimum_required(VERSION 3.25)
project(passwordGenerator)

set(CMAKE_CXX_STANDARD 23)

add_executable(passwordGenerator main.cpp RandomGenerator.cpp RandomGenerator.h)
