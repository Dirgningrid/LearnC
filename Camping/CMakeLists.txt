cmake_minimum_required(VERSION 3.6)
project(Camping)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES es2.c)
add_executable(Camping ${SOURCE_FILES})