cmake_minimum_required(VERSION 3.25)
project(passwordGenerator)

set(CMAKE_CXX_STANDARD 23)

find_package(wxWidgets REQUIRED COMPONENTS net core base)
include(${wxWidgets_USE_FILE})

add_executable(passwordGenerator main.cpp RandomGenerator.cpp RandomGenerator.h UserInterface.cpp UserInterface.h)
target_link_libraries(passwordGenerator ${wxWidgets_LIBRARIES})