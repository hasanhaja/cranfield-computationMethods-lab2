cmake_minimum_required(VERSION 3.15)
project(lab2_implementation)

set(CMAKE_CXX_STANDARD 17)

add_executable(lab2_implementation src/main.cpp src/aliases.h src/utilities.h src/LinearAdvection.cpp src/LinearAdvection.h src/Solution.cpp src/Solution.h src/SchemeType.h src/Scheme.cpp src/Scheme.h src/utilities.cpp)