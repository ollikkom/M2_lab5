cmake_minimum_required(VERSION 3.6)
project(M2_lab5)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp RAII.h TNotCopyable.h)
add_executable(M2_lab5 ${SOURCE_FILES})