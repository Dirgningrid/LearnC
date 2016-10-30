cmake_minimum_required(VERSION 3.6)
project(esercizi26102016)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES es1.c)
add_executable(esercizi26102016 ${SOURCE_FILES} es3.c)