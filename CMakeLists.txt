cmake_minimum_required(VERSION 3.27)
project(a2)

set(CMAKE_CXX_STANDARD 17)

add_executable(a2 main.cpp
        insertion_sort.h
        merge_sort.h
        array_generator.cpp
        sort_tester.cpp
        helping_functions.h)
