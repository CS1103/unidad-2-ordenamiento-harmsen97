cmake_minimum_required(VERSION 3.13)
project(Ordenar)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Ordenar
        main.cpp
        Sorter.cpp
        Sorter.h quickSort.h mergeSort.h auxFunctions.h)
