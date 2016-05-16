cmake_minimum_required(VERSION 3.5)
project(LearningCLionCPP)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp my_loop.cpp my_loop.h)
add_executable(LearningCLionCPP ${SOURCE_FILES})